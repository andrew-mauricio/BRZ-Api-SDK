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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=27]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    BrzPonteiro OnEquip() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.OnEquip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.OnRep_ClientHideBoomerang()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnRep_ClientHideBoomerang() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBoomerang.OnRep_ClientHideBoomerang()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBoomerang.UnHideArrow()
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDedicatedThirdPersonWeaponMeshTick()
    { return { (void*)this, "bAllowDedicatedThirdPersonWeaponMeshTick" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDropAndPickup()
    { return { (void*)this, "bAllowDropAndPickup" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDropAndPickupOnReload()
    { return { (void*)this, "bAllowDropAndPickupOnReload" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEmptyAmmoClipOnFire()
    { return { (void*)this, "bAllowEmptyAmmoClipOnFire" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFullClipReload()
    { return { (void*)this, "bAllowFullClipReload" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunning()
    { return { (void*)this, "bAllowRunning" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileFiring()
    { return { (void*)this, "bAllowRunningWhileFiring" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileMeleeAttacking()
    { return { (void*)this, "bAllowRunningWhileMeleeAttacking" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileReloading()
    { return { (void*)this, "bAllowRunningWhileReloading" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSeattingWhileEquipped()
    { return { (void*)this, "bAllowSeattingWhileEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSettingColorizeRegions()
    { return { (void*)this, "bAllowSettingColorizeRegions" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSubmergedFiring()
    { return { (void*)this, "bAllowSubmergedFiring" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargeting()
    { return { (void*)this, "bAllowTargeting" }; }
    bool& bAllowTargetingDuringMeleeSwingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bAllowTargetingDuringMeleeSwing"); }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingWhileReloading()
    { return { (void*)this, "bAllowTargetingWhileReloading" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseHarvesting()
    { return { (void*)this, "bAllowUseHarvesting" }; }
    bool& bAllowUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bAllowUseOnSeatingStructure"); }
    BitFieldValue<bool, unsigned __int32> bAllowUseWhileRidingDino()
    { return { (void*)this, "bAllowUseWhileRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bAltFireDoesMeleeAttack()
    { return { (void*)this, "bAltFireDoesMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bAltFireDoesNotStopFire()
    { return { (void*)this, "bAltFireDoesNotStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bAlternateStandingAnimBypassLayeredBlend()
    { return { (void*)this, "bAlternateStandingAnimBypassLayeredBlend" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysPlayTPVPullStringAnim()
    { return { (void*)this, "bAlwaysPlayTPVPullStringAnim" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bApplyAimDriftWhenTargeting()
    { return { (void*)this, "bApplyAimDriftWhenTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachArrowToWeaponMesh3P()
    { return { (void*)this, "bAttachArrowToWeaponMesh3P" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAttemptToDyeWithMeleeAttack()
    { return { (void*)this, "bAttemptToDyeWithMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyPlayerWeaponWhenSleeping()
    { return { (void*)this, "bAutoDestroyPlayerWeaponWhenSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRefire()
    { return { (void*)this, "bAutoRefire" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    bool& bBPDoClientCheckCanFireField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bBPDoClientCheckCanFire"); }
    BitFieldValue<bool, unsigned __int32> bBPHandleMeleeAttack()
    { return { (void*)this, "bBPHandleMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    bool& bBPOverrideAspectRatioField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bBPOverrideAspectRatio"); }
    bool& bBPOverrideFPVMasterPoseComponentField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bBPOverrideFPVMasterPoseComponent"); }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseTargetingEvents()
    { return { (void*)this, "bBPUseTargetingEvents" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseWeaponCanFire()
    { return { (void*)this, "bBPUseWeaponCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallBPCustomSpawningEventOnProjectileSpawn()
    { return { (void*)this, "bCallBPCustomSpawningEventOnProjectileSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanAccessoryBeSetOn()
    { return { (void*)this, "bCanAccessoryBeSetOn" }; }
    BitFieldValue<bool, unsigned __int32> bCanAltFire()
    { return { (void*)this, "bCanAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    bool& bCanBeUsedAsEquipmentField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bCanBeUsedAsEquipment"); }
    BitFieldValue<bool, unsigned __int32> bCanFire()
    { return { (void*)this, "bCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffOverrideWeaponFireTransform()
    { return { (void*)this, "bCheckBuffOverrideWeaponFireTransform" }; }
    BitFieldValue<bool, unsigned __int32> bClientTriggersHandleFiring()
    { return { (void*)this, "bClientTriggersHandleFiring" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bClipScopeInY()
    { return { (void*)this, "bClipScopeInY" }; }
    BitFieldValue<bool, unsigned __int32> bCloseRadialWheelOnAltFire()
    { return { (void*)this, "bCloseRadialWheelOnAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bColorCrosshairBasedOnTarget()
    { return { (void*)this, "bColorCrosshairBasedOnTarget" }; }
    BitFieldValue<bool, unsigned __int32> bColorizeMuzzleFX()
    { return { (void*)this, "bColorizeMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bConsiderWeaponScaleOnAttach()
    { return { (void*)this, "bConsiderWeaponScaleOnAttach" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeAmmoItemOnReload()
    { return { (void*)this, "bConsumeAmmoItemOnReload" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeAmmoOnUseAmmo()
    { return { (void*)this, "bConsumeAmmoOnUseAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeZoomInOut()
    { return { (void*)this, "bConsumeZoomInOut" }; }
    bool& bConsumedDurabilityForThisMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bConsumedDurabilityForThisMeleeHit"); }
    bool& bCutsEnemyGrapplingCableField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bCutsEnemyGrapplingCable"); }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDidFireWeapon()
    { return { (void*)this, "bDidFireWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bDirectAltFireToSeconaryAction()
    { return { (void*)this, "bDirectAltFireToSeconaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bDirectPrimaryFireToAltFire()
    { return { (void*)this, "bDirectPrimaryFireToAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bDirectPrimaryFireToSecondaryAction()
    { return { (void*)this, "bDirectPrimaryFireToSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bDirectTargetingToAltFire()
    { return { (void*)this, "bDirectTargetingToAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bDirectTargetingToPrimaryFire()
    { return { (void*)this, "bDirectTargetingToPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bDirectTargetingToSecondaryAction()
    { return { (void*)this, "bDirectTargetingToSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bDisableGamepadAimAssist()
    { return { (void*)this, "bDisableGamepadAimAssist" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePullingOnCrouch()
    { return { (void*)this, "bDisablePullingOnCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePullingOnProne()
    { return { (void*)this, "bDisablePullingOnProne" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    bool& bDisableShooterOnElectricStormField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bDisableShooterOnElectricStorm"); }
    bool& bDisableWeaponCrosshairField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bDisableWeaponCrosshair"); }
    BitFieldValue<bool, unsigned __int32> bDoMeleeSwing()
    { return { (void*)this, "bDoMeleeSwing" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntUsePrimalItem()
    { return { (void*)this, "bDoesntUsePrimalItem" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyConsumeItemAmmo()
    { return { (void*)this, "bDontActuallyConsumeItemAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bDontDeactivateWeaponInstigatorBuffsOnUnequip()
    { return { (void*)this, "bDontDeactivateWeaponInstigatorBuffsOnUnequip" }; }
    BitFieldValue<bool, unsigned __int32> bDontRequireIdleForReload()
    { return { (void*)this, "bDontRequireIdleForReload" }; }
    BitFieldValue<bool, unsigned __int32> bDontUseNativeTickMeleeSwing()
    { return { (void*)this, "bDontUseNativeTickMeleeSwing" }; }
    BitFieldValue<bool, unsigned __int32> bDurabilityUseWeaponMaterial()
    { return { (void*)this, "bDurabilityUseWeaponMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFPVMoveOffscreenWhenTurning()
    { return { (void*)this, "bFPVMoveOffscreenWhenTurning" }; }
    BitFieldValue<bool, unsigned __int32> bFPVNonDefaultWeaponBonesHidden()
    { return { (void*)this, "bFPVNonDefaultWeaponBonesHidden" }; }
    BitFieldValue<bool, unsigned __int32> bFPVScopedTargetingHidesNonWeaponHUD()
    { return { (void*)this, "bFPVScopedTargetingHidesNonWeaponHUD" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    bool& bFoceSimulatedTickField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bFoceSimulatedTick"); }
    bool& bForceAllowMountedWeaponryField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceAllowMountedWeaponry"); }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowPassengerTPV()
    { return { (void*)this, "bForceAllowPassengerTPV" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysPlayEquipAnim()
    { return { (void*)this, "bForceAlwaysPlayEquipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bForceFirstPersonWhileTargeting()
    { return { (void*)this, "bForceFirstPersonWhileTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceKeepEquippedWhileInInventory()
    { return { (void*)this, "bForceKeepEquippedWhileInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForceOwnerControllerHighQualityViewerReplication()
    { return { (void*)this, "bForceOwnerControllerHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventUseWhileRidingDino()
    { return { (void*)this, "bForcePreventUseWhileRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bForceReloadOnDestruction()
    { return { (void*)this, "bForceReloadOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceServerCheckPullingTime()
    { return { (void*)this, "bForceServerCheckPullingTime" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowCrosshairWhileFiring()
    { return { (void*)this, "bForceShowCrosshairWhileFiring" }; }
    bool& bForceTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceTPVCameraOffset"); }
    bool& bForceTPV_EquippedWhileRidingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceTPV_EquippedWhileRiding"); }
    BitFieldValue<bool, unsigned __int32> bForceTargeting()
    { return { (void*)this, "bForceTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargetingOnDino()
    { return { (void*)this, "bForceTargetingOnDino" }; }
    bool& bForceTickWithNoControllerField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bForceTickWithNoController"); }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadLeftIsPrimaryFire()
    { return { (void*)this, "bGamepadLeftIsPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadRightIsSecondaryAction()
    { return { (void*)this, "bGamepadRightIsSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasLockedTarget()
    { return { (void*)this, "bHasLockedTarget" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayedReload()
    { return { (void*)this, "bHasPlayedReload" }; }
    BitFieldValue<bool, unsigned __int32> bHasToggleableAccessory()
    { return { (void*)this, "bHasToggleableAccessory" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHideDamageSourceFromLogs()
    { return { (void*)this, "bHideDamageSourceFromLogs" }; }
    BitFieldValue<bool, unsigned __int32> bHideFPVMesh()
    { return { (void*)this, "bHideFPVMesh" }; }
    BitFieldValue<bool, unsigned __int32> bHideFPVMeshWhileTargeting()
    { return { (void*)this, "bHideFPVMeshWhileTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bHideLeftArmFPV()
    { return { (void*)this, "bHideLeftArmFPV" }; }
    BitFieldValue<bool, unsigned __int32> bHideOriginalArrowBone1P()
    { return { (void*)this, "bHideOriginalArrowBone1P" }; }
    BitFieldValue<bool, unsigned __int32> bHideWeaponOnLaunch()
    { return { (void*)this, "bHideWeaponOnLaunch" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePlayerReload()
    { return { (void*)this, "bIgnorePlayerReload" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreReloadState()
    { return { (void*)this, "bIgnoreReloadState" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreTargetingFOV()
    { return { (void*)this, "bIgnoreTargetingFOV" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bImpactAttachFXUsesPawnMesh()
    { return { (void*)this, "bImpactAttachFXUsesPawnMesh" }; }
    BitFieldValue<bool, unsigned __int32> bInstantAccuracyReset()
    { return { (void*)this, "bInstantAccuracyReset" }; }
    BitFieldValue<bool, unsigned __int32> bIsAccessoryActive()
    { return { (void*)this, "bIsAccessoryActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsChainsawWeapon()
    { return { (void*)this, "bIsChainsawWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bIsDefaultWeapon()
    { return { (void*)this, "bIsDefaultWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInDestruction()
    { return { (void*)this, "bIsInDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsLastAmmoInClip()
    { return { (void*)this, "bIsLastAmmoInClip" }; }
    BitFieldValue<bool, unsigned __int32> bIsLastArrow()
    { return { (void*)this, "bIsLastArrow" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeleeWeapon()
    { return { (void*)this, "bIsMeleeWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingPullStringAnim()
    { return { (void*)this, "bIsPlayingPullStringAnim" }; }
    BitFieldValue<bool, unsigned __int32> bIsPullingString()
    { return { (void*)this, "bIsPullingString" }; }
    BitFieldValue<bool, unsigned __int32> bIsSpyglass()
    { return { (void*)this, "bIsSpyglass" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bIsWeaponPing()
    { return { (void*)this, "bIsWeaponPing" }; }
    BitFieldValue<bool, unsigned __int32> bIsWeaponTracker()
    { return { (void*)this, "bIsWeaponTracker" }; }
    bool& bLastMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bLastMeleeHit"); }
    bool& bLastMeleeHitStationaryField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bLastMeleeHitStationary"); }
    BitFieldValue<bool, unsigned __int32> bListenToAppliedForeces()
    { return { (void*)this, "bListenToAppliedForeces" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bLoopedFireAnim()
    { return { (void*)this, "bLoopedFireAnim" }; }
    BitFieldValue<bool, unsigned __int32> bLoopedFireSound()
    { return { (void*)this, "bLoopedFireSound" }; }
    BitFieldValue<bool, unsigned __int32> bLoopedMuzzleFX()
    { return { (void*)this, "bLoopedMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bLoopingSimulateWeaponFire()
    { return { (void*)this, "bLoopingSimulateWeaponFire" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeAttackHarvetUsableComponents()
    { return { (void*)this, "bMeleeAttackHarvetUsableComponents" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeHitCaptureDermis()
    { return { (void*)this, "bMeleeHitCaptureDermis" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeHitColorizesStructures()
    { return { (void*)this, "bMeleeHitColorizesStructures" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeHitUseMuzzleFX()
    { return { (void*)this, "bMeleeHitUseMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoopedSimulatingWeaponFire()
    { return { (void*)this, "bNetLoopedSimulatingWeaponFire" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNewPullStringEvent()
    { return { (void*)this, "bNewPullStringEvent" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowUseWhenRidingDino()
    { return { (void*)this, "bOnlyAllowUseWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyDamagePawns()
    { return { (void*)this, "bOnlyDamagePawns" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    bool& bOnlyPassiveDurabilityWhenAccessoryActiveField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bOnlyPassiveDurabilityWhenAccessoryActive"); }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseFirstMeleeAnimWithShield()
    { return { (void*)this, "bOnlyUseFirstMeleeAnimWithShield" }; }
    bool& bOnlyUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bOnlyUseOnSeatingStructure"); }
    BitFieldValue<bool, unsigned __int32> bOverrideAimOffsets()
    { return { (void*)this, "bOverrideAimOffsets" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideStandingAnim()
    { return { (void*)this, "bOverrideStandingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPendingPullString()
    { return { (void*)this, "bPendingPullString" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarriedZoomInOut()
    { return { (void*)this, "bPreventCarriedZoomInOut" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCrosshairDraw()
    { return { (void*)this, "bPreventCrosshairDraw" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEquippingUnderwater()
    { return { (void*)this, "bPreventEquippingUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemColors()
    { return { (void*)this, "bPreventItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLeftShoulder()
    { return { (void*)this, "bPreventLeftShoulder" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMeleeWhileFiring()
    { return { (void*)this, "bPreventMeleeWhileFiring" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    bool& bPreventOpeningInventoryField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bPreventOpeningInventory"); }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRightShoulder()
    { return { (void*)this, "bPreventRightShoulder" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPrimaryFireDoesMeleeAttack()
    { return { (void*)this, "bPrimaryFireDoesMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReloadAnimForceTickPoseOnServer()
    { return { (void*)this, "bReloadAnimForceTickPoseOnServer" }; }
    BitFieldValue<bool, unsigned __int32> bReloadOnEmptyClip()
    { return { (void*)this, "bReloadOnEmptyClip" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    bool& bReplicateCurrentAmmoInClipToNonOwnersField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bReplicateCurrentAmmoInClipToNonOwners"); }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bRestrictTPVCameraYaw"); }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bScopeFullscreen()
    { return { (void*)this, "bScopeFullscreen" }; }
    BitFieldValue<bool, unsigned __int32> bSecondaryActionStopsFire()
    { return { (void*)this, "bSecondaryActionStopsFire" }; }
    BitFieldValue<bool, unsigned __int32> bServerFireProjectileForceUpdateAimActors()
    { return { (void*)this, "bServerFireProjectileForceUpdateAimActors" }; }
    BitFieldValue<bool, unsigned __int32> bServerIgnoreCheckCanFire()
    { return { (void*)this, "bServerIgnoreCheckCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnProjectileOnClient()
    { return { (void*)this, "bSpawnProjectileOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnedByMission()
    { return { (void*)this, "bSpawnedByMission" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsOffhandShield()
    { return { (void*)this, "bSupportsOffhandShield" }; }
    BitFieldValue<bool, unsigned __int32> bTargetUnTargetWithClick()
    { return { (void*)this, "bTargetUnTargetWithClick" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingForceOwnerControllerHighQualityViewerReplication()
    { return { (void*)this, "bTargetingForceOwnerControllerHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingForceTraceFloatingHUD()
    { return { (void*)this, "bTargetingForceTraceFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bToggleAccessoryUseAltFireSound()
    { return { (void*)this, "bToggleAccessoryUseAltFireSound" }; }
    BitFieldValue<bool, unsigned __int32> bToggleAccessoryUseAltMuzzleFX()
    { return { (void*)this, "bToggleAccessoryUseAltMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseAbsoluteScaleOnAttach()
    { return { (void*)this, "bUseAbsoluteScaleOnAttach" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAlternateAimOffset()
    { return { (void*)this, "bUseAlternateAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoOnFireProjectile()
    { return { (void*)this, "bUseAmmoOnFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoOnFiring()
    { return { (void*)this, "bUseAmmoOnFiring" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoReloadState()
    { return { (void*)this, "bUseAmmoReloadState" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoServerOnly()
    { return { (void*)this, "bUseAmmoServerOnly" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoSupportsAdjustedAmmoPerShot()
    { return { (void*)this, "bUseAmmoSupportsAdjustedAmmoPerShot" }; }
    BitFieldValue<bool, unsigned __int32> bUseArrowMesh1P()
    { return { (void*)this, "bUseArrowMesh1P" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseAutoReload()
    { return { (void*)this, "bUseAutoReload" }; }
    bool& bUseBPAdjustAmmoPerShotField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBPAdjustAmmoPerShot"); }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAnimNotifyCustomState_Tick()
    { return { (void*)this, "bUseBPAnimNotifyCustomState_Tick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanEquip()
    { return { (void*)this, "bUseBPCanEquip" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFire()
    { return { (void*)this, "bUseBPCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanMeleeAttack()
    { return { (void*)this, "bUseBPCanMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanStartFire()
    { return { (void*)this, "bUseBPCanStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanToggleAccessory()
    { return { (void*)this, "bUseBPCanToggleAccessory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceFirstPerson()
    { return { (void*)this, "bUseBPForceFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceTPVTargetingAnimation()
    { return { (void*)this, "bUseBPForceTPVTargetingAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetActorForTargetingTooltip()
    { return { (void*)this, "bUseBPGetActorForTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairColor()
    { return { (void*)this, "bUseBPGetCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraPreviewMeshes()
    { return { (void*)this, "bUseBPGetExtraPreviewMeshes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetSelectedMeleeAttackAnim()
    { return { (void*)this, "bUseBPGetSelectedMeleeAttackAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTPVCameraOffset()
    { return { (void*)this, "bUseBPGetTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor()
    { return { (void*)this, "bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyFOV()
    { return { (void*)this, "bUseBPModifyFOV" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnBurstFinished()
    { return { (void*)this, "bUseBPOnBurstFinished" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnBurstStarted()
    { return { (void*)this, "bUseBPOnBurstStarted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnMaxDurability()
    { return { (void*)this, "bUseBPOnMaxDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnScoped()
    { return { (void*)this, "bUseBPOnScoped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnWeaponAnimPlayedNotify()
    { return { (void*)this, "bUseBPOnWeaponAnimPlayedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAimDirection()
    { return { (void*)this, "bUseBPOverrideAimDirection" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageImpactLocation()
    { return { (void*)this, "bUseBPOverrideDamageImpactLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMeleeSwingSockets()
    { return { (void*)this, "bUseBPOverrideMeleeSwingSockets" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePerShotDurability()
    { return { (void*)this, "bUseBPOverridePerShotDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRootRotationOffset()
    { return { (void*)this, "bUseBPOverrideRootRotationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostSpawnMuzzleEffect()
    { return { (void*)this, "bUseBPPostSpawnMuzzleEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventSwitchingWeapon()
    { return { (void*)this, "bUseBPPreventSwitchingWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemainEquipped()
    { return { (void*)this, "bUseBPRemainEquipped" }; }
    bool& bUseBPSelectProjectileToFireField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBPSelectProjectileToFire"); }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldDealDamage()
    { return { (void*)this, "bUseBPShouldDealDamage" }; }
    bool& bUseBPSpawnMeleeEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBPSpawnMeleeEffects"); }
    BitFieldValue<bool, unsigned __int32> bUseBPStartEquippedNotify()
    { return { (void*)this, "bUseBPStartEquippedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateFirstPersonMeshes()
    { return { (void*)this, "bUseBPUpdateFirstPersonMeshes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPWeaponDealDamage()
    { return { (void*)this, "bUseBPWeaponDealDamage" }; }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseBlueprintAnimNotifications"); }
    BitFieldValue<bool, unsigned __int32> bUseBurstFinishAnim()
    { return { (void*)this, "bUseBurstFinishAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBurstStartAnim()
    { return { (void*)this, "bUseBurstStartAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanAccessoryBeSetOn()
    { return { (void*)this, "bUseCanAccessoryBeSetOn" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCharacterMeleeDamageModifier()
    { return { (void*)this, "bUseCharacterMeleeDamageModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomSeatedAnim()
    { return { (void*)this, "bUseCustomSeatedAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip()
    { return { (void*)this, "bUseDinoRangeForTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquipNoAmmoClipAnim()
    { return { (void*)this, "bUseEquipNoAmmoClipAnim" }; }
    bool& bUseFireCameraShakeScaleField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bUseFireCameraShakeScale"); }
    BitFieldValue<bool, unsigned __int32> bUseHandIk()
    { return { (void*)this, "bUseHandIk" }; }
    BitFieldValue<bool, unsigned __int32> bUseHideProjectileAnimEvents()
    { return { (void*)this, "bUseHideProjectileAnimEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseLockOn()
    { return { (void*)this, "bUseLockOn" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeleeNoAmmoClipAnim()
    { return { (void*)this, "bUseMeleeNoAmmoClipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUsePartialReloadAnim()
    { return { (void*)this, "bUsePartialReloadAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostUpdateTickForFPVParticles()
    { return { (void*)this, "bUsePostUpdateTickForFPVParticles" }; }
    BitFieldValue<bool, unsigned __int32> bUseScopeOverlay()
    { return { (void*)this, "bUseScopeOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseTPVWeaponMeshMeleeSockets()
    { return { (void*)this, "bUseTPVWeaponMeshMeleeSockets" }; }
    BitFieldValue<bool, unsigned __int32> bUseTargetingAimDownSightsExposureAdjustment()
    { return { (void*)this, "bUseTargetingAimDownSightsExposureAdjustment" }; }
    BitFieldValue<bool, unsigned __int32> bUseTargetingFireAnim()
    { return { (void*)this, "bUseTargetingFireAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseTargetingReloadAnim()
    { return { (void*)this, "bUseTargetingReloadAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseUnequipNoAmmoClipAnim()
    { return { (void*)this, "bUseUnequipNoAmmoClipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToAltFire()
    { return { (void*)this, "bWantsToAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToAutoReload()
    { return { (void*)this, "bWantsToAutoReload" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToFire()
    { return { (void*)this, "bWantsToFire" }; }
    bool& bWasLastFireFromGamePadField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponBoomerang.bWasLastFireFromGamePad"); }
    float& chanceToBreakField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.chanceToBreak"); }
    BitFieldValue<bool, unsigned __int32> bClientHideBoomerang()
    { return { (void*)this, "bClientHideBoomerang" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONBOOMERANG_H
