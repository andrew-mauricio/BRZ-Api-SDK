// ==========================================================================
//  UShooterLaserBeamComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERLASERBEAMCOMPONENT_H
#define BRZ_SDK_JOGO_USHOOTERLASERBEAMCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct UPrimitiveComponent;
struct USceneComponent;


struct UShooterLaserBeamComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterLaserBeamComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLaserBeamComponent.InitializeComponent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro InitializeComponent() const
    {
        return NativeCall<void*>(this, "UShooterLaserBeamComponent.InitializeComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLaserBeamComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UShooterLaserBeamComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnClient()
    { return { (void*)this, "AlwaysLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnServer()
    { return { (void*)this, "AlwaysLoadOnServer" }; }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterLaserBeamComponent.AssetUserData"); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterLaserBeamComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UShooterLaserBeamComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UShooterLaserBeamComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.AttachmentChangedIncrementer"); }
    BrzCampoPonteiro AutoAttachLocationRuleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.AutoAttachLocationRule")); }
    TWeakObjectPtr<void>& AutoAttachParentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UShooterLaserBeamComponent.AutoAttachParent"); }
    BrzCampoPonteiro AutoAttachRotationRuleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.AutoAttachRotationRule")); }
    BrzCampoPonteiro AutoAttachScaleRuleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.AutoAttachScaleRule")); }
    FName& AutoAttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UShooterLaserBeamComponent.AutoAttachSocketName"); }
    BrzCampoPonteiro BodyInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.BodyInstance")); }
    float& BoundsScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.BoundsScale"); }
    float& CachedMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.CachedMaxDrawDistance"); }
    unsigned char& CanCharacterStepUpOnField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.CanCharacterStepUpOn"); }
    BitFieldValue<bool, unsigned __int32> CastShadow()
    { return { (void*)this, "CastShadow" }; }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterLaserBeamComponent.ClientAttachedChildren"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterLaserBeamComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.CustomData"); }
    int& CustomDepthStencilValueField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.CustomDepthStencilValue"); }
    BrzCampoPonteiro CustomDepthStencilWriteMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.CustomDepthStencilWriteMask")); }
    BrzCampoPonteiro CustomPrimitiveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.CustomPrimitiveData")); }
    BrzCampoPonteiro CustomPrimitiveDataInternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.CustomPrimitiveDataInternal")); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UShooterLaserBeamComponent.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.CustomTimeDilation"); }
    unsigned char& DepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.DepthPriorityGroup"); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.DetailMode"); }
    BrzCampoPonteiro EmitterMaterialsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.EmitterMaterials")); }
    unsigned char& ExcludeFromHLODLevelsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.ExcludeFromHLODLevels"); }
    BrzCampoPonteiro FirstPersonPrimitiveTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.FirstPersonPrimitiveType")); }
    BrzCampoPonteiro HLODBatchingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.HLODBatchingPolicy")); }
    unsigned char& IndirectLightingCacheQualityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.IndirectLightingCacheQuality"); }
    BrzCampoPonteiro InstanceParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.InstanceParameters")); }
    int& InternalOctreeMaskField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.InternalOctreeMask"); }
    float& LDMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.LDMaxDrawDistance"); }
    unsigned char& LODMethodField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.LODMethod"); }
    TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UShooterLaserBeamComponent.LODParentPrimitive"); }
    float& LaserBeamRangeField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.LaserBeamRange"); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UShooterLaserBeamComponent.LightmapType" }; }
    float& MaxTimeBeforeForceUpdateTransformField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.MaxTimeBeforeForceUpdateTransform"); }
    float& MinDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.MinDrawDistance"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.Mobility"); }
    TArray<void*>& MoveIgnoreActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterLaserBeamComponent.MoveIgnoreActors"); }
    TArray<void*>& MoveIgnoreComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterLaserBeamComponent.MoveIgnoreComponents"); }
    int& ObjectLayerField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.ObjectLayer"); }
    BrzCampoPonteiro OldPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OldPosition")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentBeginOverlap")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnComponentEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentEndOverlap")); }
    BrzCampoPonteiro OnComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentHit")); }
    BrzCampoPonteiro OnComponentPhysicsStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentPhysicsStateChanged")); }
    BrzCampoPonteiro OnComponentSleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentSleep")); }
    BrzCampoPonteiro OnComponentWakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnComponentWake")); }
    BrzCampoPonteiro OnParticleBurstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnParticleBurst")); }
    BrzCampoPonteiro OnParticleCollideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnParticleCollide")); }
    BrzCampoPonteiro OnParticleDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnParticleDeath")); }
    BrzCampoPonteiro OnParticleSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnParticleSpawn")); }
    BrzCampoPonteiro OnPrimalComponentPhysicsStatePreChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnPrimalComponentPhysicsStatePreChange")); }
    BrzCampoPonteiro OnSystemFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.OnSystemFinished")); }
    float& OverrideStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.OverrideStepHeight"); }
    BrzCampoPonteiro PartSysVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.PartSysVelocity")); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UShooterLaserBeamComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.PhysicsVolumeChangedDelegate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UShooterLaserBeamComponent.PrimaryComponentTick"); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.RayTracingGroupId"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.RelativeScale3D")); }
    BrzCampoPonteiro ReplayClipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.ReplayClips")); }
    BrzCampoPonteiro RequiredSignificanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.RequiredSignificance")); }
    BrzCampoPonteiro RuntimeVirtualTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.RuntimeVirtualTextures")); }
    float& SecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.SecondsBeforeInactive"); }
    BrzCampoPonteiro ShadowCacheInvalidationBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.ShadowCacheInvalidationBehavior")); }
    BrzCampoPonteiro SkelMeshComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.SkelMeshComponents")); }
    BrzCampoPonteiro TemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.Template")); }
    float& TranslucencySortDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.TranslucencySortDistanceOffset"); }
    int& TranslucencySortPriorityField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.TranslucencySortPriority"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.UCSSerializationIndex"); }
    unsigned char& ViewOwnerDepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.ViewOwnerDepthPriorityGroup"); }
    char& VirtualTextureCullMipsField() const
    { return *GetNativePointerField<char*>(this, "UShooterLaserBeamComponent.VirtualTextureCullMips"); }
    signed char& VirtualTextureLodBiasField() const
    { return *GetNativePointerField<signed char*>(this, "UShooterLaserBeamComponent.VirtualTextureLodBias"); }
    signed char& VirtualTextureMinCoverageField() const
    { return *GetNativePointerField<signed char*>(this, "UShooterLaserBeamComponent.VirtualTextureMinCoverage"); }
    FieldArray<char> VirtualTextureRenderPassTypeField() const
    { return { (void*)this, "UShooterLaserBeamComponent.VirtualTextureRenderPassType" }; }
    int& VisibilityIdField() const
    { return *GetNativePointerField<int*>(this, "UShooterLaserBeamComponent.VisibilityId"); }
    float& WarmupTickRateField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.WarmupTickRate"); }
    float& WarmupTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.WarmupTime"); }
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
    BitFieldValue<bool, unsigned __int32> bAllowRecycling()
    { return { (void*)this, "bAllowRecycling" }; }
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
    BitFieldValue<bool, unsigned __int32> bAutoAttachWeldSimulatedBodies()
    { return { (void*)this, "bAutoAttachWeldSimulatedBodies" }; }
    BitFieldValue<bool, unsigned __int32> bAutoManageAttachment()
    { return { (void*)this, "bAutoManageAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bBoundsChangeTriggersStreamingDataRebuild()
    { return { (void*)this, "bBoundsChangeTriggersStreamingDataRebuild" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
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
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UShooterLaserBeamComponent.bEmissiveLightSource"); }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLevelBounds()
    { return { (void*)this, "bExcludeFromLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLightAttachmentGroup()
    { return { (void*)this, "bExcludeFromLightAttachmentGroup" }; }
    BitFieldValue<bool, unsigned __int32> bFillCollisionUnderneathForNavmesh()
    { return { (void*)this, "bFillCollisionUnderneathForNavmesh" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowParticleCollisions()
    { return { (void*)this, "bForceAllowParticleCollisions" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableParticleOcclusion()
    { return { (void*)this, "bForceDisableParticleOcclusion" }; }
    BitFieldValue<bool, unsigned __int32> bForceMipStreaming()
    { return { (void*)this, "bForceMipStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverlapEvents()
    { return { (void*)this, "bForceOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventBlockingProjectiles()
    { return { (void*)this, "bForcePreventBlockingProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents()
    { return { (void*)this, "bGenerateOverlapEvents" }; }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.bHasCustomNavigableGeometry"); }
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
    BitFieldValue<bool, unsigned __int32> bOldPositionValid()
    { return { (void*)this, "bOldPositionValid" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOwnerSee()
    { return { (void*)this, "bOnlyOwnerSee" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideLODMethod()
    { return { (void*)this, "bOverrideLODMethod" }; }
    BitFieldValue<bool, unsigned __int32> bOwnerNoSee()
    { return { (void*)this, "bOwnerNoSee" }; }
    BitFieldValue<bool, unsigned __int32> bPlaceholderBool1()
    { return { (void*)this, "bPlaceholderBool1" }; }
    BitFieldValue<bool, unsigned __int32> bPreserveOnDedicatedServer()
    { return { (void*)this, "bPreserveOnDedicatedServer" }; }
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
    BitFieldValue<bool, unsigned __int32> bResetOnDetach()
    { return { (void*)this, "bResetOnDetach" }; }
    BitFieldValue<bool, unsigned __int32> bReturnMaterialOnMove()
    { return { (void*)this, "bReturnMaterialOnMove" }; }
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
    BitFieldValue<bool, unsigned __int32> bSkipUpdateDynamicDataDuringTick()
    { return { (void*)this, "bSkipUpdateDynamicDataDuringTick" }; }
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
    BitFieldValue<bool, unsigned __int32> bUpdateOnDedicatedServer()
    { return { (void*)this, "bUpdateOnDedicatedServer" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseEditorCompositing()
    { return { (void*)this, "bUseEditorCompositing" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctree()
    { return { (void*)this, "bUseInternalOctree" }; }
    BitFieldValue<bool, unsigned __int32> bUseInternalOctreeOnClient()
    { return { (void*)this, "bUseInternalOctreeOnClient" }; }
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
    BitFieldValue<bool, unsigned __int32> bWarmingUp()
    { return { (void*)this, "bWarmingUp" }; }
    BitFieldValue<bool, unsigned __int32> bWasDeactivated()
    { return { (void*)this, "bWasDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bIsOwnerWeapon()
    { return { (void*)this, "bIsOwnerWeapon" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERLASERBEAMCOMPONENT_H
