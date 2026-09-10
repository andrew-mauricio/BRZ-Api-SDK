// ==========================================================================
//  UGameplayDebuggerRenderingComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERRENDERINGCOMPONENT_H
#define BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERRENDERINGCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct UPrimitiveComponent;
struct USceneComponent;


struct UGameplayDebuggerRenderingComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayDebuggerRenderingComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerRenderingComponent.CalcBounds(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcBounds(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayDebuggerRenderingComponent.CalcBounds(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerRenderingComponent.CreateDebugSceneProxy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateDebugSceneProxy() const
    {
        return NativeCall<void*>(this, "UGameplayDebuggerRenderingComponent.CreateDebugSceneProxy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerRenderingComponent.GetDebugDrawDelegateHelper()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetDebugDrawDelegateHelper() const
    {
        return NativeCall<void*>(this, "UGameplayDebuggerRenderingComponent.GetDebugDrawDelegateHelper()");
    }

    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnClient()
    { return { (void*)this, "AlwaysLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysLoadOnServer()
    { return { (void*)this, "AlwaysLoadOnServer" }; }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayDebuggerRenderingComponent.AssetUserData"); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayDebuggerRenderingComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UGameplayDebuggerRenderingComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayDebuggerRenderingComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.AttachmentChangedIncrementer"); }
    BrzCampoPonteiro BodyInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.BodyInstance")); }
    float& BoundsScaleField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerRenderingComponent.BoundsScale"); }
    float& CachedMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerRenderingComponent.CachedMaxDrawDistance"); }
    unsigned char& CanCharacterStepUpOnField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.CanCharacterStepUpOn"); }
    BitFieldValue<bool, unsigned __int32> CastShadow()
    { return { (void*)this, "CastShadow" }; }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayDebuggerRenderingComponent.ClientAttachedChildren"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayDebuggerRenderingComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.CustomData"); }
    int& CustomDepthStencilValueField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.CustomDepthStencilValue"); }
    BrzCampoPonteiro CustomDepthStencilWriteMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.CustomDepthStencilWriteMask")); }
    BrzCampoPonteiro CustomPrimitiveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.CustomPrimitiveData")); }
    BrzCampoPonteiro CustomPrimitiveDataInternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.CustomPrimitiveDataInternal")); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayDebuggerRenderingComponent.CustomTag"); }
    unsigned char& DepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.DepthPriorityGroup"); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.DetailMode"); }
    unsigned char& ExcludeFromHLODLevelsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.ExcludeFromHLODLevels"); }
    BrzCampoPonteiro FirstPersonPrimitiveTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.FirstPersonPrimitiveType")); }
    BrzCampoPonteiro HLODBatchingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.HLODBatchingPolicy")); }
    unsigned char& IndirectLightingCacheQualityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.IndirectLightingCacheQuality"); }
    int& InternalOctreeMaskField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.InternalOctreeMask"); }
    float& LDMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerRenderingComponent.LDMaxDrawDistance"); }
    TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UGameplayDebuggerRenderingComponent.LODParentPrimitive"); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UGameplayDebuggerRenderingComponent.LightmapType" }; }
    float& MinDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerRenderingComponent.MinDrawDistance"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.Mobility"); }
    TArray<void*>& MoveIgnoreActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayDebuggerRenderingComponent.MoveIgnoreActors"); }
    TArray<void*>& MoveIgnoreComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayDebuggerRenderingComponent.MoveIgnoreComponents"); }
    int& ObjectLayerField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.ObjectLayer"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentBeginOverlap")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnComponentEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentEndOverlap")); }
    BrzCampoPonteiro OnComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentHit")); }
    BrzCampoPonteiro OnComponentPhysicsStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentPhysicsStateChanged")); }
    BrzCampoPonteiro OnComponentSleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentSleep")); }
    BrzCampoPonteiro OnComponentWakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnComponentWake")); }
    BrzCampoPonteiro OnPrimalComponentPhysicsStatePreChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.OnPrimalComponentPhysicsStatePreChange")); }
    float& OverrideStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerRenderingComponent.OverrideStepHeight"); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UGameplayDebuggerRenderingComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.PhysicsVolumeChangedDelegate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UGameplayDebuggerRenderingComponent.PrimaryComponentTick"); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.RayTracingGroupId"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.RelativeScale3D")); }
    BrzCampoPonteiro RuntimeVirtualTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.RuntimeVirtualTextures")); }
    BrzCampoPonteiro ShadowCacheInvalidationBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.ShadowCacheInvalidationBehavior")); }
    float& TranslucencySortDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerRenderingComponent.TranslucencySortDistanceOffset"); }
    int& TranslucencySortPriorityField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.TranslucencySortPriority"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.UCSSerializationIndex"); }
    unsigned char& ViewOwnerDepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.ViewOwnerDepthPriorityGroup"); }
    char& VirtualTextureCullMipsField() const
    { return *GetNativePointerField<char*>(this, "UGameplayDebuggerRenderingComponent.VirtualTextureCullMips"); }
    signed char& VirtualTextureLodBiasField() const
    { return *GetNativePointerField<signed char*>(this, "UGameplayDebuggerRenderingComponent.VirtualTextureLodBias"); }
    signed char& VirtualTextureMinCoverageField() const
    { return *GetNativePointerField<signed char*>(this, "UGameplayDebuggerRenderingComponent.VirtualTextureMinCoverage"); }
    FieldArray<char> VirtualTextureRenderPassTypeField() const
    { return { (void*)this, "UGameplayDebuggerRenderingComponent.VirtualTextureRenderPassType" }; }
    int& VisibilityIdField() const
    { return *GetNativePointerField<int*>(this, "UGameplayDebuggerRenderingComponent.VisibilityId"); }
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
    { return *GetNativePointerField<bool*>(this, "UGameplayDebuggerRenderingComponent.bEmissiveLightSource"); }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLevelBounds()
    { return { (void*)this, "bExcludeFromLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bExcludeFromLightAttachmentGroup()
    { return { (void*)this, "bExcludeFromLightAttachmentGroup" }; }
    BitFieldValue<bool, unsigned __int32> bFillCollisionUnderneathForNavmesh()
    { return { (void*)this, "bFillCollisionUnderneathForNavmesh" }; }
    BitFieldValue<bool, unsigned __int32> bForceMipStreaming()
    { return { (void*)this, "bForceMipStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverlapEvents()
    { return { (void*)this, "bForceOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventBlockingProjectiles()
    { return { (void*)this, "bForcePreventBlockingProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents()
    { return { (void*)this, "bGenerateOverlapEvents" }; }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.bHasCustomNavigableGeometry"); }
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
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOwnerSee()
    { return { (void*)this, "bOnlyOwnerSee" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
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
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERRENDERINGCOMPONENT_H
