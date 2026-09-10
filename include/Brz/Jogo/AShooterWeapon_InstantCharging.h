// ==========================================================================
//  AShooterWeapon_InstantCharging — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANTCHARGING_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANTCHARGING_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AShooterWeapon_Instant.h"

struct AShooterWeapon_InstantCharging : public AShooterWeapon_Instant
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_InstantCharging"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantCharging.FireWeapon()
    // classe: a funcao mora em AShooterWeapon_Instant, e AShooterWeapon_InstantCharging herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_Instant.FireWeapon()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_InstantCharging.ServerSetCharging(double)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetCharging(double a0) const
    {
        NativeCall<void, double>(this, "AShooterWeapon_InstantCharging.ServerSetCharging(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantCharging.ServerSetCharging_Implementation(double)
    // endereco: cache_pdb_25090264
    void ServerSetCharging_Implementation(double a0) const
    {
        NativeCall<void, double>(this, "AShooterWeapon_InstantCharging.ServerSetCharging_Implementation(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantCharging.StartFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=334+grafo=3/3]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_InstantCharging.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantCharging.StopFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=262]]
    void StopFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_InstantCharging.StopFire()");
    }

    double& ChargeStartTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_InstantCharging.ChargeStartTime"); }
    BitFieldValue<bool, unsigned __int32> bDidFireWeapon()
    { return { (void*)this, "bDidFireWeapon" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANTCHARGING_H
