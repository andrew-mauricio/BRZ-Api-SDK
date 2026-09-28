// ============================================================================
//  BrzDino.h — os atalhos de dino e jogador que mais de um plugin nosso usa.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  ────────────────────────────────────────────────────────────────────────────
//  POR QUE UM ARQUIVO SÓ PARA ISTO
//  ────────────────────────────────────────────────────────────────────────────
//  O `Ambush`, o `DinoTools`, a `Loja` e o `PlayerUtilsBRZ` fazem as mesmas
//  meia dúzia de perguntas: o ator MIRADO, o componente de status, está morto,
//  os buffs, rodar um cheat como o jogador. Escrever isso quatro vezes seria
//  quatro verdades para a mesma coisa — e o invariante 1 desta casa é uma
//  verdade num lugar só.
//
//  ────────────────────────────────────────────────────────────────────────────
//  28/09/2026 — TUDO PELOS HEADERS DO SDK
//  ────────────────────────────────────────────────────────────────────────────
//  Até a build 25241345 este arquivo chamava endereço com `typedef` escrito à
//  mão (`Simbolo`) e lia campo e bit POR NOME (`OffsetDoMembro`, `LerMembro`,
//  `Bit`). Ordem do dono, 28/09: *"cada um dos plugins precisam seguir os
//  headers e nada por reflexão ou coisa falha"*. Então cada atalho daqui agora
//  é a chamada tipada do SDK — a mesma que o plugin escreveria à mão:
//
//      `pc->bIsAdmin()`, `GetAimedUseActor`, `IsA(StaticClass())`,
//      `MyCharacterStatusComponentField()`, `BuffsField()`, `Deactivate()`,
//      `StaticAddBuff`, `ProcessOrderAttackTarget`, `Destroy`, `IsDeadOrDying`.
//
//  Os atalhos que nenhum plugin usava (ler/escrever status e pontos por nome,
//  modo torreta, dormir, renomear, escrever texto em campo) saíram: atalho por
//  nome que fica na prateleira é o próximo a ser usado sem ninguém conferir.
//
//  A native que a tabela desta build não resolve por bytes devolve o vazio do
//  tipo e o motor escreve a chave no log (`GetAddress`) — e o plugin tem de
//  DIZER ao jogador que não rodou, nunca fingir.
// ============================================================================
#pragma once

#include "BrzPluginComum.h"
#include "Brz/Jogo/AActor.h"
#include "Brz/Jogo/AShooterPlayerController.h"
#include "Brz/Jogo/APrimalCharacter.h"
#include "Brz/Jogo/APrimalDinoCharacter.h"
#include "Brz/Jogo/APrimalBuff.h"
#include "Brz/Jogo/UPrimalCharacterStatusComponent.h"

