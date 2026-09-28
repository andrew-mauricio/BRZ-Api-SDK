// ==========================================================================
//  AShooterProjectile_Beam — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPROJECTILE_BEAM_H
#define BRZ_SDK_JOGO_ASHOOTERPROJECTILE_BEAM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APawn;
struct FActorTickFunction;
struct FHitResult;
struct FName;
struct UInputComponent;
struct UNiagaraSystem;
struct UParticleSystemComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundCue;
struct USphereComponent;
struct UStaticMeshComponent;


struct AShooterProjectile_Beam
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterProjectile_Beam"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.ApplyDefaultBeamDamage(FHitResult&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyDefaultBeamDamage(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "AShooterProjectile_Beam.ApplyDefaultBeamDamage(FHitResult&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.BPOnBeamHit(FHitResult&,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnBeamHit(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterProjectile_Beam.BPOnBeamHit(FHitResult&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.BPOnBeamHitFX(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOnBeamHitFX(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterProjectile_Beam.BPOnBeamHitFX(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.BPOnBeamTick(float,UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnBeamTick(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "AShooterProjectile_Beam.BPOnBeamTick(float,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.BPScaleDamageByCharge(float,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPScaleDamageByCharge(float a0, float a1) const
    {
        return NativeCall<void*, float, float>(this, "AShooterProjectile_Beam.BPScaleDamageByCharge(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Beam.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.ClampDirectionToCone(UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClampDirectionToCone(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterProjectile_Beam.ClampDirectionToCone(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Beam.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.FinalizeVisual(float,UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinalizeVisual(float a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, float, void*, void*, void*, void*, void*>(this, "AShooterProjectile_Beam.FinalizeVisual(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.FindInstigatorSocketTransform(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindInstigatorSocketTransform(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile_Beam.FindInstigatorSocketTransform(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.GetMuzzleLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMuzzleLocation() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Beam.GetMuzzleLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.InitVelocity(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitVelocity(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile_Beam.InitVelocity(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.IsServerCopy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsServerCopy() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Beam.IsServerCopy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.OnBeamLifeTimerExpired()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnBeamLifeTimerExpired() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Beam.OnBeamLifeTimerExpired()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.PerformBeamTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PerformBeamTrace(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "AShooterProjectile_Beam.PerformBeamTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,TArray<FHitResult,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.ResolveAimDirection()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveAimDirection() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Beam.ResolveAimDirection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.RunLocalVisualTrace(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RunLocalVisualTrace(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterProjectile_Beam.RunLocalVisualTrace(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.ServerDoBeamTickTrace(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerDoBeamTickTrace(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterProjectile_Beam.ServerDoBeamTickTrace(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Beam.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterProjectile_Beam.Tick(float)", a0);
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterProjectile_Beam.ActorUsingQuickAction"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Beam.AttachSocketName"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.AutoReceiveInput"); }
    float& BaseDamagePerTickField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.BaseDamagePerTick"); }
    BrzCampoPonteiro BeamDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.BeamDamageType")); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.BlueprintCreatedComponents"); }
    float& ChargeAmountField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ChargeAmount"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.Children"); }
    float& ClientFailsafeLifespanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ClientFailsafeLifespan"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ClientReplicationSendNowThreshold"); }
    float& ClientSideCollisionRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ClientSideCollisionRadius"); }
    USphereComponent*& CollisionCompField() const
    { return *GetNativePointerField<USphereComponent**>(this, "AShooterProjectile_Beam.CollisionComp"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.CustomActorFlags"); }
    BrzCampoPonteiro CustomColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.CustomColor")); }
    float& CustomColorDesaturationField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.CustomColorDesaturation"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Beam.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.CustomTimeDilation"); }
    TWeakObjectPtr<void>& DamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterProjectile_Beam.DamageCauser"); }
    float& DamageTickIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.DamageTickInterval"); }
    float& DebugDrawDurationField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.DebugDrawDuration"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.DesiredRepGraphBehavior"); }
    float& DistanceCutoffForMidairProjectileFoliageTracingField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.DistanceCutoffForMidairProjectileFoliageTracing"); }
    BrzCampoPonteiro ExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.ExplosionEmitter")); }
    double& ExplosionNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.ExplosionNetworkTime"); }
    BrzCampoPonteiro FiredFromWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.FiredFromWeapon")); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterProjectile_Beam.FluidSimSplashTemplateOverride"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.ForceMaximumReplicationRateUntilTime"); }
    float& ForceNetUpdateTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ForceNetUpdateTimeInterval"); }
    float& ForceUpdateAimedRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ForceUpdateAimedRadius"); }
    float& FragmentConeHalfAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.FragmentConeHalfAngle"); }
    float& FragmentOriginOffsetField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.FragmentOriginOffset"); }
    BrzCampoPonteiro FragmentProjectileTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.FragmentProjectileTemplate")); }
    BrzCampoPonteiro HasPerformedAnEnvirnonmentalImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.HasPerformedAnEnvirnonmentalImpact")); }
    TArray<void*>& IgnoreNonBlockingHitClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.IgnoreNonBlockingHitClasses"); }
    TArray<void*>& ImpactEmitterField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.ImpactEmitter"); }
    BrzCampoPonteiro ImpactTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.ImpactTemplate")); }
    TArray<AActor*>& ImpactedActorsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "AShooterProjectile_Beam.ImpactedActors"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterProjectile_Beam.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterProjectile_Beam.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.LastExitStasisTime"); }
    BrzCampoPonteiro LastFoliageTraceCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.LastFoliageTraceCheckLocation")); }
    double& LastFoliageTraceCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.LastFoliageTraceCheckTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterProjectile_Beam.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterProjectile_Beam.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.LastThrottledTickTime"); }
    BrzCampoPonteiro LastVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.LastVelocity")); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.Layers"); }
    float& MaxBeamLengthField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MaxBeamLength"); }
    float& MaxDeviationDegreesField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MaxDeviationDegrees"); }
    int& MaxHitsPerTickField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.MaxHitsPerTick"); }
    float& MaxLifeSecondsField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MaxLifeSeconds"); }
    float& MinBeamLengthField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MinBeamLength"); }
    float& MinLifeSecondsField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MinLifeSeconds"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MovementCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.MovementComp")); }
    BrzCampoPonteiro MyAmmoTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.MyAmmoTemplate")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Beam.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterProjectile_Beam.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraParticleCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.NiagaraParticleComp")); }
    float& NudgedImpactDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.NudgedImpactDistance"); }
    int& NumberOfFragmentProjectilesField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.NumberOfFragmentProjectiles"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.OriginalCreationTime"); }
    int& OverrideImpactExplosionVFXColorIDField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.OverrideImpactExplosionVFXColorID"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterProjectile_Beam.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterProjectile_Beam.ParentComponent"); }
    float& ParticleColorIntensityField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ParticleColorIntensity"); }
    UParticleSystemComponent*& ParticleCompField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterProjectile_Beam.ParticleComp"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.PhysicsReplicationMode")); }
    float& PostExplosionKeepAliveLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.PostExplosionKeepAliveLifeSpan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterProjectile_Beam.PrimaryActorTick"); }
    USoundCue*& ProjectileBounceSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterProjectile_Beam.ProjectileBounceSound"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.RepGraphBehavior")); }
    FHitResult& ReplicatedHitInfoField() const
    { return *GetNativePointerField<FHitResult*>(this, "AShooterProjectile_Beam.ReplicatedHitInfo"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterProjectile_Beam.RootComponent"); }
    BrzCampoPonteiro RotateMeshFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.RotateMeshFactor")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterProjectile_Beam.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterProjectile_Beam.StasisUnRegisteredComponents"); }
    UStaticMeshComponent*& StaticMeshCompField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterProjectile_Beam.StaticMeshComp"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Beam.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.TargetingTeam"); }
    float& TimeBetweenMidairProjectileFoliageTracesField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.TimeBetweenMidairProjectileFoliageTraces"); }
    //  no cache antigo este campo se chamava TimeSinceLastTrace.
    //  nesta build ele e' `bDebugDraw` — resolve por NOME.
    BrzCampoPonteiro TimeSinceLastTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDebugDraw")); }
    float& TornOffLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.TornOffLifeSpan"); }
    unsigned char& TraceChannelField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.TraceChannel"); }
    float& TraceForBlockingRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.TraceForBlockingRadius"); }
    float& TraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.TraceRadius"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Beam.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.UpdateOverlapsMethodDuringLevelStreaming"); }
    FName& VFXColorizationParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Beam.VFXColorizationParameterName"); }
    float& VisualInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.VisualInterpSpeed"); }
    TWeakObjectPtr<void>& WeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterProjectile_Beam.Weapon"); }
    unsigned char& WeaponColorizeVFXUseColorRegionField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile_Beam.WeaponColorizeVFXUseColorRegion"); }
    BrzCampoPonteiro WeaponConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.WeaponConfig")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAttachOnImpact")); }
    BrzCampoPonteiro bAttachOnProjectileBouncedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAttachOnProjectileBounced")); }
    BrzCampoPonteiro bAttachToInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAttachToInstigator")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bCanBeInCluster")); }
    BrzCampoPonteiro bCheckForNonBlockingHitImpactFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bCheckForNonBlockingHitImpactFX")); }
    BrzCampoPonteiro bClearStructureColorsOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bClearStructureColorsOnImpact")); }
    BrzCampoPonteiro bClientTickWhenInAirAndCheckForNonBlockingHitImpactFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bCollideWhenPlacing")); }
    BrzCampoPonteiro bColorizeStructureOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bColorizeStructureOnImpact")); }
    BrzCampoPonteiro bDamageOnBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDamageOnBeginOverlap")); }
    BrzCampoPonteiro bDebugDrawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDebugDraw")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnExplodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDestroyOnExplode")); }
    BrzCampoPonteiro bDestroyOnExplodeNonBlockingImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDestroyOnExplodeNonBlockingImpact")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDoFinalTraceCheckFromInstigatorToDirectDamageVictimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDoFinalTraceCheckFromInstigatorToDirectDamageVictim")); }
    BrzCampoPonteiro bDoFinalTraceCheckToDirectDamageVictimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDoFinalTraceCheckToDirectDamageVictim")); }
    BrzCampoPonteiro bDoFullRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDoFullRadialDamage")); }
    BrzCampoPonteiro bDontExplodeOnAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDontExplodeOnAnyDamage")); }
    BrzCampoPonteiro bDontFragmentOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bDontFragmentOnDamage")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExchangedRoles")); }
    BrzCampoPonteiro bExplodeEffectOnDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExplodeEffectOnDestroy")); }
    BrzCampoPonteiro bExplodeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExplodeOnClient")); }
    BrzCampoPonteiro bExplodeOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExplodeOnImpact")); }
    BrzCampoPonteiro bExplodeOnLifeTimeEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExplodeOnLifeTimeEnd")); }
    BrzCampoPonteiro bExplodeOnNonBlockingImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExplodeOnNonBlockingImpact")); }
    BrzCampoPonteiro bExplodedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExploded")); }
    BrzCampoPonteiro bExplosionOrientUpwardsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bExplosionOrientUpwards")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceIgnoreBlockingHitClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceIgnoreBlockingHitClasses")); }
    BrzCampoPonteiro bForceIgnoreFriendlyFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceIgnoreFriendlyFire")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceNetAddressable")); }
    bool& bForceNetUpdateField() const
    { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Beam.bForceNetUpdate"); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceUpdateAimedCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceUpdateAimedCharacters")); }
    BrzCampoPonteiro bForceUpdateInstigatorMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceUpdateInstigatorMesh")); }
    BrzCampoPonteiro bForceUseTickFunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForceUseTickFunction")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFragmentateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bFragmentate")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHadAttachParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bHadAttachParent")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpactedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bHasImpacted")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bHidden")); }
    BrzCampoPonteiro bIgnoreDirectImpactRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIgnoreDirectImpactRadialDamage")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIgnoredByTurrets")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImpactPvEOnlyAllyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bImpactPvEOnlyAlly")); }
    BrzCampoPonteiro bImpactRequiresDinoLineOfSightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bImpactRequiresDinoLineOfSight")); }
    BrzCampoPonteiro bImpactSetRotationToNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bImpactSetRotationToNormal")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsGlowStickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsGlowStick")); }
    BrzCampoPonteiro bIsGlowStickSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsGlowStickSelf")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMoveIgnoreOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bMoveIgnoreOwner")); }
    BrzCampoPonteiro bMultiHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bMultiHit")); }
    BrzCampoPonteiro bMultiTraceCollideAgainstPawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bMultiTraceCollideAgainstPawns")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoImpactEmitterOnCharacterHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNoImpactEmitterOnCharacterHit")); }
    BrzCampoPonteiro bNonBlockingImpactNoExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNonBlockingImpactNoExplosionEmitter")); }
    BrzCampoPonteiro bNonBlockingVolumeMustBeWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bNonBlockingVolumeMustBeWater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventReflectingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventReflecting")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bPreventSaving")); }
    BrzCampoPonteiro bRadialDamageIgnoreDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bRadialDamageIgnoreDamageCauser")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bReplicateImpact")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bReplicates")); }
    BrzCampoPonteiro bResetHasImpactedOnMultiTraceForBlockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bResetHasImpactedOnMultiTraceForBlocking")); }
    BrzCampoPonteiro bRotateMeshWhileMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bRotateMeshWhileMoving")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bSavedWhenStasised")); }
    BrzCampoPonteiro bSpawnExplosionTemplateOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bSpawnExplosionTemplateOnClient")); }
    BrzCampoPonteiro bSpawnImpactEffectOnHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bSpawnImpactEffectOnHit")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bStasised")); }
    BrzCampoPonteiro bStopOnExplodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bStopOnExplode")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bTearOff")); }
    BrzCampoPonteiro bTickedNonBlockingHitImpactFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bTickedNonBlockingHitImpactFX")); }
    BrzCampoPonteiro bTraceForBlockingDoImpactBackTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bTraceForBlockingDoImpactBackTrace")); }
    BrzCampoPonteiro bTriggerDealtDirectDamageEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bTriggerDealtDirectDamageEvent")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPIgnoreProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPIgnoreProjectileImpact")); }
    BrzCampoPonteiro bUseBPIgnoreRadialDamageVictimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPIgnoreRadialDamageVictim")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPProjectileBouncedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPProjectileBounced")); }
    BrzCampoPonteiro bUseBPRadialDamageMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPRadialDamageMultiplier")); }
    BrzCampoPonteiro bUseBPUpdateExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseBPUpdateExplosionEmitter")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseClientHitDeterminationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseClientHitDetermination")); }
    BrzCampoPonteiro bUseCustomColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseCustomColor")); }
    BrzCampoPonteiro bUseMultiTraceForBlockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseMultiTraceForBlocking")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOwnerProjectileLifeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseOwnerProjectileLife")); }
    BrzCampoPonteiro bUseProjectileTraceChannelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseProjectileTraceChannel")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTraceForBlockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseTraceForBlocking")); }
    BrzCampoPonteiro bUseTraceForBlockingStopOnExplodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseTraceForBlockingStopOnExplode")); }
    BrzCampoPonteiro bUseWeaponColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bUseWeaponColorization")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWeaponColorizationColorizeVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Beam.bWeaponColorizationColorizeVFX")); }
    BitFieldValue<bool, unsigned __int32> bAttachToInstigator()
    { return { (void*)this, "bAttachToInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bDebugDraw()
    { return { (void*)this, "bDebugDraw" }; }
    BitFieldValue<bool, unsigned __int32> bForceUpdateAimedCharacters()
    { return { (void*)this, "bForceUpdateAimedCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bForceUpdateInstigatorMesh()
    { return { (void*)this, "bForceUpdateInstigatorMesh" }; }
    BitFieldValue<bool, unsigned __int32> bMultiHit()
    { return { (void*)this, "bMultiHit" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPROJECTILE_BEAM_H
