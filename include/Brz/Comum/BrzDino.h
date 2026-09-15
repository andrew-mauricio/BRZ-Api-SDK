// ============================================================================
//  BrzDino.h — o que os plugins de dino precisam e a reflexão não descreve.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  ────────────────────────────────────────────────────────────────────────────
//  POR QUE UM ARQUIVO SÓ PARA ISTO
//  ────────────────────────────────────────────────────────────────────────────
//  O `DinoTools` e o `PlayerUtilsBRZ` mexem nas mesmas meia dúzia de funções
//  nativas: o ator MIRADO, o modo torreta, dormir/acordar, o nome replicado, o
//  recálculo de status. Nenhuma delas tem `exec` — não são UFunction, e a
//  reflexão não as descreve —, então a única porta é a tabela de símbolos.
//
//  Escrever essa ponte duas vezes seria duas verdades para o mesmo endereço, e
//  o invariante 1 desta casa é uma verdade num lugar só.
//
//  ────────────────────────────────────────────────────────────────────────────
//  A REGRA DE QUEM CHAMA ENDEREÇO
//  ────────────────────────────────────────────────────────────────────────────
//  `EnderecoDoSimbolo` devolve NULO quando o símbolo não está na tabela desta
//  build — e isso é o desenho, não o defeito. Aqui cada rota:
//
//    · resolve UMA vez e guarda (a busca é sobre 128 mil linhas);
//    · guarda também o NULO, para não procurar de novo a cada comando;
//    · **avisa uma vez** no log quando falta, dizendo o que deixa de funcionar;
//    · devolve `false` — e quem chamou tem de DIZER ao jogador, nunca fingir.
//
//  Uma rota ausente que se cala é o defeito que esta árvore mais pagou: o
//  jogador digita, paga, ouve "pronto", e nada aconteceu.
// ============================================================================
#pragma once

#include "BrzPluginComum.h"

