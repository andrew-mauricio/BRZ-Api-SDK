// ==========================================================================
//  FPrimalBotCharacterSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALBOTCHARACTERSPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALBOTCHARACTERSPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct UAnimSequence;
struct USoundBase;

#include "FPrimalDinoCharacterSparseClassData.h"

struct FPrimalBotCharacterSparseClassData : public FPrimalDinoCharacterSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalBotCharacterSparseClassData"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalBotCharacterSparseClassData.operator=(FPrimalBotCharacterSparseClassData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalBotCharacterSparseClassData.operator=(FPrimalBotCharacterSparseClassData&)", a0);
    }

    float& AcquiredTargetAnimPercentageToPlayField() const
    { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.AcquiredTargetAnimPercentageToPlay"); }
    TArray<UAnimMontage*>& AcquiredTargetAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "FPrimalBotCharacterSparseClassData.AcquiredTargetAnimations"); }
    UAnimSequence*& AlternateDinoRidingAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.AlternateDinoRidingAnimation"); }
    UAnimSequence*& AlternateDinoRidingMoveAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.AlternateDinoRidingMoveAnimation"); }
    BrzCampoPonteiro AnimSharingRidingStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.AnimSharingRidingStates")); }
    int& BotVoiceCollectionIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalBotCharacterSparseClassData.BotVoiceCollectionIndex"); }
    BrzCampoPonteiro BuffToGiveOnShieldBlockDamageDepletedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.BuffToGiveOnShieldBlockDamageDepleted")); }
    BrzCampoPonteiro BuffToGiveToDamageCauserOnShieldBlockDamageDepletedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.BuffToGiveToDamageCauserOnShieldBlockDamageDepleted")); }
    TArray<void*>& BuffsPreventBlockingWithShieldField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.BuffsPreventBlockingWithShield"); }
    BrzCampoPonteiro ClaimSeatingStructureCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.ClaimSeatingStructureCooldown")); }
    BrzCampoPonteiro DefaultAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.DefaultAnimBlueprint")); }
    UAnimSequence*& DefaultDinoRidingAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultDinoRidingAnimation"); }
    UAnimSequence*& DefaultDinoRidingMoveAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultDinoRidingMoveAnimation"); }
    int& DefaultEquippedWeaponIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalBotCharacterSparseClassData.DefaultEquippedWeaponIndex"); }
    BrzCampoPonteiro DefaultMaxSeatingStructureControlDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.DefaultMaxSeatingStructureControlDuration")); }
    UAnimSequence*& DefaultSeatingAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultSeatingAnimation"); }
    UAnimSequence*& DefaultShieldAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultShieldAnimation"); }
    UAnimMontage*& DefaultWeaponEquipAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.DefaultWeaponEquipAnimation"); }
    UAnimMontage*& DefaultWeaponUnequipAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.DefaultWeaponUnequipAnimation"); }
    UAnimMontage*& FireBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.FireBallistaAnimation"); }
    bool& HasMeleeWeaponField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalBotCharacterSparseClassData.HasMeleeWeapon"); }
    float& MaxShieldBlockDamageField() const
    { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.MaxShieldBlockDamage"); }
    TArray<void*>& NonWeaponAttacksField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.NonWeaponAttacks"); }
    USoundBase*& OnShieldBlockDamageDepletedSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalBotCharacterSparseClassData.OnShieldBlockDamageDepletedSoundToPlay"); }
    TArray<void*>& RandomFacialHairDyeColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.RandomFacialHairDyeColors"); }
    TArray<void*>& RandomFacialHairTipDyeColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.RandomFacialHairTipDyeColors"); }
    TArray<void*>& RandomHairDyeColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.RandomHairDyeColors"); }
    TArray<void*>& RandomHairTipDyeColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.RandomHairTipDyeColors"); }
    UAnimMontage*& ReloadBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.ReloadBallistaAnimation"); }
    TArray<void*>& RideableDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalBotCharacterSparseClassData.RideableDinoClasses"); }
    float& ShieldBlockDamageRecoveryRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ShieldBlockDamageRecoveryRate"); }
    float& ShieldBlockDamageTimeToStartRecoveringField() const
    { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ShieldBlockDamageTimeToStartRecovering"); }
    UAnimSequence*& ShieldCoverAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.ShieldCoverAnimation"); }
    BrzCampoPonteiro StructureClassesToSitOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalBotCharacterSparseClassData.StructureClassesToSitOn")); }
    float& UnequipDelayWhenNotInCombatField() const
    { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.UnequipDelayWhenNotInCombat"); }
    FName& WeaponDefaultAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalBotCharacterSparseClassData.WeaponDefaultAttachPoint"); }
    float& WeaponSwitchMinTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.WeaponSwitchMinTime"); }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideColorIDForEquipmentAttachment()
    { return { (void*)this, "bUseBPOverrideColorIDForEquipmentAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMinAttackRange()
    { return { (void*)this, "bUseBPGetMinAttackRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMaxAttackRange()
    { return { (void*)this, "bUseBPGetMaxAttackRange" }; }
    BitFieldValue<bool, unsigned __int32> bUnequipWeaponWhenNotInCombat()
    { return { (void*)this, "bUnequipWeaponWhenNotInCombat" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanEquipWeapon()
    { return { (void*)this, "bUseBPCanEquipWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMeleeSocketLocation()
    { return { (void*)this, "bUseBPGetMeleeSocketLocation" }; }
    BitFieldValue<bool, unsigned __int32> bInstantWeaponOnlyDamageTarget()
    { return { (void*)this, "bInstantWeaponOnlyDamageTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFireInstantWeapon()
    { return { (void*)this, "bUseBPFireInstantWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideInstantWeaponConfig()
    { return { (void*)this, "bUseBPOverrideInstantWeaponConfig" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeleeDamageAmountAsBaseInstantDamage()
    { return { (void*)this, "bUseMeleeDamageAmountAsBaseInstantDamage" }; }
    BitFieldValue<bool, unsigned __int32> bScaleInstantDamageWithDinoDamage()
    { return { (void*)this, "bScaleInstantDamageWithDinoDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDebugInstantWeaponTraces()
    { return { (void*)this, "bDebugInstantWeaponTraces" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanRideDino()
    { return { (void*)this, "bUseBPCanRideDino" }; }
    BitFieldValue<bool, unsigned __int32> bUsingCustomBotVoiceCollection()
    { return { (void*)this, "bUsingCustomBotVoiceCollection" }; }
    BitFieldValue<bool, unsigned __int32> bUsingRandomBotVoiceCollection()
    { return { (void*)this, "bUsingRandomBotVoiceCollection" }; }
    BitFieldValue<bool, unsigned __int32> HasMeleeWeapon()
    { return { (void*)this, "HasMeleeWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInflictPerBoneDamage()
    { return { (void*)this, "bAllowInflictPerBoneDamage" }; }
    BitFieldValue<bool, unsigned __int32> bMissionBotOnlyNetRelevantForPlayersOnMission()
    { return { (void*)this, "bMissionBotOnlyNetRelevantForPlayersOnMission" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanSitOnStructure()
    { return { (void*)this, "bUseBPCanSitOnStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeVoiceCollection()
    { return { (void*)this, "bUseBPInitializeVoiceCollection" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreSetupCharacterMesh()
    { return { (void*)this, "bUseBPPreSetupCharacterMesh" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlayerSleeping()
    { return { (void*)this, "bUsePlayerSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bUseRandomRangeForGenerateBodyType()
    { return { (void*)this, "bUseRandomRangeForGenerateBodyType" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALBOTCHARACTERSPARSECLASSDATA_H
