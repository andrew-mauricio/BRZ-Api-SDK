// ==========================================================================
//  UPrimalDinoStatusComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALDINOSTATUSCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALDINOSTATUSCOMPONENT_H

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


struct UPrimalDinoStatusComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalDinoStatusComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoStatusComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllo
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=664+bytes40+grafo=24/24]]
    static BrzPonteiro GetLifetimeReplicatedProps(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalDinoStatusComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    FieldArray<float> AdditionalStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.AdditionalStatusValues" }; }
    FieldArray<float> AmountMaxGainedPerLevelUpValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.AmountMaxGainedPerLevelUpValue" }; }
    FieldArray<float> AmountMaxGainedPerLevelUpValueTamedField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.AmountMaxGainedPerLevelUpValueTamed" }; }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoStatusComponent.AssetUserData"); }
    float& BabyDinoConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.BabyDinoConsumingFoodRateMultiplier"); }
    float& BabyDinoStarvationHealthDecreaseRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.BabyDinoStarvationHealthDecreaseRateMultiplier"); }
    float& BabyGestationConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.BabyGestationConsumingFoodRateMultiplier"); }
    float& BabyMaxHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.BabyMaxHealthPercent"); }
    int& BaseCharacterLevelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoStatusComponent.BaseCharacterLevel"); }
    float& BaseFoodConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.BaseFoodConsumptionRate"); }
    FieldArray<float> BaseLevelMaxStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.BaseLevelMaxStatusValues" }; }
    float& BaseWaterConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.BaseWaterConsumptionRate"); }
    FieldArray<unsigned char> CanLevelUpValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.CanLevelUpValue" }; }
    int& CharacterStatusComponentPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoStatusComponent.CharacterStatusComponentPriority"); }
    float& CheatMaxWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.CheatMaxWeight"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoStatusComponent.ComponentTags"); }
    float& CraftEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.CraftEarnXPMultiplier"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoStatusComponent.CreationMethod"); }
    float& CrouchedStaminaConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.CrouchedStaminaConsumptionMultiplier"); }
    float& CrouchedWaterFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.CrouchedWaterFoodConsumptionMultiplier"); }
    FieldArray<char> CurrentStatusStatesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.CurrentStatusStates" }; }
    FieldArray<float> CurrentStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.CurrentStatusValues" }; }
    float& CurrentStatusValuesReplicationIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.CurrentStatusValuesReplicationInterval"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoStatusComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoStatusComponent.CustomTag"); }
    float& DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DefaultHyperthermicInsulation"); }
    float& DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DefaultHypothermicInsulation"); }
    float& DehydrationStaminaRecoveryRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DehydrationStaminaRecoveryRate"); }
    float& DehydrationTorpidityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DehydrationTorpidityMultiplier"); }
    float& DehyrdationHealthConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DehyrdationHealthConsumptionRate"); }
    float& DehyrdationTorpidityIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DehyrdationTorpidityIncreaseRate"); }
    float& DinoImprintingQualityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DinoImprintingQuality"); }
    FieldArray<float> DinoMaxStatAddMultiplierImprintingField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.DinoMaxStatAddMultiplierImprinting" }; }
    float& DinoRiderWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DinoRiderWeightMultiplier"); }
    float& DinoTamedAdultConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.DinoTamedAdultConsumingFoodRateMultiplier"); }
    FieldArray<unsigned char> DontUseValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.DontUseValue" }; }
    TArray<USoundBase*>& EnteredStatusStateSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "UPrimalDinoStatusComponent.EnteredStatusStateSounds"); }
    TArray<USoundBase*>& ExitStatusStateSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "UPrimalDinoStatusComponent.ExitStatusStateSounds"); }
    float& ExperienceAutomaticConsciousIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExperienceAutomaticConsciousIncreaseSpeed"); }
    float& ExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExperiencePoints"); }
    float& ExplorerNoteEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExplorerNoteEarnXPMultiplier"); }
    float& ExtraBabyDinoConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExtraBabyDinoConsumingFoodRateMultiplier"); }
    unsigned short& ExtraCharacterLevelField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalDinoStatusComponent.ExtraCharacterLevel"); }
    float& ExtraOxygenSpeedStatMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExtraOxygenSpeedStatMultiplier"); }
    float& ExtraTamedDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExtraTamedDinoDamageMultiplier"); }
    float& ExtraTamedHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExtraTamedHealthMultiplier"); }
    BrzCampoPonteiro ExtraWidgetClassesForStatPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoStatusComponent.ExtraWidgetClassesForStatPanel")); }
    float& ExtraWildDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ExtraWildDinoDamageMultiplier"); }
    float& FoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.FoodConsumptionMultiplier"); }
    UTexture2D*& FoodStatusIconBackgroundOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalDinoStatusComponent.FoodStatusIconBackgroundOverride"); }
    UTexture2D*& FoodStatusIconForegroundOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalDinoStatusComponent.FoodStatusIconForegroundOverride"); }
    FString& FoodStatusNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoStatusComponent.FoodStatusNameOverride"); }
    float& FortitudeTorpidityDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.FortitudeTorpidityDecreaseMultiplier"); }
    float& FortitudeTorpidityIncreaseResistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.FortitudeTorpidityIncreaseResistance"); }
    float& GenericEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.GenericEarnXPMultiplier"); }
    float& GenericXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.GenericXPMultiplier"); }
    float& HarvestEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HarvestEarnXPMultiplier"); }
    float& HealthRecoveryDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HealthRecoveryDecreaseFoodMultiplier"); }
    float& HyperCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HyperCharacterInsulationValue"); }
    float& HyperthermiaDecreaseWaterMultiplierBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HyperthermiaDecreaseWaterMultiplierBase"); }
    float& HyperthermiaDecreaseWaterMultiplierPerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HyperthermiaDecreaseWaterMultiplierPerDegree"); }
    float& HyperthermiaTemperatureThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HyperthermiaTemperatureThreshold"); }
    float& HyperthermicHealthDecreaseRateBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HyperthermicHealthDecreaseRateBase"); }
    float& HyperthermicHealthDecreaseRatePerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HyperthermicHealthDecreaseRatePerDegree"); }
    float& HypoCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HypoCharacterInsulationValue"); }
    float& HypothermiaDecreaseFoodMultiplierBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HypothermiaDecreaseFoodMultiplierBase"); }
    float& HypothermiaDecreaseFoodMultiplierPerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HypothermiaDecreaseFoodMultiplierPerDegree"); }
    float& HypothermiaTemperatureThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HypothermiaTemperatureThreshold"); }
    float& HypothermicHealthDecreaseRateBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HypothermicHealthDecreaseRateBase"); }
    float& HypothermicHealthDecreaseRatePerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.HypothermicHealthDecreaseRatePerDegree"); }
    float& InjuredSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.InjuredSpeedModifier"); }
    float& InjuredTorpidityIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.InjuredTorpidityIncreaseMultiplier"); }
    float& InsulationHyperthermiaOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.InsulationHyperthermiaOffsetExponent"); }
    float& InsulationHyperthermiaOffsetScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.InsulationHyperthermiaOffsetScaler"); }
    float& InsulationHypothermiaOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.InsulationHypothermiaOffsetExponent"); }
    float& InsulationHypothermiaOffsetScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.InsulationHypothermiaOffsetScaler"); }
    float& JumpStaminaConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.JumpStaminaConsumption"); }
    float& KillEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.KillEarnXPMultiplier"); }
    float& KillXPMultiplierPerCharacterLevelField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.KillXPMultiplierPerCharacterLevel"); }
    float& KnockedOutTorpidityRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.KnockedOutTorpidityRecoveryRateMultiplier"); }
    float& LastHyperthermalCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.LastHyperthermalCharacterInsulationValue"); }
    float& LastHypothermalCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.LastHypothermalCharacterInsulationValue"); }
    unsigned char& LevelExperienceRampTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoStatusComponent.LevelExperienceRampType"); }
    float& MaxExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.MaxExperiencePoints"); }
    FieldArray<unsigned char> MaxGainedPerLevelUpValueIsPercentField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.MaxGainedPerLevelUpValueIsPercent" }; }
    FieldArray<float> MaxLevelUpMultiplierField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.MaxLevelUpMultiplier" }; }
    unsigned char& MaxStatusValueToAutoUpdateField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoStatusComponent.MaxStatusValueToAutoUpdate"); }
    FieldArray<float> MaxStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.MaxStatusValues" }; }
    float& MaxTamingEffectivenessBaseLevelMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.MaxTamingEffectivenessBaseLevelMultiplier"); }
    float& MinInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.MinInventoryWeight"); }
    float& MountedDinoDinoWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.MountedDinoDinoWeightMultiplier"); }
    float& MountedReceiveRiderXPPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.MountedReceiveRiderXPPercent"); }
    float& MovingStaminaRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.MovingStaminaRecoveryRateMultiplier"); }
    FieldArray<float> MutationMultiplierField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.MutationMultiplier" }; }
    FieldArray<unsigned char> NumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.NumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned char> NumberOfLevelUpPointsAppliedTamedField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.NumberOfLevelUpPointsAppliedTamed" }; }
    FieldArray<unsigned char> NumberOfMutationsAppliedTamedField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.NumberOfMutationsAppliedTamed" }; }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoStatusComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoStatusComponent.OnComponentDeactivated")); }
    float& PoopItemFoodConsumptionCacheField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.PoopItemFoodConsumptionCache"); }
    float& PoopItemMaxFoodConsumptionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.PoopItemMaxFoodConsumptionInterval"); }
    float& PoopItemMinFoodConsumptionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.PoopItemMinFoodConsumptionInterval"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalDinoStatusComponent.PrimaryComponentTick"); }
    float& ProneStaminaConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ProneStaminaConsumptionMultiplier"); }
    float& ProneWaterFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ProneWaterFoodConsumptionMultiplier"); }
    FieldArray<unsigned char> RecoveryRateIsPercentField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.RecoveryRateIsPercent" }; }
    FieldArray<float> RecoveryRateStatusValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.RecoveryRateStatusValue" }; }
    BrzCampoPonteiro RegainOxygenDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoStatusComponent.RegainOxygenDamageType")); }
    FieldArray<float> ReplicatedBaseLevelMaxStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.ReplicatedBaseLevelMaxStatusValues" }; }
    FieldArray<float> ReplicatedCurrentStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.ReplicatedCurrentStatusValues" }; }
    float& ReplicatedExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ReplicatedExperiencePoints"); }
    FieldArray<float> ReplicatedGlobalCurrentStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.ReplicatedGlobalCurrentStatusValues" }; }
    FieldArray<float> ReplicatedGlobalMaxStatusValuesField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.ReplicatedGlobalMaxStatusValues" }; }
    float& RunningStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.RunningStaminaConsumptionRate"); }
    float& ShareXPWithTribeRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.ShareXPWithTribeRange"); }
    FName& SkillTreeQuickAccessField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoStatusComponent.SkillTreeQuickAccess"); }
    FieldArray<unsigned char> SkipWildLevelUpValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.SkipWildLevelUpValue" }; }
    float& SpecialEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.SpecialEarnXPMultiplier"); }
    float& StaminaConsumptionDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StaminaConsumptionDecreaseFoodMultiplier"); }
    float& StaminaConsumptionDecreaseWaterMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StaminaConsumptionDecreaseWaterMultiplier"); }
    float& StaminaRecoveryDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StaminaRecoveryDecreaseFoodMultiplier"); }
    float& StaminaRecoveryDecreaseWaterMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StaminaRecoveryDecreaseWaterMultiplier"); }
    float& StaminaRecoveryExtraResourceDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StaminaRecoveryExtraResourceDecreaseMultiplier"); }
    float& StarvationHealthConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StarvationHealthConsumptionRate"); }
    float& StarvationTorpidityIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StarvationTorpidityIncreaseRate"); }
    float& StarvationTorpidityMultuplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.StarvationTorpidityMultuplier"); }
    FieldArray<FPrimalCharacterStatusStateThresholds> StatusStateThresholdsField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.StatusStateThresholds" }; }
    TArray<void*>& StatusValueModifierDescriptionIndicesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoStatusComponent.StatusValueModifierDescriptionIndices"); }
    TArray<void*>& StatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoStatusComponent.StatusValueModifiers"); }
    TArray<void*>& StatusValueNameOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalDinoStatusComponent.StatusValueNameOverrides"); }
    BrzCampoPonteiro StatusValueTooltipStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoStatusComponent.StatusValueTooltipStrings")); }
    float& SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.SubmergedOxygenDecreaseSpeed"); }
    float& SubmergedWaterIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.SubmergedWaterIncreaseRate"); }
    float& SuffocationHealthPercentDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.SuffocationHealthPercentDecreaseSpeed"); }
    float& SwimmingOrFlyingStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.SwimmingOrFlyingStaminaConsumptionRate"); }
    float& SwimmingStaminaRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.SwimmingStaminaRecoveryRateMultiplier"); }
    float& TamedBaseHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.TamedBaseHealthMultiplier"); }
    float& TamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.TamedIneffectivenessModifier"); }
    float& TamedLandDinoSwimSpeedLevelUpEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.TamedLandDinoSwimSpeedLevelUpEffectiveness"); }
    float& TamingIneffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.TamingIneffectivenessMultiplier"); }
    FieldArray<float> TamingMaxStatAdditionsField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.TamingMaxStatAdditions" }; }
    FieldArray<float> TamingMaxStatMultipliersField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.TamingMaxStatMultipliers" }; }
    float& TheMaxTorporIncreasePerBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.TheMaxTorporIncreasePerBaseLevel"); }
    FieldArray<float> TimeToRecoverAfterDecreaseStatusValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.TimeToRecoverAfterDecreaseStatusValue" }; }
    FieldArray<float> TimeToRecoverAfterDepletionStatusValueField() const
    { return { (void*)this, "UPrimalDinoStatusComponent.TimeToRecoverAfterDepletionStatusValue" }; }
    float& TorporExitPercentThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.TorporExitPercentThreshold"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoStatusComponent.UCSSerializationIndex"); }
    float& UnsubmergedOxygenIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.UnsubmergedOxygenIncreaseSpeed"); }
    float& WakingTameFoodConsumptionRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WakingTameFoodConsumptionRateMultiplier"); }
    float& WalkingStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WalkingStaminaConsumptionRate"); }
    float& WaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WaterConsumptionMultiplier"); }
    float& WeightJumpDecreasePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WeightJumpDecreasePower"); }
    float& WeightMultiplierForCarriedPassengersField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WeightMultiplierForCarriedPassengers"); }
    float& WeightMultiplierForPlatformPassengersInventoryField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WeightMultiplierForPlatformPassengersInventory"); }
    float& WeightMultiplierWhenCarriedOrBasedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WeightMultiplierWhenCarriedOrBased"); }
    float& WeightSpeedDecreasePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WeightSpeedDecreasePower"); }
    float& WindedSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WindedSpeedModifier"); }
    float& WindedSpeedModifierSwimmingOrFlyingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.WindedSpeedModifierSwimmingOrFlying"); }
    float& XPEarnedPerStaminaConsumedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoStatusComponent.XPEarnedPerStaminaConsumed"); }
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

#endif  // BRZ_SDK_JOGO_UPRIMALDINOSTATUSCOMPONENT_H
