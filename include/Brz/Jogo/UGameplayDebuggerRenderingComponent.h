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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetDebugDrawDelegateHelper() const
    {
        return NativeCall<void*>(this, "UGameplayDebuggerRenderingComponent.GetDebugDrawDelegateHelper()");
    }

    BrzCampoPonteiro AlwaysLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.AlwaysLoadOnClient")); }
    BrzCampoPonteiro AlwaysLoadOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.AlwaysLoadOnServer")); }
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
    BrzCampoPonteiro CastShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.CastShadow")); }
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
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAffectDistanceFieldLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAffectDistanceFieldLighting")); }
    BrzCampoPonteiro bAffectDynamicIndirectLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAffectDynamicIndirectLighting")); }
    BrzCampoPonteiro bAffectIndirectLightingWhileHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAffectIndirectLightingWhileHidden")); }
    BrzCampoPonteiro bAllowCullDistanceVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAllowCullDistanceVolume")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bApplyImpulseOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bApplyImpulseOnDamage")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bAutoActivate")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCastCinematicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastCinematicShadow")); }
    BrzCampoPonteiro bCastContactShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastContactShadow")); }
    BrzCampoPonteiro bCastDynamicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastDynamicShadow")); }
    BrzCampoPonteiro bCastFarShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastFarShadow")); }
    BrzCampoPonteiro bCastHiddenShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastHiddenShadow")); }
    BrzCampoPonteiro bCastInsetShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastInsetShadow")); }
    BrzCampoPonteiro bCastShadowAsTwoSidedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastShadowAsTwoSided")); }
    BrzCampoPonteiro bCastStaticShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastStaticShadow")); }
    BrzCampoPonteiro bCastVolumetricTranslucentShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bCastVolumetricTranslucentShadow")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bClimbable")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bEditableWhenInherited")); }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UGameplayDebuggerRenderingComponent.bEmissiveLightSource"); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bExcludeFromLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bExcludeFromLevelBounds")); }
    BrzCampoPonteiro bExcludeFromLightAttachmentGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bExcludeFromLightAttachmentGroup")); }
    BrzCampoPonteiro bFillCollisionUnderneathForNavmeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bFillCollisionUnderneathForNavmesh")); }
    BrzCampoPonteiro bForceMipStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bForceMipStreaming")); }
    BrzCampoPonteiro bForceOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bForceOverlapEvents")); }
    BrzCampoPonteiro bForcePreventBlockingProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bForcePreventBlockingProjectiles")); }
    BrzCampoPonteiro bGenerateOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bGenerateOverlapEvents")); }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayDebuggerRenderingComponent.bHasCustomNavigableGeometry"); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHasNoStreamableTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bHasNoStreamableTextures")); }
    BrzCampoPonteiro bHasPerInstanceHitProxiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bHasPerInstanceHitProxies")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bHiddenInGame")); }
    BrzCampoPonteiro bHiddenInSceneCaptureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bHiddenInSceneCapture")); }
    BrzCampoPonteiro bHoldoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bHoldout")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIgnoreRadialForceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIgnoreRadialForce")); }
    BrzCampoPonteiro bIgnoreRadialImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIgnoreRadialImpulse")); }
    BrzCampoPonteiro bIgnoreUpdatingOwnersLastRenderTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIgnoreUpdatingOwnersLastRenderTime")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIncludeBoundsRadiusInDrawDistancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIncludeBoundsRadiusInDrawDistances")); }
    BrzCampoPonteiro bIsAbstractBasingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsAbstractBasingComponent")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsActive")); }
    BrzCampoPonteiro bIsActorTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsActorTextureStreamingBuiltData")); }
    BrzCampoPonteiro bIsBeingMovedByEditorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsBeingMovedByEditor")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsInForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsInForeground")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bIsValidTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bIsValidTextureStreamingBuiltData")); }
    BrzCampoPonteiro bLightAsIfStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bLightAsIfStatic")); }
    BrzCampoPonteiro bLightAttachmentsAsGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bLightAttachmentsAsGroup")); }
    BrzCampoPonteiro bMovableUseDynamicDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bMovableUseDynamicDrawDistance")); }
    BrzCampoPonteiro bMultiBodyOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bMultiBodyOverlap")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bNetAddressable")); }
    BrzCampoPonteiro bNeverDistanceCullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bNeverDistanceCull")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOwnerSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bOnlyOwnerSee")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOwnerNoSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bOwnerNoSee")); }
    BrzCampoPonteiro bPlaceholderBool1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPlaceholderBool1")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPreventDamage")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bRayTracingFarFieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bRayTracingFarField")); }
    BrzCampoPonteiro bReceiveMobileCSMShadowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bReceiveMobileCSMShadows")); }
    BrzCampoPonteiro bReceivesDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bReceivesDecals")); }
    BrzCampoPonteiro bRegisterWithMaterialGPUMessageQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bRegisterWithMaterialGPUMessageQueue")); }
    BrzCampoPonteiro bRenderCustomDepthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bRenderCustomDepth")); }
    BrzCampoPonteiro bRenderInDepthPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bRenderInDepthPass")); }
    BrzCampoPonteiro bRenderInMainPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bRenderInMainPass")); }
    BrzCampoPonteiro bReplicatePhysicsToAutonomousProxyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bReplicatePhysicsToAutonomousProxy")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bReplicates")); }
    BrzCampoPonteiro bReturnMaterialOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bReturnMaterialOnMove")); }
    BrzCampoPonteiro bSelectableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bSelectable")); }
    BrzCampoPonteiro bSelfShadowOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bSelfShadowOnly")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bSingleSampleShadowFromStationaryLightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bSingleSampleShadowFromStationaryLights")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStaticWhenNotMoveableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bStaticWhenNotMoveable")); }
    BrzCampoPonteiro bTraceComplexOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bTraceComplexOnMove")); }
    BrzCampoPonteiro bTreatAsBackgroundForOcclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bTreatAsBackgroundForOcclusion")); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUseAbsoluteMaxDrawDisatanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseAbsoluteMaxDrawDisatance")); }
    BrzCampoPonteiro bUseAsOccluderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseAsOccluder")); }
    BrzCampoPonteiro bUseAsUnfoggerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseAsUnfogger")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseEditorCompositingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseEditorCompositing")); }
    BrzCampoPonteiro bUseInternalOctreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseInternalOctree")); }
    BrzCampoPonteiro bUseInternalOctreeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseInternalOctreeOnClient")); }
    BrzCampoPonteiro bUseViewOwnerDepthPriorityGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bUseViewOwnerDepthPriorityGroup")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bVisible")); }
    BrzCampoPonteiro bVisibleInRayTracingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bVisibleInRayTracing")); }
    BrzCampoPonteiro bVisibleInRealTimeSkyCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bVisibleInRealTimeSkyCaptures")); }
    BrzCampoPonteiro bVisibleInReflectionCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bVisibleInReflectionCaptures")); }
    BrzCampoPonteiro bVisibleInSceneCaptureOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bVisibleInSceneCaptureOnly")); }
    BrzCampoPonteiro bWantsEditorEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerRenderingComponent.bWantsEditorEffects")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERRENDERINGCOMPONENT_H
