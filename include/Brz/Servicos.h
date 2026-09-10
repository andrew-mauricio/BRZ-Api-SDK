// ═══════════════════════════════════════════════════════════════════════════════
//  Servicos.h — comandos, utilidades e desvios
//
//  As tres portas por onde um plugin fala com o servidor. A forma e' a que todo
//  plugin de ARK ja' conhece; por baixo, cada uma desce para a BRZ Api.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  O QUE MUDA EM RELACAO A OUTRAS APIS, E POR QUE
//  ─────────────────────────────────────────────────────────────────────────────
//  · **`SetHook` encadeia.** Dois plugins podem desviar a mesma funcao: a cadeia
//    fica `alvo → novo → anterior → nativa`, e o ultimo a instalar roda primeiro.
//    Onde so' o primeiro valia, o segundo plugin ficava mudo sem dizer nada —
//    aconteceu aqui com `CacadaBRZ` e `Ambush` na mesma morte de dino.
//
//  · **Todo registro DEVOLVE se registrou.** `AddChatCommand` e irmaos devolvem
//    `bool`. Doze plugins nossos chamavam o equivalente na fase 1, recebiam
//    falso, e ninguem conferia: o relogio inteiro nao subia, sem erro, sem log.
//
//  · **Registrar na fase 1 e' permitido.** O comando fica guardado e e' armado
//    quando o mundo sobe. O boot do ARK leva 409 s; um plugin que so' pudesse
//    registrar depois disso ficaria minutos mudo.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_SERVICOS_H
#define BRZ_SDK_SERVICOS_H

#include <functional>
#include <string>
#include <type_traits>

#include "Base.h"
#include "Campos.h"
#include "Colecao.h"
#include "Texto.h"

//  Declaracoes adiantadas: estes headers vem depois, em `Jogo/`. Aqui so' se
//  precisa saber que os tipos EXISTEM, para as assinaturas fecharem.
struct AActor;
struct APlayerController;
struct AShooterPlayerController;
struct AShooterCharacter;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct UClass;
struct UWorld;
struct UShooterCheatManager;
struct UPrimalItem;
struct UPrimalInventoryComponent;
struct FDamageEvent;
struct UDamageType;
struct APawn;
struct FField;
struct FProperty;

// ── RCON: o pacote e a conexao ─────────────────────────────────────────────
//
//  Layout do pacote e' o do protocolo, e o do jogo: tres inteiros e o corpo.
//  Trocar a ordem faria o `Id` da resposta nao casar com o da pergunta, e o
//  cliente RCON ficaria esperando para sempre.
struct RCONPacket
{
    int     Length = 0;
    int     Id     = 0;
    int     Type   = 0;
    FString Body;
};

//  Implementada na ponte (BrzPonteServicos.cpp): dentro de um despacho de comando
//  a resposta vai para o buffer que o motor devolve com o Id do pedido; fora dele,
//  para `RCONClientConnection.SendMessage(int,int,FString&)` do jogo, na conexao.
BRZ_API void BrzRconResponder(void* conexao, int id, int tipo, FString* texto);

struct RCONClientConnection
{
    //  Responde ao cliente. E' o que todo comando RCON chama no fim. O nome e' o
    //  do SDK de referencia; o simbolo do jogo se chama `SendMessage`, e quem
    //  sabe disso e' a ponte — nao cada plugin.
    void SendMessageW(int Id, int Type, FString* texto) { BrzRconResponder(this, Id, Type, texto); }
};

// ── os enums que os plugins usam por nome ──────────────────────────────────
//
//  A ordem e' a do jogo e NAO e' negociavel: `Health` e' 0, e ler `Stamina`
//  achando que e' `Health` da' um numero plausivel — que e' o pior tipo de erro.
//  E' a mesma ordem que o `CatastrofesBRZ` portado ja' usa (`qual = 0` = Health).
namespace EPrimalCharacterStatusValue {
enum Type
{
    Health = 0, Stamina, Torpidity, Oxygen, Food, Water, Temperature, Weight,
    MeleeDamageMultiplier, SpeedMultiplier, TemperatureFortitude,
    CraftingSpeedMultiplier, MAX
};
}

struct ULevel; struct UChildActorComponent; struct USceneComponent; struct AShooterGameMode;
struct UPrimalGameData;



namespace EPrimalItemType {
enum Type : int
{ MiscConsumable = 0, Equipment, Weapon, Ammo, Structure, Resource, Skin, WeaponAttachment, Artifact, MAX };
}

//  Tamanhos que decidem o layout de `FActorSpawnParameters`, lidos do SDK de
//  referencia (sao dados da engine, nao codigo de ninguem):
//    EObjectFlags            : unsigned __int64   → 8 bytes
//    ESpawnActorScaleMethod  : unsigned char      → 1 byte
//    TFunction<void(AActor*)>: void* + 32 bytes alinhados a 16 + ponteiro → 64
enum class EObjectFlags : unsigned long long { RF_NoFlags = 0 };
enum class ESpawnActorScaleMethod : unsigned char { OverrideRootScale = 0, MultiplyWithRoot, SelectDefaultAtRuntime };

// ── FActorSpawnParameters — vai ao jogo por ponteiro, entao o layout e' lei ──
//
//  O NinhosBRZ monta esta struct e passa `&params` a `UWorld::SpawnActor`. Um
//  campo fora do lugar nao da erro: da' ovo que nao nasce, ou `NameMode` lido
//  como `ObjectFlags`. Foi o que derrubou o servidor 4x em 12/08/2026 depois de
//  um wipe — o comentario do proprio plugin conta.
//
//  Os membros estao na ORDEM e com os TIPOS do SDK de referencia. Onde o tipo de
//  la' e' complexo (`TFunction`), entra um bloco opaco do mesmo tamanho e
//  alinhamento — o compilador calcula os offsets iguais. Quem trocar a ordem
//  aqui muda o que o jogo le'.
struct FActorSpawnParameters
{
    enum ESpawnActorNameMode
    { Required_Fatal = 0, Required_ErrorAndReturnNull = 1, Required_ReturnNull = 2, Requested = 3 };

    FName                  Name;
    AActor*                Template                 = nullptr;
    AActor*                Owner                    = nullptr;
    APawn*                 Instigator               = nullptr;
    ULevel*                OverrideLevel            = nullptr;
    UChildActorComponent*  OverrideParentComponent  = nullptr;
    unsigned char          SpawnCollisionHandlingOverride[1] = {0};
    ESpawnActorScaleMethod TransformScaleMethod     = ESpawnActorScaleMethod::OverrideRootScale;
    unsigned char          bRemoteOwned : 1;
    unsigned char          bNoFail : 1;
    unsigned char          bDeferConstruction : 1;
    unsigned char          bWillStasisAfterSpawn : 1;
    unsigned char          bDeferBeginPlay : 1;
    unsigned char          bAllowDuringConstructionScript : 1;
    ESpawnActorNameMode    NameMode                 = Required_Fatal;
    EObjectFlags           ObjectFlags              = EObjectFlags::RF_NoFlags;
    alignas(16) unsigned char CustomPreSpawnInitalization[64] = {0};   // TFunction vazia
    USceneComponent*       AttachToComponent        = nullptr;
    FName                  AttachToBoneName;
    bool                   bPrimalDeferConstruction = false;
    unsigned int           ExtraSpawnData           = 0;

    FActorSpawnParameters()
        : bRemoteOwned(0), bNoFail(0), bDeferConstruction(0), bWillStasisAfterSpawn(0),
          bDeferBeginPlay(0), bAllowDuringConstructionScript(0) {}
};

// ── FCustomItemData — o que vai dentro de um criopode ──────────────────────
//
//  O DinoTools monta esta struct localmente e a entrega ao jogo por ponteiro
//  (`SetCustomItemData`). Sao onze membros, todos `TArray` (16 bytes) ou `FName`
//  (8), na ORDEM do SDK de referencia — o compilador calcula os offsets iguais
//  aos do jogo desde que cada tipo aqui tenha o tamanho de la'. E tem: o `TArray`
//  desta API voltou a 16 bytes exatamente por causa disto.
struct FCustomItemByteArray  { TArray<unsigned char> Bytes; };
struct FCustomItemByteArrays { TArray<FCustomItemByteArray> ByteArrays; };
struct FCustomItemDoubles    { TArray<double> Doubles; };
struct FPaintingKeyValue     { int Key = 0; int Value = 0; };
template <typename T> struct TSoftClassPtr { void* ObjectID[3] = {0}; void* Path = nullptr; };

//  O jogo PREENCHE esta struct (`dino->GetDinoData(&d)`), entao o layout e' o
//  dele: tres TArray, duas FString, um ponteiro, um bool — na ordem do SDK.
struct FARKDinoData
{
    TArray<unsigned char>      DinoData;
    TArray<FPaintingKeyValue>  UniquePaintingIdMap;
    TArray<FPaintingKeyValue>  PaintingRevisionMap;
    FString                    DinoNameInMap;
    FString                    DinoName;
    UClass*                    DinoClass = nullptr;
    bool                       bNetInfoFromClient = false;
};

struct FCustomItemData
{
    FCustomItemByteArrays              CustomDataBytes;
    FCustomItemDoubles                 CustomDataDoubles;
    TArray<FString>                    CustomDataStrings;
    TArray<float>                      CustomDataFloats;
    TArray<void*>                      CustomDataObjects;
    TArray<void*>                      CustomDataClasses;
    TArray<FName>                      CustomDataNames;
    TArray<FPaintingKeyValue>          UniquePaintingIdMap;
    TArray<FPaintingKeyValue>          PaintingRevisionMap;
    FName                              CustomDataName;
    TArray<TSoftClassPtr<void>>        CustomDataSoftClasses;
};

namespace EPrimalEquipmentType {
enum Type : int
{ Hat = 0, Shirt, Pants, Boots, Gloves, DinoSaddle, Trophy, Costume, Shield, Weapon,
  Snapshot, Pet, Cart, Gear, MAX };
}


// ── os grupos da arvore de atores do servidor ──────────────────────────────
//
//  O ARK guarda os atores em octrees separadas por tipo, e a busca por raio
//  recebe qual delas varrer. Os plugins pedem por nome — `STRUCTURES`,
//  `DINOPAWNS_TAMED` —, e sao estes os grupos.
//
//  Os valores vem do jogo, e nao de contagem nossa: chutar a ordem faria a busca
//  varrer a arvore ERRADA e devolver lista vazia, sem erro nenhum. Onde a rota do
//  motor ainda nao usa o grupo, ele e' aceito e ignorado — nunca silenciosamente
//  trocado por outro.
namespace EServerOctreeGroup {
enum Type
{
    Default            = 0,
    DINOPAWNS          = 1,
    PLAYERPAWNS        = 1,
    DINOPAWNS_TAMED    = 2,
    DINOPAWNS_WILD     = 3,
    STRUCTURES         = 4,
    TARGETABLEACTORS   = 5,
    ITEMS              = 6,
    ALL                = 7,
};
}
namespace ESearchCase        { enum Type { CaseSensitive = 0, IgnoreCase = 1 }; }



// ── cor, e as cores com nome que os plugins usam ───────────────────────────
//
//  Quatro floats, nesta ordem: e' como a Unreal passa cor para as rotas de
//  notificacao. Trocar a ordem nao da erro — da' texto azul onde se pediu verde.
struct FLinearColor
{
    float R = 1.0f, G = 1.0f, B = 1.0f, A = 1.0f;
    FLinearColor() = default;
    FLinearColor(float r, float g, float b, float a = 1.0f) : R(r), G(g), B(b), A(a) {}
};

//  Os nomes que anos de plugin de ARK ja' escrevem. Sao constantes, e nao
//  chamadas ao jogo: uma cor nao depende da build.
namespace FColorList {
    static const FLinearColor White  (1.0f, 1.0f, 1.0f);
    static const FLinearColor Red    (1.0f, 0.0f, 0.0f);
    static const FLinearColor Green  (0.0f, 1.0f, 0.0f);
    static const FLinearColor Blue   (0.0f, 0.0f, 1.0f);
    static const FLinearColor Yellow (1.0f, 1.0f, 0.0f);
    static const FLinearColor Cyan   (0.0f, 1.0f, 1.0f);
    static const FLinearColor Magenta(1.0f, 0.0f, 1.0f);
    static const FLinearColor Orange (1.0f, 0.5f, 0.0f);
    static const FLinearColor Grey   (0.5f, 0.5f, 0.5f);
    static const FLinearColor Black  (0.0f, 0.0f, 0.0f);
}

namespace BrzApi {

//  Coordenada de mapa como o jogador ve' — 0..100 em cada eixo.
struct MapCoords { float x = 0.f; float y = 0.f; };

// ── comandos e relogios ────────────────────────────────────────────────────
class BRZ_API ICommands
{
public:
    virtual ~ICommands() = default;

    virtual bool AddChatCommand(const FString& comando,
        const std::function<void(AShooterPlayerController*, FString*, int, int)>& fn) = 0;
    virtual bool AddConsoleCommand(const FString& comando,
        const std::function<void(APlayerController*, FString*, bool)>& fn) = 0;
    virtual bool AddRconCommand(const FString& comando,
        const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& fn) = 0;

    virtual bool AddOnTickCallback(const FString& id, const std::function<void(float)>& fn) = 0;
    virtual bool AddOnTimerCallback(const FString& id, const std::function<void()>& fn) = 0;
    virtual bool AddOnChatMessageCallback(const FString& id,
        const std::function<bool(AShooterPlayerController*, FString*, int, int, bool, bool)>& fn) = 0;

    virtual bool RemoveChatCommand(const FString& comando) = 0;
    virtual bool RemoveConsoleCommand(const FString& comando) = 0;
    virtual bool RemoveRconCommand(const FString& comando) = 0;
    virtual bool RemoveOnTickCallback(const FString& id) = 0;
    virtual bool RemoveOnTimerCallback(const FString& id) = 0;
    virtual bool RemoveOnChatMessageCallback(const FString& id) = 0;
};

// ── desvios ────────────────────────────────────────────────────────────────
class BRZ_API IHooks
{
public:
    virtual ~IHooks() = default;

    //  `original` recebe o desvio ANTERIOR da cadeia, e nao a funcao nativa —
    //  chamar por ele continua a cadeia inteira. Entregar a nativa cortaria os
    //  desvios instalados antes, e o log culparia o inocente.
    virtual bool SetHookInternal(const std::string& funcao, LPVOID novo, LPVOID* original) = 0;
    virtual bool DisableHook(const std::string& funcao, LPVOID novo) = 0;

    template <typename R, typename... A>
    bool SetHook(const std::string& funcao, R(*novo)(A...), R(**original)(A...))
    { return SetHookInternal(funcao, (LPVOID)novo, (LPVOID*)original); }
};

// ── utilidades do servidor ─────────────────────────────────────────────────
class BRZ_API IApiUtils
{
public:
    virtual ~IApiUtils() = default;

    UWorld* GetWorld() const;
    AShooterGameMode* GetShooterGameMode() const;
    UPrimalGameData*  GetGameData() const;

    //  Posicao no mundo → latitude/longitude do mapa. Pela rota do motor, que le'
    //  o `MinimapData` do mapa que esta' rodando — nao ha' constante de mapa aqui.
    MapCoords FVectorToCoords(FVector onde) const;

    //  Sem controlador, ou sem personagem: MORTO. E' a resposta segura, e e' a do
    //  SDK de referencia — um teleporte que "acha" que o alvo esta' vivo manda o
    //  jogador para onde nao ha' ninguem.
    static bool IsPlayerDead(AShooterPlayerController* pc);
    void    SendChatMessage(AShooterPlayerController* pc, const FString& de, const std::string& msg) const;

    //  ── A FORMA VARIADICA DO CHAT, QUE E' A QUE OS PLUGINS USAM ───────────
    //
    //      SendChatMessage(pc, remetente, L"{} pontos", n);
    //
    //  Mesmo `{}` do resto: um por argumento, na ordem.
    template <typename... A>
    void SendChatMessage(AShooterPlayerController* pc, const FString& de,
                         const wchar_t* fmt, const A&... a) const
    { DizerComoTexto(pc, de, JuntarLargo(fmt, a...)); }

    //  Para TODO MUNDO no servidor. Rota diferente de mandar um a um: o jogo tem
    //  a dele, e usar a certa e' o que faz a mensagem chegar a quem entrou depois.
    template <typename... A>
    void SendNotificationToAll(const FLinearColor& cor, float escala, float tempo,
                               void* icone, const wchar_t* fmt, const A&... a) const
    { (void)icone; NotificarTodos(cor, escala, tempo, JuntarLargo(fmt, a...)); }

    template <typename... A>
    void SendChatMessageToAll(const FString& de, const wchar_t* fmt, const A&... a) const
    { DizerTodosTexto(de, JuntarLargo(fmt, a...)); }

    template <typename... A>
    void SendServerMessageToAll(const wchar_t* fmt, const A&... a) const
    { ServidorTodosTexto(JuntarLargo(fmt, a...)); }

    //  O gerenciador de cheat do PRIMEIRO jogador conectado. Existe porque
    //  varios plugins o pedem assim; quem tem o controlador na mao deve usar
    //  `pc->GetCheatManager()`, que e' o dele e nao o de quem estiver em primeiro.
    UShooterCheatManager* GetCheatManager() const;
    void    SendServerMessage(AShooterPlayerController* pc, const std::string& msg) const;
    void    SendNotification(AShooterPlayerController* pc, const std::string& msg,
                             float escala = 1.3f, float tempo = 10.0f) const;

    //  ── A FORMA VARIADICA, QUE E' A QUE OS PLUGINS USAM ──────────────────
    //
    //      SendNotification(pc, FColorList::Green, escala, tempo, nullptr,
    //                       L"{} pontos", n);
    //
    //  O `{}` e' o mesmo da formatacao do registro — um por argumento, na ordem.
    //  O icone existe na assinatura e e' ignorado: a rota do motor nao o recebe,
    //  e inventar uma textura seria pior do que nao mostrar nenhuma.
    template <typename... A>
    void SendNotification(AShooterPlayerController* pc, const FLinearColor& cor,
                          float escala, float tempo, void* icone,
                          const wchar_t* fmt, const A&... a) const
    {
        (void)icone;
        NotificarColorido(pc, cor, escala, tempo, JuntarLargo(fmt, a...));
    }

    //  ── ESTES SAO `inline`, E ISSO E' PROJETO, NAO ATALHO ─────────────────
    //
    //  So' `NotificarColorido` precisa do motor; o resto e' costura de texto, que
    //  roda inteira dentro do plugin. Exportar ajudante de implementacao aumenta a
    //  superficie da DLL sem dar nada em troca — e prende o plugin a ela: qualquer
    //  ajuste aqui viraria erro de link em quem ja' compilou.
    void NotificarColorido(AShooterPlayerController* pc, const FLinearColor& cor,
                           float escala, float tempo, const std::string& texto) const;
    void DizerComoTexto(AShooterPlayerController* pc, const FString& de,
                        const std::string& texto) const;
    void ServidorTexto(AShooterPlayerController* pc, const std::string& texto) const;
    void NotificarTodos(const FLinearColor& cor, float escala, float tempo,
                        const std::string& texto) const;
    void DizerTodosTexto(const FString& de, const std::string& texto) const;
    void ServidorTodosTexto(const std::string& texto) const;

private:
    static inline std::string LargoParaUtf8(const wchar_t* w)
    {
        if (!w || !*w) return std::string();
        const int n = WideCharToMultiByte(CP_UTF8, 0, w, -1, nullptr, 0, nullptr, nullptr);
        if (n <= 1) return std::string();
        std::string s(size_t(n - 1), '\0');
        WideCharToMultiByte(CP_UTF8, 0, w, -1, &s[0], n, nullptr, nullptr);
        return s;
    }

    static inline std::string CostureUm(std::string base) { return base; }

    //  Cada `{}` consome o proximo argumento, na ordem. Um `{}` a mais fica no
    //  texto: melhor a linha sair com ele visivel do que ler o que nao existe.
    template <typename T, typename... R>
    static std::string CostureUm(std::string base, const T& v, const R&... r)
    {
        const size_t p = base.find("{}");
        if (p == std::string::npos) return CostureUm(base, r...);
        std::string t;
        if constexpr (std::is_same_v<std::decay_t<T>, bool>)  t = v ? "true" : "false";
        else if constexpr (std::is_same_v<std::decay_t<T>, const wchar_t*> ||
                           std::is_same_v<std::decay_t<T>, wchar_t*>)
                                                              t = LargoParaUtf8(v);
        else if constexpr (std::is_convertible_v<T, std::string>) t = std::string(v);
        else                                                  t = std::to_string(v);
        base.replace(p, 2, t);
        return CostureUm(base, r...);
    }

