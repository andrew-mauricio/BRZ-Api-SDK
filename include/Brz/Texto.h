// ═══════════════════════════════════════════════════════════════════════════════
//  Texto.h — FString, o texto do jogo
//
//  Uma `FString` E' uma `TArray<wchar_t>`: mesmos tres campos, mesmos 16 bytes.
//  O que ela acrescenta e' a regra da contagem, que e' a fonte do erro mais comum
//  ao mexer com ela:
//
//      **`ArrayNum` INCLUI o terminador.**
//
//  Copiar `ArrayNum` caracteres traz o `\0` junto; escrever `ArrayNum`
//  caracteres deixa a string sem terminador para o jogo. As duas pontas do mesmo
//  engano, e nenhuma das duas da erro na hora.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  DE QUEM E' A MEMORIA
//  ─────────────────────────────────────────────────────────────────────────────
//  O buffer de uma `FString` que vai para o jogo tem de ser alocado com o
//  `FMemory::Malloc` **do ARK**, e nao com o `new` do nosso runtime. Um plugin e o
//  servidor tem heaps diferentes; entregar memoria de um para o outro liberar
//  corrompe as duas — e a queda acontece muito depois, em quem nao tem culpa.
//
//  Por isso a alocacao desce para a DLL da ponte, que pede ao motor. E' a mesma
//  razao pela qual `brz::Texto` do `BrzPluginApi.h` existe e devolve o que pediu.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_TEXTO_H
#define BRZ_SDK_TEXTO_H

#include <cstdint>
#include <string>

#include "Base.h"
#include "Campos.h"
#include "Colecao.h"
#include "Campos.h"
#include "Registro.h"

#ifndef TEXT
#define TEXT(x) L##x
#endif

//  `TCHAR` ja' existe no `winnt.h` do Windows, e la' ele muda de tipo conforme
//  `UNICODE` esteja definido ou nao. Redefinir aqui colide com o SDK do sistema,
//  e pior: faria os dois construtores de `FString` virarem o mesmo quando ele
//  fosse `char`. Entao NAO se redefine — usa-se `wchar_t`, que e' o que a Unreal
//  usa de verdade, e o apelido so' entra se ninguem mais o tiver criado.
using ANSICHAR = char;
using WIDECHAR = wchar_t;

// ── comparacao de texto largo, sem diferenca de caixa ───────────────────────
//  O texto de um FName, decodificado pelo motor. `std::string` vazio quando o
//  indice nao existe — e vazio E' resultado, diferente de lixo.
BRZ_API std::string BrzNomeDeFName(int indice);

struct BRZ_API FGenericPlatformStricmp
{
    static int Strnicmp(const wchar_t* a, const wchar_t* b, size_t n);
};

class FString;

//  Como procurar um nome: achar (None se nao existir) ou acrescentar.
enum EFindName { FNAME_Find = 0, FNAME_Add = 1, FNAME_Replace_Not_Safe_For_Threading = 2 };

// ── FName — o nome que a Unreal guarda como INDICE, e nao como texto ───────
//
//  Tudo que tem nome no jogo (classe, propriedade, ator) carrega um `FName`: dois
//  inteiros que apontam para uma tabela global de textos. Comparar dois FName e'
//  comparar dois inteiros — e' por isso que a engine os usa em vez de string.
//
//  O texto so' aparece quando se pede: `ToString()` desce para o motor, que
//  decodifica o indice. Um plugin que compare `ToString()` numa laco esta'
//  decodificando por item; comparar os FName direto e' o que a engine faz.
struct BRZ_API FName
{
    int32_t ComparisonIndex = 0;
    int32_t Number          = 0;

    FName() = default;
    FName(int32_t indice, int32_t numero = 0)
        : ComparisonIndex(indice), Number(numero) {}

    //  ── POR TEXTO: E' O JOGO QUEM POE O NOME NA TABELA DELE ──────────────
    //
    //  A mesma forma do SDK de referencia, com a mesma chave — que a tabela
    //  desta build resolve com certeza (`FName.FName(char*,EFindName)`). Nenhum
    //  indice e' inventado aqui: `FNAME_Add` faz o jogo criar a entrada,
    //  `FNAME_Find` devolve None se ela nao existir. Um FName montado a mao seria
    //  um indice apontando para OUTRO nome, sem erro nenhum.
    FName(const char* texto, EFindName modo = FNAME_Add)
    { NativeCall<void, const char*, EFindName>(this, "FName.FName(char*,EFindName)", texto, modo); }
    FName(const char* texto, int32_t numero)
    { NativeCall<void, const char*, int>(this, "FName.FName(char*,int)", texto, numero); }

