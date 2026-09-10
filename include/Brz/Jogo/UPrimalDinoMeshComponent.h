// ==========================================================================
//  UPrimalDinoMeshComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALDINOMESHCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALDINOMESHCOMPONENT_H

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
struct USkeletalMesh;


struct UPrimalDinoMeshComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalDinoMeshComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoMeshComponent.CalcBounds(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcBounds(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalDinoMeshComponent.CalcBounds(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoMeshComponent.OnComponentCreated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnComponentCreated() const
    {
        return NativeCall<void*>(this, "UPrimalDinoMeshComponent.OnComponentCreated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoMeshComponent.OnUpdateTransform(EUpdateTransformFlags,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnUpdateTransform(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalDinoMeshComponent.OnUpdateTransform(EUpdateTransformFlags,ETeleportType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoMeshComponent.SetAnimUpdateParameters(FAnimUpdateRateParameters*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAnimUpdateParameters(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalDinoMeshComponent.SetAnimUpdateParameters(FAnimUpdateRateParameters*)", a0);
    }

    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnClient()
    { return { (void*)this, "AlwaysLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnServer()
    { return { (void*)this, "AlwaysLoadOnServer" }; }
    BrzCampoPonteiro AnimBlueprintGeneratedClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimBlueprintGeneratedClass")); }
    BrzCampoPonteiro AnimClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimClass")); }
    BrzCampoPonteiro AnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimScriptInstance")); }
    BrzCampoPonteiro AnimationDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimationData")); }
    BitFieldValue<bool, unsigned __int32> AnimationFrozen()
    { return { (void*)this, "AnimationFrozen" }; }
    unsigned char& AnimationModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.AnimationMode"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.AssetUserData"); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UPrimalDinoMeshComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoMeshComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.AttachmentChangedIncrementer"); }
    BrzCampoPonteiro BodyInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.BodyInstance")); }
    BrzCampoPonteiro BodySetupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.BodySetup")); }
    float& BoneModifiersLegLengthPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.BoneModifiersLegLengthPercentage"); }
    float& BoundsScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.BoundsScale"); }
    unsigned short& CachedAnimCurveUidVersionField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalDinoMeshComponent.CachedAnimCurveUidVersion"); }
    BrzCampoPonteiro CachedBoneSpaceTransformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CachedBoneSpaceTransforms")); }
    BrzCampoPonteiro CachedComponentSpaceTransformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CachedComponentSpaceTransforms")); }
    float& CachedFootZDiffField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.CachedFootZDiff"); }
    float& CachedMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.CachedMaxDrawDistance"); }
    unsigned short& CachedMeshCurveMetaDataVersionField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalDinoMeshComponent.CachedMeshCurveMetaDataVersion"); }
    BrzCampoPonteiro CachedWorldOrLocalSpaceBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CachedWorldOrLocalSpaceBounds")); }
    BrzCampoPonteiro CachedWorldToLocalTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CachedWorldToLocalTransform")); }
    unsigned char& CanCharacterStepUpOnField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.CanCharacterStepUpOn"); }
    float& CapsuleIndirectShadowMinVisibilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.CapsuleIndirectShadowMinVisibility"); }
    BitFieldValue<bool, unsigned __int32> CastShadow()
    { return { (void*)this, "CastShadow" }; }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.ClientAttachedChildren"); }
    float& ClothBlendWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ClothBlendWeight"); }
    float& ClothGeometryScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ClothGeometryScale"); }
    float& ClothMaxDistanceScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ClothMaxDistanceScale"); }
    BrzCampoPonteiro ClothTeleportModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.ClothTeleportMode")); }
    float& ClothVelocityScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ClothVelocityScale"); }
    BrzCampoPonteiro ClothingInteractorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.ClothingInteractor")); }
    BrzCampoPonteiro ClothingSimulationFactoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.ClothingSimulationFactory")); }
    float& ComponentMassScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ComponentMassScale"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.CustomData"); }
    int& CustomDepthStencilValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.CustomDepthStencilValue"); }
    BrzCampoPonteiro CustomDepthStencilWriteMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CustomDepthStencilWriteMask")); }
    BrzCampoPonteiro CustomPrimitiveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CustomPrimitiveData")); }
    BrzCampoPonteiro CustomPrimitiveDataInternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CustomPrimitiveDataInternal")); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoMeshComponent.CustomTag"); }
    BrzCampoPonteiro DamageFXActorToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.DamageFXActorToSpawn")); }
    unsigned char& DepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.DepthPriorityGroup"); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.DetailMode"); }
    float& DinoIKAnimationLegZOffsetingMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.DinoIKAnimationLegZOffsetingMultiplier"); }
    float& DinoIKDelayedTraceFreezeDurationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.DinoIKDelayedTraceFreezeDurationMultiplier"); }
    float& DinoIKSlopeMatchingRootHeightOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.DinoIKSlopeMatchingRootHeightOffset"); }
    float& DistanceFromGroundToStartIKField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.DistanceFromGroundToStartIK"); }
    float& DistanceFromGroundToStartIKBiasField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.DistanceFromGroundToStartIKBias"); }
    unsigned char& ExcludeFromHLODLevelsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.ExcludeFromHLODLevels"); }
    float& FeetAlignmentLimitField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.FeetAlignmentLimit"); }
    BrzCampoPonteiro FilteredAnimCurvesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.FilteredAnimCurves")); }
    BrzCampoPonteiro FirstPersonPrimitiveTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.FirstPersonPrimitiveType")); }
    float& ForceTickPoseWithinRangeSquaredField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ForceTickPoseWithinRangeSquared"); }
    float& ForceUpdateValuesTimeLimitField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ForceUpdateValuesTimeLimit"); }
    int& ForcedLodModelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.ForcedLodModel"); }
    float& GlobalAnimRateScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.GlobalAnimRateScale"); }
    float& GroundBoneInstantSyncTillTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.GroundBoneInstantSyncTillTime"); }
    BrzCampoPonteiro HLODBatchingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.HLODBatchingPolicy")); }
    float& IkFabrikInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkFabrikInterpSpeed"); }
    float& IkFeetAlignmentInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkFeetAlignmentInterpSpeed"); }
    float& IkGroundPlaneInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkGroundPlaneInterpSpeed"); }
    BrzCampoPonteiro IkGroundPlaneOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.IkGroundPlaneOverrides")); }
    float& IkInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkInterpSpeed"); }
    float& IkInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkInterpSpeedUp"); }
    BrzCampoPonteiro IkLegsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.IkLegs")); }
    BrzCampoPonteiro IkRootAdjustmentPointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.IkRootAdjustmentPoints")); }
    BrzCampoPonteiro IkRootLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.IkRootLocationOffset")); }
    float& IkRootOffsetInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkRootOffsetInterpSpeed"); }
    float& IkRootOffsetInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkRootOffsetInterpSpeedUp"); }
    BrzCampoPonteiro IkRootRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.IkRootRotationOffset")); }
    float& IkRootWorldOffsetInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkRootWorldOffsetInterpSpeed"); }
    float& IkRootWorldOffsetInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.IkRootWorldOffsetInterpSpeedUp"); }
    unsigned char& IndirectLightingCacheQualityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.IndirectLightingCacheQuality"); }
    int& InternalOctreeMaskField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.InternalOctreeMask"); }
    unsigned char& KinematicBonesUpdateTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.KinematicBonesUpdateType"); }
    float& LDMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.LDMaxDrawDistance"); }
    BrzCampoPonteiro LODInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.LODInfo")); }
    TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimalDinoMeshComponent.LODParentPrimitive"); }
    unsigned int& LastPoseTickFrameField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalDinoMeshComponent.LastPoseTickFrame"); }
    double& LastStartedRenderingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalDinoMeshComponent.LastStartedRenderingTime"); }
    TWeakObjectPtr<void>& LeaderPoseComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalDinoMeshComponent.LeaderPoseComponent"); }
    float& LegLimitRatioFromCylinderHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.LegLimitRatioFromCylinderHeight"); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UPrimalDinoMeshComponent.LightmapType" }; }
    BrzCampoPonteiro LineCheckBoundsScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.LineCheckBoundsScale")); }
    BrzCampoPonteiro LinkedInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.LinkedInstances")); }
    float& MatchSlopeRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.MatchSlopeRotationSpeed"); }
    int& MaxIterationsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.MaxIterations"); }
    BrzCampoPonteiro MeshDeformerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.MeshDeformer")); }
    BrzCampoPonteiro MeshDeformerInstanceSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.MeshDeformerInstanceSettings")); }
    BrzCampoPonteiro MeshDeformerInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.MeshDeformerInstances")); }
    float& MinAngularDampingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.MinAngularDamping"); }
    float& MinDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.MinDrawDistance"); }
    float& MinHitNormalZForFeetAlignmentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.MinHitNormalZForFeetAlignment"); }
    float& MinLinearDampingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.MinLinearDamping"); }
    int& MinLodModelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.MinLodModel"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.Mobility"); }
    TArray<void*>& MoveIgnoreActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.MoveIgnoreActors"); }
    TArray<void*>& MoveIgnoreComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.MoveIgnoreComponents"); }
    int& ObjectLayerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.ObjectLayer"); }
    BrzCampoPonteiro OnAnimInitializedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnAnimInitialized")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentBeginOverlap")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnComponentEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentEndOverlap")); }
    BrzCampoPonteiro OnComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentHit")); }
    BrzCampoPonteiro OnComponentPhysicsStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentPhysicsStateChanged")); }
    BrzCampoPonteiro OnComponentSleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentSleep")); }
    BrzCampoPonteiro OnComponentWakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnComponentWake")); }
    BrzCampoPonteiro OnConstraintBrokenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnConstraintBroken")); }
    BrzCampoPonteiro OnPlasticDeformationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnPlasticDeformation")); }
    BrzCampoPonteiro OnPrimalComponentPhysicsStatePreChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OnPrimalComponentPhysicsStatePreChange")); }
    BrzCampoPonteiro OriginalBonesOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OriginalBonesOffsets")); }
    TObjectPtr<UMaterialInterface>& OverlayMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "UPrimalDinoMeshComponent.OverlayMaterial"); }
    float& OverlayMaterialMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.OverlayMaterialMaxDrawDistance"); }
    TArray<void*>& OverrideMaterialsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoMeshComponent.OverrideMaterials"); }
    BrzCampoPonteiro OverridePostProcessAnimBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OverridePostProcessAnimBP")); }
    float& OverrideStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.OverrideStepHeight"); }
    BrzCampoPonteiro OverrideTickingVisiblityMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.OverrideTickingVisiblityMesh")); }
    BrzCampoPonteiro PhysicsAssetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.PhysicsAssetOverride")); }
    unsigned char& PhysicsTransformUpdateModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.PhysicsTransformUpdateMode"); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalDinoMeshComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.PhysicsVolumeChangedDelegate")); }
    int& PostProcessAnimBPLODThresholdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.PostProcessAnimBPLODThreshold"); }
    BrzCampoPonteiro PostProcessAnimInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.PostProcessAnimInstance")); }
    unsigned char& PreSleepingKinematicsCollisionTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.PreSleepingKinematicsCollisionType"); }
    double& PreventSoundCuesTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalDinoMeshComponent.PreventSoundCuesTime"); }
    BrzCampoPonteiro PrimalSoftAssetReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.PrimalSoftAssetReference")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalDinoMeshComponent.PrimaryComponentTick"); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.RayTracingGroupId"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RelativeScale3D")); }
    BrzCampoPonteiro RootBoneTranslationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RootBoneTranslation")); }
    float& RootOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.RootOffset"); }
    float& RootPitchRotationLimitField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.RootPitchRotationLimit"); }
    float& RootRollRotationLimitField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.RootRollRotationLimit"); }
    BrzCampoPonteiro RootRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RootRotationOffset")); }
    BrzCampoPonteiro RotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RotOffset")); }
    BrzCampoPonteiro RuntimeVirtualTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.RuntimeVirtualTextures")); }
    BrzCampoPonteiro ShadowCacheInvalidationBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.ShadowCacheInvalidationBehavior")); }
    float& ShadowedRecentlyRenderedBoundsScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.ShadowedRecentlyRenderedBoundsScaleMultiplier"); }
    USkeletalMesh*& SkeletalMeshField() const
    { return *GetNativePointerField<USkeletalMesh**>(this, "UPrimalDinoMeshComponent.SkeletalMesh"); }
    BrzCampoPonteiro SkinCacheUsageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.SkinCacheUsage")); }
    BrzCampoPonteiro SkinnedAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.SkinnedAsset")); }
    float& StreamingDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.StreamingDistanceMultiplier"); }
    float& TeleportDistanceThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.TeleportDistanceThreshold"); }
    float& TeleportRotationThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.TeleportRotationThreshold"); }
    float& TranslucencySortDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoMeshComponent.TranslucencySortDistanceOffset"); }
    int& TranslucencySortPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.TranslucencySortPriority"); }
    BrzCampoPonteiro TwoLegVirtualHitLocationCSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.TwoLegVirtualHitLocationCS")); }
    BrzCampoPonteiro TwoLegVirtualHitLocationWSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.TwoLegVirtualHitLocationWS")); }
    BrzCampoPonteiro TwoLegVirtualHitLocationWSTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.TwoLegVirtualHitLocationWSTarget")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.UCSSerializationIndex"); }
    BitFieldValue<bool, unsigned __int32> UseWorldSpaceFeetAlignment()
    { return { (void*)this, "UseWorldSpaceFeetAlignment" }; }
    unsigned char& ViewOwnerDepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.ViewOwnerDepthPriorityGroup"); }
    char& VirtualTextureCullMipsField() const
    { return *GetNativePointerField<char*>(this, "UPrimalDinoMeshComponent.VirtualTextureCullMips"); }
    signed char& VirtualTextureLodBiasField() const
    { return *GetNativePointerField<signed char*>(this, "UPrimalDinoMeshComponent.VirtualTextureLodBias"); }
    signed char& VirtualTextureMinCoverageField() const
    { return *GetNativePointerField<signed char*>(this, "UPrimalDinoMeshComponent.VirtualTextureMinCoverage"); }
    FieldArray<char> VirtualTextureRenderPassTypeField() const
    { return { (void*)this, "UPrimalDinoMeshComponent.VirtualTextureRenderPassType" }; }
    BrzCampoPonteiro VisibilityBasedAnimTickOptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.VisibilityBasedAnimTickOption")); }
    int& VisibilityIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoMeshComponent.VisibilityId"); }
    BitFieldValue<bool, unsigned __int32> bAbsoluteLocation()
    { return { (void*)this, "bAbsoluteLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteRotation()
    { return { (void*)this, "bAbsoluteRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteScale()
    { return { (void*)this, "bAbsoluteScale" }; }
    BitFieldValue<bool, unsigned __int32> bAddAttachedParentBounds()
    { return { (void*)this, "bAddAttachedParentBounds" }; }
    BitFieldValue<bool, unsigned __int32> bAffectDistanceFieldLighting()
    { return { (void*)this, "bAffectDistanceFieldLighting" }; }
    BitFieldValue<bool, unsigned __int32> bAffectDynamicIndirectLighting()
    { return { (void*)this, "bAffectDynamicIndirectLighting" }; }
    BitFieldValue<bool, unsigned __int32> bAffectIndirectLightingWhileHidden()
    { return { (void*)this, "bAffectIndirectLightingWhileHidden" }; }
    BitFieldValue<bool, unsigned __int32> bAlignRootOnlyToGround()
    { return { (void*)this, "bAlignRootOnlyToGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAlwaysEvaluatePostProcessAnimBP()
    { return { (void*)this, "bAllowAlwaysEvaluatePostProcessAnimBP" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnimCurveEvaluation()
    { return { (void*)this, "bAllowAnimCurveEvaluation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowClothActors()
    { return { (void*)this, "bAllowClothActors" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCullDistanceVolume()
    { return { (void*)this, "bAllowCullDistanceVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAllowKinematicUpdateStaggering()
    { return { (void*)this, "bAllowKinematicUpdateStaggering" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysForceUpdateKinematicsOnDedicatedServer()
    { return { (void*)this, "bAlwaysForceUpdateKinematicsOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysTeleportKinematic()
    { return { (void*)this, "bAlwaysTeleportKinematic" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysUpdateMeshForShadowRendering()
    { return { (void*)this, "bAlwaysUpdateMeshForShadowRendering" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysUseMeshDeformer()
    { return { (void*)this, "bAlwaysUseMeshDeformer" }; }
    BitFieldValue<bool, unsigned __int32> bAnimTreeInitialised()
    { return { (void*)this, "bAnimTreeInitialised" }; }
    BitFieldValue<bool, unsigned __int32> bApplyGroundBoneModifiers()
    { return { (void*)this, "bApplyGroundBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bApplyImpulseOnDamage()
    { return { (void*)this, "bApplyImpulseOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedSoundsForceHighPriority()
    { return { (void*)this, "bAttachedSoundsForceHighPriority" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bBasedPawnsTriggerChildTick()
    { return { (void*)this, "bBasedPawnsTriggerChildTick" }; }
    BitFieldValue<bool, unsigned __int32> bBlendPhysics()
    { return { (void*)this, "bBlendPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bBoundsChangeTriggersStreamingDataRebuild()
    { return { (void*)this, "bBoundsChangeTriggersStreamingDataRebuild" }; }
    BitFieldValue<bool, unsigned __int32> bCPUSkinning()
    { return { (void*)this, "bCPUSkinning" }; }
    BitFieldValue<bool, unsigned __int32> bCachedLocalBoundsUpToDate()
    { return { (void*)this, "bCachedLocalBoundsUpToDate" }; }
    BitFieldValue<bool, unsigned __int32> bCachedWorldSpaceBoundsUpToDate()
    { return { (void*)this, "bCachedWorldSpaceBoundsUpToDate" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCanHighlightSelectedSections()
    { return { (void*)this, "bCanHighlightSelectedSections" }; }
    BitFieldValue<bool, unsigned __int32> bCastCapsuleDirectShadow()
    { return { (void*)this, "bCastCapsuleDirectShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastCapsuleIndirectShadow()
    { return { (void*)this, "bCastCapsuleIndirectShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastCinematicShadow()
    { return { (void*)this, "bCastCinematicShadow" }; }
    BitFieldValue<bool, unsigned __int32> bCastContactShadow()
    { return { (void*)this, "bCastContactShadow" }; }
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
    BitFieldValue<bool, unsigned __int32> bChartDistanceFactor()
    { return { (void*)this, "bChartDistanceFactor" }; }
    BitFieldValue<bool, unsigned __int32> bClientSyncAlwaysUpdatePhysicsCollision()
    { return { (void*)this, "bClientSyncAlwaysUpdatePhysicsCollision" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWithAttachedChildren()
    { return { (void*)this, "bCollideWithAttachedChildren" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWithEnvironment()
    { return { (void*)this, "bCollideWithEnvironment" }; }
    BitFieldValue<bool, unsigned __int32> bComponentToWorldUpdated()
    { return { (void*)this, "bComponentToWorldUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bComponentUseFixedSkelBounds()
    { return { (void*)this, "bComponentUseFixedSkelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bComputeBoundsOnceForGame()
    { return { (void*)this, "bComputeBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bComputeFastLocalBounds()
    { return { (void*)this, "bComputeFastLocalBounds" }; }
    BitFieldValue<bool, unsigned __int32> bComputedBoundsOnceForGame()
    { return { (void*)this, "bComputedBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bConsiderAllBodiesForBounds()
    { return { (void*)this, "bConsiderAllBodiesForBounds" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDeferKinematicBoneUpdate()
    { return { (void*)this, "bDeferKinematicBoneUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKAnimationLegZOffseting()
    { return { (void*)this, "bDinoIKAnimationLegZOffseting" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKLerpFeet()
    { return { (void*)this, "bDinoIKLerpFeet" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKLerpLegs()
    { return { (void*)this, "bDinoIKLerpLegs" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKRootWorldSpaceLerpZ()
    { return { (void*)this, "bDinoIKRootWorldSpaceLerpZ" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKSlopeMatchingRootHeightOffsetMultiplier()
    { return { (void*)this, "bDinoIKSlopeMatchingRootHeightOffsetMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKSmoothGroundPlaneLerping()
    { return { (void*)this, "bDinoIKSmoothGroundPlaneLerping" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKUseExperimentalInvalidTraceZeroing()
    { return { (void*)this, "bDinoIKUseExperimentalInvalidTraceZeroing" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIKUseLegLimits()
    { return { (void*)this, "bDinoIKUseLegLimits" }; }
    BitFieldValue<bool, unsigned __int32> bDisableClothSimulation()
    { return { (void*)this, "bDisableClothSimulation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableMorphTarget()
    { return { (void*)this, "bDisableMorphTarget" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePerPixelPainting()
    { return { (void*)this, "bDisablePerPixelPainting" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePostProcessBlueprint()
    { return { (void*)this, "bDisablePostProcessBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNode()
    { return { (void*)this, "bDisableRigidBodyAnimNode" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayDebugUpdateRateOptimizations()
    { return { (void*)this, "bDisplayDebugUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalDinoMeshComponent.bEmissiveLightSource"); }
    BitFieldValue<bool, unsigned __int32> bEnableAnimation()
    { return { (void*)this, "bEnableAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableIKCartGroundConforming()
    { return { (void*)this, "bEnableIKCartGroundConforming" }; }
    BitFieldValue<bool, unsigned __int32> bEnableIKTraceFreezing()
    { return { (void*)this, "bEnableIKTraceFreezing" }; }
    BitFieldValue<bool, unsigned __int32> bEnableIkOnlyWhenIdle()
    { return { (void*)this, "bEnableIkOnlyWhenIdle" }; }
    BitFieldValue<bool, unsigned __int32> bEnableLineCheckWithBounds()
    { return { (void*)this, "bEnableLineCheckWithBounds" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMaterialParameterCaching()
    { return { (void*)this, "bEnableMaterialParameterCaching" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiFabrik()
    { return { (void*)this, "bEnableMultiFabrik" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePerPolyCollision()
    { return { (void*)this, "bEnablePerPolyCollision" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePhysicsOnDedicatedServer()
    { return { (void*)this, "bEnablePhysicsOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSimpleIK()
    { return { (void*)this, "bEnableSimpleIK" }; }
    BitFieldValue<bool, unsigned __int32> bEnableUpdateRateOptimizations()
    { return { (void*)this, "bEnableUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLevelBounds()
    { return { (void*)this, "bExcludeFromLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLightAttachmentGroup()
    { return { (void*)this, "bExcludeFromLightAttachmentGroup" }; }
    BitFieldValue<bool, unsigned __int32> bFillCollisionUnderneathForNavmesh()
    { return { (void*)this, "bFillCollisionUnderneathForNavmesh" }; }
    BitFieldValue<bool, unsigned __int32> bFilteredAnimCurvesIsAllowList()
    { return { (void*)this, "bFilteredAnimCurvesIsAllowList" }; }
    BitFieldValue<bool, unsigned __int32> bFollowerShouldTickPose()
    { return { (void*)this, "bFollowerShouldTickPose" }; }
    BitFieldValue<bool, unsigned __int32> bFootZDiffIsCached()
    { return { (void*)this, "bFootZDiffIsCached" }; }
    BitFieldValue<bool, unsigned __int32> bForceCollisionUpdate()
    { return { (void*)this, "bForceCollisionUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablePhysicsOnDediServer()
    { return { (void*)this, "bForceDisablePhysicsOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablePhysicsOnDediServerAllowRagdoll()
    { return { (void*)this, "bForceDisablePhysicsOnDediServerAllowRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bForceMeshObjectUpdate()
    { return { (void*)this, "bForceMeshObjectUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bForceMipStreaming()
    { return { (void*)this, "bForceMipStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverlapEvents()
    { return { (void*)this, "bForceOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventBlockingProjectiles()
    { return { (void*)this, "bForcePreventBlockingProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bForceRefpose()
    { return { (void*)this, "bForceRefpose" }; }
    BitFieldValue<bool, unsigned __int32> bForceSimpleIK()
    { return { (void*)this, "bForceSimpleIK" }; }
    BitFieldValue<bool, unsigned __int32> bForceTickDisabled()
    { return { (void*)this, "bForceTickDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bForceTickPoseWithinRange()
    { return { (void*)this, "bForceTickPoseWithinRange" }; }
    BitFieldValue<bool, unsigned __int32> bForceUpdateKinematic()
    { return { (void*)this, "bForceUpdateKinematic" }; }
    BitFieldValue<bool, unsigned __int32> bForceWireframe()
    { return { (void*)this, "bForceWireframe" }; }
    BitFieldValue<bool, unsigned __int32> bFreeSpaceBasesOnUnregister()
    { return { (void*)this, "bFreeSpaceBasesOnUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bFreezeGroundPlaneIK()
    { return { (void*)this, "bFreezeGroundPlaneIK" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents()
    { return { (void*)this, "bGenerateOverlapEvents" }; }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.bHasCustomNavigableGeometry"); }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHasNoStreamableTextures()
    { return { (void*)this, "bHasNoStreamableTextures" }; }
    BitFieldValue<bool, unsigned __int32> bHasPerInstanceHitProxies()
    { return { (void*)this, "bHasPerInstanceHitProxies" }; }
    BitFieldValue<bool, unsigned __int32> bHasValidBodies()
    { return { (void*)this, "bHasValidBodies" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInGame()
    { return { (void*)this, "bHiddenInGame" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInSceneCapture()
    { return { (void*)this, "bHiddenInSceneCapture" }; }
    BitFieldValue<bool, unsigned __int32> bHideSkin()
    { return { (void*)this, "bHideSkin" }; }
    BitFieldValue<bool, unsigned __int32> bHoldout()
    { return { (void*)this, "bHoldout" }; }
    BitFieldValue<bool, unsigned __int32> bHumanIKUseBoneModiferLegScalars()
    { return { (void*)this, "bHumanIKUseBoneModiferLegScalars" }; }
    BitFieldValue<bool, unsigned __int32> bIKRotationEnabled()
    { return { (void*)this, "bIKRotationEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreLeaderPoseComponentLOD()
    { return { (void*)this, "bIgnoreLeaderPoseComponentLOD" }; }
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
    BitFieldValue<bool, unsigned __int32> bIncludeComponentLocationIntoBounds()
    { return { (void*)this, "bIncludeComponentLocationIntoBounds" }; }
    BitFieldValue<bool, unsigned __int32> bInitOffset()
    { return { (void*)this, "bInitOffset" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedArticulated()
    { return { (void*)this, "bInitializedArticulated" }; }
    BitFieldValue<bool, unsigned __int32> bInterpolateRootPhys()
    { return { (void*)this, "bInterpolateRootPhys" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbstractBasingComponent()
    { return { (void*)this, "bIsAbstractBasingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsActorTextureStreamingBuiltData()
    { return { (void*)this, "bIsActorTextureStreamingBuiltData" }; }
    BitFieldValue<bool, unsigned __int32> bIsAutonomousTickPose()
    { return { (void*)this, "bIsAutonomousTickPose" }; }
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
    BitFieldValue<bool, unsigned __int32> bModifyBoneAnimNodeUseCurrentBoneModifiers()
    { return { (void*)this, "bModifyBoneAnimNodeUseCurrentBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bMovableUseDynamicDrawDistance()
    { return { (void*)this, "bMovableUseDynamicDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bMovedLastFrame()
    { return { (void*)this, "bMovedLastFrame" }; }
    BitFieldValue<bool, unsigned __int32> bMultiBodyOverlap()
    { return { (void*)this, "bMultiBodyOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bNeedsQueuedAnimEventsDispatched()
    { return { (void*)this, "bNeedsQueuedAnimEventsDispatched" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bNeverDistanceCull()
    { return { (void*)this, "bNeverDistanceCull" }; }
    BitFieldValue<bool, unsigned __int32> bNeverTickOnDediServer()
    { return { (void*)this, "bNeverTickOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bNoSkeletonUpdate()
    { return { (void*)this, "bNoSkeletonUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOldForceRefPose()
    { return { (void*)this, "bOldForceRefPose" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowAutonomousTickPose()
    { return { (void*)this, "bOnlyAllowAutonomousTickPose" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOwnerSee()
    { return { (void*)this, "bOnlyOwnerSee" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenRenderedDontDisableOnDedicatedServer()
    { return { (void*)this, "bOnlyTickWhenRenderedDontDisableOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMinLOD()
    { return { (void*)this, "bOverrideMinLOD" }; }
    BitFieldValue<bool, unsigned __int32> bOwnerNoSee()
    { return { (void*)this, "bOwnerNoSee" }; }
    BitFieldValue<bool, unsigned __int32> bPauseAnims()
    { return { (void*)this, "bPauseAnims" }; }
    BitFieldValue<bool, unsigned __int32> bPerBoneMotionBlur()
    { return { (void*)this, "bPerBoneMotionBlur" }; }
    BitFieldValue<bool, unsigned __int32> bPhysicsRequiredOnDediServer()
    { return { (void*)this, "bPhysicsRequiredOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bPlaceholderBool1()
    { return { (void*)this, "bPlaceholderBool1" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDamage()
    { return { (void*)this, "bPreventDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDediServerAutoUnregistration()
    { return { (void*)this, "bPreventDediServerAutoUnregistration" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bPropagateCurvesToFollowers()
    { return { (void*)this, "bPropagateCurvesToFollowers" }; }
    BitFieldValue<bool, unsigned __int32> bRayTracingFarField()
    { return { (void*)this, "bRayTracingFarField" }; }
    BitFieldValue<bool, unsigned __int32> bReceiveMobileCSMShadows()
    { return { (void*)this, "bReceiveMobileCSMShadows" }; }
    BitFieldValue<bool, unsigned __int32> bReceivesDecals()
    { return { (void*)this, "bReceivesDecals" }; }
    BitFieldValue<bool, unsigned __int32> bRecentlyRendered()
    { return { (void*)this, "bRecentlyRendered" }; }
    BitFieldValue<bool, unsigned __int32> bRegisterWithMaterialGPUMessageQueue()
    { return { (void*)this, "bRegisterWithMaterialGPUMessageQueue" }; }
    BitFieldValue<bool, unsigned __int32> bRenderCustomDepth()
    { return { (void*)this, "bRenderCustomDepth" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInDepthPass()
    { return { (void*)this, "bRenderInDepthPass" }; }
    BitFieldValue<bool, unsigned __int32> bRenderInMainPass()
    { return { (void*)this, "bRenderInMainPass" }; }
    BitFieldValue<bool, unsigned __int32> bRenderStatic()
    { return { (void*)this, "bRenderStatic" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePhysicsToAutonomousProxy()
    { return { (void*)this, "bReplicatePhysicsToAutonomousProxy" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRequiredBonesUpToDate()
    { return { (void*)this, "bRequiredBonesUpToDate" }; }
    BitFieldValue<bool, unsigned __int32> bResetAfterTeleport()
    { return { (void*)this, "bResetAfterTeleport" }; }
    BitFieldValue<bool, unsigned __int32> bReturnMaterialOnMove()
    { return { (void*)this, "bReturnMaterialOnMove" }; }
    BitFieldValue<bool, unsigned __int32> bRotateFeetToAlignWithGround()
    { return { (void*)this, "bRotateFeetToAlignWithGround" }; }
    BitFieldValue<bool, unsigned __int32> bRotateToMatchWalkingSlope()
    { return { (void*)this, "bRotateToMatchWalkingSlope" }; }
    BitFieldValue<bool, unsigned __int32> bSelectable()
    { return { (void*)this, "bSelectable" }; }
    BitFieldValue<bool, unsigned __int32> bSelfShadowOnly()
    { return { (void*)this, "bSelfShadowOnly" }; }
    BitFieldValue<bool, unsigned __int32> bSetAttachmentMasterPoseComponent()
    { return { (void*)this, "bSetAttachmentMasterPoseComponent" }; }
    BitFieldValue<bool, unsigned __int32> bSetKinematicsSleeping()
    { return { (void*)this, "bSetKinematicsSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bSetMeshDeformer()
    { return { (void*)this, "bSetMeshDeformer" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeAttached()
    { return { (void*)this, "bShouldBeAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldCacheFootZDiff()
    { return { (void*)this, "bShouldCacheFootZDiff" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapLocationWhenAttached()
    { return { (void*)this, "bShouldSnapLocationWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapRotationWhenAttached()
    { return { (void*)this, "bShouldSnapRotationWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapScaleWhenAttached()
    { return { (void*)this, "bShouldSnapScaleWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldUpdatePhysicsVolume()
    { return { (void*)this, "bShouldUpdatePhysicsVolume" }; }
    BitFieldValue<bool, unsigned __int32> bShowPrePhysBones()
    { return { (void*)this, "bShowPrePhysBones" }; }
    BitFieldValue<bool, unsigned __int32> bSingleSampleShadowFromStationaryLights()
    { return { (void*)this, "bSingleSampleShadowFromStationaryLights" }; }
    BitFieldValue<bool, unsigned __int32> bSkipBoundsUpdateWhenInterpolating()
    { return { (void*)this, "bSkipBoundsUpdateWhenInterpolating" }; }
    BitFieldValue<bool, unsigned __int32> bSkipKinematicUpdateWhenInterpolating()
    { return { (void*)this, "bSkipKinematicUpdateWhenInterpolating" }; }
    BitFieldValue<bool, unsigned __int32> bSkipUpdateTransformIfBlendedPhysics()
    { return { (void*)this, "bSkipUpdateTransformIfBlendedPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bSleepKinematicsWhenNotRefreshingBones()
    { return { (void*)this, "bSleepKinematicsWhenNotRefreshingBones" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bStaticWhenNotMoveable()
    { return { (void*)this, "bStaticWhenNotMoveable" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressAnimNotifies()
    { return { (void*)this, "bSuppressAnimNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bSyncAttachParentLOD()
    { return { (void*)this, "bSyncAttachParentLOD" }; }
    BitFieldValue<bool, unsigned __int32> bTraceComplexOnMove()
    { return { (void*)this, "bTraceComplexOnMove" }; }
    BitFieldValue<bool, unsigned __int32> bTreatAsBackgroundForOcclusion()
    { return { (void*)this, "bTreatAsBackgroundForOcclusion" }; }
    unsigned char& bUpdateBoundsWhenStationaryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.bUpdateBoundsWhenStationary"); }
    BitFieldValue<bool, unsigned __int32> bUpdateChildOverlaps()
    { return { (void*)this, "bUpdateChildOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateJointsFromAnimation()
    { return { (void*)this, "bUpdateJointsFromAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateMeshWhenKinematic()
    { return { (void*)this, "bUpdateMeshWhenKinematic" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateOverlapsOnAnimationFinalize()
    { return { (void*)this, "bUpdateOverlapsOnAnimationFinalize" }; }
    BitFieldValue<bool, unsigned __int32> bUpdatedKinematics()
    { return { (void*)this, "bUpdatedKinematics" }; }
    BitFieldValue<bool, unsigned __int32> bUpdatedKinematicsOnce()
    { return { (void*)this, "bUpdatedKinematicsOnce" }; }
    BitFieldValue<bool, unsigned __int32> bUseAbsoluteMaxDrawDisatance()
    { return { (void*)this, "bUseAbsoluteMaxDrawDisatance" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsOccluder()
    { return { (void*)this, "bUseAsOccluder" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsUnfogger()
    { return { (void*)this, "bUseAsUnfogger" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachParentBound()
    { return { (void*)this, "bUseAttachParentBound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPControlRigNotify()
    { return { (void*)this, "bUseBPControlRigNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBoundsFromLeaderPoseComponent()
    { return { (void*)this, "bUseBoundsFromLeaderPoseComponent" }; }
    BitFieldValue<bool, unsigned __int32> bUseEditorCompositing()
    { return { (void*)this, "bUseEditorCompositing" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctree()
    { return { (void*)this, "bUseInternalOctree" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctreeOnClient()
    { return { (void*)this, "bUseInternalOctreeOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemSlotAttachmentTranformOffsets()
    { return { (void*)this, "bUseItemSlotAttachmentTranformOffsets" }; }
    BitFieldValue<bool, unsigned __int32> bUseRefPoseOnInitAnim()
    { return { (void*)this, "bUseRefPoseOnInitAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseRotOffset()
    { return { (void*)this, "bUseRotOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseScreenRenderStateForUpdate()
    { return { (void*)this, "bUseScreenRenderStateForUpdate" }; }
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
    BitFieldValue<bool, unsigned __int32> bWaitForParallelClothTask()
    { return { (void*)this, "bWaitForParallelClothTask" }; }
    BitFieldValue<bool, unsigned __int32> bWantsEditorEffects()
    { return { (void*)this, "bWantsEditorEffects" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALDINOMESHCOMPONENT_H
