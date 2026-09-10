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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyAmmoOnImpactEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShipCannonProjectile.ApplyAmmoOnImpactEffect(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipCannonProjectile.GetDamageMultiplierForTarget(AActor*)
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=114+grafo=3/3]]
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
    BitFieldValue<bool, unsigned __int32> HasPerformedAnEnvirnonmentalImpact()
    { return { (void*)this, "HasPerformedAnEnvirnonmentalImpact" }; }
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
    { return *GetNativePointerField<bool*>(this, "APrimalShipCannonProjectile.bForceNetUpdate"); }
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
};

#endif  // BRZ_SDK_JOGO_APRIMALSHIPCANNONPROJECTILE_H
