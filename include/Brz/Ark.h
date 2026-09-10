// ═══════════════════════════════════════════════════════════════════════════════
//  Ark.h — o unico include de que um plugin precisa
//
//      #include <Brz/Ark.h>
//
//  Traz a base, os tipos, os servicos, o registro e as 910 classes do jogo.
//
//  ─────────────────────────────────────────────────────────────────────────────
//  O APELIDO `AsaApi`, E POR QUE ELE EXISTE AQUI
//  ─────────────────────────────────────────────────────────────────────────────
//  O namespace desta API e' `BrzApi`. Mas ha' anos de plugins de ARK escritos —
//  os nossos inclusive, os que levaram dias para ser polidos — chamando
//  `AsaApi::GetApiUtils()`, `AsaApi::GetCommands()`, `AsaApi::GetHooks()`.
//
//  A linha abaixo faz esses plugins compilarem sem uma unica edicao. Nao ha' nada
//  de outra API aqui dentro: nenhum binario, nenhum fonte, nenhuma dependencia. E'
//  so' um segundo nome para o MESMO namespace nosso — como um endereco que aceita
//  o nome antigo da rua.
//
//  Isso importa porque foi a incompatibilidade de FORMA que obrigou a reescrever
//  cada plugin, e cada reescrita quebrou alguma coisa: o `ce ` do CatastrofesBRZ,
//  o `id` do Vault, os nomes de parametro do `AddNewItem`. Um apelido de
//  namespace custa zero bytes no binario e apaga essa categoria inteira de erro.
//
//  Quem escrever plugin novo usa `BrzApi::`. Quem tem plugin pronto nao muda nada.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_ARK_H
#define BRZ_SDK_ARK_H

#include "Base.h"
#include "Campos.h"
#include "Colecao.h"
#include "Texto.h"
#include "Servicos.h"
#include "Registro.h"

#include "Jogo/Tudo.h"

//  O nome antigo da rua. Ver a nota acima.
namespace AsaApi = BrzApi;

#endif  // BRZ_SDK_ARK_H
