// ═══════════════════════════════════════════════════════════════════════════════
//  Registro.h — para onde vai o que o plugin escreve
//
//  Um plugin de ARK loga o tempo todo, e a forma que ele conhece e'
//  `Log::GetLog()->info(...)`. Aqui essa forma continua, e o destino e' o log do
//  motor — o mesmo arquivo onde o resto da BRZ Api escreve.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  POR QUE NAO SE USA A BIBLIOTECA DE LOG DELES
//  ─────────────────────────────────────────────────────────────────────────────
//  A API da comunidade usa `spdlog`, e expoe os "sinks" dela para o plugin
//  acrescentar destinos. Puxar `spdlog` para ca' significaria arrastar a
//  dependencia inteira — e ela vem com `fmt`, e o projeto deles ainda pede
//  `openssl` e `poco` para baixar o cache do CDN, que nos NAO baixamos.
//
//  Entao o registro e' nosso, com a mesma forma: `->info`, `->warn`, `->error`,
//  `->critical`, e formatacao por `{}` como o plugin ja' escreve.
//
//  E ele NAO se perde antes de o motor chegar: o que for escrito na fase 1, antes
//  de a tabela existir, vai para o depurador do sistema. Perder justamente as
//  linhas que explicam por que nada subiu seria o pior momento para ficar mudo.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_REGISTRO_H
#define BRZ_SDK_REGISTRO_H

#include <memory>
#include <string>
#include <vector>

#include "Base.h"

//  A unica coisa que precisa atravessar a fronteira da DLL. Tudo o mais aqui e'
//  molde e roda dentro do plugin.
BRZ_API void BrzRegistrarLinha(const char* texto);

namespace BrzRegistro {

// ── a formatacao por `{}`, sem arrastar biblioteca ─────────────────────────
//
//  Cada `{}` consome o proximo argumento, na ordem. Um `{}` a mais fica como
//  esta' no texto — e' preferivel a linha sair com um `{}` visivel do que sumir,
//  ou pior, do que ler um argumento que nao existe.
inline void Costurar(std::string& fora, const std::string& fmt, size_t& de)
{
    fora.append(fmt, de, std::string::npos);
    de = fmt.size();
}

template <typename T, typename... R>
void Costurar(std::string& fora, const std::string& fmt, size_t& de,
              const T& valor, const R&... resto)
{
    const size_t p = fmt.find("{}", de);
    if (p == std::string::npos) { Costurar(fora, fmt, de); return; }
    fora.append(fmt, de, p - de);

    if constexpr (std::is_convertible_v<T, std::string>) fora += std::string(valor);
    else if constexpr (std::is_same_v<T, bool>)          fora += valor ? "true" : "false";
    else                                                  fora += std::to_string(valor);

    de = p + 2;
    Costurar(fora, fmt, de, resto...);
}

class BRZ_API Registrador
{
public:
    template <typename... A> void info(const std::string& fmt, const A&... a)
    { Escrever("", fmt, a...); }
    template <typename... A> void warn(const std::string& fmt, const A&... a)
    { Escrever("aviso: ", fmt, a...); }
    template <typename... A> void error(const std::string& fmt, const A&... a)
    { Escrever("ERRO: ", fmt, a...); }
    template <typename... A> void critical(const std::string& fmt, const A&... a)
    { Escrever("CRITICO: ", fmt, a...); }
    template <typename... A> void debug(const std::string& fmt, const A&... a)
    { Escrever("", fmt, a...); }

private:
    template <typename... A>
    void Escrever(const char* prefixo, const std::string& fmt, const A&... a)
    {
        std::string linha(prefixo);
        size_t de = 0;
        Costurar(linha, fmt, de, a...);
        Cru(linha.c_str());
    }
    //  `inline` e chamando a export livre: o metodo privado de uma classe
    //  exportada nem sempre entra na `.lib` do jeito que o linker do plugin
    //  espera — foi o que travou o Guardian ("simbolo externo nao resolvido").
    //  A funcao livre e' exportada sem ambiguidade.
    void Cru(const char* texto) { BrzRegistrarLinha(texto); }
};

BRZ_API std::shared_ptr<Registrador> GetLog();

// ── `Log::Get().Init("MeuPlugin")` ─────────────────────────────────────────
//
//  Muitos plugins abrem com esta linha. Em outras APIs ela cria um arquivo de log
//  proprio do plugin; aqui NAO cria: tudo cai no log do motor, junto com o resto
//  da BRZ Api.
//
//  Isso e' deliberado. Um log por plugin significa 24 arquivos para cruzar quando
//  o servidor cai, e a linha que explica a queda quase nunca esta' no arquivo em
//  que se procura primeiro. Nesta arvore ja' custou dois dias procurar crash onde
//  havia desligamento ordenado.
//
//  O nome dado aqui vira PREFIXO das linhas daquele plugin, entao a informacao
//  nao se perde — ela so' fica no mesmo lugar que todo o resto.
class Fabrica
{
public:
    //  `inline`: nao ha' nada do motor aqui. Guardar o nome roda dentro do
    //  proprio plugin, e exportar isso so' aumentaria a superficie da DLL.
    void Init(const std::string& nomeDoPlugin) { nome_ = nomeDoPlugin; }
    const std::string& Nome() const { return nome_; }
private:
    std::string nome_;
};

inline Fabrica& Get()
{
    static Fabrica unica;
    return unica;
}

}  // namespace BrzRegistro

//  A forma curta que o plugin usa: `Log::GetLog()->info(...)`.
namespace Log = BrzRegistro;

#endif  // BRZ_SDK_REGISTRO_H