namespace brz {

// ── resolver um símbolo uma vez, e dizer quando falta ───────────────────────
inline void* Simbolo(const Contexto& c, const char* chave, const char* paraQue)
{
    if (!c.api || !c.api->EnderecoDoSimbolo) return nullptr;
    //  Um mapa por chave, e não uma variável estática por rota: assim uma rota
    //  nova não precisa lembrar de criar o par (ponteiro, jáTentei) — esquecer
    //  o segundo faria a busca rodar a cada comando.
    static std::map<std::string, void*> achados;
    static std::map<std::string, bool>  tentados;
    const std::string k = chave;
    if (tentados[k]) return achados[k];
    tentados[k] = true;
    void* p = c.api->EnderecoDoSimbolo(chave);
    achados[k] = p;
    if (!p)
        Log(c, "o simbolo '%s' NAO esta na tabela desta build. %s nao vai "
               "funcionar, e quem chamar tem de dizer isso ao jogador — nao "
               "existe versao silenciosa disto.", chave, paraQue);
    return p;
}

// ── RODAR UM CHEAT COMO O JOGADOR, COM ADMIN EMPRESTADO ─────────────────────
//
//  `CryoMyTarget`, `HatchEgg`, `DoTame`, `Kill`, `SetBabyAge`,
//  `SetImprintQuality` são comandos de CHEAT. O console do ARK é por jogador, e
//  o jogo só executa cheat de quem tem a bandeira de admin ligada — um VIP
//  comum não tem.
//
//  O original resolve emprestando a bandeira pelo tempo da chamada:
//
//      const bool was_admin = pc->bIsAdmin()();
//      if (!was_admin) pc->bIsAdmin() = true;
//      pc->ConsoleCommand(&result, &cmd, false);
//      if (!was_admin) pc->bIsAdmin() = false;
//
//  Sem isso o comando SAI, o jogo o ignora, e o plugin diz "Dino criopodado."
//  para um jogador que não recebeu nada — cobrado.
//
//  E é por isso que o `/pod` precisa ser VIP no config: quem pode chamar isto
//  roda um cheat do servidor por um instante. A bandeira volta SEMPRE, inclusive
//  quando a chamada falha.
inline bool CheatComoJogador(const Contexto& c, void* pc, const std::string& comando)
{
    if (!c.api || !pc) return false;

    const int era = Bit(c, pc, "bIsAdmin");
    if (era < 0)
    {
        Log(c, "nao consegui ler 'bIsAdmin' de quem pediu '%s'. NAO empresto a "
               "bandeira as cegas — sem saber o valor de antes, eu poderia deixar "
               "o jogador admin para sempre.", comando.c_str());
        return false;
    }
    if (era == 0 && !EscreverBit(c, pc, "bIsAdmin", 1))
    {
        Log(c, "nao consegui ligar 'bIsAdmin' para rodar '%s'. O jogo ignoraria o "
               "cheat em silencio.", comando.c_str());
        return false;
    }

    const bool foi = c.api->RodarComandoComo(pc, comando.c_str(), nullptr, 0) != 0;

    if (era == 0 && !EscreverBit(c, pc, "bIsAdmin", 0))
        Log(c, "ATENCAO: emprestei a bandeira de admin para rodar '%s' e NAO "
               "consegui devolver. Este jogador ficou admin. Tire na mao.",
            comando.c_str());
    return foi;
}

// ── o dino MIRADO ───────────────────────────────────────────────────────────
//
//  `GetAimedUseActor` é o mesmo trace que o jogo usa para o "E" de usar: é o
//  que faz `/pod` pegar o dino para onde o jogador está olhando, e não o que
//  estiver por perto.
//
//  O porte anterior exigia estar MONTADO ("Monte no dino primeiro (a mira ainda
//  nao esta na API)") — e o config de produção diz, em toda mensagem,
//  "Voce precisa estar olhando para um dino". Eram dois comandos diferentes com
//  o mesmo nome.
inline void* AtorMirado(const Contexto& c, void* pc)
{
    typedef void* (*FnMirado)(void*, void**, int*, bool, bool);
    void* fn = Simbolo(c, "AShooterPlayerController.GetAimedUseActor("
                          "UActorComponent**,int*,bool,bool)",
                       "mirar (o alvo do /pod, /vida, /stats e companhia)");
    if (!fn) return nullptr;
    void* comp = nullptr;
    int   corpo = 0;
    return ((FnMirado)fn)(pc, &comp, &corpo, false, true);
}

//  O dino mirado; se não houver, o montado. É a ordem do original — e a ordem
//  importa: quem está montado e olha para outro dino quer o OUTRO.
inline void* DinoMiradoOuMontado(const Contexto& c, void* pc)
{
    if (!c.api || !pc) return nullptr;
    void* a = AtorMirado(c, pc);
    if (a && c.api->DescendeDe(a, "PrimalDinoCharacter")) return a;
    if (c.api->EstaMontado(pc)) return c.api->DinoMontado(pc);
    return nullptr;
}

//  Só o mirado, nunca o montado. O `/pod` precisa disto: criopodar o dino que
//  se está montando deixa o jogador preso à montaria e corrompe o inventário —
//  era o defeito que só o criopod de verdade + soltar resetava.
inline void* SoDinoMirado(const Contexto& c, void* pc)
{
    if (!c.api || !pc) return nullptr;
    void* a = AtorMirado(c, pc);
    return (a && c.api->DescendeDe(a, "PrimalDinoCharacter")) ? a : nullptr;
}

// ── o componente de status ──────────────────────────────────────────────────
//
//  Nível, imprint, vida e torpor NÃO moram no dino: moram no
//  `UPrimalCharacterStatusComponent`, que o dino guarda em
//  `MyCharacterStatusComponent`. Pedidos ao dino, `OffsetDoMembro` devolve -1 —
//  e o plugin culpava a build por um campo que está lá, uma indireção adiante.
inline void* StatusDoDino(const Contexto& c, void* dino)
{
    if (!c.api || !dino) return nullptr;
    const int32_t off = c.api->OffsetDoMembro(dino, "MyCharacterStatusComponent");
    if (off < 0) return nullptr;
    void* st = nullptr;
    return c.api->LerMembro(dino, uint32_t(off), &st, sizeof(st)) ? st : nullptr;
}

// Os índices do `EPrimalCharacterStatusValue`, conferidos no dump.
enum : int {
    kVida = 0, kEstamina = 1, kTorpor = 2, kOxigenio = 3, kComida = 4,
    kAgua = 5, kTemperatura = 6, kPeso = 7, kDano = 8, kVelocidade = 9,
    kFortitude = 10, kArtesanato = 11, kMaxStatus = 12
};

//  Ler um float de um vetor de status (`CurrentStatusValues`, `MaxStatusValues`,
//  `NumberOfLevelUpPointsApplied`...). O campo é um array fixo de 12 floats (ou
//  de bytes, no caso dos pontos), e a reflexão dá o offset do começo.
inline bool LerStatus(const Contexto& c, void* status, const char* campo, int i, float& saida)
{
    if (!c.api || !status || i < 0 || i >= kMaxStatus) return false;
    const int32_t off = c.api->OffsetDoMembro(status, campo);
    if (off < 0) return false;
    return c.api->LerMembro(status, uint32_t(off) + uint32_t(i) * 4u, &saida, sizeof(saida)) != 0;
}
inline bool LerPontos(const Contexto& c, void* status, const char* campo, int i, int& saida)
{
    if (!c.api || !status || i < 0 || i >= kMaxStatus) return false;
    const int32_t off = c.api->OffsetDoMembro(status, campo);
    if (off < 0) return false;
    uint8_t v = 0;
    if (!c.api->LerMembro(status, uint32_t(off) + uint32_t(i), &v, sizeof(v))) return false;
    saida = int(v);
    return true;
}
inline bool EscreverPontos(const Contexto& c, void* status, const char* campo, int i, int valor)
{
    if (!c.api || !status || i < 0 || i >= kMaxStatus) return false;
    if (valor < 0 || valor > 255) return false;
    const int32_t off = c.api->OffsetDoMembro(status, campo);
    if (off < 0) return false;
    uint8_t v = uint8_t(valor);
    return c.api->EscreverMembro(status, uint32_t(off) + uint32_t(i), &v, sizeof(v)) != 0;
}

// ── mexer num status pelo caminho que o jogo expõe ──────────────────────────
//
//  O original usa `BPDirectSetCurrentStatusValue`. Essa função **não existe na
//  tabela desta build** — nem como símbolo, nem como UFunction. Escrever o
//  valor direto no vetor funcionaria no servidor e não chegaria ao cliente: a
//  barra de vida do jogador continuaria como estava.
//
//  `ModifyCurrentStatusValue` tem `exec`, então a reflexão a descreve e ela
//  passa pelo caminho de replicação do próprio jogo. Ela soma em vez de
//  atribuir — daí o `quanto` ser a DIFERENÇA, e não o alvo.
inline bool MexerNoStatus(const Contexto& c, void* status, int qual, float quanto)
{
    if (!c.api || !status) return false;
    uint8_t tipo = uint8_t(qual);
    float   valor = quanto;
    bool    percentual = false, semLimite = false, deDano = false, ehImpulso = false;
    void*   tipoDeDano = nullptr;
    bool    doServidor = true, ignorarModificadores = false;
    //  Os dois últimos campos (`saida`, `tamSaida`) vão EXPLÍCITOS em zero.
    //  A inicialização agregada já os zeraria, mas um `saida` com lixo faria a
    //  API escrever o retorno da função do jogo num endereço qualquer — e o
    //  compilador avisa disso justamente porque é fácil de não perceber.
    const BrzArgumento args[9] = {
        { &tipo,                 sizeof(tipo),  nullptr, 0 },
        { &valor,                sizeof(valor), nullptr, 0 },
        { &percentual,           sizeof(bool),  nullptr, 0 },
        { &semLimite,            sizeof(bool),  nullptr, 0 },
        { &deDano,               sizeof(bool),  nullptr, 0 },
        { &ehImpulso,            sizeof(bool),  nullptr, 0 },
        { &tipoDeDano,           sizeof(void*), nullptr, 0 },
        { &doServidor,           sizeof(bool),  nullptr, 0 },
        { &ignorarModificadores, sizeof(bool),  nullptr, 0 },
    };
    return c.api->ChamarFuncao(status, "ModifyCurrentStatusValue", args, 9) != 0;
}

// ── as rotas nativas, uma linha cada ────────────────────────────────────────
inline bool ModoTorreta(const Contexto& c, void* dino, bool ligar)
{
    typedef void (*Fn)(void*, bool);
    void* fn = Simbolo(c, "APrimalDinoCharacter.SetTurretMode(bool)", "o /turretmode");
    if (!fn) return false;
    ((Fn)fn)(dino, ligar);
    return true;
}

inline bool Dormir(const Contexto& c, void* dino, bool dormir)
{
    typedef void (*Fn)(void*, bool, bool, bool);
    void* fn = Simbolo(c, "APrimalDinoCharacter.SetSleeping(bool,bool,bool)", "o /wake");
    if (!fn) return false;
    ((Fn)fn)(dino, dormir, false, false);
    return true;
}

//  Empurra o estado do ator para os clientes. Sem isto, a vida enche no
//  servidor e a barra do jogador não mexe — ele digita de novo, paga de novo.
inline bool ForcarAtualizacao(const Contexto& c, void* ator)
{
    typedef void (*Fn)(void*, bool, bool, bool);
    void* fn = Simbolo(c, "AActor.ForceNetUpdate(bool,bool,bool)",
                       "a atualizacao na tela do jogador");
    if (!fn) return false;
    ((Fn)fn)(ator, false, true, false);
    return true;
}

inline bool SincronizarStatus(const Contexto& c, void* status)
{
    typedef void (*Fn)(void*);
    void* fn = Simbolo(c, "UPrimalCharacterStatusComponent.ServerSyncReplicatedValues()",
                       "a sincronia dos status com o cliente");
    if (!fn) return false;
    ((Fn)fn)(status);
    return true;
}

inline bool RecalcularStatus(const Contexto& c, void* status)
{
    typedef void (*Fn)(void*);
    void* fn = Simbolo(c, "UPrimalCharacterStatusComponent.RescaleAllStats()",
                       "o /dinomind (o recalculo dos maximos)");
    if (!fn) return false;
    ((Fn)fn)(status);
    return true;
}

inline bool AtualizarPeso(const Contexto& c, void* status)
{
    typedef void (*Fn)(void*, bool);
    void* fn = Simbolo(c, "UPrimalCharacterStatusComponent.UpdateWeightStat(bool)",
                       "o peso depois do /dinomind");
    if (!fn) return false;
    ((Fn)fn)(status, true);
    return true;
}

inline bool AtualizarInventarioDoDino(const Contexto& c, void* status)
{
    typedef void (*Fn)(void*, bool);
    void* fn = Simbolo(c, "UPrimalCharacterStatusComponent.CharacterUpdatedInventory(bool)",
                       "o refresh do inventario do dino");
    if (!fn) return false;
    ((Fn)fn)(status, true);
    return true;
}

// ── o nome do dino, replicado ───────────────────────────────────────────────
//
//  `NetUpdateDinoNameStrings(FString& tamer, FString& nome)` é o que faz o nome
//  novo aparecer para TODO mundo, e não só no servidor. Sem ela, o `/stats`
//  renomeia e ninguém vê.
//
//  As duas FStrings são do JOGO: criadas com `CriarTextoDoJogo` e devolvidas com
//  `DevolverTextoDoJogo`. Montá-las na mão, do lado do plugin, é entregar ao
//  jogo um ponteiro alocado no heap errado.
inline bool RenomearDino(const Contexto& c, void* dino, const std::string& domador,
                         const std::string& nome)
{
    typedef void (*Fn)(void*, void*, void*);
    void* fn = Simbolo(c, "APrimalDinoCharacter.NetUpdateDinoNameStrings(FString&,FString&)",
                       "o /stats (o nome novo aparecer para todo mundo)");
    if (!fn || !c.api) return false;

    //  ── `brz::Texto` DEVOLVE NO DESTRUTOR ──────────────────────────────
    //
    //  O que estava aqui criava as duas FStrings a mão e as devolvia a mão, com
    //  um caminho de erro no meio que devolvia só uma. Funcionava — e era o
    //  exemplo errado para quem lê este arquivo: cinco das sete funções desta
    //  árvore que criam texto vazavam por esquecer exatamente isso.
    //
    //  Com o guarda, sai por `return`, por `throw` ou pelo fim do escopo, e as
    //  duas voltam para o alocador do jogo sempre.
    brz::Texto fsDomador(c.api, domador.c_str());
    if (!fsDomador) return false;
    brz::Texto fsNome(c.api, nome.c_str());
    if (!fsNome) return false;                    // o domador ja se devolveu

    ((Fn)fn)(dino, fsDomador.fs(), fsNome.fs());
    return true;
}

// ── OS BUFFS DE UM PERSONAGEM ───────────────────────────────────────────────
//
//  `GetBuffs(TArray<APrimalBuff*>&)` enche um `TArray` que o JOGO aloca. E um
//  `TArray` tem o mesmo formato de uma `FString` — {ponteiro, quantos, cabem} —,
//  então `DevolverTextoDoJogo` devolve o buffer dele com o `Free` do próprio
//  jogo. Sem essa devolução, cada consulta vaza a lista inteira: o `Ambush`
//  olhava os buffs a cada oito segundos, por jogador.
//
//  Devolve quantos escreveu, ou -1 quando a rota não existe nesta build — que é
//  diferente de "este personagem não tem buff nenhum".
// ── OS BUFFS SAO UM CAMPO, E CAMPO A REFLEXAO VE ───────────────────────────
//
//  Esta função chamava `APrimalCharacter.GetBuffs(TArray<...>&)` pelo endereço.
//  Nesta build esse símbolo só existe por INFERÊNCIA DE ORDEM — a tabela o casou
//  pela posição, não pela assinatura de bytes —, e o motor recusa inferência por
//  padrão. Todo dia, no log:
//
//      'APrimalCharacter.GetBuffs(...)' esta na tabela, mas foi resolvido pela
//      ORDEM — inferencia com 0,24% de erro medido. RECUSO por padrao.
//      ATENCAO: estas protecoes do config estao LIGADAS e eu NAO consegui
//      arma-las nesta build: PreventUseUnconscious PreventUseCarried
//
//  Duas proteções da loja desligadas por causa de um endereço que ninguém pode
//  garantir. E a AsaApi da comunidade não tem esse problema porque **baixa
//  555.540 offsets prontos de um CDN de terceiro** — o que esta API existe para
//  não fazer.
//
//  A saída não era achar o endereço: era não precisar dele. O jogo guarda os
//  buffs num CAMPO, `APrimalCharacter.Buffs`, e campo a reflexão viva descreve
//  pelo nome, nesta build, sem tabela e sem inferência. Um `TArray` é
//  {ponteiro, num, max} — o mesmo layout que esta função já sabia ler.
//
//  A rota do endereço fica como segunda opção, para o caso de uma build em que
//  o campo mude de nome. Primeiro o que é certo; depois o que é provável.
inline int BuffsDoPersonagem(const Contexto& c, void* personagem, void** saida, int max)
{
    if (!c.api || !personagem || !saida || max <= 0) return -1;

    //  ── primeiro o CAMPO, que não depende de endereço nenhum ────────────
    {
        struct { void* dados; int32_t num; int32_t cabem; } arr = { nullptr, 0, 0 };
        const int32_t off = c.api->OffsetDoMembro(personagem, "Buffs");
        if (off >= 0 &&
            c.api->LerMembro(personagem, uint32_t(off), &arr, sizeof(arr)) &&
            arr.num >= 0 && arr.num <= 4096 && arr.cabem >= arr.num)
        {
            if (arr.num == 0) return 0;
            if (!arr.dados) return -1;
            const int n = arr.num < max ? arr.num : max;
            std::memcpy(saida, arr.dados, size_t(n) * sizeof(void*));
            return n;
        }
    }

    typedef void (*Fn)(void*, void*);
    void* fn = Simbolo(c, "APrimalCharacter.GetBuffs("
                          "TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)",
                       "ler os buffs de um personagem");
    if (!fn) return -1;

    //  {ponteiro, quantos, cabem}: o mesmo formato da FString, e por isso o
    //  mesmo caminho de devolução.
    struct { void* dados; int32_t num; int32_t cabem; } lista = { nullptr, 0, 0 };
    ((Fn)fn)(personagem, &lista);

    int n = 0;
    if (lista.dados && lista.num > 0)
    {
        n = lista.num < max ? lista.num : max;
        std::memcpy(saida, lista.dados, size_t(n) * sizeof(void*));
    }
    c.api->DevolverTextoDoJogo(&lista);
    return n;
}

inline bool DesligarBuff(const Contexto& c, void* buff)
{
    typedef void (*Fn)(void*);
    void* fn = Simbolo(c, "APrimalBuff.Deactivate()", "tirar um buff do jogador");
    if (!fn || !buff) return false;
    ((Fn)fn)(buff);
    return true;
}

//  Aplicar um buff pela CLASSE. `StaticAddBuff` tem `exec`, então vai pela
//  reflexão: `(TSubclassOf<APrimalBuff>, APrimalCharacter*, UPrimalItem*,
//  AActor*, bool)`.
//  A mesma coisa quando a CLASSE ja' esta na mao. O caminho do asset e o nome
//  do objeto resolvem por rotas diferentes (`AcharClassePorCaminho` x
//  `AcharClasse`), e quem tem o config na mao — o ProcuradoBRZ tem, com quatro
//  caminhos candidatos para o buff da flor rara — ja' resolveu pela primeira.
//  Reimplementar a chamada la' dentro seriam duas copias do mesmo acordo de
//  cinco argumentos, e a que divergisse seria a que ninguem confere.
inline bool AplicarBuffDaClasse(const Contexto& c, void* cls, void* personagem)
{
    if (!c.api || !cls || !personagem) return false;
    void* item = nullptr;
    void* causador = personagem;
    bool  sim = true;
    const BrzArgumento args[5] = {
        { &cls,        sizeof(void*), nullptr, 0 },
        { &personagem, sizeof(void*), nullptr, 0 },
        { &item,       sizeof(void*), nullptr, 0 },
        { &causador,   sizeof(void*), nullptr, 0 },
        { &sim,        sizeof(bool),  nullptr, 0 },
    };
    return c.api->ChamarFuncaoEstatica("PrimalBuff", "StaticAddBuff", args, 5) != 0;
}

inline bool AplicarBuff(const Contexto& c, const char* classe, void* personagem)
{
    if (!c.api || !classe || !personagem) return false;
    void* cls = c.api->AcharClasse(classe);
    if (!cls) return false;
    void* item = nullptr;
    void* causador = personagem;
    bool  sim = true;
    const BrzArgumento args[5] = {
        { &cls,        sizeof(void*), nullptr, 0 },
        { &personagem, sizeof(void*), nullptr, 0 },
        { &item,       sizeof(void*), nullptr, 0 },
        { &causador,   sizeof(void*), nullptr, 0 },
        { &sim,        sizeof(bool),  nullptr, 0 },
    };
    return c.api->ChamarFuncaoEstatica("PrimalBuff", "StaticAddBuff", args, 5) != 0;
}

//  Mandar um dino atacar um alvo. Sem `exec`; vem da tabela de símbolos.
inline bool MandarAtacar(const Contexto& c, void* dino, void* alvo)
{
    typedef void (*Fn)(void*, void*, bool);
    void* fn = Simbolo(c, "APrimalDinoCharacter.ProcessOrderAttackTarget(AActor*,bool)",
                       "mandar os thralls do Ambush atacarem");
    if (!fn || !dino || !alvo) return false;
    ((Fn)fn)(dino, alvo, true);
    return true;
}

//  Apagar um dino. `Destroy(bool,bool)` — o primeiro é "mesmo que não seja
//  autoridade de rede", o segundo é "adiar".
inline bool ApagarDino(const Contexto& c, void* dino)
{
    typedef void (*Fn)(void*, bool, bool);
    void* fn = Simbolo(c, "APrimalDinoCharacter.Destroy(bool,bool)",
                       "recolher os dinos da emboscada no fim do tempo");
    if (!fn || !dino) return false;
    ((Fn)fn)(dino, true, false);
    return true;
}

// ── ESCREVER NUM CAMPO DE TEXTO DO JOGO ─────────────────────────────────────
//
//  A API sabe CRIAR uma `FString` do jogo e sabe DEVOLVÊ-LA, mas não tem uma
//  entrada para "ponha este texto naquele campo". E o `/stats` precisa disso:
//  ele escreve os pontos base em `TamedName`.
//
//  A conta tem três passos, e o do meio é o que não pode faltar:
//
//    1. guarda os 16 bytes da FString que está lá HOJE;
//    2. cria a nova e escreve por cima;
//    3. **devolve a antiga** — o buffer dela foi alocado pelo jogo, e sem esse
//       passo cada `/stats` vaza uma alocação. O header da API conta que foi
//       exatamente isso que o `/rename` do `PlayerUtilsBRZ` fez por meses.
//
//  A ordem importa: devolver antes de escrever deixaria o campo apontando para
//  memória liberada durante o instante entre as duas coisas.
inline bool EscreverTextoNoCampo(const Contexto& c, void* obj, uint32_t offset,
                                 const std::string& texto)
{
    if (!c.api || !obj) return false;

    uint8_t antiga[16] = {0};
    const bool tinha = c.api->LerMembro(obj, offset, antiga, sizeof(antiga)) != 0;

    uint8_t nova[16] = {0};
    if (!c.api->CriarTextoDoJogo(texto.c_str(), nova, unsigned(sizeof(nova)))) return false;

    if (!c.api->EscreverMembro(obj, offset, nova, sizeof(nova)))
    {
        c.api->DevolverTextoDoJogo(nova);      // não entrou: devolve a NOVA
        return false;
    }
    if (tinha) c.api->DevolverTextoDoJogo(antiga);
    return true;
}

//  O dino esta morto ou morrendo?
//
//  Quem responde e' o JOGO, pela native `IsDeadOrDying()` — casamento de bytes
//  nesta build. O bit `bIsDead` e' so' a reserva, e por um motivo medido em
//  13/09/2026: no boot da build 25241345 a API mediu o layout do FBoolProperty
//  cedo demais (0 amostras), nao mediu de novo, e TODO bit passou a devolver
//  -1 ("nao sei") por dois dias — o bit continuava refletido; quem nao
//  respondia era a medida (corrigido no motor em 13/09: mede na primeira
//  pergunta). A versao anterior desta funcao tratava -1 como "morto" —
//  pelo "lado seguro" de nao mexer em cadaver — e para quem precisa APAGAR isso
//  era o lado inseguro: o Ambush via todo thrall como cadaver, pulava todos no
//  `Recolher`, e os thralls nunca sumiam ao fim do tempo. Nem o marcador de alvo
//  que eles poem no jogador, porque seguiam vivos e ordenados.
//
//  E' o mesmo padrao do `/wake` de 11/09: `-1 > 0` e `-1 != 0` escondem o "nao
//  sei" atras de uma resposta. Quando existe native que responde a mesma
//  pergunta, ela e' a fonte; o bit nao decide sozinho.
inline bool MortoOuMorrendo(const Contexto& c, void* dino)
{
    if (!dino) return true;
    typedef bool (*Fn)(void*);
    void* fn = Simbolo(c, "APrimalCharacter.IsDeadOrDying()",
                       "saber se um dino esta morto ou morrendo");
    if (fn) return ((Fn)fn)(dino);

    //  Reserva: o bit. Mantem o lado seguro (-1 = "sim"), mas DIZ que caiu aqui,
    //  para a proxima build em que a native faltar nao repetir 13/09 em silencio.
    const int b = Bit(c, dino, "bIsDead");
    if (b < 0)
    {
        static bool avisou = false;
        if (!avisou && c.api && c.api->Log)
        {
            avisou = true;
            c.api->Log("[morto] sem a native IsDeadOrDying E sem o bit bIsDead nesta build: "
                       "respondo 'morto' para TUDO, pelo lado seguro. Quem APAGA dino "
                       "(Ambush) vai deixar tudo vivo ate isto ser resolvido.");
        }
        return true;
    }
    if (b == 1) return true;
    return Bit(c, dino, "bIsDying") == 1;
}

// ── ESTE DINO É DE ALGUÉM?  1 sim · 0 selvagem · -1 NÃO SEI ────────────────
//
//  A regra do original, validada em produção:
//
//      domado = TargetingTeam >= 50000  ||  TargetingTeam != OriginalTargetingTeam
//
//  O primeiro termo pega dino de tribo (id de tribo é >= 50000 por construção);
//  o segundo pega o REIVINDICADO, que troca de dono sem ir para tribo.
//
//  ── POR QUE ISTO SAIU DE TRÊS PLUGINS PARA CÁ ─────────────────────────────
//
//  Em 04/09/2026 o dono matou dinos e não recebeu ponto, element nem fragmento.
//  O log dizia, em todo abate e para toda classe:
//
//      a classe 'Dodo_Character_BP_C' NAO tem 'OriginalTargetingTeam'
//      a classe 'Sauropod_Character_BP_C' NAO tem 'OriginalTargetingTeam'
//      a classe 'Ptero_Character_BP_C' NAO tem 'OriginalTargetingTeam'
//
//  **`OriginalTargetingTeam` não é UPROPERTY nesta build.** A reflexão viva só
//  vê o que está refletido, e ela sobe os 64 níveis de hierarquia antes de
//  desistir: não está em classe nenhuma. A AsaApi da comunidade lia o campo pelo
//  **PDB**, que descreve todo membro — refletido ou não. É por isso que lá
//  funcionava, e é a diferença estrutural entre as duas APIs.
//
//  O efeito era diferente em cada um dos três, e nenhum dava erro:
//    · `CacadaBRZ`  — tratava o mapa inteiro como domado: prêmio sempre ZERO.
//    · `Ambush`     — a proteção "não recolha o bicho que o jogador domou"
//                     simplesmente não rodava, e ele apagava o dino do dono.
//    · `BiomasBRZ`  — devolvia -1, que ele já trata. Só este saiu ileso.
//
//  ── A ROTA QUE EXISTE, E POR QUE NÃO A OUTRA ──────────────────────────────
//
//  A build oferece duas, e uma delas é armadilha:
//
//    · `ITargetableInterface.GetOriginalTargetingTeam()` está na tabela, mas é
//      método de INTERFACE. Chamá-lo com o ponteiro do dino aposta que a base da
//      interface mora no deslocamento zero; se não morar, lê-se lixo e o
//      servidor cai longe da causa. RECUSADA.
//    · `APrimalDinoCharacter.GetUntamedTargetingTeam()` é método da PRÓPRIA
//      classe — nenhum ajuste de ponteiro — e é o que o SDK da AsaApi expõe
//      (Actor.h:11301). Responde à mesma pergunta pelo outro lado: que time este
//      bicho teria se fosse selvagem. Num selvagem, igual ao atual.
//
//  A reflexão é tentada PRIMEIRO: se um dia a build voltar a refletir o campo,
//  este código volta ao caminho barato sozinho, sem ninguém editar nada.
//  ── E ISTO AGORA E' UMA CHAMADA DE API, NAO CODIGO DE PLUGIN ──────────────
//
//  A primeira versao desta funcao vivia aqui: lia `TargetingTeam` pela reflexao,
//  descobria que `OriginalTargetingTeam` nao existe nesta build, e caia para uma
//  chamada nativa com typedef escrito a mao. Funcionava — para os NOSSOS
//  plugins, que incluem este header.
//
//  Um autor de plugin qualquer nao tem este arquivo. Ele compila com o header
//  publico, sobe, e o dino domado dele conta como selvagem. Como o dono disse:
//  *"quando alguem compilar plugin nao vai ter guarda, ele vai compilar e subir.
//  Ou a api esta boa ou nao esta."*
//
//  Entao a pergunta subiu para a tabela (`DinoEhDomado`, v29) e aqui ficou so o
//  atalho. Quem estiver numa API velha (v28 ou menos) nao tem o campo — e nesse
//  caso a resposta honesta e -1, nao um palpite.
inline int EhDinoDeAlguem(const Contexto& c, void* dino)
{
    if (!c.api || !dino) return -1;
    if (c.api->versao < 29 || !c.api->DinoEhDomado) return -1;
    return c.api->DinoEhDomado(dino);
}

} // namespace brz
