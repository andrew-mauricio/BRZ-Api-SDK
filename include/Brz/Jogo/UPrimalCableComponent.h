// ==========================================================================
//  UPrimalCableComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALCABLECOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALCABLECOMPONENT_H

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


struct UPrimalCableComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalCableComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.CalcBounds(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcBounds(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCableComponent.CalcBounds(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.GetCableMidPoint()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCableMidPoint() const
    {
        return NativeCall<void*>(this, "UPrimalCableComponent.GetCableMidPoint()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.GetCableParticle(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCableParticle(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCableComponent.GetCableParticle(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.GetEndPositions(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEndPositions(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalCableComponent.GetEndPositions(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.OnRegister()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRegister() const
    {
        return NativeCall<void*>(this, "UPrimalCableComponent.OnRegister()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.SolveConstraints()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SolveConstraints() const
    {
        return NativeCall<void*>(this, "UPrimalCableComponent.SolveConstraints()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.SpreadOutParticles(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpreadOutParticles(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalCableComponent.SpreadOutParticles(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UPrimalCableComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.UpdateProceduralMesh()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateProceduralMesh() const
    {
        return NativeCall<void*>(this, "UPrimalCableComponent.UpdateProceduralMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCableComponent.UpdateProceduralMesh(TArray<UE::Math::TVector<float>,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateProceduralMesh(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCableComponent.UpdateProceduralMesh(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>>&)", a0);
    }

    BrzCampoPonteiro AlwaysLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.AlwaysLoadOnClient")); }
    BrzCampoPonteiro AlwaysLoadOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.AlwaysLoadOnServer")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.AssetUserData"); }
    BrzCampoPonteiro AsyncBodySetupQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.AsyncBodySetupQueue")); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.AttachChildren"); }
    BrzCampoPonteiro AttachEndToField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.AttachEndTo")); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UPrimalCableComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCableComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.AttachmentChangedIncrementer"); }
    BrzCampoPonteiro BodyInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.BodyInstance")); }
    float& BoundsScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.BoundsScale"); }
    float& CableLengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CableLength"); }
    float& CableWidthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CableWidth"); }
    float& CachedMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CachedMaxDrawDistance"); }
    unsigned char& CanCharacterStepUpOnField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.CanCharacterStepUpOn"); }
    BrzCampoPonteiro CastShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.CastShadow")); }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.ClientAttachedChildren"); }
    BrzCampoPonteiro CollisionConvexElemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.CollisionConvexElems")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.CustomData"); }
    int& CustomDepthStencilValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.CustomDepthStencilValue"); }
    BrzCampoPonteiro CustomDepthStencilWriteMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.CustomDepthStencilWriteMask")); }
    BrzCampoPonteiro CustomPrimitiveDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.CustomPrimitiveData")); }
    BrzCampoPonteiro CustomPrimitiveDataInternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.CustomPrimitiveDataInternal")); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCableComponent.CustomTag"); }
    BrzCampoPonteiro DamageFXActorToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.DamageFXActorToSpawn")); }
    unsigned char& DepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.DepthPriorityGroup"); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.DetailMode"); }
    BrzCampoPonteiro EndLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.EndLocation")); }
    unsigned char& ExcludeFromHLODLevelsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.ExcludeFromHLODLevels"); }
    BrzCampoPonteiro FirstPersonPrimitiveTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.FirstPersonPrimitiveType")); }
    BrzCampoPonteiro HLODBatchingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.HLODBatchingPolicy")); }
    unsigned char& IndirectLightingCacheQualityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.IndirectLightingCacheQuality"); }
    int& InternalOctreeMaskField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.InternalOctreeMask"); }
    float& LDMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.LDMaxDrawDistance"); }
    TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimalCableComponent.LODParentPrimitive"); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UPrimalCableComponent.LightmapType" }; }
    BrzCampoPonteiro LocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.LocalBounds")); }
    float& MaxParticleSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.MaxParticleSpeed"); }
    float& MinDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.MinDrawDistance"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.Mobility"); }
    TArray<void*>& MoveIgnoreActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.MoveIgnoreActors"); }
    TArray<void*>& MoveIgnoreComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.MoveIgnoreComponents"); }
    int& NumSegmentsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.NumSegments"); }
    int& NumSidesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.NumSides"); }
    int& ObjectLayerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.ObjectLayer"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentBeginOverlap")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnComponentEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentEndOverlap")); }
    BrzCampoPonteiro OnComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentHit")); }
    BrzCampoPonteiro OnComponentPhysicsStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentPhysicsStateChanged")); }
    BrzCampoPonteiro OnComponentSleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentSleep")); }
    BrzCampoPonteiro OnComponentWakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnComponentWake")); }
    BrzCampoPonteiro OnPrimalComponentPhysicsStatePreChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.OnPrimalComponentPhysicsStatePreChange")); }
    TObjectPtr<UMaterialInterface>& OverlayMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "UPrimalCableComponent.OverlayMaterial"); }
    float& OverlayMaterialMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.OverlayMaterialMaxDrawDistance"); }
    TArray<void*>& OverrideMaterialsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCableComponent.OverrideMaterials"); }
    float& OverrideStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.OverrideStepHeight"); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalCableComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.PhysicsVolumeChangedDelegate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalCableComponent.PrimaryComponentTick"); }
    BrzCampoPonteiro ProcMeshBodySetupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.ProcMeshBodySetup")); }
    BrzCampoPonteiro ProcMeshSectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.ProcMeshSections")); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.RayTracingGroupId"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.RelativeScale3D")); }
    BrzCampoPonteiro RuntimeVirtualTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.RuntimeVirtualTextures")); }
    BrzCampoPonteiro ShadowCacheInvalidationBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.ShadowCacheInvalidationBehavior")); }
    int& SolverIterationsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.SolverIterations"); }
    float& SubstepTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.SubstepTime"); }
    float& TileMaterialField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.TileMaterial"); }
    float& TranslucencySortDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.TranslucencySortDistanceOffset"); }
    int& TranslucencySortPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.TranslucencySortPriority"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.UCSSerializationIndex"); }
    unsigned char& ViewOwnerDepthPriorityGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.ViewOwnerDepthPriorityGroup"); }
    char& VirtualTextureCullMipsField() const
    { return *GetNativePointerField<char*>(this, "UPrimalCableComponent.VirtualTextureCullMips"); }
    signed char& VirtualTextureLodBiasField() const
    { return *GetNativePointerField<signed char*>(this, "UPrimalCableComponent.VirtualTextureLodBias"); }
    signed char& VirtualTextureMinCoverageField() const
    { return *GetNativePointerField<signed char*>(this, "UPrimalCableComponent.VirtualTextureMinCoverage"); }
    FieldArray<char> VirtualTextureRenderPassTypeField() const
    { return { (void*)this, "UPrimalCableComponent.VirtualTextureRenderPassType" }; }
    int& VisibilityIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.VisibilityId"); }
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAffectDistanceFieldLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAffectDistanceFieldLighting")); }
    BrzCampoPonteiro bAffectDynamicIndirectLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAffectDynamicIndirectLighting")); }
    BrzCampoPonteiro bAffectIndirectLightingWhileHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAffectIndirectLightingWhileHidden")); }
    BrzCampoPonteiro bAllowCullDistanceVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAllowCullDistanceVolume")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bApplyImpulseOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bApplyImpulseOnDamage")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bAutoActivate")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCastCinematicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastCinematicShadow")); }
    BrzCampoPonteiro bCastContactShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastContactShadow")); }
    BrzCampoPonteiro bCastDynamicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastDynamicShadow")); }
    BrzCampoPonteiro bCastFarShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastFarShadow")); }
    BrzCampoPonteiro bCastHiddenShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastHiddenShadow")); }
    BrzCampoPonteiro bCastInsetShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastInsetShadow")); }
    BrzCampoPonteiro bCastShadowAsTwoSidedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastShadowAsTwoSided")); }
    BrzCampoPonteiro bCastStaticShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastStaticShadow")); }
    BrzCampoPonteiro bCastVolumetricTranslucentShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bCastVolumetricTranslucentShadow")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bClimbable")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDisablePerPixelPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bDisablePerPixelPainting")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bEditableWhenInherited")); }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalCableComponent.bEmissiveLightSource"); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMaterialParameterCachingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bEnableMaterialParameterCaching")); }
    BrzCampoPonteiro bEndPointIsInWorldSpaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bEndPointIsInWorldSpace")); }
    BrzCampoPonteiro bExcludeFromLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bExcludeFromLevelBounds")); }
    BrzCampoPonteiro bExcludeFromLightAttachmentGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bExcludeFromLightAttachmentGroup")); }
    BrzCampoPonteiro bFillCollisionUnderneathForNavmeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bFillCollisionUnderneathForNavmesh")); }
    BrzCampoPonteiro bForceMipStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bForceMipStreaming")); }
    BrzCampoPonteiro bForceOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bForceOverlapEvents")); }
    BrzCampoPonteiro bForcePreventBlockingProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bForcePreventBlockingProjectiles")); }
    BrzCampoPonteiro bGenerateOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bGenerateOverlapEvents")); }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCableComponent.bHasCustomNavigableGeometry"); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHasNoStreamableTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bHasNoStreamableTextures")); }
    BrzCampoPonteiro bHasPerInstanceHitProxiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bHasPerInstanceHitProxies")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bHiddenInGame")); }
    BrzCampoPonteiro bHiddenInSceneCaptureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bHiddenInSceneCapture")); }
    BrzCampoPonteiro bHoldoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bHoldout")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIgnoreRadialForceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIgnoreRadialForce")); }
    BrzCampoPonteiro bIgnoreRadialImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIgnoreRadialImpulse")); }
    BrzCampoPonteiro bIgnoreUpdatingOwnersLastRenderTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIgnoreUpdatingOwnersLastRenderTime")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIncludeBoundsRadiusInDrawDistancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIncludeBoundsRadiusInDrawDistances")); }
    BrzCampoPonteiro bIsAbstractBasingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsAbstractBasingComponent")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsActive")); }
    BrzCampoPonteiro bIsActorTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsActorTextureStreamingBuiltData")); }
    BrzCampoPonteiro bIsBeingMovedByEditorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsBeingMovedByEditor")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsInForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsInForeground")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bIsValidTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bIsValidTextureStreamingBuiltData")); }
    BrzCampoPonteiro bLightAsIfStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bLightAsIfStatic")); }
    BrzCampoPonteiro bLightAttachmentsAsGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bLightAttachmentsAsGroup")); }
    BrzCampoPonteiro bMovableUseDynamicDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bMovableUseDynamicDrawDistance")); }
    BrzCampoPonteiro bMultiBodyOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bMultiBodyOverlap")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bNetAddressable")); }
    BrzCampoPonteiro bNeverDistanceCullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bNeverDistanceCull")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOwnerSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bOnlyOwnerSee")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOwnerNoSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bOwnerNoSee")); }
    BrzCampoPonteiro bPlaceholderBool1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPlaceholderBool1")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPreventDamage")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bRayTracingFarFieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bRayTracingFarField")); }
    BrzCampoPonteiro bReceiveMobileCSMShadowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bReceiveMobileCSMShadows")); }
    BrzCampoPonteiro bReceivesDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bReceivesDecals")); }
    BrzCampoPonteiro bRegisterWithMaterialGPUMessageQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bRegisterWithMaterialGPUMessageQueue")); }
    BrzCampoPonteiro bRenderCustomDepthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bRenderCustomDepth")); }
    BrzCampoPonteiro bRenderFirstHalfOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bRenderFirstHalfOnly")); }
    BrzCampoPonteiro bRenderInDepthPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bRenderInDepthPass")); }
    BrzCampoPonteiro bRenderInMainPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bRenderInMainPass")); }
    BrzCampoPonteiro bReplicatePhysicsToAutonomousProxyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bReplicatePhysicsToAutonomousProxy")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bReplicates")); }
    BrzCampoPonteiro bReturnMaterialOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bReturnMaterialOnMove")); }
    BrzCampoPonteiro bSelectableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bSelectable")); }
    BrzCampoPonteiro bSelfShadowOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bSelfShadowOnly")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bSingleSampleShadowFromStationaryLightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bSingleSampleShadowFromStationaryLights")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStaticWhenNotMoveableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bStaticWhenNotMoveable")); }
    BrzCampoPonteiro bTraceComplexOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bTraceComplexOnMove")); }
    BrzCampoPonteiro bTreatAsBackgroundForOcclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bTreatAsBackgroundForOcclusion")); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUseAbsoluteMaxDrawDisatanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseAbsoluteMaxDrawDisatance")); }
    BrzCampoPonteiro bUseAsOccluderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseAsOccluder")); }
    BrzCampoPonteiro bUseAsUnfoggerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseAsUnfogger")); }
    BrzCampoPonteiro bUseAsyncCookingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseAsyncCooking")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseComplexAsSimpleCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseComplexAsSimpleCollision")); }
    BrzCampoPonteiro bUseEditorCompositingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseEditorCompositing")); }
    BrzCampoPonteiro bUseInternalOctreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseInternalOctree")); }
    BrzCampoPonteiro bUseInternalOctreeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseInternalOctreeOnClient")); }
    BrzCampoPonteiro bUseViewOwnerDepthPriorityGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bUseViewOwnerDepthPriorityGroup")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bVisible")); }
    BrzCampoPonteiro bVisibleInRayTracingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bVisibleInRayTracing")); }
    BrzCampoPonteiro bVisibleInRealTimeSkyCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bVisibleInRealTimeSkyCaptures")); }
    BrzCampoPonteiro bVisibleInReflectionCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bVisibleInReflectionCaptures")); }
    BrzCampoPonteiro bVisibleInSceneCaptureOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bVisibleInSceneCaptureOnly")); }
    BrzCampoPonteiro bWantsEditorEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCableComponent.bWantsEditorEffects")); }
    BitFieldValue<bool, unsigned __int32> bEndPointIsInWorldSpace()
    { return { (void*)this, "bEndPointIsInWorldSpace" }; }
    BitFieldValue<bool, unsigned __int32> bRenderFirstHalfOnly()
    { return { (void*)this, "bRenderFirstHalfOnly" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALCABLECOMPONENT_H
