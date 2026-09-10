// ==========================================================================
//  APrimalProjectileArrow — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPROJECTILEARROW_H
#define BRZ_SDK_JOGO_APRIMALPROJECTILEARROW_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundBase;

#include "AShooterProjectile.h"

struct APrimalProjectileArrow : public AShooterProjectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalProjectileArrow"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileArrow.BeginPlay()
    // classe: a funcao mora em AShooterProjectile, e APrimalProjectileArrow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterProjectile.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileArrow.OnImpact_Implementation(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnImpact_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalProjectileArrow.OnImpact_Implementation(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileArrow.PickUpCheck()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=96]]
    void PickUpCheck() const
    {
        NativeCall<void>(this, "APrimalProjectileArrow.PickUpCheck()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileArrow.PickUpCheck_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void PickUpCheck_Implementation() const
    {
        NativeCall<void>(this, "APrimalProjectileArrow.PickUpCheck_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileArrow.PickedUp(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=128]]
    void PickedUp(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalProjectileArrow.PickedUp(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileArrow.PickedUp_Implementation(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void PickedUp_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalProjectileArrow.PickedUp_Implementation(AShooterCharacter*)", a0);
    }

    USoundBase*& ArrowPickedUpSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalProjectileArrow.ArrowPickedUpSound"); }
    //  no cache antigo este campo se chamava ArrowPickupTimerHandle.
    //  nesta build ele e' `ArrowPickedUpSound` — resolve por NOME.
    BrzCampoPonteiro ArrowPickupTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileArrow.ArrowPickedUpSound")); }
    float& PercentChanceToBreakOnImpactField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileArrow.PercentChanceToBreakOnImpact"); }
    BrzCampoPonteiro PickItemClassApplySkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileArrow.PickItemClassApplySkin")); }
    int& PickUpQuantityField() const
    { return *GetNativePointerField<int*>(this, "APrimalProjectileArrow.PickUpQuantity"); }
    float& PickUpRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileArrow.PickUpRadius"); }
    BrzCampoPonteiro PickupItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileArrow.PickupItemClass")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALPROJECTILEARROW_H
