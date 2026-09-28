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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UObject* GetStreamingSourceOwner() const
    {
        return NativeCall<UObject*>(this, "UWorldPartitionStreamingSourceComponent.GetStreamingSourceOwner()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingSourceComponent.PostLoad()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bReplicates")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStreamingSourceEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bStreamingSourceEnabled")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingSourceComponent.bUseBPOnComponentTick")); }
    BitFieldValue<bool, unsigned __int32> bStreamingSourceEnabled()
    { return { (void*)this, "bStreamingSourceEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGSOURCECOMPONENT_H
