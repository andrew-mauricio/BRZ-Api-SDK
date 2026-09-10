// ═══════════════════════════════════════════════════════════════════════════════
//  Permissions.h — grupos e permissoes, no nome que os plugins ja' escrevem
//
//  Desce para o servico `permissions`, que o nosso plugin Permissions publica no
//  motor e que le' o MESMO banco (MariaDB). Nao ha' copia de grupo nem
//  sincronizacao: as duas pontas leem a mesma tabela.
//
//  Procurado a cada chamada, e nao guardado — se o Permissions cair, o ponteiro
//  guardado continuaria parecendo valido. Ver a mesma nota em `Points.h`.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_PERMISSIONS_H
#define BRZ_SDK_PERMISSIONS_H

#include <string>

#include "Brz/Base.h"
#include "Brz/Texto.h"

namespace BrzApi { namespace Permissoes {

//  -- ESTA STRUCT E' UM CONTRATO BINARIO, E ELA ESTAVA ERRADA --------------
//
//  Ela precisa ser IDENTICA, campo a campo e na ordem, a `PermissoesServico`
//  de `plugins/_comum/BrzPluginComum.h`, que e' o que o plugin `Permissions`
//  PUBLICA. Nao ha' compilador conferindo isso: sao dois arquivos separados,
//  e o casamento e' por POSICAO na memoria.
//
//  Ate' 06/09/2026 divergia em tres dos cinco campos:
//
//      slot | publicado                | esperado aqui   | efeito
//      -----|--------------------------|-----------------|------------------
//       0   | TemPermissao             | TemPermissao    | ok
//       1   | EstaNoGrupo              | EstaNoGrupo     | ok
//       2   | GruposDoJogador          | Adicionar       | ARGUMENTOS ERRADOS
//       3   | TriboTemPermissao        | Remover         | ARGUMENTOS ERRADOS
//       4   | AdicionarAoGrupo         | Grupos          | ARGUMENTOS ERRADOS
//       5   | RemoverDoGrupo           | (nao existia)   | faltando
//
//  `AddPlayerToGroup` chamaria `GruposDoJogador(eos, grupo)` - um `const
//  char*` no lugar de um `char*` de saida e um `int` de tamanho. Escrita em
//  memoria de string constante: queda do servidor, longe daqui.
//
//  O que impediu isso de acontecer foi o OUTRO defeito: o nome pedido era
//  "permissions" e o publicado e' "permissoes", entao `Achar()` devolvia nulo
//  e nada era chamado. Dois erros que se anulavam - e o preco foi que NENHUM
//  comando com permissao funcionou: `CanUse` do DinoTools comeca com
//  `allowed = false` e so' muda se o servico responder.
struct Servico
{
    int (*TemPermissao)(const char* eos, const char* permissao);
    int (*EstaNoGrupo)(const char* eos, const char* grupo);
    int (*GruposDoJogador)(const char* eos, char* saida, int tam);
    int (*TriboTemPermissao)(int tribo, const char* permissao);
    int (*AdicionarAoGrupo)(const char* eos, const char* grupo, char* erro, int tam);
    int (*RemoverDoGrupo)(const char* eos, const char* grupo, char* erro, int tam);
};

BRZ_API const Servico* Achar();

}}  // namespace BrzApi::Permissoes

namespace Permissions {

//  ── FALSO QUANDO O PERMISSIONS NAO ESTA' NO AR ────────────────────────────
//
//  E' a resposta segura: sem saber se o jogador tem a permissao, NAO se concede.
//  O contrario abriria comando de admin para todo mundo no minuto em que o
//  plugin de permissoes falhasse — e falharia em silencio.
inline bool IsPlayerInGroup(const FString& eos, const FString& grupo)
{
    const BrzApi::Permissoes::Servico* s = BrzApi::Permissoes::Achar();
    if (!s || !s->EstaNoGrupo) return false;
    return s->EstaNoGrupo(eos.ToString().c_str(), grupo.ToString().c_str()) != 0;
}

//  Os plugins escrevem `IsPlayerHasPermission`. E' esse o nome no fonte deles, e
//  e' esse que tem de existir — renomear obrigaria a editar cada chamada.
inline bool IsPlayerHasPermission(const FString& eos, const FString& permissao)
{
    const BrzApi::Permissoes::Servico* s = BrzApi::Permissoes::Achar();
    if (!s || !s->TemPermissao) return false;
    return s->TemPermissao(eos.ToString().c_str(), permissao.ToString().c_str()) != 0;
}

inline bool HasPermission(const FString& eos, const FString& permissao)
{ return IsPlayerHasPermission(eos, permissao); }

//  ── OS GRUPOS DE UM JOGADOR ────────────────────────────────────────────────
//
//  Devolve a lista separada por virgula, como o banco a guarda
//  (`Default,Admins,VIP,`). Vazia quando o Permissions nao esta' no ar — e vazia
//  significa "nenhum grupo", que e' a resposta segura: sem grupo, sem permissao.
inline FString GetPlayerGroups(const FString& eos)
{
    const BrzApi::Permissoes::Servico* s = BrzApi::Permissoes::Achar();
    if (!s || !s->GruposDoJogador) return FString();
    char buf[512] = {0};
    if (!s->GruposDoJogador(eos.ToString().c_str(), buf, int(sizeof(buf)))) return FString();
    return FString(buf);
}

inline bool AddPlayerToGroup(const FString& eos, const FString& grupo)
{
    const BrzApi::Permissoes::Servico* s = BrzApi::Permissoes::Achar();
    if (!s || !s->AdicionarAoGrupo) return false;
    //  O servico devolve o motivo da recusa por escrito; quem chama aqui so'
    //  quer o sim/nao, entao o texto vai para um buffer local e e' descartado.
    //  Passar `nullptr` seria contar com o plugin conferir, e ele nao confere.
    char erro[256] = {0};
    return s->AdicionarAoGrupo(eos.ToString().c_str(), grupo.ToString().c_str(),
                               erro, int(sizeof(erro))) != 0;
}

inline bool RemovePlayerFromGroup(const FString& eos, const FString& grupo)
{
    const BrzApi::Permissoes::Servico* s = BrzApi::Permissoes::Achar();
    if (!s || !s->RemoverDoGrupo) return false;
    char erro[256] = {0};
    return s->RemoverDoGrupo(eos.ToString().c_str(), grupo.ToString().c_str(),
                             erro, int(sizeof(erro))) != 0;
}

}  // namespace Permissions

#endif  // BRZ_SDK_PERMISSIONS_H