    static inline std::string JuntarLargo(const wchar_t* fmt)
    { return LargoParaUtf8(fmt); }
    template <typename T, typename... R>
    static std::string JuntarLargo(const wchar_t* fmt, const T& v, const R&... r)
    { return CostureUm(LargoParaUtf8(fmt), v, r...); }

public:

    TArray<AShooterPlayerController*> FindPlayerFromCharacterName(
        const FString& nome, ESearchCase::Type caixa, bool exato) const;

    TArray<AActor*> GetAllActorsInRange(FVector onde, float raio,
                                        EServerOctreeGroup::Type tipo);

    static FString GetClassBlueprint(UClass* classe);

    //  ── os atalhos que os plugins usam como se fossem do jogo ─────────────
    //
    //  Nenhum destes existe no binario: sao composicoes de coisas que existem.
    //  Ficam aqui, uma vez, em vez de repetidos em cada plugin — e' o mesmo
    //  motivo de `AJUDANTES` no gerador.
    AShooterPlayerController* FindControllerFromCharacter(AShooterCharacter* ch) const;

    //  Caminho de blueprint de um objeto e de um item. Devolvem FString vazia
    //  quando o objeto nao tem classe — e vazio E' um resultado, diferente de
    //  "nao perguntei".
    static FString GetBlueprint(void* objeto);
    static FString GetItemBlueprint(void* item);

    static FVector GetPosition(APlayerController* pc);

    //  O nome do PERSONAGEM (o do jogo), nao o da conta. Sao coisas diferentes, e
    //  trocar um pelo outro faz o `/casa` de um responder pelo outro.
    static FString GetCharacterName(AShooterPlayerController* pc);

    //  Os que os plugins chamam pela instancia: `GetApiUtils().IsRidingDino(pc)`.
    static bool  IsRidingDino(AShooterPlayerController* pc);
    static APrimalDinoCharacter* GetRidingDino(AShooterPlayerController* pc);
    static int   GetTribeID(AShooterPlayerController* pc);
    static bool  TeleportToPos(AShooterPlayerController* pc, const FVector& onde);

    //  Nasce um dino ja' domado, no nivel pedido, perto de quem pediu — ou na
    //  coordenada, se vier uma. E' a rota do motor que os cinco plugins de dino
    //  dividem; nascer selvagem aqui e' o jogador pagando para ser mordido.
    static APrimalDinoCharacter* SpawnDino(AShooterPlayerController* pc, const FString& blueprint,
                                           FVector* onde, int nivel, bool domado, bool castrado);

    //  ── A MENSAGEM DE SERVIDOR COM COR ───────────────────────────────────
    //
    //      SendServerMessage(pc, FColorList::Green, L"{}", w.c_str());
    //
    //  BRZ_PARCIAL: a cor e' aceita e hoje DESCARTADA — vai pela rota sem cor.
    //  O motor tem `MensagemDeServidorColorida`, mas a assinatura dela nao foi
    //  conferida nesta rodada, e chamar com parametros chutados e' pior do que
    //  texto branco. Fica dito aqui; a proxima rodada liga a cor.
    template <typename... A>
    void SendServerMessage(AShooterPlayerController* pc, const FLinearColor& cor,
                           const wchar_t* fmt, const A&... a) const
    { (void)cor; ServidorTexto(pc, JuntarLargo(fmt, a...)); }
    //  A mesma, com texto estreito: `SendServerMessage(pc, cor, "recarregado")`.
    template <typename... A>
    void SendServerMessage(AShooterPlayerController* pc, const FLinearColor& cor,
                           const char* fmt, const A&... a) const
    { (void)cor; ServidorTexto(pc, CostureUm(std::string(fmt ? fmt : ""), a...)); }

    AShooterPlayerController* FindPlayerFromEOSID(const FString& eos) const
    { return FindPlayerFromEOSID_Internal(eos); }

private:
    virtual AShooterPlayerController* FindPlayerFromEOSID_Internal(const FString& eos) const = 0;
};

// ── as fabricas ────────────────────────────────────────────────────────────
BRZ_API ICommands& GetCommands();
BRZ_API IHooks&    GetHooks();
BRZ_API IApiUtils& GetApiUtils();

namespace Tools { BRZ_API std::string GetCurrentDir(); }

}  // namespace BrzApi

#endif  // BRZ_SDK_SERVICOS_H
