// ==========================================================================
//  APlayerStartPIE — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APLAYERSTARTPIE_H
#define BRZ_SDK_JOGO_APLAYERSTARTPIE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APawn;
struct FActorTickFunction;
struct FName;
struct UCapsuleComponent;
struct UInputComponent;
struct UPrimitiveComponent;
struct USceneComponent;


struct APlayerStartPIE
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APlayerStartPIE"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerStartPIE.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerStartPIE.AutoReceiveInput"); }
    BrzCampoPonteiro BadSpriteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.BadSprite")); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.BlueprintCreatedComponents"); }
    TObjectPtr<UCapsuleComponent>& CapsuleComponentField() const
    { return *GetNativePointerField<TObjectPtr<UCapsuleComponent>*>(this, "APlayerStartPIE.CapsuleComponent"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APlayerStartPIE.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.CustomTimeDilation"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerStartPIE.DesiredRepGraphBehavior"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro GoodSpriteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.GoodSprite")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APlayerStartPIE.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerStartPIE.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APlayerStartPIE.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APlayerStartPIE.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.Layers"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.MinNetUpdateFrequency"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerStartPIE.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APlayerStartPIE.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerStartPIE.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerStartPIE.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APlayerStartPIE.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.PhysicsReplicationMode")); }
    FName& PlayerStartTagField() const
    { return *GetNativePointerField<FName*>(this, "APlayerStartPIE.PlayerStartTag"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APlayerStartPIE.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerStartPIE.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APlayerStartPIE.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerStartPIE.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APlayerStartPIE.RootComponent"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerStartPIE.SpawnCollisionHandlingMethod")); }
    int& SpawnPointRegionField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.SpawnPointRegion"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APlayerStartPIE.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APlayerStartPIE.StasisUnRegisteredComponents"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerStartPIE.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.TargetingTeam"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerStartPIE.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APlayerStartPIE.UpdateOverlapsMethodDuringLevelStreaming"); }
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
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsPIEPlayerStart()
    { return { (void*)this, "bIsPIEPlayerStart" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
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
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
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
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
};

#endif  // BRZ_SDK_JOGO_APLAYERSTARTPIE_H
