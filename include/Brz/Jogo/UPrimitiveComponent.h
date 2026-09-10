// ==========================================================================
//  UPrimitiveComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMITIVECOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMITIVECOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInstanceDynamic;

#include "USceneComponent.h"

struct UPrimitiveComponent : public USceneComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimitiveComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AddAngularImpulseInRadians(UE::Math::TVector<double>,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddAngularImpulseInRadians(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "UPrimitiveComponent.AddAngularImpulseInRadians(UE::Math::TVector<double>,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AddForce(UE::Math::TVector<double>,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddForce(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "UPrimitiveComponent.AddForce(UE::Math::TVector<double>,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AddImpulse(UE::Math::TVector<double>,FName,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void AddImpulse(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "UPrimitiveComponent.AddImpulse(UE::Math::TVector<double>,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AddRadialForce(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,b
    // endereco: casamento de bytes com a build de referencia
    void AddRadialForce(void* a0, float a1, float a2, int a3, bool a4) const
    {
        NativeCall<void, void*, float, float, int, bool>(this, "UPrimitiveComponent.AddRadialForce(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AddRadialImpulse(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff
    // endereco: casamento de bytes com a build de referencia
    void AddRadialImpulse(void* a0, float a1, float a2, int a3, bool a4) const
    {
        NativeCall<void, void*, float, float, int, bool>(this, "UPrimitiveComponent.AddRadialImpulse(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AddTorqueInRadians(UE::Math::TVector<double>,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddTorqueInRadians(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "UPrimitiveComponent.AddTorqueInRadians(UE::Math::TVector<double>,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AreAllCollideableDescendantsRelative(bool)
    // endereco: casamento de bytes com a build de referencia
    bool AreAllCollideableDescendantsRelative(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimitiveComponent.AreAllCollideableDescendantsRelative(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.AreSymmetricRotations(UE::Math::TQuat<double>&,UE::Math::TQuat<double>&,UE::
    // endereco: casamento de bytes com a build de referencia
    bool AreSymmetricRotations(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UPrimitiveComponent.AreSymmetricRotations(UE::Math::TQuat<double>&,UE::Math::TQuat<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.BeginComponentOverlap(FOverlapInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    void BeginComponentOverlap(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimitiveComponent.BeginComponentOverlap(FOverlapInfo&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BeginPlay() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CalculateMass(FName)
    // endereco: casamento de bytes com a build de referencia
    float CalculateMass(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "UPrimitiveComponent.CalculateMass(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CanCharacterStepUp(APawn*)
    // endereco: casamento de bytes com a build de referencia
    bool CanCharacterStepUp(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimitiveComponent.CanCharacterStepUp(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CanEditSimulatePhysics()
    // endereco: casamento de bytes com a build de referencia
    bool CanEditSimulatePhysics() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.CanEditSimulatePhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.ClearComponentOverlaps(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearComponentOverlaps(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimitiveComponent.ClearComponentOverlaps(bool,bool)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   UPrimitiveComponent.ComponentOverlapComponentImpl(UPrimitiveComponent*,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    char ComponentOverlapComponentImpl(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<char, void*, void*, void*, void*>(this, "UPrimitiveComponent.ComponentOverlapComponentImpl(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TQuat<double>&,FCollisionQueryParams&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CreateAndSetMaterialInstanceDynamic(int)
    // endereco: casamento de bytes com a build de referencia
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int a0) const
    {
        return NativeCall<UMaterialInstanceDynamic*, int>(this, "UPrimitiveComponent.CreateAndSetMaterialInstanceDynamic(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial(int,UMaterialInterface*)
    // endereco: casamento de bytes com a build de referencia
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int a0, void* a1) const
    {
        return NativeCall<UMaterialInstanceDynamic*, int, void*>(this, "UPrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial(int,UMaterialInterface*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CreateDynamicMaterialInstance(int,UMaterialInterface*,FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<UMaterialInstanceDynamic*, int, void*, unsigned long long>(this, "UPrimitiveComponent.CreateDynamicMaterialInstance(int,UMaterialInterface*,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)
    // endereco: casamento de bytes com a build de referencia
    void CreateRenderState_Concurrent(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.DestroyRenderState_Concurrent()
    // endereco: casamento de bytes com a build de referencia
    void DestroyRenderState_Concurrent() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.DestroyRenderState_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.DispatchBlockingHit(AActor&,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void DispatchBlockingHit(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimitiveComponent.DispatchBlockingHit(AActor&,FHitResult&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.DispatchMouseOverEvents(UPrimitiveComponent*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    static void DispatchMouseOverEvents(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UPrimitiveComponent.DispatchMouseOverEvents(UPrimitiveComponent*,UPrimitiveComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.DispatchOnClicked(FKey)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void DispatchOnClicked(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.DispatchOnClicked(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.DispatchTouchOverEvents(ETouchIndex::Type,UPrimitiveComponent*,UPrimitiveCom
    // endereco: casamento de bytes com a build de referencia
    static void DispatchTouchOverEvents(int a0, void* a1, void* a2)
    {
        NativeCall<void, int, void*, void*>(nullptr, "UPrimitiveComponent.DispatchTouchOverEvents(ETouchIndex::Type,UPrimitiveComponent*,UPrimitiveComponent*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.DispatchWakeEvents(ESleepEvent,FName)
    // endereco: casamento de bytes com a build de referencia
    void DispatchWakeEvents(int a0, unsigned long long a1) const
    {
        NativeCall<void, int, unsigned long long>(this, "UPrimitiveComponent.DispatchWakeEvents(ESleepEvent,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.EndComponentOverlap(FOverlapInfo&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void EndComponentOverlap(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "UPrimitiveComponent.EndComponentOverlap(FOverlapInfo&,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.EnsurePhysicsStateCreated()
    // endereco: casamento de bytes com a build de referencia
    void EnsurePhysicsStateCreated() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.EnsurePhysicsStateCreated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetAngularDamping()
    // endereco: casamento de bytes com a build de referencia
    float GetAngularDamping() const
    {
        return NativeCall<float>(this, "UPrimitiveComponent.GetAngularDamping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetBodyInstance(FName,bool,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetBodyInstance(unsigned long long a0, bool a1, int a2) const
    {
        return NativeCall<void*, unsigned long long, bool, int>(this, "UPrimitiveComponent.GetBodyInstance(FName,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetClosestPointOnCollision(UE::Math::TVector<double>&,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    float GetClosestPointOnCollision(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<float, void*, void*, unsigned long long>(this, "UPrimitiveComponent.GetClosestPointOnCollision(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetCollisionObjectType()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetCollisionObjectType() const
    {
        return NativeCall<int>(this, "UPrimitiveComponent.GetCollisionObjectType()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetCollisionResponseSet(FCollisionResponseSet&)
    // endereco: casamento de bytes com a build de referencia
    void GetCollisionResponseSet(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.GetCollisionResponseSet(FCollisionResponseSet&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetCollisionResponseToChannel(ECollisionChannel)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    int GetCollisionResponseToChannel(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimitiveComponent.GetCollisionResponseToChannel(ECollisionChannel)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetCustomPrimitiveDataIndexForScalarParameter(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetCustomPrimitiveDataIndexForScalarParameter(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "UPrimitiveComponent.GetCustomPrimitiveDataIndexForScalarParameter(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetCustomPrimitiveDataIndexForVectorParameter(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=225]]
    int GetCustomPrimitiveDataIndexForVectorParameter(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "UPrimitiveComponent.GetCustomPrimitiveDataIndexForVectorParameter(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetLightAndShadowMapMemoryUsage(int&,int&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void GetLightAndShadowMapMemoryUsage(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimitiveComponent.GetLightAndShadowMapMemoryUsage(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetLinearDamping()
    // endereco: casamento de bytes com a build de referencia
    float GetLinearDamping() const
    {
        return NativeCall<float>(this, "UPrimitiveComponent.GetLinearDamping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetMass()
    // endereco: casamento de bytes com a build de referencia
    float GetMass() const
    {
        return NativeCall<float>(this, "UPrimitiveComponent.GetMass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetMassScale(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    float GetMassScale(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "UPrimitiveComponent.GetMassScale(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf
    // endereco: casamento de bytes com a build de referencia
    void GetOverlappingActors(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimitiveComponent.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void GetOverlappingComponents(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetResourceSizeEx(FResourceSizeEx&)
    // endereco: casamento de bytes com a build de referencia
    void GetResourceSizeEx(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.GetResourceSizeEx(FResourceSizeEx&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetSquaredDistanceToCollision(UE::Math::TVector<double>&,float&,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    bool GetSquaredDistanceToCollision(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UPrimitiveComponent.GetSquaredDistanceToCollision(UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetStaticDepthPriorityGroup()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetStaticDepthPriorityGroup() const
    {
        return NativeCall<int>(this, "UPrimitiveComponent.GetStaticDepthPriorityGroup()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetUsedTextures(TArray<UTexture*,TSizedDefaultAllocator<32>>&,EMaterialQuali
    // endereco: casamento de bytes com a build de referencia
    void GetUsedTextures(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimitiveComponent.GetUsedTextures(TArray<UTexture*,TSizedDefaultAllocator<32>>&,EMaterialQualityLevel::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.GetWeldedBodies(TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,TArray<FN
    // endereco: casamento de bytes com a build de referencia
    void GetWeldedBodies(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "UPrimitiveComponent.GetWeldedBodies(TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IgnoreActorWhenMoving(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void IgnoreActorWhenMoving(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimitiveComponent.IgnoreActorWhenMoving(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.InitSweepCollisionParams(FCollisionQueryParams&,FCollisionResponseParams&)
    // endereco: casamento de bytes com a build de referencia
    void InitSweepCollisionParams(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimitiveComponent.InitSweepCollisionParams(FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.InvalidateLightingCacheDetailed(bool,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InvalidateLightingCacheDetailed(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimitiveComponent.InvalidateLightingCacheDetailed(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsAnyRigidBodyAwake()
    // endereco: casamento de bytes com a build de referencia
    bool IsAnyRigidBodyAwake() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.IsAnyRigidBodyAwake()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsEditorOnly()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool IsEditorOnly() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.IsEditorOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsGravityEnabled()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=51]]
    bool IsGravityEnabled() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.IsGravityEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsNavigationRelevant()
    // endereco: casamento de bytes com a build de referencia
    bool IsNavigationRelevant() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.IsNavigationRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsOverlappingActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IsOverlappingActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimitiveComponent.IsOverlappingActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsSimulatingPhysics(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsSimulatingPhysics(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimitiveComponent.IsSimulatingPhysics(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.IsWorldGeometry()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    bool IsWorldGeometry() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.IsWorldGeometry()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.K2_LineTraceComponent(UE::Math::TVector<double>,UE::Math::TVector<double>,bo
    // endereco: casamento de bytes com a build de referencia
    long long K2_LineTraceComponent(void* a0, void* a1, bool a2, bool a3, bool a4, void* a5, void* a6, const FName& a7, void* a8) const
    {
        return NativeCall<long long, void*, void*, bool, bool, bool, void*, void*, void*, void*>(this, "UPrimitiveComponent.K2_LineTraceComponent(UE::Math::TVector<double>,UE::Math::TVector<double>,bool,bool,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName&,FHitResult&)", a0, a1, a2, a3, a4, a5, a6, const_cast<FName*>(&a7), a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    long long K2_LineTraceComponent(void* a0, void* a1, bool a2, bool a3, bool a4, void* a5, void* a6, FName* a7, void* a8) const
    { return K2_LineTraceComponent(a0, a1, a2, a3, a4, a5, a6, *a7, a8); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    bool LineTraceComponent(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "UPrimitiveComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.MarkChildPrimitiveComponentRenderStateDirty()
    // endereco: casamento de bytes com a build de referencia
    void MarkChildPrimitiveComponentRenderStateDirty() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.MarkChildPrimitiveComponentRenderStateDirty()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.NeedsLoadForClient()
    // endereco: casamento de bytes com a build de referencia
    bool NeedsLoadForClient() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.NeedsLoadForClient()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.NeedsLoadForServer()
    // endereco: casamento de bytes com a build de referencia
    bool NeedsLoadForServer() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.NeedsLoadForServer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnActorEnableCollisionChanged()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnActorEnableCollisionChanged() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.OnActorEnableCollisionChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnAttachmentChanged()
    // endereco: casamento de bytes com a build de referencia
    void OnAttachmentChanged() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.OnAttachmentChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnComponentCollisionSettingsChanged(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnComponentCollisionSettingsChanged(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.OnComponentCollisionSettingsChanged(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnComponentDestroyed(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnComponentDestroyed(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.OnComponentDestroyed(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnCreatePhysicsState()
    // endereco: casamento de bytes com a build de referencia
    void OnCreatePhysicsState() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.OnCreatePhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnDestroyPhysicsState()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=5/6]]
    void OnDestroyPhysicsState() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.OnDestroyPhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnRegister()
    // endereco: casamento de bytes com a build de referencia
    void OnRegister() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.OnRegister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OnUnregister()
    // endereco: casamento de bytes com a build de referencia
    void OnUnregister() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.OnUnregister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.OverlapComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollis
    // endereco: casamento de bytes com a build de referencia
    bool OverlapComponent(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UPrimitiveComponent.OverlapComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionShape&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.PostDuplicate(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void PostDuplicate(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.PostDuplicate(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.PostInitProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitProperties() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.PushSelectionToProxy()
    // endereco: casamento de bytes com a build de referencia
    void PushSelectionToProxy() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.PushSelectionToProxy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.PutAllRigidBodiesToSleep()
    // endereco: casamento de bytes com a build de referencia
    void PutAllRigidBodiesToSleep() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.PutAllRigidBodiesToSleep()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ReceiveComponentDamage(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "UPrimitiveComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.RigidBodyIsAwake(FName)
    // endereco: casamento de bytes com a build de referencia
    bool RigidBodyIsAwake(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimitiveComponent.RigidBodyIsAwake(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SendRenderTransform_Concurrent()
    // endereco: casamento de bytes com a build de referencia
    void SendRenderTransform_Concurrent() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.SendRenderTransform_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetAllPhysicsAngularVelocityInRadians(UE::Math::TVector<double>&,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetAllPhysicsAngularVelocityInRadians(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimitiveComponent.SetAllPhysicsAngularVelocityInRadians(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetAllPhysicsLinearVelocity(UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetAllPhysicsLinearVelocity(void* a0, long long a1) const
    {
        NativeCall<void, void*, long long>(this, "UPrimitiveComponent.SetAllPhysicsLinearVelocity(UE::Math::TVector<double>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetAllUseCCD(bool)
    // endereco: cache_pdb_25090264
    void SetAllUseCCD(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetAllUseCCD(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetCastHiddenShadow(bool)
    // endereco: cache_pdb_25090264
    void SetCastHiddenShadow(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetCastHiddenShadow(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetCollisionEnabled(ECollisionEnabled::Type)
    // endereco: casamento de bytes com a build de referencia
    void SetCollisionEnabled(int a0) const
    {
        NativeCall<void, int>(this, "UPrimitiveComponent.SetCollisionEnabled(ECollisionEnabled::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetCollisionProfileName(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCollisionProfileName(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "UPrimitiveComponent.SetCollisionProfileName(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetConstraintMode(EDOFMode::Type)
    // endereco: casamento de bytes com a build de referencia
    void SetConstraintMode(int a0) const
    {
        NativeCall<void, int>(this, "UPrimitiveComponent.SetConstraintMode(EDOFMode::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetCullDistance(float)
    // endereco: casamento de bytes com a build de referencia
    void SetCullDistance(float a0) const
    {
        NativeCall<void, float>(this, "UPrimitiveComponent.SetCullDistance(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetCustomDepthStencilValue(int)
    // endereco: cache_pdb_25090264
    void SetCustomDepthStencilValue(int a0) const
    {
        NativeCall<void, int>(this, "UPrimitiveComponent.SetCustomDepthStencilValue(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetCustomPrimitiveDataFloat(int,float)
    // endereco: casamento de bytes com a build de referencia
    void SetCustomPrimitiveDataFloat(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UPrimitiveComponent.SetCustomPrimitiveDataFloat(int,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetGenerateOverlapEvents(bool)
    // endereco: cache_pdb_25090264
    void SetGenerateOverlapEvents(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetGenerateOverlapEvents(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetInternalOctreeMask(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetInternalOctreeMask(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "UPrimitiveComponent.SetInternalOctreeMask(int,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetMassOverrideInKg(FName,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetMassOverrideInKg(unsigned long long a0, float a1, bool a2) const
    {
        NativeCall<void, unsigned long long, float, bool>(this, "UPrimitiveComponent.SetMassOverrideInKg(FName,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetNotifyRigidBodyCollision(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetNotifyRigidBodyCollision(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetNotifyRigidBodyCollision(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetOnlyOwnerSee(bool)
    // endereco: cache_pdb_25090264
    void SetOnlyOwnerSee(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetOnlyOwnerSee(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetOwnerNoSee(bool)
    // endereco: cache_pdb_25090264
    void SetOwnerNoSee(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetOwnerNoSee(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetPhysMaterialOverride(UPhysicalMaterial*)
    // endereco: cache_pdb_25090264
    void SetPhysMaterialOverride(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.SetPhysMaterialOverride(UPhysicalMaterial*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians(float,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    void SetPhysicsMaxAngularVelocityInRadians(float a0, bool a1, unsigned long long a2) const
    {
        NativeCall<void, float, bool, unsigned long long>(this, "UPrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians(float,bool,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetSimulatePhysics(bool)
    // endereco: cache_pdb_25090264
    void SetSimulatePhysics(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.SetSimulatePhysics(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SetWalkableSlopeOverride(FWalkableSlopeOverride&)
    // endereco: cache_pdb_25090264
    void SetWalkableSlopeOverride(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimitiveComponent.SetWalkableSlopeOverride(FWalkableSlopeOverride&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.ShouldComponentAddToScene()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldComponentAddToScene() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.ShouldComponentAddToScene()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.ShouldCreatePhysicsState()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldCreatePhysicsState() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.ShouldCreatePhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.ShouldRenderSelected()
    // endereco: cache_pdb_25090264
    bool ShouldRenderSelected() const
    {
        return NativeCall<bool>(this, "UPrimitiveComponent.ShouldRenderSelected()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.StaticRegisterNativesUPrimitiveComponent()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesUPrimitiveComponent()
    {
        NativeCall<void>(nullptr, "UPrimitiveComponent.StaticRegisterNativesUPrimitiveComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SweepComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    bool SweepComponent(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool>(this, "UPrimitiveComponent.SweepComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TQuat<double>&,FCollisionShape&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.SyncComponentToRBPhysics()
    // endereco: casamento de bytes com a build de referencia
    void SyncComponentToRBPhysics() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.SyncComponentToRBPhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.UnWeldFromParent()
    // endereco: casamento de bytes com a build de referencia
    void UnWeldFromParent() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.UnWeldFromParent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.UpdateOverlapsImpl(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInf
    // endereco: casamento de bytes com a build de referencia
    bool UpdateOverlapsImpl(void* a0, bool a1, void* a2) const
    {
        return NativeCall<bool, void*, bool, void*>(this, "UPrimitiveComponent.UpdateOverlapsImpl(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.UpdatePhysicsToRBChannels()
    // endereco: casamento de bytes com a build de referencia
    void UpdatePhysicsToRBChannels() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.UpdatePhysicsToRBChannels()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.UpdatePhysicsVolume(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdatePhysicsVolume(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimitiveComponent.UpdatePhysicsVolume(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.WakeAllRigidBodies()
    // endereco: cache_pdb_25090264
    void WakeAllRigidBodies() const
    {
        NativeCall<void>(this, "UPrimitiveComponent.WakeAllRigidBodies()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimitiveComponent.WasRecentlyRendered(float)
    // endereco: casamento de bytes com a build de referencia
    bool WasRecentlyRendered(float a0) const
    {
        return NativeCall<bool, float>(this, "UPrimitiveComponent.WasRecentlyRendered(float)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UPrimitiveComponent.WeldTo(USceneComponent*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void WeldTo(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "UPrimitiveComponent.WeldTo(USceneComponent*,FName,bool)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimitiveComponent.WeldToImplementation(USceneComponent*,FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool WeldToImplementation(void* a0, unsigned long long a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, unsigned long long, bool, bool>(this, "UPrimitiveComponent.WeldToImplementation(USceneComponent*,FName,bool,bool)", a0, a1, a2, a3);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UPrimitiveComponent.GetOverlappingActors(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TSubcl
    //      (colide com UPrimitiveComponent.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf)
    //    UPrimitiveComponent.GetOverlappingComponents(TSet<UPrimitiveComponent*,DefaultKeyFuncs<UPrimitiveComponent*,0>
    //      (colide com UPrimitiveComponent.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<)

    BrzCampoPonteiro BodyInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.BodyInstance")); }
    float& BoundsScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.BoundsScale"); }
    float& CachedMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.CachedMaxDrawDistance"); }
    BrzCampoPonteiro CanCharacterStepUpOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.CanCharacterStepUpOn")); }
    int& CustomDepthStencilValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.CustomDepthStencilValue"); }
    BrzCampoPonteiro CustomDepthStencilWriteMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.CustomDepthStencilWriteMask")); }
    BrzCampoPonteiro CustomPrimitiveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.CustomPrimitiveData")); }
    BrzCampoPonteiro CustomPrimitiveDataInternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.CustomPrimitiveDataInternal")); }
    BrzCampoPonteiro DepthPriorityGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.DepthPriorityGroup")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnPrimalComponentPhysicsStatePreChange` +9, medido na build 25090264
    //  (offset absoluto medido: 0x538; confianca alta)
    void*& DetachFenceField() const
    { return BrzCampoAncorado<void*>(this, "OnPrimalComponentPhysicsStatePreChange", 9); }
    BrzCampoPonteiro ExcludeFromHLODLevelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.ExcludeFromHLODLevels")); }
    BrzCampoPonteiro FirstPersonPrimitiveTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.FirstPersonPrimitiveType")); }
    BrzCampoPonteiro HLODBatchingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.HLODBatchingPolicy")); }
    BrzCampoPonteiro IndirectLightingCacheQualityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.IndirectLightingCacheQuality")); }
    int& InternalOctreeMaskField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.InternalOctreeMask"); }
    float& LDMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LDMaxDrawDistance"); }
    TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimitiveComponent.LODParentPrimitive"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VirtualTextureRenderPassType` +1, medido na build 25090264
    //  (offset absoluto medido: 0x304; confianca alta)
    float& LastCheckedAllCollideableDescendantsTimeField() const
    { return BrzCampoAncorado<float>(this, "VirtualTextureRenderPassType", 1); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UPrimitiveComponent.LightmapType" }; }
    float& MinDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.MinDrawDistance"); }
    TArray<void*>& MoveIgnoreActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimitiveComponent.MoveIgnoreActors"); }
    TArray<void*>& MoveIgnoreComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimitiveComponent.MoveIgnoreComponents"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasCustomNavigableGeometry` +1, medido na build 25090264
    //  (offset absoluto medido: 0x2AE; confianca alta)
    unsigned char& MoveIgnoreMaskField() const
    { return BrzCampoAncorado<unsigned char>(this, "bHasCustomNavigableGeometry", 1); }
    int& ObjectLayerField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.ObjectLayer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VirtualTextureRenderPassType` +5, medido na build 25090264
    //  (offset absoluto medido: 0x308; confianca alta)
    float& OcclusionBoundsSlackField() const
    { return BrzCampoAncorado<float>(this, "VirtualTextureRenderPassType", 5); }
    BrzCampoPonteiro OnComponentBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnComponentBeginOverlap")); }
    BrzCampoPonteiro OnComponentEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnComponentEndOverlap")); }
    BrzCampoPonteiro OnComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnComponentHit")); }
    BrzCampoPonteiro OnComponentPhysicsStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnComponentPhysicsStateChanged")); }
    BrzCampoPonteiro OnComponentSleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnComponentSleep")); }
    BrzCampoPonteiro OnComponentWakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnComponentWake")); }
    BrzCampoPonteiro OnPrimalComponentPhysicsStatePreChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.OnPrimalComponentPhysicsStatePreChange")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MoveIgnoreComponents` +16, medido na build 25090264
    //  (offset absoluto medido: 0x378; confianca alta)
    TArray<void*>& OverlappingComponentsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MoveIgnoreComponents", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MoveIgnoreComponents` +32, medido na build 25090264
    //  (offset absoluto medido: 0x388; confianca alta)
    void*& OverlappingPrimitiveComponentsField() const
    { return BrzCampoAncorado<void*>(this, "MoveIgnoreComponents", 32); }
    float& OverrideStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.OverrideStepHeight"); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.RayTracingGroupId"); }
    BrzCampoPonteiro RuntimeVirtualTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.RuntimeVirtualTextures")); }
    BrzCampoPonteiro ShadowCacheInvalidationBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.ShadowCacheInvalidationBehavior")); }
    float& TranslucencySortDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.TranslucencySortDistanceOffset"); }
    int& TranslucencySortPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.TranslucencySortPriority"); }
    unsigned char& ViewOwnerDepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimitiveComponent.ViewOwnerDepthPriorityGroup"); }
    char& VirtualTextureCullMipsField() const
    { return *GetNativePointerField<char*>(this, "UPrimitiveComponent.VirtualTextureCullMips"); }
    BrzCampoPonteiro VirtualTextureLodBiasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.VirtualTextureLodBias")); }
    BrzCampoPonteiro VirtualTextureMinCoverageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.VirtualTextureMinCoverage")); }
    FieldArray<char> VirtualTextureRenderPassTypeField() const
    { return { (void*)this, "UPrimitiveComponent.VirtualTextureRenderPassType" }; }
    int& VisibilityIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.VisibilityId"); }
    BrzCampoPonteiro bHasCustomNavigableGeometryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimitiveComponent.bHasCustomNavigableGeometry")); }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bIsActorTextureStreamingBuiltData()
    { return { (void*)this, "bIsActorTextureStreamingBuiltData" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidTextureStreamingBuiltData()
    { return { (void*)this, "bIsValidTextureStreamingBuiltData" }; }
    BitFieldValue<bool, unsigned __int32> bNeverDistanceCull()
    { return { (void*)this, "bNeverDistanceCull" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedToStreamingManagerAsStatic()
    { return { (void*)this, "bAttachedToStreamingManagerAsStatic" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedToStreamingManagerAsDynamic()
    { return { (void*)this, "bAttachedToStreamingManagerAsDynamic" }; }
    BitFieldValue<bool, unsigned __int32> bHandledByStreamingManagerAsDynamic()
    { return { (void*)this, "bHandledByStreamingManagerAsDynamic" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreStreamingManagerUpdate()
    { return { (void*)this, "bIgnoreStreamingManagerUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedToCoarseMeshStreamingManager()
    { return { (void*)this, "bAttachedToCoarseMeshStreamingManager" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents()
    { return { (void*)this, "bGenerateOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bMultiBodyOverlap()
    { return { (void*)this, "bMultiBodyOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bTraceComplexOnMove()
    { return { (void*)this, "bTraceComplexOnMove" }; }
    BitFieldValue<bool, unsigned __int32> bReturnMaterialOnMove()
    { return { (void*)this, "bReturnMaterialOnMove" }; }
    BitFieldValue<bool, unsigned __int32> bUseViewOwnerDepthPriorityGroup()
    { return { (void*)this, "bUseViewOwnerDepthPriorityGroup" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCullDistanceVolume()
    { return { (void*)this, "bAllowCullDistanceVolume" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInReflectionCaptures()
    { return { (void*)this, "bVisibleInReflectionCaptures" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInRealTimeSkyCaptures()
    { return { (void*)this, "bVisibleInRealTimeSkyCaptures" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInRayTracing()
    { return { (void*)this, "bVisibleInRayTracing" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInMainPass()
    { return { (void*)this, "bRenderInMainPass" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInDepthPass()
    { return { (void*)this, "bRenderInDepthPass" }; }
    BitFieldValue<bool, unsigned __int32> bReceivesDecals()
    { return { (void*)this, "bReceivesDecals" }; }
    BitFieldValue<bool, unsigned __int32> bHoldout()
    { return { (void*)this, "bHoldout" }; }
    BitFieldValue<bool, unsigned __int32> bOwnerNoSee()
    { return { (void*)this, "bOwnerNoSee" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOwnerSee()
    { return { (void*)this, "bOnlyOwnerSee" }; }
    BitFieldValue<bool, unsigned __int32> bTreatAsBackgroundForOcclusion()
    { return { (void*)this, "bTreatAsBackgroundForOcclusion" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsOccluder()
    { return { (void*)this, "bUseAsOccluder" }; }
    BitFieldValue<bool, unsigned __int32> bSelectable()
    { return { (void*)this, "bSelectable" }; }
    BitFieldValue<bool, unsigned __int32> bForceMipStreaming()
    { return { (void*)this, "bForceMipStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasPerInstanceHitProxies()
    { return { (void*)this, "bHasPerInstanceHitProxies" }; }
    BitFieldValue<bool, unsigned __int32> CastShadow()
    { return { (void*)this, "CastShadow" }; }
    BitFieldValue<bool, unsigned __int32> bEmissiveLightSource()
    { return { (void*)this, "bEmissiveLightSource" }; }
    BitFieldValue<bool, unsigned __int32> bAffectDynamicIndirectLighting()
    { return { (void*)this, "bAffectDynamicIndirectLighting" }; }
    BitFieldValue<bool, unsigned __int32> bAffectIndirectLightingWhileHidden()
    { return { (void*)this, "bAffectIndirectLightingWhileHidden" }; }
    BitFieldValue<bool, unsigned __int32> bAffectDistanceFieldLighting()
    { return { (void*)this, "bAffectDistanceFieldLighting" }; }
    BitFieldValue<bool, unsigned __int32> bCastDynamicShadow()
    { return { (void*)this, "bCastDynamicShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastStaticShadow()
    { return { (void*)this, "bCastStaticShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastVolumetricTranslucentShadow()
    { return { (void*)this, "bCastVolumetricTranslucentShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastContactShadow()
    { return { (void*)this, "bCastContactShadow" }; }
    BitFieldValue<bool, unsigned __int32> bSelfShadowOnly()
    { return { (void*)this, "bSelfShadowOnly" }; }
    BitFieldValue<bool, unsigned __int32> bCastFarShadow()
    { return { (void*)this, "bCastFarShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastInsetShadow()
    { return { (void*)this, "bCastInsetShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastCinematicShadow()
    { return { (void*)this, "bCastCinematicShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastHiddenShadow()
    { return { (void*)this, "bCastHiddenShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastShadowAsTwoSided()
    { return { (void*)this, "bCastShadowAsTwoSided" }; }
    BitFieldValue<bool, unsigned __int32> bLightAsIfStatic_DEPRECATED()
    { return { (void*)this, "bLightAsIfStatic_DEPRECATED" }; }
    BitFieldValue<bool, unsigned __int32> bLightAttachmentsAsGroup()
    { return { (void*)this, "bLightAttachmentsAsGroup" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLightAttachmentGroup()
    { return { (void*)this, "bExcludeFromLightAttachmentGroup" }; }
    BitFieldValue<bool, unsigned __int32> bReceiveMobileCSMShadows()
    { return { (void*)this, "bReceiveMobileCSMShadows" }; }
    BitFieldValue<bool, unsigned __int32> bSingleSampleShadowFromStationaryLights()
    { return { (void*)this, "bSingleSampleShadowFromStationaryLights" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreRadialImpulse()
    { return { (void*)this, "bIgnoreRadialImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreRadialForce()
    { return { (void*)this, "bIgnoreRadialForce" }; }
    BitFieldValue<bool, unsigned __int32> bApplyImpulseOnDamage()
    { return { (void*)this, "bApplyImpulseOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePhysicsToAutonomousProxy()
    { return { (void*)this, "bReplicatePhysicsToAutonomousProxy" }; }
    BitFieldValue<bool, unsigned __int32> bFillCollisionUnderneathForNavmesh()
    { return { (void*)this, "bFillCollisionUnderneathForNavmesh" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnClient()
    { return { (void*)this, "AlwaysLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnServer()
    { return { (void*)this, "AlwaysLoadOnServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseEditorCompositing()
    { return { (void*)this, "bUseEditorCompositing" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingMovedByEditor()
    { return { (void*)this, "bIsBeingMovedByEditor" }; }
    BitFieldValue<bool, unsigned __int32> bRenderCustomDepth()
    { return { (void*)this, "bRenderCustomDepth" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInSceneCaptureOnly()
    { return { (void*)this, "bVisibleInSceneCaptureOnly" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInSceneCapture()
    { return { (void*)this, "bHiddenInSceneCapture" }; }
    BitFieldValue<bool, unsigned __int32> bRayTracingFarField()
    { return { (void*)this, "bRayTracingFarField" }; }
    BitFieldValue<bool, unsigned __int32> bCachedAllCollideableDescendantsRelative()
    { return { (void*)this, "bCachedAllCollideableDescendantsRelative" }; }
    BitFieldValue<bool, unsigned __int32> bHasNoStreamableTextures()
    { return { (void*)this, "bHasNoStreamableTextures" }; }
    BitFieldValue<bool, unsigned __int32> bStaticWhenNotMoveable()
    { return { (void*)this, "bStaticWhenNotMoveable" }; }
    BitFieldValue<bool, unsigned __int32> bPSOPrecacheCalled()
    { return { (void*)this, "bPSOPrecacheCalled" }; }
    BitFieldValue<bool, unsigned __int32> bPSOPrecacheRequestBoosted()
    { return { (void*)this, "bPSOPrecacheRequestBoosted" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreUpdatingOwnersLastRenderTime()
    { return { (void*)this, "bIgnoreUpdatingOwnersLastRenderTime" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventBlockingProjectiles()
    { return { (void*)this, "bForcePreventBlockingProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverlapEvents()
    { return { (void*)this, "bForceOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bIsInForeground()
    { return { (void*)this, "bIsInForeground" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctree()
    { return { (void*)this, "bUseInternalOctree" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctreeOnClient()
    { return { (void*)this, "bUseInternalOctreeOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bRegisteredInternalOctree()
    { return { (void*)this, "bRegisteredInternalOctree" }; }
    BitFieldValue<bool, unsigned __int32> bForceDynamicPhysics()
    { return { (void*)this, "bForceDynamicPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBasedCharacters()
    { return { (void*)this, "bAllowBasedCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbstractBasingComponent()
    { return { (void*)this, "bIsAbstractBasingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bUseAbsoluteMaxDrawDisatance()
    { return { (void*)this, "bUseAbsoluteMaxDrawDisatance" }; }
    BitFieldValue<bool, unsigned __int32> bMovableUseDynamicDrawDistance()
    { return { (void*)this, "bMovableUseDynamicDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bIncludeBoundsRadiusInDrawDistances()
    { return { (void*)this, "bIncludeBoundsRadiusInDrawDistances" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLevelBounds()
    { return { (void*)this, "bExcludeFromLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDamage()
    { return { (void*)this, "bPreventDamage" }; }
    BitFieldValue<bool, unsigned __int32> bLightAsIfStatic()
    { return { (void*)this, "bLightAsIfStatic" }; }
    BitFieldValue<bool, unsigned __int32> bPlaceholderBool1()
    { return { (void*)this, "bPlaceholderBool1" }; }
    BitFieldValue<bool, unsigned __int32> bRegisterWithMaterialGPUMessageQueue()
    { return { (void*)this, "bRegisterWithMaterialGPUMessageQueue" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsUnfogger()
    { return { (void*)this, "bUseAsUnfogger" }; }
    BitFieldValue<bool, unsigned __int32> bWantsEditorEffects()
    { return { (void*)this, "bWantsEditorEffects" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMITIVECOMPONENT_H
