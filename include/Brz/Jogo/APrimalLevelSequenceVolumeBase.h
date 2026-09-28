// ==========================================================================
//  APrimalLevelSequenceVolumeBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALLEVELSEQUENCEVOLUMEBASE_H
#define BRZ_SDK_JOGO_APRIMALLEVELSEQUENCEVOLUMEBASE_H

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


struct APrimalLevelSequenceVolumeBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalLevelSequenceVolumeBase"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalLevelSequenceVolumeBase.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalLevelSequenceVolumeBase.Tick(float)", a0);
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalLevelSequenceVolumeBase.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalLevelSequenceVolumeBase.AutoReceiveInput"); }
    BrzCampoPonteiro BindingOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.BindingOverrides")); }
    float& BlendDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.BlendDistance"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.BlueprintCreatedComponents"); }
    BrzCampoPonteiro BurnInInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.BurnInInstance")); }
    BrzCampoPonteiro BurnInOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.BurnInOptions")); }
    BrzCampoPonteiro CameraSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.CameraSettings")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalLevelSequenceVolumeBase.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.CustomTimeDilation"); }
    BrzCampoPonteiro DefaultInstanceDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.DefaultInstanceData")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalLevelSequenceVolumeBase.DesiredRepGraphBehavior"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.ForceMaximumReplicationRateUntilTime"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalLevelSequenceVolumeBase.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalLevelSequenceVolumeBase.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalLevelSequenceVolumeBase.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalLevelSequenceVolumeBase.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.Layers"); }
    BrzCampoPonteiro LevelSequenceAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.LevelSequenceAsset")); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.MinNetUpdateFrequency"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalLevelSequenceVolumeBase.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalLevelSequenceVolumeBase.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalLevelSequenceVolumeBase.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalLevelSequenceVolumeBase.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalLevelSequenceVolumeBase.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.PhysicsReplicationMode")); }
    BrzCampoPonteiro PlaybackSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.PlaybackSettings")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalLevelSequenceVolumeBase.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalLevelSequenceVolumeBase.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalLevelSequenceVolumeBase.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalLevelSequenceVolumeBase.RootComponent"); }
    BrzCampoPonteiro SequencePlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.SequencePlayer")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalLevelSequenceVolumeBase.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalLevelSequenceVolumeBase.StasisUnRegisteredComponents"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalLevelSequenceVolumeBase.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.TargetingTeam"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalLevelSequenceVolumeBase.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.UpdateOverlapsMethodDuringLevelStreaming"); }
    int& ViewIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.ViewIndex"); }
    BrzCampoPonteiro WorldPartitionResolveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.WorldPartitionResolveData")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAutoPlay")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bCanBeInCluster")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOverrideInstanceDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bOverrideInstanceData")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreventSaving")); }
    BrzCampoPonteiro bPreviewInEditorViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bPreviewInEditorViewport")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bReplicateMovement")); }
    BrzCampoPonteiro bReplicatePlaybackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bReplicatePlayback")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bSavedWhenStasised")); }
    BrzCampoPonteiro bShowBurninField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bShowBurnin")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bStasised")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalLevelSequenceVolumeBase.bWantsServerThrottledTick")); }
    BitFieldValue<bool, unsigned __int32> bPreviewInEditorViewport()
    { return { (void*)this, "bPreviewInEditorViewport" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALLEVELSEQUENCEVOLUMEBASE_H
