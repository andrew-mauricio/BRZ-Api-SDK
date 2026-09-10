// ==========================================================================
//  AShooterWeapon_Melee — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  Uma casca sobre `void*`: sem vtable, sem membro, nada do nosso codigo dentro
//  do seu DLL alem de `inline`. Voce compila com o compilador que quiser.
//
//  O CAMPO e' resolvido pelo NOME, em tempo de execucao, pela reflexao viva da
//  build que esta' rodando — e nao por offset cravado aqui, que apodreceria na
//  proxima atualizacao do jogo sem ninguem notar.
//
//  A FUNCAO vem da tabela de simbolos desta build. Simbolo que so' existe por
//  inferencia de posicao e' RECUSADO com o nome no log, em vez de chutado: um
//  endereco errado nao devolve valor esquisito, ele derruba o servidor ou faz
//  outra coisa com sucesso.
// ==========================================================================
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_MELEE_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_MELEE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AShooterWeapon.h"

struct AShooterWeapon_Melee : public AShooterWeapon
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Melee"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Melee.StartFire(bool)
    // classe: a funcao mora em AShooterWeapon, e AShooterWeapon_Melee herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Melee.StartReload(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartReload(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Melee.StartReload(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Melee.StartSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=136]]
    void StartSecondaryAction() const
    {
        NativeCall<void>(this, "AShooterWeapon_Melee.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Melee.StopFire()
    // endereco: cache_pdb_25090264
    void StopFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_Melee.StopFire()");
    }

    BitFieldValue<bool, unsigned __int32> bUseAltFireOnNormalFire()
    { return { (void*)this, "bUseAltFireOnNormalFire" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_MELEE_H
