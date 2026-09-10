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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowNavLinkAsPathEnd()
    { return { (void*)this, "bAllowNavLinkAsPathEnd" }; }
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
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenNoNavigation()
    { return { (void*)this, "bAutoDestroyWhenNoNavigation" }; }
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
    BitFieldValue<bool, unsigned __int32> bCanBeMainNavData()
    { return { (void*)this, "bCanBeMainNavData" }; }
    BitFieldValue<bool, unsigned __int32> bCanSpawnOnRebuild()
    { return { (void*)this, "bCanSpawnOnRebuild" }; }
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
    BitFieldValue<bool, unsigned __int32> bDistinctlyDrawTilesBeingBuilt()
    { return { (void*)this, "bDistinctlyDrawTilesBeingBuilt" }; }
    BitFieldValue<bool, unsigned __int32> bDoFullyAsyncNavDataGathering()
    { return { (void*)this, "bDoFullyAsyncNavDataGathering" }; }
    BitFieldValue<bool, unsigned __int32> bDrawClusters()
    { return { (void*)this, "bDrawClusters" }; }
    BitFieldValue<bool, unsigned __int32> bDrawDefaultPolygonCost()
    { return { (void*)this, "bDrawDefaultPolygonCost" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFailedNavLinks()
    { return { (void*)this, "bDrawFailedNavLinks" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFilledPolys()
    { return { (void*)this, "bDrawFilledPolys" }; }
    BitFieldValue<bool, unsigned __int32> bDrawLabelsOnPathNodes()
    { return { (void*)this, "bDrawLabelsOnPathNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDrawMarkedForbiddenPolys()
    { return { (void*)this, "bDrawMarkedForbiddenPolys" }; }
    BitFieldValue<bool, unsigned __int32> bDrawNavLinks()
    { return { (void*)this, "bDrawNavLinks" }; }
    BitFieldValue<bool, unsigned __int32> bDrawNavMeshEdges()
    { return { (void*)this, "bDrawNavMeshEdges" }; }
    BitFieldValue<bool, unsigned __int32> bDrawOctree()
    { return { (void*)this, "bDrawOctree" }; }
    BitFieldValue<bool, unsigned __int32> bDrawOctreeDetails()
    { return { (void*)this, "bDrawOctreeDetails" }; }
    BitFieldValue<bool, unsigned __int32> bDrawPathCollidingGeometry()
    { return { (void*)this, "bDrawPathCollidingGeometry" }; }
    BitFieldValue<bool, unsigned __int32> bDrawPolyEdges()
    { return { (void*)this, "bDrawPolyEdges" }; }
    BitFieldValue<bool, unsigned __int32> bDrawPolygonFlags()
    { return { (void*)this, "bDrawPolygonFlags" }; }
    BitFieldValue<bool, unsigned __int32> bDrawPolygonLabels()
    { return { (void*)this, "bDrawPolygonLabels" }; }
    BitFieldValue<bool, unsigned __int32> bDrawTileBounds()
    { return { (void*)this, "bDrawTileBounds" }; }
    BitFieldValue<bool, unsigned __int32> bDrawTileBuildTimes()
    { return { (void*)this, "bDrawTileBuildTimes" }; }
    BitFieldValue<bool, unsigned __int32> bDrawTileBuildTimesHeatMap()
    { return { (void*)this, "bDrawTileBuildTimesHeatMap" }; }
    BitFieldValue<bool, unsigned __int32> bDrawTileLabels()
    { return { (void*)this, "bDrawTileLabels" }; }
    BitFieldValue<bool, unsigned __int32> bDrawTileResolutions()
    { return { (void*)this, "bDrawTileResolutions" }; }
    BitFieldValue<bool, unsigned __int32> bDrawTriangleEdges()
    { return { (void*)this, "bDrawTriangleEdges" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDrawing()
    { return { (void*)this, "bEnableDrawing" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFilterLowSpanFromTileCache()
    { return { (void*)this, "bFilterLowSpanFromTileCache" }; }
    BitFieldValue<bool, unsigned __int32> bFilterLowSpanSequences()
    { return { (void*)this, "bFilterLowSpanSequences" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFixedTilePoolSize()
    { return { (void*)this, "bFixedTilePoolSize" }; }
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
    BitFieldValue<bool, unsigned __int32> bForceRebuildOnLoad()
    { return { (void*)this, "bForceRebuildOnLoad" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateNavLinks()
    { return { (void*)this, "bGenerateNavLinks" }; }
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
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bIsWorldPartitioned()
    { return { (void*)this, "bIsWorldPartitioned" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bMarkLowHeightAreas()
    { return { (void*)this, "bMarkLowHeightAreas" }; }
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
    BitFieldValue<bool, unsigned __int32> bPerformVoxelFiltering()
    { return { (void*)this, "bPerformVoxelFiltering" }; }
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
    BitFieldValue<bool, unsigned __int32> bRebuildAtRuntime()
    { return { (void*)this, "bRebuildAtRuntime" }; }
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
    BitFieldValue<bool, unsigned __int32> bSortNavigationAreasByCost()
    { return { (void*)this, "bSortNavigationAreasByCost" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStoreEmptyTileLayers()
    { return { (void*)this, "bStoreEmptyTileLayers" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseBetterOffsetsFromCorners()
    { return { (void*)this, "bUseBetterOffsetsFromCorners" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseExtraTopCellWhenMarkingAreas()
    { return { (void*)this, "bUseExtraTopCellWhenMarkingAreas" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseVirtualFilters()
    { return { (void*)this, "bUseVirtualFilters" }; }
    BitFieldValue<bool, unsigned __int32> bUseVirtualGeometryFilteringAndDirtying()
    { return { (void*)this, "bUseVirtualGeometryFilteringAndDirtying" }; }
    BitFieldValue<bool, unsigned __int32> bUseVoxelCache()
    { return { (void*)this, "bUseVoxelCache" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
};

#endif  // BRZ_SDK_JOGO_APRIMALRECASTNAVMESH_H
