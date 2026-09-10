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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=37]]
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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=133]]
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
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> HasPerformedAnEnvirnonmentalImpact()
    { return { (void*)this, "HasPerformedAnEnvirnonmentalImpact" }; }
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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachOnImpact()
    { return { (void*)this, "bAttachOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bAttachOnProjectileBounced()
    { return { (void*)this, "bAttachOnProjectileBounced" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForNonBlockingHitImpactFX()
    { return { (void*)this, "bCheckForNonBlockingHitImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bClearStructureColorsOnImpact()
    { return { (void*)this, "bClearStructureColorsOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX()
    { return { (void*)this, "bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bColorizeStructureOnImpact()
    { return { (void*)this, "bColorizeStructureOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bDamageOnBeginOverlap()
    { return { (void*)this, "bDamageOnBeginOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnExplode()
    { return { (void*)this, "bDestroyOnExplode" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnExplodeNonBlockingImpact()
    { return { (void*)this, "bDestroyOnExplodeNonBlockingImpact" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDoFinalTraceCheckFromInstigatorToDirectDamageVictim()
    { return { (void*)this, "bDoFinalTraceCheckFromInstigatorToDirectDamageVictim" }; }
    BitFieldValue<bool, unsigned __int32> bDoFinalTraceCheckToDirectDamageVictim()
    { return { (void*)this, "bDoFinalTraceCheckToDirectDamageVictim" }; }
    BitFieldValue<bool, unsigned __int32> bDoFullRadialDamage()
    { return { (void*)this, "bDoFullRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDontExplodeOnAnyDamage()
    { return { (void*)this, "bDontExplodeOnAnyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDontFragmentOnDamage()
    { return { (void*)this, "bDontFragmentOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeEffectOnDestroy()
    { return { (void*)this, "bExplodeEffectOnDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnClient()
    { return { (void*)this, "bExplodeOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnImpact()
    { return { (void*)this, "bExplodeOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnLifeTimeEnd()
    { return { (void*)this, "bExplodeOnLifeTimeEnd" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnNonBlockingImpact()
    { return { (void*)this, "bExplodeOnNonBlockingImpact" }; }
    BitFieldValue<bool, unsigned __int32> bExploded()
    { return { (void*)this, "bExploded" }; }
    BitFieldValue<bool, unsigned __int32> bExplosionOrientUpwards()
    { return { (void*)this, "bExplosionOrientUpwards" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreBlockingHitClasses()
    { return { (void*)this, "bForceIgnoreBlockingHitClasses" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreFriendlyFire()
    { return { (void*)this, "bForceIgnoreFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    bool& bForceNetUpdateField() const
    { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Beam.bForceNetUpdate"); }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseTickFunction()
    { return { (void*)this, "bForceUseTickFunction" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bFragmentate()
    { return { (void*)this, "bFragmentate" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHadAttachParent()
    { return { (void*)this, "bHadAttachParent" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasImpacted()
    { return { (void*)this, "bHasImpacted" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDirectImpactRadialDamage()
    { return { (void*)this, "bIgnoreDirectImpactRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTurrets()
    { return { (void*)this, "bIgnoredByTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bImpactPvEOnlyAlly()
    { return { (void*)this, "bImpactPvEOnlyAlly" }; }
    BitFieldValue<bool, unsigned __int32> bImpactRequiresDinoLineOfSight()
    { return { (void*)this, "bImpactRequiresDinoLineOfSight" }; }
    BitFieldValue<bool, unsigned __int32> bImpactSetRotationToNormal()
    { return { (void*)this, "bImpactSetRotationToNormal" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsGlowStick()
    { return { (void*)this, "bIsGlowStick" }; }
    BitFieldValue<bool, unsigned __int32> bIsGlowStickSelf()
    { return { (void*)this, "bIsGlowStickSelf" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bMoveIgnoreOwner()
    { return { (void*)this, "bMoveIgnoreOwner" }; }
    BitFieldValue<bool, unsigned __int32> bMultiTraceCollideAgainstPawns()
    { return { (void*)this, "bMultiTraceCollideAgainstPawns" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNoImpactEmitterOnCharacterHit()
    { return { (void*)this, "bNoImpactEmitterOnCharacterHit" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingImpactNoExplosionEmitter()
    { return { (void*)this, "bNonBlockingImpactNoExplosionEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingVolumeMustBeWater()
    { return { (void*)this, "bNonBlockingVolumeMustBeWater" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventReflecting()
    { return { (void*)this, "bPreventReflecting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bRadialDamageIgnoreDamageCauser()
    { return { (void*)this, "bRadialDamageIgnoreDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateImpact()
    { return { (void*)this, "bReplicateImpact" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bResetHasImpactedOnMultiTraceForBlocking()
    { return { (void*)this, "bResetHasImpactedOnMultiTraceForBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bRotateMeshWhileMoving()
    { return { (void*)this, "bRotateMeshWhileMoving" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnExplosionTemplateOnClient()
    { return { (void*)this, "bSpawnExplosionTemplateOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnImpactEffectOnHit()
    { return { (void*)this, "bSpawnImpactEffectOnHit" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStopOnExplode()
    { return { (void*)this, "bStopOnExplode" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTickedNonBlockingHitImpactFX()
    { return { (void*)this, "bTickedNonBlockingHitImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bTraceForBlockingDoImpactBackTrace()
    { return { (void*)this, "bTraceForBlockingDoImpactBackTrace" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerDealtDirectDamageEvent()
    { return { (void*)this, "bTriggerDealtDirectDamageEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIgnoreProjectileImpact()
    { return { (void*)this, "bUseBPIgnoreProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIgnoreRadialDamageVictim()
    { return { (void*)this, "bUseBPIgnoreRadialDamageVictim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPProjectileBounced()
    { return { (void*)this, "bUseBPProjectileBounced" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRadialDamageMultiplier()
    { return { (void*)this, "bUseBPRadialDamageMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateExplosionEmitter()
    { return { (void*)this, "bUseBPUpdateExplosionEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseClientHitDetermination()
    { return { (void*)this, "bUseClientHitDetermination" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomColor()
    { return { (void*)this, "bUseCustomColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseMultiTraceForBlocking()
    { return { (void*)this, "bUseMultiTraceForBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseOwnerProjectileLife()
    { return { (void*)this, "bUseOwnerProjectileLife" }; }
    BitFieldValue<bool, unsigned __int32> bUseProjectileTraceChannel()
    { return { (void*)this, "bUseProjectileTraceChannel" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseTraceForBlocking()
    { return { (void*)this, "bUseTraceForBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseTraceForBlockingStopOnExplode()
    { return { (void*)this, "bUseTraceForBlockingStopOnExplode" }; }
    BitFieldValue<bool, unsigned __int32> bUseWeaponColorization()
    { return { (void*)this, "bUseWeaponColorization" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWeaponColorizationColorizeVFX()
    { return { (void*)this, "bWeaponColorizationColorizeVFX" }; }
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
