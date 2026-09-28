// ==========================================================================
//  APrimalWeaponBoomerang — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWEAPONBOOMERANG_H
#define BRZ_SDK_JOGO_APRIMALWEAPONBOOMERANG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APawn;
struct FActorTickFunction;
struct FItemNetInfo;
struct FName;
struct FVector2D;
struct UInputComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UNiagaraSystem;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;


struct APrimalWeaponBoomerang
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWeaponBoomerang"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.CanMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanMeleeAttack() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.CanMeleeAttack()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.CanReload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanReload() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.CanReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.OnBoomerangLaunch()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBoomerangLaunch() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.OnBoomerangLaunch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.OnBoomerangReturn()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBoomerangReturn() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.OnBoomerangReturn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.OnEquip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEquip() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.OnEquip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.OnRep_ClientHideBoomerang()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnRep_ClientHideBoomerang() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.OnRep_ClientHideBoomerang()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.UnHideArrow()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UnHideArrow() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.UnHideArrow()");
    }

    UMaterialInterface*& ActorInLockedAreaMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponBoomerang.ActorInLockedAreaMI"); }
    UMaterialInstanceDynamic*& ActorInLockedAreaMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponBoomerang.ActorInLockedAreaMID"); }
    UMaterialInterface*& ActorLockedMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponBoomerang.ActorLockedMI"); }
    UMaterialInstanceDynamic*& ActorLockedMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponBoomerang.ActorLockedMID"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalWeaponBoomerang.ActorUsingQuickAction"); }
    float& AimAssistStrengthWeaponField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AimAssistStrengthWeapon"); }
    float& AimDriftPitchAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AimDriftPitchAngle"); }
    float& AimDriftPitchFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AimDriftPitchFrequency"); }
    float& AimDriftYawAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AimDriftYawAngle"); }
    float& AimDriftYawFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AimDriftYawFrequency"); }
    float& AllowMeleeTimeBeforeAnimationEndField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AllowMeleeTimeBeforeAnimationEnd"); }
    BrzCampoPonteiro AltFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AltFireSound")); }
    BrzCampoPonteiro AltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AltMuzzleFX")); }
    BrzCampoPonteiro AltMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AltMuzzleFX_FPV")); }
    BrzCampoPonteiro AltWeaponAmmoItemTemplatesDecendingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AltWeaponAmmoItemTemplatesDecending")); }
    BrzCampoPonteiro AlternateInventoryEquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AlternateInventoryEquipAnim")); }
    float& AmmoIconsCountField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.AmmoIconsCount"); }
    int& AmmoInClipOnReloadField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.AmmoInClipOnReload"); }
    BrzCampoPonteiro AmmoReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AmmoReloadState")); }
    BrzCampoPonteiro AmmoWheelIconOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AmmoWheelIconOverride")); }
    BrzCampoPonteiro AnimatedCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AnimatedCamera")); }
    FName& ArrowAttachPoint1PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.ArrowAttachPoint1P"); }
    FName& ArrowAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.ArrowAttachPoint3P"); }
    FName& ArrowBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.ArrowBoneName"); }
    UStaticMeshComponent*& ArrowMesh1PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBoomerang.ArrowMesh1P"); }
    UStaticMeshComponent*& ArrowMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBoomerang.ArrowMesh3P"); }
    FName& ArrowOnWeaponAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.ArrowOnWeaponAttachPoint3P"); }
    FItemNetInfo& AssociatedItemNetInfoField() const
    { return *GetNativePointerField<FItemNetInfo*>(this, "APrimalWeaponBoomerang.AssociatedItemNetInfo"); }
    BrzCampoPonteiro AssociatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AssociatedMission")); }
    BrzCampoPonteiro AssociatedPrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AssociatedPrimalItem")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalWeaponBoomerang.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.BlueprintCreatedComponents"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ClientReplicationSendNowThreshold"); }
    unsigned char& ColorizeMuzzleVFXUseColorRegionField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalWeaponBoomerang.ColorizeMuzzleVFXUseColorRegion"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.CreationTime"); }
    int& CurrentAmmoField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.CurrentAmmo"); }
    int& CurrentAmmoInClipField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.CurrentAmmoInClip"); }
    float& CurrentFiringSpreadField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.CurrentFiringSpread"); }
    float& CurrentLockOnTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.CurrentLockOnTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.CustomTimeDilation"); }
    float& DamageFactorForFastArrowsField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.DamageFactorForFastArrows"); }
    float& DamageFactorForSlowArrowsField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.DamageFactorForSlowArrows"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalWeaponBoomerang.DesiredRepGraphBehavior"); }
    float& DurabilityCostToEquipField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.DurabilityCostToEquip"); }
    BrzCampoPonteiro DyePreviewMeshOverrideSKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.DyePreviewMeshOverrideSK")); }
    BrzCampoPonteiro DyePreviewMeshOverrideSMField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.DyePreviewMeshOverrideSM")); }
    float& EndDoMeleeSwingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.EndDoMeleeSwingTime"); }
    BrzCampoPonteiro EquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.EquipAnim")); }
    BrzCampoPonteiro EquipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.EquipNoAmmoClipAnim")); }
    USoundBase*& EquipSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWeaponBoomerang.EquipSound"); }
    float& EquipTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.EquipTime"); }
    FName& FPVAccessoryToggleComponentField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.FPVAccessoryToggleComponent"); }
    float& FPVEnterTargetingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVEnterTargetingInterpSpeed"); }
    float& FPVExitTargetingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVExitTargetingInterpSpeed"); }
    float& FPVImmobilizedInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVImmobilizedInterpSpeed"); }
    FVector& FPVImmobilizedLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.FPVImmobilizedLocationOffset"); }
    FRotator& FPVImmobilizedRotationOffsetField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVImmobilizedRotationOffset"); }
    FVector& FPVInventoryReequipOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.FPVInventoryReequipOffset"); }
    FRotator& FPVLookAtInterpSpeedField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVLookAtInterpSpeed"); }
    FRotator& FPVLookAtInterpSpeed_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVLookAtInterpSpeed_Targeting"); }
    FRotator& FPVLookAtMaximumOffsetField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVLookAtMaximumOffset"); }
    FRotator& FPVLookAtMaximumOffset_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVLookAtMaximumOffset_Targeting"); }
    FRotator& FPVLookAtSpeedBaseField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVLookAtSpeedBase"); }
    FRotator& FPVLookAtSpeedBase_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVLookAtSpeedBase_Targeting"); }
    float& FPVMeleeTraceFXRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMeleeTraceFXRange"); }
    float& FPVMoveOffscreenIdleRestoreIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenIdleRestoreInterval"); }
    float& FPVMoveOffscreenIdleRestoreSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenIdleRestoreSpeed"); }
    float& FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); }
    float& FPVMoveOffscreenWhenTurningMaxOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenWhenTurningMaxOffset"); }
    float& FPVMoveOffscreenWhenTurningMaxViewRotSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); }
    float& FPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); }
    float& FPVMoveOffscreenWhenTurningMinViewRotSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FPVMoveOffscreenWhenTurningMinViewRotSpeed"); }
    FVector& FPVMuzzleLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.FPVMuzzleLocationOffset"); }
    FVector& FPVRelativeLocationField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.FPVRelativeLocation"); }
    FVector& FPVRelativeLocation_TargetingField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.FPVRelativeLocation_Targeting"); }
    FRotator& FPVRelativeRotationField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVRelativeRotation"); }
    FRotator& FPVRelativeRotation_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponBoomerang.FPVRelativeRotation_Targeting"); }
    BrzCampoPonteiro FinishBurstAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.FinishBurstAnim")); }
    BrzCampoPonteiro FireACField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.FireAC")); }
    BrzCampoPonteiro FireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.FireAnim")); }
    BrzCampoPonteiro FireCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.FireCameraShake")); }
    float& FireCameraShakeSpreadScaleExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FireCameraShakeSpreadScaleExponent"); }
    float& FireCameraShakeSpreadScaleExponentLessThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FireCameraShakeSpreadScaleExponentLessThan"); }
    float& FireCameraShakeSpreadScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FireCameraShakeSpreadScaleMultiplier"); }
    float& FireCameraShakeSpreadScaleMultiplierLessThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FireCameraShakeSpreadScaleMultiplierLessThan"); }
    BrzCampoPonteiro FireFinishSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.FireFinishSound")); }
    BrzCampoPonteiro FireForceFeedbackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.FireForceFeedback")); }
    USoundCue*& FireProjectileSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalWeaponBoomerang.FireProjectileSound"); }
    USoundCue*& FireSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalWeaponBoomerang.FireSound"); }
    int& FiredLastNoAmmoShotField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.FiredLastNoAmmoShot"); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalWeaponBoomerang.FluidSimSplashTemplateOverride"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.ForceMaximumReplicationRateUntilTime"); }
    float& GlobalFireCameraShakeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.GlobalFireCameraShakeScale"); }
    float& GlobalFireCameraShakeScaleTargetingField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.GlobalFireCameraShakeScaleTargeting"); }
    BrzCampoPonteiro HarvestAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.HarvestAnim")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.HypoThermiaInsulation"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalWeaponBoomerang.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.InstanceComponents"); }
    BrzCampoPonteiro InstantConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.InstantConfig")); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalWeaponBoomerang.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.InsulationRange"); }
    float& ItemDestructionUnequipWeaponDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ItemDestructionUnequipWeaponDelay"); }
    float& ItemDurabilityToConsumePerMeleeHitField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ItemDurabilityToConsumePerMeleeHit"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastActorForceReplicationTime"); }
    int& LastAmmoToConsumeField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.LastAmmoToConsume"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastExitStasisTime"); }
    double& LastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastFireTime"); }
    double& LastNotifyShotTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastNotifyShotTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalWeaponBoomerang.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastPreReplicationTime"); }
    int& LastSelectedMeleeAnimField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.LastSelectedMeleeAnim"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWeaponBoomerang.LastSelectedWindSourceComponentName"); }
    TArray<void*>& LastSocketPositionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.LastSocketPositions"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.Layers"); }
    FName& LeftHandIkSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.LeftHandIkSkeletalMeshSocketName"); }
    float& LockOnMaxTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.LockOnMaxTraceDistance"); }
    float& LockOnTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.LockOnTime"); }
    BrzCampoPonteiro LockOnTraceBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.LockOnTraceBoxExtent")); }
    float& LockOnYScreenPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.LockOnYScreenPercentage"); }
    BrzCampoPonteiro LockToIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.LockToIcon")); }
    BrzCampoPonteiro MaxPullCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MaxPullCameraShake")); }
    float& MaximumInitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MaximumInitialSpeed"); }
    BrzCampoPonteiro MeleeAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeAnim")); }
    BrzCampoPonteiro MeleeAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeAnimList")); }
    BrzCampoPonteiro MeleeAnimListImpactFXAttachSockets1PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeAnimListImpactFXAttachSockets1P")); }
    BrzCampoPonteiro MeleeAnimListImpactFXAttachSockets3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeAnimListImpactFXAttachSockets3P")); }
    float& MeleeAttackHarvetUsableComponentsRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MeleeAttackHarvetUsableComponentsRadius"); }
    float& MeleeAttackUsableHarvestDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MeleeAttackUsableHarvestDamageMultiplier"); }
    BrzCampoPonteiro MeleeAttackUsableHarvestDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeAttackUsableHarvestDamageType")); }
    BrzCampoPonteiro MeleeCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeCameraShake")); }
    float& MeleeCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MeleeCameraShakeSpeedScale"); }
    BrzCampoPonteiro MeleeCameraShakeTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeCameraShakeTPV")); }
    float& MeleeConsumesStaminaField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MeleeConsumesStamina"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeDamageType")); }
    BrzCampoPonteiro MeleeHitColorizeStructuresUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeHitColorizeStructuresUI")); }
    float& MeleeHitRandomChanceToDestroyItemField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MeleeHitRandomChanceToDestroyItem"); }
    BrzCampoPonteiro MeleeHitTargetCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeHitTargetCameraShake")); }
    BrzCampoPonteiro MeleeHitTargetCameraShakeMobileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeHitTargetCameraShakeMobile")); }
    BrzCampoPonteiro MeleeNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeNoAmmoClipAnim")); }
    TArray<void*>& MeleeSwingSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.MeleeSwingSockets"); }
    BrzCampoPonteiro MeleeWithHitAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MeleeWithHitAnimList")); }
    USkeletalMeshComponent*& Mesh1PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponBoomerang.Mesh1P"); }
    FName& Mesh1PProjectileBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.Mesh1PProjectileBoneName"); }
    BrzCampoPonteiro Mesh3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.Mesh3P")); }
    float& MinItemDurabilityPercentageForShotField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MinItemDurabilityPercentageForShot"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MinNetUpdateFrequency"); }
    float& MinimumInitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MinimumInitialSpeed"); }
    float& MinimumPullingTimeToFireField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.MinimumPullingTimeToFire"); }
    FName& MuzzleAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.MuzzleAttachPoint"); }
    BrzCampoPonteiro MuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MuzzleFX")); }
    BrzCampoPonteiro MuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MuzzleFX_FPV")); }
    BrzCampoPonteiro MuzzlePSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MuzzlePSC")); }
    BrzCampoPonteiro MuzzlePSCSecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MuzzlePSCSecondary")); }
    BrzCampoPonteiro MyPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.MyPawn")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalWeaponBoomerang.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalWeaponBoomerang.NetworkSpatializationParent"); }
    double& NextAllowedMeleeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.NextAllowedMeleeTime"); }
    BrzCampoPonteiro NiagaraAltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NiagaraAltMuzzleFX")); }
    BrzCampoPonteiro NiagaraAltMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NiagaraAltMuzzleFX_FPV")); }
    BrzCampoPonteiro NiagaraMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NiagaraMuzzleFX")); }
    BrzCampoPonteiro NiagaraMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NiagaraMuzzleFX_FPV")); }
    BrzCampoPonteiro NiagaraMuzzlePSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NiagaraMuzzlePSC")); }
    BrzCampoPonteiro NiagaraMuzzlePSCSecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NiagaraMuzzlePSCSecondary")); }
    BrzCampoPonteiro NoAmmoFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.NoAmmoFireAnim")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OnTargetingTeamChanged")); }
    BrzCampoPonteiro OpenInventoryAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OpenInventoryAnim")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.OriginalCreationTime"); }
    BrzCampoPonteiro OutOfAmmoSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OutOfAmmoSound")); }
    FName& OverrideAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.OverrideAttachPoint"); }
    BrzCampoPonteiro OverrideJumpAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideJumpAnim")); }
    BrzCampoPonteiro OverrideLandedAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideLandedAnim")); }
    float& OverrideMuzzleFXAlphaField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.OverrideMuzzleFXAlpha"); }
    BrzCampoPonteiro OverridePawnTPVAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverridePawnTPVAnimBlueprint")); }
    BrzCampoPonteiro OverrideProneInAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideProneInAnim")); }
    BrzCampoPonteiro OverrideProneOutAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideProneOutAnim")); }
    BrzCampoPonteiro OverrideRiderAnimSequenceFromField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideRiderAnimSequenceFrom")); }
    BrzCampoPonteiro OverrideRiderAnimSequenceToField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideRiderAnimSequenceTo")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.OverrideStasisComponentRadius"); }
    BrzCampoPonteiro OverrideTPVShieldAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.OverrideTPVShieldAnimation")); }
    float& OverrideTargetingFOVField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.OverrideTargetingFOV"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalWeaponBoomerang.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalWeaponBoomerang.ParentComponent"); }
    BrzCampoPonteiro PartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.PartialReloadAnim")); }
    float& PassiveDurabilityCostIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.PassiveDurabilityCostInterval"); }
    float& PassiveDurabilityCostPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.PassiveDurabilityCostPerInterval"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.PhysicsReplicationMode")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalWeaponBoomerang.PrimaryActorTick"); }
    BrzCampoPonteiro PrimaryClipIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.PrimaryClipIcon")); }
    int& PrimaryClipIconOffsetField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.PrimaryClipIconOffset"); }
    BrzCampoPonteiro PrimaryIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.PrimaryIcon")); }
    FName& ProjectileAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.ProjectileAttachPoint3P"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ProjectileClass")); }
    UStaticMeshComponent*& ProjectileMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBoomerang.ProjectileMesh3P"); }
    float& ProjectileSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ProjectileSpeed"); }
    float& ProjectileSpreadPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ProjectileSpreadPitch"); }
    float& ProjectileSpreadYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ProjectileSpreadYaw"); }
    BrzCampoPonteiro ProneTPVPartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ProneTPVPartialReloadAnim")); }
    BrzCampoPonteiro ProneTPVReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ProneTPVReloadAnim")); }
    BrzCampoPonteiro ProneTPVTargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ProneTPVTargetingReloadAnim")); }
    BrzCampoPonteiro PullStringAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.PullStringAnim")); }
    float& PullingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.PullingTime"); }
    float& PullingTimeForMaximumSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.PullingTimeForMaximumSpeed"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.RayTracingGroupId"); }
    BrzCampoPonteiro ReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ReloadAnim")); }
    float& ReloadBeforeAnimFinishesTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ReloadBeforeAnimFinishesTime"); }
    BrzCampoPonteiro ReloadCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ReloadCameraShake")); }
    float& ReloadCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ReloadCameraShakeSpeedScale"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalWeaponBoomerang.RemoteRole"); }
    BrzCampoPonteiro RemovalOptionsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.RemovalOptionsIcon")); }
    BrzCampoPonteiro RemoveIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.RemoveIcon")); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ReplicationIntervalMultiplier"); }
    FName& RightHandIkSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.RightHandIkSkeletalMeshSocketName"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalWeaponBoomerang.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalWeaponBoomerang.RootComponent"); }
    FName& ScopeCrosshairColorParameterField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.ScopeCrosshairColorParameter"); }
    BrzCampoPonteiro ScopeCrosshairMIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ScopeCrosshairMI")); }
    BrzCampoPonteiro ScopeCrosshairMIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ScopeCrosshairMID")); }
    float& ScopeCrosshairSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ScopeCrosshairSize"); }
    BrzCampoPonteiro ScopeOverlayMIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ScopeOverlayMI")); }
    BrzCampoPonteiro ScopedBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ScopedBuff")); }
    BrzCampoPonteiro SecondaryClipIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.SecondaryClipIcon")); }
    int& SecondaryClipIconOffsetField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.SecondaryClipIconOffset"); }
    BrzCampoPonteiro SecondaryIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.SecondaryIcon")); }
    float& ServerMaxProjectileAngleErrorField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ServerMaxProjectileAngleError"); }
    float& ServerMaxProjectileOriginErrorField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.ServerMaxProjectileOriginError"); }
    BrzCampoPonteiro ShieldHitAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ShieldHitAnim")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro StartBurstAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.StartBurstAnim")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalWeaponBoomerang.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalWeaponBoomerang.StasisUnRegisteredComponents"); }
    FName& TPVAccessoryToggleComponentField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBoomerang.TPVAccessoryToggleComponent"); }
    float& TPVCameraYawRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TPVCameraYawRange"); }
    BrzCampoPonteiro TPVForcePlayAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.TPVForcePlayAnim")); }
    FVector& TPVMuzzleLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.TPVMuzzleLocationOffset"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWeaponBoomerang.Tags"); }
    float& TargetingDelayTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TargetingDelayTime"); }
    float& TargetingFOVInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TargetingFOVInterpSpeed"); }
    BrzCampoPonteiro TargetingFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.TargetingFireAnim")); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalWeaponBoomerang.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalWeaponBoomerang.TargetingInfoTooltipScale"); }
    BrzCampoPonteiro TargetingNoAmmoFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.TargetingNoAmmoFireAnim")); }
    BrzCampoPonteiro TargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.TargetingReloadAnim")); }
    BrzCampoPonteiro TargetingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.TargetingSound")); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TargetingTooltipCheckRange"); }
    float& TheMeleeSwingInteractionRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TheMeleeSwingInteractionRadius"); }
    float& TheMeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TheMeleeSwingRadius"); }
    float& TheMeleeSwingRadiusScalarWhenRidingField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TheMeleeSwingRadiusScalarWhenRiding"); }
    float& TimeToAutoReloadField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.TimeToAutoReload"); }
    BrzCampoPonteiro ToggleAccessorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.ToggleAccessorySound")); }
    BrzCampoPonteiro UnequipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.UnequipAnim")); }
    BrzCampoPonteiro UnequipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.UnequipNoAmmoClipAnim")); }
    BrzCampoPonteiro UnlockFromIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.UnlockFromIcon")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponBoomerang.UnstasisLastInRangeTime"); }
    BrzCampoPonteiro UntargetingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.UntargetingSound")); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponBoomerang.UpdateOverlapsMethodDuringLevelStreaming"); }
    FVector& VRTargetingAimOriginOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.VRTargetingAimOriginOffset"); }
    FVector& VRTargetingModelOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "APrimalWeaponBoomerang.VRTargetingModelOffset"); }
    BrzCampoPonteiro WeaponAmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.WeaponAmmoItemTemplate")); }
    BrzCampoPonteiro WeaponBreakAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.WeaponBreakAnim")); }
    BrzCampoPonteiro WeaponCameraSettingsOverrideClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.WeaponCameraSettingsOverrideClass")); }
    BrzCampoPonteiro WeaponConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.WeaponConfig")); }
    float& WeaponDurabilityPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.WeaponDurabilityPercent"); }
    float& WeaponDurabilityPercentUpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.WeaponDurabilityPercentUpdateInterval"); }
    BrzCampoPonteiro WeaponMesh3PFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.WeaponMesh3PFireAnim")); }
    BrzCampoPonteiro WeaponMesh3PReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.WeaponMesh3PReloadAnim")); }
    float& WeaponUnequipDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.WeaponUnequipDelay"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowDedicatedThirdPersonWeaponMeshTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowDedicatedThirdPersonWeaponMeshTick")); }
    BrzCampoPonteiro bAllowDropAndPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowDropAndPickup")); }
    BrzCampoPonteiro bAllowDropAndPickupOnReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowDropAndPickupOnReload")); }
    BrzCampoPonteiro bAllowEmptyAmmoClipOnFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowEmptyAmmoClipOnFire")); }
    BrzCampoPonteiro bAllowFullClipReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowFullClipReload")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowRunning")); }
    BrzCampoPonteiro bAllowRunningWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowRunningWhileFiring")); }
    BrzCampoPonteiro bAllowRunningWhileMeleeAttackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowRunningWhileMeleeAttacking")); }
    BrzCampoPonteiro bAllowRunningWhileReloadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowRunningWhileReloading")); }
    BrzCampoPonteiro bAllowSeattingWhileEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowSeattingWhileEquipped")); }
    BrzCampoPonteiro bAllowSettingColorizeRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowSettingColorizeRegions")); }
    BrzCampoPonteiro bAllowSubmergedFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowSubmergedFiring")); }
    BrzCampoPonteiro bAllowTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowTargeting")); }
    bool& bAllowTargetingDuringMeleeSwingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bAllowTargetingDuringMeleeSwing"); }
    BrzCampoPonteiro bAllowTargetingWhileReloadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowTargetingWhileReloading")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowUseHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowUseHarvesting")); }
    bool& bAllowUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bAllowUseOnSeatingStructure"); }
    BrzCampoPonteiro bAllowUseWhileRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAllowUseWhileRidingDino")); }
    BrzCampoPonteiro bAltFireDoesMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAltFireDoesMeleeAttack")); }
    BrzCampoPonteiro bAltFireDoesNotStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAltFireDoesNotStopFire")); }
    BrzCampoPonteiro bAlternateStandingAnimBypassLayeredBlendField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAlternateStandingAnimBypassLayeredBlend")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysPlayTPVPullStringAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAlwaysPlayTPVPullStringAnim")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bApplyAimDriftWhenTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bApplyAimDriftWhenTargeting")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachArrowToWeaponMesh3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAttachArrowToWeaponMesh3P")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAttemptToDyeWithMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAttemptToDyeWithMeleeAttack")); }
    BrzCampoPonteiro bAutoDestroyPlayerWeaponWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAutoDestroyPlayerWeaponWhenSleeping")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoRefireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAutoRefire")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bAutoStasis")); }
    bool& bBPDoClientCheckCanFireField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bBPDoClientCheckCanFire"); }
    BrzCampoPonteiro bBPHandleMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBPHandleMeleeAttack")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBPInventoryItemUsedHandlesDurability")); }
    bool& bBPOverrideAspectRatioField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bBPOverrideAspectRatio"); }
    bool& bBPOverrideFPVMasterPoseComponentField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bBPOverrideFPVMasterPoseComponent"); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseTargetingEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBPUseTargetingEvents")); }
    BrzCampoPonteiro bBPUseWeaponCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBPUseWeaponCanFire")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallBPCustomSpawningEventOnProjectileSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCallBPCustomSpawningEventOnProjectileSpawn")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAccessoryBeSetOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCanAccessoryBeSetOn")); }
    BrzCampoPonteiro bCanAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCanAltFire")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCanBeInCluster")); }
    bool& bCanBeUsedAsEquipmentField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bCanBeUsedAsEquipment"); }
    BrzCampoPonteiro bCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCanFire")); }
    BrzCampoPonteiro bCheckBuffOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCheckBuffOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bClientHideBoomerangField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bClientHideBoomerang")); }
    BrzCampoPonteiro bClientTriggersHandleFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bClientTriggersHandleFiring")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bClimbable")); }
    BrzCampoPonteiro bClipScopeInYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bClipScopeInY")); }
    BrzCampoPonteiro bCloseRadialWheelOnAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCloseRadialWheelOnAltFire")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bCollideWhenPlacing")); }
    BrzCampoPonteiro bColorCrosshairBasedOnTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bColorCrosshairBasedOnTarget")); }
    BrzCampoPonteiro bColorizeMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bColorizeMuzzleFX")); }
    BrzCampoPonteiro bConsiderWeaponScaleOnAttachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bConsiderWeaponScaleOnAttach")); }
    BrzCampoPonteiro bConsumeAmmoItemOnReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bConsumeAmmoItemOnReload")); }
    BrzCampoPonteiro bConsumeAmmoOnUseAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bConsumeAmmoOnUseAmmo")); }
    BrzCampoPonteiro bConsumeZoomInOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bConsumeZoomInOut")); }
    bool& bConsumedDurabilityForThisMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bConsumedDurabilityForThisMeleeHit"); }
    bool& bCutsEnemyGrapplingCableField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bCutsEnemyGrapplingCable"); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDidFireWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDidFireWeapon")); }
    BrzCampoPonteiro bDirectAltFireToSeconaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDirectAltFireToSeconaryAction")); }
    BrzCampoPonteiro bDirectPrimaryFireToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDirectPrimaryFireToAltFire")); }
    BrzCampoPonteiro bDirectPrimaryFireToSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDirectPrimaryFireToSecondaryAction")); }
    BrzCampoPonteiro bDirectTargetingToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDirectTargetingToAltFire")); }
    BrzCampoPonteiro bDirectTargetingToPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDirectTargetingToPrimaryFire")); }
    BrzCampoPonteiro bDirectTargetingToSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDirectTargetingToSecondaryAction")); }
    BrzCampoPonteiro bDisableGamepadAimAssistField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDisableGamepadAimAssist")); }
    BrzCampoPonteiro bDisablePullingOnCrouchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDisablePullingOnCrouch")); }
    BrzCampoPonteiro bDisablePullingOnProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDisablePullingOnProne")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDisableRigidBodyAnimNodes")); }
    bool& bDisableShooterOnElectricStormField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bDisableShooterOnElectricStorm"); }
    bool& bDisableWeaponCrosshairField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bDisableWeaponCrosshair"); }
    BrzCampoPonteiro bDoMeleeSwingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDoMeleeSwing")); }
    BrzCampoPonteiro bDoesntUsePrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDoesntUsePrimalItem")); }
    BrzCampoPonteiro bDontActuallyConsumeItemAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDontActuallyConsumeItemAmmo")); }
    BrzCampoPonteiro bDontDeactivateWeaponInstigatorBuffsOnUnequipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDontDeactivateWeaponInstigatorBuffsOnUnequip")); }
    BrzCampoPonteiro bDontRequireIdleForReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDontRequireIdleForReload")); }
    BrzCampoPonteiro bDontUseNativeTickMeleeSwingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDontUseNativeTickMeleeSwing")); }
    BrzCampoPonteiro bDurabilityUseWeaponMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bDurabilityUseWeaponMaterial")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bExchangedRoles")); }
    BrzCampoPonteiro bFPVMoveOffscreenWhenTurningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bFPVMoveOffscreenWhenTurning")); }
    BrzCampoPonteiro bFPVNonDefaultWeaponBonesHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bFPVNonDefaultWeaponBonesHidden")); }
    BrzCampoPonteiro bFPVScopedTargetingHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bFPVScopedTargetingHidesNonWeaponHUD")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bFindCameraComponentWhenViewTarget")); }
    bool& bFoceSimulatedTickField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bFoceSimulatedTick"); }
    bool& bForceAllowMountedWeaponryField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceAllowMountedWeaponry"); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowPassengerTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceAllowPassengerTPV")); }
    BrzCampoPonteiro bForceAlwaysPlayEquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceAlwaysPlayEquipAnim")); }
    BrzCampoPonteiro bForceFirstPersonWhileTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceFirstPersonWhileTargeting")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceKeepEquippedWhileInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceKeepEquippedWhileInInventory")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOwnerControllerHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceOwnerControllerHighQualityViewerReplication")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForcePreventUseWhileRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForcePreventUseWhileRidingDino")); }
    BrzCampoPonteiro bForceReloadOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceReloadOnDestruction")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceServerCheckPullingTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceServerCheckPullingTime")); }
    BrzCampoPonteiro bForceShowCrosshairWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceShowCrosshairWhileFiring")); }
    bool& bForceTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceTPVCameraOffset"); }
    bool& bForceTPV_EquippedWhileRidingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceTPV_EquippedWhileRiding"); }
    BrzCampoPonteiro bForceTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceTargeting")); }
    BrzCampoPonteiro bForceTargetingOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForceTargetingOnDino")); }
    bool& bForceTickWithNoControllerField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceTickWithNoController"); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGamepadLeftIsPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bGamepadLeftIsPrimaryFire")); }
    BrzCampoPonteiro bGamepadRightIsSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bGamepadRightIsSecondaryAction")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasLockedTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHasLockedTarget")); }
    BrzCampoPonteiro bHasPlayedReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHasPlayedReload")); }
    BrzCampoPonteiro bHasToggleableAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHasToggleableAccessory")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHidden")); }
    BrzCampoPonteiro bHideDamageSourceFromLogsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHideDamageSourceFromLogs")); }
    BrzCampoPonteiro bHideFPVMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHideFPVMesh")); }
    BrzCampoPonteiro bHideFPVMeshWhileTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHideFPVMeshWhileTargeting")); }
    BrzCampoPonteiro bHideLeftArmFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHideLeftArmFPV")); }
    BrzCampoPonteiro bHideOriginalArrowBone1PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHideOriginalArrowBone1P")); }
    BrzCampoPonteiro bHideWeaponOnLaunchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bHideWeaponOnLaunch")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnorePlayerReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIgnorePlayerReload")); }
    BrzCampoPonteiro bIgnoreReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIgnoreReloadState")); }
    BrzCampoPonteiro bIgnoreTargetingFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIgnoreTargetingFOV")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImpactAttachFXUsesPawnMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bImpactAttachFXUsesPawnMesh")); }
    BrzCampoPonteiro bInstantAccuracyResetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bInstantAccuracyReset")); }
    BrzCampoPonteiro bIsAccessoryActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsAccessoryActive")); }
    BrzCampoPonteiro bIsChainsawWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsChainsawWeapon")); }
    BrzCampoPonteiro bIsDefaultWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsDefaultWeapon")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsInDestruction")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsInvincible")); }
    BrzCampoPonteiro bIsLastAmmoInClipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsLastAmmoInClip")); }
    BrzCampoPonteiro bIsLastArrowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsLastArrow")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsMapActor")); }
    BrzCampoPonteiro bIsMeleeWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsMeleeWeapon")); }
    BrzCampoPonteiro bIsPlayingPullStringAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsPlayingPullStringAnim")); }
    BrzCampoPonteiro bIsPullingStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsPullingString")); }
    BrzCampoPonteiro bIsSpyglassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsSpyglass")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bIsWeaponPingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsWeaponPing")); }
    BrzCampoPonteiro bIsWeaponTrackerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bIsWeaponTracker")); }
    bool& bLastMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bLastMeleeHit"); }
    bool& bLastMeleeHitStationaryField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bLastMeleeHitStationary"); }
    BrzCampoPonteiro bListenToAppliedForecesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bListenToAppliedForeces")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bLoopedFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bLoopedFireAnim")); }
    BrzCampoPonteiro bLoopedFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bLoopedFireSound")); }
    BrzCampoPonteiro bLoopedMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bLoopedMuzzleFX")); }
    BrzCampoPonteiro bLoopingSimulateWeaponFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bLoopingSimulateWeaponFire")); }
    BrzCampoPonteiro bMeleeAttackHarvetUsableComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bMeleeAttackHarvetUsableComponents")); }
    BrzCampoPonteiro bMeleeHitCaptureDermisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bMeleeHitCaptureDermis")); }
    BrzCampoPonteiro bMeleeHitColorizesStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bMeleeHitColorizesStructures")); }
    BrzCampoPonteiro bMeleeHitUseMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bMeleeHitUseMuzzleFX")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetLoopedSimulatingWeaponFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetLoopedSimulatingWeaponFire")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNewPullStringEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bNewPullStringEvent")); }
    BrzCampoPonteiro bOnlyAllowUseWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOnlyAllowUseWhenRidingDino")); }
    BrzCampoPonteiro bOnlyDamagePawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOnlyDamagePawns")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOnlyInitialReplication")); }
    bool& bOnlyPassiveDurabilityWhenAccessoryActiveField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bOnlyPassiveDurabilityWhenAccessoryActive"); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseFirstMeleeAnimWithShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOnlyUseFirstMeleeAnimWithShield")); }
    bool& bOnlyUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bOnlyUseOnSeatingStructure"); }
    BrzCampoPonteiro bOverrideAimOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOverrideAimOffsets")); }
    BrzCampoPonteiro bOverrideStandingAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bOverrideStandingAnim")); }
    BrzCampoPonteiro bPendingPullStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPendingPullString")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarriedZoomInOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventCarriedZoomInOut")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventCrosshairDrawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventCrosshairDraw")); }
    BrzCampoPonteiro bPreventEquippingUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventEquippingUnderwater")); }
    BrzCampoPonteiro bPreventItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventItemColors")); }
    BrzCampoPonteiro bPreventLeftShoulderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventLeftShoulder")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventMeleeWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventMeleeWhileFiring")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventOnDedicatedServer")); }
    bool& bPreventOpeningInventoryField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bPreventOpeningInventory"); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventRightShoulderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventRightShoulder")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPreventSaving")); }
    BrzCampoPonteiro bPrimaryFireDoesMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bPrimaryFireDoesMeleeAttack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReloadAnimForceTickPoseOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReloadAnimForceTickPoseOnServer")); }
    BrzCampoPonteiro bReloadOnEmptyClipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReloadOnEmptyClip")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReplayRewindable")); }
    bool& bReplicateCurrentAmmoInClipToNonOwnersField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bReplicateCurrentAmmoInClipToNonOwners"); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bReplicates")); }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bRestrictTPVCameraYaw"); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bSavedWhenStasised")); }
    BrzCampoPonteiro bScopeFullscreenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bScopeFullscreen")); }
    BrzCampoPonteiro bSecondaryActionStopsFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bSecondaryActionStopsFire")); }
    BrzCampoPonteiro bServerFireProjectileForceUpdateAimActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bServerFireProjectileForceUpdateAimActors")); }
    BrzCampoPonteiro bServerIgnoreCheckCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bServerIgnoreCheckCanFire")); }
    BrzCampoPonteiro bSpawnProjectileOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bSpawnProjectileOnClient")); }
    BrzCampoPonteiro bSpawnedByMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bSpawnedByMission")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bStasised")); }
    BrzCampoPonteiro bSupportsOffhandShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bSupportsOffhandShield")); }
    BrzCampoPonteiro bTargetUnTargetWithClickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bTargetUnTargetWithClick")); }
    BrzCampoPonteiro bTargetingForceOwnerControllerHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bTargetingForceOwnerControllerHighQualityViewerReplication")); }
    BrzCampoPonteiro bTargetingForceTraceFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bTargetingForceTraceFloatingHUD")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bTearOff")); }
    BrzCampoPonteiro bToggleAccessoryUseAltFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bToggleAccessoryUseAltFireSound")); }
    BrzCampoPonteiro bToggleAccessoryUseAltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bToggleAccessoryUseAltMuzzleFX")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseAbsoluteScaleOnAttachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAbsoluteScaleOnAttach")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAlternateAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAlternateAimOffset")); }
    BrzCampoPonteiro bUseAmmoOnFireProjectileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAmmoOnFireProjectile")); }
    BrzCampoPonteiro bUseAmmoOnFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAmmoOnFiring")); }
    BrzCampoPonteiro bUseAmmoReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAmmoReloadState")); }
    BrzCampoPonteiro bUseAmmoServerOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAmmoServerOnly")); }
    BrzCampoPonteiro bUseAmmoSupportsAdjustedAmmoPerShotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAmmoSupportsAdjustedAmmoPerShot")); }
    BrzCampoPonteiro bUseArrowMesh1PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseArrowMesh1P")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseAutoReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseAutoReload")); }
    bool& bUseBPAdjustAmmoPerShotField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBPAdjustAmmoPerShot"); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAnimNotifyCustomState_TickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPAnimNotifyCustomState_Tick")); }
    BrzCampoPonteiro bUseBPCanEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCanEquip")); }
    BrzCampoPonteiro bUseBPCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCanFire")); }
    BrzCampoPonteiro bUseBPCanMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCanMeleeAttack")); }
    BrzCampoPonteiro bUseBPCanStartFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCanStartFire")); }
    BrzCampoPonteiro bUseBPCanToggleAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCanToggleAccessory")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPForceFirstPerson")); }
    BrzCampoPonteiro bUseBPForceTPVTargetingAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPForceTPVTargetingAnimation")); }
    BrzCampoPonteiro bUseBPGetActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetActorForTargetingTooltip")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetExtraPreviewMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetExtraPreviewMeshes")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetSelectedMeleeAttackAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetSelectedMeleeAttackAnim")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPGetTPVCameraOffset")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPModifyFOV")); }
    BrzCampoPonteiro bUseBPOnBurstFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOnBurstFinished")); }
    BrzCampoPonteiro bUseBPOnBurstStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOnBurstStarted")); }
    BrzCampoPonteiro bUseBPOnMaxDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOnMaxDurability")); }
    BrzCampoPonteiro bUseBPOnScopedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOnScoped")); }
    BrzCampoPonteiro bUseBPOnWeaponAnimPlayedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOnWeaponAnimPlayedNotify")); }
    BrzCampoPonteiro bUseBPOverrideAimDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverrideAimDirection")); }
    BrzCampoPonteiro bUseBPOverrideDamageImpactLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverrideDamageImpactLocation")); }
    BrzCampoPonteiro bUseBPOverrideMeleeSwingSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverrideMeleeSwingSockets")); }
    BrzCampoPonteiro bUseBPOverridePerShotDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverridePerShotDurability")); }
    BrzCampoPonteiro bUseBPOverrideRootRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverrideRootRotationOffset")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostSpawnMuzzleEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPPostSpawnMuzzleEffect")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventSwitchingWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPPreventSwitchingWeapon")); }
    BrzCampoPonteiro bUseBPRemainEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPRemainEquipped")); }
    bool& bUseBPSelectProjectileToFireField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBPSelectProjectileToFire"); }
    BrzCampoPonteiro bUseBPShouldDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPShouldDealDamage")); }
    bool& bUseBPSpawnMeleeEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBPSpawnMeleeEffects"); }
    BrzCampoPonteiro bUseBPStartEquippedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPStartEquippedNotify")); }
    BrzCampoPonteiro bUseBPUpdateFirstPersonMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPUpdateFirstPersonMeshes")); }
    BrzCampoPonteiro bUseBPWeaponDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBPWeaponDealDamage")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBurstFinishAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBurstFinishAnim")); }
    BrzCampoPonteiro bUseBurstStartAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseBurstStartAnim")); }
    BrzCampoPonteiro bUseCanAccessoryBeSetOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseCanAccessoryBeSetOn")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCharacterMeleeDamageModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseCharacterMeleeDamageModifier")); }
    BrzCampoPonteiro bUseCustomSeatedAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseCustomSeatedAnim")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseEquipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseEquipNoAmmoClipAnim")); }
    bool& bUseFireCameraShakeScaleField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseFireCameraShakeScale"); }
    BrzCampoPonteiro bUseHandIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseHandIk")); }
    BrzCampoPonteiro bUseHideProjectileAnimEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseHideProjectileAnimEvents")); }
    BrzCampoPonteiro bUseLockOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseLockOn")); }
    BrzCampoPonteiro bUseMeleeNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseMeleeNoAmmoClipAnim")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUsePartialReloadAnim")); }
    BrzCampoPonteiro bUsePostUpdateTickForFPVParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUsePostUpdateTickForFPVParticles")); }
    BrzCampoPonteiro bUseScopeOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseScopeOverlay")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTPVWeaponMeshMeleeSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseTPVWeaponMeshMeleeSockets")); }
    BrzCampoPonteiro bUseTargetingAimDownSightsExposureAdjustmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseTargetingAimDownSightsExposureAdjustment")); }
    BrzCampoPonteiro bUseTargetingFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseTargetingFireAnim")); }
    BrzCampoPonteiro bUseTargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseTargetingReloadAnim")); }
    BrzCampoPonteiro bUseUnequipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bUseUnequipNoAmmoClipAnim")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWantsToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bWantsToAltFire")); }
    BrzCampoPonteiro bWantsToAutoReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bWantsToAutoReload")); }
    BrzCampoPonteiro bWantsToFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBoomerang.bWantsToFire")); }
    bool& bWasLastFireFromGamePadField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bWasLastFireFromGamePad"); }
    float& chanceToBreakField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.chanceToBreak"); }
    BitFieldValue<bool, unsigned __int32> bClientHideBoomerang()
    { return { (void*)this, "bClientHideBoomerang" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONBOOMERANG_H
