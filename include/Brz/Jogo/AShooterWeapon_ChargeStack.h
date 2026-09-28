// ==========================================================================
//  AShooterWeapon_ChargeStack — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_CHARGESTACK_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_CHARGESTACK_H

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


struct AShooterWeapon_ChargeStack
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_ChargeStack"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPGetChargeStackRechargeSeconds()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetChargeStackRechargeSeconds() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.BPGetChargeStackRechargeSeconds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPGetChargeStackRechargeSeconds_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPGetChargeStackRechargeSeconds_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.BPGetChargeStackRechargeSeconds_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPGetChargeStacksMax()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetChargeStacksMax() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.BPGetChargeStacksMax()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPGetChargeStacksMax_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPGetChargeStacksMax_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.BPGetChargeStacksMax_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPOnChargeStacksCharged(int,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOnChargeStacksCharged(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "AShooterWeapon_ChargeStack.BPOnChargeStacksCharged(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPOnMissingFireCostItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnMissingFireCostItem() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.BPOnMissingFireCostItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.BPTryFireWeapon_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPTryFireWeapon_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.BPTryFireWeapon_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.ClientSyncChargeStackState(int,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSyncChargeStackState(int a0, double a1) const
    {
        return NativeCall<void*, int, double>(this, "AShooterWeapon_ChargeStack.ClientSyncChargeStackState(int,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.ClientSyncChargeStackState_Implementation(int,double)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientSyncChargeStackState_Implementation(int a0, double a1) const
    {
        return NativeCall<void*, int, double>(this, "AShooterWeapon_ChargeStack.ClientSyncChargeStackState_Implementation(int,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.GetChargeStackNow()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetChargeStackNow() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.GetChargeStackNow()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.GetChargeStacksHUDData(int&,float&,TArray<float,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetChargeStacksHUDData(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon_ChargeStack.GetChargeStacksHUDData(int&,float&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.HandleFiring(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleFiring(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterWeapon_ChargeStack.HandleFiring(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.OnEquip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEquip() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.OnEquip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.ResolveChargeStackState(double,double,int&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveChargeStackState(double a0, double a1, void* a2, void* a3) const
    {
        return NativeCall<void*, double, double, void*, void*>(this, "AShooterWeapon_ChargeStack.ResolveChargeStackState(double,double,int&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.ResolveFireCostItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveFireCostItem() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_ChargeStack.ResolveFireCostItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.SyncCurrentChargeStacks(double,int*,double*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SyncCurrentChargeStacks(double a0, void* a1, void* a2) const
    {
        return NativeCall<void*, double, void*, void*>(this, "AShooterWeapon_ChargeStack.SyncCurrentChargeStacks(double,int*,double*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterWeapon_ChargeStack.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.UpdateChargeStackProjectileState(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateChargeStackProjectileState(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon_ChargeStack.UpdateChargeStackProjectileState(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_ChargeStack.WriteChargeStackState(int,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WriteChargeStackState(int a0, double a1) const
    {
        return NativeCall<void*, int, double>(this, "AShooterWeapon_ChargeStack.WriteChargeStackState(int,double)", a0, a1);
    }

    UMaterialInterface*& ActorInLockedAreaMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon_ChargeStack.ActorInLockedAreaMI"); }
    UMaterialInstanceDynamic*& ActorInLockedAreaMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon_ChargeStack.ActorInLockedAreaMID"); }
    UMaterialInterface*& ActorLockedMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon_ChargeStack.ActorLockedMI"); }
    UMaterialInstanceDynamic*& ActorLockedMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon_ChargeStack.ActorLockedMID"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterWeapon_ChargeStack.ActorUsingQuickAction"); }
    float& AimAssistStrengthWeaponField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AimAssistStrengthWeapon"); }
    float& AimDriftPitchAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AimDriftPitchAngle"); }
    float& AimDriftPitchFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AimDriftPitchFrequency"); }
    float& AimDriftYawAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AimDriftYawAngle"); }
    float& AimDriftYawFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AimDriftYawFrequency"); }
    float& AllowMeleeTimeBeforeAnimationEndField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AllowMeleeTimeBeforeAnimationEnd"); }
    BrzCampoPonteiro AltFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AltFireSound")); }
    BrzCampoPonteiro AltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AltMuzzleFX")); }
    BrzCampoPonteiro AltMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AltMuzzleFX_FPV")); }
    BrzCampoPonteiro AltWeaponAmmoItemTemplatesDecendingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AltWeaponAmmoItemTemplatesDecending")); }
    BrzCampoPonteiro AlternateInventoryEquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AlternateInventoryEquipAnim")); }
    float& AmmoIconsCountField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.AmmoIconsCount"); }
    int& AmmoInClipOnReloadField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.AmmoInClipOnReload"); }
    BrzCampoPonteiro AmmoReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AmmoReloadState")); }
    BrzCampoPonteiro AmmoWheelIconOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AmmoWheelIconOverride")); }
    BrzCampoPonteiro AnimatedCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AnimatedCamera")); }
    FItemNetInfo& AssociatedItemNetInfoField() const
    { return *GetNativePointerField<FItemNetInfo*>(this, "AShooterWeapon_ChargeStack.AssociatedItemNetInfo"); }
    BrzCampoPonteiro AssociatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AssociatedMission")); }
    BrzCampoPonteiro AssociatedPrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AssociatedPrimalItem")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_ChargeStack.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.BlueprintCreatedComponents"); }
    float& ChargeStackRechargeSecondsField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ChargeStackRechargeSeconds"); }
    int& ChargeStacksMaxField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.ChargeStacksMax"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ClientReplicationSendNowThreshold"); }
    unsigned char& ColorizeMuzzleVFXUseColorRegionField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_ChargeStack.ColorizeMuzzleVFXUseColorRegion"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.CreationTime"); }
    int& CurrentAmmoField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.CurrentAmmo"); }
    int& CurrentAmmoInClipField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.CurrentAmmoInClip"); }
    float& CurrentFiringSpreadField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.CurrentFiringSpread"); }
    float& CurrentLockOnTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.CurrentLockOnTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.CustomTimeDilation"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_ChargeStack.DesiredRepGraphBehavior"); }
    float& DurabilityCostToEquipField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.DurabilityCostToEquip"); }
    BrzCampoPonteiro DyePreviewMeshOverrideSKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.DyePreviewMeshOverrideSK")); }
    BrzCampoPonteiro DyePreviewMeshOverrideSMField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.DyePreviewMeshOverrideSM")); }
    float& EndDoMeleeSwingTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.EndDoMeleeSwingTime"); }
    BrzCampoPonteiro EquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.EquipAnim")); }
    BrzCampoPonteiro EquipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.EquipNoAmmoClipAnim")); }
    USoundBase*& EquipSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "AShooterWeapon_ChargeStack.EquipSound"); }
    float& EquipTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.EquipTime"); }
    FName& FPVAccessoryToggleComponentField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.FPVAccessoryToggleComponent"); }
    float& FPVEnterTargetingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVEnterTargetingInterpSpeed"); }
    float& FPVExitTargetingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVExitTargetingInterpSpeed"); }
    float& FPVImmobilizedInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVImmobilizedInterpSpeed"); }
    FVector& FPVImmobilizedLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.FPVImmobilizedLocationOffset"); }
    FRotator& FPVImmobilizedRotationOffsetField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVImmobilizedRotationOffset"); }
    FVector& FPVInventoryReequipOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.FPVInventoryReequipOffset"); }
    FRotator& FPVLookAtInterpSpeedField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVLookAtInterpSpeed"); }
    FRotator& FPVLookAtInterpSpeed_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVLookAtInterpSpeed_Targeting"); }
    FRotator& FPVLookAtMaximumOffsetField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVLookAtMaximumOffset"); }
    FRotator& FPVLookAtMaximumOffset_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVLookAtMaximumOffset_Targeting"); }
    FRotator& FPVLookAtSpeedBaseField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVLookAtSpeedBase"); }
    FRotator& FPVLookAtSpeedBase_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVLookAtSpeedBase_Targeting"); }
    float& FPVMeleeTraceFXRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMeleeTraceFXRange"); }
    float& FPVMoveOffscreenIdleRestoreIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenIdleRestoreInterval"); }
    float& FPVMoveOffscreenIdleRestoreSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenIdleRestoreSpeed"); }
    float& FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); }
    float& FPVMoveOffscreenWhenTurningMaxOffsetField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenWhenTurningMaxOffset"); }
    float& FPVMoveOffscreenWhenTurningMaxViewRotSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); }
    float& FPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); }
    float& FPVMoveOffscreenWhenTurningMinViewRotSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FPVMoveOffscreenWhenTurningMinViewRotSpeed"); }
    FVector& FPVMuzzleLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.FPVMuzzleLocationOffset"); }
    FVector& FPVRelativeLocationField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.FPVRelativeLocation"); }
    FVector& FPVRelativeLocation_TargetingField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.FPVRelativeLocation_Targeting"); }
    FRotator& FPVRelativeRotationField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVRelativeRotation"); }
    FRotator& FPVRelativeRotation_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon_ChargeStack.FPVRelativeRotation_Targeting"); }
    BrzCampoPonteiro FinishBurstAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FinishBurstAnim")); }
    BrzCampoPonteiro FireACField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FireAC")); }
    BrzCampoPonteiro FireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FireAnim")); }
    BrzCampoPonteiro FireCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FireCameraShake")); }
    float& FireCameraShakeSpreadScaleExponentField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FireCameraShakeSpreadScaleExponent"); }
    float& FireCameraShakeSpreadScaleExponentLessThanField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FireCameraShakeSpreadScaleExponentLessThan"); }
    float& FireCameraShakeSpreadScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FireCameraShakeSpreadScaleMultiplier"); }
    float& FireCameraShakeSpreadScaleMultiplierLessThanField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FireCameraShakeSpreadScaleMultiplierLessThan"); }
    int& FireCostItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.FireCostItemQuantity"); }
    BrzCampoPonteiro FireCostItemTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FireCostItemTemplates")); }
    BrzCampoPonteiro FireFinishSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FireFinishSound")); }
    BrzCampoPonteiro FireForceFeedbackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.FireForceFeedback")); }
    USoundCue*& FireProjectileSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_ChargeStack.FireProjectileSound"); }
    USoundCue*& FireSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_ChargeStack.FireSound"); }
    int& FiredLastNoAmmoShotField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.FiredLastNoAmmoShot"); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_ChargeStack.FluidSimSplashTemplateOverride"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.ForceMaximumReplicationRateUntilTime"); }
    float& GlobalFireCameraShakeScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.GlobalFireCameraShakeScale"); }
    float& GlobalFireCameraShakeScaleTargetingField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.GlobalFireCameraShakeScaleTargeting"); }
    BrzCampoPonteiro HarvestAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.HarvestAnim")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.HypoThermiaInsulation"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterWeapon_ChargeStack.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.InstanceComponents"); }
    BrzCampoPonteiro InstantConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.InstantConfig")); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterWeapon_ChargeStack.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.InsulationRange"); }
    float& ItemDestructionUnequipWeaponDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ItemDestructionUnequipWeaponDelay"); }
    float& ItemDurabilityToConsumePerMeleeHitField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ItemDurabilityToConsumePerMeleeHit"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastActorForceReplicationTime"); }
    int& LastAmmoToConsumeField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.LastAmmoToConsume"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastExitStasisTime"); }
    double& LastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastFireTime"); }
    double& LastNotifyShotTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastNotifyShotTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterWeapon_ChargeStack.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastPreReplicationTime"); }
    int& LastSelectedMeleeAnimField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.LastSelectedMeleeAnim"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterWeapon_ChargeStack.LastSelectedWindSourceComponentName"); }
    TArray<void*>& LastSocketPositionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.LastSocketPositions"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.Layers"); }
    FName& LeftHandIkSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.LeftHandIkSkeletalMeshSocketName"); }
    float& LockOnMaxTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.LockOnMaxTraceDistance"); }
    float& LockOnTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.LockOnTime"); }
    BrzCampoPonteiro LockOnTraceBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.LockOnTraceBoxExtent")); }
    float& LockOnYScreenPercentageField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.LockOnYScreenPercentage"); }
    BrzCampoPonteiro LockToIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.LockToIcon")); }
    BrzCampoPonteiro MeleeAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeAnim")); }
    BrzCampoPonteiro MeleeAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeAnimList")); }
    BrzCampoPonteiro MeleeAnimListImpactFXAttachSockets1PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeAnimListImpactFXAttachSockets1P")); }
    BrzCampoPonteiro MeleeAnimListImpactFXAttachSockets3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeAnimListImpactFXAttachSockets3P")); }
    float& MeleeAttackHarvetUsableComponentsRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MeleeAttackHarvetUsableComponentsRadius"); }
    float& MeleeAttackUsableHarvestDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MeleeAttackUsableHarvestDamageMultiplier"); }
    BrzCampoPonteiro MeleeAttackUsableHarvestDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeAttackUsableHarvestDamageType")); }
    BrzCampoPonteiro MeleeCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeCameraShake")); }
    float& MeleeCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MeleeCameraShakeSpeedScale"); }
    BrzCampoPonteiro MeleeCameraShakeTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeCameraShakeTPV")); }
    float& MeleeConsumesStaminaField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MeleeConsumesStamina"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeDamageType")); }
    BrzCampoPonteiro MeleeHitColorizeStructuresUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeHitColorizeStructuresUI")); }
    float& MeleeHitRandomChanceToDestroyItemField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MeleeHitRandomChanceToDestroyItem"); }
    BrzCampoPonteiro MeleeHitTargetCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeHitTargetCameraShake")); }
    BrzCampoPonteiro MeleeHitTargetCameraShakeMobileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeHitTargetCameraShakeMobile")); }
    BrzCampoPonteiro MeleeNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeNoAmmoClipAnim")); }
    TArray<void*>& MeleeSwingSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.MeleeSwingSockets"); }
    BrzCampoPonteiro MeleeWithHitAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MeleeWithHitAnimList")); }
    USkeletalMeshComponent*& Mesh1PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterWeapon_ChargeStack.Mesh1P"); }
    FName& Mesh1PProjectileBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.Mesh1PProjectileBoneName"); }
    BrzCampoPonteiro Mesh3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.Mesh3P")); }
    float& MinItemDurabilityPercentageForShotField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MinItemDurabilityPercentageForShot"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.MinNetUpdateFrequency"); }
    FName& MuzzleAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.MuzzleAttachPoint"); }
    BrzCampoPonteiro MuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MuzzleFX")); }
    BrzCampoPonteiro MuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MuzzleFX_FPV")); }
    BrzCampoPonteiro MuzzlePSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MuzzlePSC")); }
    BrzCampoPonteiro MuzzlePSCSecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MuzzlePSCSecondary")); }
    BrzCampoPonteiro MyPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.MyPawn")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_ChargeStack.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterWeapon_ChargeStack.NetworkSpatializationParent"); }
    double& NextAllowedMeleeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.NextAllowedMeleeTime"); }
    BrzCampoPonteiro NiagaraAltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NiagaraAltMuzzleFX")); }
    BrzCampoPonteiro NiagaraAltMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NiagaraAltMuzzleFX_FPV")); }
    BrzCampoPonteiro NiagaraMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NiagaraMuzzleFX")); }
    BrzCampoPonteiro NiagaraMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NiagaraMuzzleFX_FPV")); }
    BrzCampoPonteiro NiagaraMuzzlePSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NiagaraMuzzlePSC")); }
    BrzCampoPonteiro NiagaraMuzzlePSCSecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NiagaraMuzzlePSCSecondary")); }
    BrzCampoPonteiro NoAmmoFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.NoAmmoFireAnim")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OnTargetingTeamChanged")); }
    BrzCampoPonteiro OpenInventoryAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OpenInventoryAnim")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.OriginalCreationTime"); }
    BrzCampoPonteiro OutOfAmmoSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OutOfAmmoSound")); }
    FName& OverrideAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.OverrideAttachPoint"); }
    BrzCampoPonteiro OverrideJumpAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideJumpAnim")); }
    BrzCampoPonteiro OverrideLandedAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideLandedAnim")); }
    float& OverrideMuzzleFXAlphaField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.OverrideMuzzleFXAlpha"); }
    BrzCampoPonteiro OverridePawnTPVAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverridePawnTPVAnimBlueprint")); }
    BrzCampoPonteiro OverrideProneInAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideProneInAnim")); }
    BrzCampoPonteiro OverrideProneOutAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideProneOutAnim")); }
    BrzCampoPonteiro OverrideRiderAnimSequenceFromField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideRiderAnimSequenceFrom")); }
    BrzCampoPonteiro OverrideRiderAnimSequenceToField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideRiderAnimSequenceTo")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.OverrideStasisComponentRadius"); }
    BrzCampoPonteiro OverrideTPVShieldAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.OverrideTPVShieldAnimation")); }
    float& OverrideTargetingFOVField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.OverrideTargetingFOV"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterWeapon_ChargeStack.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterWeapon_ChargeStack.ParentComponent"); }
    BrzCampoPonteiro PartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.PartialReloadAnim")); }
    float& PassiveDurabilityCostIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.PassiveDurabilityCostInterval"); }
    float& PassiveDurabilityCostPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.PassiveDurabilityCostPerInterval"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.PhysicsReplicationMode")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterWeapon_ChargeStack.PrimaryActorTick"); }
    BrzCampoPonteiro PrimaryClipIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.PrimaryClipIcon")); }
    int& PrimaryClipIconOffsetField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.PrimaryClipIconOffset"); }
    BrzCampoPonteiro PrimaryIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.PrimaryIcon")); }
    FName& ProjectileAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.ProjectileAttachPoint3P"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ProjectileClass")); }
    UStaticMeshComponent*& ProjectileMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_ChargeStack.ProjectileMesh3P"); }
    float& ProjectileSpreadPitchField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ProjectileSpreadPitch"); }
    float& ProjectileSpreadYawField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ProjectileSpreadYaw"); }
    BrzCampoPonteiro ProneTPVPartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ProneTPVPartialReloadAnim")); }
    BrzCampoPonteiro ProneTPVReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ProneTPVReloadAnim")); }
    BrzCampoPonteiro ProneTPVTargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ProneTPVTargetingReloadAnim")); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.RayTracingGroupId"); }
    BrzCampoPonteiro ReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ReloadAnim")); }
    float& ReloadBeforeAnimFinishesTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ReloadBeforeAnimFinishesTime"); }
    BrzCampoPonteiro ReloadCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ReloadCameraShake")); }
    float& ReloadCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ReloadCameraShakeSpeedScale"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_ChargeStack.RemoteRole"); }
    BrzCampoPonteiro RemovalOptionsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.RemovalOptionsIcon")); }
    BrzCampoPonteiro RemoveIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.RemoveIcon")); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ReplicationIntervalMultiplier"); }
    FName& RightHandIkSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.RightHandIkSkeletalMeshSocketName"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_ChargeStack.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterWeapon_ChargeStack.RootComponent"); }
    FName& ScopeCrosshairColorParameterField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.ScopeCrosshairColorParameter"); }
    BrzCampoPonteiro ScopeCrosshairMIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ScopeCrosshairMI")); }
    BrzCampoPonteiro ScopeCrosshairMIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ScopeCrosshairMID")); }
    float& ScopeCrosshairSizeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ScopeCrosshairSize"); }
    BrzCampoPonteiro ScopeOverlayMIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ScopeOverlayMI")); }
    BrzCampoPonteiro ScopedBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ScopedBuff")); }
    BrzCampoPonteiro SecondaryClipIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.SecondaryClipIcon")); }
    int& SecondaryClipIconOffsetField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.SecondaryClipIconOffset"); }
    BrzCampoPonteiro SecondaryIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.SecondaryIcon")); }
    float& ServerMaxProjectileAngleErrorField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ServerMaxProjectileAngleError"); }
    float& ServerMaxProjectileOriginErrorField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ServerMaxProjectileOriginError"); }
    BrzCampoPonteiro ShieldHitAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ShieldHitAnim")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro StartBurstAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.StartBurstAnim")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterWeapon_ChargeStack.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterWeapon_ChargeStack.StasisUnRegisteredComponents"); }
    FName& StoredCooldownPerClassNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.StoredCooldownPerClassName"); }
    FName& TPVAccessoryToggleComponentField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.TPVAccessoryToggleComponent"); }
    float& TPVCameraYawRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TPVCameraYawRange"); }
    BrzCampoPonteiro TPVForcePlayAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.TPVForcePlayAnim")); }
    FVector& TPVMuzzleLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.TPVMuzzleLocationOffset"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_ChargeStack.Tags"); }
    float& TargetingDelayTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TargetingDelayTime"); }
    float& TargetingFOVInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TargetingFOVInterpSpeed"); }
    BrzCampoPonteiro TargetingFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.TargetingFireAnim")); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon_ChargeStack.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon_ChargeStack.TargetingInfoTooltipScale"); }
    BrzCampoPonteiro TargetingNoAmmoFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.TargetingNoAmmoFireAnim")); }
    BrzCampoPonteiro TargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.TargetingReloadAnim")); }
    BrzCampoPonteiro TargetingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.TargetingSound")); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TargetingTooltipCheckRange"); }
    float& TheMeleeSwingInteractionRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TheMeleeSwingInteractionRadius"); }
    float& TheMeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TheMeleeSwingRadius"); }
    float& TheMeleeSwingRadiusScalarWhenRidingField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TheMeleeSwingRadiusScalarWhenRiding"); }
    float& TimeToAutoReloadField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.TimeToAutoReload"); }
    BrzCampoPonteiro ToggleAccessorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.ToggleAccessorySound")); }
    BrzCampoPonteiro UnequipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.UnequipAnim")); }
    BrzCampoPonteiro UnequipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.UnequipNoAmmoClipAnim")); }
    BrzCampoPonteiro UnlockFromIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.UnlockFromIcon")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_ChargeStack.UnstasisLastInRangeTime"); }
    BrzCampoPonteiro UntargetingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.UntargetingSound")); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.UpdateOverlapsMethodDuringLevelStreaming"); }
    FVector& VRTargetingAimOriginOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.VRTargetingAimOriginOffset"); }
    FVector& VRTargetingModelOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_ChargeStack.VRTargetingModelOffset"); }
    BrzCampoPonteiro WeaponAmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.WeaponAmmoItemTemplate")); }
    BrzCampoPonteiro WeaponBreakAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.WeaponBreakAnim")); }
    BrzCampoPonteiro WeaponCameraSettingsOverrideClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.WeaponCameraSettingsOverrideClass")); }
    BrzCampoPonteiro WeaponConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.WeaponConfig")); }
    float& WeaponDurabilityPercentField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.WeaponDurabilityPercent"); }
    float& WeaponDurabilityPercentUpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.WeaponDurabilityPercentUpdateInterval"); }
    BrzCampoPonteiro WeaponMesh3PFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.WeaponMesh3PFireAnim")); }
    BrzCampoPonteiro WeaponMesh3PReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.WeaponMesh3PReloadAnim")); }
    float& WeaponUnequipDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.WeaponUnequipDelay"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowDedicatedThirdPersonWeaponMeshTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowDedicatedThirdPersonWeaponMeshTick")); }
    BrzCampoPonteiro bAllowDropAndPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowDropAndPickup")); }
    BrzCampoPonteiro bAllowDropAndPickupOnReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowDropAndPickupOnReload")); }
    BrzCampoPonteiro bAllowEmptyAmmoClipOnFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowEmptyAmmoClipOnFire")); }
    BrzCampoPonteiro bAllowFullClipReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowFullClipReload")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowRunning")); }
    BrzCampoPonteiro bAllowRunningWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowRunningWhileFiring")); }
    BrzCampoPonteiro bAllowRunningWhileMeleeAttackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowRunningWhileMeleeAttacking")); }
    BrzCampoPonteiro bAllowRunningWhileReloadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowRunningWhileReloading")); }
    BrzCampoPonteiro bAllowSeattingWhileEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowSeattingWhileEquipped")); }
    BrzCampoPonteiro bAllowSettingColorizeRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowSettingColorizeRegions")); }
    BrzCampoPonteiro bAllowSubmergedFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowSubmergedFiring")); }
    BrzCampoPonteiro bAllowTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowTargeting")); }
    bool& bAllowTargetingDuringMeleeSwingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bAllowTargetingDuringMeleeSwing"); }
    BrzCampoPonteiro bAllowTargetingWhileReloadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowTargetingWhileReloading")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowUseHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowUseHarvesting")); }
    bool& bAllowUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bAllowUseOnSeatingStructure"); }
    BrzCampoPonteiro bAllowUseWhileRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAllowUseWhileRidingDino")); }
    BrzCampoPonteiro bAltFireDoesMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAltFireDoesMeleeAttack")); }
    BrzCampoPonteiro bAltFireDoesNotStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAltFireDoesNotStopFire")); }
    BrzCampoPonteiro bAlternateStandingAnimBypassLayeredBlendField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAlternateStandingAnimBypassLayeredBlend")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bApplyAimDriftWhenTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bApplyAimDriftWhenTargeting")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAttemptToDyeWithMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAttemptToDyeWithMeleeAttack")); }
    BrzCampoPonteiro bAutoDestroyPlayerWeaponWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAutoDestroyPlayerWeaponWhenSleeping")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoRefireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAutoRefire")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bAutoStasis")); }
    bool& bBPDoClientCheckCanFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bBPDoClientCheckCanFire"); }
    BrzCampoPonteiro bBPHandleMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBPHandleMeleeAttack")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBPInventoryItemUsedHandlesDurability")); }
    bool& bBPOverrideAspectRatioField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bBPOverrideAspectRatio"); }
    bool& bBPOverrideFPVMasterPoseComponentField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bBPOverrideFPVMasterPoseComponent"); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseTargetingEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBPUseTargetingEvents")); }
    BrzCampoPonteiro bBPUseWeaponCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBPUseWeaponCanFire")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallBPCustomSpawningEventOnProjectileSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCallBPCustomSpawningEventOnProjectileSpawn")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAccessoryBeSetOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCanAccessoryBeSetOn")); }
    BrzCampoPonteiro bCanAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCanAltFire")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCanBeInCluster")); }
    bool& bCanBeUsedAsEquipmentField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bCanBeUsedAsEquipment"); }
    BrzCampoPonteiro bCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCanFire")); }
    BrzCampoPonteiro bCheckBuffOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCheckBuffOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bClientTriggersHandleFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bClientTriggersHandleFiring")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bClimbable")); }
    BrzCampoPonteiro bClipScopeInYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bClipScopeInY")); }
    BrzCampoPonteiro bCloseRadialWheelOnAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCloseRadialWheelOnAltFire")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bCollideWhenPlacing")); }
    BrzCampoPonteiro bColorCrosshairBasedOnTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bColorCrosshairBasedOnTarget")); }
    BrzCampoPonteiro bColorizeMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bColorizeMuzzleFX")); }
    BrzCampoPonteiro bConsiderWeaponScaleOnAttachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bConsiderWeaponScaleOnAttach")); }
    BrzCampoPonteiro bConsumeAmmoItemOnReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bConsumeAmmoItemOnReload")); }
    BrzCampoPonteiro bConsumeAmmoOnUseAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bConsumeAmmoOnUseAmmo")); }
    BrzCampoPonteiro bConsumeZoomInOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bConsumeZoomInOut")); }
    bool& bConsumedDurabilityForThisMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bConsumedDurabilityForThisMeleeHit"); }
    bool& bCutsEnemyGrapplingCableField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bCutsEnemyGrapplingCable"); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDirectAltFireToSeconaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDirectAltFireToSeconaryAction")); }
    BrzCampoPonteiro bDirectPrimaryFireToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDirectPrimaryFireToAltFire")); }
    BrzCampoPonteiro bDirectPrimaryFireToSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDirectPrimaryFireToSecondaryAction")); }
    BrzCampoPonteiro bDirectTargetingToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDirectTargetingToAltFire")); }
    BrzCampoPonteiro bDirectTargetingToPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDirectTargetingToPrimaryFire")); }
    BrzCampoPonteiro bDirectTargetingToSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDirectTargetingToSecondaryAction")); }
    BrzCampoPonteiro bDisableGamepadAimAssistField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDisableGamepadAimAssist")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDisableRigidBodyAnimNodes")); }
    bool& bDisableShooterOnElectricStormField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bDisableShooterOnElectricStorm"); }
    bool& bDisableWeaponCrosshairField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bDisableWeaponCrosshair"); }
    BrzCampoPonteiro bDoMeleeSwingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDoMeleeSwing")); }
    BrzCampoPonteiro bDoesntUsePrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDoesntUsePrimalItem")); }
    BrzCampoPonteiro bDontActuallyConsumeItemAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDontActuallyConsumeItemAmmo")); }
    BrzCampoPonteiro bDontDeactivateWeaponInstigatorBuffsOnUnequipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDontDeactivateWeaponInstigatorBuffsOnUnequip")); }
    BrzCampoPonteiro bDontUseNativeTickMeleeSwingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDontUseNativeTickMeleeSwing")); }
    BrzCampoPonteiro bDurabilityUseWeaponMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bDurabilityUseWeaponMaterial")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bExchangedRoles")); }
    BrzCampoPonteiro bFPVMoveOffscreenWhenTurningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bFPVMoveOffscreenWhenTurning")); }
    BrzCampoPonteiro bFPVNonDefaultWeaponBonesHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bFPVNonDefaultWeaponBonesHidden")); }
    BrzCampoPonteiro bFPVScopedTargetingHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bFPVScopedTargetingHidesNonWeaponHUD")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bFindCameraComponentWhenViewTarget")); }
    bool& bFoceSimulatedTickField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bFoceSimulatedTick"); }
    bool& bForceAllowMountedWeaponryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bForceAllowMountedWeaponry"); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowPassengerTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceAllowPassengerTPV")); }
    BrzCampoPonteiro bForceAlwaysPlayEquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceAlwaysPlayEquipAnim")); }
    BrzCampoPonteiro bForceFirstPersonWhileTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceFirstPersonWhileTargeting")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceKeepEquippedWhileInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceKeepEquippedWhileInInventory")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOwnerControllerHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceOwnerControllerHighQualityViewerReplication")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForcePreventUseWhileRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForcePreventUseWhileRidingDino")); }
    BrzCampoPonteiro bForceReloadOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceReloadOnDestruction")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceShowCrosshairWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceShowCrosshairWhileFiring")); }
    bool& bForceTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bForceTPVCameraOffset"); }
    bool& bForceTPV_EquippedWhileRidingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bForceTPV_EquippedWhileRiding"); }
    BrzCampoPonteiro bForceTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceTargeting")); }
    BrzCampoPonteiro bForceTargetingOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForceTargetingOnDino")); }
    bool& bForceTickWithNoControllerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bForceTickWithNoController"); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGamepadLeftIsPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bGamepadLeftIsPrimaryFire")); }
    BrzCampoPonteiro bGamepadRightIsSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bGamepadRightIsSecondaryAction")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasLockedTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHasLockedTarget")); }
    BrzCampoPonteiro bHasPlayedReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHasPlayedReload")); }
    BrzCampoPonteiro bHasToggleableAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHasToggleableAccessory")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHidden")); }
    BrzCampoPonteiro bHideDamageSourceFromLogsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHideDamageSourceFromLogs")); }
    BrzCampoPonteiro bHideFPVMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHideFPVMesh")); }
    BrzCampoPonteiro bHideFPVMeshWhileTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHideFPVMeshWhileTargeting")); }
    BrzCampoPonteiro bHideLeftArmFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bHideLeftArmFPV")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnorePlayerReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIgnorePlayerReload")); }
    BrzCampoPonteiro bIgnoreReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIgnoreReloadState")); }
    BrzCampoPonteiro bIgnoreTargetingFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIgnoreTargetingFOV")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImpactAttachFXUsesPawnMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bImpactAttachFXUsesPawnMesh")); }
    BrzCampoPonteiro bInstantAccuracyResetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bInstantAccuracyReset")); }
    BrzCampoPonteiro bIsAccessoryActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsAccessoryActive")); }
    BrzCampoPonteiro bIsChainsawWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsChainsawWeapon")); }
    BrzCampoPonteiro bIsDefaultWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsDefaultWeapon")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsInDestruction")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsInvincible")); }
    BrzCampoPonteiro bIsLastAmmoInClipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsLastAmmoInClip")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsMapActor")); }
    BrzCampoPonteiro bIsMeleeWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsMeleeWeapon")); }
    BrzCampoPonteiro bIsSpyglassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsSpyglass")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bIsWeaponPingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsWeaponPing")); }
    BrzCampoPonteiro bIsWeaponTrackerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bIsWeaponTracker")); }
    bool& bLastMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bLastMeleeHit"); }
    bool& bLastMeleeHitStationaryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bLastMeleeHitStationary"); }
    BrzCampoPonteiro bListenToAppliedForecesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bListenToAppliedForeces")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bLoopedFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bLoopedFireAnim")); }
    BrzCampoPonteiro bLoopedFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bLoopedFireSound")); }
    BrzCampoPonteiro bLoopedMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bLoopedMuzzleFX")); }
    BrzCampoPonteiro bLoopingSimulateWeaponFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bLoopingSimulateWeaponFire")); }
    BrzCampoPonteiro bMeleeAttackHarvetUsableComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bMeleeAttackHarvetUsableComponents")); }
    BrzCampoPonteiro bMeleeHitCaptureDermisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bMeleeHitCaptureDermis")); }
    BrzCampoPonteiro bMeleeHitColorizesStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bMeleeHitColorizesStructures")); }
    BrzCampoPonteiro bMeleeHitUseMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bMeleeHitUseMuzzleFX")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetLoopedSimulatingWeaponFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetLoopedSimulatingWeaponFire")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyAllowUseWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOnlyAllowUseWhenRidingDino")); }
    BrzCampoPonteiro bOnlyDamagePawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOnlyDamagePawns")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOnlyInitialReplication")); }
    bool& bOnlyPassiveDurabilityWhenAccessoryActiveField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bOnlyPassiveDurabilityWhenAccessoryActive"); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseFirstMeleeAnimWithShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOnlyUseFirstMeleeAnimWithShield")); }
    bool& bOnlyUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bOnlyUseOnSeatingStructure"); }
    BrzCampoPonteiro bOverrideAimOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOverrideAimOffsets")); }
    BrzCampoPonteiro bOverrideStandingAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bOverrideStandingAnim")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarriedZoomInOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventCarriedZoomInOut")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventCrosshairDrawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventCrosshairDraw")); }
    BrzCampoPonteiro bPreventEquippingUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventEquippingUnderwater")); }
    BrzCampoPonteiro bPreventItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventItemColors")); }
    BrzCampoPonteiro bPreventLeftShoulderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventLeftShoulder")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventOnDedicatedServer")); }
    bool& bPreventOpeningInventoryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bPreventOpeningInventory"); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventRightShoulderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventRightShoulder")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPreventSaving")); }
    BrzCampoPonteiro bPrimaryFireDoesMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bPrimaryFireDoesMeleeAttack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReloadAnimForceTickPoseOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bReloadAnimForceTickPoseOnServer")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bReplayRewindable")); }
    bool& bReplicateCurrentAmmoInClipToNonOwnersField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bReplicateCurrentAmmoInClipToNonOwners"); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bReplicates")); }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bRestrictTPVCameraYaw"); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bSavedWhenStasised")); }
    BrzCampoPonteiro bScopeFullscreenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bScopeFullscreen")); }
    BrzCampoPonteiro bSecondaryActionStopsFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bSecondaryActionStopsFire")); }
    BrzCampoPonteiro bServerFireProjectileForceUpdateAimActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bServerFireProjectileForceUpdateAimActors")); }
    BrzCampoPonteiro bServerIgnoreCheckCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bServerIgnoreCheckCanFire")); }
    BrzCampoPonteiro bSpawnProjectileOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bSpawnProjectileOnClient")); }
    BrzCampoPonteiro bSpawnedByMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bSpawnedByMission")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bStasised")); }
    BrzCampoPonteiro bSupportsOffhandShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bSupportsOffhandShield")); }
    BrzCampoPonteiro bTargetUnTargetWithClickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bTargetUnTargetWithClick")); }
    BrzCampoPonteiro bTargetingForceOwnerControllerHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bTargetingForceOwnerControllerHighQualityViewerReplication")); }
    BrzCampoPonteiro bTargetingForceTraceFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bTargetingForceTraceFloatingHUD")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bTearOff")); }
    BrzCampoPonteiro bToggleAccessoryUseAltFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bToggleAccessoryUseAltFireSound")); }
    BrzCampoPonteiro bToggleAccessoryUseAltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bToggleAccessoryUseAltMuzzleFX")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseAbsoluteScaleOnAttachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAbsoluteScaleOnAttach")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAlternateAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAlternateAimOffset")); }
    BrzCampoPonteiro bUseAmmoOnFireProjectileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAmmoOnFireProjectile")); }
    BrzCampoPonteiro bUseAmmoOnFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAmmoOnFiring")); }
    BrzCampoPonteiro bUseAmmoReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAmmoReloadState")); }
    BrzCampoPonteiro bUseAmmoServerOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAmmoServerOnly")); }
    BrzCampoPonteiro bUseAmmoSupportsAdjustedAmmoPerShotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAmmoSupportsAdjustedAmmoPerShot")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseAutoReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseAutoReload")); }
    bool& bUseBPAdjustAmmoPerShotField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bUseBPAdjustAmmoPerShot"); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAnimNotifyCustomState_TickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPAnimNotifyCustomState_Tick")); }
    BrzCampoPonteiro bUseBPCanEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPCanEquip")); }
    BrzCampoPonteiro bUseBPCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPCanFire")); }
    BrzCampoPonteiro bUseBPCanMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPCanMeleeAttack")); }
    BrzCampoPonteiro bUseBPCanToggleAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPCanToggleAccessory")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPForceFirstPerson")); }
    BrzCampoPonteiro bUseBPForceTPVTargetingAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPForceTPVTargetingAnimation")); }
    BrzCampoPonteiro bUseBPGetActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetActorForTargetingTooltip")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetExtraPreviewMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetExtraPreviewMeshes")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetSelectedMeleeAttackAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetSelectedMeleeAttackAnim")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPGetTPVCameraOffset")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPModifyFOV")); }
    BrzCampoPonteiro bUseBPOnBurstFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOnBurstFinished")); }
    BrzCampoPonteiro bUseBPOnBurstStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOnBurstStarted")); }
    BrzCampoPonteiro bUseBPOnMaxDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOnMaxDurability")); }
    BrzCampoPonteiro bUseBPOnScopedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOnScoped")); }
    BrzCampoPonteiro bUseBPOnWeaponAnimPlayedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOnWeaponAnimPlayedNotify")); }
    BrzCampoPonteiro bUseBPOverrideAimDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverrideAimDirection")); }
    BrzCampoPonteiro bUseBPOverrideDamageImpactLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverrideDamageImpactLocation")); }
    BrzCampoPonteiro bUseBPOverrideMeleeSwingSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverrideMeleeSwingSockets")); }
    BrzCampoPonteiro bUseBPOverridePerShotDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverridePerShotDurability")); }
    BrzCampoPonteiro bUseBPOverrideRootRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverrideRootRotationOffset")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostSpawnMuzzleEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPPostSpawnMuzzleEffect")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventSwitchingWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPPreventSwitchingWeapon")); }
    BrzCampoPonteiro bUseBPRemainEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPRemainEquipped")); }
    bool& bUseBPSelectProjectileToFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bUseBPSelectProjectileToFire"); }
    BrzCampoPonteiro bUseBPShouldDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPShouldDealDamage")); }
    bool& bUseBPSpawnMeleeEffectsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bUseBPSpawnMeleeEffects"); }
    BrzCampoPonteiro bUseBPStartEquippedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPStartEquippedNotify")); }
    BrzCampoPonteiro bUseBPUpdateFirstPersonMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPUpdateFirstPersonMeshes")); }
    BrzCampoPonteiro bUseBPWeaponDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBPWeaponDealDamage")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBurstFinishAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBurstFinishAnim")); }
    BrzCampoPonteiro bUseBurstStartAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseBurstStartAnim")); }
    BrzCampoPonteiro bUseCanAccessoryBeSetOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseCanAccessoryBeSetOn")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCharacterMeleeDamageModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseCharacterMeleeDamageModifier")); }
    BrzCampoPonteiro bUseCustomSeatedAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseCustomSeatedAnim")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseEquipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseEquipNoAmmoClipAnim")); }
    bool& bUseFireCameraShakeScaleField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bUseFireCameraShakeScale"); }
    BrzCampoPonteiro bUseHandIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseHandIk")); }
    BrzCampoPonteiro bUseHideProjectileAnimEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseHideProjectileAnimEvents")); }
    BrzCampoPonteiro bUseLockOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseLockOn")); }
    BrzCampoPonteiro bUseMeleeNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseMeleeNoAmmoClipAnim")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUsePartialReloadAnim")); }
    BrzCampoPonteiro bUsePostUpdateTickForFPVParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUsePostUpdateTickForFPVParticles")); }
    BrzCampoPonteiro bUseScopeOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseScopeOverlay")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTPVWeaponMeshMeleeSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseTPVWeaponMeshMeleeSockets")); }
    BrzCampoPonteiro bUseTargetingAimDownSightsExposureAdjustmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseTargetingAimDownSightsExposureAdjustment")); }
    BrzCampoPonteiro bUseTargetingFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseTargetingFireAnim")); }
    BrzCampoPonteiro bUseTargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseTargetingReloadAnim")); }
    BrzCampoPonteiro bUseUnequipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bUseUnequipNoAmmoClipAnim")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWantsToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bWantsToAltFire")); }
    BrzCampoPonteiro bWantsToAutoReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bWantsToAutoReload")); }
    BrzCampoPonteiro bWantsToFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChargeStack.bWantsToFire")); }
    bool& bWasLastFireFromGamePadField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChargeStack.bWasLastFireFromGamePad"); }
};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_CHARGESTACK_H
