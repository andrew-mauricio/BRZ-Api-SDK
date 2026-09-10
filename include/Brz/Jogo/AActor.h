// ==========================================================================
//  AActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AACTOR_H
#define BRZ_SDK_JOGO_AACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;
struct APhysicsVolume;
struct APlayerController;
struct AWorldSettings;
struct FActorTickFunction;
struct FName;
struct UActorComponent;
struct UChildActorComponent;
struct UGameInstance;
struct UInputComponent;
struct UNetDriver;
struct UPlayer;
struct USceneComponent;
struct UWorld;

#include "UPrimalActor.h"

struct AActor : public UPrimalActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AActor"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ActorGetDistanceToCollision(UE::Math::TVector<double>&,ECollisionChannel,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ActorGetDistanceToCollision(void* a0, int a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, int, void*, void*>(this, "AActor.ActorGetDistanceToCollision(UE::Math::TVector<double>&,ECollisionChannel,UE::Math::TVector<double>&,UPrimitiveComponent**)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ActorHasTag(FName)
    // endereco: cache_pdb_25090264
    bool ActorHasTag(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AActor.ActorHasTag(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ActorLineTraceSingle(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,EC
    // endereco: casamento de bytes com a build de referencia
    bool ActorLineTraceSingle(void* a0, void* a1, void* a2, int a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, void*, int, void*>(this, "AActor.ActorLineTraceSingle(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ActorPlaySound(USoundBase*,bool,FName,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ActorPlaySound(void* a0, bool a1, unsigned long long a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, unsigned long long, void*>(this, "AActor.ActorPlaySound(USoundBase*,bool,FName,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ActorPlaySoundUnreliable(USoundBase*,bool,FName,UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ActorPlaySoundUnreliable(void* a0, bool a1, unsigned long long a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, unsigned long long, void*>(this, "AActor.ActorPlaySoundUnreliable(USoundBase*,bool,FName,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ActorPlaySound_Implementation(USoundBase*,bool,FName,UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ActorPlaySound_Implementation(void* a0, bool a1, unsigned long long a2, void* a3) const
    {
        NativeCall<void, void*, bool, unsigned long long, void*>(this, "AActor.ActorPlaySound_Implementation(USoundBase*,bool,FName,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.AddActorComponentReplicatedSubObject(UActorComponent*,UObject*,ELifetimeCondition)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddActorComponentReplicatedSubObject(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AActor.AddActorComponentReplicatedSubObject(UActorComponent*,UObject*,ELifetimeCondition)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AddComponent(FName,bool,UE::Math::TTransform<double>&,UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* AddComponent(unsigned long long a0, bool a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<UActorComponent*, unsigned long long, bool, void*, void*, bool>(this, "AActor.AddComponent(FName,bool,UE::Math::TTransform<double>&,UObject*,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AddComponentForReplication(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    void AddComponentForReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.AddComponentForReplication(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AddInstanceComponent(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    void AddInstanceComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.AddInstanceComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AddOwnedComponent(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    void AddOwnedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.AddOwnedComponent(UActorComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AddReferencedObjects(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "AActor.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.AddReplicatedSubObject(UObject*,ELifetimeCondition)
    // endereco: cache_pdb_25090264
    BrzPonteiro AddReplicatedSubObject(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AActor.AddReplicatedSubObject(UObject*,ELifetimeCondition)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AddTickPrerequisiteActor(AActor*)
    // endereco: cache_pdb_25090264
    void AddTickPrerequisiteActor(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.AddTickPrerequisiteActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AddTickPrerequisiteComponent(UActorComponent*)
    // endereco: cache_pdb_25090264
    void AddTickPrerequisiteComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.AddTickPrerequisiteComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AllowActorComponentToReplicate(UActorComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int AllowActorComponentToReplicate(void* a0) const
    {
        return NativeCall<int, void*>(this, "AActor.AllowActorComponentToReplicate(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ApplyWorldOffset(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyWorldOffset(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AActor.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AttachToActor(AActor*,FAttachmentTransformRules&,FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool AttachToActor(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<bool, void*, void*, unsigned long long>(this, "AActor.AttachToActor(AActor*,FAttachmentTransformRules&,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.AttachToComponent(USceneComponent*,FAttachmentTransformRules&,FName)
    // endereco: cache_pdb_25090264
    bool AttachToComponent(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<bool, void*, void*, unsigned long long>(this, "AActor.AttachToComponent(USceneComponent*,FAttachmentTransformRules&,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.BPClientHandleNetExecCommand(FName,FBPNetExecParams&,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPClientHandleNetExecCommand(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "AActor.BPClientHandleNetExecCommand(FName,FBPNetExecParams&,APlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.BPIsA(TSubclassOf<AActor>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPIsA(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.BPIsA(TSubclassOf<AActor>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.BPLocalExecCommand(FName,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPLocalExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AActor.BPLocalExecCommand(FName,FBPNetExecParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.BPServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPServerHandleNetExecCommand(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AActor.BPServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.BecomeViewTarget(APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BecomeViewTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.BecomeViewTarget(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "AActor.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void BeginPlay() const
    {
        NativeCall<void>(this, "AActor.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.BuildReplicatedComponentsInfo()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BuildReplicatedComponentsInfo() const
    {
        NativeCall<void>(this, "AActor.BuildReplicatedComponentsInfo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CalcCamera(float,FMinimalViewInfo&)
    // endereco: casamento de bytes com a build de referencia
    void CalcCamera(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "AActor.CalcCamera(float,FMinimalViewInfo&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.CalculateComponentsBoundingBoxInLocalSpace(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateComponentsBoundingBoxInLocalSpace(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "AActor.CalculateComponentsBoundingBoxInLocalSpace(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CallPreReplication(UNetDriver*)
    // endereco: casamento de bytes com a build de referencia
    void CallPreReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.CallPreReplication(UNetDriver*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)
    // endereco: casamento de bytes com a build de referencia
    bool CallRemoteFunction(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "AActor.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CanBeInCluster()
    // endereco: casamento de bytes com a build de referencia
    bool CanBeInCluster() const
    {
        return NativeCall<bool>(this, "AActor.CanBeInCluster()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.CanTriggerResimulation()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanTriggerResimulation() const
    {
        return NativeCall<void*>(this, "AActor.CanTriggerResimulation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CheckActorComponents()
    // endereco: casamento de bytes com a build de referencia
    bool CheckActorComponents() const
    {
        return NativeCall<bool>(this, "AActor.CheckActorComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CheckComponentInstanceName(FName)
    // endereco: casamento de bytes com a build de referencia
    void CheckComponentInstanceName(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AActor.CheckComponentInstanceName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CheckDefaultSubobjectsInternal()
    // endereco: casamento de bytes com a build de referencia
    bool CheckDefaultSubobjectsInternal() const
    {
        return NativeCall<bool>(this, "AActor.CheckDefaultSubobjectsInternal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CheckStillInWorld()
    // endereco: casamento de bytes com a build de referencia
    bool CheckStillInWorld() const
    {
        return NativeCall<bool>(this, "AActor.CheckStillInWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ClearComponentOverlaps()
    // endereco: casamento de bytes com a build de referencia
    void ClearComponentOverlaps() const
    {
        NativeCall<void>(this, "AActor.ClearComponentOverlaps()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ClearCrossLevelReferences()
    // endereco: casamento de bytes com a build de referencia
    void ClearCrossLevelReferences() const
    {
        NativeCall<void>(this, "AActor.ClearCrossLevelReferences()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ClearNetworkSpatializationParent()
    // endereco: cache_pdb_25090264
    void ClearNetworkSpatializationParent() const
    {
        NativeCall<void>(this, "AActor.ClearNetworkSpatializationParent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ContainsDataLayer(UDataLayerAsset*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ContainsDataLayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.ContainsDataLayer(UDataLayerAsset*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CopyRemoteRoleFrom(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void CopyRemoteRoleFrom(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.CopyRemoteRoleFrom(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CreateComponentFromTemplate(UActorComponent*,FName)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* CreateComponentFromTemplate(void* a0, unsigned long long a1) const
    {
        return NativeCall<UActorComponent*, void*, unsigned long long>(this, "AActor.CreateComponentFromTemplate(UActorComponent*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CreateComponentFromTemplateData(FBlueprintCookedComponentInstancingData*,FName)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* CreateComponentFromTemplateData(void* a0, unsigned long long a1) const
    {
        return NativeCall<UActorComponent*, void*, unsigned long long>(this, "AActor.CreateComponentFromTemplateData(FBlueprintCookedComponentInstancingData*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.CreateInputComponent(TSubclassOf<UInputComponent>)
    // endereco: casamento de bytes com a build de referencia
    void CreateInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.CreateInputComponent(TSubclassOf<UInputComponent>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Destroy(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool Destroy(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "AActor.Destroy(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DestroyConstructedComponents()
    // endereco: casamento de bytes com a build de referencia
    void DestroyConstructedComponents() const
    {
        NativeCall<void>(this, "AActor.DestroyConstructedComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "AActor.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.DetachAllSceneComponents(USceneComponent*,FDetachmentTransformRules&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DetachAllSceneComponents(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AActor.DetachAllSceneComponents(USceneComponent*,FDetachmentTransformRules&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.DetachFromActor(FDetachmentTransformRules&)
    // endereco: cache_pdb_25090264
    BrzPonteiro DetachFromActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.DetachFromActor(FDetachmentTransformRules&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DetachRootComponentFromParent(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void DetachRootComponentFromParent(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.DetachRootComponentFromParent(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DisableComponentsSimulatePhysics()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DisableComponentsSimulatePhysics() const
    {
        NativeCall<void>(this, "AActor.DisableComponentsSimulatePhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DisableInput(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=146]]
    void DisableInput(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.DisableInput(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DispatchBeginPlay(bool)
    // endereco: casamento de bytes com a build de referencia
    void DispatchBeginPlay(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.DispatchBeginPlay(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DispatchBlockingHit(UPrimitiveComponent*,UPrimitiveComponent*,bool,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void DispatchBlockingHit(void* a0, void* a1, bool a2, void* a3) const
    {
        NativeCall<void, void*, void*, bool, void*>(this, "AActor.DispatchBlockingHit(UPrimitiveComponent*,UPrimitiveComponent*,bool,FHitResult&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DispatchPhysicsCollisionHit(FRigidBodyCollisionInfo&,FRigidBodyCollisionInfo&,FCollisionI
    // endereco: casamento de bytes com a build de referencia
    void DispatchPhysicsCollisionHit(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AActor.DispatchPhysicsCollisionHit(FRigidBodyCollisionInfo&,FRigidBodyCollisionInfo&,FCollisionImpactData&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AActor.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.EnableInput(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void EnableInput(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.EnableInput(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "AActor.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.EndViewTarget(APlayerController*)
    // endereco: cache_pdb_25090264
    void EndViewTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.EndViewTarget(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ExecuteConstruction(UE::Math::TTransform<double>&,FRotationConversionCache*,FComponentIns
    // endereco: casamento de bytes com a build de referencia
    bool ExecuteConstruction(void* a0, void* a1, void* a2, bool a3, int a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, int>(this, "AActor.ExecuteConstruction(UE::Math::TTransform<double>&,FRotationConversionCache*,FComponentInstanceDataCache*,bool,ESpawnActorScaleMethod)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.FellOutOfWorld(UDamageType&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82]]
    void FellOutOfWorld(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.FellOutOfWorld(UDamageType&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.FindComponentByClass(TSubclassOf<UActorComponent>)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* FindComponentByClass(void* a0) const
    {
        return NativeCall<UActorComponent*, void*>(this, "AActor.FindComponentByClass(TSubclassOf<UActorComponent>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UAbilitySystemComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UAbilitySystemComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UAbilitySystemComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UBehaviorTreeComponent>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    BrzPonteiro FindComponentByClass_UBehaviorTreeComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UBehaviorTreeComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UBlackboardComponent>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    BrzPonteiro FindComponentByClass_UBlackboardComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UBlackboardComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UBrainComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UBrainComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UBrainComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UCameraComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UCameraComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UCameraComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UCharacterMovementComponent>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=76]]
    BrzPonteiro FindComponentByClass_UCharacterMovementComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UCharacterMovementComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UMassAgentComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UMassAgentComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UMassAgentComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UMovementComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UMovementComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UMovementComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<UPathFollowingComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UPathFollowingComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<UPathFollowingComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<USkeletalMeshComponent>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro FindComponentByClass_USkeletalMeshComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<USkeletalMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<USmartObjectComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_USmartObjectComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<USmartObjectComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByClass<USplineComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_USplineComponent_() const
    {
        return NativeCall<void*>(this, "AActor.FindComponentByClass<USplineComponent>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.FindComponentByInterface(TSubclassOf<UInterface>)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* FindComponentByInterface(void* a0) const
    {
        return NativeCall<UActorComponent*, void*>(this, "AActor.FindComponentByInterface(TSubclassOf<UInterface>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.FindComponentByTag(TSubclassOf<UActorComponent>,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByTag(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AActor.FindComponentByTag(TSubclassOf<UActorComponent>,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.FinishAddComponent(UActorComponent*,bool,UE::Math::TTransform<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void FinishAddComponent(void* a0, bool a1, void* a2) const
    {
        NativeCall<void, void*, bool, void*>(this, "AActor.FinishAddComponent(UActorComponent*,bool,UE::Math::TTransform<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.FinishSpawning(UE::Math::TTransform<double>&,bool,FComponentInstanceDataCache*,ESpawnActo
    // endereco: casamento de bytes com a build de referencia
    static void FinishSpawning(void* a0, bool a1, void* a2, int a3)
    {
        NativeCall<void, void*, bool, void*, int>(nullptr, "AActor.FinishSpawning(UE::Math::TTransform<double>&,bool,FComponentInstanceDataCache*,ESpawnActorScaleMethod)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.FlushNetDormancy()
    // endereco: casamento de bytes com a build de referencia
    void FlushNetDormancy() const
    {
        NativeCall<void>(this, "AActor.FlushNetDormancy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ForEachComponent_Internal<USkeletalMeshComponent,0,1,void(__cdecl*)(USkeletalMeshComponen
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ForEachComponent_Internal_USkeletalMeshComponent_0_1_void(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.ForEachComponent_Internal<USkeletalMeshComponent,0,1,void(__cdecl*)(USkeletalMeshComponent *)>(TSubclassOf<UActorComponent>,void*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ForEachComponent_Internal<USkeletalMeshComponent,1,1,void(__cdecl*)(USkeletalMeshComponen
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ForEachComponent_Internal_USkeletalMeshComponent_1_1_void(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.ForEachComponent_Internal<USkeletalMeshComponent,1,1,void(__cdecl*)(USkeletalMeshComponent *)>(TSubclassOf<UActorComponent>,void*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ForEachComponent_Internal_UPrimalWindSourceComponent_0_0___APrimalStructure.GetWindSource
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachComponent_Internal_UPrimalWindSourceComponent_0_0___APrimalStructure_GetWindSourceComponents___2___lambda_1__operator() const
    {
        return NativeCall<void*>(this, "AActor.ForEachComponent_Internal_UPrimalWindSourceComponent_0_0___APrimalStructure.GetWindSourceComponents_._2_._lambda_1_.operator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ForEachComponent_Internal_UPrimalWindSourceComponent_1_0___APrimalStructure.GetWindSource
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachComponent_Internal_UPrimalWindSourceComponent_1_0___APrimalStructure_GetWindSourceComponents___2___lambda_1__operator() const
    {
        return NativeCall<void*>(this, "AActor.ForEachComponent_Internal_UPrimalWindSourceComponent_1_0___APrimalStructure.GetWindSourceComponents_._2_._lambda_1_.operator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ForEachComponent_Internal_USceneComponent_0_1__AActor.MarkNeedsRecomputeBoundsOnceForGame
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachComponent_Internal_USceneComponent_0_1__AActor_MarkNeedsRecomputeBoundsOnceForGame___2___lambda_1___() const
    {
        return NativeCall<void*>(this, "AActor.ForEachComponent_Internal_USceneComponent_0_1__AActor.MarkNeedsRecomputeBoundsOnceForGame_._2_._lambda_1___()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.ForEachComponent_Internal_USceneComponent_1_1__AActor.MarkNeedsRecomputeBoundsOnceForGame
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachComponent_Internal_USceneComponent_1_1__AActor_MarkNeedsRecomputeBoundsOnceForGame___2___lambda_1___() const
    {
        return NativeCall<void*>(this, "AActor.ForEachComponent_Internal_USceneComponent_1_1__AActor.MarkNeedsRecomputeBoundsOnceForGame_._2_._lambda_1___()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ForceNetRelevant()
    // endereco: casamento de bytes com a build de referencia
    void ForceNetRelevant() const
    {
        NativeCall<void>(this, "AActor.ForceNetRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ForceNetUpdate(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceNetUpdate(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "AActor.ForceNetUpdate(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ForcePropertyCompare()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ForcePropertyCompare() const
    {
        NativeCall<void>(this, "AActor.ForcePropertyCompare()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GatherCurrentMovement()
    // endereco: casamento de bytes com a build de referencia
    void GatherCurrentMovement() const
    {
        NativeCall<void>(this, "AActor.GatherCurrentMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetActorBounds(bool a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, bool, void*, void*, bool>(this, "AActor.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetActorScale3D()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetActorScale3D() const
    {
        return NativeCall<void*>(this, "AActor.GetActorScale3D()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetActorTimeDilation()
    // endereco: casamento de bytes com a build de referencia
    float GetActorTimeDilation() const
    {
        return NativeCall<float>(this, "AActor.GetActorTimeDilation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetActorTimeDilation(UWorld&)
    // endereco: thunk
    BrzPonteiro GetActorTimeDilation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.GetActorTimeDilation(UWorld&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetAllChildActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetAllChildActors(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AActor.GetAllChildActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetAttachParentActor()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAttachParentActor() const
    {
        return NativeCall<void*>(this, "AActor.GetAttachParentActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetAttachParentSocketName()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAttachParentSocketName() const
    {
        return NativeCall<void*>(this, "AActor.GetAttachParentSocketName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetAttachedActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetAttachedActors(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "AActor.GetAttachedActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentByClass(TSubclassOf<UActorComponent>)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* GetComponentByClass(void* a0) const
    {
        return NativeCall<UActorComponent*, void*>(this, "AActor.GetComponentByClass(TSubclassOf<UActorComponent>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentByCustomTag(FName)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* GetComponentByCustomTag(unsigned long long a0) const
    {
        return NativeCall<UActorComponent*, unsigned long long>(this, "AActor.GetComponentByCustomTag(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>>(TArray<UPrimitiveComponent*
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetComponents_UPrimitiveComponent_TSizedDefaultAllocator_32__(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AActor.GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>>(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>>(TArray<USkeletalMeshComp
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetComponents_USkeletalMeshComponent_TSizedDefaultAllocator_32__(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AActor.GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>>(TArray<USkeletalMeshComponent*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetComponentsBoundingBox(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetComponentsBoundingBox(bool a0, bool a1, bool a2) const
    {
        return NativeCall<void*, bool, bool, bool>(this, "AActor.GetComponentsBoundingBox(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentsBoundingCylinder(float&,float&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetComponentsBoundingCylinder(void* a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AActor.GetComponentsBoundingCylinder(float&,float&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentsByCustomTag(FName)
    // endereco: casamento de bytes com a build de referencia
    void GetComponentsByCustomTag(void* retorno, unsigned long long a0) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AActor.GetComponentsByCustomTag(FName)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentsByInterface(TSubclassOf<UInterface>)
    // endereco: casamento de bytes com a build de referencia
    void GetComponentsByInterface(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AActor.GetComponentsByInterface(TSubclassOf<UInterface>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentsByTag(TSubclassOf<UActorComponent>,FName)
    // endereco: casamento de bytes com a build de referencia
    void GetComponentsByTag(void* retorno, void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, void*, unsigned long long>(this, "AActor.GetComponentsByTag(TSubclassOf<UActorComponent>,FName)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetComponentsCollisionResponseToChannel(ECollisionChannel)
    // endereco: casamento de bytes com a build de referencia
    int GetComponentsCollisionResponseToChannel(int a0) const
    {
        return NativeCall<int, int>(this, "AActor.GetComponentsCollisionResponseToChannel(ECollisionChannel)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetDistanceTo(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetDistanceTo(void* a0) const
    {
        return NativeCall<float, void*>(this, "AActor.GetDistanceTo(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetFunctionCallspace(UFunction*,FFrame*)
    // endereco: casamento de bytes com a build de referencia
    int GetFunctionCallspace(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "AActor.GetFunctionCallspace(UFunction*,FFrame*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetGameInstance()
    // endereco: casamento de bytes com a build de referencia
    static UGameInstance* GetGameInstance()
    {
        return NativeCall<UGameInstance*>(nullptr, "AActor.GetGameInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetGameTimeSinceCreation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameTimeSinceCreation() const
    {
        return NativeCall<void*>(this, "AActor.GetGameTimeSinceCreation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetHLODRelevantComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHLODRelevantComponents() const
    {
        return NativeCall<void*>(this, "AActor.GetHLODRelevantComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetInputAxisValue(FName)
    // endereco: cache_pdb_25090264
    float GetInputAxisValue(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "AActor.GetInputAxisValue(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetInstanceComponents()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetInstanceComponents() const
    {
        return NativeCall<void*>(this, "AActor.GetInstanceComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetInstigator<APrimalCharacter>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstigator_APrimalCharacter_() const
    {
        return NativeCall<void*>(this, "AActor.GetInstigator<APrimalCharacter>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetInstigatorController()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetInstigatorController() const
    {
        return NativeCall<void*>(this, "AActor.GetInstigatorController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetLastRenderTime(bool)
    // endereco: casamento de bytes com a build de referencia
    double GetLastRenderTime(bool a0) const
    {
        return NativeCall<double, bool>(this, "AActor.GetLastRenderTime(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetLevel()
    // endereco: thunk
    BrzPonteiro GetLevel() const
    {
        return NativeCall<void*>(this, "AActor.GetLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetLifeSpan()
    // endereco: cache_pdb_25090264
    float GetLifeSpan() const
    {
        return NativeCall<float>(this, "AActor.GetLifeSpan()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // ── NAO EXISTE COMO FUNCAO: e' `inline` na Unreal ──────────────
    //
    //   AActor.GetMinNetUpdateFrequency() nao tem endereco nesta build e nao vai ter:
    //   o compilador dissolve o getter dentro de quem chama.
    //   Ate' 09/09/2026 esta chamada devolvia o ZERO do tipo.
    //
    //   Agora le' o campo, pela reflexao viva, como o resto do SDK.
    float GetMinNetUpdateFrequency() const { return MinNetUpdateFrequencyField(); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetNetCullDistanceSquared()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNetCullDistanceSquared() const
    {
        return NativeCall<void*>(this, "AActor.GetNetCullDistanceSquared()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetNetDriver()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=126+grafo=3/3]]
    UNetDriver* GetNetDriver() const
    {
        return NativeCall<UNetDriver*>(this, "AActor.GetNetDriver()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetNetOwner()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNetOwner() const
    {
        return NativeCall<void*>(this, "AActor.GetNetOwner()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetNetOwningPlayer()
    // endereco: cache_pdb_25090264
    UPlayer* GetNetOwningPlayer() const
    {
        return NativeCall<UPlayer*>(this, "AActor.GetNetOwningPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UAct
    // endereco: casamento de bytes com a build de referencia
    float GetNetPriority(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, bool a6) const
    {
        return NativeCall<float, void*, void*, void*, void*, void*, float, bool>(this, "AActor.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>)
    // endereco: casamento de bytes com a build de referencia
    void GetOverlappingActors(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AActor.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetOverlappingComponents(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetOwnerController()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    APlayerController* GetOwnerController() const
    {
        return NativeCall<APlayerController*>(this, "AActor.GetOwnerController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetParentActor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetParentActor() const
    {
        return NativeCall<void*>(this, "AActor.GetParentActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetParentComponent()
    // endereco: cache_pdb_25090264
    UChildActorComponent* GetParentComponent() const
    {
        return NativeCall<UChildActorComponent*>(this, "AActor.GetParentComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetPhysicsReplicationMode()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetPhysicsReplicationMode() const
    {
        return NativeCall<void*>(this, "AActor.GetPhysicsReplicationMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetPhysicsVolume()
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetPhysicsVolume() const
    {
        return NativeCall<APhysicsVolume*>(this, "AActor.GetPhysicsVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetRayTracingGroupId()
    // endereco: thunk
    int GetRayTracingGroupId() const
    {
        return NativeCall<int>(this, "AActor.GetRayTracingGroupId()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetRepGraphRelevantDistanceSq()
    // endereco: casamento de bytes com a build de referencia
    float GetRepGraphRelevantDistanceSq() const
    {
        return NativeCall<float>(this, "AActor.GetRepGraphRelevantDistanceSq()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetReplayPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,U
    // endereco: casamento de bytes com a build de referencia
    float GetReplayPriority(void* a0, void* a1, void* a2, void* a3, void* a4, float a5) const
    {
        return NativeCall<float, void*, void*, void*, void*, void*, float>(this, "AActor.GetReplayPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*const,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)
    // endereco: casamento de bytes com a build de referencia
    void GetReplicatedCustomConditionState(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetReplicatedMovement_Mutable()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetReplicatedMovement_Mutable() const
    {
        return NativeCall<void*>(this, "AActor.GetReplicatedMovement_Mutable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetResimulationThreshold()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetResimulationThreshold() const
    {
        return NativeCall<void*>(this, "AActor.GetResimulationThreshold()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetRootSelectionParent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRootSelectionParent() const
    {
        return NativeCall<void*>(this, "AActor.GetRootSelectionParent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetSelectionParent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectionParent() const
    {
        return NativeCall<void*>(this, "AActor.GetSelectionParent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetSimpleCollisionCylinder(float&,float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetSimpleCollisionCylinder(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AActor.GetSimpleCollisionCylinder(float&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetSquaredDistanceTo(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSquaredDistanceTo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.GetSquaredDistanceTo(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetSubobjectsWithStableNamesForNetworking(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetSubobjectsWithStableNamesForNetworking(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.GetSubobjectsWithStableNamesForNetworking(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetTransform()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTransform() const
    {
        return NativeCall<void*>(this, "AActor.GetTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.GetVelocity(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVelocity(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.GetVelocity(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetWorld()
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "AActor.GetWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetWorldSettings()
    // endereco: casamento de bytes com a build de referencia
    AWorldSettings* GetWorldSettings() const
    {
        return NativeCall<AWorldSettings*>(this, "AActor.GetWorldSettings()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.GetWorldTimerManager()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldTimerManager() const
    {
        return NativeCall<void*>(this, "AActor.GetWorldTimerManager()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.HandleRegisterComponentWithWorld(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleRegisterComponentWithWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.HandleRegisterComponentWithWorld(UActorComponent*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AActor.HasActiveCameraComponent(bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasActiveCameraComponent(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AActor.HasActiveCameraComponent(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.HasActivePawnControlCameraComponent()
    // endereco: casamento de bytes com a build de referencia
    bool HasActivePawnControlCameraComponent() const
    {
        return NativeCall<bool>(this, "AActor.HasActivePawnControlCameraComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.HasDataLayers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasDataLayers() const
    {
        return NativeCall<void*>(this, "AActor.HasDataLayers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.HasHLODRelevantComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasHLODRelevantComponents() const
    {
        return NativeCall<void*>(this, "AActor.HasHLODRelevantComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.HasLocalNetOwner()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=203]]
    bool HasLocalNetOwner() const
    {
        return NativeCall<bool>(this, "AActor.HasLocalNetOwner()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.HasNetOwner()
    // endereco: cache_pdb_25090264
    bool HasNetOwner() const
    {
        return NativeCall<bool>(this, "AActor.HasNetOwner()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IncrementalRegisterComponents(int,FRegisterComponentContext*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IncrementalRegisterComponents(int a0, void* a1) const
    {
        return NativeCall<bool, int, void*>(this, "AActor.IncrementalRegisterComponents(int,FRegisterComponentContext*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IncrementalUnregisterComponents()
    // endereco: casamento de bytes com a build de referencia
    bool IncrementalUnregisterComponents() const
    {
        return NativeCall<bool>(this, "AActor.IncrementalUnregisterComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.InitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void InitializeComponents() const
    {
        NativeCall<void>(this, "AActor.InitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.InitializeDefaults()
    // endereco: casamento de bytes com a build de referencia
    void InitializeDefaults() const
    {
        NativeCall<void>(this, "AActor.InitializeDefaults()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.InternalDispatchBlockingHit(UPrimitiveComponent*,UPrimitiveComponent*,bool,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InternalDispatchBlockingHit(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "AActor.InternalDispatchBlockingHit(UPrimitiveComponent*,UPrimitiveComponent*,bool,FHitResult&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.InternalGetNetMode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=153+grafo=3/3]]
    int InternalGetNetMode() const
    {
        return NativeCall<int>(this, "AActor.InternalGetNetMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.InternalTakeRadialDamage(float,FRadialDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float InternalTakeRadialDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "AActor.InternalTakeRadialDamage(float,FRadialDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsActorOrSelectionParentSelected()
    // endereco: casamento de bytes com a build de referencia
    bool IsActorOrSelectionParentSelected() const
    {
        return NativeCall<bool>(this, "AActor.IsActorOrSelectionParentSelected()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsActorTickEnabled()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=52]]
    BrzPonteiro IsActorTickEnabled() const
    {
        return NativeCall<void*>(this, "AActor.IsActorTickEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsAsset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=109]]
    bool IsAsset() const
    {
        return NativeCall<bool>(this, "AActor.IsAsset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsAttachedTo(AActor*)
    // endereco: cache_pdb_25090264
    bool IsAttachedTo(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AActor.IsAttachedTo(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsChildActor()
    // endereco: cache_pdb_25090264
    bool IsChildActor() const
    {
        return NativeCall<bool>(this, "AActor.IsChildActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsEditorOnly()
    // endereco: casamento de bytes com a build de referencia
    bool IsEditorOnly() const
    {
        return NativeCall<bool>(this, "AActor.IsEditorOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsHLODRelevant()
    // endereco: casamento de bytes com a build de referencia
    bool IsHLODRelevant() const
    {
        return NativeCall<bool>(this, "AActor.IsHLODRelevant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsInLevel(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.IsInLevel(ULevel*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsInOrOwnedBy(UObject*)
    // classe: a funcao mora em UObject, e AActor herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool IsInOrOwnedBy(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UObject.IsInOrOwnedBy(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsInPersistentLevel(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInPersistentLevel(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.IsInPersistentLevel(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsLevelBoundsRelevant()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsLevelBoundsRelevant() const
    {
        return NativeCall<bool>(this, "AActor.IsLevelBoundsRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsNameStableForNetworking()
    // endereco: casamento de bytes com a build de referencia
    bool IsNameStableForNetworking() const
    {
        return NativeCall<bool>(this, "AActor.IsNameStableForNetworking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "AActor.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsNetStartupActor()
    // endereco: casamento de bytes com a build de referencia
    bool IsNetStartupActor() const
    {
        return NativeCall<bool>(this, "AActor.IsNetStartupActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsOwnedOrControlledBy(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IsOwnedOrControlledBy(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AActor.IsOwnedOrControlledBy(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsReadyForFinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsReadyForFinishDestroy() const
    {
        return NativeCall<void*>(this, "AActor.IsReadyForFinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsRelevancyOwnerFor(AActor*,AActor*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsRelevancyOwnerFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "AActor.IsRelevancyOwnerFor(AActor*,AActor*,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsRootComponentCollisionRegistered()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    bool IsRootComponentCollisionRegistered() const
    {
        return NativeCall<bool>(this, "AActor.IsRootComponentCollisionRegistered()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsRootComponentMovable()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsRootComponentMovable() const
    {
        return NativeCall<void*>(this, "AActor.IsRootComponentMovable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsRootComponentStatic()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsRootComponentStatic() const
    {
        return NativeCall<void*>(this, "AActor.IsRootComponentStatic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.IsRootComponentStationary()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsRootComponentStationary() const
    {
        return NativeCall<void*>(this, "AActor.IsRootComponentStationary()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsSelectionChild()
    // endereco: casamento de bytes com a build de referencia
    bool IsSelectionChild() const
    {
        return NativeCall<bool>(this, "AActor.IsSelectionChild()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.IsWithinNetRelevancyDistance(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=162]]
    bool IsWithinNetRelevancyDistance(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AActor.IsWithinNetRelevancyDistance(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.K2_AttachRootComponentTo(USceneComponent*,FName,EAttachLocation::Type,bool)
    // endereco: thunk
    BrzPonteiro K2_AttachRootComponentTo(void* a0, unsigned long long a1, int a2, bool a3) const
    {
        return NativeCall<void*, void*, unsigned long long, int, bool>(this, "AActor.K2_AttachRootComponentTo(USceneComponent*,FName,EAttachLocation::Type,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.K2_GetComponentsByClass(TSubclassOf<UActorComponent>)
    // endereco: casamento de bytes com a build de referencia
    void K2_GetComponentsByClass(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AActor.K2_GetComponentsByClass(TSubclassOf<UActorComponent>)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.K2_TeleportTo(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,float)
    // endereco: thunk
    BrzPonteiro K2_TeleportTo(void* a0, void* a1, bool a2, float a3) const
    {
        return NativeCall<void*, void*, void*, bool, float>(this, "AActor.K2_TeleportTo(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.MakeNoise(float,APawn*,UE::Math::TVector<double>,float,FName)
    // endereco: casamento de bytes com a build de referencia
    void MakeNoise(float a0, void* a1, void* a2, float a3, unsigned long long a4) const
    {
        NativeCall<void, float, void*, void*, float, unsigned long long>(this, "AActor.MakeNoise(float,APawn*,UE::Math::TVector<double>,float,FName)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.MakeNoiseImpl(AActor*,float,APawn*,UE::Math::TVector<double>&,float,FName)
    // endereco: casamento de bytes com a build de referencia
    static void MakeNoiseImpl(void* a0, float a1, void* a2, void* a3, float a4, unsigned long long a5)
    {
        NativeCall<void, void*, float, void*, void*, float, unsigned long long>(nullptr, "AActor.MakeNoiseImpl(AActor*,float,APawn*,UE::Math::TVector<double>&,float,FName)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MarkComponentsAsGarbage(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MarkComponentsAsGarbage(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.MarkComponentsAsGarbage(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.MarkComponentsRenderStateDirty()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MarkComponentsRenderStateDirty() const
    {
        NativeCall<void>(this, "AActor.MarkComponentsRenderStateDirty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MarkNeedsRecomputeBoundsOnceForGame()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MarkNeedsRecomputeBoundsOnceForGame() const
    {
        return NativeCall<void*>(this, "AActor.MarkNeedsRecomputeBoundsOnceForGame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugArrow(UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinear
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugArrow(void* a0, void* a1, float a2, void* a3, float a4, bool a5)
    {
        return NativeCall<void*, void*, void*, float, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugArrow(UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugArrow_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=297]]
    BrzPonteiro MulticastDrawDebugArrow_Implementation(void* a0, void* a1, float a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, float, void*, float, bool>(this, "AActor.MulticastDrawDebugArrow_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugBox(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,UE
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugBox(void* a0, void* a1, void* a2, void* a3, float a4, bool a5)
    {
        return NativeCall<void*, void*, void*, void*, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugBox(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,UE::Math::TRotator<double>,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugBox_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MulticastDrawDebugBox_Implementation(void* a0, void* a1, void* a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float, bool>(this, "AActor.MulticastDrawDebugBox_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,UE::Math::TRotator<double>,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCamera(ACameraActor*,FLinearColor,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugCamera(void* a0, void* a1, float a2, bool a3)
    {
        return NativeCall<void*, void*, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugCamera(ACameraActor*,FLinearColor,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCamera_Implementation(ACameraActor*,FLinearColor,float,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=183]]
    BrzPonteiro MulticastDrawDebugCamera_Implementation(void* a0, void* a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, float, bool>(this, "AActor.MulticastDrawDebugCamera_Implementation(ACameraActor*,FLinearColor,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCapsule(UE::Math::TVector<double>,float,float,UE::Math::TRotator<double
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugCapsule(void* a0, float a1, float a2, void* a3, void* a4, float a5, bool a6)
    {
        return NativeCall<void*, void*, float, float, void*, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugCapsule(UE::Math::TVector<double>,float,float,UE::Math::TRotator<double>,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCapsuleWithExtents(UE::Math::TVector<double>,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugCapsuleWithExtents(void* a0, void* a1, float a2, void* a3, float a4, bool a5, bool a6)
    {
        return NativeCall<void*, void*, void*, float, void*, float, bool, bool>(nullptr, "AActor.MulticastDrawDebugCapsuleWithExtents(UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCapsuleWithExtents_Implementation(UE::Math::TVector<double>,UE::Math::T
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=295]]
    BrzPonteiro MulticastDrawDebugCapsuleWithExtents_Implementation(void* a0, void* a1, float a2, void* a3, float a4, bool a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, float, void*, float, bool, bool>(this, "AActor.MulticastDrawDebugCapsuleWithExtents_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCapsule_Implementation(UE::Math::TVector<double>,float,float,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastDrawDebugCapsule_Implementation(void* a0, float a1, float a2, void* a3, void* a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, float, float, void*, void*, float, bool>(this, "AActor.MulticastDrawDebugCapsule_Implementation(UE::Math::TVector<double>,float,float,UE::Math::TRotator<double>,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCoordinateSystem(UE::Math::TVector<double>,UE::Math::TRotator<double>,f
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugCoordinateSystem(void* a0, void* a1, float a2, float a3, float a4, bool a5)
    {
        return NativeCall<void*, void*, void*, float, float, float, bool>(nullptr, "AActor.MulticastDrawDebugCoordinateSystem(UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCoordinateSystem_Implementation(UE::Math::TVector<double>,UE::Math::TRo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastDrawDebugCoordinateSystem_Implementation(void* a0, void* a1, float a2, float a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, float, float, float, bool>(this, "AActor.MulticastDrawDebugCoordinateSystem_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCylinder(UE::Math::TVector<double>,UE::Math::TVector<double>,float,int,
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugCylinder(void* a0, void* a1, float a2, int a3, void* a4, float a5, bool a6)
    {
        return NativeCall<void*, void*, void*, float, int, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugCylinder(UE::Math::TVector<double>,UE::Math::TVector<double>,float,int,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugCylinder_Implementation(UE::Math::TVector<double>,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastDrawDebugCylinder_Implementation(void* a0, void* a1, float a2, int a3, void* a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, float, int, void*, float, bool>(this, "AActor.MulticastDrawDebugCylinder_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,float,int,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.MulticastDrawDebugLine(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,f
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugLine(void* a0, void* a1, void* a2, float a3, float a4, bool a5)
    {
        NativeCall<void, void*, void*, void*, float, float, bool>(nullptr, "AActor.MulticastDrawDebugLine(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // dump_sobre_sdk_287a0
    //   AActor.MulticastDrawDebugLineTraceHitResult_Implementation(FHitResult,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    void MulticastDrawDebugLineTraceHitResult_Implementation(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, float a6, bool a7, void* a8, float a9, float a10, bool a11) const
    {
        NativeCall<void, void*, void*, void*, void*, void*, float, float, bool, void*, float, float, bool>(this, "AActor.MulticastDrawDebugLineTraceHitResult_Implementation(FHitResult,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,FLinearColor,float,float,bool,FLinearColor,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // dump_sobre_sdk_287a0
    //   AActor.MulticastDrawDebugLine_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    void MulticastDrawDebugLine_Implementation(void* a0, void* a1, void* a2, float a3, float a4, bool a5) const
    {
        NativeCall<void, void*, void*, void*, float, float, bool>(this, "AActor.MulticastDrawDebugLine_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugPlane_Implementation(UE::Math::TPlane<double>,UE::Math::TVector<double>
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MulticastDrawDebugPlane_Implementation(void* a0, void* a1, float a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, float, void*, float, bool>(this, "AActor.MulticastDrawDebugPlane_Implementation(UE::Math::TPlane<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.MulticastDrawDebugPoint(UE::Math::TVector<double>,float,FLinearColor,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugPoint(void* a0, float a1, void* a2, float a3, bool a4)
    {
        NativeCall<void, void*, float, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugPoint(UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugPoint_Implementation(UE::Math::TVector<double>,float,FLinearColor,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastDrawDebugPoint_Implementation(void* a0, float a1, void* a2, float a3, bool a4) const
    {
        return NativeCall<void*, void*, float, void*, float, bool>(this, "AActor.MulticastDrawDebugPoint_Implementation(UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.MulticastDrawDebugSphere(UE::Math::TVector<double>,float,int,FLinearColor,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugSphere(void* a0, float a1, int a2, void* a3, float a4, bool a5)
    {
        NativeCall<void, void*, float, int, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugSphere(UE::Math::TVector<double>,float,int,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugSphere_Implementation(UE::Math::TVector<double>,float,int,FLinearColor,
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MulticastDrawDebugSphere_Implementation(void* a0, float a1, int a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, float, int, void*, float, bool>(this, "AActor.MulticastDrawDebugSphere_Implementation(UE::Math::TVector<double>,float,int,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugString(UE::Math::TVector<double>,FString&,AActor*,FLinearColor,float,bo
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MulticastDrawDebugString(void* a0, const FString& a1, void* a2, void* a3, float a4, bool a5)
    {
        return NativeCall<void*, void*, void*, void*, void*, float, bool>(nullptr, "AActor.MulticastDrawDebugString(UE::Math::TVector<double>,FString&,AActor*,FLinearColor,float,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro MulticastDrawDebugString(void* a0, FString* a1, void* a2, void* a3, float a4, bool a5)
    { return MulticastDrawDebugString(a0, *a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.MulticastDrawDebugString_Implementation(UE::Math::TVector<double>,FString&,AActor*,FLinea
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastDrawDebugString_Implementation(void* a0, const FString& a1, void* a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float, bool>(this, "AActor.MulticastDrawDebugString_Implementation(UE::Math::TVector<double>,FString&,AActor*,FLinearColor,float,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro MulticastDrawDebugString_Implementation(void* a0, FString* a1, void* a2, void* a3, float a4, bool a5) const
    { return MulticastDrawDebugString_Implementation(a0, *a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.NetActorSpawnActor(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetActorSpawnActor(void* a0, void* a1, void* a2, bool a3, void* a4, unsigned long long a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, bool, void*, unsigned long long, void*>(this, "AActor.NetActorSpawnActor(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,USceneComponent*,FName,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.NetActorSpawnActorUnreliable_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    void NetActorSpawnActorUnreliable_Implementation(void* a0, void* a1, void* a2, bool a3, void* a4, unsigned long long a5, void* a6) const
    {
        NativeCall<void, void*, void*, void*, bool, void*, unsigned long long, void*>(this, "AActor.NetActorSpawnActorUnreliable_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,USceneComponent*,FName,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.NetActorSpawnActor_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    void NetActorSpawnActor_Implementation(void* a0, void* a1, void* a2, bool a3, void* a4, unsigned long long a5, void* a6) const
    {
        NativeCall<void, void*, void*, void*, bool, void*, unsigned long long, void*>(this, "AActor.NetActorSpawnActor_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,USceneComponent*,FName,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.NetSpawnedActor(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro NetSpawnedActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.NetSpawnedActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.NotifyActorOnClicked(FKey)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63+bytes96]]
    void NotifyActorOnClicked(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.NotifyActorOnClicked(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.NotifyActorOnReleased(FKey)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63+bytes96]]
    void NotifyActorOnReleased(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.NotifyActorOnReleased(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.OnRep_AttachmentReplication()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=41]]
    void OnRep_AttachmentReplication() const
    {
        NativeCall<void>(this, "AActor.OnRep_AttachmentReplication()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.OnRep_ReplicateMovement()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_ReplicateMovement() const
    {
        return NativeCall<void*>(this, "AActor.OnRep_ReplicateMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.OnRep_ReplicatedMovement()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ReplicatedMovement() const
    {
        NativeCall<void>(this, "AActor.OnRep_ReplicatedMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.OnSubobjectDestroyFromReplication(UObject*)
    // endereco: casamento de bytes com a build de referencia
    void OnSubobjectDestroyFromReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.OnSubobjectDestroyFromReplication(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.OutsideWorldBounds()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OutsideWorldBounds() const
    {
        NativeCall<void>(this, "AActor.OutsideWorldBounds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostActorConstruction()
    // endereco: casamento de bytes com a build de referencia
    void PostActorConstruction() const
    {
        NativeCall<void>(this, "AActor.PostActorConstruction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostCreateBlueprintComponent(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    void PostCreateBlueprintComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.PostCreateBlueprintComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostInitProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitProperties() const
    {
        NativeCall<void>(this, "AActor.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AActor.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostLoad() const
    {
        NativeCall<void>(this, "AActor.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostLoadSubobjects(FObjectInstancingGraph*)
    // endereco: casamento de bytes com a build de referencia
    void PostLoadSubobjects(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.PostLoadSubobjects(FObjectInstancingGraph*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostNetInit()
    // endereco: casamento de bytes com a build de referencia
    void PostNetInit() const
    {
        NativeCall<void>(this, "AActor.PostNetInit()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostNetReceive()
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceive() const
    {
        NativeCall<void>(this, "AActor.PostNetReceive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostNetReceiveLocationAndRotation()
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceiveLocationAndRotation() const
    {
        NativeCall<void>(this, "AActor.PostNetReceiveLocationAndRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostNetReceivePhysicState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=366]]
    void PostNetReceivePhysicState() const
    {
        NativeCall<void>(this, "AActor.PostNetReceivePhysicState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.PostNetReceiveVelocity(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostNetReceiveVelocity(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.PostNetReceiveVelocity(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostRegisterAllComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostRegisterAllComponents() const
    {
        NativeCall<void>(this, "AActor.PostRegisterAllComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.PostRename(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostRename(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AActor.PostRename(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool,bool,bool
    // endereco: casamento de bytes com a build de referencia
    void PostSpawnInitialize(void* a0, void* a1, void* a2, bool a3, bool a4, bool a5, bool a6, bool a7, int a8) const
    {
        NativeCall<void, void*, void*, void*, bool, bool, bool, bool, bool, int>(this, "AActor.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool,bool,bool,ESpawnActorScaleMethod)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.PostUnregisterAllComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostUnregisterAllComponents() const
    {
        return NativeCall<void*>(this, "AActor.PostUnregisterAllComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "AActor.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PreNetReceive()
    // endereco: cache_pdb_25090264
    void PreNetReceive() const
    {
        NativeCall<void>(this, "AActor.PreNetReceive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.PreRegisterAllComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreRegisterAllComponents() const
    {
        return NativeCall<void*>(this, "AActor.PreRegisterAllComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PreReplication(IRepChangedPropertyTracker&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PreReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.PreReplication(IRepChangedPropertyTracker&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PreReplicationForReplay(IRepChangedPropertyTracker&)
    // endereco: cache_pdb_25090264
    void PreReplicationForReplay(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.PreReplicationForReplay(IRepChangedPropertyTracker&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PrestreamTextures(float,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void PrestreamTextures(float a0, bool a1, int a2) const
    {
        NativeCall<void, float, bool, int>(this, "AActor.PrestreamTextures(float,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ProcessEvent(UFunction*,void*)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEvent(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AActor.ProcessEvent(UFunction*,void*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ProcessUserConstructionScript()
    // endereco: casamento de bytes com a build de referencia
    void ProcessUserConstructionScript() const
    {
        NativeCall<void>(this, "AActor.ProcessUserConstructionScript()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.PushSelectionToProxies()
    // endereco: casamento de bytes com a build de referencia
    void PushSelectionToProxies() const
    {
        NativeCall<void>(this, "AActor.PushSelectionToProxies()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RealtimeThrottledTick_Implementation(double)
    // endereco: cache_pdb_25090264
    void RealtimeThrottledTick_Implementation(double a0) const
    {
        NativeCall<void, double>(this, "AActor.RealtimeThrottledTick_Implementation(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ReceiveHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    void ReceiveHit(void* a0, void* a1, void* a2, bool a3, void* a4, void* a5, void* a6, void* a7) const
    {
        NativeCall<void, void*, void*, void*, bool, void*, void*, void*, void*>(this, "AActor.ReceiveHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RegisterActorTickFunctions(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterActorTickFunctions(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AActor.RegisterActorTickFunctions(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RegisterAllActorTickFunctions(bool,bool,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void RegisterAllActorTickFunctions(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "AActor.RegisterAllActorTickFunctions(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RegisterAllComponents()
    // endereco: casamento de bytes com a build de referencia
    void RegisterAllComponents() const
    {
        NativeCall<void>(this, "AActor.RegisterAllComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.RemoveActorComponentReplicatedSubObject(UActorComponent*,UObject*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveActorComponentReplicatedSubObject(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AActor.RemoveActorComponentReplicatedSubObject(UActorComponent*,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.RemoveInstanceComponent(UActorComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro RemoveInstanceComponent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.RemoveInstanceComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RemoveOwnedComponent(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveOwnedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.RemoveOwnedComponent(UActorComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.RemoveReplicatedComponent(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveReplicatedComponent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.RemoveReplicatedComponent(UActorComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.RemoveReplicatedSubObject(UObject*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveReplicatedSubObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.RemoveReplicatedSubObject(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RemoveTickPrerequisiteActor(AActor*)
    // endereco: cache_pdb_25090264
    void RemoveTickPrerequisiteActor(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.RemoveTickPrerequisiteActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RemoveTickPrerequisiteComponent(UActorComponent*)
    // endereco: cache_pdb_25090264
    void RemoveTickPrerequisiteComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.RemoveTickPrerequisiteComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Rename(wchar_t*,UObject*,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    bool Rename(void* a0, void* a1, unsigned int a2) const
    {
        return NativeCall<bool, void*, void*, unsigned int>(this, "AActor.Rename(wchar_t*,UObject*,unsignedint)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)
    // endereco: casamento de bytes com a build de referencia
    bool ReplicateSubobjects(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "AActor.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   AActor.ReregisterAllComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    void ReregisterAllComponents() const
    {
        NativeCall<void>(this, "AActor.ReregisterAllComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Reset()
    // endereco: casamento de bytes com a build de referencia
    void Reset() const
    {
        NativeCall<void>(this, "AActor.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ResetOwnedComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ResetOwnedComponents() const
    {
        NativeCall<void>(this, "AActor.ResetOwnedComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ResetSpatialComponent()
    // endereco: casamento de bytes com a build de referencia
    void ResetSpatialComponent() const
    {
        NativeCall<void>(this, "AActor.ResetSpatialComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.RouteEndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void RouteEndPlay(int a0) const
    {
        NativeCall<void, int>(this, "AActor.RouteEndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SendExecCommand(FName,FNetExecParams&,bool)
    // endereco: casamento de bytes com a build de referencia
    void SendExecCommand(unsigned long long a0, void* a1, bool a2) const
    {
        NativeCall<void, unsigned long long, void*, bool>(this, "AActor.SendExecCommand(FName,FNetExecParams&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool ServerHandleNetExecCommand(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, void*, unsigned long long, void*>(this, "AActor.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ServerSendExecCommandToEveryone(FName,FBPNetExecParams&,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSendExecCommandToEveryone(unsigned long long a0, void* a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, unsigned long long, void*, bool, bool, bool>(this, "AActor.ServerSendExecCommandToEveryone(FName,FBPNetExecParams&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ServerSendExecCommandToPlayer(APrimalPlayerController*,FName,FBPNetExecParams&,bool,bool,
    // endereco: casamento de bytes com a build de referencia
    void ServerSendExecCommandToPlayer(void* a0, unsigned long long a1, void* a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, unsigned long long, void*, bool, bool, bool>(this, "AActor.ServerSendExecCommandToPlayer(APrimalPlayerController*,FName,FBPNetExecParams&,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.ServerSendSimpleExecCommandToEveryone(FName,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSendSimpleExecCommandToEveryone(unsigned long long a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, unsigned long long, bool, bool, bool>(this, "AActor.ServerSendSimpleExecCommandToEveryone(FName,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorEnableCollision(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetActorEnableCollision(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.SetActorEnableCollision(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorHiddenInGame(bool)
    // endereco: cache_pdb_25090264
    void SetActorHiddenInGame(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.SetActorHiddenInGame(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorLocation(UE::Math::TVector<double>&,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    bool SetActorLocation(void* a0, bool a1, void* a2, int a3) const
    {
        return NativeCall<bool, void*, bool, void*, int>(this, "AActor.SetActorLocation(UE::Math::TVector<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetActorLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitR
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetActorLocationAndRotation(void* a0, void* a1, bool a2, void* a3, int a4) const
    {
        return NativeCall<void*, void*, void*, bool, void*, int>(this, "AActor.SetActorLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorRelativeLocation(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void SetActorRelativeLocation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "AActor.SetActorRelativeLocation(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorRelativeRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void SetActorRelativeRotation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "AActor.SetActorRelativeRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorRelativeScale3D(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void SetActorRelativeScale3D(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.SetActorRelativeScale3D(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorRelativeTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=258+chamadores=2]]
    void SetActorRelativeTransform(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "AActor.SetActorRelativeTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorRotation(UE::Math::TRotator<double>,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    bool SetActorRotation(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "AActor.SetActorRotation(UE::Math::TRotator<double>,ETeleportType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetActorScale3D(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActorScale3D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.SetActorScale3D(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetActorTickEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActorTickEnabled(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.SetActorTickEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetActorTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    bool SetActorTransform(void* a0, bool a1, void* a2, int a3) const
    {
        return NativeCall<bool, void*, bool, void*, int>(this, "AActor.SetActorTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetAutoDestroyWhenFinished(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetAutoDestroyWhenFinished(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.SetAutoDestroyWhenFinished(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetAutonomousProxy(bool,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetAutonomousProxy(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "AActor.SetAutonomousProxy(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetCanBeDamaged(bool)
    // endereco: cache_pdb_25090264
    void SetCanBeDamaged(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.SetCanBeDamaged(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetFakeNetPhysicsState(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetFakeNetPhysicsState(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.SetFakeNetPhysicsState(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetHidden(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetHidden(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.SetHidden(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetInstigator(APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetInstigator(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AActor.SetInstigator(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetLODParent(UPrimitiveComponent*,float)
    // endereco: casamento de bytes com a build de referencia
    void SetLODParent(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AActor.SetLODParent(UPrimitiveComponent*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetLifeSpan(float)
    // endereco: casamento de bytes com a build de referencia
    void SetLifeSpan(float a0) const
    {
        NativeCall<void, float>(this, "AActor.SetLifeSpan(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetMinNetUpdateFrequency(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetMinNetUpdateFrequency(float a0) const
    {
        return NativeCall<void*, float>(this, "AActor.SetMinNetUpdateFrequency(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetNetAddressable()
    // endereco: cache_pdb_25090264
    BrzPonteiro SetNetAddressable() const
    {
        return NativeCall<void*>(this, "AActor.SetNetAddressable()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetNetDormancy(ENetDormancy)
    // endereco: casamento de bytes com a build de referencia
    void SetNetDormancy(int a0) const
    {
        NativeCall<void, int>(this, "AActor.SetNetDormancy(ENetDormancy)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetNetDriverName(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetNetDriverName(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AActor.SetNetDriverName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetNetUpdateFrequency(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetNetUpdateFrequency(float a0) const
    {
        return NativeCall<void*, float>(this, "AActor.SetNetUpdateFrequency(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetNetworkSpatializationParent(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void SetNetworkSpatializationParent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.SetNetworkSpatializationParent(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetOwner(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void SetOwner(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.SetOwner(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetPhysicsReplicationMode(EPhysicsReplicationMode)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetPhysicsReplicationMode(int a0) const
    {
        return NativeCall<void*, int>(this, "AActor.SetPhysicsReplicationMode(EPhysicsReplicationMode)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetReplicates(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetReplicates(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.SetReplicates(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetReplicatingMovement(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetReplicatingMovement(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AActor.SetReplicatingMovement(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetRole(ENetRole)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetRole(int a0) const
    {
        return NativeCall<void*, int>(this, "AActor.SetRole(ENetRole)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SetRootComponent(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool SetRootComponent(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AActor.SetRootComponent(USceneComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AActor.SetTickGroup(ETickingGroup)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetTickGroup(int a0) const
    {
        return NativeCall<void*, int>(this, "AActor.SetTickGroup(ETickingGroup)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Stasis()
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "AActor.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.StaticRegisterNativesAActor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAActor()
    {
        NativeCall<void>(nullptr, "AActor.StaticRegisterNativesAActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.StopActorSound(USoundBase*,float)
    // endereco: casamento de bytes com a build de referencia
    void StopActorSound(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AActor.StopActorSound(USoundBase*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SwapRoles()
    // endereco: cache_pdb_25090264
    void SwapRoles() const
    {
        NativeCall<void>(this, "AActor.SwapRoles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.SyncReplicatedPhysicsSimulation()
    // endereco: casamento de bytes com a build de referencia
    void SyncReplicatedPhysicsSimulation() const
    {
        NativeCall<void>(this, "AActor.SyncReplicatedPhysicsSimulation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "AActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.TearOff()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=214]]
    void TearOff() const
    {
        NativeCall<void>(this, "AActor.TearOff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool TeleportTo(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, bool, bool>(this, "AActor.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AActor.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.TickActor(float,ELevelTick,FActorTickFunction&)
    // endereco: casamento de bytes com a build de referencia
    void TickActor(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "AActor.TickActor(float,ELevelTick,FActorTickFunction&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.UninitializeComponents(EEndPlayReason::Type&)
    // endereco: casamento de bytes com a build de referencia
    void UninitializeComponents(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.UninitializeComponents(EEndPlayReason::Type&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.UnregisterAllComponents(bool)
    // endereco: casamento de bytes com a build de referencia
    void UnregisterAllComponents(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.UnregisterAllComponents(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "AActor.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.UpdateAllReplicatedComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateAllReplicatedComponents() const
    {
        NativeCall<void>(this, "AActor.UpdateAllReplicatedComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.UpdateComponentTransforms()
    // endereco: casamento de bytes com a build de referencia
    void UpdateComponentTransforms() const
    {
        NativeCall<void>(this, "AActor.UpdateComponentTransforms()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.UpdateOverlaps(bool)
    // endereco: cache_pdb_25090264
    void UpdateOverlaps(bool a0) const
    {
        NativeCall<void, bool>(this, "AActor.UpdateOverlaps(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.UpdateReplicatedComponent(UActorComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateReplicatedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.UpdateReplicatedComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AActor.WasRecentlyRendered(float)
    // endereco: casamento de bytes com a build de referencia
    bool WasRecentlyRendered(float a0) const
    {
        return NativeCall<bool, float>(this, "AActor.WasRecentlyRendered(float)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    AActor.GetOverlappingActors(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TSubclassOf<AActor>
    //      (colide com AActor.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>))
    //    AActor.GetOverlappingComponents(TSet<UPrimitiveComponent*,DefaultKeyFuncs<UPrimitiveComponent*,0>,FDefaultSetA
    //      (colide com AActor.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&))
    //    AActor.SetActorLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitResult*,ETele
    //      (colide com AActor.SetActorLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitR)

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteRole` +7, medido na build 25090264
    //  (offset absoluto medido: 0x238; confianca alta)
    void*& ActorCategoryField() const
    { return BrzCampoAncorado<void*>(this, "RemoteRole", 7); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AActor.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AActor.BlueprintCreatedComponents"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Tags` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3D8; confianca alta)
    int& CachedStasisGridIndexField() const
    { return BrzCampoAncorado<int>(this, "Tags", 16); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AActor.Children"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AActor.CreationTime"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AActor.CustomTimeDilation"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AActor.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AActor.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AActor.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AActor.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AActor.Instigator"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteRole` +3, medido na build 25090264
    //  (offset absoluto medido: 0x234; confianca alta)
    int& LastForceNetUpdateFrameField() const
    { return BrzCampoAncorado<int>(this, "RemoteRole", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhysicsReplicationMode` +4, medido na build 25090264
    //  (offset absoluto medido: 0x378; confianca alta)
    double& LastRenderTimeField() const
    { return BrzCampoAncorado<double>(this, "PhysicsReplicationMode", 4); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AActor.Layers"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AActor.MinNetUpdateFrequency"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AActor.NetCullDistanceSquared"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AActor.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AActor.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AActor.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AActor.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AActor.NetUpdateFrequency"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnEndPlay")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.OnTakeRadialDamage")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnEndPlay` +53, medido na build 25090264
    //  (offset absoluto medido: 0x418; confianca media)
    void*& OwnedComponentsField() const
    { return BrzCampoAncorado<void*>(this, "OnEndPlay", 53); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AActor.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AActor.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.PhysicsReplicationMode")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AActor.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AActor.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AActor.RemoteRole"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnEndPlay` +37, medido na build 25090264
    //  (offset absoluto medido: 0x408; confianca media)
    TArray<UActorComponent*>& ReplicatedComponentsField() const
    { return BrzCampoAncorado<TArray<UActorComponent*>>(this, "OnEndPlay", 37); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnEndPlay` +21, medido na build 25090264
    //  (offset absoluto medido: 0x3F8; confianca media)
    void*& ReplicatedComponentsInfoField() const
    { return BrzCampoAncorado<void*>(this, "OnEndPlay", 21); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.ReplicatedMovement")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnEndPlay` +5, medido na build 25090264
    //  (offset absoluto medido: 0x3E8; confianca media)
    void*& ReplicatedSubObjectsField() const
    { return BrzCampoAncorado<void*>(this, "OnEndPlay", 5); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AActor.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AActor.RootComponent"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AActor.SpawnCollisionHandlingMethod")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AActor.Tags"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RootComponent` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3A8; confianca alta)
    void*& TimerHandle_LifeSpanExpiredField() const
    { return BrzCampoAncorado<void*>(this, "RootComponent", 8); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AActor.UpdateOverlapsMethodDuringLevelStreaming"); }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetStartup()
    { return { (void*)this, "bNetStartup" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bActorSeamlessTraveled()
    { return { (void*)this, "bActorSeamlessTraveled" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bNetCheckedInitialPhysicsState()
    { return { (void*)this, "bNetCheckedInitialPhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedSpawning()
    { return { (void*)this, "bHasFinishedSpawning" }; }
    BitFieldValue<bool, unsigned __int32> bActorInitialized()
    { return { (void*)this, "bActorInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bActorBeginningPlayFromLevelStreaming()
    { return { (void*)this, "bActorBeginningPlayFromLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bTickFunctionsRegistered()
    { return { (void*)this, "bTickFunctionsRegistered" }; }
    BitFieldValue<bool, unsigned __int32> bHasDeferredComponentRegistration()
    { return { (void*)this, "bHasDeferredComponentRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bRunningUserConstructionScript()
    { return { (void*)this, "bRunningUserConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bHasRegisteredAllComponents()
    { return { (void*)this, "bHasRegisteredAllComponents" }; }
    BitFieldValue<bool, unsigned __int32> bDeferredBeginPlay()
    { return { (void*)this, "bDeferredBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalDeferredConstruction()
    { return { (void*)this, "bPrimalDeferredConstruction" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorWantsDestroyDuringBeginPlay()
    { return { (void*)this, "bActorWantsDestroyDuringBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> ActorHasBegunPlay()
    { return { (void*)this, "ActorHasBegunPlay" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingConstructed()
    { return { (void*)this, "bActorIsBeingConstructed" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    FVector GetLocation() const
    { FVector v{}; void* r = GetNativeField<void*>(this, "RootComponent"); if (r) { double* p = (double*)GetAddress(r, "RelativeLocation"); if (p) { v.X = p[0]; v.Y = p[1]; v.Z = p[2]; } } return v; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    int GetTribeID() const
    { return GetNativeField<int>(this, "TargetingTeam"); }

};

#endif  // BRZ_SDK_JOGO_AACTOR_H
