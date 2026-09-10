// ==========================================================================
//  UStaticMeshComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USTATICMESHCOMPONENT_H
#define BRZ_SDK_JOGO_USTATICMESHCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInterface;
struct UObject;
struct UStaticMesh;
struct UStaticMeshSocket;

#include "UMeshComponent.h"

struct UStaticMeshComponent : public UMeshComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UStaticMeshComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UStaticMeshComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.AdditionalStatObject()
    // endereco: casamento de bytes com a build de referencia
    UObject* AdditionalStatObject() const
    {
        return NativeCall<UObject*>(this, "UStaticMeshComponent.AdditionalStatObject()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.AreNativePropertiesIdenticalTo(UObject*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AreNativePropertiesIdenticalTo(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UStaticMeshComponent.AreNativePropertiesIdenticalTo(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UStaticMeshComponent.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.BuildTextureStreamingDataImpl(ETextureStreamingBuildType,EMaterialQualityLe
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool BuildTextureStreamingDataImpl(int a0, int a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<bool, int, int, int, void*, void*>(this, "UStaticMeshComponent.BuildTextureStreamingDataImpl(ETextureStreamingBuildType,EMaterialQualityLevel::Type,ERHIFeatureLevel::Type,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>&,bool&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.CanEditSimulatePhysics()
    // endereco: casamento de bytes com a build de referencia
    bool CanEditSimulatePhysics() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.CanEditSimulatePhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.CopyPerInstanceDynamicCustomData(UStaticMeshComponent*,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool CopyPerInstanceDynamicCustomData(void* a0, int a1, int a2, int a3) const
    {
        return NativeCall<bool, void*, int, int, int>(this, "UStaticMeshComponent.CopyPerInstanceDynamicCustomData(UStaticMeshComponent*,int,int,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.DoesSocketExist(FName)
    // endereco: casamento de bytes com a build de referencia
    bool DoesSocketExist(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UStaticMeshComponent.DoesSocketExist(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.ExportCustomProperties(FOutputDevice&,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    void ExportCustomProperties(void* a0, unsigned int a1) const
    {
        NativeCall<void, void*, unsigned int>(this, "UStaticMeshComponent.ExportCustomProperties(FOutputDevice&,unsignedint)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetDetailedInfoInternal()
    // endereco: casamento de bytes com a build de referencia
    void GetDetailedInfoInternal(void* retorno) const
    {
        NativeCall<void, void*>(this, "UStaticMeshComponent.GetDetailedInfoInternal()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetDiffuseBoost(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    float GetDiffuseBoost(int a0) const
    {
        return NativeCall<float, int>(this, "UStaticMeshComponent.GetDiffuseBoost(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetEmissiveBoost(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    float GetEmissiveBoost(int a0) const
    {
        return NativeCall<float, int>(this, "UStaticMeshComponent.GetEmissiveBoost(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetEstimatedLightAndShadowMapMemoryUsage(int&,int&,int&,int&,int&,bool&,boo
    // endereco: casamento de bytes com a build de referencia
    bool GetEstimatedLightAndShadowMapMemoryUsage(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*>(this, "UStaticMeshComponent.GetEstimatedLightAndShadowMapMemoryUsage(int&,int&,int&,int&,int&,bool&,bool&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetEstimatedLightMapResolution(int&,int&)
    // endereco: casamento de bytes com a build de referencia
    void GetEstimatedLightMapResolution(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UStaticMeshComponent.GetEstimatedLightMapResolution(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetLightAndShadowMapMemoryUsage(int&,int&)
    // endereco: casamento de bytes com a build de referencia
    void GetLightAndShadowMapMemoryUsage(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UStaticMeshComponent.GetLightAndShadowMapMemoryUsage(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetLightMapResolution(int&,int&)
    // endereco: casamento de bytes com a build de referencia
    bool GetLightMapResolution(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UStaticMeshComponent.GetLightMapResolution(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetLocalBounds(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLocalBounds(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UStaticMeshComponent.GetLocalBounds(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetMaterial(int)
    // classe: a funcao mora em UMeshComponent, e UStaticMeshComponent herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    UMaterialInterface* GetMaterial(int a0) const
    {
        return NativeCall<UMaterialInterface*, int>(this, "UMeshComponent.GetMaterial(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetMaterialFromCollisionFaceIndex(int,int&)
    // endereco: casamento de bytes com a build de referencia
    UMaterialInterface* GetMaterialFromCollisionFaceIndex(int a0, void* a1) const
    {
        return NativeCall<UMaterialInterface*, int, void*>(this, "UStaticMeshComponent.GetMaterialFromCollisionFaceIndex(int,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetMaterialIndex(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetMaterialIndex(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "UStaticMeshComponent.GetMaterialIndex(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetMaterialSlotNames()
    // endereco: casamento de bytes com a build de referencia
    void GetMaterialSlotNames(void* retorno) const
    {
        NativeCall<void, void*>(this, "UStaticMeshComponent.GetMaterialSlotNames()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetNumMaterials()
    // endereco: casamento de bytes com a build de referencia
    int GetNumMaterials() const
    {
        return NativeCall<int>(this, "UStaticMeshComponent.GetNumMaterials()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetShadowIndirectOnly()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool GetShadowIndirectOnly() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.GetShadowIndirectOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetSocketByName(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=109+chamadores=6]]
    UStaticMeshSocket* GetSocketByName(unsigned long long a0) const
    {
        return NativeCall<UStaticMeshSocket*, unsigned long long>(this, "UStaticMeshComponent.GetSocketByName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetStaticLightingType()
    // endereco: casamento de bytes com a build de referencia
    int GetStaticLightingType() const
    {
        return NativeCall<int>(this, "UStaticMeshComponent.GetStaticLightingType()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetTextureLightAndShadowMapMemoryUsage(int,int,int&,int&)
    // endereco: casamento de bytes com a build de referencia
    void GetTextureLightAndShadowMapMemoryUsage(int a0, int a1, void* a2, void* a3) const
    {
        NativeCall<void, int, int, void*, void*>(this, "UStaticMeshComponent.GetTextureLightAndShadowMapMemoryUsage(int,int,int&,int&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bo
    // endereco: casamento de bytes com a build de referencia
    void GetUsedMaterials(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UStaticMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.GetWorldPositionOffsetDisableDistance()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetWorldPositionOffsetDisableDistance() const
    {
        return NativeCall<float>(this, "UStaticMeshComponent.GetWorldPositionOffsetDisableDistance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.HasAnySockets()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=103]]
    bool HasAnySockets() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.HasAnySockets()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.HasLightmapTextureCoordinates()
    // endereco: casamento de bytes com a build de referencia
    bool HasLightmapTextureCoordinates() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.HasLightmapTextureCoordinates()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.HasValidNaniteData()
    // endereco: casamento de bytes com a build de referencia
    bool HasValidNaniteData() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.HasValidNaniteData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.HasValidSettingsForStaticLighting(bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasValidSettingsForStaticLighting(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UStaticMeshComponent.HasValidSettingsForStaticLighting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.ImportCustomProperties(wchar_t*,FFeedbackContext*)
    // endereco: casamento de bytes com a build de referencia
    void ImportCustomProperties(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UStaticMeshComponent.ImportCustomProperties(wchar_t*,FFeedbackContext*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.InvalidateLightingCacheDetailed(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void InvalidateLightingCacheDetailed(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UStaticMeshComponent.InvalidateLightingCacheDetailed(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.IsHLODRelevant()
    // endereco: casamento de bytes com a build de referencia
    bool IsHLODRelevant() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.IsHLODRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.IsNavigationRelevant()
    // endereco: casamento de bytes com a build de referencia
    bool IsNavigationRelevant() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.IsNavigationRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.IsPrecomputedLightingValid()
    // endereco: casamento de bytes com a build de referencia
    bool IsPrecomputedLightingValid() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.IsPrecomputedLightingValid()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    void PostInitProperties() const
    {
        NativeCall<void>(this, "UStaticMeshComponent.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UStaticMeshComponent.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.PropagateLightingScenarioChange()
    // endereco: casamento de bytes com a build de referencia
    void PropagateLightingScenarioChange() const
    {
        NativeCall<void>(this, "UStaticMeshComponent.PropagateLightingScenarioChange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.RemoveInstanceVertexColorsFromLOD(int)
    // endereco: casamento de bytes com a build de referencia
    void RemoveInstanceVertexColorsFromLOD(int a0) const
    {
        NativeCall<void, int>(this, "UStaticMeshComponent.RemoveInstanceVertexColorsFromLOD(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UStaticMeshComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.SetCollisionProfileName(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCollisionProfileName(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "UStaticMeshComponent.SetCollisionProfileName(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.SetLODDataCount(unsignedint,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    bool SetLODDataCount(unsigned int a0, unsigned int a1) const
    {
        return NativeCall<bool, unsigned int, unsigned int>(this, "UStaticMeshComponent.SetLODDataCount(unsignedint,unsignedint)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.SetStaticLightingMapping(bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool SetStaticLightingMapping(bool a0, int a1) const
    {
        return NativeCall<bool, bool, int>(this, "UStaticMeshComponent.SetStaticLightingMapping(bool,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.SetStaticMesh(UStaticMesh*)
    // endereco: casamento de bytes com a build de referencia
    bool SetStaticMesh(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UStaticMeshComponent.SetStaticMesh(UStaticMesh*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UStaticMeshComponent.ShouldCreateNaniteProxy(Nanite::FMaterialAudit*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldCreateNaniteProxy(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UStaticMeshComponent.ShouldCreateNaniteProxy(Nanite::FMaterialAudit*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.ShouldCreatePhysicsState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    bool ShouldCreatePhysicsState() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.ShouldCreatePhysicsState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.ShouldCreateRenderState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=89]]
    bool ShouldCreateRenderState() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.ShouldCreateRenderState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.ShouldRecreateProxyOnUpdateTransform()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldRecreateProxyOnUpdateTransform() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.ShouldRecreateProxyOnUpdateTransform()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.SupportsDefaultCollision()
    // endereco: casamento de bytes com a build de referencia
    bool SupportsDefaultCollision() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.SupportsDefaultCollision()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.SupportsDitheredLODTransitions(ERHIFeatureLevel::Type)
    // endereco: casamento de bytes com a build de referencia
    bool SupportsDitheredLODTransitions(int a0) const
    {
        return NativeCall<bool, int>(this, "UStaticMeshComponent.SupportsDitheredLODTransitions(ERHIFeatureLevel::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.UpdateCollisionFromStaticMesh()
    // endereco: casamento de bytes com a build de referencia
    void UpdateCollisionFromStaticMesh() const
    {
        NativeCall<void>(this, "UStaticMeshComponent.UpdateCollisionFromStaticMesh()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.UseNaniteOverrideMaterials()
    // endereco: casamento de bytes com a build de referencia
    bool UseNaniteOverrideMaterials() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.UseNaniteOverrideMaterials()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.UsesOnlyUnlitMaterials()
    // endereco: casamento de bytes com a build de referencia
    bool UsesOnlyUnlitMaterials() const
    {
        return NativeCall<bool>(this, "UStaticMeshComponent.UsesOnlyUnlitMaterials()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStaticMeshComponent.UsesTextureLightmaps(int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    bool UsesTextureLightmaps(int a0, int a1) const
    {
        return NativeCall<bool, int, int>(this, "UStaticMeshComponent.UsesTextureLightmaps(int,int)", a0, a1);
    }

    float& DirectionalShadowDistanceLimitField() const
    { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DirectionalShadowDistanceLimit"); }
    float& DistanceFieldIndirectShadowMinVisibilityField() const
    { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DistanceFieldIndirectShadowMinVisibility"); }
    BrzCampoPonteiro DistanceFieldMostlyTwoSidedOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.DistanceFieldMostlyTwoSidedOverride")); }
    float& DistanceFieldSelfShadowBiasField() const
    { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DistanceFieldSelfShadowBias"); }
    int& ForcedLodModelField() const
    { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.ForcedLodModel"); }
    BrzCampoPonteiro GrassSliceIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.GrassSliceIndex")); }
    BrzCampoPonteiro LODDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.LODData")); }
    BrzCampoPonteiro LightmassSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.LightmassSettings")); }
    BrzCampoPonteiro MeshPaintTextureCookedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.MeshPaintTextureCooked")); }
    BrzCampoPonteiro MeshPaintTextureOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.MeshPaintTextureOverride")); }
    int& MinLODField() const
    { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.MinLOD"); }
    BrzCampoPonteiro NanitePixelProgrammableDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.NanitePixelProgrammableDistance")); }
    int& OverriddenLightMapResField() const
    { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.OverriddenLightMapRes"); }
    BrzCampoPonteiro OverriddenMeshPaintTextureCoordinateIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.OverriddenMeshPaintTextureCoordinateIndex")); }
    BrzCampoPonteiro OverriddenMeshPaintTextureResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.OverriddenMeshPaintTextureResolution")); }
    BrzCampoPonteiro PerInstanceDynamicCustomDataOutDisableDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.PerInstanceDynamicCustomDataOutDisableDistance")); }
    TObjectPtr<UStaticMesh>& StaticMeshField() const
    { return *GetNativePointerField<TObjectPtr<UStaticMesh>*>(this, "UStaticMeshComponent.StaticMesh"); }
    float& StreamingDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.StreamingDistanceMultiplier"); }
    BrzCampoPonteiro StreamingTextureDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.StreamingTextureData")); }
    int& SubDivisionStepSizeField() const
    { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.SubDivisionStepSize"); }
    BrzCampoPonteiro WireframeColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStaticMeshComponent.WireframeColorOverride")); }
    int& WorldPositionOffsetDisableDistanceField() const
    { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.WorldPositionOffsetDisableDistance"); }
    BitFieldValue<bool, unsigned __int32> bDisallowNanite()
    { return { (void*)this, "bDisallowNanite" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableNanite()
    { return { (void*)this, "bForceDisableNanite" }; }
    BitFieldValue<bool, unsigned __int32> bEvaluateWorldPositionOffset()
    { return { (void*)this, "bEvaluateWorldPositionOffset" }; }
    BitFieldValue<bool, unsigned __int32> bEvaluateWorldPositionOffsetInRayTracing()
    { return { (void*)this, "bEvaluateWorldPositionOffsetInRayTracing" }; }
    BitFieldValue<bool, unsigned __int32> bInitialEvaluateWorldPositionOffset()
    { return { (void*)this, "bInitialEvaluateWorldPositionOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideWireframeColor()
    { return { (void*)this, "bOverrideWireframeColor" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMinLOD()
    { return { (void*)this, "bOverrideMinLOD" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideNavigationExport()
    { return { (void*)this, "bOverrideNavigationExport" }; }
    BitFieldValue<bool, unsigned __int32> bForceNavigationObstacle()
    { return { (void*)this, "bForceNavigationObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowMeshPaintPerInstance()
    { return { (void*)this, "bDisallowMeshPaintPerInstance" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreInstanceForTextureStreaming()
    { return { (void*)this, "bIgnoreInstanceForTextureStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideLightMapRes()
    { return { (void*)this, "bOverrideLightMapRes" }; }
    BitFieldValue<bool, unsigned __int32> bCastDistanceFieldIndirectShadow()
    { return { (void*)this, "bCastDistanceFieldIndirectShadow" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideDistanceFieldSelfShadowBias()
    { return { (void*)this, "bOverrideDistanceFieldSelfShadowBias" }; }
    BitFieldValue<bool, unsigned __int32> bUseSubDivisions()
    { return { (void*)this, "bUseSubDivisions" }; }
    BitFieldValue<bool, unsigned __int32> bUseDefaultCollision()
    { return { (void*)this, "bUseDefaultCollision" }; }
    BitFieldValue<bool, unsigned __int32> bSortTriangles()
    { return { (void*)this, "bSortTriangles" }; }
    BitFieldValue<bool, unsigned __int32> bReverseCulling()
    { return { (void*)this, "bReverseCulling" }; }
    BitFieldValue<bool, unsigned __int32> bUseDirectionalShadowDistanceLimit()
    { return { (void*)this, "bUseDirectionalShadowDistanceLimit" }; }
    BitFieldValue<bool, unsigned __int32> GDFLightPortal()
    { return { (void*)this, "GDFLightPortal" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTextureColorMeshPainting()
    { return { (void*)this, "bEnableTextureColorMeshPainting" }; }
    BitFieldValue<bool, unsigned __int32> bEnableVertexColorMeshPainting()
    { return { (void*)this, "bEnableVertexColorMeshPainting" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablePerInstanceDynamicCustomDataOut()
    { return { (void*)this, "bForceDisablePerInstanceDynamicCustomDataOut" }; }
    BitFieldValue<bool, unsigned __int32> bForceNaniteForMasked()
    { return { (void*)this, "bForceNaniteForMasked" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaterialGrassOutput()
    { return { (void*)this, "bIgnoreMaterialGrassOutput" }; }
    BitFieldValue<bool, unsigned __int32> bIncludeWPOInGrassHeight()
    { return { (void*)this, "bIncludeWPOInGrassHeight" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMeshPaintTextureCoordinateIndex()
    { return { (void*)this, "bOverrideMeshPaintTextureCoordinateIndex" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMeshPaintTextureResolution()
    { return { (void*)this, "bOverrideMeshPaintTextureResolution" }; }
    BitFieldValue<bool, unsigned __int32> bProjectLandscapeGrass()
    { return { (void*)this, "bProjectLandscapeGrass" }; }
    BitFieldValue<bool, unsigned __int32> bUsePrimitiveDataForCustomFlags()
    { return { (void*)this, "bUsePrimitiveDataForCustomFlags" }; }
    BitFieldValue<bool, unsigned __int32> bWorldPositionOffsetWritesVelocity()
    { return { (void*)this, "bWorldPositionOffsetWritesVelocity" }; }

};

#endif  // BRZ_SDK_JOGO_USTATICMESHCOMPONENT_H
