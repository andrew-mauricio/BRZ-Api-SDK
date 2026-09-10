// ═══════════════════════════════════════════════════════════════════════════════
//  Colecao.h — TArray, o vetor do jogo
//
//  Tres campos, e o layout NAO e' escolha nossa: e' o que a Unreal poe na memoria,
//  e foi medido contra o jogo vivo nesta arvore mais de uma vez.
//
//      { T* Data;  int32 ArrayNum;  int32 ArrayMax; }   →  16 bytes
//
//  Errar isto nao da erro de compilacao: da' leitura de lixo, ou escrita em cima
//  de outro campo. O motor ja' guardou esse mesmo layout em `FStringCru`, e as
//  duas descricoes tem de continuar iguais — quando divergirem, a que ninguem
//  confere e' a que vai estar errada.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_COLECAO_H
#define BRZ_SDK_COLECAO_H

#include <cstdint>
#include <cstring>

#include "Base.h"

//  O alocador da Unreal e' um parametro de tipo em toda `TArray` do jogo. Ele nao
//  ocupa espaco nenhum na struct — existe so' para o tipo casar com o que o SDK
//  declara nas assinaturas (`TArray<AActor*,TSizedDefaultAllocator<32>>`), e a
//  assinatura e' a chave que resolve o simbolo.
template <int N>
struct TSizedDefaultAllocator {};

using FDefaultAllocator = TSizedDefaultAllocator<32>;

//  O registro de buffers que SAO nossos. Ver a nota em `TArray::Reserve`.
BRZ_API void BrzBufferRegistrar(const void* p);
BRZ_API void BrzBufferEsquecer(const void* p);
BRZ_API bool BrzBufferEhNosso(const void* p);

template <typename T, typename Alloc = TSizedDefaultAllocator<32>>
struct TArray
{
    T*      Data     = nullptr;
    int32_t ArrayNum = 0;
    int32_t ArrayMax = 0;

    TArray() = default;

    int32_t Num() const  { return ArrayNum; }
    int32_t Max() const  { return ArrayMax; }
    bool    IsEmpty() const { return ArrayNum <= 0; }
    T*      GetData() const { return Data; }

    //  ── O ACESSO CONFERE, E ISSO E' DELIBERADO ──────────────────────────────
    //
    //  Uma `TArray` que veio do jogo pode estar com `Data` nulo e `ArrayNum` > 0
    //  se o objeto foi lido cedo demais — e' o caso do ninho antes de o mundo
    //  popular, e do dino do save que ainda nao voltou. Indexar ali le' memoria
    //  que nao e' nossa, e a queda acontece em outro lugar.
    //
    //  Devolver o primeiro elemento seria pior: o chamador seguiria com um valor
    //  errado que parece certo.
    T& operator[](int32_t i)
    {
        static T vazio{};
        if (!Data || i < 0 || i >= ArrayNum) return vazio;
        return Data[i];
    }
    const T& operator[](int32_t i) const
    {
        static T vazio{};
        if (!Data || i < 0 || i >= ArrayNum) return vazio;
        return Data[i];
    }

    bool IsValidIndex(int32_t i) const { return Data && i >= 0 && i < ArrayNum; }

    T*       begin()       { return Data; }
    T*       end()         { return Data ? Data + ArrayNum : nullptr; }
    const T* begin() const { return Data; }
    const T* end()   const { return Data ? Data + ArrayNum : nullptr; }

    //  ── ADD / RESERVE / COPIA — E DE QUEM E' O BUFFER ────────────────────
    //
    //  O buffer que ESTA classe aloca sai do nosso heap. O que veio do JOGO (lido
    //  de um campo, preenchido por `GetAllActorsOfClass`) e' do jogo. Liberar um
    //  com o `free` do outro corrompe os dois heaps, muito depois, em quem nao tem
    //  culpa — e' o defeito mais caro desta arvore.
    //
    //  A posse NAO pode ser um membro: `FCustomItemData` e' feita de `TArray` por
    //  valor e vai ao jogo por ponteiro — um 17o byte aqui desloca todos os
    //  campos dela. Entao a posse mora num REGISTRO fora da struct: todo buffer
    //  que nos alocamos entra nele, e so' o que esta' nele e' liberado por nos.
    //  O `TArray` continua com os 16 bytes que o jogo espera.
    //
    //  Copiar e' copia FUNDA (aloca um buffer nosso e copia os elementos): e' o
    //  que `d.CustomDataNames = names;` quer dizer, e nunca faz dois donos do
    //  mesmo buffer. Mover transfere o buffer e mantem o registro como esta'.
    void Reserve(int32_t quantos)
    {
        if (quantos <= ArrayMax) return;
        if (Data && !BrzBufferEhNosso(Data)) return;   // e' do jogo: nao mexo
        T* novo = new T[size_t(quantos)]();
        if (Data) for (int32_t i = 0; i < ArrayNum; ++i) novo[i] = Data[i];
        BrzBufferRegistrar(novo);
        if (Data) { BrzBufferEsquecer(Data); delete[] Data; }
        Data = novo; ArrayMax = quantos;
    }
    int32_t Add(const T& v)
    {
        if (Data && !BrzBufferEhNosso(Data)) return -1;  // e' do jogo: nao mexo
        if (ArrayNum >= ArrayMax) Reserve(ArrayMax ? ArrayMax * 2 : 8);
        if (!Data) return -1;
        Data[ArrayNum] = v;
        return ArrayNum++;
    }
    void Append(const TArray& o) { for (int32_t i = 0; i < o.ArrayNum; ++i) Add(o.Data[i]); }
    //  `bytes.AddUninitialized(n)` e depois `memcpy(bytes.GetData(), ...)`: reserva
    //  e avanca a contagem sem inicializar. Devolve o indice do primeiro novo.
    int32_t AddUninitialized(int32_t quantos)
    {
        if (quantos <= 0) return ArrayNum;
        if (Data && !BrzBufferEhNosso(Data)) return -1;
        Reserve(ArrayNum + quantos);
        if (!Data) return -1;
        const int32_t antes = ArrayNum; ArrayNum += quantos; return antes;
    }
    void Empty()
    {
        if (Data && BrzBufferEhNosso(Data)) { BrzBufferEsquecer(Data); delete[] Data; }
        Data = nullptr; ArrayNum = 0; ArrayMax = 0;
    }
    ~TArray() { Empty(); }

