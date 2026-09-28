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

    BrzCampoPonteiro AlwaysLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AlwaysLoadOnClient")); }
    BrzCampoPonteiro AlwaysLoadOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AlwaysLoadOnServer")); }
    BrzCampoPonteiro AnimBlueprintGeneratedClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimBlueprintGeneratedClass")); }
    BrzCampoPonteiro AnimClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimClass")); }
    BrzCampoPonteiro AnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimScriptInstance")); }
    BrzCampoPonteiro AnimationDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimationData")); }
    BrzCampoPonteiro AnimationFrozenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.AnimationFrozen")); }
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
    BrzCampoPonteiro CastShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.CastShadow")); }
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
    BrzCampoPonteiro UseWorldSpaceFeetAlignmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.UseWorldSpaceFeetAlignment")); }
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
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAddAttachedParentBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAddAttachedParentBounds")); }
    BrzCampoPonteiro bAffectDistanceFieldLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAffectDistanceFieldLighting")); }
    BrzCampoPonteiro bAffectDynamicIndirectLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAffectDynamicIndirectLighting")); }
    BrzCampoPonteiro bAffectIndirectLightingWhileHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAffectIndirectLightingWhileHidden")); }
    BrzCampoPonteiro bAlignRootOnlyToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlignRootOnlyToGround")); }
    BrzCampoPonteiro bAllowAlwaysEvaluatePostProcessAnimBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAllowAlwaysEvaluatePostProcessAnimBP")); }
    BrzCampoPonteiro bAllowAnimCurveEvaluationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAllowAnimCurveEvaluation")); }
    BrzCampoPonteiro bAllowClothActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAllowClothActors")); }
    BrzCampoPonteiro bAllowCullDistanceVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAllowCullDistanceVolume")); }
    BrzCampoPonteiro bAllowKinematicUpdateStaggeringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAllowKinematicUpdateStaggering")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysForceUpdateKinematicsOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlwaysForceUpdateKinematicsOnDedicatedServer")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAlwaysTeleportKinematicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlwaysTeleportKinematic")); }
    BrzCampoPonteiro bAlwaysUpdateMeshForShadowRenderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlwaysUpdateMeshForShadowRendering")); }
    BrzCampoPonteiro bAlwaysUseMeshDeformerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAlwaysUseMeshDeformer")); }
    BrzCampoPonteiro bAnimTreeInitialisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAnimTreeInitialised")); }
    BrzCampoPonteiro bApplyGroundBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bApplyGroundBoneModifiers")); }
    BrzCampoPonteiro bApplyImpulseOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bApplyImpulseOnDamage")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bAutoActivate")); }
    BrzCampoPonteiro bBasedPawnsTriggerChildTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bBasedPawnsTriggerChildTick")); }
    BrzCampoPonteiro bBlendPhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bBlendPhysics")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCPUSkinningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCPUSkinning")); }
    BrzCampoPonteiro bCachedLocalBoundsUpToDateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCachedLocalBoundsUpToDate")); }
    BrzCampoPonteiro bCachedWorldSpaceBoundsUpToDateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCachedWorldSpaceBoundsUpToDate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCanHighlightSelectedSectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCanHighlightSelectedSections")); }
    BrzCampoPonteiro bCastCapsuleDirectShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastCapsuleDirectShadow")); }
    BrzCampoPonteiro bCastCapsuleIndirectShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastCapsuleIndirectShadow")); }
    BrzCampoPonteiro bCastCinematicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastCinematicShadow")); }
    BrzCampoPonteiro bCastContactShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastContactShadow")); }
    BrzCampoPonteiro bCastDynamicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastDynamicShadow")); }
    BrzCampoPonteiro bCastFarShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastFarShadow")); }
    BrzCampoPonteiro bCastHiddenShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastHiddenShadow")); }
    BrzCampoPonteiro bCastInsetShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastInsetShadow")); }
    BrzCampoPonteiro bCastShadowAsTwoSidedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastShadowAsTwoSided")); }
    BrzCampoPonteiro bCastStaticShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastStaticShadow")); }
    BrzCampoPonteiro bCastVolumetricTranslucentShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCastVolumetricTranslucentShadow")); }
    BrzCampoPonteiro bChartDistanceFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bChartDistanceFactor")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bClimbable")); }
    BrzCampoPonteiro bCollideWithAttachedChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCollideWithAttachedChildren")); }
    BrzCampoPonteiro bCollideWithEnvironmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bCollideWithEnvironment")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComponentUseFixedSkelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bComponentUseFixedSkelBounds")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bConsiderAllBodiesForBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bConsiderAllBodiesForBounds")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDeferKinematicBoneUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDeferKinematicBoneUpdate")); }
    BrzCampoPonteiro bDinoIKAnimationLegZOffsetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKAnimationLegZOffseting")); }
    BrzCampoPonteiro bDinoIKLerpFeetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKLerpFeet")); }
    BrzCampoPonteiro bDinoIKLerpLegsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKLerpLegs")); }
    BrzCampoPonteiro bDinoIKRootWorldSpaceLerpZField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKRootWorldSpaceLerpZ")); }
    BrzCampoPonteiro bDinoIKSlopeMatchingRootHeightOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKSlopeMatchingRootHeightOffsetMultiplier")); }
    BrzCampoPonteiro bDinoIKSmoothGroundPlaneLerpingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKSmoothGroundPlaneLerping")); }
    BrzCampoPonteiro bDinoIKUseExperimentalInvalidTraceZeroingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKUseExperimentalInvalidTraceZeroing")); }
    BrzCampoPonteiro bDinoIKUseLegLimitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDinoIKUseLegLimits")); }
    BrzCampoPonteiro bDisableClothSimulationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDisableClothSimulation")); }
    BrzCampoPonteiro bDisableMorphTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDisableMorphTarget")); }
    BrzCampoPonteiro bDisablePerPixelPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDisablePerPixelPainting")); }
    BrzCampoPonteiro bDisablePostProcessBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDisablePostProcessBlueprint")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDisableRigidBodyAnimNode")); }
    BrzCampoPonteiro bDisplayDebugUpdateRateOptimizationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bDisplayDebugUpdateRateOptimizations")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEditableWhenInherited")); }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalDinoMeshComponent.bEmissiveLightSource"); }
    BrzCampoPonteiro bEnableAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableAnimation")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableIKCartGroundConformingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableIKCartGroundConforming")); }
    BrzCampoPonteiro bEnableIKTraceFreezingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableIKTraceFreezing")); }
    BrzCampoPonteiro bEnableIkOnlyWhenIdleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableIkOnlyWhenIdle")); }
    BrzCampoPonteiro bEnableLineCheckWithBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableLineCheckWithBounds")); }
    BrzCampoPonteiro bEnableMaterialParameterCachingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableMaterialParameterCaching")); }
    BrzCampoPonteiro bEnableMultiFabrikField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableMultiFabrik")); }
    BrzCampoPonteiro bEnablePerPolyCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnablePerPolyCollision")); }
    BrzCampoPonteiro bEnablePhysicsOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnablePhysicsOnDedicatedServer")); }
    BrzCampoPonteiro bEnableSimpleIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableSimpleIK")); }
    BrzCampoPonteiro bEnableUpdateRateOptimizationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bEnableUpdateRateOptimizations")); }
    BrzCampoPonteiro bExcludeFromLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bExcludeFromLevelBounds")); }
    BrzCampoPonteiro bExcludeFromLightAttachmentGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bExcludeFromLightAttachmentGroup")); }
    BrzCampoPonteiro bFillCollisionUnderneathForNavmeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bFillCollisionUnderneathForNavmesh")); }
    BrzCampoPonteiro bFilteredAnimCurvesIsAllowListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bFilteredAnimCurvesIsAllowList")); }
    BrzCampoPonteiro bFollowerShouldTickPoseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bFollowerShouldTickPose")); }
    BrzCampoPonteiro bFootZDiffIsCachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bFootZDiffIsCached")); }
    BrzCampoPonteiro bForceCollisionUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceCollisionUpdate")); }
    BrzCampoPonteiro bForceDisablePhysicsOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceDisablePhysicsOnDediServer")); }
    BrzCampoPonteiro bForceDisablePhysicsOnDediServerAllowRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceDisablePhysicsOnDediServerAllowRagdoll")); }
    BrzCampoPonteiro bForceMeshObjectUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceMeshObjectUpdate")); }
    BrzCampoPonteiro bForceMipStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceMipStreaming")); }
    BrzCampoPonteiro bForceOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceOverlapEvents")); }
    BrzCampoPonteiro bForcePreventBlockingProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForcePreventBlockingProjectiles")); }
    BrzCampoPonteiro bForceRefposeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceRefpose")); }
    BrzCampoPonteiro bForceSimpleIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceSimpleIK")); }
    BrzCampoPonteiro bForceTickDisabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceTickDisabled")); }
    BrzCampoPonteiro bForceTickPoseWithinRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceTickPoseWithinRange")); }
    BrzCampoPonteiro bForceUpdateKinematicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceUpdateKinematic")); }
    BrzCampoPonteiro bForceWireframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bForceWireframe")); }
    BrzCampoPonteiro bFreeSpaceBasesOnUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bFreeSpaceBasesOnUnregister")); }
    BrzCampoPonteiro bFreezeGroundPlaneIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bFreezeGroundPlaneIK")); }
    BrzCampoPonteiro bGenerateOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bGenerateOverlapEvents")); }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.bHasCustomNavigableGeometry"); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHasNoStreamableTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHasNoStreamableTextures")); }
    BrzCampoPonteiro bHasPerInstanceHitProxiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHasPerInstanceHitProxies")); }
    BrzCampoPonteiro bHasValidBodiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHasValidBodies")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHiddenInGame")); }
    BrzCampoPonteiro bHiddenInSceneCaptureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHiddenInSceneCapture")); }
    BrzCampoPonteiro bHideSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHideSkin")); }
    BrzCampoPonteiro bHoldoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHoldout")); }
    BrzCampoPonteiro bHumanIKUseBoneModiferLegScalarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bHumanIKUseBoneModiferLegScalars")); }
    BrzCampoPonteiro bIKRotationEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIKRotationEnabled")); }
    BrzCampoPonteiro bIgnoreLeaderPoseComponentLODField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIgnoreLeaderPoseComponentLOD")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIgnoreRadialForceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIgnoreRadialForce")); }
    BrzCampoPonteiro bIgnoreRadialImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIgnoreRadialImpulse")); }
    BrzCampoPonteiro bIgnoreUpdatingOwnersLastRenderTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIgnoreUpdatingOwnersLastRenderTime")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIncludeBoundsRadiusInDrawDistancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIncludeBoundsRadiusInDrawDistances")); }
    BrzCampoPonteiro bIncludeComponentLocationIntoBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIncludeComponentLocationIntoBounds")); }
    BrzCampoPonteiro bInitOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bInitOffset")); }
    BrzCampoPonteiro bInitializedArticulatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bInitializedArticulated")); }
    BrzCampoPonteiro bInterpolateRootPhysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bInterpolateRootPhys")); }
    BrzCampoPonteiro bIsAbstractBasingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsAbstractBasingComponent")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsActive")); }
    BrzCampoPonteiro bIsActorTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsActorTextureStreamingBuiltData")); }
    BrzCampoPonteiro bIsAutonomousTickPoseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsAutonomousTickPose")); }
    BrzCampoPonteiro bIsBeingMovedByEditorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsBeingMovedByEditor")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsInForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsInForeground")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bIsValidTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bIsValidTextureStreamingBuiltData")); }
    BrzCampoPonteiro bLightAsIfStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bLightAsIfStatic")); }
    BrzCampoPonteiro bLightAttachmentsAsGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bLightAttachmentsAsGroup")); }
    BrzCampoPonteiro bModifyBoneAnimNodeUseCurrentBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bModifyBoneAnimNodeUseCurrentBoneModifiers")); }
    BrzCampoPonteiro bMovableUseDynamicDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bMovableUseDynamicDrawDistance")); }
    BrzCampoPonteiro bMovedLastFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bMovedLastFrame")); }
    BrzCampoPonteiro bMultiBodyOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bMultiBodyOverlap")); }
    BrzCampoPonteiro bNeedsQueuedAnimEventsDispatchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bNeedsQueuedAnimEventsDispatched")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bNetAddressable")); }
    BrzCampoPonteiro bNeverDistanceCullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bNeverDistanceCull")); }
    BrzCampoPonteiro bNeverTickOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bNeverTickOnDediServer")); }
    BrzCampoPonteiro bNoSkeletonUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bNoSkeletonUpdate")); }
    BrzCampoPonteiro bOldForceRefPoseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOldForceRefPose")); }
    BrzCampoPonteiro bOnlyAllowAutonomousTickPoseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOnlyAllowAutonomousTickPose")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOwnerSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOnlyOwnerSee")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyTickWhenRenderedDontDisableOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOnlyTickWhenRenderedDontDisableOnDedicatedServer")); }
    BrzCampoPonteiro bOverrideMinLODField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOverrideMinLOD")); }
    BrzCampoPonteiro bOwnerNoSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bOwnerNoSee")); }
    BrzCampoPonteiro bPauseAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPauseAnims")); }
    BrzCampoPonteiro bPerBoneMotionBlurField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPerBoneMotionBlur")); }
    BrzCampoPonteiro bPhysicsRequiredOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPhysicsRequiredOnDediServer")); }
    BrzCampoPonteiro bPlaceholderBool1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPlaceholderBool1")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventDamage")); }
    BrzCampoPonteiro bPreventDediServerAutoUnregistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventDediServerAutoUnregistration")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bPropagateCurvesToFollowersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bPropagateCurvesToFollowers")); }
    BrzCampoPonteiro bRayTracingFarFieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRayTracingFarField")); }
    BrzCampoPonteiro bReceiveMobileCSMShadowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bReceiveMobileCSMShadows")); }
    BrzCampoPonteiro bReceivesDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bReceivesDecals")); }
    BrzCampoPonteiro bRecentlyRenderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRecentlyRendered")); }
    BrzCampoPonteiro bRegisterWithMaterialGPUMessageQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRegisterWithMaterialGPUMessageQueue")); }
    BrzCampoPonteiro bRenderCustomDepthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRenderCustomDepth")); }
    BrzCampoPonteiro bRenderInDepthPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRenderInDepthPass")); }
    BrzCampoPonteiro bRenderInMainPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRenderInMainPass")); }
    BrzCampoPonteiro bRenderStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRenderStatic")); }
    BrzCampoPonteiro bReplicatePhysicsToAutonomousProxyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bReplicatePhysicsToAutonomousProxy")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bReplicates")); }
    BrzCampoPonteiro bRequiredBonesUpToDateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRequiredBonesUpToDate")); }
    BrzCampoPonteiro bResetAfterTeleportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bResetAfterTeleport")); }
    BrzCampoPonteiro bReturnMaterialOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bReturnMaterialOnMove")); }
    BrzCampoPonteiro bRotateFeetToAlignWithGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRotateFeetToAlignWithGround")); }
    BrzCampoPonteiro bRotateToMatchWalkingSlopeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bRotateToMatchWalkingSlope")); }
    BrzCampoPonteiro bSelectableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSelectable")); }
    BrzCampoPonteiro bSelfShadowOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSelfShadowOnly")); }
    BrzCampoPonteiro bSetAttachmentMasterPoseComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSetAttachmentMasterPoseComponent")); }
    BrzCampoPonteiro bSetKinematicsSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSetKinematicsSleeping")); }
    BrzCampoPonteiro bSetMeshDeformerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSetMeshDeformer")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldCacheFootZDiffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShouldCacheFootZDiff")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bShowPrePhysBonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bShowPrePhysBones")); }
    BrzCampoPonteiro bSingleSampleShadowFromStationaryLightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSingleSampleShadowFromStationaryLights")); }
    BrzCampoPonteiro bSkipBoundsUpdateWhenInterpolatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSkipBoundsUpdateWhenInterpolating")); }
    BrzCampoPonteiro bSkipKinematicUpdateWhenInterpolatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSkipKinematicUpdateWhenInterpolating")); }
    BrzCampoPonteiro bSkipUpdateTransformIfBlendedPhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSkipUpdateTransformIfBlendedPhysics")); }
    BrzCampoPonteiro bSleepKinematicsWhenNotRefreshingBonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSleepKinematicsWhenNotRefreshingBones")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStaticWhenNotMoveableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bStaticWhenNotMoveable")); }
    BrzCampoPonteiro bSuppressAnimNotifiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSuppressAnimNotifies")); }
    BrzCampoPonteiro bSyncAttachParentLODField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bSyncAttachParentLOD")); }
    BrzCampoPonteiro bTraceComplexOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bTraceComplexOnMove")); }
    BrzCampoPonteiro bTreatAsBackgroundForOcclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bTreatAsBackgroundForOcclusion")); }
    unsigned char& bUpdateBoundsWhenStationaryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.bUpdateBoundsWhenStationary"); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUpdateJointsFromAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUpdateJointsFromAnimation")); }
    BrzCampoPonteiro bUpdateMeshWhenKinematicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUpdateMeshWhenKinematic")); }
    BrzCampoPonteiro bUpdateOverlapsOnAnimationFinalizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUpdateOverlapsOnAnimationFinalize")); }
    BrzCampoPonteiro bUpdatedKinematicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUpdatedKinematics")); }
    BrzCampoPonteiro bUpdatedKinematicsOnceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUpdatedKinematicsOnce")); }
    BrzCampoPonteiro bUseAbsoluteMaxDrawDisatanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseAbsoluteMaxDrawDisatance")); }
    BrzCampoPonteiro bUseAsOccluderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseAsOccluder")); }
    BrzCampoPonteiro bUseAsUnfoggerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseAsUnfogger")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPControlRigNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseBPControlRigNotify")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseBoundsFromLeaderPoseComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseBoundsFromLeaderPoseComponent")); }
    BrzCampoPonteiro bUseEditorCompositingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseEditorCompositing")); }
    BrzCampoPonteiro bUseInternalOctreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseInternalOctree")); }
    BrzCampoPonteiro bUseInternalOctreeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseInternalOctreeOnClient")); }
    BrzCampoPonteiro bUseItemSlotAttachmentTranformOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseItemSlotAttachmentTranformOffsets")); }
    BrzCampoPonteiro bUseRefPoseOnInitAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseRefPoseOnInitAnim")); }
    BrzCampoPonteiro bUseRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseRotOffset")); }
    BrzCampoPonteiro bUseScreenRenderStateForUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseScreenRenderStateForUpdate")); }
    BrzCampoPonteiro bUseViewOwnerDepthPriorityGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bUseViewOwnerDepthPriorityGroup")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bVisible")); }
    BrzCampoPonteiro bVisibleInRayTracingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bVisibleInRayTracing")); }
    BrzCampoPonteiro bVisibleInRealTimeSkyCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bVisibleInRealTimeSkyCaptures")); }
    BrzCampoPonteiro bVisibleInReflectionCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bVisibleInReflectionCaptures")); }
    BrzCampoPonteiro bVisibleInSceneCaptureOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bVisibleInSceneCaptureOnly")); }
    BrzCampoPonteiro bWaitForParallelClothTaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bWaitForParallelClothTask")); }
    BrzCampoPonteiro bWantsEditorEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoMeshComponent.bWantsEditorEffects")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALDINOMESHCOMPONENT_H
