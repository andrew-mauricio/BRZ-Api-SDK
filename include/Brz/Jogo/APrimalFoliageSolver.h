// ==========================================================================
//  APrimalFoliageSolver — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALFOLIAGESOLVER_H
#define BRZ_SDK_JOGO_APRIMALFOLIAGESOLVER_H

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


struct APrimalFoliageSolver
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalFoliageSolver"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.ApplyParameters(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyParameters(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalFoliageSolver.ApplyParameters(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.ApplyParametersFromSource(float,UE::Math::TTransform<double>&,UPrimalWindSo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyParametersFromSource(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "APrimalFoliageSolver.ApplyParametersFromSource(float,UE::Math::TTransform<double>&,UPrimalWindSourceComponent*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.ApplyParametersFromVolumetricDispatch(UE::Math::TTransform<double>&,FVolume
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyParametersFromVolumetricDispatch(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalFoliageSolver.ApplyParametersFromVolumetricDispatch(UE::Math::TTransform<double>&,FVolumetricDispatch&,EInteractionType)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.ApplySimParametersWithValues(UE::Math::TTransform<double>&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplySimParametersWithValues(void* a0, void* a1, void* a2, float a3, float a4, float a5, float a6, float a7, void* a8, void* a9, void* a10, void* a11, void* a12, unsigned int a13) const
    {
        return NativeCall<void*, void*, void*, void*, float, float, float, float, float, void*, void*, void*, void*, void*, unsigned int>(this, "APrimalFoliageSolver.ApplySimParametersWithValues(UE::Math::TTransform<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,float,float,float,UE::Math::TVector<float>&,UE::Math::TVector4<float>&,UE::Math::TVector<double>&,UE::Math::TVector4<float>&,UE::Math::TVector4<float>&,unsignedint)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalFoliageSolver.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.SetEnabled(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetEnabled(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalFoliageSolver.SetEnabled(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalFoliageSolver.UnRegisterWindSource(UPrimalWindSourceComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UnRegisterWindSource(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalFoliageSolver.UnRegisterWindSource(UPrimalWindSourceComponent*)", a0);
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalFoliageSolver.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalFoliageSolver.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.BlueprintCreatedComponents"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.ClientReplicationSendNowThreshold"); }
    FName& ComputeSplatDataSourceIdField() const
    { return *GetNativePointerField<FName*>(this, "APrimalFoliageSolver.ComputeSplatDataSourceId"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalFoliageSolver.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.CustomTimeDilation"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalFoliageSolver.DesiredRepGraphBehavior"); }
    float& FluidRadiusBiasField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.FluidRadiusBias"); }
    float& FluidRadiusScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.FluidRadiusScale"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.ForceMaximumReplicationRateUntilTime"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalFoliageSolver.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalFoliageSolver.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalFoliageSolver.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalFoliageSolver.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.Layers"); }
    int& MinEvaluationsForOneTimeFoliageInteractionField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.MinEvaluationsForOneTimeFoliageInteraction"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.MinNetUpdateFrequency"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalFoliageSolver.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalFoliageSolver.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalFoliageSolver.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalFoliageSolver.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalFoliageSolver.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.PhysicsReplicationMode")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalFoliageSolver.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalFoliageSolver.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalFoliageSolver.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalFoliageSolver.RootComponent"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalFoliageSolver.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalFoliageSolver.StasisUnRegisteredComponents"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalFoliageSolver.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.TargetingTeam"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalFoliageSolver.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro WindSourceComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalFoliageSolver.WindSourceComponents")); }
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
    bool& bEnabledField() const
    { return *GetNativePointerField<bool*>(this, "APrimalFoliageSolver.bEnabled"); }
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
    BitFieldValue<bool, unsigned __int32> bEnabled()
    { return { (void*)this, "bEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bUseVolumetricDispatcher()
    { return { (void*)this, "bUseVolumetricDispatcher" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALFOLIAGESOLVER_H
