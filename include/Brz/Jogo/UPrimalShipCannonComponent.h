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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ConfigureFromMount(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalShipCannonComponent.ConfigureFromMount(FShipCannonMount&,FShipCannonMountSettings&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.DestroyComponent(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DestroyComponent(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalShipCannonComponent.DestroyComponent(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetMuzzleComponent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetMuzzleComponent() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonComponent.GetMuzzleComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetMuzzleSocket()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetMuzzleSocket() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonComponent.GetMuzzleSocket()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonComponent.GetMuzzleTransform()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateVisualOffsets(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalShipCannonComponent.UpdateVisualOffsets(float,bool)", a0, a1);
    }

    float& AimInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.AimInterpSpeed"); }
    BrzCampoPonteiro AlwaysLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.AlwaysLoadOnClient")); }
    BrzCampoPonteiro AlwaysLoadOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.AlwaysLoadOnServer")); }
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
    BrzCampoPonteiro CastShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.CastShadow")); }
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
    BrzCampoPonteiro GDFLightPortalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.GDFLightPortal")); }
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
    //  ancorado em `LocalAimDelta` +24, medido na build 25535041
    //  (offset absoluto medido: 0x7D8; confianca alta)
    double& LastFireTimeField() const
    { return BrzCampoAncorado<double>(this, "LocalAimDelta", 24); }
    BrzCampoPonteiro LightingChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LightingChannels")); }
    FieldArray<char> LightmapTypeField() const
    { return { (void*)this, "UPrimalShipCannonComponent.LightmapType" }; }
    BrzCampoPonteiro LightmassSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LightmassSettings")); }
    BrzCampoPonteiro LoadedAmmoMeshCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LoadedAmmoMeshComp")); }
    BrzCampoPonteiro LoadedAmmoVFXCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXComp")); }
    FName& LoadedAmmoVFXDefaultSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXDefaultSocket"); }
    float& LoadedAmmoVFXScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXScale"); }
    FName& LoadedAmmoVFXSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXSocket"); }
    BrzCampoPonteiro LoadedAmmoVFXSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXSystem")); }
    BrzCampoPonteiro LoadedCharacterAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LoadedCharacterAnim")); }
    float& LoadedCharacterAnimPlayRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.LoadedCharacterAnimPlayRate"); }
    BrzCampoPonteiro LoadedCharacterRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LoadedCharacterRelativeLocation")); }
    BrzCampoPonteiro LoadedCharacterRelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.LoadedCharacterRelativeRotation")); }
    FName& LoadedCharacterSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.LoadedCharacterSocket"); }
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
    BrzCampoPonteiro PreLoadCharacterScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.PreLoadCharacterScale")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalShipCannonComponent.PrimaryComponentTick"); }
    int& RayTracingGroupCullingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.RayTracingGroupCullingPriority"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.RayTracingGroupId"); }
    BrzCampoPonteiro ReadySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.ReadySound")); }
    FName& ReadySoundSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.ReadySoundSocket"); }
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
    BrzCampoPonteiro ThrowArmVFXCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.ThrowArmVFXComp")); }
    float& ThrowArmVFXScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowArmVFXScale"); }
    FName& ThrowArmVFXSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.ThrowArmVFXSocket"); }
    float& ThrowArmVFXStartAlphaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowArmVFXStartAlpha"); }
    BrzCampoPonteiro ThrowArmVFXSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.ThrowArmVFXSystem")); }
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
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAffectDistanceFieldLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAffectDistanceFieldLighting")); }
    BrzCampoPonteiro bAffectDynamicIndirectLightingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAffectDynamicIndirectLighting")); }
    BrzCampoPonteiro bAffectIndirectLightingWhileHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAffectIndirectLightingWhileHidden")); }
    BrzCampoPonteiro bAllowCullDistanceVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAllowCullDistanceVolume")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bApplyImpulseOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bApplyImpulseOnDamage")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bAutoActivate")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCastCinematicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastCinematicShadow")); }
    BrzCampoPonteiro bCastContactShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastContactShadow")); }
    BrzCampoPonteiro bCastDistanceFieldIndirectShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastDistanceFieldIndirectShadow")); }
    BrzCampoPonteiro bCastDynamicShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastDynamicShadow")); }
    BrzCampoPonteiro bCastFarShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastFarShadow")); }
    BrzCampoPonteiro bCastHiddenShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastHiddenShadow")); }
    BrzCampoPonteiro bCastInsetShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastInsetShadow")); }
    BrzCampoPonteiro bCastShadowAsTwoSidedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastShadowAsTwoSided")); }
    BrzCampoPonteiro bCastStaticShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastStaticShadow")); }
    BrzCampoPonteiro bCastVolumetricTranslucentShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bCastVolumetricTranslucentShadow")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bClimbable")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDisablePerPixelPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bDisablePerPixelPainting")); }
    BrzCampoPonteiro bDisallowMeshPaintPerInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bDisallowMeshPaintPerInstance")); }
    BrzCampoPonteiro bDisallowNaniteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bDisallowNanite")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEditableWhenInherited")); }
    bool& bEmissiveLightSourceField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bEmissiveLightSource"); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMaterialParameterCachingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEnableMaterialParameterCaching")); }
    BrzCampoPonteiro bEnableTextureColorMeshPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEnableTextureColorMeshPainting")); }
    BrzCampoPonteiro bEnableVertexColorMeshPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEnableVertexColorMeshPainting")); }
    BrzCampoPonteiro bEvaluateWorldPositionOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEvaluateWorldPositionOffset")); }
    BrzCampoPonteiro bEvaluateWorldPositionOffsetInRayTracingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bEvaluateWorldPositionOffsetInRayTracing")); }
    BrzCampoPonteiro bExcludeFromLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bExcludeFromLevelBounds")); }
    BrzCampoPonteiro bExcludeFromLightAttachmentGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bExcludeFromLightAttachmentGroup")); }
    BrzCampoPonteiro bFillCollisionUnderneathForNavmeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bFillCollisionUnderneathForNavmesh")); }
    BrzCampoPonteiro bForceDisableNaniteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForceDisableNanite")); }
    BrzCampoPonteiro bForceDisablePerInstanceDynamicCustomDataOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForceDisablePerInstanceDynamicCustomDataOut")); }
    BrzCampoPonteiro bForceMipStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForceMipStreaming")); }
    BrzCampoPonteiro bForceNaniteForMaskedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForceNaniteForMasked")); }
    BrzCampoPonteiro bForceNavigationObstacleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForceNavigationObstacle")); }
    BrzCampoPonteiro bForceOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForceOverlapEvents")); }
    BrzCampoPonteiro bForcePreventBlockingProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bForcePreventBlockingProjectiles")); }
    BrzCampoPonteiro bGenerateOverlapEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bGenerateOverlapEvents")); }
    unsigned char& bHasCustomNavigableGeometryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipCannonComponent.bHasCustomNavigableGeometry"); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHasNoStreamableTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bHasNoStreamableTextures")); }
    BrzCampoPonteiro bHasPerInstanceHitProxiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bHasPerInstanceHitProxies")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bHiddenInGame")); }
    BrzCampoPonteiro bHiddenInSceneCaptureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bHiddenInSceneCapture")); }
    BrzCampoPonteiro bHoldoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bHoldout")); }
    BrzCampoPonteiro bIgnoreInstanceForTextureStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoreInstanceForTextureStreaming")); }
    BrzCampoPonteiro bIgnoreMaterialGrassOutputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoreMaterialGrassOutput")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIgnoreRadialForceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoreRadialForce")); }
    BrzCampoPonteiro bIgnoreRadialImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoreRadialImpulse")); }
    BrzCampoPonteiro bIgnoreUpdatingOwnersLastRenderTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoreUpdatingOwnersLastRenderTime")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIncludeBoundsRadiusInDrawDistancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIncludeBoundsRadiusInDrawDistances")); }
    BrzCampoPonteiro bIncludeWPOInGrassHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIncludeWPOInGrassHeight")); }
    BrzCampoPonteiro bIsAbstractBasingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsAbstractBasingComponent")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsActive")); }
    BrzCampoPonteiro bIsActorTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsActorTextureStreamingBuiltData")); }
    BrzCampoPonteiro bIsBeingMovedByEditorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsBeingMovedByEditor")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsInForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsInForeground")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bIsValidTextureStreamingBuiltDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bIsValidTextureStreamingBuiltData")); }
    BrzCampoPonteiro bLightAsIfStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bLightAsIfStatic")); }
    BrzCampoPonteiro bLightAttachmentsAsGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bLightAttachmentsAsGroup")); }
    BrzCampoPonteiro bLoadedCharacterAnimLoopingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bLoadedCharacterAnimLooping")); }
    BrzCampoPonteiro bMovableUseDynamicDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bMovableUseDynamicDrawDistance")); }
    BrzCampoPonteiro bMultiBodyOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bMultiBodyOverlap")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bNetAddressable")); }
    BrzCampoPonteiro bNeverDistanceCullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bNeverDistanceCull")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOwnerSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOnlyOwnerSee")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOverrideDistanceFieldSelfShadowBiasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideDistanceFieldSelfShadowBias")); }
    BrzCampoPonteiro bOverrideLightMapResField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideLightMapRes")); }
    BrzCampoPonteiro bOverrideMeshPaintTextureCoordinateIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideMeshPaintTextureCoordinateIndex")); }
    BrzCampoPonteiro bOverrideMeshPaintTextureResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideMeshPaintTextureResolution")); }
    BrzCampoPonteiro bOverrideMinLODField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideMinLOD")); }
    BrzCampoPonteiro bOverrideNavigationExportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideNavigationExport")); }
    BrzCampoPonteiro bOverrideWireframeColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOverrideWireframeColor")); }
    BrzCampoPonteiro bOwnerNoSeeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bOwnerNoSee")); }
    BrzCampoPonteiro bPlaceholderBool1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPlaceholderBool1")); }
    BrzCampoPonteiro bPreLoadDisableLookYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreLoadDisableLookYaw")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreventDamage")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bProjectLandscapeGrassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bProjectLandscapeGrass")); }
    BrzCampoPonteiro bRayTracingFarFieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bRayTracingFarField")); }
    BrzCampoPonteiro bReceiveMobileCSMShadowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReceiveMobileCSMShadows")); }
    BrzCampoPonteiro bReceivesDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReceivesDecals")); }
    BrzCampoPonteiro bRegisterWithMaterialGPUMessageQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bRegisterWithMaterialGPUMessageQueue")); }
    BrzCampoPonteiro bRenderCustomDepthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bRenderCustomDepth")); }
    BrzCampoPonteiro bRenderInDepthPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bRenderInDepthPass")); }
    BrzCampoPonteiro bRenderInMainPassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bRenderInMainPass")); }
    BrzCampoPonteiro bReplicatePhysicsToAutonomousProxyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReplicatePhysicsToAutonomousProxy")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReplicates")); }
    BrzCampoPonteiro bRequiresGunportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bRequiresGunport")); }
    BrzCampoPonteiro bReturnMaterialOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReturnMaterialOnMove")); }
    BrzCampoPonteiro bReverseCullingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bReverseCulling")); }
    BrzCampoPonteiro bSelectableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bSelectable")); }
    BrzCampoPonteiro bSelfShadowOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bSelfShadowOnly")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bSingleSampleShadowFromStationaryLightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bSingleSampleShadowFromStationaryLights")); }
    BrzCampoPonteiro bSortTrianglesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bSortTriangles")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStaticWhenNotMoveableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bStaticWhenNotMoveable")); }
    BrzCampoPonteiro bTraceComplexOnMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bTraceComplexOnMove")); }
    BrzCampoPonteiro bTreatAsBackgroundForOcclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bTreatAsBackgroundForOcclusion")); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUseAbsoluteMaxDrawDisatanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseAbsoluteMaxDrawDisatance")); }
    BrzCampoPonteiro bUseAsOccluderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseAsOccluder")); }
    BrzCampoPonteiro bUseAsUnfoggerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseAsUnfogger")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseDefaultCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseDefaultCollision")); }
    BrzCampoPonteiro bUseDirectionalShadowDistanceLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseDirectionalShadowDistanceLimit")); }
    BrzCampoPonteiro bUseEditorCompositingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseEditorCompositing")); }
    BrzCampoPonteiro bUseInternalOctreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseInternalOctree")); }
    BrzCampoPonteiro bUseInternalOctreeOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseInternalOctreeOnClient")); }
    BrzCampoPonteiro bUsePrimitiveDataForCustomFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUsePrimitiveDataForCustomFlags")); }
    BrzCampoPonteiro bUseSubDivisionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseSubDivisions")); }
    BrzCampoPonteiro bUseViewOwnerDepthPriorityGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bUseViewOwnerDepthPriorityGroup")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bVisible")); }
    BrzCampoPonteiro bVisibleInRayTracingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bVisibleInRayTracing")); }
    BrzCampoPonteiro bVisibleInRealTimeSkyCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bVisibleInRealTimeSkyCaptures")); }
    BrzCampoPonteiro bVisibleInReflectionCapturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bVisibleInReflectionCaptures")); }
    BrzCampoPonteiro bVisibleInSceneCaptureOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bVisibleInSceneCaptureOnly")); }
    BrzCampoPonteiro bWantsEditorEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bWantsEditorEffects")); }
    BrzCampoPonteiro bWorldPositionOffsetWritesVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonComponent.bWorldPositionOffsetWritesVelocity")); }
    BitFieldValue<bool, unsigned __int32> bRequiresGunport()
    { return { (void*)this, "bRequiresGunport" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALSHIPCANNONCOMPONENT_H
