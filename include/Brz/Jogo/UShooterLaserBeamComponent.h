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

    BrzCampoPonteiro AlwaysLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.AlwaysLoadOnClient")); }
    BrzCampoPonteiro AlwaysLoadOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.AlwaysLoadOnServer")); }
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
    BrzCampoPonteiro CastShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.CastShadow")); }
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
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAffectDistanceFieldLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAffectDistanceFieldLighting")); }
    BrzCampoPonteiro bAffectDynamicIndirectLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAffectDynamicIndirectLighting")); }
    BrzCampoPonteiro bAffectIndirectLightingWhileHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAffectIndirectLightingWhileHidden")); }
    BrzCampoPonteiro bAllowCullDistanceVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAllowCullDistanceVolume")); }
    BrzCampoPonteiro bAllowRecyclingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAllowRecycling")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bApplyImpulseOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bApplyImpulseOnDamage")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAutoActivate")); }
    BrzCampoPonteiro bAutoAttachWeldSimulatedBodiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAutoAttachWeldSimulatedBodies")); }
    BrzCampoPonteiro bAutoManageAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bAutoManageAttachment")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCastCinematicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastCinematicShadow")); }
    BrzCampoPonteiro bCastContactShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastContactShadow")); }
    BrzCampoPonteiro bCastDynamicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastDynamicShadow")); }
    BrzCampoPonteiro bCastFarShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastFarShadow")); }
    BrzCampoPonteiro bCastHiddenShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastHiddenShadow")); }
    BrzCampoPonteiro bCastInsetShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastInsetShadow")); }
    BrzCampoPonteiro bCastShadowAsTwoSidedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastShadowAsTwoSided")); }
    BrzCampoPonteiro bCastStaticShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastStaticShadow")); }
    BrzCampoPonteiro bCastVolumetricTranslucentShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bCastVolumetricTranslucentShadow")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bClimbable")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bEditableWhenInherited")); }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UShooterLaserBeamComponent.bEmissiveLightSource"); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bExcludeFromLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bExcludeFromLevelBounds")); }
    BrzCampoPonteiro bExcludeFromLightAttachmentGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bExcludeFromLightAttachmentGroup")); }
    BrzCampoPonteiro bFillCollisionUnderneathForNavmeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bFillCollisionUnderneathForNavmesh")); }
    BrzCampoPonteiro bForceAllowParticleCollisionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bForceAllowParticleCollisions")); }
    BrzCampoPonteiro bForceDisableParticleOcclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bForceDisableParticleOcclusion")); }
    BrzCampoPonteiro bForceMipStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bForceMipStreaming")); }
    BrzCampoPonteiro bForceOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bForceOverlapEvents")); }
    BrzCampoPonteiro bForcePreventBlockingProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bForcePreventBlockingProjectiles")); }
    BrzCampoPonteiro bGenerateOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bGenerateOverlapEvents")); }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLaserBeamComponent.bHasCustomNavigableGeometry"); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHasNoStreamableTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bHasNoStreamableTextures")); }
    BrzCampoPonteiro bHasPerInstanceHitProxiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bHasPerInstanceHitProxies")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bHiddenInGame")); }
    BrzCampoPonteiro bHiddenInSceneCaptureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bHiddenInSceneCapture")); }
    BrzCampoPonteiro bHoldoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bHoldout")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIgnoreRadialForceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIgnoreRadialForce")); }
    BrzCampoPonteiro bIgnoreRadialImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIgnoreRadialImpulse")); }
    BrzCampoPonteiro bIgnoreUpdatingOwnersLastRenderTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIgnoreUpdatingOwnersLastRenderTime")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIncludeBoundsRadiusInDrawDistancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIncludeBoundsRadiusInDrawDistances")); }
    BrzCampoPonteiro bIsAbstractBasingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsAbstractBasingComponent")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsActive")); }
    BrzCampoPonteiro bIsActorTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsActorTextureStreamingBuiltData")); }
    BrzCampoPonteiro bIsBeingMovedByEditorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsBeingMovedByEditor")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsInForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsInForeground")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bIsOwnerWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsOwnerWeapon")); }
    BrzCampoPonteiro bIsValidTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bIsValidTextureStreamingBuiltData")); }
    BrzCampoPonteiro bLightAsIfStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bLightAsIfStatic")); }
    BrzCampoPonteiro bLightAttachmentsAsGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bLightAttachmentsAsGroup")); }
    BrzCampoPonteiro bMovableUseDynamicDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bMovableUseDynamicDrawDistance")); }
    BrzCampoPonteiro bMultiBodyOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bMultiBodyOverlap")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bNetAddressable")); }
    BrzCampoPonteiro bNeverDistanceCullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bNeverDistanceCull")); }
    BrzCampoPonteiro bOldPositionValidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bOldPositionValid")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOwnerSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bOnlyOwnerSee")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOverrideLODMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bOverrideLODMethod")); }
    BrzCampoPonteiro bOwnerNoSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bOwnerNoSee")); }
    BrzCampoPonteiro bPlaceholderBool1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPlaceholderBool1")); }
    BrzCampoPonteiro bPreserveOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreserveOnDedicatedServer")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreventDamage")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bRayTracingFarFieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bRayTracingFarField")); }
    BrzCampoPonteiro bReceiveMobileCSMShadowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bReceiveMobileCSMShadows")); }
    BrzCampoPonteiro bReceivesDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bReceivesDecals")); }
    BrzCampoPonteiro bRegisterWithMaterialGPUMessageQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bRegisterWithMaterialGPUMessageQueue")); }
    BrzCampoPonteiro bRenderCustomDepthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bRenderCustomDepth")); }
    BrzCampoPonteiro bRenderInDepthPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bRenderInDepthPass")); }
    BrzCampoPonteiro bRenderInMainPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bRenderInMainPass")); }
    BrzCampoPonteiro bReplicatePhysicsToAutonomousProxyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bReplicatePhysicsToAutonomousProxy")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bReplicates")); }
    BrzCampoPonteiro bResetOnDetachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bResetOnDetach")); }
    BrzCampoPonteiro bReturnMaterialOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bReturnMaterialOnMove")); }
    BrzCampoPonteiro bSelectableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bSelectable")); }
    BrzCampoPonteiro bSelfShadowOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bSelfShadowOnly")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bSingleSampleShadowFromStationaryLightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bSingleSampleShadowFromStationaryLights")); }
    BrzCampoPonteiro bSkipUpdateDynamicDataDuringTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bSkipUpdateDynamicDataDuringTick")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStaticWhenNotMoveableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bStaticWhenNotMoveable")); }
    BrzCampoPonteiro bTraceComplexOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bTraceComplexOnMove")); }
    BrzCampoPonteiro bTreatAsBackgroundForOcclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bTreatAsBackgroundForOcclusion")); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUpdateOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUpdateOnDedicatedServer")); }
    BrzCampoPonteiro bUseAbsoluteMaxDrawDisatanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseAbsoluteMaxDrawDisatance")); }
    BrzCampoPonteiro bUseAsOccluderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseAsOccluder")); }
    BrzCampoPonteiro bUseAsUnfoggerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseAsUnfogger")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseEditorCompositingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseEditorCompositing")); }
    BrzCampoPonteiro bUseInternalOctreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseInternalOctree")); }
    BrzCampoPonteiro bUseInternalOctreeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseInternalOctreeOnClient")); }
    BrzCampoPonteiro bUseViewOwnerDepthPriorityGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bUseViewOwnerDepthPriorityGroup")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bVisible")); }
    BrzCampoPonteiro bVisibleInRayTracingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bVisibleInRayTracing")); }
    BrzCampoPonteiro bVisibleInRealTimeSkyCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bVisibleInRealTimeSkyCaptures")); }
    BrzCampoPonteiro bVisibleInReflectionCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bVisibleInReflectionCaptures")); }
    BrzCampoPonteiro bVisibleInSceneCaptureOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bVisibleInSceneCaptureOnly")); }
    BrzCampoPonteiro bWantsEditorEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bWantsEditorEffects")); }
    BrzCampoPonteiro bWarmingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bWarmingUp")); }
    BrzCampoPonteiro bWasDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLaserBeamComponent.bWasDeactivated")); }
    BitFieldValue<bool, unsigned __int32> bIsOwnerWeapon()
    { return { (void*)this, "bIsOwnerWeapon" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERLASERBEAMCOMPONENT_H
