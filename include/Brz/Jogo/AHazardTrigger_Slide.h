// ==========================================================================
//  AHazardTrigger_Slide — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AHAZARDTRIGGER_SLIDE_H
#define BRZ_SDK_JOGO_AHAZARDTRIGGER_SLIDE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAudioComponent;
struct UParticleSystem;
struct USoundBase;
struct USplineComponent;

#include "AHazardTrigger.h"

struct AHazardTrigger_Slide : public AHazardTrigger
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AHazardTrigger_Slide"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.Activate()
    // endereco: casamento de bytes com a build de referencia
    void Activate() const
    {
        NativeCall<void>(this, "AHazardTrigger_Slide.Activate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.CanActivate()
    // endereco: casamento de bytes com a build de referencia
    bool CanActivate() const
    {
        return NativeCall<bool>(this, "AHazardTrigger_Slide.CanActivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.Deactivate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    void Deactivate() const
    {
        NativeCall<void>(this, "AHazardTrigger_Slide.Deactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.OnCharacterEnter_Implementation(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnCharacterEnter_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AHazardTrigger_Slide.OnCharacterEnter_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.OnCharacterExit_Implementation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnCharacterExit_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AHazardTrigger_Slide.OnCharacterExit_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.SpawnProjectile_Implementation(UE::Math::TVector<double>,UE::Math::TVector<
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=649+grafo=6/6]]
    void SpawnProjectile_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AHazardTrigger_Slide.SpawnProjectile_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.SpawnWarningFX()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SpawnWarningFX() const
    {
        NativeCall<void>(this, "AHazardTrigger_Slide.SpawnWarningFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.SpawnWarningFX_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=24]]
    void SpawnWarningFX_Implementation() const
    {
        NativeCall<void>(this, "AHazardTrigger_Slide.SpawnWarningFX_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AHazardTrigger_Slide.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger_Slide.UpdateActive(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateActive(float a0) const
    {
        NativeCall<void, float>(this, "AHazardTrigger_Slide.UpdateActive(float)", a0);
    }

    float& ActivationChanceField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ActivationChance"); }
    float& ActivationIncrementField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ActivationIncrement"); }
    float& CurrentActivationChanceField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.CurrentActivationChance"); }
    TArray<void*>& FinalEmitterField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHazardTrigger_Slide.FinalEmitter"); }
    TArray<void*>& ImpactEmitterField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHazardTrigger_Slide.ImpactEmitter"); }
    float& ImpulseField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.Impulse"); }
    float& ImpulseVelocityLimitField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ImpulseVelocityLimit"); }
    float& MaxProjectileIntervalField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxProjectileInterval"); }
    BrzCampoPonteiro MaxSplineUphillToleranceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger_Slide.MaxSplineUphillTolerance")); }
    float& MaxWarningIntervalField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxWarningInterval"); }
    float& MinProjectileIntervalField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinProjectileInterval"); }
    float& MinTimeBetweenActivationsField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinTimeBetweenActivations"); }
    float& MinWarningIntervalField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinWarningInterval"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger_Slide.ProjectileClass")); }
    float& ProjectileTimerField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ProjectileTimer"); }
    BrzCampoPonteiro SlideComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger_Slide.SlideComponents")); }
    TArray<UParticleSystem*>& SlideFXField() const
    { return *GetNativePointerField<TArray<UParticleSystem*>*>(this, "AHazardTrigger_Slide.SlideFX"); }
    BrzCampoPonteiro SlideFXUpdateIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger_Slide.SlideFXUpdateInterval")); }
    BrzCampoPonteiro SlideFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger_Slide.SlideFX_Niagara")); }
    TArray<void*>& SlidePositionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHazardTrigger_Slide.SlidePositions"); }
    USoundBase*& SlideSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "AHazardTrigger_Slide.SlideSound"); }
    float& SlideSpeedField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SlideSpeed"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AHazardTrigger_Slide.SoundToPlay"); }
    float& SplineSeparationField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SplineSeparation"); }
    TArray<USplineComponent*>& SplinesField() const
    { return *GetNativePointerField<TArray<USplineComponent*>*>(this, "AHazardTrigger_Slide.Splines"); }
    int& StructureDamageField() const
    { return *GetNativePointerField<int*>(this, "AHazardTrigger_Slide.StructureDamage"); }
    BrzCampoPonteiro StructureDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger_Slide.StructureDamageType")); }
    TArray<void*>& WarningEmitterField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHazardTrigger_Slide.WarningEmitter"); }
    float& WarningTimerField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.WarningTimer"); }
    float& WaveWidthField() const
    { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.WaveWidth"); }
};

#endif  // BRZ_SDK_JOGO_AHAZARDTRIGGER_SLIDE_H
