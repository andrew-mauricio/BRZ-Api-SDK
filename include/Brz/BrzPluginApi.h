// ============================================================================
//  BrzPluginApi.h — THE TABLE. This is what a plugin receives, and all it
//  receives.
//
//  BRZ Api for ARK: Survival Ascended
//  MIT — Copyright (c) 2026 andrew-mauricio. See LICENSE.
//
//  ┌──────────────────────────────────────────────────────────────────────┐
//  │  This file is SELF-CONTAINED. Include nothing else of ours.          │
//  │  There is no library to link and no .cpp of ours to compile.         │
//  └──────────────────────────────────────────────────────────────────────┘
//
//  ────────────────────────────────────────────────────────────────────────────
//  A NOTE ON IDENTIFIER NAMES
//  ────────────────────────────────────────────────────────────────────────────
//  The identifiers in this table are Portuguese (BrzPluginCarregar,
//  LerTextoDoJogo, BRZ_CANCELAR). They are part of the published ABI, and
//  renaming them would break every plugin already compiled against it.
//
//  All documentation is in English, and every field below is commented. Rough
//  guide: "Ler" = read, "Escrever" = write, "Chamar" = call, "Carregar" = load,
//  "Nome" = name, "Caminho" = path, "Jogo" = game, "Jogador" = player,
//  "Tarefa" = task, "Mundo" = world, "Acessar/Achar" = find.
//
//  ────────────────────────────────────────────────────────────────────────────
//  HOW IT WORKS
//  ────────────────────────────────────────────────────────────────────────────
//  The loader enters the dedicated server process, brings reflection up, and
//  calls your plugin passing a pointer to a table of functions:
//
//      static const BrzApiTabela* g_api = 0;
//
//      extern "C" BrzAcao AoFalar(BrzChamada* c)
//      {
//          return BRZ_CONTINUAR;
//      }
//
//      extern "C" __declspec(dllexport)
//      void BrzPluginCarregar(const BrzApiTabela* api)
//      {
//          if (!api || api->tamanho < sizeof(BrzApiTabela)) return;
//          g_api = api;
//          g_api->Log("my plugin is up");
//          g_api->HookProcessEvent("ServerChatMessage", AoFalar, 0, 100);
//      }
//
//  You call everything through `api->`. There is no implementation of ours
//  inside your binary.
//
//  ────────────────────────────────────────────────────────────────────────────
//  WHY THIS WAY, AND NOT BY COMPILING OUR SOURCE ALONGSIDE YOURS
//  ────────────────────────────────────────────────────────────────────────────
//  Three reasons, and all three matter to YOU, not just to us:
//
//  1. YOUR COMPILER NO LONGER MATTERS. This is plain C: a `struct` of function
//     pointers. Any Visual Studio version, MinGW, clang — they all agree on
//     that. The previous API had to ship C++ source and headers, because a C++
//     library does not cross compilers: the layout of `std::string`, of
//     `std::function` and of vtables differs between MSVC and MinGW, and even
//     between MSVC versions. It linked, it ran, and it corrupted memory with no
//     readable error. That problem does not exist here.
//
//     This is why our loader can be built with MinGW while your plugin is built
//     with Visual Studio, and neither has to know about the other.
//
//  2. UPDATING THE API DOES NOT FORCE YOU TO RECOMPILE. As long as new fields
//     are appended **at the end** of the table and `versao` increments, a plugin
//     compiled today keeps working tomorrow. When the game updates and every
//     offset moves, WE re-resolve them — your binary does not change.
//
//     This is the single biggest difference from the old way. Under the previous
//     API the symbol string was baked INTO the plugin at compile time, so a game
//     update meant rebuilding all 20 plugins. Here the resolution lives on our
//     side of the table.
//
//  3. THE ENGINE STAYS ON ONE SIDE. The offset cache, the hook table, this
//     build's addresses — none of it enters your binary. Less of your code to go
//     wrong, and we can fix an engine defect without asking every plugin to be
//     rebuilt.
//
//  ────────────────────────────────────────────────────────────────────────────
//  COMPATIBILITY: ALWAYS CHECK `versao` AND `tamanho`
//  ────────────────────────────────────────────────────────────────────────────
//  A plugin compiled against a LARGER table, running on an older API, would
//  read a pointer past the end of the struct — and call garbage. Hence:
//
//      if (!api || api->tamanho < sizeof(BrzApiTabela)) {
//          // API older than this plugin. Use only what exists, or bail out.
//      }
//
//  We never remove or reorder a field. We only append.
//
//  ────────────────────────────────────────────────────────────────────────────
//  WHAT THIS API WILL NOT DO, ON PURPOSE
//  ────────────────────────────────────────────────────────────────────────────
//  It does not unload or reload a plugin that is already running. A plugin in
//  use has hooks armed, tasks scheduled and possibly its own thread, all
//  pointing into its DLL. Freeing that code makes the game jump into unmapped
//  memory LATER, far from the cause, and the log will not point back here.
//
//  Installing a NEW plugin without restarting is supported — that is the case
//  server owners actually need. Replacing an existing one requires a restart.
//
//  ────────────────────────────────────────────────────────────────────────────
//  AND IT DOES NOT VALIDATE A POINTER YOU HAND IT. READ THIS ONE.
//  ────────────────────────────────────────────────────────────────────────────
//  Pass NULL and the API refuses, quietly and by design. Every entry point
//  checks, the log names the function, nothing happens. That is cheap.
//
//  Pass a pointer that is not null but no longer VALID — an actor the game
//  destroyed, a player who logged off, an item that was consumed — and the API
//  cannot tell. Asking the operating system whether an address is still mapped
//  is a system call, and fifty-two of these entries take a string. One of them,
//  `OffsetDoMembro`, runs inside loops over 1.8 million objects. Putting a
//  syscall there would cost more than the bug it prevents.
//
//  Caching which pages are valid would fix the cost and break the meaning: a
//  page can be freed between the check and the use, and this project has
//  already taken a server down that exact way.
//
//  So the honest statement is:
//
//      · NULL          -> refused, logged, harmless.
//      · stale/invalid -> your plugin faults. The fault is CONTAINED, your
//                         plugin is taken out of circulation, and the server
//                         stays up — but your plugin is done until restart.
//
//  Which means the rule is yours to keep: do not store a pointer to a game
//  object across ticks. Look it up when you need it. The API gives you
//  `AcharObjeto`, `AcharJogadorPorEOSID` and friends precisely so you never
//  have to hold one.
//
//  This is proven, not asserted: `TocaTudo` calls all 111 entries with a stale
//  pointer on every harness run, and the harness REQUIRES the fault, the
//  containment, and the plugin leaving circulation. A quarantine is only worth
//  something on the day something crashes; that test is how we know it works
//  before that day.
// ============================================================================
#ifndef BRZ_PLUGIN_API_H
#define BRZ_PLUGIN_API_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// The version increments when fields are APPENDED. Never when something moves
// — that does not happen.
//
// It also increments when a STRUCT the callbacks receive grows, and version 15
// is that case: `BrzChamada` gained `Cancelada` at its end. Appending is safe in
// one direction only — an old plugin under a new engine simply never reads the
// field. The dangerous direction is the other one: a plugin built against this
// header, reading `Cancelada` under an engine that never writes it, would read
// leftover stack. Declaring MinApiVersion 15 is what refuses that pairing.
#define BRZ_API_VERSAO 29

// ── what a hook receives ────────────────────────────────────────────────────
//
// `Parms` is the intercepted function's parameter block, in the layout
// reflection describes. `Obj` is the object that owns the call.
typedef struct BrzChamada
{
    void*    Obj;         // the UObject that received the call
    void*    Func;        // the UFunction
    void*    Parms;       // parameter block (may be NULL)
    uint32_t ParmsSize;   // block size, in bytes
    // The function's FName, ALREADY RESOLVED. Comparing two int32s is the O(1)
    // test that lets a wildcard hook separate "the name I want" from noise
    // without decoding text thousands of times per second.
    int32_t  NomeIndice;  // FName.ComparisonIndex
    int32_t  NomeNumero;  // FName.Number  (Foo_1 is Number=2)

    // ── ONLY MEANINGFUL IN A `depois` CALLBACK ──────────────────────────────
    //
    //  1 when an earlier `antes` returned BRZ_CANCELAR, so the game function
    //  NEVER RAN. 0 when it ran normally.
    //
    //  Read this before you touch `Parms`. On a cancelled call the block still
    //  holds the arguments, but the RETURN VALUE was never written — whatever is
    //  in that slot is leftover stack. A `depois` that reads a return value
    //  without checking this reads garbage and reports it as a result.
    //
    //  Your `depois` still runs on a cancelled call, deliberately. Plugins pair
    //  `antes` and `depois` to set something up and tear it down, and skipping
    //  the teardown because another plugin cancelled would leak that setup —
    //  silently, in a plugin that did nothing wrong.
    //
    //  So both cases are served: run your teardown unconditionally, and guard
    //  anything that reads a result with `if (!c->Cancelada)`.
    //
    //  Appended at the END of the struct, so a plugin built against an older
    //  header keeps working — it simply never reads the field.
    int32_t  Cancelada;
} BrzChamada;

// What your callback returns.
typedef enum BrzAcao
{
    BRZ_CONTINUAR = 0,   // let the original function run
    BRZ_CANCELAR  = 1    // swallow the call: the game does not execute it
} BrzAcao;

typedef BrzAcao (*BrzFnAntes)(BrzChamada* c);
typedef void    (*BrzFnDepois)(BrzChamada* c);
typedef void    (*BrzFnTarefa)(void* contexto);

// ── the answer to an HTTP request ───────────────────────────────────────────
//
//  `ok` is 1 when the request completed — including a 404, which is an answer,
//  not a failure. `codigo` is the HTTP status. `corpo` is valid only for the
//  duration of this call; copy what you need.
//
//  It runs on the GAME THREAD, always. The request itself runs on a thread of
//  its own — it has to, or the server freezes waiting on the network — but a
//  callback from there into your plugin would let you touch game state from a
//  thread the engine assumes is single-owner, and the crash from that lands
//  somewhere else entirely.
typedef void    (*BrzFnResposta)(int ok, int codigo, const char* corpo,
                                 int tamCorpo, void* contexto);

// Console / RCON / chat command callbacks. Note that NOTHING here is a C++
// type: a command handler receives plain pointers and C strings, so the same
// handler compiles under MSVC and MinGW alike.
typedef void (*BrzFnComandoConsole)(void* playerController, const char* linha);
typedef void (*BrzFnComandoRcon)(void* conexao, const char* linha, char* resposta, int tamResposta);
// Return 1 to SWALLOW the chat message (the other players never see it).
typedef int  (*BrzFnComandoChat)(void* playerController, const char* linha);

// ── EVERY chat message, not just a trigger ──────────────────────────────────
//
//  `AdicionarComandoChat` answers one trigger — `/casa`, `/viajar`. This one
//  sees all of it: profanity filters, anti-spam, logging, cross-map chat.
//
//  It runs BEFORE the triggers, so a filter gets the message before it becomes
//  someone else's command. Return 1 to swallow it — the other players never see
//  it, and no trigger runs either.
//
//  `modo` is the game's own EChatSendMode.
typedef int  (*BrzFnChatBruto)(void* playerController, const char* texto, int modo);
typedef void (*BrzFnTick)(float deltaSegundos);
typedef void (*BrzFnTimer)(void);

// Um jogador entrou ou saiu. `eosId` é a identidade estável — o ponteiro do
// controlador NÃO é: ele some quando o jogador sai, e guardá-lo entre chamadas
// é a armadilha descrita em `Legivel`.
//
// No caso de SAÍDA, `playerController` já pode estar inválido. Use o `eosId`.
typedef void (*BrzFnJogador)(void* playerController, const char* eosId);

// ── why a hook may be REFUSED ───────────────────────────────────────────────
//
// A refusal is not a bug on our side: it is the API declining to do something
// that would corrupt the server. The reason is always written to the log.
typedef enum BrzRecusa
{
    BRZ_OK = 0,
    BRZ_RECUSA_ENDERECO_INVALIDO,
    BRZ_RECUSA_BYTES_INESPERADOS,
    BRZ_RECUSA_SEM_JANELA_ATOMICA,
    BRZ_RECUSA_INSTRUCAO_DESCONHECIDA,
    BRZ_RECUSA_SALTO_CAI_NO_PATCH,
    BRZ_RECUSA_FORA_DA_PDATA,
    BRZ_RECUSA_JA_HOOKADA,
    BRZ_RECUSA_SEM_ARENA,
    BRZ_RECUSA_API_NAO_PRONTA,
    BRZ_RECUSA_SIMBOLO_AUSENTE    // the offset does not exist in THIS build
} BrzRecusa;

// ── reading a parameter or a return value ───────────────────────────────────
typedef enum BrzTipoSaida
{
    BRZ_SAIDA_POD = 0,    // copy the slot's bytes
    BRZ_SAIDA_TEXTO,      // FString: DECODES it. Copying the 16 bytes would
                          // hand the plugin a pointer that ProcessEvent
                          // destroys on return.
    BRZ_SAIDA_TEXTO_RICO, // FText, for the same reason
    BRZ_SAIDA_LISTA       // TArray: copies the ELEMENTS, never the header
} BrzTipoSaida;

// One argument of a call made through `ChamarFuncao`. Plain bytes and a size:
// the API copies them into the parameter block at the offset reflection gives
// for that argument, so the plugin never needs to know the layout.
//
// `saida` is for OUT parameters — the ones the game fills in for you. Set it to
// a buffer and the API copies the parameter back after the call. Many useful
// functions work this way (`GetItemBytes` hands you the item's bytes through
// one), and without this there would be no way to read the answer.
//
// A NOTE ON WHY IT IS A SEPARATE FIELD, and not "write into `valor`": `valor`
// is `const`, and it usually points at a local the caller does not expect to be
// modified. Writing through it would work most of the time and corrupt
// something the day someone passes a literal.
typedef struct BrzArgumento
{
    const void* valor;     // what goes IN (may be NULL for a pure out param)
    unsigned    tamanho;   // how many bytes of `valor`
    void*       saida;     // where to copy the parameter back AFTER the call
    unsigned    tamSaida;  // capacity of `saida`
} BrzArgumento;

// A 3D position. Plain floats: this crosses the C boundary safely, whereas the
// game's FVector does not (it is a C++ type whose layout we do not publish).
typedef struct BrzPosicao { float x, y, z; } BrzPosicao;

// One field of a UE object, as `CamposDoObjeto` reports it.
//
//  `tamanho` is ElementSize x ArrayDim — the whole field, array included, which
//  is what you need before writing into one. `classe` is which class in the
//  inheritance chain declared it: without that you cannot tell a field of the
//  dino from a field of `AActor`, and that is half of what you were asking.
typedef struct BrzCampo
{
    uint32_t offset;
    uint32_t tamanho;      // ElementSize x ArrayDim, in bytes
    uint64_t bandeiras;    // UE PropertyFlags
    char     nome[128];
    char     tipo[64];     // "IntProperty", "BoolProperty", "ObjectProperty"...
    char     classe[128];  // which class in the chain declares it
} BrzCampo;

// ============================================================================
//  THE TABLE
//
//  Order NEVER changes. New fields go at the end, and `versao` increments.
// ============================================================================
// ── UMA REFERENCIA A OBJETO QUE SOBREVIVE ENTRE CHAMADAS ───────────────────
//
//  Um ponteiro de UObject guardado de uma chamada para outra e' um endereco que
//  o coletor do jogo pode ter reaproveitado. `BrzRef` guarda tambem ONDE o
//  objeto estava no vetor da engine, e e' isso que permite conferir depois.
//
//  Trate como opaco: os campos existem porque a fronteira e C, nao porque voce
//  deva le-los. `indice < 0` e' uma referencia vazia.
typedef struct BrzRef
{
    int   indice;      // posicao no vetor de objetos da engine, ou -1
    void* obj;         // o endereco de quando foi guardado
} BrzRef;

