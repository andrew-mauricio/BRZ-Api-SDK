// ═══════════════════════════════════════════════════════════════════════════════
//  Campos.h — chamar funcao do jogo e ler campo de objeto
//
//  Estes moldes sao a superficie que todo plugin de ARK usa, e o corpo deles cabe
//  em duas linhas cada: pegam o endereco em `Base.h` e chamam. Toda a inteligencia
//  — tabela local, reflexao viva, recusa do inferido — esta' do outro lado, na
//  DLL, e por isso um plugin nao precisa saber nada disso para funcionar.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  O NULO QUE ESTES MOLDES DEIXAM PASSAR, E POR QUE ELE FICA
//  ─────────────────────────────────────────────────────────────────────────────
//  `GetAddress` devolve nulo quando o simbolo nao existe nesta build, ou quando
//  so' existe por inferencia de posicao (0,24% de erro medido — ver `Base.h`).
//
//  ── ESTE PARAGRAFO ESTAVA ERRADO, E O ERRO CUSTOU UM DIA ───────────────────
//
//  Ele dizia: *"Chamar por um ponteiro nulo derruba o processo na hora, no lugar
//  certo, com o nome do simbolo ja' no log."* As duas ultimas afirmacoes sao
//  verdadeiras; a do meio nao. Saltar para o endereco zero poe RIP em 0, e com
//  RIP em zero **nao existe lugar certo**: o desenrolador do motor nao consegue
//  montar um unico quadro, e o `.crashstack` sai sem pilha nenhuma.
//
//  Medido em 07/09/2026, nas duas quedas do dia: 1.630 bytes de crashstack, sem
//  uma linha de pilha, contra 3.000-6.900 bytes COM o modulo culpado nomeado nas
//  dezenove quedas anteriores. O nome do simbolo estava no log — cinco segundos
//  antes de cada queda, `'APrimalCharacter.HasCryoSickness()'` numa e
//  `'APrimalCharacter.IsConscious()'` na outra — mas foi preciso uma pericia de
//  endereco para ligar as duas coisas, porque a queda em si nao apontava nada.
//
//  Continua valendo o que vem depois: NAO se devolve valor inventado. Nesta
//  arvore isso ja' custou dois servidores (*"`Legivel` nao prova ponteiro
//  valido"*, *"o cache do `Legivel` aprovava o topo da memoria"*). O que se
//  devolve e' o VAZIO do tipo — zero, nulo, struct zerada —, que e' diferente de
//  um palpite, e o log ja' disse qual nome faltou. Quem chama confere, como o
//  header da API pede desde sempre.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_CAMPOS_H
#define BRZ_SDK_CAMPOS_H

#include <string>
#include <utility>

#include "Base.h"

// ── chamar uma funcao do jogo ──────────────────────────────────────────────
//
//  A chave e' a assinatura INTEIRA, e nao o nome curto:
//
//      "UPrimalItem.AddNewItem(TSubclassOf<UPrimalItem>,UPrimalInventoryComponent*,...)"
//
//  A assinatura inteira e' o que separa duas sobrecargas com o mesmo nome. Este
//  detalhe ja' fez `FindObject` procurar CLASSE achando que procurava objeto, e o
//  log culpou o inocente.
//  ── E O ENDERECO ZERO NAO SE CHAMA: ELE APAGA A PROVA ──────────────────────
//
//  Ate' 07/09/2026 as tres formas abaixo faziam `GetAddress(nome)` e saltavam
//  para o resultado, sem olhar. `GetAddress` devolve ZERO quando o simbolo nao
//  existe nesta build ou so' existe por inferencia de posicao (recusada, com
//  razao: 0,24% de erro medido). Saltar para zero poe RIP em 0.
//
//  A intencao era boa e esta' escrita no topo deste arquivo — "derruba o
//  processo na hora, no lugar certo". So' que a premissa e' falsa: com RIP em
//  zero **nao ha' lugar nenhum**. O desenrolador do motor nao monta quadro a
//  partir do endereco 0, e o `.crashstack` sai sem pilha.
//
//  Isso deixou de ser teoria em 07/09/2026: as duas quedas do dia
//  (`09.07-15.47.26` e `09.07-16.42.29`) trazem `EXCEPTION_ACCESS_VIOLATION
//  0x0000000000000000` e **1.630 bytes, sem uma linha de pilha** — contra 3.000
//  a 6.900 bytes e o culpado nomeado nas dezenove quedas anteriores. Um dia
//  inteiro de pericia para nao ter reu, quando o proprio simbolo que faltava
//  poderia estar escrito no log.
//
//  Agora se confere e se registra o NOME. O contrato ja' era esse, escrito em
//  `BrzPluginApi.h`: *"quando a resposta nao existe com CERTEZA, elas devolvem
//  nulo e registram o nome no log. Nao devolvem 'o mais provavel'."* Quem nao
//  honrava o contrato eram estas tres linhas — e o `GetNativeBitField`, vinte
//  linhas abaixo neste mesmo arquivo, ja' fazia certo desde sempre.
template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(const void* _this, const std::string& func_name, Args&&... args)
{
    LPVOID f = GetAddress(func_name);
    if (!f) return RT();          // `GetAddress` ja' registrou qual e por que
    return static_cast<RT(__fastcall*)(DWORD64, ArgsTypes...)>(f)(
        reinterpret_cast<DWORD64>(_this), std::forward<Args>(args)...);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(void* _this, const std::string& func_name, Args&&... args)
{
    LPVOID f = GetAddress(func_name);
    if (!f) return RT();          // `GetAddress` ja' registrou qual e por que
    return static_cast<RT(__fastcall*)(DWORD64, ArgsTypes...)>(f)(
        reinterpret_cast<DWORD64>(_this), std::forward<Args>(args)...);
}

//  Estatica: sem `this`. O primeiro argumento vai direto em RCX.
template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(std::nullptr_t, const std::string& func_name, Args&&... args)
{
    LPVOID f = GetAddress(func_name);
    if (!f) return RT();          // `GetAddress` ja' registrou qual e por que
    return static_cast<RT(__fastcall*)(ArgsTypes...)>(f)(
        std::forward<Args>(args)...);
}

// ── ler campo de objeto ────────────────────────────────────────────────────
//
//  `GetNativeField` devolve o VALOR; `GetNativePointerField` devolve o ENDERECO
//  do campo, que e' o que se usa para escrever nele e para campos que sao
//  structs grandes.
//
//  Ambos passam por `GetAddress(base, nome)`, que na BRZ Api pergunta primeiro a'
//  **reflexao viva** — a classe do objeto que esta' na mao, nesta build, agora — e
//  so' depois cai para a tabela. Quando as duas discordam, quem esta' certa e' a
//  memoria do jogo. Uma API que so' tem dump nao pode fazer essa pergunta.
//  ── O MESMO ZERO, DO LADO DOS CAMPOS ───────────────────────────────────────
//
//  `GetAddress(base, nome)` devolve ZERO quando a classe REAL do objeto na mao
//  nao tem aquele campo — e isso acontece o tempo todo por um motivo que nao e'
//  erro de ninguem: campo sem `UPROPERTY` nao entra na reflexao (medimos 3.513
//  so' nos headers que ja' temos), e objeto do tipo errado nao tem os campos do
//  tipo esperado.
//
//  Ler `*(RT*)0` derruba o servidor sem dizer QUAL campo faltou. Foi assim que
//  o CatastrofesBRZ caiu duas vezes em 04/09/2026: com o jogador montado, o
//  antigo `GetPlayerCharacter()` devolvia o DINO, `BiomeZoneVolumes` nao existia
//  na classe do dino, e `vols.Num()` lia o `ArrayNum` de uma `TArray&` nula — o
//  offset 8, que e' o `reading address 0x0000000000000008` dos dois crashstacks.
//
//  O `GetNativeBitField` logo abaixo ja' conferia. Estes dois nao — e eram os
//  mais usados dos tres. Agora devolvem o vazio do tipo e registram o nome,
//  como o header da API promete.
template <typename RT>
RT GetNativeField(const void* _this, const std::string& field_name)
{
    RT* p = reinterpret_cast<RT*>(GetAddress(_this, field_name));
    if (!p) return RT();          // idem: o nome do campo ja' foi ao log
    return *p;
}

template <typename RT>
RT GetNativePointerField(const void* _this, const std::string& field_name)
{
    DWORD64 e = GetAddress(_this, field_name);
    if (!e) return RT();          // idem
    return reinterpret_cast<RT>(e);
}

template <typename RT>
RT GetNativeDataPointerField(const std::string& field_name)
{
    return reinterpret_cast<RT>(GetDataAddress(field_name));
}

// ── campo de bits ──────────────────────────────────────────────────────────
//
//  Um `bool` da Unreal quase nunca ocupa um byte: ele e' um bit dentro de um
//  inteiro, junto com outros. Ler o byte inteiro devolve lixo dos vizinhos, e
//  escrever o byte inteiro APAGA os vizinhos — que e' um defeito silencioso, pois
//  o campo que se queria mexer fica certo.
template <typename RT, typename T>
RT GetNativeBitField(const LPVOID _this, const std::string& field_name)
{
    const BitField bf = GetBitField(_this, field_name);
    if (!bf.offset || bf.num_bits <= 0) return RT();
    const T bruto = *reinterpret_cast<T*>(bf.offset);
    const unsigned long long mascara =
        (~0ULL >> (sizeof(unsigned long long) * 8 - unsigned(bf.num_bits)));
    return static_cast<RT>((bruto >> bf.bit_position) & T(mascara));
}

template <typename RT, typename T>
void SetNativeBitField(LPVOID _this, const std::string& field_name, RT novo)
{
    const BitField bf = GetBitField(_this, field_name);
    //  Sem o campo, NAO se escreve. Escrever em `offset` zero e' escrever no
    //  endereco 0; escrever com `num_bits` zero apagaria os vizinhos com uma
    //  mascara vazia. Os dois casos sao a mesma queda, longe daqui.
    if (!bf.offset || bf.num_bits <= 0) return;

    const unsigned long long mascara =
        (~0ULL >> ((sizeof(unsigned long long) * 8) - unsigned(bf.num_bits)))
        << bf.bit_position;
    T* alvo = reinterpret_cast<T*>(bf.offset);
    *alvo = T((*alvo & ~T(mascara)) | ((T(novo) << bf.bit_position) & T(mascara)));
}

// ── um bit, lido na hora ───────────────────────────────────────────────────
//
//  `it->bIsEngram()()` — a dupla chamada e' a forma que todo plugin de ARK ja'
//  escreve: a primeira devolve este objeto, a segunda le' o bit. O byte e a
//  mascara vem de `GetBitField`, que pergunta a' reflexao viva — nao ha' numero
//  cravado aqui para envelhecer.
template <typename RT, typename T>
class BitFieldValue
{
public:
    BitFieldValue(void* pai, const char* campo) : pai_(pai), campo_(campo) {}
    RT operator()() const { return GetNativeBitField<RT, T>(pai_, campo_); }
    RT Get() const        { return (*this)(); }
    void Set(RT v) const  { SetNativeBitField<RT, T>(pai_, campo_, v); }
    //  `pc->bIsAdmin() = true;` — a forma que os plugins escrevem para escrever.
    const BitFieldValue& operator=(RT v) const { Set(v); return *this; }
private:
    void*       pai_;
    std::string campo_;
};

// ── um vetor de tamanho fixo dentro do objeto ──────────────────────────────
//
//  `comp->NumberOfLevelUpPointsAppliedField()()[i]` — a dupla chamada, como no
//  bitfield: a primeira devolve isto, a segunda o ponteiro para o primeiro
//  elemento. O endereco vem da reflexao viva; o `N` do SDK fica de fora porque
//  o plugin ja' sabe quantos elementos espera (e' o `MAX` do enum).
template <typename T>
class FieldArray
{
public:
    FieldArray(void* pai, const char* campo)
        : valor_(GetNativePointerField<T*>(pai, campo)) {}
    T* operator()() const { return valor_; }
private:
    T* valor_;
};

// ── DECLARE_HOOK ───────────────────────────────────────────────────────────
//
//  A forma com que todo plugin de ARK declara um desvio:
//
//      DECLARE_HOOK(APrimalDinoCharacter_Die, bool, APrimalDinoCharacter*, ...);
//      bool Hook_APrimalDinoCharacter_Die(APrimalDinoCharacter* _this, ...)
//      { ...; return APrimalDinoCharacter_Die_original(_this, ...); }
//
//  Gera o typedef, o ponteiro `_original` e o protótipo do `Hook_`. O
//  `_original` recebe o desvio ANTERIOR da cadeia — chamar por ele continua a
//  cadeia inteira, e e' assim que dois plugins veem a mesma morte de dino.
#define DECLARE_HOOK(nome, retorno, ...)                                    \
    typedef retorno (__fastcall* nome##_Func)(__VA_ARGS__);                  \
    inline nome##_Func nome##_original = nullptr;                            \
    retorno __fastcall Hook_##nome(__VA_ARGS__)

// ── CAMPO SEM UPROPERTY: ANCORADO NUM VIZINHO QUE TEM ──────────────────────
//
//  A reflexao da Unreal so' indexa campo marcado com UPROPERTY. Campo C++ comum
//  EXISTE na memoria do objeto e simplesmente nao tem nome la' — entao
//  `GetAddress(this, "Nome")` devolve ZERO, e ler o zero mata o servidor longe
//  daqui. Aconteceu tres vezes em 05/09/2026, um por dia, com jogador dentro:
//  `APrimalCharacter.Buffs`, `UWorld.PlayerControllerList` e
//  `APrimalDinoCharacter.OriginalTargetingTeam`. Na epoca conclui que os campos
//  nao existiam nesta build; existem — o que nao existia era o caminho por nome.
//  Medimos 3.513 desses so' nos headers que ja' temos.
//
//  ── POR QUE ANCORA RELATIVA, E NAO O OFFSET DIRETO ─────────────────────────
//
//  Gravar `(char*)this + 0x4E8` funcionaria hoje e apodreceria na proxima
//  atualizacao do ARK, CALADO — que e' exatamente o que a BRZ Api existe para
//  nao fazer, e o motivo de a AsaApi depender de alguem republicar offsets a
//  cada build.
//
//  Aqui guarda-se a distancia ate um vizinho que a reflexao ALCANCA. O vizinho e'
//  resolvido por NOME, em tempo de execucao, na build que estiver rodando; a
//  distancia foi medida entre duas builds e conferida contra o layout do trecho
//  inteiro. Quando a Wildcard insere campos ACIMA — o caso comum, e foi o que
//  medimos: os deslocamentos formam degraus por bloco — o vizinho se move junto e
//  a conta continua certa sozinha. So' quebra se mexerem ENTRE os dois, e por
//  isso a ancora escolhida e' sempre a MAIS PROXIMA (mediana de 32 bytes).
//
//  Taxa de erro medida por retencao: 0,011% em 27.312 respostas, zero erradas em
//  todas as classes que os plugins usam.
//
//  ── E QUANDO NAO DA' PARA SABER ────────────────────────────────────────────
//
//  Se a ancora nao existe nesta build, `GetAddress` devolve 0 e JA' REGISTRA o
//  nome no log (ver Base.h) — nao se duplica o aviso aqui. O campo devolve o
//  vazio do tipo, o plugin le' zero em vez de ler memoria alheia, e quem
//  investigar acha a linha dizendo qual ancora sumiu.
//  ── O VAZIO, SEM EXIGIR O TIPO COMPLETO ────────────────────────────────────
//
//  A primeira versao era `static T vazio{};`, e isso EXIGE que T esteja
//  definido. Mas o SDK usa declaracao adiantada de proposito (`struct
//  FItemNetID;`) para nao criar ciclo de include entre 938 headers — e o
//  `GetNativePointerField<T*>` que ja existia nunca esbarrou nisso porque
//  ponteiro aceita tipo incompleto.
//
//  Resultado: o SDK inteiro deixou de compilar assim que um campo ancorado caiu
//  num tipo declarado adiante. Achado ao compilar, antes de entrar em uso.
//
//  Agora o vazio e' um bloco de BYTES, reinterpretado. `reinterpret_cast<T*>`
//  nao pede o tipo completo, e o bloco nasce zerado — que e' o que um campo
//  ausente deve parecer.
//
//  E' COMPARTILHADO de proposito: este e' o caminho de FALHA (a ancora nao
//  existe nesta build), ja registrado no log por `GetAddress`. Dois campos que
//  falhem ao mesmo tempo escrevem no mesmo lugar, e isso e' aceitavel — o que
//  nao seria aceitavel e' devolver um endereco inventado dentro do objeto real.
//  O tamanho cobre com folga qualquer campo do jogo; um tipo maior que isso
//  simplesmente le' e escreve dentro do bloco, sem tocar em memoria alheia.
inline unsigned char* BrzVazioBruto()
{
    static unsigned char vazio[1024] = { 0 };
    return vazio;
}

template <typename T>
inline T& BrzVazioDe()
{
    return *reinterpret_cast<T*>(BrzVazioBruto());
}

template <typename T>
inline T* BrzEnderecoAncorado(const void* obj, const char* ancora, int distancia)
{
    if (!obj || !ancora) return nullptr;
    //  `GetAddress(base, nome)` devolve o endereco ABSOLUTO do campo ancora
    //  nesta build. Somar a distancia da' o endereco do campo que a reflexao nao
    //  enxerga. Zero significa "a ancora nao existe" — e ai nao ha o que somar.
    const DWORD64 base = GetAddress(obj, ancora);
    if (!base) return nullptr;
    return reinterpret_cast<T*>(base + distancia);
}

template <typename T>
inline T& BrzCampoAncorado(const void* obj, const char* ancora, int distancia)
{
    T* p = BrzEnderecoAncorado<T>(obj, ancora, distancia);
    return p ? *p : BrzVazioDe<T>();
}

#endif  // BRZ_SDK_CAMPOS_H