    //  A forma larga do SDK e' so' declarada la'; aqui vai pela estreita.
    FName(const wchar_t* texto, EFindName modo = FNAME_Add)
    {
        std::string s;
        if (texto) { const int n = WideCharToMultiByte(CP_UTF8, 0, texto, -1, nullptr, 0, nullptr, nullptr);
                     if (n > 1) { s.resize(size_t(n - 1)); WideCharToMultiByte(CP_UTF8, 0, texto, -1, &s[0], n, nullptr, nullptr); } }
        NativeCall<void, const char*, EFindName>(this, "FName.FName(char*,EFindName)", s.c_str(), modo);
    }

    bool operator==(const FName& o) const
    { return ComparisonIndex == o.ComparisonIndex && Number == o.Number; }
    bool operator!=(const FName& o) const { return !(*this == o); }
    bool IsNone() const { return ComparisonIndex == 0; }

    //  Devolve `FString`, e nao `std::string`: e' assim que os plugins a usam
    //  (`n.ToString().ToString()` para chegar ao `std::string`). A declaracao
    //  vem depois de `FString` existir, la' embaixo.
    FString ToString() const;
};

// ── FString ────────────────────────────────────────────────────────────────
//
//  O layout tem de ser exatamente este, nesta ordem, sem virtual nenhum: a struct
//  e' passada por valor e por referencia para funcoes do jogo, e um byte a mais
//  desalinha tudo depois dela.
class BRZ_API FString
{
public:
    FString() = default;
    FString(const ANSICHAR* texto);     // exportado: aloca com o heap do ARK
    FString(const WIDECHAR* texto);     // idem
    FString(const std::string& texto) : FString(texto.c_str()) {}

    ~FString() { Liberar(); }

    FString(const FString& o)            { AssignRange(o.Data, o.Comprimento()); }
    FString& operator=(const FString& o) { if (this != &o) { Liberar(); AssignRange(o.Data, o.Comprimento()); } return *this; }
    FString(FString&& o) noexcept
        : Data(o.Data), ArrayNum(o.ArrayNum), ArrayMax(o.ArrayMax)
    { o.Data = nullptr; o.ArrayNum = 0; o.ArrayMax = 0; }

    void AppendChars(const WIDECHAR* texto, int quantos);

    //  `ArrayNum` conta o terminador; o comprimento nao.
    int32_t     Comprimento() const { return ArrayNum > 0 ? ArrayNum - 1 : 0; }
    int32_t     Len()         const { return Comprimento(); }
    bool        IsEmpty()     const { return Comprimento() <= 0; }
    const WIDECHAR* operator*() const { return Data ? Data : L""; }

    //  Para uso do plugin em `std::string`. A conversao mora na DLL porque tem de
    //  ser UTF-16 → UTF-8 de verdade: tratar cada byte como um caractere entrega
    //  "acao" com cedilha como "aÃ§Ã£o" no chat, e nenhum teste em ASCII pega isso.
    std::string ToString() const;

    //  ── `ParseIntoArray`, que os plugins usam para partir comando ──────────
    //
    //  Devolve quantos pedacos sairam. `descartarVazios` existe porque o uso mais
    //  comum e' partir uma linha de comando por espaco, e dois espacos seguidos
    //  nao sao um argumento vazio — sao um espaco a mais que alguem digitou.
    int ParseIntoArray(TArray<FString>& saida, const WIDECHAR* separador,
                       bool descartarVazios = true) const;

    //  Os tres campos, na ordem da Unreal. Publicos porque o jogo os le' e
    //  escreve direto — esconder aqui nao esconderia nada.
    WIDECHAR* Data   = nullptr;
    int32_t ArrayNum = 0;
    int32_t ArrayMax = 0;

private:
    void AssignRange(const WIDECHAR* texto, int quantos);
    void Liberar();
};


inline FString FName::ToString() const
{
    return FString(BrzNomeDeFName(ComparisonIndex));
}

#endif  // BRZ_SDK_TEXTO_H