    TArray(const TArray& o) { Reserve(o.ArrayNum); for (int32_t i = 0; i < o.ArrayNum; ++i) Add(o.Data[i]); }
    TArray& operator=(const TArray& o)
    {
        if (this != &o) { Empty(); Reserve(o.ArrayNum); for (int32_t i = 0; i < o.ArrayNum; ++i) Add(o.Data[i]); }
        return *this;
    }
    TArray(TArray&& o) noexcept : Data(o.Data), ArrayNum(o.ArrayNum), ArrayMax(o.ArrayMax)
    { o.Data = nullptr; o.ArrayNum = 0; o.ArrayMax = 0; }
    TArray& operator=(TArray&& o) noexcept
    {
        if (this != &o) { Empty(); Data = o.Data; ArrayNum = o.ArrayNum; ArrayMax = o.ArrayMax;
                          o.Data = nullptr; o.ArrayNum = 0; o.ArrayMax = 0; }
        return *this;
    }
};

//  Um ponteiro de classe embrulhado. Vale a nota de
//  [[o-invariante-1-nao-para-no-codigo]]: `TSubclassOf<X>*` sao DOIS niveis de
//  indirecao, e o SDK passa o ENDERECO dele para `NativeCall`. Quem tratar como um
//  nivel escreve no lugar errado sem erro nenhum.
struct UClass;

template <typename T>
struct TSubclassOf
{
    //  `UClass*`, e nao `void*`: o plugin faz `return a.uClass;` numa funcao que
    //  devolve `UClass*`, e `void*` nao converte sem cast.
    UClass* uClass = nullptr;

    TSubclassOf() = default;
    TSubclassOf(UClass* c) : uClass(c) {}
    TSubclassOf(void* c) : uClass(static_cast<UClass*>(c)) {}
    //  `TSubclassOf<UPrimalItem> bp = e->BluePrintEntryField();` — o campo e a
    //  chamada devolvem os ponteiros da ponte; aqui eles viram a classe.
    TSubclassOf(const BrzPonteiro& p) : uClass(static_cast<UClass*>(p.p)) {}
    TSubclassOf(const BrzCampoPonteiro& p) : uClass(static_cast<UClass*>(static_cast<void*>(p))) {}
    operator UClass*() const { return uClass; }
    operator void*() const   { return uClass; }
    explicit operator bool() const { return uClass != nullptr; }
};

// ── TWeakObjectPtr — o ponteiro que sabe que o alvo pode ter morrido ────────
//
//  Guardar `AActor*` cru entre um quadro e outro e' o defeito que ja' derrubou
//  este servidor duas vezes: o ator e' destruido, o ponteiro continua parecendo
//  valido, e a proxima leitura toca memoria que nao e' mais dele.
//
//  A Unreal guarda INDICE + NUMERO DE SERIE — dois inteiros, 8 bytes. E' esse o
//  layout, porque a struct atravessa a fronteira: `UWorld::PlayerControllerList`
//  e' um `TArray<TWeakObjectPtr<APlayerController>>`, e ler 16 bytes por item
//  onde ha' 8 desalinha a lista inteira a partir do segundo.
//
//  ── O QUE `Get()` CONFERE, E O QUE NAO CONFERE ────────────────────────────
//  Resolve o indice contra o vetor de objetos do jogo, agora. Se o objeto
//  daquela posicao foi destruido e a posicao esta' vazia, volta nulo. Se a
//  posicao foi REAPROVEITADA por outro objeto, o numero de serie e' o que
//  distinguiria — e o motor ainda nao o le'. Nesse caso `Get()` devolve o novo
//  ocupante. E' o mesmo que um ponteiro cru faria, so' que sem tocar memoria
//  liberada; e esta' dito aqui em vez de escondido.
BRZ_API void* BrzObjetoPorIndice(int indice);
BRZ_API int   BrzIndiceDoObjeto(const void* objeto);

template <typename T>
struct TWeakObjectPtr
{
    int32_t ObjectIndex        = -1;
    int32_t ObjectSerialNumber = 0;

    TWeakObjectPtr() = default;
    TWeakObjectPtr(T* p) : ObjectIndex(p ? BrzIndiceDoObjeto(p) : -1) {}

    //  De qualquer outro `TWeakObjectPtr<U>`: os dois inteiros sao os mesmos, e
    //  e' isso que deixa `for (TWeakObjectPtr<APlayerController> wp : lista)`
    //  compilar quando a lista veio tipada como `<void>`.
    template <typename U>
    TWeakObjectPtr(const TWeakObjectPtr<U>& o)
        : ObjectIndex(o.ObjectIndex), ObjectSerialNumber(o.ObjectSerialNumber) {}

    T*   Get() const     { return ObjectIndex < 0 ? nullptr : static_cast<T*>(BrzObjetoPorIndice(ObjectIndex)); }
    bool IsValid() const { return Get() != nullptr; }
    T*   operator->() const { return Get(); }
    explicit operator bool() const { return IsValid(); }
};

//  A versao `<void>` — e' a que sai dos campos, porque o gerador nao sabe o tipo
//  do alvo. `Get()` devolve `BrzPonteiro`, que se converte para o que o plugin
//  pedir: `APawn* p = Causer->InstigatorField().Get();` compila.
template <>
struct TWeakObjectPtr<void>
{
    int32_t ObjectIndex        = -1;
    int32_t ObjectSerialNumber = 0;
    TWeakObjectPtr() = default;
    BrzPonteiro Get() const { return BrzPonteiro(ObjectIndex < 0 ? nullptr : BrzObjetoPorIndice(ObjectIndex)); }
    bool IsValid() const    { return Get() != nullptr; }
    explicit operator bool() const { return IsValid(); }
};

// ── TObjectPtr — o ponteiro "forte" da Unreal 5 ────────────────────────────
//
//  Em servidor e' um ponteiro comum, 8 bytes — o `static_assert` abaixo e' a
//  prova, e se um dia deixar de ser, o header para de compilar em vez de ler a
//  memoria do jogo torta. Existe como TIPO, e nao achatado em `X*`, porque os
//  plugins escrevem `ator->InstigatorField().Get()`: o `.Get()` tem de existir.
template <typename T>
struct TObjectPtr
{
    T* Ptr = nullptr;
    TObjectPtr() = default;
    TObjectPtr(T* p) : Ptr(p) {}
    T*   Get() const        { return Ptr; }
    bool IsValid() const    { return Ptr != nullptr; }
    T*   operator->() const { return Ptr; }
    operator T*() const     { return Ptr; }
    TObjectPtr& operator=(T* p) { Ptr = p; return *this; }
    explicit operator bool() const { return Ptr != nullptr; }
};
static_assert(sizeof(TObjectPtr<int>) == sizeof(void*), "TObjectPtr tem de ser um ponteiro");

//  `GetWeakReference(ator)` — o atalho que os plugins escrevem.
template <typename T>
inline TWeakObjectPtr<T> GetWeakReference(T* p) { return TWeakObjectPtr<T>(p); }

struct AActor;

// ── vetor e rotacao — aqui, e nao em Servicos.h, porque TODO header gerado ──
//  inclui este e nao aquele; um campo `FVector` ou uma alca de ator num header
//  do jogo precisa achar o tipo sem puxar a camada de servicos inteira.
namespace UE { namespace Math {
template <typename T> struct TVector
{
    T X = T(0), Y = T(0), Z = T(0);
    bool IsNearlyZero(T tol = T(1.e-4)) const
    { return (X < 0 ? -X : X) <= tol && (Y < 0 ? -Y : Y) <= tol && (Z < 0 ? -Z : Z) <= tol; }
    bool IsZero() const { return X == T(0) && Y == T(0) && Z == T(0); }
};
}}
using FVector = UE::Math::TVector<double>;

//  Rotacao: os mesmos tres doubles, com outros nomes. A ordem e' a da Unreal —
//  Pitch, Yaw, Roll — e trocar dois deles nao da erro: da' o dino olhando para
//  cima quando devia olhar para o lado.
namespace UE { namespace Math {
template <typename T> struct TRotator { T Pitch = T(0), Yaw = T(0), Roll = T(0); };
}}
using FRotator = UE::Math::TRotator<double>;

//  A alca de um ator dentro de um `FHitResult`. E' o layout da UE5, estavel: o
//  ator e' o PRIMEIRO membro, e e' so' ele que os plugins leem
//  (`HitObjectHandleField().Actor.Get()`). Nao se aloca isto aqui — e' sempre
//  uma referencia para dentro do resultado de um traco que o jogo preencheu.
struct FActorInstanceHandle
{
    TWeakObjectPtr<AActor> Actor;
    TWeakObjectPtr<void>   Manager;
    int                    InstanceIndex = -1;
    int                    InstanceUID   = 0;
};

#endif  // BRZ_SDK_COLECAO_H
