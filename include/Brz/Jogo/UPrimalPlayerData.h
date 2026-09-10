// ==========================================================================
//  UPrimalPlayerData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALPLAYERDATA_H
#define BRZ_SDK_JOGO_UPRIMALPLAYERDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterPlayerState;
struct UObject;
struct UPrimalBuffPersistentData;

#include "UObject.h"

struct UPrimalPlayerData : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalPlayerData"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPlayerData.AddBuffDataToPersistentArray(APrimalBuff*,AShooterCharacter*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddBuffDataToPersistentArray(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "UPrimalPlayerData.AddBuffDataToPersistentArray(APrimalBuff*,AShooterCharacter*,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.AddSigilCount_Abb(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void AddSigilCount_Abb(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalPlayerData.AddSigilCount_Abb(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.AddSigilCount_Crimson(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void AddSigilCount_Crimson(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalPlayerData.AddSigilCount_Crimson(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPlayerData.ApplyAssetReferencesToPlayerCharacter(AShooterCharacter*,FPrimalPlayerCharacte
    // endereco: cache_pdb_25090264
    BrzPonteiro ApplyAssetReferencesToPlayerCharacter(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalPlayerData.ApplyAssetReferencesToPlayerCharacter(AShooterCharacter*,FPrimalPlayerCharacterConfigStruct&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPlayerData.ApplyPersistentBuffsFromPersistentDatas(AShooterCharacter*,AShooterPlayerContr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyPersistentBuffsFromPersistentDatas(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalPlayerData.ApplyPersistentBuffsFromPersistentDatas(AShooterCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.ApplyToPlayerCharacter(AShooterPlayerState*,AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=27]]
    void ApplyToPlayerCharacter(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalPlayerData.ApplyToPlayerCharacter(AShooterPlayerState*,AShooterCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.ApplyToPlayerState(AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    void ApplyToPlayerState(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalPlayerData.ApplyToPlayerState(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.BPForceDefeatedBoss(int,FName,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPForceDefeatedBoss(int a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, int, unsigned long long, void*>(this, "UPrimalPlayerData.BPForceDefeatedBoss(int,FName,AShooterPlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPlayerData.CreateBuffsFromPersistentDatas(AShooterCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1519+bytes40+grafo=15/15]]
    BrzPonteiro CreateBuffsFromPersistentDatas(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalPlayerData.CreateBuffsFromPersistentDatas(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.FindCharacterForPlayer(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    UObject* FindCharacterForPlayer(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "UPrimalPlayerData.FindCharacterForPlayer(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GetDataForID(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetDataForID(unsigned int a0)
    {
        return NativeCall<void*, unsigned int>(nullptr, "UPrimalPlayerData.GetDataForID(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GetOrCreateLatestMissionScore(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrCreateLatestMissionScore(unsigned long long a0, bool a1) const
    {
        return NativeCall<void*, unsigned long long, bool>(this, "UPrimalPlayerData.GetOrCreateLatestMissionScore(FName,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.GetPlayerHexagonCount()
    // endereco: casamento de bytes com a build de referencia
    int GetPlayerHexagonCount() const
    {
        return NativeCall<int>(this, "UPrimalPlayerData.GetPlayerHexagonCount()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GetPlayerState(AShooterPlayerState*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerState* GetPlayerState(void* a0, bool a1, int a2) const
    {
        return NativeCall<AShooterPlayerState*, void*, bool, int>(this, "UPrimalPlayerData.GetPlayerState(AShooterPlayerState*,bool,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.GetSigilCount_Abb()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetSigilCount_Abb() const
    {
        return NativeCall<int>(this, "UPrimalPlayerData.GetSigilCount_Abb()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.GetSigilCount_Crimson()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetSigilCount_Crimson() const
    {
        return NativeCall<int>(this, "UPrimalPlayerData.GetSigilCount_Crimson()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GetTribeTeamID()
    // endereco: casamento de bytes com a build de referencia
    int GetTribeTeamID() const
    {
        return NativeCall<int>(this, "UPrimalPlayerData.GetTribeTeamID()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GetUniqueNetIdAsString()
    // endereco: casamento de bytes com a build de referencia
    void GetUniqueNetIdAsString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalPlayerData.GetUniqueNetIdAsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GiveInitialItems(int,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void GiveInitialItems(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UPrimalPlayerData.GiveInitialItems(int,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GiveWorldItemSets(AShooterCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    void GiveWorldItemSets(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalPlayerData.GiveWorldItemSets(AShooterCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.GrantGeneralizedAchievementTag(FName,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void GrantGeneralizedAchievementTag(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "UPrimalPlayerData.GrantGeneralizedAchievementTag(FName,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.HasGeneralizedAchievementTag(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=138+chamadores=4]]
    bool HasGeneralizedAchievementTag(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalPlayerData.HasGeneralizedAchievementTag(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.HasUnlockedAllBobsTallTalesExplorerNotes(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool HasUnlockedAllBobsTallTalesExplorerNotes(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalPlayerData.HasUnlockedAllBobsTallTalesExplorerNotes(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.HasUnlockedAllExplorerNotes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool HasUnlockedAllExplorerNotes() const
    {
        return NativeCall<bool>(this, "UPrimalPlayerData.HasUnlockedAllExplorerNotes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.InitForPlayer(AShooterPlayerState*,bool)
    // endereco: casamento de bytes com a build de referencia
    void InitForPlayer(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalPlayerData.InitForPlayer(AShooterPlayerState*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.LinkedPlayerIDString()
    // endereco: casamento de bytes com a build de referencia
    void LinkedPlayerIDString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalPlayerData.LinkedPlayerIDString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.MatchesPlayer(AShooterPlayerState*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool MatchesPlayer(void* a0, bool a1, int a2) const
    {
        return NativeCall<bool, void*, bool, int>(this, "UPrimalPlayerData.MatchesPlayer(AShooterPlayerState*,bool,int)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   UPrimalPlayerData.RefreshPersistentBuffs(AShooterCharacter*,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshPersistentBuffs(void* a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, bool, bool, bool>(this, "UPrimalPlayerData.RefreshPersistentBuffs(AShooterCharacter*,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.SavePlayerData(UWorld*,bool)
    // endereco: casamento de bytes com a build de referencia
    void SavePlayerData(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalPlayerData.SavePlayerData(UWorld*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.SetActivePlayerTitle(AShooterPlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    bool SetActivePlayerTitle(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "UPrimalPlayerData.SetActivePlayerTitle(AShooterPlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.SetChibiLevels(int,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SetChibiLevels(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UPrimalPlayerData.SetChibiLevels(int,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.SetPlayerHexagonCount(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool SetPlayerHexagonCount(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalPlayerData.SetPlayerHexagonCount(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalPlayerData.SetSubscribedApp(int,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SetSubscribedApp(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UPrimalPlayerData.SetSubscribedApp(int,AShooterPlayerController*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalPlayerData.UnlockPlayerTitle(AShooterPlayerController*,FString)
    // endereco: casamento de bytes com a build de referencia
    int UnlockPlayerTitle(void* a0, const FString& a1) const
    {
        return NativeCall<int, void*, void*>(this, "UPrimalPlayerData.UnlockPlayerTitle(AShooterPlayerController*,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int UnlockPlayerTitle(void* a0, FString* a1) const
    { return UnlockPlayerTitle(a0, *a1); }

    BrzCampoPonteiro BossEngramReferenceMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerData.BossEngramReferenceMap")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyPersistentBuffDatas` +24, medido na build 25090264
    //  (offset absoluto medido: 0x700; confianca alta)
    float& LastXPWritePercentField() const
    { return BrzCampoAncorado<float>(this, "MyPersistentBuffDatas", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyPersistentBuffDatas` +20, medido na build 25090264
    //  (offset absoluto medido: 0x6FC; confianca alta)
    int& LocalPlayerIndexField() const
    { return BrzCampoAncorado<int>(this, "MyPersistentBuffDatas", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyPersistentBuffDatas` +32, medido na build 25090264
    //  (offset absoluto medido: 0x708; confianca alta)
    void*& MissionTagToLatestMissionScoreField() const
    { return BrzCampoAncorado<void*>(this, "MyPersistentBuffDatas", 32); }
    BrzCampoPonteiro MyDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPlayerData.MyData")); }
    TArray<UPrimalBuffPersistentData*>& MyPersistentBuffDatasField() const
    { return *GetNativePointerField<TArray<UPrimalBuffPersistentData*>*>(this, "UPrimalPlayerData.MyPersistentBuffDatas"); }
    TArray<void*>& RedeemedWorldEquipSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerData.RedeemedWorldEquipSets"); }
    TArray<void*>& RedeemedWorldItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPlayerData.RedeemedWorldItemSets"); }
    bool& bAllowArkSeasonPassItemsField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalPlayerData.bAllowArkSeasonPassItems"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyPersistentBuffDatas` +16, medido na build 25090264
    //  (offset absoluto medido: 0x6F8; confianca alta)
    bool& bIsLocalPlayerField() const
    { return BrzCampoAncorado<bool>(this, "MyPersistentBuffDatas", 16); }
    BitFieldValue<bool, unsigned __int32> bAllowArkSeasonPassItems()
    { return { (void*)this, "bAllowArkSeasonPassItems" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALPLAYERDATA_H
