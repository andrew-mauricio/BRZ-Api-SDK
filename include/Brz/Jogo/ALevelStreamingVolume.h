// ==========================================================================
//  ALevelStreamingVolume — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ALEVELSTREAMINGVOLUME_H
#define BRZ_SDK_JOGO_ALEVELSTREAMINGVOLUME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APawn;
struct FActorTickFunction;
struct FName;
struct UInputComponent;
struct UPrimitiveComponent;
struct USceneComponent;


struct ALevelStreamingVolume
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ALevelStreamingVolume"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "ALevelStreamingVolume.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.BlueprintCreatedComponents"); }
    BrzCampoPonteiro BoxOptimizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.BoxOptimization")); }
    BrzCampoPonteiro BrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.Brush")); }
    BrzCampoPonteiro BrushColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.BrushColor")); }
    BrzCampoPonteiro BrushComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.BrushComponent")); }
    unsigned char& BrushTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.BrushType"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "ALevelStreamingVolume.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.CustomTimeDilation"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.DesiredRepGraphBehavior"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.ForceMaximumReplicationRateUntilTime"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "ALevelStreamingVolume.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "ALevelStreamingVolume.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "ALevelStreamingVolume.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "ALevelStreamingVolume.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.Layers"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.MinNetUpdateFrequency"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "ALevelStreamingVolume.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "ALevelStreamingVolume.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "ALevelStreamingVolume.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "ALevelStreamingVolume.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.PhysicsReplicationMode")); }
    int& PolyFlagsField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.PolyFlags"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "ALevelStreamingVolume.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ALevelStreamingVolume.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "ALevelStreamingVolume.RootComponent"); }
    BrzCampoPonteiro SavedSelectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.SavedSelections")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "ALevelStreamingVolume.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "ALevelStreamingVolume.StasisUnRegisteredComponents"); }
    BrzCampoPonteiro StreamingLevelNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.StreamingLevelNames")); }
    unsigned char& StreamingUsageField() const
    { return *GetNativePointerField<unsigned char*>(this, "ALevelStreamingVolume.StreamingUsage"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ALevelStreamingVolume.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.TargetingTeam"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "ALevelStreamingVolume.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "ALevelStreamingVolume.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowCollisionComponentWithZeroRadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAllowCollisionComponentWithZeroRadius")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bCanBeInCluster")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bCollideWhenPlacing")); }
    BrzCampoPonteiro bColoredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bColored")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bDisabled")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEditorPreVisOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bEditorPreVisOnly")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bInManipulationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bInManipulation")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotForClientOrServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bNotForClientOrServer")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPlaceableFromClassBrowserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPlaceableFromClassBrowser")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bSavedWhenStasised")); }
    BrzCampoPonteiro bSolidWhenSelectedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bSolidWhenSelected")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bStasised")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ALevelStreamingVolume.bWantsServerThrottledTick")); }
    BitFieldValue<bool, unsigned __int32> bDisabled()
    { return { (void*)this, "bDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bEditorPreVisOnly()
    { return { (void*)this, "bEditorPreVisOnly" }; }

};

#endif  // BRZ_SDK_JOGO_ALEVELSTREAMINGVOLUME_H
