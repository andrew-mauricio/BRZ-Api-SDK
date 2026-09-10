// ═══════════════════════════════════════════════════════════════════════════════
//  API/Base.h — o caminho de include que os plugins de ARK ja' escrevem
//
//  Anos de plugins comecam com `#include <API/Base.h>`. Este arquivo existe para
//  que eles compilem contra a BRZ Api sem editar uma linha — e a razao e' a mesma
//  do apelido `AsaApi` em `Brz/Ark.h`: foi a incompatibilidade de FORMA que
//  obrigou a reescrever cada plugin, e cada reescrita quebrou alguma coisa.
//
//  Nao ha' nada de outra API aqui: e' um encaminhamento para o nosso header.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_COMPAT_API_BASE_H
#define BRZ_COMPAT_API_BASE_H
#include "../Brz/Base.h"
#include "../Brz/Campos.h"
#endif
