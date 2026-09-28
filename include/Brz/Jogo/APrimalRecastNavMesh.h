// ==========================================================================
//  APrimalRecastNavMesh — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALRECASTNAVMESH_H
#define BRZ_SDK_JOGO_APRIMALRECASTNAVMESH_H

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


struct APrimalRecastNavMesh
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalRecastNavMesh"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRecastNavMesh.CreateGeneratorInstance()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateGeneratorInstance()
    {
        return NativeCall<void*>(nullptr, "APrimalRecastNavMesh.CreateGeneratorInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRecastNavMesh.GetNavAreaAtLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetNavAreaAtLocation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "APrimalRecastNavMesh.GetNavAreaAtLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRecastNavMesh.SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SortAreasForGenerator(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "APrimalRecastNavMesh.SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRecastNavMesh.UpdateActiveTiles(TArray<FNavigationInvokerRaw,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UpdateActiveTiles(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "APrimalRecastNavMesh.UpdateActiveTiles(TArray<FNavigationInvokerRaw,TSizedDefaultAllocator<32>>&)", a0);
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalRecastNavMesh.ActorUsingQuickAction"); }
    float& AgentHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.AgentHeight"); }
    float& AgentMaxSlopeField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.AgentMaxSlope"); }
    float& AgentMaxStepHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.AgentMaxStepHeight"); }
    float& AgentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.AgentRadius"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.BlueprintCreatedComponents"); }
    float& CellHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.CellHeight"); }
    float& CellSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.CellSize"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalRecastNavMesh.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.CustomTimeDilation"); }
    unsigned int& DataVersionField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalRecastNavMesh.DataVersion"); }
    float& DefaultDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.DefaultDrawDistance"); }
    float& DefaultMaxHierarchicalSearchNodesField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.DefaultMaxHierarchicalSearchNodes"); }
    float& DefaultMaxSearchNodesField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.DefaultMaxSearchNodes"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.DesiredRepGraphBehavior"); }
    float& DrawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.DrawOffset"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.ForceMaximumReplicationRateUntilTime"); }
    float& HeuristicScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.HeuristicScale"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalRecastNavMesh.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalRecastNavMesh.Instigator"); }
    unsigned int& InvokerTilePriorityBumpDistanceThresholdInTileUnitsField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalRecastNavMesh.InvokerTilePriorityBumpDistanceThresholdInTileUnits"); }
    unsigned char& InvokerTilePriorityBumpIncreaseField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.InvokerTilePriorityBumpIncrease"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalRecastNavMesh.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalRecastNavMesh.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.LastThrottledTickTime"); }
    int& LayerChunkSplitsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.LayerChunkSplits"); }
    unsigned char& LayerPartitioningField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.LayerPartitioning"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.Layers"); }
    BrzCampoPonteiro LedgeSlopeFilterModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.LedgeSlopeFilterMode")); }
    float& MaxSimplificationErrorField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.MaxSimplificationError"); }
    int& MaxSimultaneousTileGenerationJobsCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.MaxSimultaneousTileGenerationJobsCount"); }
    int& MaxVerticalMergeErrorField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.MaxVerticalMergeError"); }
    float& MergeRegionSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.MergeRegionSize"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.MinNetUpdateFrequency"); }
    float& MinRegionAreaField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.MinRegionArea"); }
    BrzCampoPonteiro NavDataConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.NavDataConfig")); }
    BrzCampoPonteiro NavLinkJumpDownConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.NavLinkJumpDownConfig")); }
    BrzCampoPonteiro NavMeshOriginOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.NavMeshOriginOffset")); }
    BrzCampoPonteiro NavMeshResolutionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.NavMeshResolutionParams")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalRecastNavMesh.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalRecastNavMesh.NetworkSpatializationParent"); }
    float& ObservedPathsTickIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.ObservedPathsTickInterval"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalRecastNavMesh.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalRecastNavMesh.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.PhysicsReplicationMode")); }
    int& PolyRefNavPolyBitsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.PolyRefNavPolyBits"); }
    int& PolyRefSaltBitsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.PolyRefSaltBits"); }
    int& PolyRefTileBitsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.PolyRefTileBits"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalRecastNavMesh.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.RayTracingGroupId"); }
    int& RegionChunkSplitsField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.RegionChunkSplits"); }
    unsigned char& RegionPartitioningField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.RegionPartitioning"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.RemoteRole"); }
    BrzCampoPonteiro RenderingCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.RenderingComp")); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalRecastNavMesh.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalRecastNavMesh.RootComponent"); }
    BrzCampoPonteiro RuntimeGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.RuntimeGeneration")); }
    float& SimplificationElevationRatioField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.SimplificationElevationRatio"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalRecastNavMesh.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalRecastNavMesh.StasisUnRegisteredComponents"); }
    BrzCampoPonteiro SupportedAreasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.SupportedAreas")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalRecastNavMesh.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.TargetingTeam"); }
    BrzCampoPonteiro TileGenerationDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.TileGenerationDebug")); }
    int& TileNumberHardLimitField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.TileNumberHardLimit"); }
    int& TilePoolSizeField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.TilePoolSize"); }
    float& TileSetUpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.TileSetUpdateInterval"); }
    float& TileSizeUUField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.TileSizeUU"); }
    int& TimeSliceFilterLedgeSpansMaxYProcessField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.TimeSliceFilterLedgeSpansMaxYProcess"); }
    double& TimeSliceLongDurationDebugField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.TimeSliceLongDurationDebug"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRecastNavMesh.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalRecastNavMesh.UpdateOverlapsMethodDuringLevelStreaming"); }
    float& VerticalDeviationFromGroundCompensationField() const
    { return *GetNativePointerField<float*>(this, "APrimalRecastNavMesh.VerticalDeviationFromGroundCompensation"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowNavLinkAsPathEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAllowNavLinkAsPathEnd")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoDestroyWhenNoNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAutoDestroyWhenNoNavigation")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeMainNavDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCanBeMainNavData")); }
    BrzCampoPonteiro bCanSpawnOnRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCanSpawnOnRebuild")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDistinctlyDrawTilesBeingBuiltField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDistinctlyDrawTilesBeingBuilt")); }
    BrzCampoPonteiro bDoFullyAsyncNavDataGatheringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDoFullyAsyncNavDataGathering")); }
    BrzCampoPonteiro bDrawClustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawClusters")); }
    BrzCampoPonteiro bDrawDefaultPolygonCostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawDefaultPolygonCost")); }
    BrzCampoPonteiro bDrawFailedNavLinksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawFailedNavLinks")); }
    BrzCampoPonteiro bDrawFilledPolysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawFilledPolys")); }
    BrzCampoPonteiro bDrawLabelsOnPathNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawLabelsOnPathNodes")); }
    BrzCampoPonteiro bDrawMarkedForbiddenPolysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawMarkedForbiddenPolys")); }
    BrzCampoPonteiro bDrawNavLinksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawNavLinks")); }
    BrzCampoPonteiro bDrawNavMeshEdgesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawNavMeshEdges")); }
    BrzCampoPonteiro bDrawOctreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawOctree")); }
    BrzCampoPonteiro bDrawOctreeDetailsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawOctreeDetails")); }
    BrzCampoPonteiro bDrawPathCollidingGeometryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawPathCollidingGeometry")); }
    BrzCampoPonteiro bDrawPolyEdgesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawPolyEdges")); }
    BrzCampoPonteiro bDrawPolygonFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawPolygonFlags")); }
    BrzCampoPonteiro bDrawPolygonLabelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawPolygonLabels")); }
    BrzCampoPonteiro bDrawTileBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawTileBounds")); }
    BrzCampoPonteiro bDrawTileBuildTimesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawTileBuildTimes")); }
    BrzCampoPonteiro bDrawTileBuildTimesHeatMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawTileBuildTimesHeatMap")); }
    BrzCampoPonteiro bDrawTileLabelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawTileLabels")); }
    BrzCampoPonteiro bDrawTileResolutionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawTileResolutions")); }
    BrzCampoPonteiro bDrawTriangleEdgesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bDrawTriangleEdges")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableDrawingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bEnableDrawing")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bExchangedRoles")); }
    BrzCampoPonteiro bFilterLowSpanFromTileCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bFilterLowSpanFromTileCache")); }
    BrzCampoPonteiro bFilterLowSpanSequencesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bFilterLowSpanSequences")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFixedTilePoolSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bFixedTilePoolSize")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceRebuildOnLoadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceRebuildOnLoad")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateNavLinksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bGenerateNavLinks")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bIsWorldPartitionedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bIsWorldPartitioned")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMarkLowHeightAreasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bMarkLowHeightAreas")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPerformVoxelFilteringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPerformVoxelFiltering")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRebuildAtRuntimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bRebuildAtRuntime")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bSavedWhenStasised")); }
    BrzCampoPonteiro bSortNavigationAreasByCostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bSortNavigationAreasByCost")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bStasised")); }
    BrzCampoPonteiro bStoreEmptyTileLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bStoreEmptyTileLayers")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBetterOffsetsFromCornersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseBetterOffsetsFromCorners")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseExtraTopCellWhenMarkingAreasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseExtraTopCellWhenMarkingAreas")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseStasisGrid")); }
    BrzCampoPonteiro bUseVirtualFiltersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseVirtualFilters")); }
    BrzCampoPonteiro bUseVirtualGeometryFilteringAndDirtyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseVirtualGeometryFilteringAndDirtying")); }
    BrzCampoPonteiro bUseVoxelCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bUseVoxelCache")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRecastNavMesh.bWantsServerThrottledTick")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALRECASTNAVMESH_H
