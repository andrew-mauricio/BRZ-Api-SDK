// ==========================================================================
//  APrimalProjectileFlare — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPROJECTILEFLARE_H
#define BRZ_SDK_JOGO_APRIMALPROJECTILEFLARE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UParticleSystemComponent;
struct USoundBase;

#include "AShooterProjectile.h"

struct APrimalProjectileFlare : public AShooterProjectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalProjectileFlare"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileFlare.ActivateSecondParticles()
    // endereco: casamento de bytes com a build de referencia
    void ActivateSecondParticles() const
    {
        NativeCall<void>(this, "APrimalProjectileFlare.ActivateSecondParticles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileFlare.ApplyRandomMovement()
    // endereco: casamento de bytes com a build de referencia
    void ApplyRandomMovement() const
    {
        NativeCall<void>(this, "APrimalProjectileFlare.ApplyRandomMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileFlare.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalProjectileFlare.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileFlare.DeactivateProjectileEffects()
    // endereco: casamento de bytes com a build de referencia
    void DeactivateProjectileEffects() const
    {
        NativeCall<void>(this, "APrimalProjectileFlare.DeactivateProjectileEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileFlare.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalProjectileFlare.Tick(float)", a0);
    }

    float& LightColorIntensityField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.LightColorIntensity"); }
    float& RandomFallingMovementIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.RandomFallingMovementInterval"); }
    float& RandomFallingMovementStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.RandomFallingMovementStrength"); }
    UParticleSystemComponent*& SecondParticleCompField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalProjectileFlare.SecondParticleComp"); }
    USoundBase*& SecondParticleSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalProjectileFlare.SecondParticleSound"); }
    float& TimeToActivateSecondParticleCompField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.TimeToActivateSecondParticleComp"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALPROJECTILEFLARE_H
