// ==========================================================================
//  AMissionType — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AMISSIONTYPE_H
#define BRZ_SDK_JOGO_AMISSIONTYPE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AActor.h"

struct AMissionType : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AMissionType"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AMissionType.SendMissionCompleteMessages(FCharacterAndControllerPair&,bool,float,TArray<UPrimalI
    // endereco: casamento de bytes com a build de referencia
    void SendMissionCompleteMessages(void* a0, bool a1, float a2, void* a3) const
    {
        NativeCall<void, void*, bool, float, void*>(this, "AMissionType.SendMissionCompleteMessages(FCharacterAndControllerPair&,bool,float,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    BrzCampoPonteiro ActiveEncapsulatedSubMissionRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.ActiveEncapsulatedSubMissionRefs")); }
    BrzCampoPonteiro ActivePreventsMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.ActivePreventsMissions")); }
    BrzCampoPonteiro BuffTagsThatPreventMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.BuffTagsThatPreventMission")); }
    BrzCampoPonteiro CombatMusicOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CombatMusicOverride")); }
    BrzCampoPonteiro CurrentAutoSwitchPhaseIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CurrentAutoSwitchPhaseInterval")); }
    BrzCampoPonteiro CurrentEncapsulatedSubMissionToPlayIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CurrentEncapsulatedSubMissionToPlayIndex")); }
    BrzCampoPonteiro CurrentMissionMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CurrentMissionMusic")); }
    BrzCampoPonteiro CurrentThrottledClientTickEventIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CurrentThrottledClientTickEventInterval")); }
    BrzCampoPonteiro CurrentThrottledServerTickEventIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CurrentThrottledServerTickEventInterval")); }
    BrzCampoPonteiro CurrentThrottledTickEventIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CurrentThrottledTickEventInterval")); }
    BrzCampoPonteiro CustomItemSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CustomItemSets")); }
    BrzCampoPonteiro CustomMissionRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CustomMissionRequirements")); }
    BrzCampoPonteiro CustomMissionsUIRewardsLabelTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.CustomMissionsUIRewardsLabelText")); }
    BrzCampoPonteiro DataLayersToLoad_ClientAndNonDediOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DataLayersToLoad_ClientAndNonDediOnly")); }
    BrzCampoPonteiro DataLayersToLoad_ServerAndClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DataLayersToLoad_ServerAndClient")); }
    BrzCampoPonteiro DataLayersToLoad_ServerOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DataLayersToLoad_ServerOnly")); }
    BrzCampoPonteiro DefaultLeaderboardRowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DefaultLeaderboardRows")); }
    BrzCampoPonteiro DinoPathingSplinesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DinoPathingSplines")); }
    BrzCampoPonteiro DisableTekArmorBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DisableTekArmorBuffs")); }
    BrzCampoPonteiro DispatchModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.DispatchMode")); }
    BrzCampoPonteiro EncapsulatedSubMissionClassesToPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.EncapsulatedSubMissionClassesToPlay")); }
    BrzCampoPonteiro EncapsulatingParentMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.EncapsulatingParentMission")); }
    BrzCampoPonteiro ExtraReferencesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.ExtraReferences")); }
    BrzCampoPonteiro FailureWorldBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.FailureWorldBuffs")); }
    BrzCampoPonteiro FirstTimeCompletionHexagonRewardBonusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.FirstTimeCompletionHexagonRewardBonus")); }
    BrzCampoPonteiro FirstTimeCompletionHexagonRewardOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.FirstTimeCompletionHexagonRewardOverride")); }
    BrzCampoPonteiro Gen2TeleportBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.Gen2TeleportBuff")); }
    BrzCampoPonteiro GenerateItemSetsQualityMultiplierMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.GenerateItemSetsQualityMultiplierMax")); }
    BrzCampoPonteiro GenerateItemSetsQualityMultiplierMinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.GenerateItemSetsQualityMultiplierMin")); }
    BrzCampoPonteiro GlobalMissionCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.GlobalMissionCooldown")); }
    BrzCampoPonteiro HexagonsOnCompletionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.HexagonsOnCompletion")); }
    BrzCampoPonteiro InitialMissionPhaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.InitialMissionPhase")); }
    BrzCampoPonteiro LastAutoSwitchPhaseTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LastAutoSwitchPhaseTime")); }
    BrzCampoPonteiro LastThrottledClientTickEventTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LastThrottledClientTickEventTime")); }
    BrzCampoPonteiro LastThrottledServerTickEventTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LastThrottledServerTickEventTime")); }
    BrzCampoPonteiro LastThrottledTickEventTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LastThrottledTickEventTime")); }
    BrzCampoPonteiro LeaderboardTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LeaderboardType")); }
    BrzCampoPonteiro LevelInstanceReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LevelInstanceReference")); }
    BrzCampoPonteiro LevelsToLoadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LevelsToLoad")); }
    BrzCampoPonteiro LevelsToLoadSinglePlayerAndListenServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LevelsToLoadSinglePlayerAndListenServer")); }
    BrzCampoPonteiro LifetimeAfterDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.LifetimeAfterDeactivated")); }
    BrzCampoPonteiro MaxDinosPerPlayerAllowedOnMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MaxDinosPerPlayerAllowedOnMission")); }
    BrzCampoPonteiro MaxItemSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MaxItemSets")); }
    BrzCampoPonteiro MaxPlayerCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MaxPlayerCount")); }
    BrzCampoPonteiro MaxPlayerLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MaxPlayerLevel")); }
    BrzCampoPonteiro MinDistanceToWaypointMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MinDistanceToWaypointMultiplier")); }
    BrzCampoPonteiro MinItemSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MinItemSets")); }
    BrzCampoPonteiro MinPlayerCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MinPlayerCount")); }
    BrzCampoPonteiro MinPlayerLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MinPlayerLevel")); }
    BrzCampoPonteiro MinimumItemSetGenerationRollsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MinimumItemSetGenerationRolls")); }
    BrzCampoPonteiro MissionAlertTitleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionAlertTitle")); }
    BrzCampoPonteiro MissionBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionBuffType")); }
    BrzCampoPonteiro MissionCompleteAlertDisplayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionCompleteAlertDisplayTime")); }
    BrzCampoPonteiro MissionCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionCustomData")); }
    BrzCampoPonteiro MissionDeactivatedEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDeactivatedEvent")); }
    BrzCampoPonteiro MissionDebugFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDebugFlags")); }
    BrzCampoPonteiro MissionDepositInventoryClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDepositInventoryClass")); }
    FString& MissionDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "AMissionType.MissionDescription"); }
    BrzCampoPonteiro MissionDinoKillXPMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDinoKillXPMultiplier")); }
    BrzCampoPonteiro MissionDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDinos")); }
    BrzCampoPonteiro MissionDispatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDispatcher")); }
    BrzCampoPonteiro MissionDispatcherMaxDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDispatcherMaxDistance")); }
    FString& MissionDisplayNameField() const
    { return *GetNativePointerField<FString*>(this, "AMissionType.MissionDisplayName"); }
    BrzCampoPonteiro MissionDroppedItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDroppedItems")); }
    BrzCampoPonteiro MissionDurationConsoleOffsetSecondsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDurationConsoleOffsetSeconds")); }
    BrzCampoPonteiro MissionDurationUIModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionDurationUIMode")); }
    BrzCampoPonteiro MissionFailedLeftBoundsMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionFailedLeftBoundsMessage")); }
    BrzCampoPonteiro MissionFailedMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionFailedMessage")); }
    BrzCampoPonteiro MissionFailedMessageColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionFailedMessageColor")); }
    BrzCampoPonteiro MissionFailedSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionFailedSound")); }
    BrzCampoPonteiro MissionIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionIcon")); }
    BrzCampoPonteiro MissionInitiatedStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionInitiatedString")); }
    BrzCampoPonteiro MissionInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionInventory")); }
    BrzCampoPonteiro MissionInventoryTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionInventoryTemplate")); }
    BrzCampoPonteiro MissionMaxDurationSecondsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionMaxDurationSeconds")); }
    BrzCampoPonteiro MissionObjectiveTimeLabelStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionObjectiveTimeLabelString")); }
    BrzCampoPonteiro MissionPhaseEndedEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionPhaseEndedEvent")); }
    BrzCampoPonteiro MissionPhaseIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionPhaseIndex")); }
    BrzCampoPonteiro MissionPhaseStartedEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionPhaseStartedEvent")); }
    BrzCampoPonteiro MissionResetTimerEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionResetTimerEvent")); }
    BrzCampoPonteiro MissionRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionRoot")); }
    BrzCampoPonteiro MissionStartNetworkTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionStartNetworkTime")); }
    BrzCampoPonteiro MissionStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionState")); }
    BrzCampoPonteiro MissionStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionStrings")); }
    BrzCampoPonteiro MissionStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionStructures")); }
    BrzCampoPonteiro MissionSuccessMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionSuccessMessage")); }
    BrzCampoPonteiro MissionSuccessMessageColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionSuccessMessageColor")); }
    BrzCampoPonteiro MissionSuccessSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionSuccessSound")); }
    BrzCampoPonteiro MissionTimeOfDayLockTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionTimeOfDayLockTime")); }
    BrzCampoPonteiro MissionTimeOfDayUnlockTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionTimeOfDayUnlockTime")); }
    BrzCampoPonteiro MissionTimerUIModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionTimerUIMode")); }
    BrzCampoPonteiro MissionVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionVersion")); }
    BrzCampoPonteiro MissionWildDinoIncomingDamageScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionWildDinoIncomingDamageScale")); }
    BrzCampoPonteiro MissionWildDinoOutgoingDamageScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.MissionWildDinoOutgoingDamageScale")); }
    BrzCampoPonteiro NumItemSetsPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.NumItemSetsPower")); }
    BrzCampoPonteiro OnFailureKillAllTamesInTileStreamingVolumeCustomTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.OnFailureKillAllTamesInTileStreamingVolumeCustomTag")); }
    BrzCampoPonteiro PerPlayerMissionCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PerPlayerMissionCooldown")); }
    BrzCampoPonteiro PhaseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PhaseData")); }
    BrzCampoPonteiro PhasesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.Phases")); }
    BrzCampoPonteiro PlayerUsableItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PlayerUsableItems")); }
    BrzCampoPonteiro PlayersOnMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PlayersOnMission")); }
    BrzCampoPonteiro PlayersPendingAddToMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PlayersPendingAddToMission")); }
    BrzCampoPonteiro PostSetupMissionStartNetworkTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PostSetupMissionStartNetworkTime")); }
    BrzCampoPonteiro PrepAreaEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepAreaEmitter")); }
    BrzCampoPonteiro PrepAreaNotificationPrefixField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepAreaNotificationPrefix")); }
    BrzCampoPonteiro PrepAreaPlayerInclusionParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepAreaPlayerInclusionParticles")); }
    BrzCampoPonteiro PrepAreaRadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepAreaRadius")); }
    BrzCampoPonteiro PrepDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepDuration")); }
    BrzCampoPonteiro PrepDurationSPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepDurationSP")); }
    BrzCampoPonteiro PrepTargetingTeamBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrepTargetingTeamBehavior")); }
    BrzCampoPonteiro PrereqMissionTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrereqMissionTags")); }
    BrzCampoPonteiro PrereqMissionTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PrereqMissionTypes")); }
    BrzCampoPonteiro PreventWildMissionDinoDamageForDurationAfterCreationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PreventWildMissionDinoDamageForDurationAfterCreation")); }
    BrzCampoPonteiro PreventsStargingMissionsOfTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.PreventsStargingMissionsOfTags")); }
    BrzCampoPonteiro RewardItemCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.RewardItemCount")); }
    BrzCampoPonteiro RewardLootTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.RewardLootTable")); }
    BrzCampoPonteiro RewardXPRatioField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.RewardXPRatio")); }
    BrzCampoPonteiro SplineSpanwerTriggerKeysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.SplineSpanwerTriggerKeys")); }
    BrzCampoPonteiro SplineSpawnersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.SplineSpawners")); }
    BrzCampoPonteiro StartedByCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.StartedByCharacter")); }
    BrzCampoPonteiro SubMissionInfoForCurrentMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.SubMissionInfoForCurrentMission")); }
    BrzCampoPonteiro SuccessWorldBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.SuccessWorldBuffs")); }
    BrzCampoPonteiro TargetPlayerLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.TargetPlayerLevel")); }
    BrzCampoPonteiro TeleportedCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.TeleportedCharacters")); }
    BrzCampoPonteiro ThrottledClientTickTimeRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.ThrottledClientTickTimeRange")); }
    BrzCampoPonteiro ThrottledServerTickTimeRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.ThrottledServerTickTimeRange")); }
    BrzCampoPonteiro ThrottledTickTimeRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.ThrottledTickTimeRange")); }
    BrzCampoPonteiro TriggerKeysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.TriggerKeys")); }
    BrzCampoPonteiro UnlockPrequisitesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.UnlockPrequisites")); }
    BrzCampoPonteiro WidgetActiveMissionPosYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AMissionType.WidgetActiveMissionPosY")); }
    BitFieldValue<bool, unsigned __int32> UseDynamicMissionStrings()
    { return { (void*)this, "UseDynamicMissionStrings" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteForcePreventLeavingMission()
    { return { (void*)this, "bAbsoluteForcePreventLeavingMission" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAddPlayersOnSeatingStructureToMission()
    { return { (void*)this, "bAllowAddPlayersOnSeatingStructureToMission" }; }
    BitFieldValue<bool, unsigned __int32> bAllowHarvestingMissionDinos()
    { return { (void*)this, "bAllowHarvestingMissionDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMissionDinoKillXP()
    { return { (void*)this, "bAllowMissionDinoKillXP" }; }
    BitFieldValue<bool, unsigned __int32> bAllowNegativeMissionStartNetworkTime()
    { return { (void*)this, "bAllowNegativeMissionStartNetworkTime" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingOtherMissionDinos()
    { return { (void*)this, "bAllowTargetingOtherMissionDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreateMissionInventory()
    { return { (void*)this, "bAlwaysCreateMissionInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDeactivateMissionBuff()
    { return { (void*)this, "bAutoDeactivateMissionBuff" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDeactivateMissionWithNoPlayers()
    { return { (void*)this, "bAutoDeactivateMissionWithNoPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAutoProgressMilestonesOnMissionComplete()
    { return { (void*)this, "bAutoProgressMilestonesOnMissionComplete" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRewardFromCustomItemSets()
    { return { (void*)this, "bAutoRewardFromCustomItemSets" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRewardLootOnMissionComplete()
    { return { (void*)this, "bAutoRewardLootOnMissionComplete" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRewardXPOnMissionComplete()
    { return { (void*)this, "bAutoRewardXPOnMissionComplete" }; }
    BitFieldValue<bool, unsigned __int32> bAutoSaveMissionCompleteStatusPerPlayer()
    { return { (void*)this, "bAutoSaveMissionCompleteStatusPerPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bAutoSendMissionCompleteAlert()
    { return { (void*)this, "bAutoSendMissionCompleteAlert" }; }
    BitFieldValue<bool, unsigned __int32> bAutoSendMissionCompleteNotification()
    { return { (void*)this, "bAutoSendMissionCompleteNotification" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUpdateRequirements()
    { return { (void*)this, "bAutoUpdateRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUpdateWorldIndicators()
    { return { (void*)this, "bAutoUpdateWorldIndicators" }; }
    BitFieldValue<bool, unsigned __int32> bBPGetMissionTimerTextHideIfEmpty()
    { return { (void*)this, "bBPGetMissionTimerTextHideIfEmpty" }; }
    BitFieldValue<bool, unsigned __int32> bDebugWorldIndicators()
    { return { (void*)this, "bDebugWorldIndicators" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyMissionDinosOnDeactivate()
    { return { (void*)this, "bDestroyMissionDinosOnDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bDisableLevelUpSoundDuringMission()
    { return { (void*)this, "bDisableLevelUpSoundDuringMission" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTimeLimitSinglePlayer()
    { return { (void*)this, "bDisableTimeLimitSinglePlayer" }; }
    BitFieldValue<bool, unsigned __int32> bDisabledOnPS4SinglePlayer()
    { return { (void*)this, "bDisabledOnPS4SinglePlayer" }; }
    BitFieldValue<bool, unsigned __int32> bDisabledOnXboxSinglePlayer()
    { return { (void*)this, "bDisabledOnXboxSinglePlayer" }; }
    BitFieldValue<bool, unsigned __int32> bDivideHexogonsOnCompletion()
    { return { (void*)this, "bDivideHexogonsOnCompletion" }; }
    BitFieldValue<bool, unsigned __int32> bEqualRewardsToAllParticipants()
    { return { (void*)this, "bEqualRewardsToAllParticipants" }; }
    BitFieldValue<bool, unsigned __int32> bForceCompleteOnDeactivate()
    { return { (void*)this, "bForceCompleteOnDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bHasActivatedSuccessFailureWorldBuffs()
    { return { (void*)this, "bHasActivatedSuccessFailureWorldBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bHasRunSetup()
    { return { (void*)this, "bHasRunSetup" }; }
    BitFieldValue<bool, unsigned __int32> bListEntryOnly()
    { return { (void*)this, "bListEntryOnly" }; }
    BitFieldValue<bool, unsigned __int32> bMissionAbandoned()
    { return { (void*)this, "bMissionAbandoned" }; }
    BitFieldValue<bool, unsigned __int32> bMissionPreventsCryoDeploy()
    { return { (void*)this, "bMissionPreventsCryoDeploy" }; }
    BitFieldValue<bool, unsigned __int32> bMissionPreventsDinoSpawner()
    { return { (void*)this, "bMissionPreventsDinoSpawner" }; }
    BitFieldValue<bool, unsigned __int32> bMissionPreventsFlyers()
    { return { (void*)this, "bMissionPreventsFlyers" }; }
    BitFieldValue<bool, unsigned __int32> bMissionPreventsMekDeploy()
    { return { (void*)this, "bMissionPreventsMekDeploy" }; }
    BitFieldValue<bool, unsigned __int32> bMissionPreventsVehicle()
    { return { (void*)this, "bMissionPreventsVehicle" }; }
    BitFieldValue<bool, unsigned __int32> bMissionWeaponsHaveInfiniteAmmo()
    { return { (void*)this, "bMissionWeaponsHaveInfiniteAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowMountsOnMission()
    { return { (void*)this, "bOnlyAllowMountsOnMission" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReverseTeleportOnMissionDeactivation()
    { return { (void*)this, "bOnlyReverseTeleportOnMissionDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideShipMusic()
    { return { (void*)this, "bOverrideShipMusic" }; }
    BitFieldValue<bool, unsigned __int32> bPersistentMission()
    { return { (void*)this, "bPersistentMission" }; }
    BitFieldValue<bool, unsigned __int32> bPrepAreaAutoSendNotificationToIncludedPlayers()
    { return { (void*)this, "bPrepAreaAutoSendNotificationToIncludedPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bPrepUseTargetingTeamOfStartingPlayer()
    { return { (void*)this, "bPrepUseTargetingTeamOfStartingPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearShoulderMountsForMissionTeleport()
    { return { (void*)this, "bPreventClearShoulderMountsForMissionTeleport" }; }
    BitFieldValue<bool, unsigned __int32> bPreventShowingMissionTime()
    { return { (void*)this, "bPreventShowingMissionTime" }; }
    BitFieldValue<bool, unsigned __int32> bRemovePlayerFromMissionOnDeath()
    { return { (void*)this, "bRemovePlayerFromMissionOnDeath" }; }
    BitFieldValue<bool, unsigned __int32> bRepeatableMission()
    { return { (void*)this, "bRepeatableMission" }; }
    BitFieldValue<bool, unsigned __int32> bRollExtraLootSetsPerPlayer()
    { return { (void*)this, "bRollExtraLootSetsPerPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bSaveMissionItemData()
    { return { (void*)this, "bSaveMissionItemData" }; }
    BitFieldValue<bool, unsigned __int32> bScaleMinDistanceToWaypointByRotationRate()
    { return { (void*)this, "bScaleMinDistanceToWaypointByRotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrepAreaEmitterLifespanToPrepDuration()
    { return { (void*)this, "bSetPrepAreaEmitterLifespanToPrepDuration" }; }
    BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement()
    { return { (void*)this, "bSetsRandomWithoutReplacement" }; }
    BitFieldValue<bool, unsigned __int32> bShowInUI()
    { return { (void*)this, "bShowInUI" }; }
    BitFieldValue<bool, unsigned __int32> bSingletonMission()
    { return { (void*)this, "bSingletonMission" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsMissionTimeOfDayLocking()
    { return { (void*)this, "bSupportsMissionTimeOfDayLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSuspendedDueToStasis()
    { return { (void*)this, "bSuspendedDueToStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTreatPlayerLevelRangeAsHardCap()
    { return { (void*)this, "bTreatPlayerLevelRangeAsHardCap" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustMissionDinoDamage()
    { return { (void*)this, "bUseBPAdjustMissionDinoDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanRideMissionDino()
    { return { (void*)this, "bUseBPCanRideMissionDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGenerateAdditionalMissionRewards()
    { return { (void*)this, "bUseBPGenerateAdditionalMissionRewards" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGenerateMissionRewards()
    { return { (void*)this, "bUseBPGenerateMissionRewards" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraLocalMissionIndicators()
    { return { (void*)this, "bUseBPGetExtraLocalMissionIndicators" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMissionTargetingDesire()
    { return { (void*)this, "bUseBPGetMissionTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMissionIndicatorString()
    { return { (void*)this, "bUseBPOverrideMissionIndicatorString" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMissionTimerColor()
    { return { (void*)this, "bUseBPOverrideMissionTimerColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRandomWanderLocation()
    { return { (void*)this, "bUseBPOverrideRandomWanderLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPStaticIsPlayerEligibleForMission()
    { return { (void*)this, "bUseBPStaticIsPlayerEligibleForMission" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTryCompletePhase()
    { return { (void*)this, "bUseBPTryCompletePhase" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomMissionsUIRewardsLabelText()
    { return { (void*)this, "bUseCustomMissionsUIRewardsLabelText" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoEvents()
    { return { (void*)this, "bUseDinoEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseGen2TeleportBuff()
    { return { (void*)this, "bUseGen2TeleportBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseInventoryEvents()
    { return { (void*)this, "bUseInventoryEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseMissionTagAsStringIfLookupFails()
    { return { (void*)this, "bUseMissionTagAsStringIfLookupFails" }; }
    BitFieldValue<bool, unsigned __int32> bUsePerPlayerPhaseRequirements()
    { return { (void*)this, "bUsePerPlayerPhaseRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bUsePerPlayerWorldIndicators()
    { return { (void*)this, "bUsePerPlayerWorldIndicators" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlayerEvents()
    { return { (void*)this, "bUsePlayerEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseStructureEvents()
    { return { (void*)this, "bUseStructureEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseThrottledClientTick()
    { return { (void*)this, "bUseThrottledClientTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseThrottledServerTick()
    { return { (void*)this, "bUseThrottledServerTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseThrottledTick()
    { return { (void*)this, "bUseThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseTriggerEvents()
    { return { (void*)this, "bUseTriggerEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUsesFallbackSeeds()
    { return { (void*)this, "bUsesFallbackSeeds" }; }

};

#endif  // BRZ_SDK_JOGO_AMISSIONTYPE_H
