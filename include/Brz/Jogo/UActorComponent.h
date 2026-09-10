// ==========================================================================
//  UActorComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UACTORCOMPONENT_H
#define BRZ_SDK_JOGO_UACTORCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FActorComponentTickFunction;
struct FName;
struct UAssetUserData;
struct UWorld;

#include "UObject.h"

struct UActorComponent : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UActorComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.Activate(bool)
    // endereco: casamento de bytes com a build de referencia
    void Activate(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.Activate(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.AddAssetUserData(UAssetUserData*)
    // endereco: casamento de bytes com a build de referencia
    void AddAssetUserData(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.AddAssetUserData(UAssetUserData*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UActorComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.AddReplicatedSubObject(UObject*,ELifetimeCondition)
    // endereco: cache_pdb_25090264
    void AddReplicatedSubObject(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UActorComponent.AddReplicatedSubObject(UObject*,ELifetimeCondition)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.AddTickPrerequisiteActor(AActor*)
    // endereco: cache_pdb_25090264
    void AddTickPrerequisiteActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.AddTickPrerequisiteActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.AddTickPrerequisiteComponent(UActorComponent*)
    // endereco: cache_pdb_25090264
    void AddTickPrerequisiteComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.AddTickPrerequisiteComponent(UActorComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.AddedAsPrimalItemAttachment()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddedAsPrimalItemAttachment() const
    {
        return NativeCall<void*>(this, "UActorComponent.AddedAsPrimalItemAttachment()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.AllowRegisterWithWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowRegisterWithWorld(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UActorComponent.AllowRegisterWithWorld(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UActorComponent.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "UActorComponent.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)
    // endereco: casamento de bytes com a build de referencia
    bool CallRemoteFunction(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "UActorComponent.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.ClearUCSModifiedProperties()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearUCSModifiedProperties() const
    {
        return NativeCall<void*>(this, "UActorComponent.ClearUCSModifiedProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.ComponentHasTag(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool ComponentHasTag(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UActorComponent.ComponentHasTag(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.CreatePhysicsState(bool)
    // endereco: casamento de bytes com a build de referencia
    void CreatePhysicsState(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.CreatePhysicsState(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void CreateRenderState_Concurrent(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.Deactivate()
    // endereco: casamento de bytes com a build de referencia
    void Deactivate() const
    {
        NativeCall<void>(this, "UActorComponent.Deactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.DestroyComponent(bool)
    // endereco: casamento de bytes com a build de referencia
    void DestroyComponent(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.DestroyComponent(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.DestroyPhysicsState()
    // endereco: casamento de bytes com a build de referencia
    void DestroyPhysicsState() const
    {
        NativeCall<void>(this, "UActorComponent.DestroyPhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.DestroyRenderState_Concurrent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void DestroyRenderState_Concurrent() const
    {
        NativeCall<void>(this, "UActorComponent.DestroyRenderState_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.DetermineUCSModifiedProperties()
    // endereco: casamento de bytes com a build de referencia
    void DetermineUCSModifiedProperties() const
    {
        NativeCall<void>(this, "UActorComponent.DetermineUCSModifiedProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.DoDeferredRenderUpdates_Concurrent()
    // endereco: casamento de bytes com a build de referencia
    void DoDeferredRenderUpdates_Concurrent() const
    {
        NativeCall<void>(this, "UActorComponent.DoDeferredRenderUpdates_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "UActorComponent.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)
    // endereco: casamento de bytes com a build de referencia
    UAssetUserData* GetAssetUserDataOfClass(void* a0) const
    {
        return NativeCall<UAssetUserData*, void*>(this, "UActorComponent.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.GetComponentLevel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetComponentLevel() const
    {
        return NativeCall<void*>(this, "UActorComponent.GetComponentLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetFunctionCallspace(UFunction*,FFrame*)
    // endereco: cache_pdb_25090264
    int GetFunctionCallspace(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "UActorComponent.GetFunctionCallspace(UFunction*,FFrame*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.GetOwner<APawn>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOwner_APawn_() const
    {
        return NativeCall<void*>(this, "UActorComponent.GetOwner<APawn>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.GetOwner<APrimalShip>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOwner_APrimalShip_() const
    {
        return NativeCall<void*>(this, "UActorComponent.GetOwner<APrimalShip>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.GetOwnerRole()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetOwnerRole() const
    {
        return NativeCall<void*>(this, "UActorComponent.GetOwnerRole()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetReadableName()
    // endereco: casamento de bytes com a build de referencia
    void GetReadableName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UActorComponent.GetReadableName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetReplicationCondition()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=56]]
    int GetReplicationCondition() const
    {
        return NativeCall<int>(this, "UActorComponent.GetReplicationCondition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.GetScene()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetScene() const
    {
        return NativeCall<void*>(this, "UActorComponent.GetScene()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetUCSModifiedProperties(TSet<FProperty*,DefaultKeyFuncs<FProperty*,0>,FDefaultS
    // endereco: casamento de bytes com a build de referencia
    void GetUCSModifiedProperties(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.GetUCSModifiedProperties(TSet<FProperty*,DefaultKeyFuncs<FProperty*,0>,FDefaultSetAllocator>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetWorld()
    // endereco: cache_pdb_25090264
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UActorComponent.GetWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.GetWorld_Uncached()
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorld_Uncached() const
    {
        return NativeCall<UWorld*>(this, "UActorComponent.GetWorld_Uncached()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.InitializeComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void InitializeComponent() const
    {
        NativeCall<void>(this, "UActorComponent.InitializeComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.IsComponentTickEnabled()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsComponentTickEnabled() const
    {
        return NativeCall<bool>(this, "UActorComponent.IsComponentTickEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.IsCreatedByConstructionScript()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsCreatedByConstructionScript() const
    {
        return NativeCall<void*>(this, "UActorComponent.IsCreatedByConstructionScript()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.IsEditableWhenInherited()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro IsEditableWhenInherited() const
    {
        return NativeCall<void*>(this, "UActorComponent.IsEditableWhenInherited()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.IsNameStableForNetworking()
    // endereco: casamento de bytes com a build de referencia
    bool IsNameStableForNetworking() const
    {
        return NativeCall<bool>(this, "UActorComponent.IsNameStableForNetworking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.IsOwnerRunningUserConstructionScript()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsOwnerRunningUserConstructionScript() const
    {
        return NativeCall<void*>(this, "UActorComponent.IsOwnerRunningUserConstructionScript()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.IsOwnerSelected()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsOwnerSelected() const
    {
        return NativeCall<void*>(this, "UActorComponent.IsOwnerSelected()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.IsSupportedForNetworking()
    // endereco: casamento de bytes com a build de referencia
    bool IsSupportedForNetworking() const
    {
        return NativeCall<bool>(this, "UActorComponent.IsSupportedForNetworking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.MarkForNeededEndOfFrameUpdate()
    // endereco: casamento de bytes com a build de referencia
    void MarkForNeededEndOfFrameUpdate() const
    {
        NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.MarkRenderDynamicDataDirty()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro MarkRenderDynamicDataDirty() const
    {
        return NativeCall<void*>(this, "UActorComponent.MarkRenderDynamicDataDirty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.MarkRenderInstancesDirty()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro MarkRenderInstancesDirty() const
    {
        return NativeCall<void*>(this, "UActorComponent.MarkRenderInstancesDirty()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.MarkRenderStateDirty()
    // endereco: casamento de bytes com a build de referencia
    void MarkRenderStateDirty() const
    {
        NativeCall<void>(this, "UActorComponent.MarkRenderStateDirty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.MarkRenderTransformDirty()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MarkRenderTransformDirty() const
    {
        return NativeCall<void*>(this, "UActorComponent.MarkRenderTransformDirty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.NeedsInitialization()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro NeedsInitialization() const
    {
        return NativeCall<void*>(this, "UActorComponent.NeedsInitialization()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.NeedsLoadForEditorGame()
    // endereco: casamento de bytes com a build de referencia
    bool NeedsLoadForEditorGame() const
    {
        return NativeCall<bool>(this, "UActorComponent.NeedsLoadForEditorGame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.OnComponentCreated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnComponentCreated() const
    {
        return NativeCall<void*>(this, "UActorComponent.OnComponentCreated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.OnComponentDestroyed(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnComponentDestroyed(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.OnComponentDestroyed(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.OnCreatedFromReplication()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCreatedFromReplication() const
    {
        return NativeCall<void*>(this, "UActorComponent.OnCreatedFromReplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.OnDestroyPhysicsState()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnDestroyPhysicsState() const
    {
        NativeCall<void>(this, "UActorComponent.OnDestroyPhysicsState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.OnDestroyedFromReplication()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnDestroyedFromReplication() const
    {
        return NativeCall<void*>(this, "UActorComponent.OnDestroyedFromReplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.OnRegister()
    // endereco: casamento de bytes com a build de referencia
    void OnRegister() const
    {
        NativeCall<void>(this, "UActorComponent.OnRegister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.OnRep_IsActive()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnRep_IsActive() const
    {
        NativeCall<void>(this, "UActorComponent.OnRep_IsActive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.OnUnregister()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnUnregister() const
    {
        return NativeCall<void*>(this, "UActorComponent.OnUnregister()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.OwnerNeedsInitialization()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OwnerNeedsInitialization() const
    {
        return NativeCall<void*>(this, "UActorComponent.OwnerNeedsInitialization()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    void PostInitProperties() const
    {
        NativeCall<void>(this, "UActorComponent.PostInitProperties()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UActorComponent.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.PostRename(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    void PostRename(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "UActorComponent.PostRename(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.ReadyForReplication()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ReadyForReplication() const
    {
        NativeCall<void>(this, "UActorComponent.ReadyForReplication()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.ReceiveAsyncPhysicsTick(float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceiveAsyncPhysicsTick(float a0, float a1) const
    {
        return NativeCall<void*, float, float>(this, "UActorComponent.ReceiveAsyncPhysicsTick(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RecreatePhysicsState()
    // endereco: casamento de bytes com a build de referencia
    void RecreatePhysicsState() const
    {
        NativeCall<void>(this, "UActorComponent.RecreatePhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RecreateRenderState_Concurrent()
    // endereco: casamento de bytes com a build de referencia
    void RecreateRenderState_Concurrent() const
    {
        NativeCall<void>(this, "UActorComponent.RecreateRenderState_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RegisterAllComponentTickFunctions(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterAllComponentTickFunctions(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UActorComponent.RegisterAllComponentTickFunctions(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RegisterComponent()
    // endereco: casamento de bytes com a build de referencia
    void RegisterComponent() const
    {
        NativeCall<void>(this, "UActorComponent.RegisterComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RegisterComponentTickFunctions(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterComponentTickFunctions(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UActorComponent.RegisterComponentTickFunctions(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RegisterComponentWithWorld(UWorld*,FRegisterComponentContext*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void RegisterComponentWithWorld(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UActorComponent.RegisterComponentWithWorld(UWorld*,FRegisterComponentContext*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.RemoveReplicatedSubObject(UObject*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveReplicatedSubObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorComponent.RemoveReplicatedSubObject(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RemoveTickPrerequisiteActor(AActor*)
    // endereco: cache_pdb_25090264
    void RemoveTickPrerequisiteActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.RemoveTickPrerequisiteActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RemoveTickPrerequisiteComponent(UActorComponent*)
    // endereco: cache_pdb_25090264
    void RemoveTickPrerequisiteComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.RemoveTickPrerequisiteComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.RemoveUCSModifiedProperties(TArray<FProperty*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void RemoveUCSModifiedProperties(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.RemoveUCSModifiedProperties(TArray<FProperty*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.Rename(wchar_t*,UObject*,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    bool Rename(void* a0, void* a1, unsigned int a2) const
    {
        return NativeCall<bool, void*, void*, unsigned int>(this, "UActorComponent.Rename(wchar_t*,UObject*,unsignedint)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)
    // endereco: casamento de bytes com a build de referencia
    bool ReplicateSubobjects(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UActorComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.ReregisterComponent()
    // endereco: casamento de bytes com a build de referencia
    void ReregisterComponent() const
    {
        NativeCall<void>(this, "UActorComponent.ReregisterComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.SendRenderDynamicData_Concurrent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SendRenderDynamicData_Concurrent() const
    {
        return NativeCall<void*>(this, "UActorComponent.SendRenderDynamicData_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SendRenderInstanceData_Concurrent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SendRenderInstanceData_Concurrent() const
    {
        NativeCall<void>(this, "UActorComponent.SendRenderInstanceData_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SendRenderTransform_Concurrent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SendRenderTransform_Concurrent() const
    {
        NativeCall<void>(this, "UActorComponent.SendRenderTransform_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UActorComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetActive(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=53]]
    void SetActive(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UActorComponent.SetActive(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.SetActiveFlag(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetActiveFlag(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UActorComponent.SetActiveFlag(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetAutoActivate(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetAutoActivate(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.SetAutoActivate(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetCanEverAffectNavigation(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCanEverAffectNavigation(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.SetCanEverAffectNavigation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetComponentTickEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetComponentTickEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetComponentTickEnabledAsync(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetComponentTickEnabledAsync(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabledAsync(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetComponentTickIntervalAndCooldown(float)
    // endereco: thunk
    void SetComponentTickIntervalAndCooldown(float a0) const
    {
        NativeCall<void, float>(this, "UActorComponent.SetComponentTickIntervalAndCooldown(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetIsReplicated(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetIsReplicated(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.SetIsReplicated(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetIsReplicatedByDefault(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetIsReplicatedByDefault(bool a0) const
    {
        NativeCall<void, bool>(this, "UActorComponent.SetIsReplicatedByDefault(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorComponent.SetTickGroup(ETickingGroup)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SetTickGroup(int a0) const
    {
        return NativeCall<void*, int>(this, "UActorComponent.SetTickGroup(ETickingGroup)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.SetupActorComponentTickFunction(FTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    bool SetupActorComponentTickFunction(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UActorComponent.SetupActorComponentTickFunction(FTickFunction*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    void TickComponent(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "UActorComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.ToggleActive()
    // endereco: casamento de bytes com a build de referencia
    void ToggleActive() const
    {
        NativeCall<void>(this, "UActorComponent.ToggleActive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.UninitializeComponent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UninitializeComponent() const
    {
        NativeCall<void>(this, "UActorComponent.UninitializeComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UActorComponent.UnregisterComponent()
    // endereco: casamento de bytes com a build de referencia
    void UnregisterComponent() const
    {
        NativeCall<void>(this, "UActorComponent.UnregisterComponent()");
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UActorComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UActorComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UActorComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UActorComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UActorComponent.CustomTag"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AssetUserData` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA0; confianca alta)
    int& MarkedForEndOfFrameUpdateArrayIndexField() const
    { return BrzCampoAncorado<int>(this, "AssetUserData", 16); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorComponent.OnComponentDeactivated")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnComponentDeactivated` +1, medido na build 25090264
    //  (offset absoluto medido: 0xB0; confianca alta)
    AActor*& OwnerPrivateField() const
    { return BrzCampoAncorado<AActor*>(this, "OnComponentDeactivated", 1); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UActorComponent.PrimaryComponentTick"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UActorComponent.UCSSerializationIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnComponentDeactivated` +9, medido na build 25090264
    //  (offset absoluto medido: 0xB8; confianca alta)
    UWorld*& WorldPrivateField() const
    { return BrzCampoAncorado<UWorld*>(this, "OnComponentDeactivated", 9); }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bRegistered()
    { return { (void*)this, "bRegistered" }; }
    BitFieldValue<bool, unsigned __int32> bRenderStateCreated()
    { return { (void*)this, "bRenderStateCreated" }; }
    BitFieldValue<bool, unsigned __int32> bPhysicsStateCreated()
    { return { (void*)this, "bPhysicsStateCreated" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRenderStateDirty()
    { return { (void*)this, "bRenderStateDirty" }; }
    BitFieldValue<bool, unsigned __int32> bRenderTransformDirty()
    { return { (void*)this, "bRenderTransformDirty" }; }
    BitFieldValue<bool, unsigned __int32> bRenderDynamicDataDirty()
    { return { (void*)this, "bRenderDynamicDataDirty" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInstancesDirty()
    { return { (void*)this, "bRenderInstancesDirty" }; }
    BitFieldValue<bool, unsigned __int32> bRoutedPostRename()
    { return { (void*)this, "bRoutedPostRename" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegister()
    { return { (void*)this, "bAutoRegister" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReregistration()
    { return { (void*)this, "bAllowReregistration" }; }
    BitFieldValue<bool, unsigned __int32> bTickInEditor()
    { return { (void*)this, "bTickInEditor" }; }
    BitFieldValue<bool, unsigned __int32> bNeverNeedsRenderUpdate()
    { return { (void*)this, "bNeverNeedsRenderUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bAllowConcurrentTick()
    { return { (void*)this, "bAllowConcurrentTick" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnyoneToDestroyMe()
    { return { (void*)this, "bAllowAnyoneToDestroyMe" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bNavigationRelevant()
    { return { (void*)this, "bNavigationRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bWantsInitializeComponent()
    { return { (void*)this, "bWantsInitializeComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bHasBeenCreated()
    { return { (void*)this, "bHasBeenCreated" }; }
    BitFieldValue<bool, unsigned __int32> bHasBeenInitialized()
    { return { (void*)this, "bHasBeenInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bIsReadyForReplication()
    { return { (void*)this, "bIsReadyForReplication" }; }
    BitFieldValue<bool, unsigned __int32> bHasBegunPlay()
    { return { (void*)this, "bHasBegunPlay" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingDestroyed()
    { return { (void*)this, "bIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bTickFunctionsRegistered()
    { return { (void*)this, "bTickFunctionsRegistered" }; }
    BitFieldValue<bool, unsigned __int32> bIsNetStartupComponent()
    { return { (void*)this, "bIsNetStartupComponent" }; }
    BitFieldValue<bool, unsigned __int32> MarkedForEndOfFrameUpdateState()
    { return { (void*)this, "MarkedForEndOfFrameUpdateState" }; }
    BitFieldValue<bool, unsigned __int32> bMarkedForPreEndOfFrameSync()
    { return { (void*)this, "bMarkedForPreEndOfFrameSync" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }

};

#endif  // BRZ_SDK_JOGO_UACTORCOMPONENT_H
