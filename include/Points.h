// ═══════════════════════════════════════════════════════════════════════════════
//  Points.h — os pontos da loja, no nome que os plugins de ARK ja' usam
//
//  Sete plugins desta arvore chamam `ArkShop::Points::GetPoints(eos)` e
//  `SpendPoints(n, eos)`. Nos binarios deles esses tres simbolos vinham de um
//  `ArkShop.dll` de terceiro — e' o que o `objdump` mostra na tabela de imports.
//
//  Aqui eles descem para o SERVICO `loja`, que a nossa Loja publica no motor
//  (`PublicarServico("loja", 1, ...)`), e que le' o MESMO banco: nao ha' copia de
//  saldo, nao ha' sincronizacao, nao ha' duas verdades sobre quanto o jogador tem.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  POR QUE SE PROCURA O SERVICO A CADA CHAMADA
//  ─────────────────────────────────────────────────────────────────────────────
//  Guardar o ponteiro uma vez seria mais rapido e erraria feio: se a Loja cair ou
//  for descarregada, o ponteiro guardado continua parecendo valido e a chamada vai
//  para memoria que nao e' mais dela. Procurar e' andar por um punhado de
//  entradas — nao custa nada, e e' a diferenca entre PERCEBER que a Loja morreu e
//  chamar como se nada fosse.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  E QUANDO A LOJA NAO ESTA' NO AR
//  ─────────────────────────────────────────────────────────────────────────────
//  `GetPoints` devolve 0 e `SpendPoints`/`AddPoints` devolvem `false`. **Falso e'
//  "nao gastou"**, e quem chamou tem de tratar: entregar o item mesmo assim seria
//  dar de graca; nao entregar e nao devolver seria cobrar sem entregar.
//
//  Foi exatamente isso que aconteceu em 04/09/2026 — o `ArkShop` original cobrava
//  ANTES de resolver a classe do item, e 21 das 268 entradas pagavam sem entregar.
//  Aqui o retorno existe para ser lido.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_POINTS_H
#define BRZ_SDK_POINTS_H

#include <string>

#include "Brz/Base.h"
#include "Brz/Texto.h"

namespace BrzApi { namespace Loja {

//  A mesma tabela que a Loja publica. Os tres campos, nesta ordem — e' o
//  `brz::LojaServico` do `_comum`, e as duas descricoes tem de continuar iguais.
struct Servico
{
    int (*Pontos)(const char* eos);
    int (*Gastar)(const char* eos, int quanto);
    int (*Dar)(const char* eos, int quanto);
};

BRZ_API const Servico* Achar();

}}  // namespace BrzApi::Loja

// ── o nome que os plugins ja' digitam ──────────────────────────────────────
namespace ArkShop { namespace Points {

inline int GetPoints(const FString& eos)
{
    const BrzApi::Loja::Servico* s = BrzApi::Loja::Achar();
    return (s && s->Pontos) ? s->Pontos(eos.ToString().c_str()) : 0;
}

inline bool SpendPoints(int quanto, const FString& eos)
{
    const BrzApi::Loja::Servico* s = BrzApi::Loja::Achar();
    if (!s || !s->Gastar) return false;
    return s->Gastar(eos.ToString().c_str(), quanto) != 0;
}

inline bool AddPoints(int quanto, const FString& eos)
{
    const BrzApi::Loja::Servico* s = BrzApi::Loja::Achar();
    if (!s || !s->Dar) return false;
    return s->Dar(eos.ToString().c_str(), quanto) != 0;
}

}}  // namespace ArkShop::Points

#endif  // BRZ_SDK_POINTS_H
