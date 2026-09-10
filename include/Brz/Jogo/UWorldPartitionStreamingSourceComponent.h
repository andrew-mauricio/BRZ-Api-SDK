// ==========================================================================
//  UWorldPartitionStreamingSourceComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGSOURCECOMPONENT_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGSOURCECOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct UObject;


struct UWorldPartitionStreamingSourceComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionStreamingSourceComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingSourceComponent.GetStreamingSource(FWorldPartitionStreamingSource&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSource(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingSourceComponent.GetStreamingSource(FWorldPartitionStreamingSource&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingSourceComponent.GetStreamingSourceOwner()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* GetStreamingSourceOwner() const
    {
        return NativeCall<UObject*>(this, "UWorldPartitionStreamingSourceComponent.GetStreamingSourceOwner()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingSourceComponent.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54]]
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UWorldPartitionStreamingSourceComponent.PostLoad()");
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionStreamingSourceComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionStreamingSourceComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingSourceComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingSourceComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionStreamingSourceComponent.CustomTag"); }
    BrzCampoPonteiro DebugColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.DebugColor")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.OnComponentDeactivated")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UWorldPartitionStreamingSourceComponent.PrimaryComponentTick"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingSourceComponent.Priority"); }
    BrzCampoPonteiro ShapesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.Shapes")); }
    BrzCampoPonteiro TargetBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetBehavior")); }
    FName& TargetGridField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionStreamingSourceComponent.TargetGrid"); }
    //  no cache antigo este campo se chamava TargetGrid_DEPRECATED.
    //  nesta build ele e' `TargetGrid` — resolve por NOME.
    BrzCampoPonteiro TargetGrid_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetGrid")); }
    BrzCampoPonteiro TargetGridsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetGrids")); }
    BrzCampoPonteiro TargetHLODLayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetHLODLayer")); }
    //  no cache antigo este campo se chamava TargetHLODLayer_DEPRECATED.
    //  nesta build ele e' `TargetHLODLayer` — resolve por NOME.
    BrzCampoPonteiro TargetHLODLayer_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetHLODLayer")); }
    BrzCampoPonteiro TargetHLODLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetHLODLayers")); }
    //  no cache antigo este campo se chamava TargetHLODLayers_DEPRECATED.
    //  nesta build ele e' `TargetHLODLayers` — resolve por NOME.
    BrzCampoPonteiro TargetHLODLayers_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetHLODLayers")); }
    BrzCampoPonteiro TargetStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.TargetState")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingSourceComponent.UCSSerializationIndex"); }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bStreamingSourceEnabled()
    { return { (void*)this, "bStreamingSourceEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGSOURCECOMPONENT_H