typedef struct BrzApiTabela
{
    // ── header: check this before using the rest ────────────────────────────
    uint32_t versao;    // BRZ_API_VERSAO of whoever filled the table
    uint32_t tamanho;   // sizeof(BrzApiTabela) of whoever filled the table

    // ────────────────────────────────────────────────────────────────────────
    //  DIAGNOSTICS
    // ────────────────────────────────────────────────────────────────────────
    //
    // Writes to Brz-Api/Logs/BrzApi.log, timestamped and rotated. This is your
    // channel to the SERVER OWNER: what they read when something went wrong,
    // hours later. To talk to a PLAYER, use the message functions below.
    void (*Log)(const char* fmt, ...);

    // Is the engine up? If this returns 0, the game most likely updated and the
    // API refused to work with offsets that do not check out. Do not insist.
    int (*Pronta)(void);

    // ────────────────────────────────────────────────────────────────────────
    //  MEMORY — read this before touching anything
    // ────────────────────────────────────────────────────────────────────────
    //
    // Says whether [p, p+tam) is MAPPED and readable.
    //
    // WHAT IT DOES NOT ANSWER, AND THAT MATTERS A LOT:
    //
    // `Legivel` answers "this memory is mapped", NOT "this object is alive".
    // The difference crashes servers, and it is the easiest trap in this API:
    //
    //   · you keep a UObject pointer between one hook and the next;
    //   · the game's garbage collector destroys the object and reuses the
    //     address;
    //   · `Legivel` still returns 1, because the page is still mapped;
    //   · you read fields of an object that became something else.
    //
    // DO NOT keep game object pointers between calls. Fetch them again inside
    // each hook (`c->Obj`) or via AcharObjeto at the moment of use.
    int (*Legivel)(const void* p, size_t tam);

    int (*LerMembro)(void* obj, uint32_t offset, void* saida, uint32_t tam);
    int (*EscreverMembro)(void* obj, uint32_t offset, const void* valor, uint32_t tam);
    // Reads one BIT, and it answers THREE things, not two:
    //
    //     1   the bit is set
    //     0   the bit is clear
    //    -1   THE READ FAILED — the object is gone, the page is not mapped,
    //         the offset is wrong
    //
    // Write `LerBit(...) > 0`, never `if (LerBit(...))`. In C, `-1` is true —
    // so the plain test reads "I could not read it" as "the bit is set", and
    // that is the direction that hurts: a plugin that checks `bIsTamed` this way
    // treats a failed read as "tamed", or worse, the reverse.
    //
    // This paragraph exists because the API had the -1 and the header did not
    // say so, and two of our own plugins carried a comment claiming the
    // opposite. Four of five call sites happened to be right; one was right by
    // accident.
    int (*LerBit)(void* obj, uint32_t offset, uint8_t mascara);
    int (*EscreverBit)(void* obj, uint32_t offset, uint8_t mascara, int valor);

    // ────────────────────────────────────────────────────────────────────────
    //  REFLECTION — finding things by name, not by address
    // ────────────────────────────────────────────────────────────────────────
    void* (*AcharClasse)(const char* nome);
    void* (*AcharObjeto)(const char* nome);
    void* (*ObjetoPadrao)(const char* nomeClasse);   // the CDO: the mould, not an instance
    int   (*DescendeDe)(void* obj, const char* nomeClasse);
    const char* (*NomeDoObjeto)(void* obj, char* saida, int tam);
    const char* (*NomeCompletoDoObjeto)(void* obj, char* saida, int tam);
    int   (*NumeroDeObjetos)(void);

    // Walks the engine's object array by index. 1.8 million entries on a loaded
    // map, so this is a sweep — not a lookup.
    //
    // WHAT IT DOES NOT DO, AND WHY:
    //
    // The engine's `FUObjectItem` carries a `Flags` field that marks a slot as
    // unreachable or awaiting destruction. This does NOT filter on it, and the
    // reason is that we could not establish which bit means what **in this
    // build**. `EInternalObjectFlags` is not in the dump, not in the community
    // SDK, and its values moved between UE5 versions.
    //
    // Guessing the bit is exactly the class of mistake this API spent a day
    // removing: a number written from memory that reads plausible and is wrong.
    // A filter built on the wrong bit would hide live objects — worse than no
    // filter, and silent.
    //
    // So the honest statement is: an object handed back here is a pointer the
    // engine still has in its array. It is not a promise that the object is
    // alive. If you are going to act on a swept object — call a function on it,
    // write to it — check something specific about it first (its class, a field
    // you expect), rather than trusting the sweep.
    void* (*ObjetoPorIndice)(int indice);
    int   (*NomeDeFName)(int32_t indice, char* saida, int tam);
    int32_t (*OffsetDoMembro)(void* objeto, const char* nome);
    int   (*NomeDoMembro)(void* objeto, uint32_t offset, char* saida, int tam);
    int   (*EhReplicado)(void* objeto, uint32_t offset);

    // ────────────────────────────────────────────────────────────────────────
    //  GAME TEXT — FString and FText never cross this boundary raw
    // ────────────────────────────────────────────────────────────────────────
    int (*LerTextoDoJogo)(const void* base, uint32_t offset, char* saida, int tam);
    // Both text builders take the SIZE of your buffer, and refuse when it is
    // too small.
    //
    // This is not ceremony. The old contract said "16 bytes" in a comment, and
    // a comment cannot stop a plugin from passing 16 where 32 are written —
    // that is a stack smashed inside the PLUGIN, which crashes somewhere that
    // does not point back at the text call. The size makes the contract
    // checkable at the moment of the call, which is the only moment it can
    // still be refused.
    //
    // FString needs 16 bytes; FText needs 32.
    //
    // **You own what comes back.** The bytes inside the struct are allocated
    // with the GAME's allocator; hand them back with `DevolverTextoDoJogo` at
    // the end of this table once the game function you passed it to returns.
    int (*CriarTextoDoJogo)(const char* texto, void* destino, unsigned tamDestino);
    // FText, not FString — and the destination is 32 bytes, not 16 (changed in
    // v9; before that this function only ever refused, so nothing depended on
    // the old size).
    //
    // It does NOT build the FText field by field. FText holds a shared
    // reference to text data the engine owns, and writing that by hand means
    // guessing a layout — the game would then read a pointer from wherever the
    // guess landed. Instead this calls the engine's own `FText::FromString`,
    // through the `TextoDeString` anchor, and lets the engine build it.
    //
    // Without that anchor it refuses. Refusing is the correct answer here: a
    // hand-built FText does not fail at the boundary, it fails deep inside the
    // game, at a place that does not point back to your plugin.
    int (*CriarTextoRicoDoJogo)(const char* texto, void* destino, unsigned tamDestino);

    // ────────────────────────────────────────────────────────────────────────
    //  HOOKS
    // ────────────────────────────────────────────────────────────────────────
    //
    // HookProcessEvent intercepts a UFunction BY NAME. This is the safe road:
    // it survives a game update, because the name does not move even when every
    // address does.
    //
    // `prioridade` orders plugins that hook the same function: lower runs
    // first. Returns a hook id, or 0 on failure (the reason goes to the log).
    uint32_t (*HookProcessEvent)(const char* nomeDaFuncao, BrzFnAntes antes,
                                 BrzFnDepois depois, int prioridade);

    // Intercepts EVERY UFunction call. Expensive — the game dispatches
    // thousands per second. Meant for discovery, with `segundos` as a deadline
    // after which it disarms itself. Passing 0 means "no deadline", and that is
    // almost always a mistake.
    uint32_t (*HookProcessEventTudo)(BrzFnAntes antes, uint32_t segundos);

    // By address, for native functions that reflection does not describe.
    BrzRecusa (*HookFuncao)(void* endereco, void* nova, void** original);
    BrzRecusa (*HookVirtual)(void* classe, int indice, void* nova, void** original);
    int       (*RemoverHook)(uint32_t id);
    const char* (*TextoRecusa)(BrzRecusa r);

    int (*LerParm)(BrzChamada* c, int indice, void* saida, uint32_t tam);
    int (*EscreverParm)(BrzChamada* c, int indice, const void* valor, uint32_t tam);
    int (*LerRetorno)(BrzChamada* c, void* saida, uint32_t tam);
    int (*DefinirRetorno)(BrzChamada* c, const void* valor, uint32_t tam);

    // Calls the Nth entry of an object's vtable. Five checks run before the
    // call, and the fifth — "is the slot executable" — is the one whose absence
    // crashed a server with players inside.
    //
    // IT CALLS THE SLOT AS `f(this)` — no arguments. That is the whole contract,
    // and it is a hard limit, not an omission:
    //
    //   · a virtual that takes no arguments works;
    //   · a virtual that takes any works too, in the sense that the call
    //     HAPPENS — and the callee reads RDX, R8 and R9 for its arguments, which
    //     hold whatever was left there. Not zeros: leftovers.
    //
    // That is the same shape as the defect that made this project's chat
    // messages invisible for weeks — a detour declared with two parameters where
    // the game has four. There is no check that can catch it here, because a
    // vtable slot carries no signature: the index is a number, and the game
    // never says what lives at that number.
    //
    // So: use this for `GetSomething()`-shaped virtuals. For anything with
    // arguments, declare the exact signature yourself and call through
    // `EnderecoDoSimbolo` or an anchor, where the typedef is written down and a
    // person can review it.
    int (*ChamarVirtual)(void* obj, uint32_t indice, void* saida, void** retorno);

    void (*EstatisticaHooks)(uint64_t* total, uint64_t* despachadas);

    // ────────────────────────────────────────────────────────────────────────
    //  COMMANDS
    // ────────────────────────────────────────────────────────────────────────
    //
    // You do NOT have to remove these yourself. The API records which plugin
    // registered each one, and takes them out of circulation when that plugin
    // is QUARANTINED — that is, when it faulted inside `BrzPluginCarregar`.
    //
    // Being precise about when, because it is the whole point: the DLL stays
    // loaded on purpose. Unloading the code of a plugin that already registered
    // something turns a contained fault into an uncontainable one — any pointer
    // the GAME still holds would jump into unmapped memory later, far from the
    // cause. So the memory stays mapped, and what stops is the CALL.
    //
    // Byte hooks are the exception, and deliberately so: uninstalling a detour
    // while another thread is inside its trampoline is a race that cannot be
    // won. The detour stays installed and keeps jumping into mapped code; it is
    // the dispatcher subscription that goes, so nothing of yours is called.
    int (*AdicionarComandoConsole)(const char* comando, BrzFnComandoConsole fn);
    int (*AdicionarComandoRcon)(const char* comando, BrzFnComandoRcon fn);
    int (*AdicionarComandoChat)(const char* comando, BrzFnComandoChat fn);
    int (*RemoverComandoConsole)(const char* comando);
    int (*RemoverComandoRcon)(const char* comando);
    int (*RemoverComandoChat)(const char* comando);

    int (*AoTick)(const char* id, BrzFnTick fn);
    int (*AoTimer)(const char* id, BrzFnTimer fn);
    int (*RemoverAoTick)(const char* id);
    int (*RemoverAoTimer)(const char* id);

    // Runs `fn(contexto)` once, `segundos` from now, ON THE GAME THREAD.
    // Returns an id you can cancel. Sleeping inside a hook would stall the game
    // thread; this is how you defer work instead.
    uint32_t (*Agendar)(float segundos, BrzFnTarefa fn, void* contexto);
    int      (*CancelarAgendamento)(uint32_t id);

    // ────────────────────────────────────────────────────────────────────────
    //  PATHS — where your plugin's files live
    // ────────────────────────────────────────────────────────────────────────
    //
    // These three return a pointer into a RING of 8 buffers, one ring per
    // thread. That is a real number, not a figure of speech:
    //
    //   · up to 8 results can be alive at once in the same expression, and all
    //     8 are correct. That covers every sane use;
    //   · the 9th call overwrites the 1st. If you need to hold more than 8
    //     paths at once, copy them into your own storage;
    //   · each thread has its own ring, so a plugin with its own thread never
    //     races the game thread.
    //
    // They used to share ONE buffer between all three. That made
    //
    //     Log("%s -> %s", api->CaminhoConfig("X"),
    //                     api->CaminhoDados("X", "d.json"));
    //
    // print the same string twice — the second call had overwritten the first.
    // No error, no warning: just a log lying about a file path, which is among
    // the hardest things to think to doubt.
    // THEY RETURN NULL when the folder or file name is not a NAME.
    //
    // `CaminhoDados("MinhaPasta", nome)` builds
    // `<Brz-Api>\Plugins\MinhaPasta\<nome>`. If `nome` comes from outside —
    // what a player typed, a config value, anywhere — a `..\..\` walks out of
    // your plugin's folder and writes elsewhere in the server.
    //
    // So a `/`, a `\`, a `:`, or a bare `..` is REFUSED, and the log says so.
    // Refused, not sanitised: quietly replacing characters would let your
    // plugin believe it saved in one place and save in another, which is the
    // same defect wearing different clothes.
    //
    // Every plugin in this tree passes literals today, so nothing was broken.
    // But this API is public, and the next plugin will want to store
    // "casa-do-<nome-do-jogador>.json" — and the player's name comes from the
    // player. **Check the result before using it**, especially before handing
    // it to a `%s`: printing a null pointer is undefined behaviour, and doing
    // it inside a log line is the most confusing possible place to crash.
    // ── HOW LONG THE POINTER STAYS VALID: EIGHT CALLS, PER THREAD ──────────
    //
    // These three write into a **ring of 8 buffers, thread_local**, and hand you
    // a pointer into it. The 9th call on the same thread overwrites the first.
    //
    // That number is the contract, and it is here because the engine says it is:
    // `BrzMotor.cpp` reads *"o limite esta escrito no header"* next to the ring.
    // For a while it wasn't — the engine promised a contract this file never
    // stated, which is the same class of defect this project keeps finding in
    // other people's code.
    //
    // What this means for you:
    //
    //     const char* a = api->CaminhoConfig("MeuPlugin");
    //     ... eight more calls ...
    //     fopen(a, "r");                  // `a` now points at someone else's path
    //
    // Copy it if you are going to hold it. `std::string cfg = api->CaminhoConfig(...)`
    // costs one allocation and ends the question.
    //
    // The three of them ONCE shared a single static buffer, and this printed the
    // same path twice with no error and no warning:
    //
    //     Log("%s -> %s", api->CaminhoConfig("X"), api->CaminhoDados("X","d.json"));
    //
    // A log lying about a file path is among the hardest things to think to
    // doubt, because a file path "can't be wrong".
    //
    // Each returns NULL on refusal — check before handing it to a `%s`.
    const char* (*CaminhoConfig)(const char* suaPasta);
    const char* (*CaminhoDados)(const char* suaPasta, const char* arquivo);
    const char* (*CaminhoRaiz)(void);

    // ────────────────────────────────────────────────────────────────────────
    //  WORLD
    // ────────────────────────────────────────────────────────────────────────
    void* (*Mundo)(void);
    void* (*ModoDeJogo)(void);
    void* (*EstadoDoJogo)(void);
    void* (*DadosDoJogo)(void);
    // 0 = starting, 1 = up, 2 = shutting down.
    int   (*StatusDoServidor)(void);

    // ────────────────────────────────────────────────────────────────────────
    //  PLAYERS
    // ────────────────────────────────────────────────────────────────────────
    //
    // Every "Achar" returns a controller pointer, or NULL. Do not keep it:
    // fetch again at the moment of use (see `Legivel` above).
    void* (*AcharJogadorPorEOSID)(const char* eosId);
    void* (*AcharJogadorPorNomeDePlataforma)(const char* nome);
    void* (*AcharJogadorPorNomeDePersonagem)(const char* nome);
    void* (*AcharControladorDoPersonagem)(void* personagem);
    // Fills `saida` and returns its length, or -1.
    int   (*NomeDoPersonagem)(void* playerController, char* saida, int tam);
    int   (*NomeDoJogador)(void* playerController, char* saida, int tam);
    int   (*EOSIDdoJogador)(void* playerController, char* saida, int tam);
    int   (*EnderecoIP)(void* playerController, char* saida, int tam);
    uint64_t (*IdDoJogador)(void* playerController);
    int   (*IdDaTribo)(void* playerController);
    int   (*JogadorEstaMorto)(void* playerController);
    // How many players are connected; fills `saida` with up to `tam`
    // controllers and returns how many it wrote.
    int   (*JogadoresConectados)(void** saida, int tam);

    // ────────────────────────────────────────────────────────────────────────
    //  MESSAGES TO PLAYERS
    // ────────────────────────────────────────────────────────────────────────
    int (*MensagemDeServidor)(void* playerController, const char* texto);
    int (*Notificacao)(void* playerController, const char* texto,
                       float r, float g, float b, float escala, float segundos);
    int (*MensagemDeChat)(void* playerController, const char* remetente, const char* texto);
    int (*MensagemDeServidorParaTodos)(const char* texto);
    int (*NotificacaoParaTodos)(const char* texto,
                                float r, float g, float b, float escala, float segundos);
    int (*MensagemDeChatParaTodos)(const char* remetente, const char* texto);

    // ────────────────────────────────────────────────────────────────────────
    //  POSITION AND TELEPORT
    // ────────────────────────────────────────────────────────────────────────
    int (*Posicao)(void* playerController, BrzPosicao* saida);
    int (*TeleportarParaPosicao)(void* playerController, BrzPosicao destino);
    int (*TeleportarParaJogador)(void* playerController, void* destino);
    // Game world coordinates -> the lat/long the map shows.
    int (*PosicaoParaCoordenadas)(BrzPosicao p, float* lat, float* lon);

    // ────────────────────────────────────────────────────────────────────────
    //  DINOS AND ITEMS
    // ────────────────────────────────────────────────────────────────────────
    int   (*EstaMontado)(void* playerController);
    void* (*DinoMontado)(void* playerController);
    // ── SPAWNS NEAR THE CONTROLLER, ALWAYS WILD, ALWAYS RETURNS NULL ────────
    //
    //  Three of these five parameters do less than they look like, and the
    //  reason is the game's own signature. From this build's dump:
    //
    //      UShooterCheatManager.SpawnDino(FString&, float spawnDistance,
    //                                     float spawnYOffset, float ZOffset,
    //                                     int DinoLevel)      -> **void**
    //
    //  · `onde` is **ignored**. Those three floats are distance, side offset
    //    and height RELATIVE to the player, along the direction they face. A
    //    world coordinate cannot become that without the controller's rotation.
    //    The dino appears near `playerController`, wherever that is.
    //  · `domado` is **ignored**. This route always spawns WILD.
    //  · the return is **always NULL**. The game's function returns void, so
    //    there is no actor to hand back. A `void*` here reads as "the dino that
    //    was born", and three of our own plugins wrote
    //    `if (NascerDino(...)) ++count` — leaving the count at zero forever.
    //
    //  Use `NascerDinoPedido` at the end of this table: it answers 1 when the
    //  spawn was dispatched and 0 when it was refused, which is what this route
    //  can honestly report, and it does not take parameters it would ignore.
    void* (*NascerDino)(void* playerController, const char* blueprint,
                        BrzPosicao onde, int domado, int nivel);
    int   (*NascerDrop)(const char* blueprint, BrzPosicao onde,
                        int quantidade, float qualidade, int comBlueprint,
                        float duracaoSegundos);
    int   (*ContarItemNoInventario)(void* inventario, const char* blueprint);
    int   (*BlueprintDoItem)(void* item, char* saida, int tam);
    int   (*BlueprintDoObjeto)(void* obj, char* saida, int tam);
    int   (*BlueprintDaClasse)(void* classe, char* saida, int tam);

    // Fills `saida` with up to `tam` actors within `raio` of `centro`, and
    // returns how many it wrote. `tipo` filters (NULL = everything).
    //
    //  **Returns -1 when it could not look at all** — world not up yet, or a
    //  `tipo` no object in the world is named. That is NOT the same as zero,
    //  and treating it as "nobody is there" is how a repopulator floods a map:
    //  it reads "no dinos here" and spawns three more, every minute, forever.
    //  Check `< 0` before you trust an empty answer.
    int (*AtoresNoRaio)(BrzPosicao centro, float raio, const char* tipo,
                        void** saida, int tam);

    // ────────────────────────────────────────────────────────────────────────
    //  ADMIN
    // ────────────────────────────────────────────────────────────────────────
    void* (*GerenciadorDeCheat)(void* playerController);
    // Runs a console command as if the server had typed it. The output, if
    // any, goes to `resposta`.
    //  ── RUNS ON `pcs[0]`, NOT ON A PLAYER YOU CHOSE ────────────────────────
    //
    //  The ARK console is per-player, so this needs a controller — and it takes
    //  **the first one in the connected list**. For a server-wide command that
    //  is fine. For anything a player asked for it is a different person's
    //  dino, inventory or engrams, with success reported to the asker.
    //
    //  Have a controller? Use `RodarComandoComo` at the end of this table.
    int   (*RodarComando)(const char* comando, char* resposta, int tamResposta);

    // ────────────────────────────────────────────────────────────────────────
    //  SERVICES — how one plugin calls another  (added in v2)
    // ────────────────────────────────────────────────────────────────────────
    //
    // THE PROBLEM THIS SOLVES, and it is a real one here: under the previous
    // API, eleven of our plugins linked `ArkShop.lib` and three linked
    // `Permissions.lib`, calling C++ functions across DLL boundaries. That is
    // exactly what a C table protects you from — and exactly what a C table
    // does not, by itself, replace.
    //
    // A C++ call between two DLLs only works when BOTH were built by the same
    // compiler, with the same runtime and the same flags. When they were not,
    // it links, it runs, and it corrupts memory with no readable error. The
    // whole reason this API is C is to make that impossible; leaving
    // plugin-to-plugin calls in C++ would put the problem back.
    //
    // So a plugin PUBLISHES a service: a name, a version, and a plain C struct
    // of function pointers that it owns. Another plugin ASKS for it by name.
    // The API keeps the register and hands out the pointer; it never inspects
    // the struct.
    //
    //     // in the shop plugin
    //     static LojaServico g_srv = { &Pontos, &Gastar };
    //     api->PublicarServico("loja", 1, &g_srv, sizeof(g_srv));
    //
    //     // in whoever uses it
    //     const LojaServico* loja =
    //         (const LojaServico*)api->AcharServico("loja", 1, sizeof(LojaServico));
    //     if (loja) loja->Gastar(eosId, 100);
    //
    // `versaoMinima` and `tamanho` are checked on lookup, for the same reason
    // the table itself carries them: a caller compiled against a LARGER struct
    // reading a smaller one walks off the end and calls garbage.
    //
    // Returns NULL when the service is absent, older than asked, or smaller
    // than expected — and says which of the three in the log. A plugin that
    // needs another one should ALSO declare it in `Dependencies` of its
    // PluginInfo.json, so the loader orders them and the service already exists
    // when it is asked for.
    //
    // ── WHAT HAPPENS WHEN THE PUBLISHER GOES INTO QUARANTINE ────────────────
    //
    // A plugin that faults is quarantined: it is never called again, and
    // everything it registered comes out of circulation — its service among
    // them. From that moment, `AcharServico` returns NULL and callers handle
    // the absence, which is the path they already have.
    //
    // But a pointer someone ALREADY holds keeps working, and that is deliberate
    // in both directions:
    //
    //   · the DLL stays loaded on purpose (unloading it would turn a contained
    //     fault into an uncontained one), so the code behind the pointer is
    //     still mapped and calling it does not fault on unmapped memory;
    //   · and yet the plugin behind it faulted, so its state is UNKNOWN. The
    //     API cannot take the pointer back from you.
    //
    // So: ask each time you need it, rather than caching the pointer for the
    // life of the process. The lookup is a walk over a handful of entries — it
    // costs nothing, and it is the difference between noticing that the other
    // plugin died and calling into it as if nothing had happened.
    int   (*PublicarServico)(const char* nome, int versao,
                             const void* tabela, unsigned tamanho);
    const void* (*AcharServico)(const char* nome, int versaoMinima,
                                unsigned tamanhoEsperado);

    // ────────────────────────────────────────────────────────────────────────
    //  PLAYER EVENTS  (added in v3)
    // ────────────────────────────────────────────────────────────────────────
    //
    // WHY THIS IS HERE AT ALL: the previous API had no player join/leave event.
    // It hooked the game's login path for its own use and never published it,
    // so every plugin that needed "someone joined" had to hook a native
    // function itself — by address, from the offset table. Which means those
    // plugins broke on every game update.
    //
    // Here it is a plain callback, and the API works out who arrived and who
    // left. Your plugin never touches an address.
    //
    // HOW IT KNOWS: the API compares the list of connected controllers between
    // beats. That is deliberately simple and has one honest consequence — the
    // event arrives within about a second of the fact, not at the exact
    // instant. For "greet the player", "load their data", "log the join", that
    // is the right trade. If you need the exact instant of a login-time
    // decision, hook the game function by name instead.
    //
    // `id` lets you remove it later; registering the same id twice is refused.
    int (*AoEntrarJogador)(const char* id, BrzFnJogador fn);
    int (*AoSairJogador)(const char* id, BrzFnJogador fn);
    int (*RemoverAoEntrarJogador)(const char* id);
    int (*RemoverAoSairJogador)(const char* id);

    // ────────────────────────────────────────────────────────────────────────
    //  NAMED ANCHORS — for what reflection cannot describe  (added in v4)
    // ────────────────────────────────────────────────────────────────────────
    //
    // Reflection describes UFunctions and UProperties. It does NOT describe
    // plain C++ virtuals — and some of them matter: `APrimalStructure::
    // TakeDamage`, for one, which a PvE plugin has to intercept to cancel
    // damage, and which has no `exec` wrapper and therefore no UFunction.
    //
    // For those, and only those, there is `ancoras.txt`: a small text file with
    // `<name>  <RVA>` lines, one per game build, that ships beside the API.
    // Ask for an address by NAME and hook it with `HookFuncao`.
    //
    // WHY THIS IS NOT THE OFFSET TABLE WE LEFT BEHIND, and the difference is
    // the whole point:
    //
    //   · that table had 555,540 entries and was DOWNLOADED from a service we
    //     do not control. If it was not published for the next build, nothing
    //     worked at all.
    //   · this file has a handful of lines, ships with the API, and is only
    //     needed by the few plugins that hook a native virtual. Everything
    //     else — every UFunction, every field, every class — comes from live
    //     reflection and needs no file.
    //
    // Returns NULL when the name is absent, and says so in the log naming the
    // plugin that asked. A missing anchor is a plugin that cannot do one thing;
    // it is not a server that cannot start.
    void* (*EnderecoDaAncora)(const char* nome);

    // ────────────────────────────────────────────────────────────────────────
    //  CALLING A GAME FUNCTION BY NAME  (added in v6)
    // ────────────────────────────────────────────────────────────────────────
    //
    // Hooking a function tells you when the game calls it. This is the other
    // half: making the call yourself.
    //
    // The API finds the UFunction on the object's class, builds the parameter
    // block at the size reflection declares, copies each argument to the offset
    // reflection gives, and calls it. Your plugin never sees the layout, and
    // never needs an address.
    //
    //     int idx = 0; bool forcar = false, interromper = false;
    //     BrzArgumento args[3] = {
    //         { &idx,         sizeof(idx)    },
    //         { &forcar,      sizeof(bool)   },
    //         { &interromper, sizeof(bool)   },
    //     };
    //     api->ChamarFuncao(dino, "DoAttack", args, 3);
    //
    // Refuses, with the reason in the log, when: the object's class has no
    // function by that name; an argument is bigger than the parameter it would
    // land in (writing it would run over the next one).
    //
    // The block is ZEROED before the arguments go in. A block with leftover
    // rubbish makes the game read a pointer that was never written, and the
    // crash happens INSIDE the game, somewhere that does not point back here.
    int (*ChamarFuncao)(void* obj, const char* nomeDaFuncao,
                        const BrzArgumento* args, int nArgs);

    // The same, for a STATIC function — one that belongs to the class and not
    // to an instance. `UPrimalItem::CreateFromBytes` is one, and a vault plugin
    // cannot give an item back without it.  (added in v8)
    //
    // It runs on the class's default object, which is what the engine itself
    // uses for this. Give it the class name, not an object.
    //
    // A WORD ON THE DEFAULT OBJECT, because it is the trap next door: the CDO
    // is the MOULD, not a living instance. Calling a static function on it is
    // correct; WRITING to its fields changes what is born from then on and
    // changes nothing that already exists — with an identical success log.
    int (*ChamarFuncaoEstatica)(const char* nomeDaClasse, const char* nomeDaFuncao,
                                const BrzArgumento* args, int nArgs);

    // ────────────────────────────────────────────────────────────────────────
    //  INVENTORY  (added in v5)
    // ────────────────────────────────────────────────────────────────────────
    //
    // Everything here goes through UFunctions the game already exposes —
    // `AddItemObject`, `RemoveItem`, `TransferItemToInventory` — called BY
    // NAME. No addresses, and none of it breaks on a game update.
    //
    // A NOTE ON ITEM POINTERS, and it is the same trap as everywhere else:
    // an item pointer is only good for as long as the call you got it in. The
    // game destroys items constantly — eaten, decayed, moved by a player. Do
    // not keep one between beats. Fetch the list again.
    void* (*InventarioDoJogador)(void* playerController);
    void* (*InventarioDoObjeto)(void* ator);
    // Fills `saida` with up to `tam` item pointers, returns how many it wrote.
    int   (*ItensDoInventario)(void* inventario, void** saida, int tam);
    int   (*QuantidadeDoItem)(void* item);
    // Moves one item to another inventory. Returns 0 and logs the reason on
    // failure — a full destination is a reason, not a crash.
    int   (*MoverItem)(void* item, void* inventarioDestino);
    int   (*RemoverItem)(void* inventario, void* item);
    // Creates an item from its blueprint path straight into an inventory.
    //
    // ── THIS COMMENT USED TO SAY THE OPPOSITE, AND IT WAS WRONG ─────────────
    //
    // It said: "THIS ONE REFUSES, AND IT WILL KEEP REFUSING... there is no
    // reflected route to it", arguing that creating an item inside an arbitrary
    // inventory needs `UPrimalInventoryComponent::AddItemObject`, which has no
    // `exec`.
    //
    // The premise is true and the conclusion is false. The engine exposes
    // `UPrimalItem::AddNewItem(TSubclassOf<UPrimalItem>,
    // UPrimalInventoryComponent*, ...)` — a STATIC UFunction, `execAddNewItem`
    // is in the dump — and it takes the destination inventory as its second
    // parameter. That is the route, and the engine has always had it; it just
    // is not the one the comment was looking at.
    //
    // The implementation below has used it all along, filling the parameter
    // block BY NAME (`ItemArchetype`, `InventoryComp`, `ItemQuantity`,
    // `ItemQuality`, `bForceBlueprint`, `TheWorld`) and refusing when the three
    // pointers are not all found.
    //
    // A comment describing a limit that does not exist is worse than no comment
    // at all: our own `FarmBRZ` left its `/f` locker unported for a whole
    // session because this paragraph said the door was closed.
    //
    // WHAT IS AND IS NOT PROVED, so nobody reads more into this than it says:
    // the route is implemented and the parameter names are checked at call
    // time; it has NOT been exercised against a live server yet. Failure is
    // logged with the names it found and the ones it missed.
    //
    // For an item that goes to a PLAYER, `DarItemAoJogador` below is still the
    // shorter road: it goes through the cheat manager and needs no inventory.
    int   (*DarItem)(void* inventario, const char* blueprint, int quantidade,
                     float qualidade, int comoBlueprint);

    // ────────────────────────────────────
    //  GIVING AN ITEM — the route that exists  (added in v9)
    // ────────────────────────────────────
    //
    // Creates the item straight into that player's own inventory.
    //
    // `blueprint` is the FULL blueprint path, the same string an admin would
    // type into `GiveItem`. Quality and `comoBlueprint` behave as they do
    // there: `comoBlueprint = 1` gives the blueprint of the item instead of
    // the item.
    //
    // WHY THIS ONE WORKS AND `DarItem` DOES NOT: it goes through
    // `UShooterCheatManager::GiveItem`, which carries `exec` — so it IS a
    // UFunction, and reflection describes its parameters. The API builds the
    // parameter block from what reflection says, not from a layout written
    // here.
    //
    // Refuses, saying so in the log, when the player has no cheat manager —
    // which is the engine's own gate, not ours.
    int   (*DarItemAoJogador)(void* playerController, const char* blueprint,
                              int quantidade, float qualidade, int comoBlueprint);

    // ────────────────────────────────────
    //  THE SYMBOL TABLE — for what reflection cannot describe  (added in v10)
    // ────────────────────────────────────
    //
    // Reflection describes UFunction and UProperty. It does NOT describe a
    // plain native virtual — and `APrimalStructure::TakeDamage` is one, so a
    // PvE plugin that needs to cancel structure damage has no other road.
    //
    // Until v9 that road was `ancoras.txt`: thirteen addresses, measured by
    // hand. This is the same idea at the scale the game actually has, and it
    // comes from OUR OWN dump — `golden/`, 796,225 keys pulled out of the
    // binary — ported to the running build by `ferramentas/gerar-simbolos.py`.
    //
    // The key is the exact signature the binary declares:
    //
    //     api->EnderecoDoSimbolo("APrimalStructure.TakeDamage("
    //                            "float,FDamageEvent&,AController*,AActor*)")
    //
    // RETURNS NULL WHEN THE SYMBOL IS NOT IN THIS BUILD'S TABLE, and that is
    // the whole point of the design: the generator only writes what it MATCHED
    // in the target build. An address inherited from the older build never
    // gets in disguised as resolved — the tool that came before this one did
    // exactly that, for 188,822 functions, and a table that lies is worse than
    // no table at all: without one your plugin refuses, with a wrong one it
    // calls the wrong address.
    //
    // So: getting NULL is normal. Refuse and say so. Do not call it.
    void* (*EnderecoDoSimbolo)(const char* chave);

    // How many symbols this build's table carries, and how many the dump had.
    // A plugin can log this once to make the gap visible instead of guessing.
    int   (*QuantosSimbolos)(int* doDump);

    // ────────────────────────────────────────────────────────────────────────
    //  THE LAST THREE GAPS AGAINST THE COMMUNITY API  (added in v11)
    // ────────────────────────────────────────────────────────────────────────
    //
    // `ferramentas/conferir-cobertura-asaapi.py` reads the AsaApi's own public
    // surface and matches it against this table, function by function. Of the
    // 37 real capabilities it offers (7 more are that API's internal plumbing),
    // 34 already had an equivalent here. These are the three that did not, and
    // leaving them out would have made "100%" a claim instead of a count.

    // The EOS ID of a player identified by the game's numeric player id — the
    // one `IdDoJogador` returns, and the one that shows up in save files and in
    // other plugins' databases.
    //
    // It is a SEARCH, not a field read: the id lives on the controller, so the
    // only way back is to look at who is connected. O(players), and the log
    // says so — a plugin calling this in a per-tick loop should know it is
    // paying for a sweep.
    //
    // Returns 0 and leaves `saida` empty when nobody connected carries that id.
    // An offline player cannot be found this way, and that is not a failure:
    // it is the honest answer to a question about who is here.
    int (*EOSIDPorIdDoJogador)(uint64_t idDoJogador, char* saida, int tam);

    // The EOS ID of whoever caused damage — the piece a PvP plugin needs and
    // the one that is hardest to get right by hand.
    //
    // `causador` is what the damage hook hands you, and it is NOT always a
    // player controller: it can be the dino that bit, the turret that shot, or
    // the projectile itself. This walks the chain the game actually uses —
    // actor to its controller (`Controller`), or actor to its owner
    // (`Owner`/`Instigator`) — and stops at the first thing that carries an
    // `EOSId`.
    //
    // Returns 0 when the chain ends without a player, which is the correct
    // answer for a dino killed by a fall, by the cold, or by a wild animal.
    // Do not read that zero as "the plugin failed" — read it as "no player did
    // this", because that is what the game is saying.
    int (*EOSIDDoAtacante)(void* causador, char* saida, int tam);

    // ────────────────────────────────────────────────────────────────────────
    //  WHERE THE BIT ACTUALLY IS  (added in v12)
    // ────────────────────────────────────────────────────────────────────────
    //
    // THIS SITS AT THE END OF THE TABLE, AND SO MUST EVERYTHING ADDED AFTER IT.
    //
    // The first version of this entry was placed next to `LerBit`/`EscreverBit`,
    // where it reads better. That shifted every pointer below it by eight bytes,
    // and every plugin compiled against the previous header started calling the
    // wrong function — the loaded DLL asks for slot N and gets slot N-1.
    //
    // It crashed within seconds under Wine, which was luck: the shifted slot
    // happened to be a pointer. Had it landed on a compatible signature, the
    // plugin would have quietly done the wrong thing.
    //
    // `MinApiVersion` cannot catch this. It answers "is the plugin newer than
    // the API?", and this is the opposite: an API that MOVED what the plugin
    // already knew. The table grows at the end, always. `conferir-ordem-tabela.py`
    // enforces it.
    //
    // DO NOT hand-write the mask for a bitfield. Ask for it.
    //
    // `OffsetDoMembro` gives you the offset of the BYTE. For a plain bool that
    // is enough. For a bitfield — `uint8 bNeutered : 1;` — it is not, and every
    // single call site in this project got it wrong the same way: they all
    // passed mask `1`. Bit zero. Always.
    //
    // The game says otherwise:
    //
    //     APrimalDinoCharacter.bNeutered   byte 10693, bit 3   -> mask 0x08
    //     APrimalCharacter.bIsDead         byte  5903, bit 5   -> mask 0x20
    //     FTickFunction.bCanEverTick       byte    10, bit 1   -> mask 0x02
    //
    // With mask 1, neutering a dino flips whatever lives at bit 0 of that byte,
    // and "is the player dead?" answers about a different flag. Neither raises
    // an error. Both look like they work.
    //
    // This fills in the real byte (it can differ from `OffsetDoMembro`, because
    // `FBoolProperty` carries its own `ByteOffset`) and the real mask, read
    // from live reflection.
    //
    // RETURNS 0 WHEN IT DOES NOT KNOW — the field is not a bitfield, or the
    // engine layout could not be measured at startup. Zero is not "bit zero":
    // it is "do not guess". Check it.
    int (*MascaraDoBit)(void* objeto, const char* nome,
                        uint32_t* offsetByte, uint8_t* mascara);

    // ────────────────────────────────────────────────────────────────────────
    //  THE INFERRED SYMBOLS, AND WHY THEY ARE NOT THE DEFAULT  (added in v13)
    // ────────────────────────────────────────────────────────────────────────
    //
    // The symbol table carries two kinds of truth, and the file marks which:
    //
    //   · BY SIGNATURE — the function's bytes in the old build were found,
    //     unique, in the new one. No inference. This is most of the table.
    //
    //   · BY ORDER (`# ordem` in the file) — it was ambiguous, and the position
    //     between already-resolved neighbours picked the answer.
    //
    // The second kind has a MEASURED error rate: hold-out validation hides
    // known answers, resolves them by order alone, and counts the misses.
    // It is **0.24%**, and tightening the rule does not lower it — that was
    // measured too, across eight settings.
    //
    // 0.24% of 8,789 inferred symbols is about twenty wrong addresses, and a
    // wrong function address does not return a strange value: it crashes the
    // server, or worse, does something else successfully.
    //
    // So `EnderecoDoSimbolo` REFUSES them and says so in the log. This is the
    // same rule the rest of this API follows: when in doubt, refuse.
    //
    // If you want one anyway — and there are good reasons to, for a symbol you
    // can verify some other way — ask through here. The name is long on
    // purpose: this is a decision, and it should be visible at the call site
    // rather than buried in a table.
    //
    // Returns null when the key is not in the table at all, exactly like
    // `EnderecoDoSimbolo`. When it does return an address, the log names the
    // key and the measured error rate, once.
    void* (*EnderecoDoSimboloInferido)(const char* chave);

    // Which kind is this key? 1 = by signature, 2 = by order (inferred),
    // 0 = not in this build's table. Lets a plugin decide before calling.
    int (*OrigemDoSimbolo)(const char* chave);

    // ── find a tamed or wild dino by the ID the game itself stores ──────────
    //
    //  Until now, finding one dino meant sweeping every object in the world —
    //  1.8 million of them — and comparing two fields on each. Plugins that
    //  track dinos (breeding, ownership, limits) did that on a timer.
    //
    //  The game already indexes them. `UVictoryCore::GetDinoCharacterByID` does
    //  the lookup, and it is in the symbol table of this build with its bytes
    //  matched, not inferred.
    //
    //  ── WHY TWO NUMBERS AND NOT ONE ─────────────────────────────────────────
    //
    //  The dino's identity is stored as two separate 32-bit fields —
    //  `APrimalDinoCharacter.DinoID1` (0x2970) and `.DinoID2` (0x2974). Server
    //  tools usually paste them into one 64-bit number, but which half goes on
    //  top is a convention, not something the binary states.
    //
    //  So this API does not pick one. It takes the two halves exactly as the
    //  game stores them, and you read them with `LerMembro` from the same two
    //  fields. Nothing to get backwards.
    //
    //  Returns the APrimalDinoCharacter*, or NULL — not found, or the symbol is
    //  absent from this build's table.
    //
    //  One caveat, stated because guessing quietly is worse than saying so: the
    //  game function takes a fourth argument, a bool whose meaning the binary
    //  does not record. We pass the value that finds MORE dinos, on the grounds
    //  that a wrong extra result is something your code can inspect, while a
    //  wrong NULL is indistinguishable from "no such dino".
    void* (*AcharDinoPorID)(uint32_t id1, uint32_t id2);

    // ── call a UFunction by name AND GET WHAT IT ANSWERED ───────────────────
    //
    //  `ChamarFuncao` above could call anything in the game and could not tell
    //  you what came back. A UFunction's parameter block carries the result in a
    //  property flagged `CPF_ReturnParm`; the argument loop skips it, correctly,
    //  because it is nobody's argument — and then it was thrown away.
    //
    //  So `IsDead()` was callable and mute. Every plugin that needed an answer
    //  had to find another road, or do without one.
    //
    //  Same call, plus a buffer for the result. `tamRetorno` is the capacity of
    //  `retorno`, and the smaller of the two sizes is copied — ask for 8 bytes
    //  of a 4-byte result and you get 4 with the rest zeroed; ask for 4 of an
    //  8-byte one and you get the low 4. Neither direction reads out of bounds.
    //
    //  Returns 1 when the call happened. A 1 with `retorno` untouched means the
    //  function returns void — which is an answer, not a failure.
    int (*ChamarFuncaoComRetorno)(void* obj, const char* nome,
                                  const BrzArgumento* args, int n,
                                  void* retorno, unsigned tamRetorno);

    // ────────────────────────────
    //  HTTP
    // ────────────────────────────
    //
    //  This was the one capability the AsaApi had and we did not. Without it a
    //  shop with real payment, an admin panel, a Discord webhook or any
    //  telemetry simply cannot be written here.
    //
    //  It is built on WinHTTP, which ships with Windows — no extra file, no
    //  redistributable. That matters: needing one would throw away the reason a
    //  BRZ plugin drops into a server and runs.
    //
    //  ── HOW IT BEHAVES ──────────────────────────────────────────────────────
    //
    //  The request runs on its own thread. Your callback does NOT: it is
    //  delivered on the game thread, from the tick, exactly like the RCON queue.
    //  So inside it you may touch the game freely.
    //
    //  Returns 1 when the request was QUEUED — not when it succeeded. The answer
    //  arrives in the callback. 0 means it was refused up front: no URL, no
    //  WinHTTP on this machine, or the queue is full (256).
    //
    //  `cabecalhos` is raw header text, one per line, or NULL:
    //      "Authorization: Bearer abc\r\nContent-Type: application/json"
    //
    //  If your plugin faults and is quarantined, its pending requests are
    //  dropped and the callback never fires. Otherwise quarantine would leak
    //  through the network: the plugin stops being called by command, timer and
    //  tick, and five seconds later an HTTP reply calls it again.
    int (*RequisicaoGet)(const char* url, const char* cabecalhos,
                         BrzFnResposta aoTerminar, void* contexto);
    int (*RequisicaoPost)(const char* url, const char* corpo,
                          const char* cabecalhos,
                          BrzFnResposta aoTerminar, void* contexto);
    int (*RequisicaoPatch)(const char* url, const char* corpo,
                           const char* cabecalhos,
                           BrzFnResposta aoTerminar, void* contexto);
    int (*RequisicaoDelete)(const char* url, const char* cabecalhos,
                            BrzFnResposta aoTerminar, void* contexto);

    //  Downloads to a file under the plugin's own data folder. On success the
    //  callback's `corpo` is the path written, not the bytes.
    int (*BaixarArquivo)(const char* url, const char* caminhoLocal,
                         const char* cabecalhos,
                         BrzFnResposta aoTerminar, void* contexto);

    //  ── AND THE SYNCHRONOUS ONE, WHICH YOU ALMOST CERTAINLY DO NOT WANT ─────
    //
    //  It blocks the caller until the server answers. Called from the game
    //  thread — which is where your command handlers and timers run — it freezes
    //  the whole server for as long as the other end takes to reply, up to the
    //  30-second timeout. Thirty seconds of frozen server is every player
    //  disconnected.
    //
    //  It exists because the AsaApi has one and a ported plugin may expect it.
    //  Use `RequisicaoGet` instead; the callback costs you one frame.
    //
    //  Returns 1 when an answer arrived. `saida` gets the body, truncated to
    //  `tamSaida - 1` and always NUL-terminated.
    int (*RequisicaoGetSincrona)(const char* url, const char* cabecalhos,
                                 char* saida, int tamSaida, int* codigo);

    // ── is another plugin loaded? ───────────────────────────────────────────
    //
    //  Weaker than `AcharServico`, and deliberately so: this answers by NAME,
    //  and a name tells you the DLL loaded — not that it published anything.
    //  Prefer `AcharServico`, which asks for a CAPABILITY and hands you its
    //  table. This exists because the AsaApi has `IsPluginLoaded` and a ported
    //  plugin expects to find it.
    //
    //  A plugin that faulted and was quarantined answers 0 from that moment.
    int (*PluginCarregado)(const char* nome);

    // ── text conversion, the same the engine uses on the game's own FString ──
    //
    //  These two already existed inside the engine — they are what reads and
    //  writes the game's text. They had no door out, so every plugin that
    //  needed a conversion wrote its own, each with its own way of getting an
    //  accent wrong.
    //
    //  `TextoParaUtf16` returns how many 16-bit units it wrote (NUL included);
    //  `Utf16ParaTexto` returns bytes written. Both return 0 on refusal.
    int (*TextoParaUtf16)(const char* texto, void* saida, int tamSaida);
    int (*Utf16ParaTexto)(const void* fonte, int nFonte, char* saida, int tamSaida);

    // ── listen to EVERY chat message ────────────────────────────────────────
    //
    //  Returns 1 when registered, 0 when refused (64 listeners is the ceiling —
    //  each one runs on every message from every player).
    uint32_t (*AoMensagemDeChat)(BrzFnChatBruto fn);
    int      (*RemoverAoMensagemDeChat)(BrzFnChatBruto fn);

    // ── run a console command AS A SPECIFIC PLAYER ──────────────────────────
    //
    //  `RodarComando` above runs on `pcs[0]` — whoever happens to be first in
    //  the connected list. That is fine for a server-wide command and WRONG for
    //  anything a player asked for: `DinoTools` charged the VIP who typed
    //  `/pod` and cryopodded the dino of whoever was first online. Success
    //  reported, points taken, the wrong person's dino in the wrong person's
    //  inventory. Same for `/kill`, `/claim`, `/hatch`.
    //
    //  When you have a controller in your hand, use this one. `pc` must be a
    //  player controller; the command runs with that player's own console, so
    //  the game's own permission check applies to the right person.
    //
    //  Returns 1 when it ran, 0 when refused (no `pc`, world not up, the
    //  `ComandoDeConsole` anchor missing from this build).
    int (*RodarComandoComo)(void* playerController, const char* comando,
                            char* resposta, int tamResposta);

    // ── how many bytes a field OCCUPIES ─────────────────────────────────────
    //
    //  `OffsetDoMembro` says where a field starts. Nothing said where it ends —
    //  and whoever writes into an ARRAY needs that, because writing past the
    //  end of one does not fail: it overwrites the next field of the struct.
    //
    //  `DinoMind` wrote 48 bytes (`float[12]`) into `MaxStatusValues` from a
    //  constant typed into the plugin, with a comment beside it claiming the
    //  code "never reads past what the array holds, and checks first". There
    //  was no check, and there was no way to write one: the information did not
    //  leave the reflection. A patch changing the number of stats would have
    //  the plugin writing over whatever follows the array, in players' dinos,
    //  with no log line.
    //
    //  Returns ElementSize x ArrayDim in bytes, or -1 when the field is not in
    //  that class nor its ancestors. **Check it before any array write.**
    int32_t (*TamanhoDoMembro)(void* objeto, const char* nome);

    // ── spawn a wild dino near a player, and SAY whether it was dispatched ──
    //
    //  The honest version of `NascerDino` above. Returns 1 when the request
    //  went through to the game, 0 when it was refused — no world yet, no
    //  player, no CheatManager (the game only creates one for admins), or the
    //  `SpawnDino` route missing from this build. Every refusal is logged with
    //  its reason.
    //
    //  It takes no position and no `domado` flag because this route honours
    //  neither, and a parameter that is ignored is a promise that is not kept.
    //  The dino appears near `playerController` and is always wild.
    int (*NascerDinoPedido)(void* playerController, const char* blueprint,
                            int nivel);

    // ── give back what CriarTextoDoJogo / CriarTextoFText allocated ─────────
    //
    //  Those two build the game's own text using the GAME's allocator, and hand
    //  you the 16- or 32-byte struct. The bytes inside it are not yours to
    //  free with `free` or `delete` — that would corrupt the game's heap. Until
    //  v22 there was no way to give them back at all, so every `/rename` in our
    //  own `PlayerUtilsBRZ` leaked one allocation per use.
    //
    //  Call this as soon as the game function you passed the text to returns.
    //  Passing NULL is fine and does nothing. Safe to call when the game's
    //  `Free` is not in this build's anchors: it then leaks rather than freeing
    //  from the wrong side — waste is expensive, a corrupted heap is a crash
    //  with no trail.
    void (*DevolverTextoDoJogo)(void* texto);

    // ── count the actors of one class, decoding no names at all ─────────────
    //
    //  Written because `UniqueTitanBRZ` counted like this:
    //
    //      for (i = 0; i < NumeroDeObjetos(); ++i)
    //          if (DescendeDe(ObjetoPorIndice(i), "IceKaiju_Character_BP_C"))
    //              ++count;
    //
    //  `DescendeDe` walks the ancestor chain DECODING the FName at each level.
    //  For an object that does not match — which is nearly all of them — it
    //  walks the whole chain before saying no: some eight FName decodes per
    //  object, over 1.8 million objects. That is ~14 MILLION decodes per sweep,
    //  on the game thread. It is the same order of magnitude as the defect that
    //  once left this server crawling with players inside.
    //
    //  Here the name becomes an index once, outside the loop, and nothing
    //  inside the loop decodes text. Matches the EXACT class, like the `tipo`
    //  filter of `AtoresNoRaio` — not the inheritance chain. Class-default
    //  objects (the CDOs) are excluded: they always exist and are not in the
    //  map, and counting one makes a repopulator believe there is already one
    //  when there is none.
    //
    //  **Returns -1 when it could not count** — world not up, or a name no
    //  object in the world has. Zero is an answer; -1 is not.
    int (*ContarAtoresDaClasse)(const char* classe);

    // ── every field of an object, walking up the whole class chain ──────────
    //
    //  `OffsetDoMembro` answers "where is the field I already know the name
    //  of". This answers the other half: **what fields are there at all**, with
    //  offset, byte size, UE type name, and which class in the chain declared
    //  each one.
    //
    //  Written because `EstudoBRZ.Membros` listed them like this:
    //
    //      for (off = 0; off < 0x2000; off += 4)
    //          if (NomeDoMembro(cdo, off, ...)) ...
    //
    //  Four bytes at a time. Every field NOT on a 4-byte offset — a `bool`, a
    //  `uint8`, an `int16` inside a struct — was invisible, and the command
    //  still printed "%d campo(s)" as if the list were complete. A diagnostic
    //  tool that omits silently is worse than none: the reader concludes the
    //  field does not exist.
    //
    //  Fills up to `max` entries and returns how many it wrote. A return equal
    //  to `max` means it may have stopped early — ask again with a bigger
    //  buffer before believing the list is whole.
    int (*CamposDoObjeto)(void* objeto, BrzCampo* saida, int max);

    // ── a same server message, but YOU pick the colour ──────────────────────
    //
    //  `MensagemDeServidor` above hard-codes opaque white. That fixed a real
    //  defect — the colour used to arrive as (0,0,0,0), alpha zero, and the
    //  message left the server and appeared on nobody's screen — but it closed
    //  the door: a plugin had no way to choose.
    //
    //  And plugins do choose. The production config of our own `Casas` carries
    //  four: info blue, success green, error red, warning yellow. With one
    //  fixed colour an error and a success look identical, and the player loses
    //  the fastest piece of information a message carries.
    //
    //  `negrito` is 0 or 1. Returns 1 when the call went through.
    int (*MensagemDeServidorColorida)(void* playerController, const char* texto,
                                      float r, float g, float b, float a,
                                      int negrito);

    // ── where a field sits INSIDE one of the game's plain structs ───────────
    //
    //  `OffsetDoMembro` answers about an OBJECT: it takes that object's class
    //  and walks it. That is no help for `FHitResult`, `FActorInstanceHandle`,
    //  `FItemNetID` and their kind — they are not UObjects, there is no object
    //  to ask, and a plugin that needs to read a field of one is stuck.
    //
    //  That is exactly what kept the five weapon modes of our own
    //  `PlayerUtilsBRZ` out of the port: the actor a shot hit lives in
    //  `FHitResult::HitObjectHandle`, and nothing here could say where.
    //
    //  Pass the struct's name with or without the `F` — `FHitResult` and
    //  `HitResult` both work; Unreal registers it without the prefix.
    //
    //  WHERE THE NUMBER COMES FROM, and it is the whole point: from the build
    //  that is RUNNING. Every struct Unreal reflects exists in the object array
    //  as a `ScriptStruct`, and a `UScriptStruct` IS a `UStruct` — the same
    //  `ChildProperties` chain a class has. Our own dump does carry
    //  `FHitResult.HitObjectHandle = 0xC0`, but that dump is from an OLDER
    //  build, and `gerar-simbolos.py` refuses to carry field offsets across
    //  builds on purpose: it validates a function by its byte signature, and a
    //  field has no signature to validate. An inherited number wearing the
    //  clothes of a measured one is the lying table this API exists not to have.
    //
    //  Returns -1 when the struct is not in this build, is not a reflected
    //  ScriptStruct, or has no such field — and says which in the log. The
    //  answer is REMEMBERED, including the -1: the lookup walks the whole
    //  object array, and a caller asking once per shot would be a plugin
    //  bringing the server down by itself.
    int32_t (*OffsetEmStruct)(const char* estrutura, const char* campo);

    // ────────────────────────────────────
    //  THE ASSET PATH, AND GIVING BY CLASS  (added in v27)
    // ────────────────────────────────────
    //
    // `AcharClasse` answers for a class NAME and only for a class that is
    // ALREADY LOADED — it walks the live object array looking for that name.
    // Every config in this server writes the other thing: the asset PATH,
    //
    //     Blueprint'/Game/Aberration/.../PrimalItem_ChargeBattery.PrimalItem_ChargeBattery'
    //
    // which is what the community API resolves with
    // `UVictoryCore::StringReferenceToClass` — and that one LOADS the asset if
    // it is not in memory yet. The shop has 268 entries written that way; the
    // difference between the two is not cosmetic, it is "the item exists" vs
    // "the item does not exist" for anything not already spawned on the map.
    //
    // Returns NULL and says so when the path does not resolve.
    void* (*AcharClassePorCaminho)(const char* caminho);

    // Same as `DarItem`, but taking the CLASS you already resolved.
    //
    // `DarItem` resolves the class from a string on EVERY call, and resolving
    // walks 1.8 million objects. A shop entry can be `Amount: 10000`; a loop
    // calling `DarItem` per unit would walk 18 billion objects and take the
    // server with it. Resolve once, hand the pointer in.
    int (*DarItemDaClasse)(void* inventario, void* classe, int quantidade,
                           float qualidade, int comoBlueprint);

    // ────────────────────────────────────
    //  SPAWNING A DINO WHERE YOU ASKED, TAMED IF YOU ASKED  (added in v28)
    // ────────────────────────────────────
    //
    // `NascerDinoPedido` above honours neither a position nor a tame flag, and
    // says so. That cost four of our own plugins their behaviour: `Ambush`
    // warns on every boot that "the ambush can spawn INSIDE the base" and that
    // `DistanciaMin`, `DistanciaMax`, `RaioSeguroEstrutura` and `ZOffset` are
    // being READ and NOT honoured; `NinhosBRZ`, `BiomasBRZ` and
    // `UniqueTitanBRZ` have the same hole. All four pass a position in the
    // original plugin.
    //
    // This is the route the community API has always used (`ArkApiUtils.h:316`):
    // `SpawnActor` with deferred BeginPlay, then `TeleportTo`, then the taming
    // sequence, then the level, then `BeginPlay`. It takes the blueprint PATH,
    // it returns the actor, and every symbol it needs has a real address.
    //
    // `onde` may be NULL (or all zeros) — then the dino appears near the
    // player, which is what `NascerDinoPedido` does. Returns the dino, or NULL
    // with the reason in the log. A refusal is never silent.
    void* (*NascerDinoEm)(void* playerController, const char* blueprint,
                          int nivel, int domado, int castrado,
                          const BrzPosicao* onde);

    // ────────────────────────────────────
    //  DELIVERING ITEMS, AND SAYING HOW MANY ARRIVED  (added in v29)
    // ────────────────────────────────────
    //
    // On 04/09/2026 a player paid 1200 shop points for 10.000 metal ingots and
    // received NOTHING. No error anywhere. The shop plugin was doing what this
    // API forces every plugin to do for a stacking delivery: take the raw
    // `EnderecoDoSimbolo` pointer and hand-write the call —
    //
    //     typedef int (*Fn)(void*, void**, int, bool, bool, void**, void**,
    //                       bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,
    //                       void**);
    //
    // Eighteen parameters, and a `void**` in two exact positions because the
    // game takes `TSubclassOf` BY ADDRESS. We got it wrong. Anyone would.
    //
    // The owner put it plainly: *"when someone compiles a plugin there is no
    // guard — they compile and they ship. Either the API is good or it isn't."*
    // He is right. A guard in OUR build catches nothing in THEIR build, so the
    // fix belongs here, where every plugin gets it for free.
    //
    // `EntregarItens` picks the route (one stack call, or one item at a time
    // when the item does not stack), measures the inventory BEFORE and AFTER,
    // and returns **how many units actually arrived** — never "I called it".
    //
    //   >= 0  units that really landed in the inventory. Compare with what you
    //         asked for; if it is short, refund. Zero is a real answer.
    //    -1   could not even look (no inventory, class did not resolve). This
    //         is NOT zero: you did not measure, so do not accuse the delivery.
    //
    // `qualidade` and `comoBlueprint` mean the same as in `DarItemDaClasse`.
    int (*EntregarItens)(void* inventario, void* classe, int quantidade,
                         float qualidade, int comoBlueprint);

    // ────────────────────────────────────
    //  IS THIS DINO SOMEBODY'S?  1 yes · 0 wild · -1 DON'T KNOW  (added in v29)
    // ────────────────────────────────────
    //
    // The rule the game actually uses is
    //
    //     tamed = TargetingTeam >= 50000 || TargetingTeam != OriginalTargetingTeam
    //
    // and on 04/09/2026 it stopped working for every plugin at once, because
    // `OriginalTargetingTeam` **is not a UPROPERTY in this build**. Live
    // reflection walks all 64 levels of the hierarchy and does not find it; the
    // community API read it from the PDB, which describes every member. Three of
    // our plugins asked the question and all three got the same wrong answer:
    // the hunt paid ZERO on the whole map, and the ambush cleanup deleted dinos
    // players had tamed.
    //
    // A plugin author cannot be expected to know that, nor to know that
    // `APrimalDinoCharacter.GetUntamedTargetingTeam()` answers the same question
    // from the other side. So the API answers it.
    //
    // THREE values, and the third is the point: `-1` means the engine could not
    // tell. Never let it collapse into 0 — "I don't know" turning into "wild" is
    // how a player's dino gets deleted.
    int (*DinoEhDomado)(void* dino);

    // ────────────────────────────────────
    //  A BANDEIRA PELO NOME, SEM MÁSCARA NENHUMA  (added in v29)
    // ────────────────────────────────────
    //
    // `LerBit(obj, offset, mascara)` asks you for the bit mask. Everybody
    // guessed `1`. **Every single call in this tree did**, engine and six
    // plugins, until it was found by reading. The dump says otherwise:
    //
    //     APrimalDinoCharacter.bNeutered   byte 10693, bit 3   -> mask 0x08
    //     APrimalCharacter.bIsDead         byte  5903, bit 5   -> mask 0x20
    //
    // With mask `1` you neuter a dino by flipping whatever lives in bit 0 of
    // that byte, and "is the player dead?" answers about a different flag.
    // **Neither one errors.** Both look like they work, and the player reads
    // "Dino neutered."
    //
    // `MascaraDoBit` (v12) fixed it for whoever knew to call it. That is the
    // wrong shape: it leaves the API offering a way to get it wrong, and asks
    // every plugin author on earth to know better. They don't get a guard —
    // they compile and they ship.
    //
    // So the mask leaves the interface. You name the field; the engine reads
    // `FBoolProperty` from live reflection and works out both the byte and the
    // bit. There is nothing left to guess.
    //
    //   LerBitPorNome:      1 set · 0 clear · -1 COULD NOT TELL
    //   EscreverBitPorNome: 1 written · 0 refused (reason in the log)
    //
    // The -1 is the whole point, again: `if (LerBitPorNome(...))` is true for
    // -1 in C, so compare it — `> 0` — like the older entry already warns.
    int (*LerBitPorNome)(void* obj, const char* campo);
    int (*EscreverBitPorNome)(void* obj, const char* campo, int valor);

    // ────────────────────────────────────
    //  THE FIELD BY NAME — NO OFFSET IN YOUR HANDS  (added in v29)
    // ────────────────────────────────────
    //
    // `OffsetDoMembro(A, "campo")` tells you where the field lives **inside A**.
    // Use that number with `LerMembro(B, off, ...)` and you read the wrong byte
    // of B — no error, just a plausible number pulled out of the middle of
    // something else.
    //
    // `DinoTools` did exactly that:
    //
    //     const int32_t off = OffsetDoMembro(st, campo);   // the COMPONENT
    //     LerMembro(d, uint32_t(off), &v, sizeof(v));      // the DINO
    //
    // Nothing catches it. The compiler sees two `void*`. Asking "does the field
    // exist?" answers yes — it exists, in the other class. And `!stats` shows a
    // number, so nobody looks.
    //
    // The offset carries, implicitly, the object it came from. An API that hands
    // you a bare integer throws that away and trusts you to remember. These two
    // never separate them: you name the object and the field together, in one
    // call, and there is no loose number to misuse.
    //
    //   LerCampo:      1 read · 0 could not (reason in the log)
    //   EscreverCampo: 1 written · 0 refused (reason in the log)
    //
    // `OffsetDoMembro` stays for the cases that genuinely need the number —
    // reading the same field off a thousand objects in a loop, where resolving
    // by name each time would cost. Those are rare, and they are not where the
    // bug lives.
    int (*LerCampo)(void* obj, const char* campo, void* saida, unsigned tam);
    int (*EscreverCampo)(void* obj, const char* campo, const void* valor,
                         unsigned tam);

    // ────────────────────────────────────
    //  IS THIS MINE TO TOUCH?  1 yes · 0 somebody else's · -1 DON'T KNOW  (v29)
    // ────────────────────────────────────
    //
    // `/fill` swept every actor within 3.000 units and pulled fertiliser out of
    // whatever it found. It accepted **any** `PrimalStructureItemContainer` and
    // **any** tamed dino. Tamed by whom, it never asked.
    //
    // A 3.000 radius holds the neighbour's base. The command emptied his chests,
    // and his beetles — the very animals that MAKE fertiliser — and answered
    // "Moved 240 fertiliser to 8 crop plots" to whoever typed it. On the other
    // side nothing appears: the chest is simply empty in the morning.
    //
    // It was not a convenience command with a bug. It was a theft tool with a
    // success message, and it worked that way since the plugin existed.
    //
    // Whoever FINDS an object by sweeping the world and then TOUCHES it —
    // inventory, item, field, destruction — has to ask whose it is. That is a
    // question about the game's teams, not about the plugin, so it belongs here.
    //
    // The -1 is refused like a no: "I could not tell whose this is" must never
    // become "so it must be mine".
    int (*PossoMexer)(void* playerController, void* objeto);

    // ────────────────────────────────────
    //  DOES EVERY ASSET PATH IN MY CONFIG RESOLVE?  (added in v29)
    // ────────────────────────────────────
    //
    // A wrong asset path does not error. `StringReferenceToClass` returns null,
    // the plugin carries on, and what happens next depends on the caller: in a
    // shop the player PAID and got nothing; in a spawn the creature just doesn't
    // appear and the log says "0 spawned"; in a kit one item quietly goes
    // missing. The server never complains, and the config looks perfect — the
    // JSON is valid and the item name makes sense.
    //
    // On 03/09/2026 there were 21 of those in the production catalogue: 7.8% of
    // the shop. Four were a moved folder; the other seventeen pointed at ASE
    // assets that ASA does not ship. None errored. All of them charged.
    //
    // We caught that with a tool of ours, in our own build. **Whoever downloads
    // this API has no tool** — they compile and they ship. So it lives here now:
    // call it once, at load, and get the list before you charge anyone.
    //
    // It scans your config for every `/Game/...` string, whatever key holds it,
    // and tries to resolve each one.
    //
    // Pass NULL for your own plugin name, a plugin name to use its config, or a
    // full PATH when the file lives somewhere else — which is the normal case
    // for a port that reads the same file the original plugin read.
    //
    //   >= 0  how many did NOT resolve (0 = all good). Each one is logged.
    //    -1   could not read the config at all.
    int (*ConferirCaminhosDoConfig)(const char* plugin);

    // ────────────────────────────────────
    //  HOLDING ON TO AN OBJECT, SAFELY  (added in v29)
    // ────────────────────────────────────
    //
    // The rule at the top of this header, in capitals, is *do not keep game
    // object pointers between calls*. The reason:
    //
    //   · you keep a UObject pointer from one hook to the next;
    //   · the game's collector destroys the object and **reuses the address**;
    //   · `Legivel` still answers 1, because the page is still mapped;
    //   · you read fields off an object that became something else.
    //
    // `NinhosBRZ` kept one for the whole life of the process, with a comment
    // saying it didn't.
    //
    // Telling people not to do it is not a fix — it is a request. Whoever
    // downloads this API reads the header once and writes code for months. So
    // here is the thing to use instead.
    //
    // `GuardarObjeto` gives you a small value you may keep as long as you like.
    // `ResolverObjeto` turns it back into a pointer, or gives NULL if the object
    // is gone. Both are cheap: no world sweep, no allocation.
    //
    //   BrzRef r = api->GuardarObjeto(dino);      // keep `r` anywhere
    //   ...
    //   void* d = api->ResolverObjeto(r);         // NULL means: it's gone
    //   if (!d) return;
    //
    // WHAT IT CATCHES: the object was destroyed and its slot in the engine's
    // object array now holds something else — which is the case that bites.
    //
    // WHAT IT DOES NOT CATCH: destroyed and re-created at the very same slot AND
    // the very same address, before you looked again. That needs the engine's
    // `SerialNumber`, whose offset is not proven on this build — and guessing a
    // layout to look more thorough is exactly the kind of thing that reads
    // memory from somewhere else and never errors. When it is measured, this
    // entry gets stricter without changing shape.
    BrzRef (*GuardarObjeto)(void* obj);
    void*  (*ResolverObjeto)(BrzRef ref);
} BrzApiTabela;

// ── what your DLL must export ───────────────────────────────────────────────
//
// TWO ENTRY POINTS, AND THE REASON IS THE BOOT TIME
//
//     BrzPluginRegistrar(api)   phase 1 — early, before the world exists
//     BrzPluginCarregar(api)    phase 2 — after reflection has settled
//
// The ARK server takes 409 seconds to reach "has successfully started" and
// about 8 minutes to "advertising for join" (measured 31/08/2026). A plugin
// that only wakes in phase 2 leaves a window of several minutes in which its
// commands simply do not answer — and whoever types one gets silence, not an
// error.
//
// In phase 1 you register commands and read your config: things that do not
// touch the world. In phase 2 you do what needs live reflection — find a class,
// arm a hook, walk objects.
//
//     PHASE 1 MUST NOT CALL ANYTHING THAT NEEDS THE WORLD. Every such function
//     returns failure and says so in the log, naming your plugin. It does not
//     pretend to work.
//
// Both are OPTIONAL and the loader accepts a plugin with only one. A plugin
// that exports just BrzPluginCarregar behaves exactly as before — with the dead
// window it always had.
//
// BrzPluginDescarregar is RESERVED AND NOT CALLED TODAY. Read this before you
// put cleanup in it:
//
//   The loader never unloads a plugin — not on failure, not on reload, not at
//   shutdown. A plugin in use has hooks armed and tasks scheduled that point
//   into its own DLL, and freeing that code makes the game jump into unmapped
//   memory later, far from the cause.
//
//   At process exit the operating system reclaims everything anyway, and
//   running plugin code inside DllMain's DETACH — under the loader lock, with
//   other threads possibly already gone — is a well-known way to hang or crash
//   a process on the way out.
//
//   So: do NOT rely on it running. Anything that must be persisted, persist
//   when you produce it, not at the end. If a later version starts calling it,
//   this comment changes with the code, in the same commit.
//
//   This paragraph exists because the equivalent header in our Conan API
//   announced this function as "called at unload" while no line of the project
//   ever called it. Documented behaviour that does not happen is worse than an
//   absent feature: someone writes their save routine into it and loses data.
typedef void (*BrzFnRegistrar)(const BrzApiTabela* api);   // fase 1
typedef void (*BrzFnCarregar)(const BrzApiTabela* api);    // fase 2
typedef void (*BrzFnDescarregar)(void);                    // reservada, ver acima

#ifdef __cplusplus
}  // extern "C"

// ═══════════════════════════════════════════════════════════════════════════
//  THREE ANSWERS, AND WHY `if (...)` MUST NOT COMPILE ON THEM
// ═══════════════════════════════════════════════════════════════════════════
//
//  Several entries answer **three things**, not two:
//
//      LerBitPorNome    1 = set     · 0 = clear · -1 = COULD NOT TELL
//      OffsetDoMembro   >= 0 offset ·            · -1 = no such field
//      DinoEhDomado     1 = tamed   · 0 = wild  · -1 = COULD NOT TELL
//      PossoMexer       1 = mine    · 0 = not   · -1 = COULD NOT TELL
//      EntregarItens    >= 0 units  ·            · -1 = could not even count
//
//  And in C, **-1 is true**. So this compiles and is wrong:
//
//      if (api->DinoEhDomado(d))       // -1 lands here: "don't know" became "yes"
//      if (api->OffsetDoMembro(o,"X")) // -1 lands here, and offset 0 — a real
//                                      // field at the start of the struct — does not
//
//  The second one is the nastier of the two, and it is not hypothetical: it is
//  how a "wild" dino got deleted and how a player's tamed one nearly went with
//  it. We used to catch this with a tool of ours, scanning our own tree. Whoever
//  downloads this API has no tool — so the type does it instead.
//
//  `BrzTres` wraps the answer and **deletes** the conversion to bool. Writing
//  `if (brz::Tres(...))` does not compile: the compiler on YOUR machine stops
//  you, at Build time, with the reason in the message. You ask the question you
//  meant to ask:
//
//      if (brz::Tres(api->DinoEhDomado(d)).sim())      // definitely tamed
//      if (brz::Tres(api->DinoEhDomado(d)).naoSei())   // engine could not tell
//      if (brz::Tres(api->PossoMexer(pc, o)).naoSim()) // not mine, OR unknown —
//                                                      // the safe side for anything
//                                                      // that deletes or takes
//
//  The C table keeps returning plain `int`, because the boundary is C and that
//  is what makes MSVC and MinGW able to share it. This is a header-side helper:
//  it costs nothing at runtime and it is the difference between a wrong `if` and
//  a compiler error.
namespace brz {

struct Tres
{
    int v;
    explicit Tres(int valor) : v(valor) {}

    //  APAGADO DE PROPÓSITO. É esta linha que faz `if (Tres(...))` virar erro
    //  de compilação em vez de um -1 lido como "sim".
    explicit operator bool() const = delete;

    bool sim()    const { return v == 1; }   // a resposta é SIM
    bool nao()    const { return v == 0; }   // a resposta é NÃO
    bool naoSei() const { return v <  0; }   // o motor não conseguiu dizer

    //  Para os dois lados da dúvida, quando ela pesa diferente:
    //    · `naoSim`  — trate "não sei" como NÃO. É o lado seguro de tudo que
    //                  apaga, cobra ou tira: no pior caso não faz.
    //    · `naoNao`  — trate "não sei" como SIM. É o lado seguro de tudo que
    //                  PROTEGE: no pior caso protege demais.
    bool naoSim() const { return v != 1; }
    bool naoNao() const { return v != 0; }
};

//  Para `OffsetDoMembro` e amigos, onde o valor útil é um número >= 0 e o 0 é
//  legítimo. `if (off)` descarta o offset zero e aceita o -1 — os dois errados.
struct Numero
{
    int v;
    explicit Numero(int valor) : v(valor) {}
    explicit operator bool() const = delete;

    bool tem()    const { return v >= 0; }
    bool naoSei() const { return v <  0; }
    int  valor()  const { return v; }        // só depois de `tem()`
};

// ═══════════════════════════════════════════════════════════════════════════
//  A FSTRING QUE SE DEVOLVE SOZINHA
// ═══════════════════════════════════════════════════════════════════════════
//
//  `CriarTextoDoJogo` aloca a FString com o `FMemory::Malloc` **do ARK** — tem
//  de ser o dele, senão o jogo libera memória nossa e corrompe o heap dele. E
//  quem alocou tem de devolver, com `DevolverTextoDoJogo`.
//
//  Isso era feito à mão nesta árvore, e só em duas das sete funções que criam
//  texto. As outras cinco vazavam — e vazamento não derruba hoje: derruba num
//  servidor que ficou de pé por semanas, longe da causa.
//
//  Quem baixa esta API tem o mesmo problema e menos ajuda: um `return` no meio,
//  uma exceção, um caminho de erro, e o `Devolver` não acontece.
//
//  `brz::Texto` resolve pelo destrutor. Ele libera quando sai de escopo, por
//  qualquer caminho — `return`, `throw`, `break`. Não há o que esquecer:
//
//      brz::Texto t(api, "/Game/.../Item.Item");
//      if (!t) return;                       // não deu para criar
//      api->AlgumaCoisaQueRecebeFString(obj, t.fs());
//      // aqui ele já devolveu, aconteça o que acontecer
//
//  Não é copiável de propósito: duas cópias devolveriam o mesmo bloco duas
//  vezes, que é pior que vazar.
}  // namespace brz

namespace brz {

class Texto
{
public:
    Texto(const BrzApiTabela* api, const char* texto) : api_(api), ok_(false)
    {
        for (unsigned i = 0; i < sizeof(fs_); ++i) fs_[i] = 0;
        if (api_ && api_->CriarTextoDoJogo && texto)
            ok_ = api_->CriarTextoDoJogo(texto, fs_, unsigned(sizeof(fs_))) != 0;
    }

    ~Texto()
    {
        if (ok_ && api_ && api_->DevolverTextoDoJogo) api_->DevolverTextoDoJogo(fs_);
    }

    Texto(const Texto&)            = delete;   // duas copias devolveriam duas vezes
    Texto& operator=(const Texto&) = delete;

    explicit operator bool() const { return ok_; }
    void*       fs()               { return fs_; }
    const void* fs() const         { return fs_; }

private:
    const BrzApiTabela* api_;
    //  16 bytes: {ponteiro, num, max} — o layout de FString, medido contra o
    //  jogo vivo. O buffer e' NOSSO; o que a FString aponta e' do jogo, e e' isso
    //  que o destrutor devolve.
    unsigned char fs_[16];
    bool ok_;
};

}  // namespace brz
#endif

#endif  // BRZ_PLUGIN_API_H
