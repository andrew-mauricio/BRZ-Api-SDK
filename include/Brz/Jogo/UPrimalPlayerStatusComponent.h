// ==========================================================================
//  UPrimalPlayerStatusComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALPLAYERSTATUSCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALPLAYERSTATUSCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct FPrimalCharacterStatusStateThresholds;
struct USoundBase;
struct UTexture2D;


struct UPrimalPlayerStatusComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalPlayerStatusComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPlayerStatusComponent.InitializeComponent()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro InitializeComponent()
    {
        return NativeCall<void*>(nullptr, "UPrimalPlayerStatusComponent.InitializeComponent()");
    }

    FieldArray<float> AdditionalStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.AdditionalStatusValues" }; }
    FieldArray<float> AmountMaxGainedPerLevelUpValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.AmountMaxGainedPerLevelUpValue" }; }
    FieldArray<float> AmountMaxGainedPerLevelUpValueTamedField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.AmountMaxGainedPerLevelUpValueTamed" }; }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerStatusComponent.AssetUserData"); }
    float& BabyDinoConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.BabyDinoConsumingFoodRateMultiplier"); }
    float& BabyDinoStarvationHealthDecreaseRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.BabyDinoStarvationHealthDecreaseRateMultiplier"); }
    float& BabyGestationConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.BabyGestationConsumingFoodRateMultiplier"); }
    float& BabyMaxHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.BabyMaxHealthPercent"); }
    int& BaseCharacterLevelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPlayerStatusComponent.BaseCharacterLevel"); }
    float& BaseFoodConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.BaseFoodConsumptionRate"); }
    FieldArray<float> BaseLevelMaxStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.BaseLevelMaxStatusValues" }; }
    float& BaseWaterConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.BaseWaterConsumptionRate"); }
    FieldArray<unsigned char> CanLevelUpValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.CanLevelUpValue" }; }
    int& CharacterStatusComponentPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPlayerStatusComponent.CharacterStatusComponentPriority"); }
    float& CheatMaxWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.CheatMaxWeight"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerStatusComponent.ComponentTags"); }
    float& CraftEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.CraftEarnXPMultiplier"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPlayerStatusComponent.CreationMethod"); }
    float& CrouchedStaminaConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.CrouchedStaminaConsumptionMultiplier"); }
    float& CrouchedWaterFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.CrouchedWaterFoodConsumptionMultiplier"); }
    FieldArray<char> CurrentStatusStatesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.CurrentStatusStates" }; }
    FieldArray<float> CurrentStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.CurrentStatusValues" }; }
    float& CurrentStatusValuesReplicationIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.CurrentStatusValuesReplicationInterval"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPlayerStatusComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalPlayerStatusComponent.CustomTag"); }
    float& DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DefaultHyperthermicInsulation"); }
    float& DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DefaultHypothermicInsulation"); }
    float& DehydrationStaminaRecoveryRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DehydrationStaminaRecoveryRate"); }
    float& DehydrationTorpidityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DehydrationTorpidityMultiplier"); }
    float& DehyrdationHealthConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DehyrdationHealthConsumptionRate"); }
    float& DehyrdationTorpidityIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DehyrdationTorpidityIncreaseRate"); }
    float& DinoImprintingQualityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DinoImprintingQuality"); }
    FieldArray<float> DinoMaxStatAddMultiplierImprintingField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.DinoMaxStatAddMultiplierImprinting" }; }
    float& DinoRiderWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DinoRiderWeightMultiplier"); }
    float& DinoTamedAdultConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.DinoTamedAdultConsumingFoodRateMultiplier"); }
    FieldArray<unsigned char> DontUseValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.DontUseValue" }; }
    TArray<USoundBase*>& EnteredStatusStateSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "UPrimalPlayerStatusComponent.EnteredStatusStateSounds"); }
    TArray<USoundBase*>& ExitStatusStateSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "UPrimalPlayerStatusComponent.ExitStatusStateSounds"); }
    float& ExperienceAutomaticConsciousIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExperienceAutomaticConsciousIncreaseSpeed"); }
    float& ExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExperiencePoints"); }
    float& ExplorerNoteEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExplorerNoteEarnXPMultiplier"); }
    float& ExtraBabyDinoConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExtraBabyDinoConsumingFoodRateMultiplier"); }
    unsigned short& ExtraCharacterLevelField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalPlayerStatusComponent.ExtraCharacterLevel"); }
    float& ExtraOxygenSpeedStatMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExtraOxygenSpeedStatMultiplier"); }
    float& ExtraTamedDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExtraTamedDinoDamageMultiplier"); }
    float& ExtraTamedHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExtraTamedHealthMultiplier"); }
    BrzCampoPonteiro ExtraWidgetClassesForStatPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerStatusComponent.ExtraWidgetClassesForStatPanel")); }
    float& ExtraWildDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ExtraWildDinoDamageMultiplier"); }
    float& FoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.FoodConsumptionMultiplier"); }
    UTexture2D*& FoodStatusIconBackgroundOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalPlayerStatusComponent.FoodStatusIconBackgroundOverride"); }
    UTexture2D*& FoodStatusIconForegroundOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalPlayerStatusComponent.FoodStatusIconForegroundOverride"); }
    FString& FoodStatusNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalPlayerStatusComponent.FoodStatusNameOverride"); }
    float& FortitudeTorpidityDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.FortitudeTorpidityDecreaseMultiplier"); }
    float& FortitudeTorpidityIncreaseResistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.FortitudeTorpidityIncreaseResistance"); }
    float& GenericEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.GenericEarnXPMultiplier"); }
    float& GenericXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.GenericXPMultiplier"); }
    float& HarvestEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HarvestEarnXPMultiplier"); }
    float& HealthRecoveryDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HealthRecoveryDecreaseFoodMultiplier"); }
    float& HyperCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HyperCharacterInsulationValue"); }
    float& HyperthermiaDecreaseWaterMultiplierBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HyperthermiaDecreaseWaterMultiplierBase"); }
    float& HyperthermiaDecreaseWaterMultiplierPerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HyperthermiaDecreaseWaterMultiplierPerDegree"); }
    float& HyperthermiaTemperatureThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HyperthermiaTemperatureThreshold"); }
    float& HyperthermicHealthDecreaseRateBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HyperthermicHealthDecreaseRateBase"); }
    float& HyperthermicHealthDecreaseRatePerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HyperthermicHealthDecreaseRatePerDegree"); }
    float& HypoCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HypoCharacterInsulationValue"); }
    float& HypothermiaDecreaseFoodMultiplierBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HypothermiaDecreaseFoodMultiplierBase"); }
    float& HypothermiaDecreaseFoodMultiplierPerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HypothermiaDecreaseFoodMultiplierPerDegree"); }
    float& HypothermiaTemperatureThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HypothermiaTemperatureThreshold"); }
    float& HypothermicHealthDecreaseRateBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HypothermicHealthDecreaseRateBase"); }
    float& HypothermicHealthDecreaseRatePerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.HypothermicHealthDecreaseRatePerDegree"); }
    float& InjuredSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.InjuredSpeedModifier"); }
    float& InjuredTorpidityIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.InjuredTorpidityIncreaseMultiplier"); }
    float& InsulationHyperthermiaOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.InsulationHyperthermiaOffsetExponent"); }
    float& InsulationHyperthermiaOffsetScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.InsulationHyperthermiaOffsetScaler"); }
    float& InsulationHypothermiaOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.InsulationHypothermiaOffsetExponent"); }
    float& InsulationHypothermiaOffsetScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.InsulationHypothermiaOffsetScaler"); }
    float& JumpStaminaConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.JumpStaminaConsumption"); }
    float& KillEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.KillEarnXPMultiplier"); }
    float& KillXPMultiplierPerCharacterLevelField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.KillXPMultiplierPerCharacterLevel"); }
    float& KnockedOutTorpidityRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.KnockedOutTorpidityRecoveryRateMultiplier"); }
    float& LastHyperthermalCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.LastHyperthermalCharacterInsulationValue"); }
    float& LastHypothermalCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.LastHypothermalCharacterInsulationValue"); }
    unsigned char& LevelExperienceRampTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalPlayerStatusComponent.LevelExperienceRampType"); }
    float& MaxExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.MaxExperiencePoints"); }
    FieldArray<unsigned char> MaxGainedPerLevelUpValueIsPercentField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.MaxGainedPerLevelUpValueIsPercent" }; }
    FieldArray<float> MaxLevelUpMultiplierField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.MaxLevelUpMultiplier" }; }
    unsigned char& MaxStatusValueToAutoUpdateField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalPlayerStatusComponent.MaxStatusValueToAutoUpdate"); }
    FieldArray<float> MaxStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.MaxStatusValues" }; }
    float& MaxTamingEffectivenessBaseLevelMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.MaxTamingEffectivenessBaseLevelMultiplier"); }
    float& MinInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.MinInventoryWeight"); }
    float& MountedDinoDinoWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.MountedDinoDinoWeightMultiplier"); }
    float& MountedReceiveRiderXPPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.MountedReceiveRiderXPPercent"); }
    float& MovingStaminaRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.MovingStaminaRecoveryRateMultiplier"); }
    FieldArray<float> MutationMultiplierField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.MutationMultiplier" }; }
    FieldArray<unsigned char> NumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.NumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned char> NumberOfLevelUpPointsAppliedTamedField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.NumberOfLevelUpPointsAppliedTamed" }; }
    FieldArray<unsigned char> NumberOfMutationsAppliedTamedField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.NumberOfMutationsAppliedTamed" }; }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerStatusComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerStatusComponent.OnComponentDeactivated")); }
    float& PoopItemFoodConsumptionCacheField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.PoopItemFoodConsumptionCache"); }
    float& PoopItemMaxFoodConsumptionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.PoopItemMaxFoodConsumptionInterval"); }
    float& PoopItemMinFoodConsumptionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.PoopItemMinFoodConsumptionInterval"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalPlayerStatusComponent.PrimaryComponentTick"); }
    float& ProneStaminaConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ProneStaminaConsumptionMultiplier"); }
    float& ProneWaterFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ProneWaterFoodConsumptionMultiplier"); }
    FieldArray<unsigned char> RecoveryRateIsPercentField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.RecoveryRateIsPercent" }; }
    FieldArray<float> RecoveryRateStatusValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.RecoveryRateStatusValue" }; }
    BrzCampoPonteiro RegainOxygenDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerStatusComponent.RegainOxygenDamageType")); }
    FieldArray<float> ReplicatedBaseLevelMaxStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.ReplicatedBaseLevelMaxStatusValues" }; }
    FieldArray<float> ReplicatedCurrentStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.ReplicatedCurrentStatusValues" }; }
    float& ReplicatedExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ReplicatedExperiencePoints"); }
    FieldArray<float> ReplicatedGlobalCurrentStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.ReplicatedGlobalCurrentStatusValues" }; }
    FieldArray<float> ReplicatedGlobalMaxStatusValuesField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.ReplicatedGlobalMaxStatusValues" }; }
    float& RunningStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.RunningStaminaConsumptionRate"); }
    float& ShareXPWithTribeRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.ShareXPWithTribeRange"); }
    FName& SkillTreeQuickAccessField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalPlayerStatusComponent.SkillTreeQuickAccess"); }
    FieldArray<unsigned char> SkipWildLevelUpValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.SkipWildLevelUpValue" }; }
    float& SpecialEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.SpecialEarnXPMultiplier"); }
    float& StaminaConsumptionDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StaminaConsumptionDecreaseFoodMultiplier"); }
    float& StaminaConsumptionDecreaseWaterMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StaminaConsumptionDecreaseWaterMultiplier"); }
    float& StaminaRecoveryDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StaminaRecoveryDecreaseFoodMultiplier"); }
    float& StaminaRecoveryDecreaseWaterMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StaminaRecoveryDecreaseWaterMultiplier"); }
    float& StaminaRecoveryExtraResourceDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StaminaRecoveryExtraResourceDecreaseMultiplier"); }
    float& StarvationHealthConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StarvationHealthConsumptionRate"); }
    float& StarvationTorpidityIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StarvationTorpidityIncreaseRate"); }
    float& StarvationTorpidityMultuplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.StarvationTorpidityMultuplier"); }
    FieldArray<FPrimalCharacterStatusStateThresholds> StatusStateThresholdsField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.StatusStateThresholds" }; }
    TArray<void*>& StatusValueModifierDescriptionIndicesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerStatusComponent.StatusValueModifierDescriptionIndices"); }
    TArray<void*>& StatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerStatusComponent.StatusValueModifiers"); }
    TArray<void*>& StatusValueNameOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerStatusComponent.StatusValueNameOverrides"); }
    BrzCampoPonteiro StatusValueTooltipStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerStatusComponent.StatusValueTooltipStrings")); }
    float& SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.SubmergedOxygenDecreaseSpeed"); }
    float& SubmergedWaterIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.SubmergedWaterIncreaseRate"); }
    float& SuffocationHealthPercentDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.SuffocationHealthPercentDecreaseSpeed"); }
    float& SwimmingOrFlyingStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.SwimmingOrFlyingStaminaConsumptionRate"); }
    float& SwimmingStaminaRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.SwimmingStaminaRecoveryRateMultiplier"); }
    float& TamedBaseHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.TamedBaseHealthMultiplier"); }
    float& TamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.TamedIneffectivenessModifier"); }
    float& TamedLandDinoSwimSpeedLevelUpEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.TamedLandDinoSwimSpeedLevelUpEffectiveness"); }
    float& TamingIneffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.TamingIneffectivenessMultiplier"); }
    FieldArray<float> TamingMaxStatAdditionsField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.TamingMaxStatAdditions" }; }
    FieldArray<float> TamingMaxStatMultipliersField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.TamingMaxStatMultipliers" }; }
    float& TheMaxTorporIncreasePerBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.TheMaxTorporIncreasePerBaseLevel"); }
    FieldArray<float> TimeToRecoverAfterDecreaseStatusValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.TimeToRecoverAfterDecreaseStatusValue" }; }
    FieldArray<float> TimeToRecoverAfterDepletionStatusValueField() const
    { return { (void*)this, "UPrimalPlayerStatusComponent.TimeToRecoverAfterDepletionStatusValue" }; }
    float& TorporExitPercentThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.TorporExitPercentThreshold"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPlayerStatusComponent.UCSSerializationIndex"); }
    float& UnsubmergedOxygenIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.UnsubmergedOxygenIncreaseSpeed"); }
    float& WakingTameFoodConsumptionRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WakingTameFoodConsumptionRateMultiplier"); }
    float& WalkingStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WalkingStaminaConsumptionRate"); }
    float& WaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WaterConsumptionMultiplier"); }
    float& WeightJumpDecreasePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WeightJumpDecreasePower"); }
    float& WeightMultiplierForCarriedPassengersField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WeightMultiplierForCarriedPassengers"); }
    float& WeightMultiplierForPlatformPassengersInventoryField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WeightMultiplierForPlatformPassengersInventory"); }
    float& WeightMultiplierWhenCarriedOrBasedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WeightMultiplierWhenCarriedOrBased"); }
    float& WeightSpeedDecreasePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WeightSpeedDecreasePower"); }
    float& WindedSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WindedSpeedModifier"); }
    float& WindedSpeedModifierSwimmingOrFlyingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.WindedSpeedModifierSwimmingOrFlying"); }
    float& XPEarnedPerStaminaConsumedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPlayerStatusComponent.XPEarnedPerStaminaConsumed"); }
    BitFieldValue<bool, unsigned __int32> bAddExperienceAutomatically()
    { return { (void*)this, "bAddExperienceAutomatically" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLevelUps()
    { return { (void*)this, "bAllowLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSharingXPWithTribe()
    { return { (void*)this, "bAllowSharingXPWithTribe" }; }
    BitFieldValue<bool, unsigned __int32> bAlsoUseLevelUpAnimWhenSwimming()
    { return { (void*)this, "bAlsoUseLevelUpAnimWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bApplyingStatusValueModifiers()
    { return { (void*)this, "bApplyingStatusValueModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyUpdateTemperature()
    { return { (void*)this, "bAutomaticallyUpdateTemperature" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCanGetHungry()
    { return { (void*)this, "bCanGetHungry" }; }
    BitFieldValue<bool, unsigned __int32> bCanSuffocate()
    { return { (void*)this, "bCanSuffocate" }; }
    BitFieldValue<bool, unsigned __int32> bCanSuffocateIfTamed()
    { return { (void*)this, "bCanSuffocateIfTamed" }; }
    BitFieldValue<bool, unsigned __int32> bCheatStatus()
    { return { (void*)this, "bCheatStatus" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeFoodAutomatically()
    { return { (void*)this, "bConsumeFoodAutomatically" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeWaterAutomatically()
    { return { (void*)this, "bConsumeWaterAutomatically" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDontScaleMeleeDamage()
    { return { (void*)this, "bDontScaleMeleeDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDontUseSpeedMultipleAsSpeed()
    { return { (void*)this, "bDontUseSpeedMultipleAsSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowStatusModifierSortingWhenTamed()
    { return { (void*)this, "bForceAllowStatusModifierSortingWhenTamed" }; }
    BitFieldValue<bool, unsigned __int32> bForceDefaultSpeed()
    { return { (void*)this, "bForceDefaultSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bForceGainOxygen()
    { return { (void*)this, "bForceGainOxygen" }; }
    BitFieldValue<bool, unsigned __int32> bForceRefreshWeight()
    { return { (void*)this, "bForceRefreshWeight" }; }
    BitFieldValue<bool, unsigned __int32> bFreezeStatusValues()
    { return { (void*)this, "bFreezeStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHideFoodStatusFromHUD()
    { return { (void*)this, "bHideFoodStatusFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideStaminaStatusFromHUD()
    { return { (void*)this, "bHideStaminaStatusFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideXPStatusFromHUD()
    { return { (void*)this, "bHideXPStatusFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreStatusSpeedModifierIfSwimming()
    { return { (void*)this, "bIgnoreStatusSpeedModifierIfSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteFood()
    { return { (void*)this, "bInfiniteFood" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteStats()
    { return { (void*)this, "bInfiniteStats" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedBaseLevelMaxStatusValues()
    { return { (void*)this, "bInitializedBaseLevelMaxStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bNeverAllowXP()
    { return { (void*)this, "bNeverAllowXP" }; }
    BitFieldValue<bool, unsigned __int32> bNoStaminaRecoveryWhenStarving()
    { return { (void*)this, "bNoStaminaRecoveryWhenStarving" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTamedStatReplication()
    { return { (void*)this, "bPreventTamedStatReplication" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateGlobalStatusValues()
    { return { (void*)this, "bReplicateGlobalStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRunningConsumesStamina()
    { return { (void*)this, "bRunningConsumesStamina" }; }
    BitFieldValue<bool, unsigned __int32> bRunningUseDefaultSpeed()
    { return { (void*)this, "bRunningUseDefaultSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bServerFirstInitialized()
    { return { (void*)this, "bServerFirstInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bStatusSpeedModifierOnlyFullOrNone()
    { return { (void*)this, "bStatusSpeedModifierOnlyFullOrNone" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustStatusValueModification()
    { return { (void*)this, "bUseBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanLevelUp()
    { return { (void*)this, "bUseBPCanLevelUp" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOverrideMaxStatusValue()
    { return { (void*)this, "bUseBPGetOverrideMaxStatusValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetStatusNameString()
    { return { (void*)this, "bUseBPGetStatusNameString" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyMaxLevel()
    { return { (void*)this, "bUseBPModifyMaxLevel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideShouldSkipWildLevelUpValue()
    { return { (void*)this, "bUseBPOverrideShouldSkipWildLevelUpValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseStamina()
    { return { (void*)this, "bUseStamina" }; }
    BitFieldValue<bool, unsigned __int32> bUseStatusSpeedModifiers()
    { return { (void*)this, "bUseStatusSpeedModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bWalkingConsumesStamina()
    { return { (void*)this, "bWalkingConsumesStamina" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALPLAYERSTATUSCOMPONENT_H
