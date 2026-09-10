// ==========================================================================
//  UInstancedStaticMeshComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UINSTANCEDSTATICMESHCOMPONENT_H
#define BRZ_SDK_JOGO_UINSTANCEDSTATICMESHCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundBase;
struct UStaticMesh;

#include "UStaticMeshComponent.h"

struct UInstancedStaticMeshComponent : public UStaticMeshComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UInstancedStaticMeshComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.AddInstance(UE::Math::TTransform<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    int AddInstance(void* a0, bool a1) const
    {
        return NativeCall<int, void*, bool>(this, "UInstancedStaticMeshComponent.AddInstance(UE::Math::TTransform<double>&,bool)", a0, a1);
    }

    // jogo_confirmou_dump
    //   UInstancedStaticMeshComponent.AddInstances(TArray<UE::Math::TTransform<double>,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    void AddInstances(void* retorno, void* a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "UInstancedStaticMeshComponent.AddInstances(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&,bool,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   UInstancedStaticMeshComponent.AddInstancesInternal(TArrayView<UE::Math::TTransform<double>,int>,
    // endereco: casamento de bytes com a build de referencia
    void AddInstancesInternal(void* retorno, void* a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "UInstancedStaticMeshComponent.AddInstancesInternal(TArrayView<UE::Math::TTransform<double>,int>,bool,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.BatchUpdateInstancesTransform(int,int,UE::Math::TTransform<double>
    // endereco: casamento de bytes com a build de referencia
    bool BatchUpdateInstancesTransform(int a0, int a1, void* a2, bool a3, bool a4, bool a5) const
    {
        return NativeCall<bool, int, int, void*, bool, bool, bool>(this, "UInstancedStaticMeshComponent.BatchUpdateInstancesTransform(int,int,UE::Math::TTransform<double>&,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.BatchUpdateInstancesTransforms(int,TArray<UE::Math::TTransform<dou
    // endereco: casamento de bytes com a build de referencia
    bool BatchUpdateInstancesTransforms(int a0, void* a1, void* a2, bool a3, bool a4, bool a5) const
    {
        return NativeCall<bool, int, void*, void*, bool, bool, bool>(this, "UInstancedStaticMeshComponent.BatchUpdateInstancesTransforms(int,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.BatchUpdateInstancesTransforms(int,TArray<UE::Math::TTransform<dou
    // endereco: casamento de bytes com a build de referencia
    bool BatchUpdateInstancesTransforms(int a0, void* a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, int, void*, bool, bool, bool>(this, "UInstancedStaticMeshComponent.BatchUpdateInstancesTransforms(int,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.CleanUpInstanceAttachedComponents()
    // endereco: casamento de bytes com a build de referencia
    void CleanUpInstanceAttachedComponents() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.CleanUpInstanceAttachedComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ClearAllInstanceBodies()
    // endereco: casamento de bytes com a build de referencia
    void ClearAllInstanceBodies() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.ClearAllInstanceBodies()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ClearInstances()
    // endereco: casamento de bytes com a build de referencia
    void ClearInstances() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.ClearInstances()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ClientSetHealthPercentageForInstance(int,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetHealthPercentageForInstance(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UInstancedStaticMeshComponent.ClientSetHealthPercentageForInstance(int,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ComponentOverlapComponentImpl(UPrimitiveComponent*,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    bool ComponentOverlapComponentImpl(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "UInstancedStaticMeshComponent.ComponentOverlapComponentImpl(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TQuat<double>&,FCollisionQueryParams&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ConstructAttachedComponent(UActorComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    void ConstructAttachedComponent(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UInstancedStaticMeshComponent.ConstructAttachedComponent(UActorComponent*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.CopyInstanceTransforms(UInstancedStaticMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void CopyInstanceTransforms(void* a0) const
    {
        NativeCall<void, void*>(this, "UInstancedStaticMeshComponent.CopyInstanceTransforms(UInstancedStaticMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.CreateAllInstanceBodies()
    // endereco: casamento de bytes com a build de referencia
    void CreateAllInstanceBodies() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.CreateAllInstanceBodies()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.DealDirectDamage(APlayerController*,float,TSubclassOf<UDamageType>
    // endereco: casamento de bytes com a build de referencia
    void DealDirectDamage(void* a0, float a1, void* a2, int a3) const
    {
        NativeCall<void, void*, float, void*, int>(this, "UInstancedStaticMeshComponent.DealDirectDamage(APlayerController*,float,TSubclassOf<UDamageType>,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetBodyInstance(FName,bool,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetBodyInstance(unsigned long long a0, bool a1, int a2) const
    {
        return NativeCall<void*, unsigned long long, bool, int>(this, "UInstancedStaticMeshComponent.GetBodyInstance(FName,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetHitInstanceAttachedComponent(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetHitInstanceAttachedComponent(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UInstancedStaticMeshComponent.GetHitInstanceAttachedComponent(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetInstanceCount()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetInstanceCount() const
    {
        return NativeCall<int>(this, "UInstancedStaticMeshComponent.GetInstanceCount()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetInstanceTransform(int,UE::Math::TTransform<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GetInstanceTransform(int a0, void* a1, bool a2) const
    {
        return NativeCall<bool, int, void*, bool>(this, "UInstancedStaticMeshComponent.GetInstanceTransform(int,UE::Math::TTransform<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetInstanceVisibility(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool GetInstanceVisibility(int a0) const
    {
        return NativeCall<bool, int>(this, "UInstancedStaticMeshComponent.GetInstanceVisibility(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetInstancesOverlappingBox(UE::Math::TBox<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetInstancesOverlappingBox(void* retorno, void* a0, bool a1) const
    {
        NativeCall<void, void*, void*, bool>(this, "UInstancedStaticMeshComponent.GetInstancesOverlappingBox(UE::Math::TBox<double>&,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetInstancesOverlappingSphere(UE::Math::TVector<double>&,float,boo
    // endereco: casamento de bytes com a build de referencia
    void GetInstancesOverlappingSphere(void* retorno, void* a0, float a1, bool a2) const
    {
        NativeCall<void, void*, void*, float, bool>(this, "UInstancedStaticMeshComponent.GetInstancesOverlappingSphere(UE::Math::TVector<double>&,float,bool)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetLightAndShadowMapMemoryUsage(int&,int&)
    // endereco: casamento de bytes com a build de referencia
    void GetLightAndShadowMapMemoryUsage(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UInstancedStaticMeshComponent.GetLightAndShadowMapMemoryUsage(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSized
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "UInstancedStaticMeshComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetNavigationPerInstanceTransforms(UE::Math::TBox<double>&,TArray<
    // endereco: casamento de bytes com a build de referencia
    void GetNavigationPerInstanceTransforms(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UInstancedStaticMeshComponent.GetNavigationPerInstanceTransforms(UE::Math::TBox<double>&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetPositionOfInstance(int)
    // endereco: casamento de bytes com a build de referencia
    void GetPositionOfInstance(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "UInstancedStaticMeshComponent.GetPositionOfInstance(int)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetRenderIndexForDynamicCustomData(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    int GetRenderIndexForDynamicCustomData(int a0) const
    {
        return NativeCall<int, int>(this, "UInstancedStaticMeshComponent.GetRenderIndexForDynamicCustomData(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetResourceSizeEx(FResourceSizeEx&)
    // endereco: casamento de bytes com a build de referencia
    void GetResourceSizeEx(void* a0) const
    {
        NativeCall<void, void*>(this, "UInstancedStaticMeshComponent.GetResourceSizeEx(FResourceSizeEx&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.GetTextureStreamingTransformScale()
    // endereco: casamento de bytes com a build de referencia
    float GetTextureStreamingTransformScale() const
    {
        return NativeCall<float>(this, "UInstancedStaticMeshComponent.GetTextureStreamingTransformScale()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.InitInstanceBody(int,FBodyInstance*)
    // endereco: casamento de bytes com a build de referencia
    void InitInstanceBody(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UInstancedStaticMeshComponent.InitInstanceBody(int,FBodyInstance*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.IsHLODRelevant()
    // classe: a funcao mora em UStaticMeshComponent, e UInstancedStaticMeshComponent herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool IsHLODRelevant() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.IsHLODRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.IsNavigationRelevant()
    // endereco: casamento de bytes com a build de referencia
    bool IsNavigationRelevant() const
    {
        return NativeCall<bool>(this, "UInstancedStaticMeshComponent.IsNavigationRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.IsValidInstance(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool IsValidInstance(int a0) const
    {
        return NativeCall<bool, int>(this, "UInstancedStaticMeshComponent.IsValidInstance(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    bool LineTraceComponent(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "UInstancedStaticMeshComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.LoadedComponentFromSaveGame()
    // endereco: casamento de bytes com a build de referencia
    void LoadedComponentFromSaveGame() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.LoadedComponentFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.MulticastHideInstance_Implementation(int,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    void MulticastHideInstance_Implementation(int a0, void* a1, float a2, float a3, bool a4) const
    {
        NativeCall<void, int, void*, float, float, bool>(this, "UInstancedStaticMeshComponent.MulticastHideInstance_Implementation(int,UE::Math::TVector<double>,float,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.MulticastShowInstance_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void MulticastShowInstance_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "UInstancedStaticMeshComponent.MulticastShowInstance_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.MulticastShowInstances(TArray<unsignedshort,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    void MulticastShowInstances(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UInstancedStaticMeshComponent.MulticastShowInstances(TArray<unsignedshort,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.MulticastShowInstances_Implementation(TArray<unsignedshort,TSizedD
    // endereco: casamento de bytes com a build de referencia
    void MulticastShowInstances_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UInstancedStaticMeshComponent.MulticastShowInstances_Implementation(TArray<unsignedshort,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OnCreatePhysicsState()
    // endereco: casamento de bytes com a build de referencia
    void OnCreatePhysicsState() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.OnCreatePhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OnDestroyPhysicsState()
    // endereco: casamento de bytes com a build de referencia
    void OnDestroyPhysicsState() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.OnDestroyPhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OnPostLoadPerInstanceData()
    // endereco: casamento de bytes com a build de referencia
    void OnPostLoadPerInstanceData() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.OnPostLoadPerInstanceData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OnRegister()
    // endereco: casamento de bytes com a build de referencia
    void OnRegister() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.OnRegister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OnUnregister()
    // endereco: casamento de bytes com a build de referencia
    void OnUnregister() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.OnUnregister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OnUpdateTransform(EUpdateTransformFlags,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void OnUpdateTransform(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UInstancedStaticMeshComponent.OnUpdateTransform(EUpdateTransformFlags,ETeleportType)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.OverlapComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double
    // endereco: casamento de bytes com a build de referencia
    bool OverlapComponent(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UInstancedStaticMeshComponent.OverlapComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionShape&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.PartialNavigationUpdate(int)
    // endereco: casamento de bytes com a build de referencia
    void PartialNavigationUpdate(int a0) const
    {
        NativeCall<void, int>(this, "UInstancedStaticMeshComponent.PartialNavigationUpdate(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.PostNetReceive()
    // classe: a funcao mora em USceneComponent, e UInstancedStaticMeshComponent herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void PostNetReceive() const
    {
        NativeCall<void>(this, "USceneComponent.PostNetReceive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.PreAllocateInstancesMemory(int)
    // endereco: casamento de bytes com a build de referencia
    void PreAllocateInstancesMemory(int a0) const
    {
        NativeCall<void, int>(this, "UInstancedStaticMeshComponent.PreAllocateInstancesMemory(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.PropagateLightingScenarioChange()
    // endereco: casamento de bytes com a build de referencia
    void PropagateLightingScenarioChange() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.PropagateLightingScenarioChange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ReceiveComponentDamage(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "UInstancedStaticMeshComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.RemoveInstance(int,UE::Math::TVector<double>&,float,float)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveInstance(int a0, void* a1, float a2, float a3) const
    {
        return NativeCall<bool, int, void*, float, float>(this, "UInstancedStaticMeshComponent.RemoveInstance(int,UE::Math::TVector<double>&,float,float)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   UInstancedStaticMeshComponent.RemoveInstanceInternal(int,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveInstanceInternal(int a0, bool a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, int, bool, bool, bool, bool>(this, "UInstancedStaticMeshComponent.RemoveInstanceInternal(int,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SendRenderInstanceData_Concurrent()
    // endereco: casamento de bytes com a build de referencia
    void SendRenderInstanceData_Concurrent() const
    {
        NativeCall<void>(this, "UInstancedStaticMeshComponent.SendRenderInstanceData_Concurrent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UInstancedStaticMeshComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SetCullDistances(int,int)
    // endereco: casamento de bytes com a build de referencia
    void SetCullDistances(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UInstancedStaticMeshComponent.SetCullDistances(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SetCustomData(int,TArrayView<float,int>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool SetCustomData(int a0, void* a1, bool a2) const
    {
        return NativeCall<bool, int, void*, bool>(this, "UInstancedStaticMeshComponent.SetCustomData(int,TArrayView<float,int>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SetHealthPercentageForInstance(int,float)
    // endereco: casamento de bytes com a build de referencia
    void SetHealthPercentageForInstance(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UInstancedStaticMeshComponent.SetHealthPercentageForInstance(int,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SetInstanceVisibility(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetInstanceVisibility(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "UInstancedStaticMeshComponent.SetInstanceVisibility(int,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ShouldCreatePhysicsState()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldCreatePhysicsState() const
    {
        return NativeCall<bool>(this, "UInstancedStaticMeshComponent.ShouldCreatePhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.ShowInstance(int)
    // endereco: casamento de bytes com a build de referencia
    void ShowInstance(int a0) const
    {
        NativeCall<void, int>(this, "UInstancedStaticMeshComponent.ShowInstance(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SupportsRemoveSwap()
    // endereco: cache_pdb_25090264
    bool SupportsRemoveSwap() const
    {
        return NativeCall<bool>(this, "UInstancedStaticMeshComponent.SupportsRemoveSwap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.SweepComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    bool SweepComponent(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool>(this, "UInstancedStaticMeshComponent.SweepComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TQuat<double>&,FCollisionShape&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    void TickComponent(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "UInstancedStaticMeshComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "UInstancedStaticMeshComponent.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.UpdateInstanceBodyTransform(int,UE::Math::TTransform<double>&,bool
    // endereco: casamento de bytes com a build de referencia
    void UpdateInstanceBodyTransform(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "UInstancedStaticMeshComponent.UpdateInstanceBodyTransform(int,UE::Math::TTransform<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.UpdateInstanceTransform(int,UE::Math::TTransform<double>&,bool,boo
    // endereco: casamento de bytes com a build de referencia
    bool UpdateInstanceTransform(int a0, void* a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, int, void*, bool, bool, bool>(this, "UInstancedStaticMeshComponent.UpdateInstanceTransform(int,UE::Math::TTransform<double>&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UInstancedStaticMeshComponent.UpdateInstances(TArray<int,TSizedDefaultAllocator<32>>&,TArray<UE:
    // endereco: casamento de bytes com a build de referencia
    bool UpdateInstances(void* a0, void* a1, void* a2, int a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, void*, int, void*>(this, "UInstancedStaticMeshComponent.UpdateInstances(TArray<int,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&,int,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4);
    }

    BrzCampoPonteiro AdditionalRandomSeedsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.AdditionalRandomSeeds")); }
    BrzCampoPonteiro AttachedComponentClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.AttachedComponentClass")); }
    float& AttachedComponentScaleFactorField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.AttachedComponentScaleFactor"); }
    BrzCampoPonteiro CachedMappingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.CachedMappings")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReferencedAttachedComponentObjects` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA80; confianca alta)
    int& CurrentAttachedIndexField() const
    { return BrzCampoAncorado<int>(this, "ReferencedAttachedComponentObjects", 16); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.DestroyedMeshActorClass")); }
    float& DistanceAlongTreeToSpawnImpactSoundField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.DistanceAlongTreeToSpawnImpactSound"); }
    BrzCampoPonteiro FoliageTypeReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.FoliageTypeReference")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InstanceReorderTable` +80, medido na build 25090264
    //  (offset absoluto medido: 0x848; confianca media)
    TArray<void*>& InstanceBodiesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "InstanceReorderTable", 80); }
    int& InstanceEndCullDistanceField() const
    { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstanceEndCullDistance"); }
    BrzCampoPonteiro InstanceIdDataIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.InstanceIdDataIndex")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InstanceReorderTable` +112, medido na build 25090264
    //  (offset absoluto medido: 0x868; confianca media)
    void*& InstanceIdToInstanceIndexMapField() const
    { return BrzCampoAncorado<void*>(this, "InstanceReorderTable", 112); }
    BrzCampoPonteiro InstanceLODDistanceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.InstanceLODDistanceScale")); }
    int& InstanceMinDrawDistanceField() const
    { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstanceMinDrawDistance"); }
    TArray<void*>& InstanceReorderTableField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UInstancedStaticMeshComponent.InstanceReorderTable"); }
    int& InstanceStartCullDistanceField() const
    { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstanceStartCullDistance"); }
    TArray<void*>& InstancesVisibilityField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UInstancedStaticMeshComponent.InstancesVisibility"); }
    int& InstancingRandomSeedField() const
    { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstancingRandomSeed"); }
    float& MaxScaleForAttachedComponentField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.MaxScaleForAttachedComponent"); }
    float& MeshUnscaledBoundsField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.MeshUnscaledBounds"); }
    float& MinScaleForAttachedComponentField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.MinScaleForAttachedComponent"); }
    BrzCampoPonteiro NavigationBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.NavigationBounds")); }
    int& NumCustomDataFloatsField() const
    { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.NumCustomDataFloats"); }
    int& NumPendingLightmapsField() const
    { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.NumPendingLightmaps"); }
    TArray<void*>& OverrideDestructionMaterialsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UInstancedStaticMeshComponent.OverrideDestructionMaterials"); }
    TObjectPtr<USoundBase>& OverrideTreeGroundImpactSoundField() const
    { return *GetNativePointerField<TObjectPtr<USoundBase>*>(this, "UInstancedStaticMeshComponent.OverrideTreeGroundImpactSound"); }
    TObjectPtr<USoundBase>& OverrideTreeHarvestSoundField() const
    { return *GetNativePointerField<TObjectPtr<USoundBase>*>(this, "UInstancedStaticMeshComponent.OverrideTreeHarvestSound"); }
    float& OverrideWalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.OverrideWalkableFloorZ"); }
    BrzCampoPonteiro PerInstanceCustomFlagDataIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.PerInstanceCustomFlagDataIndex")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InstanceReorderTable` +96, medido na build 25090264
    //  (offset absoluto medido: 0x858; confianca media)
    TArray<void*>& PerInstanceIdsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "InstanceReorderTable", 96); }
    TArray<void*>& PerInstancePrevTransformField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UInstancedStaticMeshComponent.PerInstancePrevTransform"); }
    TArray<void*>& PerInstanceSMCustomDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UInstancedStaticMeshComponent.PerInstanceSMCustomData"); }
    BrzCampoPonteiro PerInstanceSMDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.PerInstanceSMData")); }
    float& PlayerOverrideWalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.PlayerOverrideWalkableFloorZ"); }
    BrzCampoPonteiro PreviousComponentTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInstancedStaticMeshComponent.PreviousComponentTransform")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InstanceReorderTable` +16, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca media)
    void*& ProxySizeField() const
    { return BrzCampoAncorado<void*>(this, "InstanceReorderTable", 16); }
    TArray<void*>& ReferencedAttachedComponentObjectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UInstancedStaticMeshComponent.ReferencedAttachedComponentObjects"); }
    float& ScaleMaxXField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.ScaleMaxX"); }
    float& ScaleMinXField() const
    { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.ScaleMinX"); }
    TObjectPtr<UStaticMesh>& TreeStumpMeshField() const
    { return *GetNativePointerField<TObjectPtr<UStaticMesh>*>(this, "UInstancedStaticMeshComponent.TreeStumpMesh"); }
    BitFieldValue<bool, unsigned __int32> bIgnoreAutomaticBoundsWPODisableDistance()
    { return { (void*)this, "bIgnoreAutomaticBoundsWPODisableDistance" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreVisibilityCheck()
    { return { (void*)this, "bIgnoreVisibilityCheck" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateThisComponent()
    { return { (void*)this, "bReplicateThisComponent" }; }
    BitFieldValue<bool, unsigned __int32> bTickOnlyCheckFoliageClipping()
    { return { (void*)this, "bTickOnlyCheckFoliageClipping" }; }
    BitFieldValue<bool, unsigned __int32> bIsFallingTree()
    { return { (void*)this, "bIsFallingTree" }; }
    BitFieldValue<bool, unsigned __int32> bPostNetReceiveHide()
    { return { (void*)this, "bPostNetReceiveHide" }; }
    BitFieldValue<bool, unsigned __int32> bDidFirstPostNetReceive()
    { return { (void*)this, "bDidFirstPostNetReceive" }; }
    BitFieldValue<bool, unsigned __int32> bInstanceRequiresPhysXCollision()
    { return { (void*)this, "bInstanceRequiresPhysXCollision" }; }
    BitFieldValue<bool, unsigned __int32> bDontScaleAttachedComponent()
    { return { (void*)this, "bDontScaleAttachedComponent" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCollision()
    { return { (void*)this, "bDisableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWPODisableDistanceScaling()
    { return { (void*)this, "bIgnoreWPODisableDistanceScaling" }; }
    BitFieldValue<bool, unsigned __int32> bInheritPerInstanceData()
    { return { (void*)this, "bInheritPerInstanceData" }; }
    BitFieldValue<bool, unsigned __int32> bSupportGPUMessageInstanceId()
    { return { (void*)this, "bSupportGPUMessageInstanceId" }; }
    BitFieldValue<bool, unsigned __int32> bSupportPerInstanceCustomFlags()
    { return { (void*)this, "bSupportPerInstanceCustomFlags" }; }
    BitFieldValue<bool, unsigned __int32> bUseGpuLodSelection()
    { return { (void*)this, "bUseGpuLodSelection" }; }

};

#endif  // BRZ_SDK_JOGO_UINSTANCEDSTATICMESHCOMPONENT_H
