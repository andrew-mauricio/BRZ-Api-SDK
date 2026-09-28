// ==========================================================================
//  UGameplayTasksComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTASKSCOMPONENT_H
#define BRZ_SDK_JOGO_UGAMEPLAYTASKSCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FActorComponentTickFunction;
struct FName;


struct UGameplayTasksComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTasksComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.AddTaskReadyForActivation(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTaskReadyForActivation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.AddTaskReadyForActivation(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.AddTaskToPriorityQueue(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTaskToPriorityQueue(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.AddTaskToPriorityQueue(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.EndAllResourceConsumingTasksOwnedBy(IGameplayTaskOwnerInterface&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAllResourceConsumingTasksOwnedBy(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.EndAllResourceConsumingTasksOwnedBy(IGameplayTaskOwnerInterface&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.FindResourceConsumingTaskByName(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro FindResourceConsumingTaskByName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UGameplayTasksComponent.FindResourceConsumingTaskByName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.GetGameplayTaskOwner(UGameplayTask*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    AActor* GetGameplayTaskOwner(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "UGameplayTasksComponent.GetGameplayTaskOwner(UGameplayTask*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.GetShouldTick()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetShouldTick() const
    {
        return NativeCall<void*>(this, "UGameplayTasksComponent.GetShouldTick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.OnGameplayTaskActivated(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGameplayTaskActivated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.OnGameplayTaskActivated(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.OnGameplayTaskDeactivated(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGameplayTaskDeactivated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.OnGameplayTaskDeactivated(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.OnRep_SimulatedTasks(TArray<UGameplayTask*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_SimulatedTasks(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTasksComponent.OnRep_SimulatedTasks(TArray<UGameplayTask*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.ProcessTaskEvents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessTaskEvents() const
    {
        return NativeCall<void*>(this, "UGameplayTasksComponent.ProcessTaskEvents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.ReadyForReplication()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReadyForReplication() const
    {
        return NativeCall<void*>(this, "UGameplayTasksComponent.ReadyForReplication()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReplicateSubobjects(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UGameplayTasksComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UGameplayTasksComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.UpdateShouldTick()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateShouldTick() const
    {
        return NativeCall<void*>(this, "UGameplayTasksComponent.UpdateShouldTick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTasksComponent.UpdateTaskActivations()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTaskActivations() const
    {
        return NativeCall<void*>(this, "UGameplayTasksComponent.UpdateTaskActivations()");
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayTasksComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayTasksComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UGameplayTasksComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UGameplayTasksComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayTasksComponent.CustomTag"); }
    BrzCampoPonteiro KnownTasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.KnownTasks")); }
    BrzCampoPonteiro OnClaimedResourcesChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.OnClaimedResourcesChange")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.OnComponentDeactivated")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UGameplayTasksComponent.PrimaryComponentTick"); }
    BrzCampoPonteiro SimulatedTasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.SimulatedTasks")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TaskPriorityQueue` +16, medido na build 25535041
    //  (offset absoluto medido: 0xF8; confianca alta)
    void*& TaskEventsField() const
    { return BrzCampoAncorado<void*>(this, "TaskPriorityQueue", 16); }
    BrzCampoPonteiro TaskPriorityQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.TaskPriorityQueue")); }
    BrzCampoPonteiro TickingTasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.TickingTasks")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UGameplayTasksComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bReplicates")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTasksComponent.bUseBPOnComponentTick")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTASKSCOMPONENT_H