namespace brz {

// ── RODAR UM CHEAT COMO O JOGADOR, COM ADMIN EMPRESTADO ─────────────────────
//
//  `CryoMyTarget`, `HatchEgg`, `DoTame`, `Kill`, `SetBabyAge`,
//  `SetImprintQuality` são comandos de CHEAT. O console do ARK é por jogador, e
//  o jogo só executa cheat de quem tem a bandeira de admin ligada — um VIP
//  comum não tem. O original resolve emprestando a bandeira pelo tempo da
//  chamada, e é exatamente o que está aqui:
//
//      const bool was_admin = pc->bIsAdmin()();
//      if (!was_admin) pc->bIsAdmin() = true;
//      pc->ConsoleCommand(&result, &cmd, false);
//      if (!was_admin) pc->bIsAdmin() = false;
//
//  Com uma diferença: cada escrita é LIDA DE VOLTA. Sem o campo nesta build, o
//  acessor lê falso e a escrita não pega — a leitura de volta mostra isso, e
//  o cheat NÃO roda (o jogo o ignoraria em silêncio, e o plugin diria "pronto"
//  a quem pagou). A bandeira volta SEMPRE, inclusive quando a chamada falha.
inline bool CheatComoJogador(const Contexto& c, void* pc, const std::string& comando)
{
    if (!c.api || !pc) return false;
    AShooterPlayerController* p = static_cast<AShooterPlayerController*>(pc);

    const bool era = p->bIsAdmin()();
    if (!era)
    {
        p->bIsAdmin() = true;
        if (!p->bIsAdmin()())
        {
            Log(c, "nao consegui ligar 'bIsAdmin' para rodar '%s'. O jogo ignoraria o "
                   "cheat em silencio.", comando.c_str());
            return false;
        }
    }

    const bool foi = c.api->RodarComandoComo(pc, comando.c_str(), nullptr, 0) != 0;

    if (!era)
    {
        p->bIsAdmin() = false;
        if (p->bIsAdmin()())
            Log(c, "ATENCAO: emprestei a bandeira de admin para rodar '%s' e NAO "
                   "consegui devolver. Este jogador ficou admin. Tire na mao.",
                comando.c_str());
    }
    return foi;
}

// ── o ator MIRADO ───────────────────────────────────────────────────────────
//
//  `GetAimedUseActor` é o mesmo trace que o jogo usa para o "E" de usar: é o
//  que faz `/pod` pegar o dino para onde o jogador está olhando, e não o que
//  estiver por perto.
inline void* AtorMirado(const Contexto& c, void* pc)
{
    if (!c.api || !pc) return nullptr;
    void* comp = nullptr;
    int   corpo = 0;
    return static_cast<AShooterPlayerController*>(pc)->GetAimedUseActor(&comp, &corpo, false, true);
}

inline bool EhDino(void* a)
{
    return a && static_cast<AActor*>(a)->IsA(APrimalDinoCharacter::StaticClass());
}

//  O dino mirado; se não houver, o montado. É a ordem do original — e a ordem
//  importa: quem está montado e olha para outro dino quer o OUTRO.
inline void* DinoMiradoOuMontado(const Contexto& c, void* pc)
{
    if (!c.api || !pc) return nullptr;
    void* a = AtorMirado(c, pc);
    if (EhDino(a)) return a;
    if (c.api->EstaMontado(pc)) return c.api->DinoMontado(pc);
    return nullptr;
}

//  Só o mirado, nunca o montado. O `/pod` precisa disto: criopodar o dino que
//  se está montando deixa o jogador preso à montaria e corrompe o inventário.
inline void* SoDinoMirado(const Contexto& c, void* pc)
{
    if (!c.api || !pc) return nullptr;
    void* a = AtorMirado(c, pc);
    return EhDino(a) ? a : nullptr;
}

// ── o componente de status ──────────────────────────────────────────────────
//
//  Nível, imprint, vida e torpor NÃO moram no dino: moram no
//  `UPrimalCharacterStatusComponent`, que o personagem (dino ou jogador)
//  guarda em `MyCharacterStatusComponent`.
inline void* StatusDoDino(const Contexto& c, void* dino)
{
    if (!c.api || !dino) return nullptr;
    return static_cast<APrimalCharacter*>(dino)->MyCharacterStatusComponentField();
}

// Os índices do `EPrimalCharacterStatusValue`, conferidos no dump.
enum : int {
    kVida = 0, kEstamina = 1, kTorpor = 2, kOxigenio = 3, kComida = 4,
    kAgua = 5, kTemperatura = 6, kPeso = 7, kDano = 8, kVelocidade = 9,
    kFortitude = 10, kArtesanato = 11, kMaxStatus = 12
};

// ── os buffs de um personagem ───────────────────────────────────────────────
//
//  O jogo guarda os buffs no CAMPO `APrimalCharacter.Buffs` — o próprio array
//  do ator, sem alocação nenhuma para devolver. Copia até `max`; -1 = não li.
inline int BuffsDoPersonagem(const Contexto& c, void* personagem, void** saida, int max)
{
    if (!c.api || !personagem || !saida || max <= 0) return -1;
    TArray<APrimalBuff*>& lista = static_cast<APrimalCharacter*>(personagem)->BuffsField();
    const int num = lista.Num();
    if (num < 0 || num > 4096) return -1;
    const int n = num < max ? num : max;
    for (int i = 0; i < n; ++i) saida[i] = lista[i];
    return n;
}

inline bool DesligarBuff(const Contexto& c, void* buff)
{
    if (!c.api || !buff) return false;
    static_cast<APrimalBuff*>(buff)->Deactivate();
    return true;
}

//  Aplicar um buff pela CLASSE (resolvida pelo caminho do config, com
//  `AcharClassePorCaminho`). `StaticAddBuff(TSubclassOf<APrimalBuff>,
//  APrimalCharacter*, UPrimalItem*, AActor*, bool)` — o header passa a classe
//  por endereço, como a native pede. Devolve se o jogo criou o buff.
inline bool AplicarBuffDaClasse(const Contexto& c, void* cls, void* personagem)
{
    if (!c.api || !cls || !personagem) return false;
    return APrimalBuff::StaticAddBuff(cls, personagem, nullptr, personagem, true) != nullptr;
}

//  Mandar um dino atacar um alvo.
inline bool MandarAtacar(const Contexto& c, void* dino, void* alvo)
{
    if (!c.api || !dino || !alvo) return false;
    static_cast<APrimalDinoCharacter*>(dino)->ProcessOrderAttackTarget(alvo, true);
    return true;
}

//  Apagar um ator. `Destroy(bool,bool)` — o primeiro é "mesmo que não seja
//  autoridade de rede", o segundo é "adiar".
inline bool ApagarDino(const Contexto& c, void* dino)
{
    if (!c.api || !dino) return false;
    static_cast<AActor*>(dino)->Destroy(true, false);
    return true;
}

//  O personagem está morto ou morrendo? Quem responde é o JOGO, pela native
//  `IsDeadOrDying()`. Em 13/09/2026 a versão anterior tratava o "não sei" do
//  bit (-1) como morto, e o Ambush nunca recolhia os thralls; a native não tem
//  terceiro estado.
inline bool MortoOuMorrendo(const Contexto& c, void* dino)
{
    (void)c;
    if (!dino) return true;
    return static_cast<APrimalCharacter*>(dino)->IsDeadOrDying();
}

// ── ESTE DINO É DE ALGUÉM?  1 sim · 0 selvagem · -1 NÃO SEI ────────────────
//
//  A pergunta mora na tabela da API (`DinoEhDomado`, v29): `OriginalTargetingTeam`
//  não é UPROPERTY nesta build, e a resposta tem de valer também para quem
//  compila plugin sem este arquivo. Aqui fica só o atalho.
inline int EhDinoDeAlguem(const Contexto& c, void* dino)
{
    if (!c.api || !dino) return -1;
    if (c.api->versao < 29 || !c.api->DinoEhDomado) return -1;
    return c.api->DinoEhDomado(dino);
}

} // namespace brz
