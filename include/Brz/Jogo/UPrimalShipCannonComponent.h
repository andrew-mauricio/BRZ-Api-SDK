// ==========================================================================
//  UPrimalShipCannonComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSHIPCANNONCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALSHIPCANNONCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct USceneComponent;
struct UStaticMesh;


struct UPrimalShipCannonComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalShipCannonComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.CanFire(double,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanFire(double a0, float a1) const
    {
        return NativeCall<void*, double, float>(this, "UPrimalShipCannonComponent.CanFire(double,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.ComputeAimDeviationDegrees(UE::Math::TVector<double>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeAimDeviationDegrees(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UPrimalShipCannonComponent.ComputeAimDeviationDegrees(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.ComputeCurrentBarrelRange(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeCurrentBarrelRange(float a0, float a1, float a2) const
    {
        return NativeCall<void*, float, float, float>(this, "UPrimalShipCannonComponent.ComputeCurrentBarrelRange(float,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.ConfigureFromMount(FShipCannonMount&,FShipCannonMountSettings&)
    // endereco: cache_pdb_25090264
    BrzPonteiro ConfigureFromMount(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalShipCannonComponent.ConfigureFromMount(FShipCannonMount&,FShipCannonMountSettings&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.DestroyComponent(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro DestroyComponent(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalShipCannonComponent.DestroyComponent(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetMuzzleComponent()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMuzzleComponent() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonComponent.GetMuzzleComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetMuzzleSocket()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMuzzleSocket() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonComponent.GetMuzzleSocket()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetMuzzleTransform()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMuzzleTransform() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonComponent.GetMuzzleTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetRestPoseWorldTransform()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRestPoseWorldTransform() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonComponent.GetRestPoseWorldTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.SolveBallisticArc(UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SolveBallisticArc(void* a0, void* a1, float a2, float a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, float, float, void*>(this, "UPrimalShipCannonComponent.SolveBallisticArc(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.SpawnMuzzleFlashEmitter(TSubclassOf<APrimalEmitterSpawnable>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnMuzzleFlashEmitter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonComponent.SpawnMuzzleFlashEmitter(TSubclassOf<APrimalEmitterSpawnable>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.UpdateAimToBandSlot(UE::Math::TVector<double>&,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAimToBandSlot(void* a0, float a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, float, float, float>(this, "UPrimalShipCannonComponent.UpdateAimToBandSlot(UE::Math::TVector<double>&,float,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.UpdateVisualOffsets(float,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateVisualOffsets(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalShipCannonComponent.UpdateVisualOffsets(float,bool)", a0, a1);
    }

    float& AimInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.AimInterpSpeed"); }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnClient()
    { return { (void*)this, "AlwaysLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnServer()
    { return { (void*)this, "AlwaysLoadOnServer" }; }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.AssetUserData"); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UPrimalShipCannonComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.AttachmentChangedIncrementer"); }
    BrzCampoPonteiro BarrelMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.BarrelMesh")); }
    BrzCampoPonteiro BodyInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.BodyInstance")); }
    float& BoundsScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.BoundsScale"); }
    BrzCampoPonteiro CachedLaunchDirWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.CachedLaunchDirWorld")); }
    float& CachedMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.CachedMaxDrawDistance"); }
    unsigned char& CanCharacterStepUpOnField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.CanCharacterStepUpOn"); }
    BitFieldValue<bool, unsigned __int32> CastShadow()
    { return { (void*)this, "CastShadow" }; }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.ClientAttachedChildren"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.CustomData"); }
    int& CustomDepthStencilValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.CustomDepthStencilValue"); }
    BrzCampoPonteiro CustomDepthStencilWriteMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.CustomDepthStencilWriteMask")); }
    BrzCampoPonteiro CustomPrimitiveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.CustomPrimitiveData")); }
    BrzCampoPonteiro CustomPrimitiveDataInternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.CustomPrimitiveDataInternal")); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.CustomTag"); }
    BrzCampoPonteiro DamageFXActorToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.DamageFXActorToSpawn")); }
    float& DeployInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DeployInterpSpeed"); }
    float& DeployRatioField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DeployRatio"); }
    unsigned char& DepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.DepthPriorityGroup"); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.DetailMode"); }
    float& DirectionalShadowDistanceLimitField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DirectionalShadowDistanceLimit"); }
    float& DistanceFieldIndirectShadowMinVisibilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DistanceFieldIndirectShadowMinVisibility"); }
    BrzCampoPonteiro DistanceFieldMostlyTwoSidedOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.DistanceFieldMostlyTwoSidedOverride")); }
    float& DistanceFieldSelfShadowBiasField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DistanceFieldSelfShadowBias"); }
    unsigned char& ExcludeFromHLODLevelsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.ExcludeFromHLODLevels"); }
    BrzCampoPonteiro FirstPersonPrimitiveTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.FirstPersonPrimitiveType")); }
    int& ForcedLodModelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.ForcedLodModel"); }
    BitFieldValue<bool, unsigned __int32> GDFLightPortal()
    { return { (void*)this, "GDFLightPortal" }; }
    unsigned char& GrassSliceIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.GrassSliceIndex"); }
    BrzCampoPonteiro HLODBatchingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.HLODBatchingPolicy")); }
    unsigned char& IndirectLightingCacheQualityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.IndirectLightingCacheQuality"); }
    int& InternalOctreeMaskField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.InternalOctreeMask"); }
    float& LDMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.LDMaxDrawDistance"); }
    BrzCampoPonteiro LODDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LODData")); }
    TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimalShipCannonComponent.LODParentPrimitive"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LocalAimDelta` +24, medido na build 25090264
    //  (offset absoluto medido: 0x7D8; confianca alta)
    double& LastFireTimeField() const
    { return BrzCampoAncorado<double>(this, "LocalAimDelta", 24); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UPrimalShipCannonComponent.LightmapType" }; }
    BrzCampoPonteiro LightmassSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LightmassSettings")); }
    BrzCampoPonteiro LocalAimDeltaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LocalAimDelta")); }
    float& MaxAimPitchDeltaDownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxAimPitchDeltaDown"); }
    float& MaxAimPitchDeltaUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxAimPitchDeltaUp"); }
    float& MaxAimYawDeltaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxAimYawDelta"); }
    float& MaxPitchDeltaDownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxPitchDeltaDown"); }
    float& MaxPitchDeltaUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxPitchDeltaUp"); }
    float& MaxYawDeltaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxYawDelta"); }
    BrzCampoPonteiro MeshPaintTextureCookedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.MeshPaintTextureCooked")); }
    BrzCampoPonteiro MeshPaintTextureOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.MeshPaintTextureOverride")); }
    float& MinDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MinDrawDistance"); }
    int& MinLODField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.MinLOD"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.Mobility"); }
    TArray<void*>& MoveIgnoreActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.MoveIgnoreActors"); }
    TArray<void*>& MoveIgnoreComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.MoveIgnoreComponents"); }
    FName& MuzzleSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.MuzzleSocketName"); }
    float& NanitePixelProgrammableDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.NanitePixelProgrammableDistance"); }
    int& ObjectLayerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.ObjectLayer"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentBeginOverlap")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnComponentEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentEndOverlap")); }
    BrzCampoPonteiro OnComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentHit")); }
    BrzCampoPonteiro OnComponentPhysicsStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentPhysicsStateChanged")); }
    BrzCampoPonteiro OnComponentSleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentSleep")); }
    BrzCampoPonteiro OnComponentWakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnComponentWake")); }
    BrzCampoPonteiro OnPrimalComponentPhysicsStatePreChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.OnPrimalComponentPhysicsStatePreChange")); }
    TObjectPtr<UMaterialInterface>& OverlayMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "UPrimalShipCannonComponent.OverlayMaterial"); }
    float& OverlayMaterialMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.OverlayMaterialMaxDrawDistance"); }
    int& OverriddenLightMapResField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.OverriddenLightMapRes"); }
    int& OverriddenMeshPaintTextureCoordinateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.OverriddenMeshPaintTextureCoordinateIndex"); }
    int& OverriddenMeshPaintTextureResolutionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.OverriddenMeshPaintTextureResolution"); }
    TArray<void*>& OverrideMaterialsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonComponent.OverrideMaterials"); }
    float& OverrideStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.OverrideStepHeight"); }
    int& PerInstanceDynamicCustomDataOutDisableDistanceField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.PerInstanceDynamicCustomDataOutDisableDistance"); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalShipCannonComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.PhysicsVolumeChangedDelegate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalShipCannonComponent.PrimaryComponentTick"); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.RayTracingGroupId"); }
    float& RecoilAlphaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilAlpha"); }
    float& RecoilFractionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilFraction"); }
    float& RecoilKickSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilKickSpeed"); }
    float& RecoilReturnSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilReturnSpeed"); }
    float& RecoilTargetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilTarget"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.RelativeScale3D")); }
    BrzCampoPonteiro RestRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.RestRelativeLocation")); }
    BrzCampoPonteiro RestRelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.RestRelativeRotation")); }
    int& RowField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.Row"); }
    BrzCampoPonteiro RuntimeVirtualTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.RuntimeVirtualTextures")); }
    BrzCampoPonteiro ShadowCacheInvalidationBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.ShadowCacheInvalidationBehavior")); }
    BrzCampoPonteiro SideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.Side")); }
    TObjectPtr<UStaticMesh>& StaticMeshField() const
    { return *GetNativePointerField<TObjectPtr<UStaticMesh>*>(this, "UPrimalShipCannonComponent.StaticMesh"); }
    BrzCampoPonteiro StowedLocalOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.StowedLocalOffset")); }
    float& StreamingDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.StreamingDistanceMultiplier"); }
    BrzCampoPonteiro StreamingTextureDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.StreamingTextureData")); }
    int& SubDivisionStepSizeField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.SubDivisionStepSize"); }
    BrzCampoPonteiro TopMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.TopMesh")); }
    float& TranslucencySortDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.TranslucencySortDistanceOffset"); }
    int& TranslucencySortPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.TranslucencySortPriority"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.UCSSerializationIndex"); }
    unsigned char& ViewOwnerDepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.ViewOwnerDepthPriorityGroup"); }
    char& VirtualTextureCullMipsField() const
    { return *GetNativePointerField<char*>(this, "UPrimalShipCannonComponent.VirtualTextureCullMips"); }
    signed char& VirtualTextureLodBiasField() const
    { return *GetNativePointerField<signed char*>(this, "UPrimalShipCannonComponent.VirtualTextureLodBias"); }
    signed char& VirtualTextureMinCoverageField() const
    { return *GetNativePointerField<signed char*>(this, "UPrimalShipCannonComponent.VirtualTextureMinCoverage"); }
    FieldArray<char> VirtualTextureRenderPassTypeField() const
    { return { (void*)this, "UPrimalShipCannonComponent.VirtualTextureRenderPassType" }; }
    int& VisibilityIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.VisibilityId"); }
    BrzCampoPonteiro WireframeColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.WireframeColorOverride")); }
    int& WorldPositionOffsetDisableDistanceField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.WorldPositionOffsetDisableDistance"); }
    BitFieldValue<bool, unsigned __int32> bAbsoluteLocation()
    { return { (void*)this, "bAbsoluteLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteRotation()
    { return { (void*)this, "bAbsoluteRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteScale()
    { return { (void*)this, "bAbsoluteScale" }; }
    BitFieldValue<bool, unsigned __int32> bAffectDistanceFieldLighting()
    { return { (void*)this, "bAffectDistanceFieldLighting" }; }
    BitFieldValue<bool, unsigned __int32> bAffectDynamicIndirectLighting()
    { return { (void*)this, "bAffectDynamicIndirectLighting" }; }
    BitFieldValue<bool, unsigned __int32> bAffectIndirectLightingWhileHidden()
    { return { (void*)this, "bAffectIndirectLightingWhileHidden" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCullDistanceVolume()
    { return { (void*)this, "bAllowCullDistanceVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bApplyImpulseOnDamage()
    { return { (void*)this, "bApplyImpulseOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedSoundsForceHighPriority()
    { return { (void*)this, "bAttachedSoundsForceHighPriority" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bBoundsChangeTriggersStreamingDataRebuild()
    { return { (void*)this, "bBoundsChangeTriggersStreamingDataRebuild" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCastCinematicShadow()
    { return { (void*)this, "bCastCinematicShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastContactShadow()
    { return { (void*)this, "bCastContactShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastDistanceFieldIndirectShadow()
    { return { (void*)this, "bCastDistanceFieldIndirectShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastDynamicShadow()
    { return { (void*)this, "bCastDynamicShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastFarShadow()
    { return { (void*)this, "bCastFarShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastHiddenShadow()
    { return { (void*)this, "bCastHiddenShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastInsetShadow()
    { return { (void*)this, "bCastInsetShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastShadowAsTwoSided()
    { return { (void*)this, "bCastShadowAsTwoSided" }; }
    BitFieldValue<bool, unsigned __int32> bCastStaticShadow()
    { return { (void*)this, "bCastStaticShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastVolumetricTranslucentShadow()
    { return { (void*)this, "bCastVolumetricTranslucentShadow" }; }
    BitFieldValue<bool, unsigned __int32> bClientSyncAlwaysUpdatePhysicsCollision()
    { return { (void*)this, "bClientSyncAlwaysUpdatePhysicsCollision" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bComponentToWorldUpdated()
    { return { (void*)this, "bComponentToWorldUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bComputeBoundsOnceForGame()
    { return { (void*)this, "bComputeBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bComputeFastLocalBounds()
    { return { (void*)this, "bComputeFastLocalBounds" }; }
    BitFieldValue<bool, unsigned __int32> bComputedBoundsOnceForGame()
    { return { (void*)this, "bComputedBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePerPixelPainting()
    { return { (void*)this, "bDisablePerPixelPainting" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowMeshPaintPerInstance()
    { return { (void*)this, "bDisallowMeshPaintPerInstance" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowNanite()
    { return { (void*)this, "bDisallowNanite" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bEmissiveLightSource"); }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMaterialParameterCaching()
    { return { (void*)this, "bEnableMaterialParameterCaching" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTextureColorMeshPainting()
    { return { (void*)this, "bEnableTextureColorMeshPainting" }; }
    BitFieldValue<bool, unsigned __int32> bEnableVertexColorMeshPainting()
    { return { (void*)this, "bEnableVertexColorMeshPainting" }; }
    BitFieldValue<bool, unsigned __int32> bEvaluateWorldPositionOffset()
    { return { (void*)this, "bEvaluateWorldPositionOffset" }; }
    BitFieldValue<bool, unsigned __int32> bEvaluateWorldPositionOffsetInRayTracing()
    { return { (void*)this, "bEvaluateWorldPositionOffsetInRayTracing" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLevelBounds()
    { return { (void*)this, "bExcludeFromLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLightAttachmentGroup()
    { return { (void*)this, "bExcludeFromLightAttachmentGroup" }; }
    BitFieldValue<bool, unsigned __int32> bFillCollisionUnderneathForNavmesh()
    { return { (void*)this, "bFillCollisionUnderneathForNavmesh" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableNanite()
    { return { (void*)this, "bForceDisableNanite" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablePerInstanceDynamicCustomDataOut()
    { return { (void*)this, "bForceDisablePerInstanceDynamicCustomDataOut" }; }
    BitFieldValue<bool, unsigned __int32> bForceMipStreaming()
    { return { (void*)this, "bForceMipStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceNaniteForMasked()
    { return { (void*)this, "bForceNaniteForMasked" }; }
    BitFieldValue<bool, unsigned __int32> bForceNavigationObstacle()
    { return { (void*)this, "bForceNavigationObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverlapEvents()
    { return { (void*)this, "bForceOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventBlockingProjectiles()
    { return { (void*)this, "bForcePreventBlockingProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents()
    { return { (void*)this, "bGenerateOverlapEvents" }; }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.bHasCustomNavigableGeometry"); }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHasNoStreamableTextures()
    { return { (void*)this, "bHasNoStreamableTextures" }; }
    BitFieldValue<bool, unsigned __int32> bHasPerInstanceHitProxies()
    { return { (void*)this, "bHasPerInstanceHitProxies" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInGame()
    { return { (void*)this, "bHiddenInGame" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInSceneCapture()
    { return { (void*)this, "bHiddenInSceneCapture" }; }
    BitFieldValue<bool, unsigned __int32> bHoldout()
    { return { (void*)this, "bHoldout" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreInstanceForTextureStreaming()
    { return { (void*)this, "bIgnoreInstanceForTextureStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaterialGrassOutput()
    { return { (void*)this, "bIgnoreMaterialGrassOutput" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreParentTransformUpdate()
    { return { (void*)this, "bIgnoreParentTransformUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreRadialForce()
    { return { (void*)this, "bIgnoreRadialForce" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreRadialImpulse()
    { return { (void*)this, "bIgnoreRadialImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreUpdatingOwnersLastRenderTime()
    { return { (void*)this, "bIgnoreUpdatingOwnersLastRenderTime" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIncludeBoundsRadiusInDrawDistances()
    { return { (void*)this, "bIncludeBoundsRadiusInDrawDistances" }; }
    BitFieldValue<bool, unsigned __int32> bIncludeWPOInGrassHeight()
    { return { (void*)this, "bIncludeWPOInGrassHeight" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbstractBasingComponent()
    { return { (void*)this, "bIsAbstractBasingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsActorTextureStreamingBuiltData()
    { return { (void*)this, "bIsActorTextureStreamingBuiltData" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingMovedByEditor()
    { return { (void*)this, "bIsBeingMovedByEditor" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bIsInForeground()
    { return { (void*)this, "bIsInForeground" }; }
    BitFieldValue<bool, unsigned __int32> bIsNotRenderAttachmentRoot()
    { return { (void*)this, "bIsNotRenderAttachmentRoot" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidTextureStreamingBuiltData()
    { return { (void*)this, "bIsValidTextureStreamingBuiltData" }; }
    BitFieldValue<bool, unsigned __int32> bLightAsIfStatic()
    { return { (void*)this, "bLightAsIfStatic" }; }
    BitFieldValue<bool, unsigned __int32> bLightAttachmentsAsGroup()
    { return { (void*)this, "bLightAttachmentsAsGroup" }; }
    BitFieldValue<bool, unsigned __int32> bMovableUseDynamicDrawDistance()
    { return { (void*)this, "bMovableUseDynamicDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bMultiBodyOverlap()
    { return { (void*)this, "bMultiBodyOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bNeverDistanceCull()
    { return { (void*)this, "bNeverDistanceCull" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOwnerSee()
    { return { (void*)this, "bOnlyOwnerSee" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideDistanceFieldSelfShadowBias()
    { return { (void*)this, "bOverrideDistanceFieldSelfShadowBias" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideLightMapRes()
    { return { (void*)this, "bOverrideLightMapRes" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMeshPaintTextureCoordinateIndex()
    { return { (void*)this, "bOverrideMeshPaintTextureCoordinateIndex" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMeshPaintTextureResolution()
    { return { (void*)this, "bOverrideMeshPaintTextureResolution" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMinLOD()
    { return { (void*)this, "bOverrideMinLOD" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideNavigationExport()
    { return { (void*)this, "bOverrideNavigationExport" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideWireframeColor()
    { return { (void*)this, "bOverrideWireframeColor" }; }
    BitFieldValue<bool, unsigned __int32> bOwnerNoSee()
    { return { (void*)this, "bOwnerNoSee" }; }
    BitFieldValue<bool, unsigned __int32> bPlaceholderBool1()
    { return { (void*)this, "bPlaceholderBool1" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDamage()
    { return { (void*)this, "bPreventDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bProjectLandscapeGrass()
    { return { (void*)this, "bProjectLandscapeGrass" }; }
    BitFieldValue<bool, unsigned __int32> bRayTracingFarField()
    { return { (void*)this, "bRayTracingFarField" }; }
    BitFieldValue<bool, unsigned __int32> bReceiveMobileCSMShadows()
    { return { (void*)this, "bReceiveMobileCSMShadows" }; }
    BitFieldValue<bool, unsigned __int32> bReceivesDecals()
    { return { (void*)this, "bReceivesDecals" }; }
    BitFieldValue<bool, unsigned __int32> bRegisterWithMaterialGPUMessageQueue()
    { return { (void*)this, "bRegisterWithMaterialGPUMessageQueue" }; }
    BitFieldValue<bool, unsigned __int32> bRenderCustomDepth()
    { return { (void*)this, "bRenderCustomDepth" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInDepthPass()
    { return { (void*)this, "bRenderInDepthPass" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInMainPass()
    { return { (void*)this, "bRenderInMainPass" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePhysicsToAutonomousProxy()
    { return { (void*)this, "bReplicatePhysicsToAutonomousProxy" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bReturnMaterialOnMove()
    { return { (void*)this, "bReturnMaterialOnMove" }; }
    BitFieldValue<bool, unsigned __int32> bReverseCulling()
    { return { (void*)this, "bReverseCulling" }; }
    BitFieldValue<bool, unsigned __int32> bSelectable()
    { return { (void*)this, "bSelectable" }; }
    BitFieldValue<bool, unsigned __int32> bSelfShadowOnly()
    { return { (void*)this, "bSelfShadowOnly" }; }
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
    BitFieldValue<bool, unsigned __int32> bSingleSampleShadowFromStationaryLights()
    { return { (void*)this, "bSingleSampleShadowFromStationaryLights" }; }
    BitFieldValue<bool, unsigned __int32> bSortTriangles()
    { return { (void*)this, "bSortTriangles" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bStaticWhenNotMoveable()
    { return { (void*)this, "bStaticWhenNotMoveable" }; }
    BitFieldValue<bool, unsigned __int32> bTraceComplexOnMove()
    { return { (void*)this, "bTraceComplexOnMove" }; }
    BitFieldValue<bool, unsigned __int32> bTreatAsBackgroundForOcclusion()
    { return { (void*)this, "bTreatAsBackgroundForOcclusion" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateChildOverlaps()
    { return { (void*)this, "bUpdateChildOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bUseAbsoluteMaxDrawDisatance()
    { return { (void*)this, "bUseAbsoluteMaxDrawDisatance" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsOccluder()
    { return { (void*)this, "bUseAsOccluder" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsUnfogger()
    { return { (void*)this, "bUseAsUnfogger" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachParentBound()
    { return { (void*)this, "bUseAttachParentBound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseDefaultCollision()
    { return { (void*)this, "bUseDefaultCollision" }; }
    BitFieldValue<bool, unsigned __int32> bUseDirectionalShadowDistanceLimit()
    { return { (void*)this, "bUseDirectionalShadowDistanceLimit" }; }
    BitFieldValue<bool, unsigned __int32> bUseEditorCompositing()
    { return { (void*)this, "bUseEditorCompositing" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctree()
    { return { (void*)this, "bUseInternalOctree" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctreeOnClient()
    { return { (void*)this, "bUseInternalOctreeOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bUsePrimitiveDataForCustomFlags()
    { return { (void*)this, "bUsePrimitiveDataForCustomFlags" }; }
    BitFieldValue<bool, unsigned __int32> bUseSubDivisions()
    { return { (void*)this, "bUseSubDivisions" }; }
    BitFieldValue<bool, unsigned __int32> bUseViewOwnerDepthPriorityGroup()
    { return { (void*)this, "bUseViewOwnerDepthPriorityGroup" }; }
    BitFieldValue<bool, unsigned __int32> bVisible()
    { return { (void*)this, "bVisible" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInRayTracing()
    { return { (void*)this, "bVisibleInRayTracing" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInRealTimeSkyCaptures()
    { return { (void*)this, "bVisibleInRealTimeSkyCaptures" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInReflectionCaptures()
    { return { (void*)this, "bVisibleInReflectionCaptures" }; }
    BitFieldValue<bool, unsigned __int32> bVisibleInSceneCaptureOnly()
    { return { (void*)this, "bVisibleInSceneCaptureOnly" }; }
    BitFieldValue<bool, unsigned __int32> bWantsEditorEffects()
    { return { (void*)this, "bWantsEditorEffects" }; }
    BitFieldValue<bool, unsigned __int32> bWorldPositionOffsetWritesVelocity()
    { return { (void*)this, "bWorldPositionOffsetWritesVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresGunport()
    { return { (void*)this, "bRequiresGunport" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALSHIPCANNONCOMPONENT_H
