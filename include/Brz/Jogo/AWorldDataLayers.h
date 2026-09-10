// ==========================================================================
//  AWorldDataLayers — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AWORLDDATALAYERS_H
#define BRZ_SDK_JOGO_AWORLDDATALAYERS_H

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


struct AWorldDataLayers
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AWorldDataLayers"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.AddExternalDataLayerInstance(UExternalDataLayerInstance*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddExternalDataLayerInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AWorldDataLayers.AddExternalDataLayerInstance(UExternalDataLayerInstance*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.DumpDataLayerRecursively(UDataLayerInstance*,FString,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DumpDataLayerRecursively(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AWorldDataLayers.DumpDataLayerRecursively(UDataLayerInstance*,FString,FOutputDevice&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DumpDataLayerRecursively(void* a0, FString* a1, void* a2) const
    { return DumpDataLayerRecursively(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.GetDataLayerInstance(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDataLayerInstance(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "AWorldDataLayers.GetDataLayerInstance(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetDataLayerInstance(FName* a0) const
    { return GetDataLayerInstance(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.GetDataLayerInstances()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetDataLayerInstances() const
    {
        return NativeCall<void*>(this, "AWorldDataLayers.GetDataLayerInstances()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.GetDataLayerInstances(TArray<FName,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDataLayerInstances(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AWorldDataLayers.GetDataLayerInstances(TArray<FName,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.GetDataLayerRuntimeStateByName(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=474+chamadores=8]]
    BrzPonteiro GetDataLayerRuntimeStateByName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AWorldDataLayers.GetDataLayerRuntimeStateByName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.GetEffectiveStates()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetEffectiveStates() const
    {
        return NativeCall<void*>(this, "AWorldDataLayers.GetEffectiveStates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.InitializeDataLayerRuntimeStates()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro InitializeDataLayerRuntimeStates() const
    {
        return NativeCall<void*>(this, "AWorldDataLayers.InitializeDataLayerRuntimeStates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.OnDataLayerRuntimeStateChanged_Implementation(UDataLayerInstance*,EDataLayerRun
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDataLayerRuntimeStateChanged_Implementation(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AWorldDataLayers.OnDataLayerRuntimeStateChanged_Implementation(UDataLayerInstance*,EDataLayerRuntimeState)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "AWorldDataLayers.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.PostRegisterAllComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostRegisterAllComponents() const
    {
        return NativeCall<void*>(this, "AWorldDataLayers.PostRegisterAllComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.RemoveExternalDataLayerInstance(UExternalDataLayerInstance*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExternalDataLayerInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AWorldDataLayers.RemoveExternalDataLayerInstance(UExternalDataLayerInstance*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.ResetDataLayerRuntimeStates()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ResetDataLayerRuntimeStates() const
    {
        return NativeCall<void*>(this, "AWorldDataLayers.ResetDataLayerRuntimeStates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.ResolveEffectiveRuntimeState(UDataLayerInstance*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveEffectiveRuntimeState(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AWorldDataLayers.ResolveEffectiveRuntimeState(UDataLayerInstance*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldDataLayers.SetDataLayerRuntimeState(UDataLayerInstance*,EDataLayerRuntimeState,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDataLayerRuntimeState(void* a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "AWorldDataLayers.SetDataLayerRuntimeState(UDataLayerInstance*,EDataLayerRuntimeState,bool)", a0, a1, a2);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    AWorldDataLayers.GetDataLayerInstance(UDataLayerAsset*)
    //      (colide com AWorldDataLayers.GetDataLayerInstance(FName&))

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AWorldDataLayers.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AWorldDataLayers.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.BlueprintCreatedComponents"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AWorldDataLayers.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.CustomTimeDilation"); }
    BrzCampoPonteiro DataLayerInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.DataLayerInstances")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    BrzCampoPonteiro DeprecatedDataLayerNameToDataLayerInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.DeprecatedDataLayerNameToDataLayerInstance")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AWorldDataLayers.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro ExternalPackageDataLayerInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.ExternalPackageDataLayerInstances")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.ForceMaximumReplicationRateUntilTime"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AWorldDataLayers.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AWorldDataLayers.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AWorldDataLayers.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AWorldDataLayers.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.Layers"); }
    BrzCampoPonteiro LoadedExternalPackageDataLayerInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.LoadedExternalPackageDataLayerInstances")); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.MinNetUpdateFrequency"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AWorldDataLayers.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AWorldDataLayers.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AWorldDataLayers.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AWorldDataLayers.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AWorldDataLayers.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.PhysicsReplicationMode")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AWorldDataLayers.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AWorldDataLayers.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AWorldDataLayers.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AWorldDataLayers.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AWorldDataLayers.RootComponent"); }
    BrzCampoPonteiro RootExternalDataLayerInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.RootExternalDataLayerInstance")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AWorldDataLayers.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AWorldDataLayers.StasisUnRegisteredComponents"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldDataLayers.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.TargetingTeam"); }
    BrzCampoPonteiro TransientDataLayerInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.TransientDataLayerInstances")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AWorldDataLayers.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AWorldDataLayers.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro WorldDataLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.WorldDataLayers")); }
    //  no cache antigo este campo se chamava WorldDataLayers_DEPRECATED.
    //  nesta build ele e' `WorldDataLayers` — resolve por NOME.
    BrzCampoPonteiro WorldDataLayers_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldDataLayers.WorldDataLayers")); }
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

#endif  // BRZ_SDK_JOGO_AWORLDDATALAYERS_H
