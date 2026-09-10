// ==========================================================================
//  UPrimalGameSettingsData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALGAMESETTINGSDATA_H
#define BRZ_SDK_JOGO_UPRIMALGAMESETTINGSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalGameSettingsData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalGameSettingsData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    float& AlphaKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.AlphaKillXPMultiplier"); }
    float& AutoPvEStartTimeSecondsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.AutoPvEStartTimeSeconds"); }
    float& AutoPvEStopTimeSecondsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.AutoPvEStopTimeSeconds"); }
    float& BabyCuddleGracePeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BabyCuddleGracePeriodMultiplier"); }
    float& BabyCuddleIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BabyCuddleIntervalMultiplier"); }
    float& BabyCuddleLoseImprintQualitySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BabyCuddleLoseImprintQualitySpeedMultiplier"); }
    float& BabyFoodConsumptionSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BabyFoodConsumptionSpeedMultiplier"); }
    float& BabyImprintingStatScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BabyImprintingStatScaleMultiplier"); }
    float& BabyMatureSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BabyMatureSpeedMultiplier"); }
    float& BossKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.BossKillXPMultiplier"); }
    float& CaveKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CaveKillXPMultiplier"); }
    float& CraftXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CraftXPMultiplier"); }
    float& CraftingSkillBonusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CraftingSkillBonusMultiplier"); }
    float& CropDecaySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CropDecaySpeedMultiplier"); }
    float& CropGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CropGrowthSpeedMultiplier"); }
    float& CustomRecipeEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CustomRecipeEffectivenessMultiplier"); }
    float& CustomRecipeSkillMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.CustomRecipeSkillMultiplier"); }
    float& DayCycleSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DayCycleSpeedScale"); }
    float& DayTimeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DayTimeSpeedScale"); }
    float& DifficultyOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DifficultyOffset"); }
    float& DinoCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoCharacterFoodDrainMultiplier"); }
    float& DinoCharacterHealthRecoveryMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoCharacterHealthRecoveryMultiplier"); }
    float& DinoCharacterStaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoCharacterStaminaDrainMultiplier"); }
    float& DinoCountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoCountMultiplier"); }
    float& DinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoDamageMultiplier"); }
    float& DinoHarvestingDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoHarvestingDamageMultiplier"); }
    float& DinoResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoResistanceMultiplier"); }
    float& DinoTurretDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.DinoTurretDamageMultiplier"); }
    float& EggHatchSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.EggHatchSpeedMultiplier"); }
    float& ExplorerNoteXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.ExplorerNoteXPMultiplier"); }
    float& FishingLootQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.FishingLootQualityMultiplier"); }
    float& FuelConsumptionIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.FuelConsumptionIntervalMultiplier"); }
    float& GenericXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.GenericXPMultiplier"); }
    float& GlobalCorpseDecompositionTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.GlobalCorpseDecompositionTimeMultiplier"); }
    float& GlobalItemDecompositionTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.GlobalItemDecompositionTimeMultiplier"); }
    float& GlobalSpoilingTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.GlobalSpoilingTimeMultiplier"); }
    float& HarvestAmountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.HarvestAmountMultiplier"); }
    float& HarvestHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.HarvestHealthMultiplier"); }
    float& HarvestXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.HarvestXPMultiplier"); }
    float& IncreasePvPRespawnIntervalBaseAmountField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.IncreasePvPRespawnIntervalBaseAmount"); }
    float& IncreasePvPRespawnIntervalCheckPeriodField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.IncreasePvPRespawnIntervalCheckPeriod"); }
    float& IncreasePvPRespawnIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.IncreasePvPRespawnIntervalMultiplier"); }
    float& KillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.KillXPMultiplier"); }
    float& LayEggIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.LayEggIntervalMultiplier"); }
    float& ListenServerTetherDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.ListenServerTetherDistanceMultiplier"); }
    float& MatingIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.MatingIntervalMultiplier"); }
    bool& MaxDifficultyField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.MaxDifficulty"); }
    int& MaxNumberOfPlayersInTribeField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameSettingsData.MaxNumberOfPlayersInTribe"); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameSettingsData.NativeClass")); }
    float& NewMaxStructuresInRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.NewMaxStructuresInRange"); }
    float& NightTimeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.NightTimeSpeedScale"); }
    int& OverrideMaxExperiencePointsDinoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameSettingsData.OverrideMaxExperiencePointsDino"); }
    int& OverrideMaxExperiencePointsPlayerField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameSettingsData.OverrideMaxExperiencePointsPlayer"); }
    bool& OverrideStartTimeField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.OverrideStartTime"); }
    float& PerLevelStatsDinoTamedAdd_DamageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Damage"); }
    float& PerLevelStatsDinoTamedAdd_FoodField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Food"); }
    float& PerLevelStatsDinoTamedAdd_HealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Health"); }
    float& PerLevelStatsDinoTamedAdd_OxygenField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Oxygen"); }
    float& PerLevelStatsDinoTamedAdd_SpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Speed"); }
    float& PerLevelStatsDinoTamedAdd_StaminaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Stamina"); }
    float& PerLevelStatsDinoTamedAdd_TemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Temperature"); }
    float& PerLevelStatsDinoTamedAdd_TemperatureFortitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_TemperatureFortitude"); }
    float& PerLevelStatsDinoTamedAdd_TorpidityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Torpidity"); }
    float& PerLevelStatsDinoTamedAdd_WaterField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Water"); }
    float& PerLevelStatsDinoTamedAdd_WeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAdd_Weight"); }
    float& PerLevelStatsDinoTamedAff_DamageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Damage"); }
    float& PerLevelStatsDinoTamedAff_FoodField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Food"); }
    float& PerLevelStatsDinoTamedAff_HealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Health"); }
    float& PerLevelStatsDinoTamedAff_OxygenField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Oxygen"); }
    float& PerLevelStatsDinoTamedAff_SpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Speed"); }
    float& PerLevelStatsDinoTamedAff_StaminaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Stamina"); }
    float& PerLevelStatsDinoTamedAff_TemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Temperature"); }
    float& PerLevelStatsDinoTamedAff_TemperatureFortitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_TemperatureFortitude"); }
    float& PerLevelStatsDinoTamedAff_TorpidityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Torpidity"); }
    float& PerLevelStatsDinoTamedAff_WaterField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Water"); }
    float& PerLevelStatsDinoTamedAff_WeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamedAff_Weight"); }
    float& PerLevelStatsDinoTamed_DamageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Damage"); }
    float& PerLevelStatsDinoTamed_FoodField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Food"); }
    float& PerLevelStatsDinoTamed_HealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Health"); }
    float& PerLevelStatsDinoTamed_OxygenField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Oxygen"); }
    float& PerLevelStatsDinoTamed_SpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Speed"); }
    float& PerLevelStatsDinoTamed_StaminaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Stamina"); }
    float& PerLevelStatsDinoTamed_TemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Temperature"); }
    float& PerLevelStatsDinoTamed_TemperatureFortitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_TemperatureFortitude"); }
    float& PerLevelStatsDinoTamed_TorpidityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Torpidity"); }
    float& PerLevelStatsDinoTamed_WaterField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Water"); }
    float& PerLevelStatsDinoTamed_WeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoTamed_Weight"); }
    float& PerLevelStatsDinoWild_DamageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Damage"); }
    float& PerLevelStatsDinoWild_FoodField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Food"); }
    float& PerLevelStatsDinoWild_HealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Health"); }
    float& PerLevelStatsDinoWild_OxygenField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Oxygen"); }
    float& PerLevelStatsDinoWild_SpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Speed"); }
    float& PerLevelStatsDinoWild_StaminaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Stamina"); }
    float& PerLevelStatsDinoWild_TemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Temperature"); }
    float& PerLevelStatsDinoWild_TemperatureFortitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_TemperatureFortitude"); }
    float& PerLevelStatsDinoWild_TorpidityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Torpidity"); }
    float& PerLevelStatsDinoWild_WaterField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Water"); }
    float& PerLevelStatsDinoWild_WeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsDinoWild_Weight"); }
    float& PerLevelStatsPlayer_DamageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Damage"); }
    float& PerLevelStatsPlayer_FoodField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Food"); }
    float& PerLevelStatsPlayer_HealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Health"); }
    float& PerLevelStatsPlayer_OxygenField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Oxygen"); }
    float& PerLevelStatsPlayer_SpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Speed"); }
    float& PerLevelStatsPlayer_StaminaField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Stamina"); }
    float& PerLevelStatsPlayer_TemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Temperature"); }
    float& PerLevelStatsPlayer_TemperatureFortitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_TemperatureFortitude"); }
    float& PerLevelStatsPlayer_TorpidityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Torpidity"); }
    float& PerLevelStatsPlayer_WaterField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Water"); }
    float& PerLevelStatsPlayer_WeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerLevelStatsPlayer_Weight"); }
    float& PerPlatformMaxStructuresMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PerPlatformMaxStructuresMultiplier"); }
    float& PhotoModeRangeLimitField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PhotoModeRangeLimit"); }
    float& PlayerCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerCharacterFoodDrainMultiplier"); }
    float& PlayerCharacterHealthRecoveryMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerCharacterHealthRecoveryMultiplier"); }
    float& PlayerCharacterStaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerCharacterStaminaDrainMultiplier"); }
    float& PlayerCharacterWaterDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerCharacterWaterDrainMultiplier"); }
    float& PlayerDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerDamageMultiplier"); }
    float& PlayerHarvestingDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerHarvestingDamageMultiplier"); }
    float& PlayerResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PlayerResistanceMultiplier"); }
    float& PoopIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PoopIntervalMultiplier"); }
    bool& PreventDownloadDinosField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.PreventDownloadDinos"); }
    bool& PreventDownloadItemsField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.PreventDownloadItems"); }
    bool& PreventDownloadSurvivorsField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.PreventDownloadSurvivors"); }
    float& PreventOfflinePvPIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PreventOfflinePvPInterval"); }
    float& PvEDinoDecayPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PvEDinoDecayPeriodMultiplier"); }
    float& PvEStructureDecayPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PvEStructureDecayPeriodMultiplier"); }
    float& PvPZoneStructureDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.PvPZoneStructureDamageMultiplier"); }
    float& RaidDinoCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.RaidDinoCharacterFoodDrainMultiplier"); }
    float& ResourceNoReplenishRadiusPlayersField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.ResourceNoReplenishRadiusPlayers"); }
    float& ResourceNoReplenishRadiusStructuresField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.ResourceNoReplenishRadiusStructures"); }
    float& ResourcesRespawnPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.ResourcesRespawnPeriodMultiplier"); }
    float& SpecialXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.SpecialXPMultiplier"); }
    int& StartTimeHourField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameSettingsData.StartTimeHour"); }
    float& StructureDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.StructureDamageMultiplier"); }
    float& StructureDamageRepairCooldownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.StructureDamageRepairCooldown"); }
    float& StructurePreventResourceRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.StructurePreventResourceRadiusMultiplier"); }
    float& StructureResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.StructureResistanceMultiplier"); }
    float& SupplyCrateLootQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.SupplyCrateLootQualityMultiplier"); }
    float& TamedKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.TamedKillXPMultiplier"); }
    float& TamingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.TamingSpeedMultiplier"); }
    float& UnclaimedKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.UnclaimedKillXPMultiplier"); }
    float& WildKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.WildKillXPMultiplier"); }
    float& WirelessCraftingRangeOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.WirelessCraftingRangeOverride"); }
    float& XPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameSettingsData.XPMultiplier"); }
    bool& bAllowCustomRecipesField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAllowCustomRecipes"); }
    bool& bAllowFlyerSpeedLevelingField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAllowFlyerSpeedLeveling"); }
    bool& bAllowPlatformSaddleMultiFloorsField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAllowPlatformSaddleMultiFloors"); }
    bool& bAllowSpeedLevelingField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAllowSpeedLeveling"); }
    bool& bAllowUnlimitedRespecsField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAllowUnlimitedRespecs"); }
    bool& bAutoPvETimerField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAutoPvETimer"); }
    bool& bAutoPvEUseSystemTimeField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bAutoPvEUseSystemTime"); }
    bool& bDisableDinoRidingField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableDinoRiding"); }
    bool& bDisableDinoTamingField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableDinoTaming"); }
    bool& bDisableFriendlyFireField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableFriendlyFire"); }
    bool& bDisableLootCratesField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableLootCrates"); }
    bool& bDisablePhotoModeField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisablePhotoMode"); }
    bool& bDisableStructurePlacementCollisionField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableStructurePlacementCollision"); }
    bool& bDisableWirelessCraftingField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableWirelessCrafting"); }
    bool& bDisableWirelessCraftingForDinosField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableWirelessCraftingForDinos"); }
    bool& bDisableWirelessCraftingForPlayersField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableWirelessCraftingForPlayers"); }
    bool& bDisableWirelessCraftingForStructuresField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bDisableWirelessCraftingForStructures"); }
    bool& bFlyerPlatformAllowUnalignedDinoBasingField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bFlyerPlatformAllowUnalignedDinoBasing"); }
    bool& bHardLimitTurretsInRangeField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bHardLimitTurretsInRange"); }
    bool& bIncreasePvPRespawnIntervalField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bIncreasePvPRespawnInterval"); }
    bool& bPassiveDefensesDamageRiderlessDinosField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bPassiveDefensesDamageRiderlessDinos"); }
    bool& bPvEAllowTribeWarField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bPvEAllowTribeWar"); }
    bool& bPvEAllowTribeWarCancelField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bPvEAllowTribeWarCancel"); }
    bool& bShowCreativeModeField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bShowCreativeMode"); }
    bool& bUseSingleplayerSettingsField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameSettingsData.bUseSingleplayerSettings"); }
    BrzCampoPonteiro defaultBoolMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameSettingsData.defaultBoolMap")); }
    BrzCampoPonteiro defaultFloatMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameSettingsData.defaultFloatMap")); }
    BrzCampoPonteiro defaultIntMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameSettingsData.defaultIntMap")); }
    BitFieldValue<bool, unsigned __int32> AdminLogging()
    { return { (void*)this, "AdminLogging" }; }
    BitFieldValue<bool, unsigned __int32> AllowAnyoneBabyImprintCuddle()
    { return { (void*)this, "AllowAnyoneBabyImprintCuddle" }; }
    BitFieldValue<bool, unsigned __int32> AllowCaveBuildingPvE()
    { return { (void*)this, "AllowCaveBuildingPvE" }; }
    BitFieldValue<bool, unsigned __int32> AllowFlyerCarryPvE()
    { return { (void*)this, "AllowFlyerCarryPvE" }; }
    BitFieldValue<bool, unsigned __int32> AllowHideDamageSourceFromLogs()
    { return { (void*)this, "AllowHideDamageSourceFromLogs" }; }
    BitFieldValue<bool, unsigned __int32> AllowRaidDinoFeeding()
    { return { (void*)this, "AllowRaidDinoFeeding" }; }
    BitFieldValue<bool, unsigned __int32> AllowThirdPersonPlayer()
    { return { (void*)this, "AllowThirdPersonPlayer" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysNotifyPlayerLeft()
    { return { (void*)this, "AlwaysNotifyPlayerLeft" }; }
    BitFieldValue<bool, unsigned __int32> DisableDinoDecayPvE()
    { return { (void*)this, "DisableDinoDecayPvE" }; }
    BitFieldValue<bool, unsigned __int32> DisableImprintDinoBuff()
    { return { (void*)this, "DisableImprintDinoBuff" }; }
    BitFieldValue<bool, unsigned __int32> DisablePvEGamma()
    { return { (void*)this, "DisablePvEGamma" }; }
    BitFieldValue<bool, unsigned __int32> DisableStructureDecayPvE()
    { return { (void*)this, "DisableStructureDecayPvE" }; }
    BitFieldValue<bool, unsigned __int32> DisableWeatherFog()
    { return { (void*)this, "DisableWeatherFog" }; }
    BitFieldValue<bool, unsigned __int32> DontAlwaysNotifyPlayerJoined()
    { return { (void*)this, "DontAlwaysNotifyPlayerJoined" }; }
    BitFieldValue<bool, unsigned __int32> EnableExtraStructurePreventionVolumes()
    { return { (void*)this, "EnableExtraStructurePreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> EnablePvPGamma()
    { return { (void*)this, "EnablePvPGamma" }; }
    BitFieldValue<bool, unsigned __int32> ForceAllowCaveFlyers()
    { return { (void*)this, "ForceAllowCaveFlyers" }; }
    BitFieldValue<bool, unsigned __int32> ForceResetWildDinos()
    { return { (void*)this, "ForceResetWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> GlobalVoiceChat()
    { return { (void*)this, "GlobalVoiceChat" }; }
    BitFieldValue<bool, unsigned __int32> IsBaseBP()
    { return { (void*)this, "IsBaseBP" }; }
    BitFieldValue<bool, unsigned __int32> MaxDifficulty()
    { return { (void*)this, "MaxDifficulty" }; }
    BitFieldValue<bool, unsigned __int32> NoTributeDownloads()
    { return { (void*)this, "NoTributeDownloads" }; }
    BitFieldValue<bool, unsigned __int32> NonPermanentDiseases()
    { return { (void*)this, "NonPermanentDiseases" }; }
    BitFieldValue<bool, unsigned __int32> OnlyAllowSpecifiedEngrams()
    { return { (void*)this, "OnlyAllowSpecifiedEngrams" }; }
    BitFieldValue<bool, unsigned __int32> OverrideStartTime()
    { return { (void*)this, "OverrideStartTime" }; }
    BitFieldValue<bool, unsigned __int32> OverrideStructurePlatformPrevention()
    { return { (void*)this, "OverrideStructurePlatformPrevention" }; }
    BitFieldValue<bool, unsigned __int32> PreventDiseases()
    { return { (void*)this, "PreventDiseases" }; }
    BitFieldValue<bool, unsigned __int32> PreventDownloadDinos()
    { return { (void*)this, "PreventDownloadDinos" }; }
    BitFieldValue<bool, unsigned __int32> PreventDownloadItems()
    { return { (void*)this, "PreventDownloadItems" }; }
    BitFieldValue<bool, unsigned __int32> PreventDownloadSurvivors()
    { return { (void*)this, "PreventDownloadSurvivors" }; }
    BitFieldValue<bool, unsigned __int32> PreventOfflinePvP()
    { return { (void*)this, "PreventOfflinePvP" }; }
    BitFieldValue<bool, unsigned __int32> PreventTribeAlliances()
    { return { (void*)this, "PreventTribeAlliances" }; }
    BitFieldValue<bool, unsigned __int32> ProximityChat()
    { return { (void*)this, "ProximityChat" }; }
    BitFieldValue<bool, unsigned __int32> PvPDinoDecay()
    { return { (void*)this, "PvPDinoDecay" }; }
    BitFieldValue<bool, unsigned __int32> RandomSupplyCratePoints()
    { return { (void*)this, "RandomSupplyCratePoints" }; }
    BitFieldValue<bool, unsigned __int32> ServerCrosshair()
    { return { (void*)this, "ServerCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> ServerForceNoHUD()
    { return { (void*)this, "ServerForceNoHUD" }; }
    BitFieldValue<bool, unsigned __int32> ServerHardcore()
    { return { (void*)this, "ServerHardcore" }; }
    BitFieldValue<bool, unsigned __int32> ServerPVE()
    { return { (void*)this, "ServerPVE" }; }
    BitFieldValue<bool, unsigned __int32> ShowFloatingDamageText()
    { return { (void*)this, "ShowFloatingDamageText" }; }
    BitFieldValue<bool, unsigned __int32> ShowMapPlayerLocation()
    { return { (void*)this, "ShowMapPlayerLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomRecipes()
    { return { (void*)this, "bAllowCustomRecipes" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFlyerSpeedLeveling()
    { return { (void*)this, "bAllowFlyerSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlatformSaddleMultiFloors()
    { return { (void*)this, "bAllowPlatformSaddleMultiFloors" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSpeedLeveling()
    { return { (void*)this, "bAllowSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUnlimitedRespecs()
    { return { (void*)this, "bAllowUnlimitedRespecs" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPvETimer()
    { return { (void*)this, "bAutoPvETimer" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPvEUseSystemTime()
    { return { (void*)this, "bAutoPvEUseSystemTime" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultDinoTaming()
    { return { (void*)this, "bDisableDefaultDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoRiding()
    { return { (void*)this, "bDisableDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoTaming()
    { return { (void*)this, "bDisableDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFriendlyFire()
    { return { (void*)this, "bDisableFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bDisableLootCrates()
    { return { (void*)this, "bDisableLootCrates" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePhotoMode()
    { return { (void*)this, "bDisablePhotoMode" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructurePlacementCollision()
    { return { (void*)this, "bDisableStructurePlacementCollision" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCrafting()
    { return { (void*)this, "bDisableWirelessCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForDinos()
    { return { (void*)this, "bDisableWirelessCraftingForDinos" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForPlayers()
    { return { (void*)this, "bDisableWirelessCraftingForPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForStructures()
    { return { (void*)this, "bDisableWirelessCraftingForStructures" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPlatformAllowUnalignedDinoBasing()
    { return { (void*)this, "bFlyerPlatformAllowUnalignedDinoBasing" }; }
    BitFieldValue<bool, unsigned __int32> bForceGachaUnhappyInCaves()
    { return { (void*)this, "bForceGachaUnhappyInCaves" }; }
    BitFieldValue<bool, unsigned __int32> bHardLimitTurretsInRange()
    { return { (void*)this, "bHardLimitTurretsInRange" }; }
    BitFieldValue<bool, unsigned __int32> bIncreasePvPRespawnInterval()
    { return { (void*)this, "bIncreasePvPRespawnInterval" }; }
    BitFieldValue<bool, unsigned __int32> bPassiveDefensesDamageRiderlessDinos()
    { return { (void*)this, "bPassiveDefensesDamageRiderlessDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowTribeWar()
    { return { (void*)this, "bPvEAllowTribeWar" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowTribeWarCancel()
    { return { (void*)this, "bPvEAllowTribeWarCancel" }; }
    BitFieldValue<bool, unsigned __int32> bShowCreativeMode()
    { return { (void*)this, "bShowCreativeMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseCorpseLocator()
    { return { (void*)this, "bUseCorpseLocator" }; }
    BitFieldValue<bool, unsigned __int32> bUseSingleplayerSettings()
    { return { (void*)this, "bUseSingleplayerSettings" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALGAMESETTINGSDATA_H
