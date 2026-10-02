// ==========================================================================
//  APrimalShipCannonProjectile — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSHIPCANNONPROJECTILE_H
#define BRZ_SDK_JOGO_APRIMALSHIPCANNONPROJECTILE_H

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


struct APrimalShipCannonProjectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalShipCannonProjectile"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.ApplyAmmoOnImpactEffect(FHitResult&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro ApplyAmmoOnImpactEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShipCannonProjectile.ApplyAmmoOnImpactEffect(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.GetDamageMultiplierForTarget(AActor*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetDamageMultiplierForTarget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShipCannonProjectile.GetDamageMultiplierForTarget(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.InitVelocity(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitVelocity(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalShipCannonProjectile.InitVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.OnImpact_Implementation(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnImpact_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalShipCannonProjectile.OnImpact_Implementation(FHitResult&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.OnRep_ReplicatedInitialSpeed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_ReplicatedInitialSpeed() const
    {
        return NativeCall<void*>(this, "APrimalShipCannonProjectile.OnRep_ReplicatedInitialSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.ProjectileDealtDirectDamage(AActor*,float,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProjectileDealtDirectDamage(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalShipCannonProjectile.ProjectileDealtDirectDamage(AActor*,float,FHitResult&)", a0, a1, a2);
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipCannonProjectile.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachedImpactBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.AttachedImpactBuff")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipCannonProjectile.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.BlueprintCreatedComponents"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.Children"); }
    float& ClientFailsafeLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ClientFailsafeLifespan"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ClientReplicationSendNowThreshold"); }
    float& ClientSideCollisionRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ClientSideCollisionRadius"); }
    USphereComponent*& CollisionCompField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalShipCannonProjectile.CollisionComp"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.CustomActorFlags"); }
    BrzCampoPonteiro CustomColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.CustomColor")); }
    float& CustomColorDesaturationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.CustomColorDesaturation"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipCannonProjectile.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.CustomTimeDilation"); }
    TWeakObjectPtr<void>& DamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipCannonProjectile.DamageCauser"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipCannonProjectile.DesiredRepGraphBehavior"); }
    float& DistanceCutoffForMidairProjectileFoliageTracingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.DistanceCutoffForMidairProjectileFoliageTracing"); }
    BrzCampoPonteiro ExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.ExplosionEmitter")); }
    double& ExplosionNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.ExplosionNetworkTime"); }
    int& FiredFromCannonIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.FiredFromCannonIndex"); }
    BrzCampoPonteiro FiredFromWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.FiredFromWeapon")); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalShipCannonProjectile.FluidSimSplashTemplateOverride"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.ForceMaximumReplicationRateUntilTime"); }
    float& ForceNetUpdateTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ForceNetUpdateTimeInterval"); }
    float& FragmentConeHalfAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.FragmentConeHalfAngle"); }
    float& FragmentOriginOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.FragmentOriginOffset"); }
    BrzCampoPonteiro FragmentProjectileTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.FragmentProjectileTemplate")); }
    BrzCampoPonteiro HasPerformedAnEnvirnonmentalImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.HasPerformedAnEnvirnonmentalImpact")); }
    BrzCampoPonteiro HitCharacterBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.HitCharacterBuff")); }
    TArray<void*>& IgnoreNonBlockingHitClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.IgnoreNonBlockingHitClasses"); }
    TArray<void*>& ImpactEmitterField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.ImpactEmitter"); }
    BrzCampoPonteiro ImpactTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.ImpactTemplate")); }
    TArray<AActor*>& ImpactedActorsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "APrimalShipCannonProjectile.ImpactedActors"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalShipCannonProjectile.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalShipCannonProjectile.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.LastExitStasisTime"); }
    BrzCampoPonteiro LastFoliageTraceCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.LastFoliageTraceCheckLocation")); }
    double& LastFoliageTraceCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.LastFoliageTraceCheckTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipCannonProjectile.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipCannonProjectile.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.LastThrottledTickTime"); }
    BrzCampoPonteiro LastVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.LastVelocity")); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.Layers"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MovementCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.MovementComp")); }
    BrzCampoPonteiro MuzzleFlashEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.MuzzleFlashEmitter")); }
    BrzCampoPonteiro MyAmmoTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.MyAmmoTemplate")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipCannonProjectile.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipCannonProjectile.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipCannonProjectile.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraParticleCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.NiagaraParticleComp")); }
    float& NudgedImpactDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.NudgedImpactDistance"); }
    int& NumberOfFragmentProjectilesField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.NumberOfFragmentProjectiles"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.OriginalCreationTime"); }
    int& OverrideImpactExplosionVFXColorIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.OverrideImpactExplosionVFXColorID"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipCannonProjectile.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipCannonProjectile.ParentComponent"); }
    float& ParticleColorIntensityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ParticleColorIntensity"); }
    UParticleSystemComponent*& ParticleCompField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalShipCannonProjectile.ParticleComp"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.PhysicsReplicationMode")); }
    float& PostExplosionKeepAliveLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.PostExplosionKeepAliveLifeSpan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalShipCannonProjectile.PrimaryActorTick"); }
    USoundCue*& ProjectileBounceSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalShipCannonProjectile.ProjectileBounceSound"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipCannonProjectile.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.RepGraphBehavior")); }
    FHitResult& ReplicatedHitInfoField() const
    { return *GetNativePointerField<FHitResult*>(this, "APrimalShipCannonProjectile.ReplicatedHitInfo"); }
    float& ReplicatedInitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ReplicatedInitialSpeed"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipCannonProjectile.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalShipCannonProjectile.RootComponent"); }
    BrzCampoPonteiro RotateMeshFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.RotateMeshFactor")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalShipCannonProjectile.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShipCannonProjectile.StasisUnRegisteredComponents"); }
    UStaticMeshComponent*& StaticMeshCompField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalShipCannonProjectile.StaticMeshComp"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipCannonProjectile.Tags"); }
    BrzCampoPonteiro TargetDamageMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.TargetDamageMultipliers")); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.TargetingTeam"); }
    float& TimeBetweenMidairProjectileFoliageTracesField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.TimeBetweenMidairProjectileFoliageTraces"); }
    float& TornOffLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.TornOffLifeSpan"); }
    float& TraceForBlockingRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.TraceForBlockingRadius"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipCannonProjectile.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.UpdateOverlapsMethodDuringLevelStreaming"); }
    FName& VFXColorizationParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipCannonProjectile.VFXColorizationParameterName"); }
    TWeakObjectPtr<void>& WeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipCannonProjectile.Weapon"); }
    unsigned char& WeaponColorizeVFXUseColorRegionField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipCannonProjectile.WeaponColorizeVFXUseColorRegion"); }
    BrzCampoPonteiro WeaponConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.WeaponConfig")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAttachOnImpact")); }
    BrzCampoPonteiro bAttachOnProjectileBouncedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAttachOnProjectileBounced")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bCanBeInCluster")); }
    BrzCampoPonteiro bCheckForNonBlockingHitImpactFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bCheckForNonBlockingHitImpactFX")); }
    BrzCampoPonteiro bClearStructureColorsOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bClearStructureColorsOnImpact")); }
    BrzCampoPonteiro bClientTickWhenInAirAndCheckForNonBlockingHitImpactFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bCollideWhenPlacing")); }
    BrzCampoPonteiro bColorizeStructureOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bColorizeStructureOnImpact")); }
    BrzCampoPonteiro bDamageOnBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDamageOnBeginOverlap")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnExplodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDestroyOnExplode")); }
    BrzCampoPonteiro bDestroyOnExplodeNonBlockingImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDestroyOnExplodeNonBlockingImpact")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDoFinalTraceCheckFromInstigatorToDirectDamageVictimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDoFinalTraceCheckFromInstigatorToDirectDamageVictim")); }
    BrzCampoPonteiro bDoFinalTraceCheckToDirectDamageVictimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDoFinalTraceCheckToDirectDamageVictim")); }
    BrzCampoPonteiro bDoFullRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDoFullRadialDamage")); }
    BrzCampoPonteiro bDontExplodeOnAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDontExplodeOnAnyDamage")); }
    BrzCampoPonteiro bDontFragmentOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bDontFragmentOnDamage")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExchangedRoles")); }
    BrzCampoPonteiro bExplodeEffectOnDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExplodeEffectOnDestroy")); }
    BrzCampoPonteiro bExplodeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExplodeOnClient")); }
    BrzCampoPonteiro bExplodeOnImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExplodeOnImpact")); }
    BrzCampoPonteiro bExplodeOnLifeTimeEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExplodeOnLifeTimeEnd")); }
    BrzCampoPonteiro bExplodeOnNonBlockingImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExplodeOnNonBlockingImpact")); }
    BrzCampoPonteiro bExplodedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExploded")); }
    BrzCampoPonteiro bExplosionOrientUpwardsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bExplosionOrientUpwards")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceIgnoreBlockingHitClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceIgnoreBlockingHitClasses")); }
    BrzCampoPonteiro bForceIgnoreFriendlyFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceIgnoreFriendlyFire")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceNetAddressable")); }
    bool& bForceNetUpdateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipCannonProjectile.bForceNetUpdate"); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceUseTickFunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForceUseTickFunction")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFragmentateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bFragmentate")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHadAttachParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bHadAttachParent")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpactedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bHasImpacted")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bHidden")); }
    BrzCampoPonteiro bIgnoreDirectImpactRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIgnoreDirectImpactRadialDamage")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIgnoredByTurrets")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImpactPvEOnlyAllyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bImpactPvEOnlyAlly")); }
    BrzCampoPonteiro bImpactRequiresDinoLineOfSightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bImpactRequiresDinoLineOfSight")); }
    BrzCampoPonteiro bImpactSetRotationToNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bImpactSetRotationToNormal")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsGlowStickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsGlowStick")); }
    BrzCampoPonteiro bIsGlowStickSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsGlowStickSelf")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMoveIgnoreOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bMoveIgnoreOwner")); }
    BrzCampoPonteiro bMultiTraceCollideAgainstPawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bMultiTraceCollideAgainstPawns")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoImpactEmitterOnCharacterHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNoImpactEmitterOnCharacterHit")); }
    BrzCampoPonteiro bNonBlockingImpactNoExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNonBlockingImpactNoExplosionEmitter")); }
    BrzCampoPonteiro bNonBlockingVolumeMustBeWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bNonBlockingVolumeMustBeWater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventReflectingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventReflecting")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bPreventSaving")); }
    BrzCampoPonteiro bRadialDamageIgnoreDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bRadialDamageIgnoreDamageCauser")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bReplicateImpact")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bReplicates")); }
    BrzCampoPonteiro bResetHasImpactedOnMultiTraceForBlockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bResetHasImpactedOnMultiTraceForBlocking")); }
    BrzCampoPonteiro bRotateMeshWhileMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bRotateMeshWhileMoving")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bSavedWhenStasised")); }
    BrzCampoPonteiro bSpawnExplosionTemplateOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bSpawnExplosionTemplateOnClient")); }
    BrzCampoPonteiro bSpawnImpactEffectOnHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bSpawnImpactEffectOnHit")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bStasised")); }
    BrzCampoPonteiro bStopOnExplodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bStopOnExplode")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bTearOff")); }
    BrzCampoPonteiro bTickedNonBlockingHitImpactFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bTickedNonBlockingHitImpactFX")); }
    BrzCampoPonteiro bTraceForBlockingDoImpactBackTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bTraceForBlockingDoImpactBackTrace")); }
    BrzCampoPonteiro bTriggerDealtDirectDamageEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bTriggerDealtDirectDamageEvent")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPIgnoreProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPIgnoreProjectileImpact")); }
    BrzCampoPonteiro bUseBPIgnoreRadialDamageVictimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPIgnoreRadialDamageVictim")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPProjectileBouncedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPProjectileBounced")); }
    BrzCampoPonteiro bUseBPRadialDamageMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPRadialDamageMultiplier")); }
    BrzCampoPonteiro bUseBPUpdateExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseBPUpdateExplosionEmitter")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseClientHitDeterminationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseClientHitDetermination")); }
    BrzCampoPonteiro bUseCustomColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseCustomColor")); }
    BrzCampoPonteiro bUseMultiTraceForBlockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseMultiTraceForBlocking")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOwnerProjectileLifeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseOwnerProjectileLife")); }
    BrzCampoPonteiro bUseProjectileTraceChannelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseProjectileTraceChannel")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTraceForBlockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseTraceForBlocking")); }
    BrzCampoPonteiro bUseTraceForBlockingStopOnExplodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseTraceForBlockingStopOnExplode")); }
    BrzCampoPonteiro bUseWeaponColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bUseWeaponColorization")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWeaponColorizationColorizeVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipCannonProjectile.bWeaponColorizationColorizeVFX")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSHIPCANNONPROJECTILE_H
