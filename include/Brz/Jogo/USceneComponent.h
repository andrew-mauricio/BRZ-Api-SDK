// ==========================================================================
//  USceneComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USCENECOMPONENT_H
#define BRZ_SDK_JOGO_USCENECOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APhysicsVolume;
struct FName;

#include "UActorComponent.h"

struct USceneComponent : public UActorComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("USceneComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AddLocalOffset(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void AddLocalOffset(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.AddLocalOffset(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AddLocalRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void AddLocalRotation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.AddLocalRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AddLocalTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void AddLocalTransform(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.AddLocalTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AddWorldRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void AddWorldRotation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.AddWorldRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AddWorldTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void AddWorldTransform(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.AddWorldTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AddWorldTransformKeepScale(UE::Math::TTransform<double>&,bool,FHitResult*,ETelep
    // endereco: casamento de bytes com a build de referencia
    void AddWorldTransformKeepScale(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.AddWorldTransformKeepScale(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AppendDescendants(TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void AppendDescendants(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.AppendDescendants(TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyWorldOffset(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "USceneComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.AttachToComponent(USceneComponent*,FAttachmentTransformRules&,FName)
    // endereco: casamento de bytes com a build de referencia
    bool AttachToComponent(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<bool, void*, void*, unsigned long long>(this, "USceneComponent.AttachToComponent(USceneComponent*,FAttachmentTransformRules&,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.CalcBoundingCylinder(float&,float&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=58]]
    void CalcBoundingCylinder(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "USceneComponent.CalcBoundingCylinder(float&,float&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.CanEverRender()
    // endereco: casamento de bytes com a build de referencia
    bool CanEverRender() const
    {
        return NativeCall<bool>(this, "USceneComponent.CanEverRender()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.ClearSkipUpdateOverlaps()
    // endereco: cache_pdb_25090264
    void ClearSkipUpdateOverlaps() const
    {
        NativeCall<void>(this, "USceneComponent.ClearSkipUpdateOverlaps()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.DestroyComponent(bool)
    // endereco: casamento de bytes com a build de referencia
    void DestroyComponent(bool a0) const
    {
        NativeCall<void, bool>(this, "USceneComponent.DestroyComponent(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.DetachFromParent(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void DetachFromParent(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "USceneComponent.DetachFromParent(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "USceneComponent.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.GetChildrenComponents(bool,TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetChildrenComponents(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "USceneComponent.GetChildrenComponents(bool,TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.GetCollisionResponseToComponent(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    int GetCollisionResponseToComponent(void* a0) const
    {
        return NativeCall<int, void*>(this, "USceneComponent.GetCollisionResponseToComponent(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.GetPhysicsVolume()
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetPhysicsVolume() const
    {
        return NativeCall<APhysicsVolume*>(this, "USceneComponent.GetPhysicsVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.GetSocketWorldLocationAndRotation(FName,UE::Math::TVector<double>&,UE::Math::TRo
    // endereco: casamento de bytes com a build de referencia
    void GetSocketWorldLocationAndRotation(unsigned long long a0, void* a1, void* a2) const
    {
        NativeCall<void, unsigned long long, void*, void*>(this, "USceneComponent.GetSocketWorldLocationAndRotation(FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.InternalSetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<do
    // endereco: casamento de bytes com a build de referencia
    char InternalSetWorldLocationAndRotation(void* a0, void* a1, long long a2, int a3) const
    {
        return NativeCall<char, void*, void*, long long, int>(this, "USceneComponent.InternalSetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.IsAnySimulatingPhysics()
    // endereco: cache_pdb_25090264
    bool IsAnySimulatingPhysics() const
    {
        return NativeCall<bool>(this, "USceneComponent.IsAnySimulatingPhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.IsPostLoadThreadSafe()
    // endereco: casamento de bytes com a build de referencia
    bool IsPostLoadThreadSafe() const
    {
        return NativeCall<bool>(this, "USceneComponent.IsPostLoadThreadSafe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.IsVisible()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=61]]
    bool IsVisible() const
    {
        return NativeCall<bool>(this, "USceneComponent.IsVisible()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.IsVisibleInEditor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsVisibleInEditor() const
    {
        return NativeCall<bool>(this, "USceneComponent.IsVisibleInEditor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.K2_AddRelativeLocation(UE::Math::TVector<double>,bool,FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void K2_AddRelativeLocation(void* a0, bool a1, void* a2, bool a3) const
    {
        NativeCall<void, void*, bool, void*, bool>(this, "USceneComponent.K2_AddRelativeLocation(UE::Math::TVector<double>,bool,FHitResult&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.K2_SetRelativeLocation(UE::Math::TVector<double>,bool,FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void K2_SetRelativeLocation(void* a0, bool a1, void* a2, bool a3) const
    {
        NativeCall<void, void*, bool, void*, bool>(this, "USceneComponent.K2_SetRelativeLocation(UE::Math::TVector<double>,bool,FHitResult&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.MoveComponent(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,FHitRe
    // endereco: casamento de bytes com a build de referencia
    bool MoveComponent(void* a0, void* a1, bool a2, void* a3, int a4, int a5) const
    {
        return NativeCall<bool, void*, void*, bool, void*, int, int>(this, "USceneComponent.MoveComponent(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,FHitResult*,EMoveComponentFlags,ETeleportType)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.MoveComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitR
    // endereco: casamento de bytes com a build de referencia
    bool MoveComponentImpl(void* a0, void* a1, bool a2, void* a3, int a4, int a5) const
    {
        return NativeCall<bool, void*, void*, bool, void*, int, int>(this, "USceneComponent.MoveComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult*,EMoveComponentFlags,ETeleportType)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.OnChildAttached(USceneComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnChildAttached(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.OnChildAttached(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.OnComponentDestroyed(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnComponentDestroyed(bool a0) const
    {
        NativeCall<void, bool>(this, "USceneComponent.OnComponentDestroyed(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.OnHiddenInGameChanged()
    // endereco: cache_pdb_25090264
    void OnHiddenInGameChanged() const
    {
        NativeCall<void>(this, "USceneComponent.OnHiddenInGameChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.OnRegister()
    // endereco: casamento de bytes com a build de referencia
    void OnRegister() const
    {
        NativeCall<void>(this, "USceneComponent.OnRegister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.OnRep_AttachChildren()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_AttachChildren() const
    {
        NativeCall<void>(this, "USceneComponent.OnRep_AttachChildren()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.OnUnregister()
    // classe: a funcao mora em UActorComponent, e USceneComponent herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void OnUnregister() const
    {
        NativeCall<void>(this, "UActorComponent.OnUnregister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.PostNetReceive()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void PostNetReceive() const
    {
        NativeCall<void>(this, "USceneComponent.PostNetReceive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.PostRepNotifies()
    // endereco: casamento de bytes com a build de referencia
    void PostRepNotifies() const
    {
        NativeCall<void>(this, "USceneComponent.PostRepNotifies()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.PreNetReceive()
    // endereco: casamento de bytes com a build de referencia
    void PreNetReceive() const
    {
        NativeCall<void>(this, "USceneComponent.PreNetReceive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.PropagateTransformUpdate(bool,EUpdateTransformFlags,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void PropagateTransformUpdate(bool a0, int a1, int a2) const
    {
        NativeCall<void, bool, int, int>(this, "USceneComponent.PropagateTransformUpdate(bool,EUpdateTransformFlags,ETeleportType)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.ResetRelativeTransform()
    // endereco: casamento de bytes com a build de referencia
    void ResetRelativeTransform() const
    {
        NativeCall<void>(this, "USceneComponent.ResetRelativeTransform()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetHiddenInGame(bool,USceneComponent::EVisibilityPropagation,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetHiddenInGame(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "USceneComponent.SetHiddenInGame(bool,USceneComponent::EVisibilityPropagation,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetMobility(EComponentMobility::Type)
    // endereco: casamento de bytes com a build de referencia
    void SetMobility(int a0) const
    {
        NativeCall<void, int>(this, "USceneComponent.SetMobility(EComponentMobility::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetPhysicsVolume(APhysicsVolume*,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetPhysicsVolume(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "USceneComponent.SetPhysicsVolume(APhysicsVolume*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetRelativeLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>
    // endereco: casamento de bytes com a build de referencia
    void SetRelativeLocationAndRotation(void* a0, void* a1, bool a2, void* a3, int a4) const
    {
        NativeCall<void, void*, void*, bool, void*, int>(this, "USceneComponent.SetRelativeLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetRelativeRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void SetRelativeRotation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.SetRelativeRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   USceneComponent.SetRelativeRotationExact(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportTy
    // endereco: casamento de bytes com a build de referencia
    void SetRelativeRotationExact(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.SetRelativeRotationExact(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetRelativeScale3D(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void SetRelativeScale3D(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.SetRelativeScale3D(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetRelativeTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportTyp
    // endereco: casamento de bytes com a build de referencia
    void SetRelativeTransform(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.SetRelativeTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetShouldUpdatePhysicsVolume(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetShouldUpdatePhysicsVolume(bool a0) const
    {
        NativeCall<void, bool>(this, "USceneComponent.SetShouldUpdatePhysicsVolume(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetWorldLocation(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void SetWorldLocation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.SetWorldLocation(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,b
    // endereco: casamento de bytes com a build de referencia
    void SetWorldLocationAndRotation(void* a0, void* a1, bool a2, void* a3, int a4) const
    {
        NativeCall<void, void*, void*, bool, void*, int>(this, "USceneComponent.SetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetWorldLocationAndRotationNoPhysics(UE::Math::TVector<double>&,UE::Math::TRotat
    // endereco: casamento de bytes com a build de referencia
    void SetWorldLocationAndRotationNoPhysics(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "USceneComponent.SetWorldLocationAndRotationNoPhysics(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetWorldRotation(UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void SetWorldRotation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.SetWorldRotation(UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetWorldScale3D(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void SetWorldScale3D(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.SetWorldScale3D(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetWorldTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void SetWorldTransform(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "USceneComponent.SetWorldTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.SetupAttachment(USceneComponent*,FName)
    // endereco: casamento de bytes com a build de referencia
    void SetupAttachment(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "USceneComponent.SetupAttachment(USceneComponent*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.ShouldRender()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldRender() const
    {
        return NativeCall<bool>(this, "USceneComponent.ShouldRender()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.StopSound(USoundBase*,float)
    // endereco: casamento de bytes com a build de referencia
    void StopSound(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "USceneComponent.StopSound(USoundBase*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdateBounds()
    // endereco: casamento de bytes com a build de referencia
    void UpdateBounds() const
    {
        NativeCall<void>(this, "USceneComponent.UpdateBounds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdateChildTransforms(EUpdateTransformFlags,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void UpdateChildTransforms(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "USceneComponent.UpdateChildTransforms(EUpdateTransformFlags,ETeleportType)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdateComponentToWorldWithParent(USceneComponent*,FName,EUpdateTransformFlags,UE
    // endereco: casamento de bytes com a build de referencia
    void UpdateComponentToWorldWithParent(void* a0, unsigned long long a1, int a2, void* a3, int a4) const
    {
        NativeCall<void, void*, unsigned long long, int, void*, int>(this, "USceneComponent.UpdateComponentToWorldWithParent(USceneComponent*,FName,EUpdateTransformFlags,UE::Math::TQuat<double>&,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdateNavigationData()
    // endereco: casamento de bytes com a build de referencia
    void UpdateNavigationData() const
    {
        NativeCall<void>(this, "USceneComponent.UpdateNavigationData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdateOverlaps(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)
    // endereco: casamento de bytes com a build de referencia
    bool UpdateOverlaps(void* a0, bool a1, void* a2) const
    {
        return NativeCall<bool, void*, bool, void*>(this, "USceneComponent.UpdateOverlaps(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdateOverlapsImpl(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,in
    // endereco: casamento de bytes com a build de referencia
    bool UpdateOverlapsImpl(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "USceneComponent.UpdateOverlapsImpl(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.UpdatePhysicsVolume(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdatePhysicsVolume(bool a0) const
    {
        NativeCall<void, bool>(this, "USceneComponent.UpdatePhysicsVolume(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USceneComponent.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)
    // endereco: cache_pdb_25090264
    void ValidateGeneratedRepEnums(void* a0) const
    {
        NativeCall<void, void*>(this, "USceneComponent.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    USceneComponent.SetRelativeLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitR
    //      (colide com USceneComponent.SetRelativeLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>)
    //    USceneComponent.SetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitResu
    //      (colide com USceneComponent.SetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,b)
    //    USceneComponent.SetWorldRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)
    //      (colide com USceneComponent.SetWorldRotation(UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType))

    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "USceneComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "USceneComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "USceneComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "USceneComponent.AttachmentChangedIncrementer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientAttachedChildren` +24, medido na build 25090264
    //  (offset absoluto medido: 0x120; confianca alta)
    void*& BoundsField() const
    { return BrzCampoAncorado<void*>(this, "ClientAttachedChildren", 24); }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "USceneComponent.ClientAttachedChildren"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhysicsVolumeChangedDelegate` +72, medido na build 25090264
    //  (offset absoluto medido: 0x210; confianca media)
    void*& ComponentToWorldField() const
    { return BrzCampoAncorado<void*>(this, "PhysicsVolumeChangedDelegate", 72); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USceneComponent.ComponentVelocity")); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "USceneComponent.DetailMode"); }
    BrzCampoPonteiro MobilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USceneComponent.Mobility")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientAttachedChildren` +16, medido na build 25090264
    //  (offset absoluto medido: 0x118; confianca alta)
    USceneComponent*& NetOldAttachParentField() const
    { return BrzCampoAncorado<USceneComponent*>(this, "ClientAttachedChildren", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AttachSocketName` +8, medido na build 25090264
    //  (offset absoluto medido: 0xF0; confianca alta)
    FName& NetOldAttachSocketNameField() const
    { return BrzCampoAncorado<FName>(this, "AttachSocketName", 8); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "USceneComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USceneComponent.PhysicsVolumeChangedDelegate")); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USceneComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USceneComponent.RelativeRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhysicsVolumeChangedDelegate` +56, medido na build 25090264
    //  (offset absoluto medido: 0x200; confianca media)
    void*& RelativeRotationCacheField() const
    { return BrzCampoAncorado<void*>(this, "PhysicsVolumeChangedDelegate", 56); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USceneComponent.RelativeScale3D")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhysicsVolumeChangedDelegate` +48, medido na build 25090264
    //  (offset absoluto medido: 0x1F8; confianca media)
    void*& WorldRotationCacheField() const
    { return BrzCampoAncorado<void*>(this, "PhysicsVolumeChangedDelegate", 48); }
    BitFieldValue<bool, unsigned __int32> bClientSyncAlwaysUpdatePhysicsCollision()
    { return { (void*)this, "bClientSyncAlwaysUpdatePhysicsCollision" }; }
    BitFieldValue<bool, unsigned __int32> bComponentToWorldUpdated()
    { return { (void*)this, "bComponentToWorldUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bSkipUpdateOverlaps()
    { return { (void*)this, "bSkipUpdateOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteLocation()
    { return { (void*)this, "bAbsoluteLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteRotation()
    { return { (void*)this, "bAbsoluteRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteScale()
    { return { (void*)this, "bAbsoluteScale" }; }
    BitFieldValue<bool, unsigned __int32> bVisible()
    { return { (void*)this, "bVisible" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeAttached()
    { return { (void*)this, "bShouldBeAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapLocationWhenAttached()
    { return { (void*)this, "bShouldSnapLocationWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapRotationWhenAttached()
    { return { (void*)this, "bShouldSnapRotationWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapScaleWhenAttached()
    { return { (void*)this, "bShouldSnapScaleWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldUpdatePhysicsVolume()
    { return { (void*)this, "bShouldUpdatePhysicsVolume" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInGame()
    { return { (void*)this, "bHiddenInGame" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedSoundsForceHighPriority()
    { return { (void*)this, "bAttachedSoundsForceHighPriority" }; }
    BitFieldValue<bool, unsigned __int32> bBoundsChangeTriggersStreamingDataRebuild()
    { return { (void*)this, "bBoundsChangeTriggersStreamingDataRebuild" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachParentBound()
    { return { (void*)this, "bUseAttachParentBound" }; }
    BitFieldValue<bool, unsigned __int32> bComputeFastLocalBounds()
    { return { (void*)this, "bComputeFastLocalBounds" }; }
    BitFieldValue<bool, unsigned __int32> bComputeBoundsOnceForGame()
    { return { (void*)this, "bComputeBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bComputedBoundsOnceForGame()
    { return { (void*)this, "bComputedBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bIsNotRenderAttachmentRoot()
    { return { (void*)this, "bIsNotRenderAttachmentRoot" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDetachmentUpdateOverlaps()
    { return { (void*)this, "bDisableDetachmentUpdateOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bWantsOnUpdateTransform()
    { return { (void*)this, "bWantsOnUpdateTransform" }; }
    BitFieldValue<bool, unsigned __int32> bNetUpdateTransform()
    { return { (void*)this, "bNetUpdateTransform" }; }
    BitFieldValue<bool, unsigned __int32> bNetUpdateAttachment()
    { return { (void*)this, "bNetUpdateAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreParentTransformUpdate()
    { return { (void*)this, "bIgnoreParentTransformUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateChildOverlaps()
    { return { (void*)this, "bUpdateChildOverlaps" }; }

};

#endif  // BRZ_SDK_JOGO_USCENECOMPONENT_H
