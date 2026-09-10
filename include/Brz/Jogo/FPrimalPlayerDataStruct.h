// ==========================================================================
//  FPrimalPlayerDataStruct — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALPLAYERDATASTRUCT_H
#define BRZ_SDK_JOGO_FPRIMALPLAYERDATASTRUCT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FPrimalPersistentCharacterStatsStruct;
struct FPrimalPlayerCharacterConfigStruct;


struct FPrimalPlayerDataStruct
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalPlayerDataStruct"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPlayerDataStruct.operator=(FPrimalPlayerDataStruct&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalPlayerDataStruct.operator=(FPrimalPlayerDataStruct&)", a0);
    }

    BrzCampoPonteiro ActivePlayerTitleIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.ActivePlayerTitleIndex")); }
    float& AllowedRespawnIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.AllowedRespawnInterval"); }
    TArray<void*>& AppIDSetField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPlayerDataStruct.AppIDSet"); }
    BrzCampoPonteiro AppliedCosmeticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.AppliedCosmetics")); }
    BrzCampoPonteiro HeardVoiceOversField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.HeardVoiceOvers")); }
    double& LastInventoryRetrievalUTCTimeField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.LastInventoryRetrievalUTCTime"); }
    double& LastLoginTimeField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.LastLoginTime"); }
    double& LastNetworkTimeUpdatedPersonalCachedTeamActorListsField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.LastNetworkTimeUpdatedPersonalCachedTeamActorLists"); }
    int& LastPinCodeUsedField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.LastPinCodeUsed"); }
    double& LastTimeDiedToEnemyTeamField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.LastTimeDiedToEnemyTeam"); }
    TArray<void*>& LatestMissionScoresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPlayerDataStruct.LatestMissionScores"); }
    TArray<void*>& LimitedDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPlayerDataStruct.LimitedDinoClasses"); }
    BrzCampoPonteiro LocalPlayerIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.LocalPlayerIndex")); }
    double& LoginTimeField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.LoginTime"); }
    FPrimalPersistentCharacterStatsStruct& MyPersistentCharacterStatsField() const
    { return *GetNativePointerField<FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPlayerDataStruct.MyPersistentCharacterStats"); }
    FPrimalPlayerCharacterConfigStruct& MyPlayerCharacterConfigField() const
    { return *GetNativePointerField<FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerDataStruct.MyPlayerCharacterConfig"); }
    double& NextAllowedRespawnTimeField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.NextAllowedRespawnTime"); }
    TArray<void*>& NumDinosOfLimitedDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPlayerDataStruct.NumDinosOfLimitedDinoClasses"); }
    float& NumOfDeathsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.NumOfDeaths"); }
    int& NumPersonalDinosField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.NumPersonalDinos"); }
    TArray<void*>& PersonalCachedTeamActorList_UpdatedOnIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPlayerDataStruct.PersonalCachedTeamActorList_UpdatedOnInterval"); }
    unsigned long long& PlayerDataIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "FPrimalPlayerDataStruct.PlayerDataID"); }
    int& PlayerDataVersionField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.PlayerDataVersion"); }
    FString& PlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.PlayerName"); }
    BrzCampoPonteiro SavedFavoritedTrackedActorInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.SavedFavoritedTrackedActorInfo")); }
    FString& SavedNetworkAddressField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.SavedNetworkAddress"); }
    BrzCampoPonteiro SavedWaypointTrackedActorInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.SavedWaypointTrackedActorInfo")); }
    BrzCampoPonteiro ServerSavedLastDeathLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.ServerSavedLastDeathLocations")); }
    BrzCampoPonteiro SkillCooldownsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.SkillCooldowns")); }
    int& SpawnDayNumberField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.SpawnDayNumber"); }
    float& SpawnDayTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.SpawnDayTime"); }
    double& SuicideCooldownStartTimeField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPlayerDataStruct.SuicideCooldownStartTime"); }
    int& TribeIDField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.TribeID"); }
    BrzCampoPonteiro UniqueIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.UniqueID")); }
    BrzCampoPonteiro UnlockedPlayerTitlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerDataStruct.UnlockedPlayerTitles")); }
    BitFieldValue<bool, unsigned __int32> bFirstSpawned()
    { return { (void*)this, "bFirstSpawned" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpectator()
    { return { (void*)this, "bUseSpectator" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALPLAYERDATASTRUCT_H
