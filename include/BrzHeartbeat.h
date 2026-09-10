#pragma once
// ============================================================================
// BrzHeartbeat.h  -  Batimento cardiaco compartilhado entre os plugins BRZ e o
// plugin Guardian (Camada 2 do sistema de deteccao).
//
// IDEIA: cada plugin marca, num bloco de MEMORIA COMPARTILHADA (named mapping,
// visivel entre todas as DLLs do mesmo processo), ONDE ele esta executando agora
// (arquivo:linha:label) e um "batimento" (timestamp + contador). Quando o GAME
// THREAD trava dentro de um plugin, o batimento daquele slot PARA de avancar.
// O Guardian roda um watchdog numa thread SEPARADA (que nao congela com o jogo),
// le os slots, e quando acha um escopo ativo com batimento velho -> sabe EXATAMENTE
// qual plugin / qual operacao / qual linha travou, e escreve o laudo.
//
// USO no plugin:
//   #include "BrzHeartbeat.h"
//   ... no Plugin_Init():           BRZ_INIT("Ambush");
//   ... no topo de cada callback:   BRZ_SCOPE("Ambush::OnTick");        // RAII (entra/sai)
//   ... no meio de trechos pesados: BRZ_CHECK("antes do loop de base"); // marca progresso
//
// Tudo aqui e ultra-leve, noexcept, sem alocacao, e seguro de chamar a qualquer
// hora. Se a memoria compartilhada nao mapear, as macros viram no-op (nunca quebra
// o plugin host).
// ============================================================================
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <intrin.h>
#include <cstring>

namespace brz {

inline const char* kShmName  = "Local\\BrzGuardianHeartbeat_v1";
inline constexpr long kMagic = 0x42525A02;   // "BRZ" v2
inline constexpr int  kMaxSlots = 64;

struct Slot {
    volatile long      used;        // 1 = slot ocupado por um plugin
    char               plugin[32];  // nome do plugin
    volatile long      active;      // 1 = dentro de um escopo agora (game thread la dentro)
    char               label[96];   // rotulo da operacao atual
    char               file[160];   // __FILE__ do ponto atual
    volatile int       line;        // __LINE__ do ponto atual
    volatile long long start_ms;    // inicio do escopo (innermost) atual
    volatile long long beat_ms;     // ultimo batimento (BRZ_SCOPE/BRZ_CHECK)
    volatile long long seq;         // contador de progresso (sempre sobe)
    volatile unsigned long tid;     // thread id que entrou no escopo
};

struct Shared {
    volatile long magic;
    Slot slots[kMaxSlots];
};

inline long long now_ms() {
    FILETIME ft; GetSystemTimeAsFileTime(&ft);
    unsigned long long t = ((unsigned long long)ft.dwHighDateTime << 32) | ft.dwLowDateTime;
    return (long long)(t / 10000ULL);   // 100ns -> ms (epoch 1601, mas so usamos diferencas)
}

// Mapeia (cria na 1a vez) o bloco compartilhado. Cache por-DLL.
inline Shared* shared() {
    static Shared* g = nullptr;
    static bool tried = false;
    if (g || tried) return g;
    tried = true;
    HANDLE h = CreateFileMappingA(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE,
                                  0, sizeof(Shared), kShmName);
    if (!h) return nullptr;
    bool existed = (GetLastError() == ERROR_ALREADY_EXISTS);
    Shared* p = (Shared*)MapViewOfFile(h, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(Shared));
    if (!p) return nullptr;
    if (!existed) { std::memset(p, 0, sizeof(Shared)); p->magic = kMagic; }
    g = p;
    return g;
}

inline void copy_str(volatile char* dst, const char* src, size_t cap) {
    if (!src) { dst[0] = 0; return; }
    size_t i = 0;
    for (; i + 1 < cap && src[i]; ++i) dst[i] = src[i];
    dst[i] = 0;
}

// Reserva (ou reaproveita, em reload) um slot para o plugin.
inline Slot* claim(const char* plugin) {
    Shared* s = shared();
    if (!s) return nullptr;
    for (int i = 0; i < kMaxSlots; ++i)
        if (s->slots[i].used && std::strncmp((const char*)s->slots[i].plugin, plugin, 31) == 0)
            return &s->slots[i];
    for (int i = 0; i < kMaxSlots; ++i) {
        if (_InterlockedCompareExchange(&s->slots[i].used, 1, 0) == 0) {
            Slot* sl = &s->slots[i];
            copy_str(sl->plugin, plugin, sizeof(sl->plugin));
            sl->active = 0; sl->seq = 0; sl->line = 0; sl->start_ms = 0;
            sl->beat_ms = now_ms(); sl->label[0] = 0; sl->file[0] = 0;
            return sl;
        }
    }
    return nullptr;   // sem slot livre (improvavel com 64)
}

// Slot do plugin atual (global por-DLL: cada DLL chama BRZ_INIT uma vez).
inline Slot*& self() { static Slot* s = nullptr; return s; }

inline void beat(Slot* sl, const char* label, const char* file, int line, bool entering) {
    if (!sl) return;
    long long t = now_ms();
    copy_str(sl->label, label, sizeof(sl->label));
    copy_str(sl->file, file, sizeof(sl->file));
    sl->line = line;
    sl->beat_ms = t;
    sl->seq = sl->seq + 1;
    if (entering) { sl->start_ms = t; sl->tid = GetCurrentThreadId(); sl->active = 1; }
}

// RAII: salva o escopo externo e restaura na saida (suporta aninhamento).
struct ScopeGuard {
    Slot* sl;
    char  p_label[96]; char p_file[160]; int p_line; long long p_start; long p_active;
    ScopeGuard(const char* label, const char* file, int line) : sl(self()) {
        if (sl) {
            copy_str((volatile char*)p_label, (const char*)sl->label, sizeof(p_label));
            copy_str((volatile char*)p_file, (const char*)sl->file, sizeof(p_file));
            p_line = sl->line; p_start = sl->start_ms; p_active = sl->active;
            beat(sl, label, file, line, true);
        }
    }
    ~ScopeGuard() {
        if (sl) {
            copy_str(sl->label, p_label, sizeof(sl->label));
            copy_str(sl->file, p_file, sizeof(sl->file));
            sl->line = p_line; sl->start_ms = p_start; sl->beat_ms = now_ms();
            sl->active = p_active; sl->seq = sl->seq + 1;
        }
    }
};

} // namespace brz

#define BRZ_INIT(name)      do { ::brz::self() = ::brz::claim(name); } while (0)
#define BRZ_CONCAT2(a,b)    a##b
#define BRZ_CONCAT(a,b)     BRZ_CONCAT2(a,b)
#define BRZ_SCOPE(label)    ::brz::ScopeGuard BRZ_CONCAT(_brz_sg_, __LINE__)(label, __FILE__, __LINE__)
#define BRZ_CHECK(label)    ::brz::beat(::brz::self(), label, __FILE__, __LINE__, false)
