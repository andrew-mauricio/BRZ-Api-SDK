// ==========================================================================
//  AShooterPlayerState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPLAYERSTATE_H
#define BRZ_SDK_JOGO_ASHOOTERPLAYERSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterPlayerController;
struct FDinoOrderGroup;
struct FPrimalPlayerDataStruct;
struct UObject;
struct UPrimalPlayerData;

#include "APlayerState.h"

struct AShooterPlayerState : public APlayerState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterPlayerState"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.AcceptJoinAlliance(unsignedint,unsignedint,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AcceptJoinAlliance(unsigned int a0, unsigned int a1, const FString& a2) const
    {
        return NativeCall<void*, unsigned int, unsigned int, void*>(this, "AShooterPlayerState.AcceptJoinAlliance(unsignedint,unsignedint,FString)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AcceptJoinAlliance(unsigned int a0, unsigned int a1, FString* a2) const
    { return AcceptJoinAlliance(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.AddEngramBlueprintToPlayerInventory(UPrimalInventoryComponent*,TSubclassOf<U
    // endereco: casamento de bytes com a build de referencia
    void AddEngramBlueprintToPlayerInventory(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerState.AddEngramBlueprintToPlayerInventory(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.AddToTribe(FTribeData&,bool,bool,bool,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AddToTribe(void* a0, bool a1, bool a2, bool a3, void* a4) const
    {
        return NativeCall<bool, void*, bool, bool, bool, void*>(this, "AShooterPlayerState.AddToTribe(FTribeData&,bool,bool,bool,APlayerController*)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.AddTreeSkillPoints(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void AddTreeSkillPoints(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "AShooterPlayerState.AddTreeSkillPoints(FName,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.AddUnlockedCosmeticToPlayerInventory(UPrimalInventoryComponent*,TSubclassOf<
    // endereco: casamento de bytes com a build de referencia
    void AddUnlockedCosmeticToPlayerInventory(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerState.AddUnlockedCosmeticToPlayerInventory(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.AllowDinoOrderByGroup(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowDinoOrderByGroup(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerState.AllowDinoOrderByGroup(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.AllowTribeGroupPermission(ETribeGroupPermission::Type,UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowTribeGroupPermission(int a0, void* a1) const
    {
        return NativeCall<bool, int, void*>(this, "AShooterPlayerState.AllowTribeGroupPermission(ETribeGroupPermission::Type,UObject*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.BroadcastDeath(AShooterPlayerState*,UDamageType*,AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    void BroadcastDeath(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerState.BroadcastDeath(AShooterPlayerState*,UDamageType*,AShooterPlayerState*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.BroadcastDeath_Implementation(AShooterPlayerState*,UDamageType*,AShooterPlay
    // endereco: casamento de bytes com a build de referencia
    void BroadcastDeath_Implementation(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerState.BroadcastDeath_Implementation(AShooterPlayerState*,UDamageType*,AShooterPlayerState*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.CheckIfBlockCausedKickFromTribe()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CheckIfBlockCausedKickFromTribe() const
    {
        return NativeCall<void*>(this, "AShooterPlayerState.CheckIfBlockCausedKickFromTribe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClearTribe(bool,bool,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ClearTribe(bool a0, bool a1, void* a2) const
    {
        NativeCall<void, bool, bool, void*>(this, "AShooterPlayerState.ClearTribe(bool,bool,APlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientGetAlivePlayerConnectedData_Implementation(TArray<FAlivePlayerDataInfo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientGetAlivePlayerConnectedData_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientGetAlivePlayerConnectedData_Implementation(TArray<FAlivePlayerDataInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientGetAllPlayerNamesAndLocations_Implementation(TArray<FAliveNameAndLocat
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=116]]
    BrzPonteiro ClientGetAllPlayerNamesAndLocations_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientGetAllPlayerNamesAndLocations_Implementation(TArray<FAliveNameAndLocation,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientGetPlayerAdministratorData(TArray<FAdminPlayerDataInfo,TSizedDefaultAl
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientGetPlayerAdministratorData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientGetPlayerAdministratorData(TArray<FAdminPlayerDataInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientGetPlayerBannedData(TArray<FAdminPlayerDataInfo,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientGetPlayerBannedData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientGetPlayerBannedData(TArray<FAdminPlayerDataInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientGetServerOptions(FServerOptions)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientGetServerOptions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientGetServerOptions(FServerOptions)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClientGetServerOptions_Implementation(FServerOptions)
    // endereco: casamento de bytes com a build de referencia
    void ClientGetServerOptions_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ClientGetServerOptions_Implementation(FServerOptions)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientInitialize(AController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientInitialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientInitialize(AController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ClientNotifyLevelUpAvailable()
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyLevelUpAvailable() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ClientNotifyLevelUpAvailable()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClientNotifyLevelUpAvailable_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyLevelUpAvailable_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ClientNotifyLevelUpAvailable_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientReceiveSpawnPoints(TArray<FSpawnPointInfo,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveSpawnPoints(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ClientReceiveSpawnPoints(TArray<FSpawnPointInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClientReceiveSpawnPoints_Implementation(TArray<FSpawnPointInfo,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void ClientReceiveSpawnPoints_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ClientReceiveSpawnPoints_Implementation(TArray<FSpawnPointInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClientRefreshDinoOrderGroup(int,FDinoOrderGroup,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientRefreshDinoOrderGroup(int a0, void* a1, int a2) const
    {
        NativeCall<void, int, void*, int>(this, "AShooterPlayerState.ClientRefreshDinoOrderGroup(int,FDinoOrderGroup,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClientRefreshDinoOrderGroup_Implementation(int,FDinoOrderGroup,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientRefreshDinoOrderGroup_Implementation(int a0, void* a1, int a2) const
    {
        NativeCall<void, int, void*, int>(this, "AShooterPlayerState.ClientRefreshDinoOrderGroup_Implementation(int,FDinoOrderGroup,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ClientUnlockedSkill_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUnlockedSkill_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerState.ClientUnlockedSkill_Implementation(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ClientUpdateNewRallyPoint_Implementation(bool,FTeamPingData)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=148]]
    void ClientUpdateNewRallyPoint_Implementation(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerState.ClientUpdateNewRallyPoint_Implementation(bool,FTeamPingData)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ComputeRepeatableMilestoneXP(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    float ComputeRepeatableMilestoneXP(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterPlayerState.ComputeRepeatableMilestoneXP(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ConsumeTreeSkillPoints(FName,int)
    // endereco: casamento de bytes com a build de referencia
    bool ConsumeTreeSkillPoints(unsigned long long a0, int a1) const
    {
        return NativeCall<bool, unsigned long long, int>(this, "AShooterPlayerState.ConsumeTreeSkillPoints(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.DoRespec(UPrimalPlayerData*,AShooterCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    void DoRespec(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerState.DoRespec(UPrimalPlayerData*,AShooterCharacter*,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.GetAllSpawnPointStructures(int,TSubclassOf<APrimalStructure>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllSpawnPointStructures(int a0, void* a1, bool a2) const
    {
        return NativeCall<void*, int, void*, bool>(this, "AShooterPlayerState.GetAllSpawnPointStructures(int,TSubclassOf<APrimalStructure>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetCharacterLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetCharacterLevel() const
    {
        return NativeCall<int>(this, "AShooterPlayerState.GetCharacterLevel()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerState.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    void GetDataListEntries(void* a0, int a1, bool a2, signed char a3, void* a4, void* a5, void* a6, signed char a7, void* a8, bool a9, bool a10, bool a11, signed char a12) const
    {
        NativeCall<void, void*, int, bool, signed char, void*, void*, void*, signed char, void*, bool, bool, bool, signed char>(this, "AShooterPlayerState.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.GetDefaultItemSlotClasses()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultItemSlotClasses() const
    {
        return NativeCall<void*>(this, "AShooterPlayerState.GetDefaultItemSlotClasses()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.GetDinoOrderGroupName(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDinoOrderGroupName(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerState.GetDinoOrderGroupName(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetEngramEntryCostTextOverride(IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    void GetEngramEntryCostTextOverride(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerState.GetEngramEntryCostTextOverride(IDataListEntryInterface*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor&,FLinearColor*)
    // endereco: casamento de bytes com a build de referencia
    void GetEntryCustomColor(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerState.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor&,FLinearColor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetEntryDefaultEnabled(IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    bool GetEntryDefaultEnabled(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerState.GetEntryDefaultEnabled(IDataListEntryInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetEntryDefaultTextOverride(IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    void GetEntryDefaultTextOverride(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerState.GetEntryDefaultTextOverride(IDataListEntryInterface*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetHexCostToPurchaseNextEngramPoint()
    // endereco: cache_pdb_25090264
    int GetHexCostToPurchaseNextEngramPoint() const
    {
        return NativeCall<int>(this, "AShooterPlayerState.GetHexCostToPurchaseNextEngramPoint()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.GetNameValue(FName)
    // endereco: cache_pdb_25090264
    double GetNameValue(unsigned long long a0) const
    {
        return NativeCall<double, unsigned long long>(this, "AShooterPlayerState.GetNameValue(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetObject()
    // endereco: cache_pdb_25090264
    UObject* GetObject() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerState.GetObject()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetPlayerOrTribeName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetPlayerOrTribeName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.GetPlayerOrTribeName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetShooterController()
    // endereco: cache_pdb_25090264
    AShooterPlayerController* GetShooterController() const
    {
        return NativeCall<AShooterPlayerController*>(this, "AShooterPlayerState.GetShooterController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.GetShortPlayerName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShortPlayerName() const
    {
        return NativeCall<void*>(this, "AShooterPlayerState.GetShortPlayerName()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.GetTreeFreeSkillPoints(FName)
    // endereco: cache_pdb_25090264
    int GetTreeFreeSkillPoints(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "AShooterPlayerState.GetTreeFreeSkillPoints(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.GetTreeSkillPointsTotal(FName)
    // endereco: cache_pdb_25090264
    int GetTreeSkillPointsTotal(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "AShooterPlayerState.GetTreeSkillPointsTotal(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetTribeId()
    // endereco: cache_pdb_25090264
    int GetTribeId() const
    {
        return NativeCall<int>(this, "AShooterPlayerState.GetTribeId()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.GetTribeWar(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTribeWar(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerState.GetTribeWar(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.GetUniqueNetIdAsString()
    // endereco: casamento de bytes com a build de referencia
    void GetUniqueNetIdAsString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.GetUniqueNetIdAsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.HasEngram(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    bool HasEngram(void* a0) const
    {
        return NativeCall<bool, void**>(this, "AShooterPlayerState.HasEngram(TSubclassOf<UPrimalItem>)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.HasTribeWarRequest(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    BrzPonteiro HasTribeWarRequest(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerState.HasTribeWarRequest(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.InitMilestones(FPrimalPlayerDataStruct&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro InitMilestones(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.InitMilestones(FPrimalPlayerDataStruct&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.InvitedRankGroupPlayerIntoTribe(AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    void InvitedRankGroupPlayerIntoTribe(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.InvitedRankGroupPlayerIntoTribe(AShooterPlayerState*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.IsAlliedWith(int)
    // endereco: casamento de bytes com a build de referencia
    bool IsAlliedWith(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterPlayerState.IsAlliedWith(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.IsAllowedToCopySettings()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsAllowedToCopySettings() const
    {
        return NativeCall<bool>(this, "AShooterPlayerState.IsAllowedToCopySettings()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsDinoClassInOrderGroup(int,TSubclassOf<APrimalDinoCharacter>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsDinoClassInOrderGroup(int a0, void* a1) const
    {
        return NativeCall<bool, int, void*>(this, "AShooterPlayerState.IsDinoClassInOrderGroup(int,TSubclassOf<APrimalDinoCharacter>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsDinoInOrderGroup(int,APrimalDinoCharacter*)
    // endereco: cache_pdb_25090264
    bool IsDinoInOrderGroup(int a0, void* a1) const
    {
        return NativeCall<bool, int, void*>(this, "AShooterPlayerState.IsDinoInOrderGroup(int,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsExclusivelyTribeAdmin(unsignedint)
    // endereco: cache_pdb_25090264
    bool IsExclusivelyTribeAdmin(unsigned int a0) const
    {
        return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsExclusivelyTribeAdmin(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsExclusivelyTribeOwner(unsignedint)
    // endereco: cache_pdb_25090264
    bool IsExclusivelyTribeOwner(unsigned int a0) const
    {
        return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsExclusivelyTribeOwner(unsignedint)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.IsFriendly(int)
    // endereco: casamento de bytes com a build de referencia
    bool IsFriendly(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterPlayerState.IsFriendly(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.IsInRepeatTier(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsInRepeatTier(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerState.IsInRepeatTier(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsInTribe()
    // endereco: cache_pdb_25090264
    bool IsInTribe() const
    {
        return NativeCall<bool>(this, "AShooterPlayerState.IsInTribe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsInTribeWar(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=79]]
    bool IsInTribeWar(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterPlayerState.IsInTribeWar(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsTribeAdmin()
    // endereco: cache_pdb_25090264
    bool IsTribeAdmin() const
    {
        return NativeCall<bool>(this, "AShooterPlayerState.IsTribeAdmin()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.IsTribeFounder()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsTribeFounder() const
    {
        return NativeCall<void*>(this, "AShooterPlayerState.IsTribeFounder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.IsTribeOwner(unsignedint)
    // endereco: cache_pdb_25090264
    bool IsTribeOwner(unsigned int a0) const
    {
        return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsTribeOwner(unsignedint)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.LocalSetSelectedDinoOrderGroup(int,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro LocalSetSelectedDinoOrderGroup(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "AShooterPlayerState.LocalSetSelectedDinoOrderGroup(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.NotifyAllianceChanged()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NotifyAllianceChanged() const
    {
        NativeCall<void>(this, "AShooterPlayerState.NotifyAllianceChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyAllianceChanged_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void NotifyAllianceChanged_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.NotifyAllianceChanged_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.NotifyPlayerJoinedTribe(FString&,FString&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void NotifyPlayerJoinedTribe(const FString& a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerState.NotifyPlayerJoinedTribe(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyPlayerJoinedTribe(FString* a0, FString* a1, bool a2) const
    { NotifyPlayerJoinedTribe(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyPlayerJoined_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=531+grafo=9/9]]
    void NotifyPlayerJoined_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyPlayerJoined_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyPlayerJoined_Implementation(FString* a0) const
    { NotifyPlayerJoined_Implementation(*a0); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.NotifyPlayerLeft(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void NotifyPlayerLeft(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyPlayerLeft(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyPlayerLeft(FString* a0) const
    { NotifyPlayerLeft(*a0); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.NotifyPlayerLeftTribe(FString&,FString&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=302+bytes96]]
    void NotifyPlayerLeftTribe(const FString& a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerState.NotifyPlayerLeftTribe(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyPlayerLeftTribe(FString* a0, FString* a1, bool a2) const
    { NotifyPlayerLeftTribe(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyPlayerLeft_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=531+grafo=9/9]]
    void NotifyPlayerLeft_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyPlayerLeft_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyPlayerLeft_Implementation(FString* a0) const
    { NotifyPlayerLeft_Implementation(*a0); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.NotifyTribememberJoined(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void NotifyTribememberJoined(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyTribememberJoined(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyTribememberJoined(FString* a0) const
    { NotifyTribememberJoined(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyTribememberJoined_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void NotifyTribememberJoined_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyTribememberJoined_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyTribememberJoined_Implementation(FString* a0) const
    { NotifyTribememberJoined_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyTribememberLeft_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void NotifyTribememberLeft_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyTribememberLeft_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyTribememberLeft_Implementation(FString* a0) const
    { NotifyTribememberLeft_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyUniqueDinoDownloadAllowed_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void NotifyUniqueDinoDownloadAllowed_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyUniqueDinoDownloadAllowed_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyUniqueDinoDownloadAllowed_Implementation(FString* a0) const
    { NotifyUniqueDinoDownloadAllowed_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.NotifyUniqueDinoDownloaded_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void NotifyUniqueDinoDownloaded_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.NotifyUniqueDinoDownloaded_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyUniqueDinoDownloaded_Implementation(FString* a0) const
    { NotifyUniqueDinoDownloaded_Implementation(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.OnRep_UpdatedEngrams()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_UpdatedEngrams() const
    {
        NativeCall<void>(this, "AShooterPlayerState.OnRep_UpdatedEngrams()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.OnSetUniqueId()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=131]]
    BrzPonteiro OnSetUniqueId() const
    {
        return NativeCall<void*>(this, "AShooterPlayerState.OnSetUniqueId()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.OverrideWith(APlayerState*)
    // endereco: casamento de bytes com a build de referencia
    void OverrideWith(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.OverrideWith(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.PromoteToTribeAdmin(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void PromoteToTribeAdmin(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.PromoteToTribeAdmin(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ReceivedPlayerCharacter(AShooterCharacter*)
    // endereco: cache_pdb_25090264
    void ReceivedPlayerCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ReceivedPlayerCharacter(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.RefreshNextAllowCopySettingsTime()
    // endereco: casamento de bytes com a build de referencia
    void RefreshNextAllowCopySettingsTime() const
    {
        NativeCall<void>(this, "AShooterPlayerState.RefreshNextAllowCopySettingsTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.RegisterPlayerWithSession(bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterPlayerWithSession(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerState.RegisterPlayerWithSession(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.RequestCreateNewPlayerWithArkData(UPrimalPlayerData*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestCreateNewPlayerWithArkData(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerState.RequestCreateNewPlayerWithArkData(UPrimalPlayerData*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ResetUnlockedSkills()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=135+grafo=3/3]]
    BrzPonteiro ResetUnlockedSkills() const
    {
        return NativeCall<void*>(this, "AShooterPlayerState.ResetUnlockedSkills()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.SendTribeInviteData(FTribeData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SendTribeInviteData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.SendTribeInviteData(FTribeData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.SendTribeInviteData_Implementation(FTribeData)
    // endereco: casamento de bytes com a build de referencia
    void SendTribeInviteData_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.SendTribeInviteData_Implementation(FTribeData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerAcceptTribeWar(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerAcceptTribeWar(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerAcceptTribeWar(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerAcceptTribeWar_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerAcceptTribeWar_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerState.ServerAcceptTribeWar_Implementation(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerDeclareTribeWar(int,int,int,float,float)
    // endereco: casamento de bytes com a build de referencia
    void ServerDeclareTribeWar(int a0, int a1, int a2, float a3, float a4) const
    {
        NativeCall<void, int, int, int, float, float>(this, "AShooterPlayerState.ServerDeclareTribeWar(int,int,int,float,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerDeclareTribeWar_Implementation(int,int,int,float,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=150]]
    void ServerDeclareTribeWar_Implementation(int a0, int a1, int a2, float a3, float a4) const
    {
        NativeCall<void, int, int, int, float, float>(this, "AShooterPlayerState.ServerDeclareTribeWar_Implementation(int,int,int,float,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int,APrimalDinoCharacter*,bool
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int,APrimalDinoCharacter*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int,APrimalDino
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int,APrimalDinoCharacter*,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass(int,TSubclassOf<APrimalDinoCharact
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrderGroup_AddOrRemoveDinoClass(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass(int,TSubclassOf<APrimalDinoCharacter>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int,TSubclassOf<APr
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int,TSubclassOf<APrimalDinoCharacter>,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerDinoOrderGroup_Clear(int,bool,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=62+chamadores=2]]
    void ServerDinoOrderGroup_Clear(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_Clear(int,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerDinoOrderGroup_Clear_Implementation(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrderGroup_Clear_Implementation(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_Clear_Implementation(int,bool,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex(int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrderGroup_RemoveEntryByIndex(int a0, bool a1, int a2) const
    {
        NativeCall<void, int, bool, int>(this, "AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex(int,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int,bool,int)
    // endereco: cache_pdb_25090264
    void ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int a0, bool a1, int a2) const
    {
        NativeCall<void, int, bool, int>(this, "AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetAlivePlayerConnectedData_Implementation()
    // endereco: cache_pdb_25090264
    void ServerGetAlivePlayerConnectedData_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetAlivePlayerConnectedData_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetAllPlayerNamesAndLocations()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ServerGetAllPlayerNamesAndLocations() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetAllPlayerNamesAndLocations()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetAllPlayerNamesAndLocations_Implementation()
    // endereco: cache_pdb_25090264
    void ServerGetAllPlayerNamesAndLocations_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetAllPlayerNamesAndLocations_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ServerGetPlayerAdministratorData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGetPlayerAdministratorData() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerAdministratorData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetPlayerAdministratorData_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGetPlayerAdministratorData_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerAdministratorData_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ServerGetPlayerBannedData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGetPlayerBannedData() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerBannedData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetPlayerBannedData_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGetPlayerBannedData_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerBannedData_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ServerGetPlayerConnectedData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGetPlayerConnectedData() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerConnectedData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetPlayerConnectedData_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGetPlayerConnectedData_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerConnectedData_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ServerGetPlayerWhiteListedData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGetPlayerWhiteListedData() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerWhiteListedData()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.ServerGetServerOptions()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGetServerOptions() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetServerOptions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerGetServerOptions_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGetServerOptions_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerGetServerOptions_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerRejectTribeWar(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRejectTribeWar(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRejectTribeWar(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRejectTribeWar_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRejectTribeWar_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRejectTribeWar_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestApplyEngramPoints(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestApplyEngramPoints(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestApplyEngramPoints(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestApplyEngramPoints_Implementation(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestApplyEngramPoints_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestApplyEngramPoints_Implementation(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestChangePlayerData(FPrimalPlayerCharacterConfigStructReplicated)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestChangePlayerData(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestChangePlayerData(FPrimalPlayerCharacterConfigStructReplicated)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestChangePlayerData_Implementation(FPrimalPlayerCharacterConfigStr
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestChangePlayerData_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestChangePlayerData_Implementation(FPrimalPlayerCharacterConfigStructReplicated)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerRequestCreateNewPlayer(FPrimalPlayerCharacterConfigStructReplicated)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ServerRequestCreateNewPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ServerRequestCreateNewPlayer(FPrimalPlayerCharacterConfigStructReplicated)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestCreateNewPlayer_Implementation(FPrimalPlayerCharacterConfigStru
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCreateNewPlayer_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestCreateNewPlayer_Implementation(FPrimalPlayerCharacterConfigStructReplicated)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestCreateNewTribe(FString&,FTribeGovernment)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCreateNewTribe(const FString& a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerState.ServerRequestCreateNewTribe(FString&,FTribeGovernment)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestCreateNewTribe(FString* a0, void* a1) const
    { ServerRequestCreateNewTribe(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestCreateNewTribe_Implementation(FString&,FTribeGovernment)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCreateNewTribe_Implementation(const FString& a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerState.ServerRequestCreateNewTribe_Implementation(FString&,FTribeGovernment)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestCreateNewTribe_Implementation(FString* a0, void* a1) const
    { ServerRequestCreateNewTribe_Implementation(*a0, a1); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerRequestDemotePlayerInMyTribe(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void ServerRequestDemotePlayerInMyTribe(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestDemotePlayerInMyTribe(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestDemotePlayerInMyTribe_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDemotePlayerInMyTribe_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestDemotePlayerInMyTribe_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestDinoOrderGroups_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDinoOrderGroups_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerRequestDinoOrderGroups_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerRequestLeaveAlliance(unsignedint)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    BrzPonteiro ServerRequestLeaveAlliance(unsigned int a0) const
    {
        return NativeCall<void*, unsigned int>(this, "AShooterPlayerState.ServerRequestLeaveAlliance(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestLeaveAlliance_Implementation(unsignedint)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    void ServerRequestLeaveAlliance_Implementation(unsigned int a0) const
    {
        NativeCall<void, unsigned int>(this, "AShooterPlayerState.ServerRequestLeaveAlliance_Implementation(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestLeaveTribe()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestLeaveTribe() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerRequestLeaveTribe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestLeaveTribe_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=118+grafo=3/3]]
    void ServerRequestLeaveTribe_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerState.ServerRequestLeaveTribe_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerRequestMySpawnPoints(int,TSubclassOf<APrimalStructure>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestMySpawnPoints(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterPlayerState.ServerRequestMySpawnPoints(int,TSubclassOf<APrimalStructure>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestMySpawnPoints_Implementation(int,TSubclassOf<APrimalStructure>)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestMySpawnPoints_Implementation(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterPlayerState.ServerRequestMySpawnPoints_Implementation(int,TSubclassOf<APrimalStructure>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerRequestPromoteAllianceMember(unsignedint,unsignedint)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerRequestPromoteAllianceMember(unsigned int a0, unsigned int a1) const
    {
        return NativeCall<void*, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestPromoteAllianceMember(unsignedint,unsignedint)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestPromoteAllianceMember_Implementation(unsignedint,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestPromoteAllianceMember_Implementation(unsigned int a0, unsigned int a1) const
    {
        NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestPromoteAllianceMember_Implementation(unsignedint,unsignedint)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerRequestPromotePlayerInMyTribe(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestPromotePlayerInMyTribe(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestPromotePlayerInMyTribe(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestPromotePlayerInMyTribe_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestPromotePlayerInMyTribe_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestPromotePlayerInMyTribe_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerRequestRemoveAllianceMember(unsignedint,unsignedint)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerRequestRemoveAllianceMember(unsigned int a0, unsigned int a1) const
    {
        return NativeCall<void*, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestRemoveAllianceMember(unsignedint,unsignedint)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestRemoveAllianceMember_Implementation(unsignedint,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoveAllianceMember_Implementation(unsigned int a0, unsigned int a1) const
    {
        NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestRemoveAllianceMember_Implementation(unsignedint,unsignedint)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestRemovePlayerIndexFromMyTribe(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestRenameTribe(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestRenameTribe(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestRenameTribe(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestRenameTribe(FString* a0) const
    { ServerRequestRenameTribe(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestRenameTribe_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRenameTribe_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestRenameTribe_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestRenameTribe_Implementation(FString* a0) const
    { ServerRequestRenameTribe_Implementation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerRequestSetTribeGovernment(FTribeGovernment)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestSetTribeGovernment(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ServerRequestSetTribeGovernment(FTribeGovernment)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestSetTribeGovernment_Implementation(FTribeGovernment)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=118]]
    void ServerRequestSetTribeGovernment_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerRequestSetTribeGovernment_Implementation(FTribeGovernment)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestSetTribeMemberGroupRank(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSetTribeMemberGroupRank(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerState.ServerRequestSetTribeMemberGroupRank(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestSetTribeMemberGroupRank_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSetTribeMemberGroupRank_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerState.ServerRequestSetTribeMemberGroupRank_Implementation(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters(unsigned__int64,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSpawnPointsForDownloadedCharacters(unsigned int a0, int a1) const
    {
        NativeCall<void, unsigned int, int>(this, "AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters(unsigned__int64,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned__int
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned__int64,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestTransferOwnershipInMyTribe(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe_Implementation(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void ServerRequestTransferOwnershipInMyTribe_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe_Implementation(int)", a0);
    }

    // jogo_confirmou_dump
    //   AShooterPlayerState.ServerSetDefaultItemSlotClass(int,TSubclassOf<UPrimalItem>,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetDefaultItemSlotClass(int a0, void* a1, bool a2, unsigned long long a3) const
    {
        NativeCall<void, int, void*, bool, unsigned long long>(this, "AShooterPlayerState.ServerSetDefaultItemSlotClass(int,TSubclassOf<UPrimalItem>,bool,FName)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerState.ServerSetDefaultItemSlotClass_Implementation(int,TSubclassOf<UPrimalItem>,bo
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void ServerSetDefaultItemSlotClass_Implementation(int a0, void* a1, bool a2, unsigned long long a3) const
    {
        NativeCall<void, int, void*, bool, unsigned long long>(this, "AShooterPlayerState.ServerSetDefaultItemSlotClass_Implementation(int,TSubclassOf<UPrimalItem>,bool,FName)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerSetDinoGroupName(int,FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetDinoGroupName(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterPlayerState.ServerSetDinoGroupName(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSetDinoGroupName(int a0, FString* a1) const
    { ServerSetDinoGroupName(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerSetDinoGroupName_Implementation(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetDinoGroupName_Implementation(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterPlayerState.ServerSetDinoGroupName_Implementation(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSetDinoGroupName_Implementation(int a0, FString* a1) const
    { ServerSetDinoGroupName_Implementation(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerSetSelectedDinoOrderGroup_Implementation(int)
    // endereco: cache_pdb_25090264
    void ServerSetSelectedDinoOrderGroup_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerSetSelectedDinoOrderGroup_Implementation(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerTribeRequestAddRankGroup(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerTribeRequestAddRankGroup(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerTribeRequestAddRankGroup(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTribeRequestAddRankGroup(FString* a0) const
    { ServerTribeRequestAddRankGroup(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerTribeRequestAddRankGroup_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerTribeRequestAddRankGroup_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerTribeRequestAddRankGroup_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTribeRequestAddRankGroup_Implementation(FString* a0) const
    { ServerTribeRequestAddRankGroup_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerTribeRequestApplyRankGroupSettings_Implementation(int,FTribeRankGroup)
    // endereco: casamento de bytes com a build de referencia
    void ServerTribeRequestApplyRankGroupSettings_Implementation(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterPlayerState.ServerTribeRequestApplyRankGroupSettings_Implementation(int,FTribeRankGroup)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerTribeRequestNewAlliance(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerTribeRequestNewAlliance(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerTribeRequestNewAlliance(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTribeRequestNewAlliance(FString* a0) const
    { ServerTribeRequestNewAlliance(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerTribeRequestNewAlliance_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerTribeRequestNewAlliance_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerTribeRequestNewAlliance_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTribeRequestNewAlliance_Implementation(FString* a0) const
    { ServerTribeRequestNewAlliance_Implementation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.ServerTribeRequestNewRallyPoint(FTeamPingData)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=269+grafo=3/3]]
    BrzPonteiro ServerTribeRequestNewRallyPoint(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.ServerTribeRequestNewRallyPoint(FTeamPingData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerTribeRequestNewRallyPoint_Implementation(FTeamPingData)
    // endereco: casamento de bytes com a build de referencia
    void ServerTribeRequestNewRallyPoint_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ServerTribeRequestNewRallyPoint_Implementation(FTeamPingData)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerState.ServerTribeRequestRemoveRankGroup(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void ServerTribeRequestRemoveRankGroup(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerTribeRequestRemoveRankGroup(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerTribeRequestRemoveRankGroup_Implementation(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=255+grafo=3/3]]
    void ServerTribeRequestRemoveRankGroup_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerState.ServerTribeRequestRemoveRankGroup_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ServerUnlockEngram(TSubclassOf<UPrimalItem>,bool,bool)
    // endereco: thunk
    void ServerUnlockEngram(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "AShooterPlayerState.ServerUnlockEngram(TSubclassOf<UPrimalItem>,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerState.SetNameValue(FName,double)
    // endereco: casamento de bytes com a build de referencia
    void SetNameValue(unsigned long long a0, double a1) const
    {
        NativeCall<void, unsigned long long, double>(this, "AShooterPlayerState.SetNameValue(FName,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.SetQuitter(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetQuitter(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterPlayerState.SetQuitter(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.SetTribeData(FTribeData&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetTribeData(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.SetTribeData(FTribeData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.SetTribeTamingDinoSettings(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetTribeTamingDinoSettings(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.SetTribeTamingDinoSettings(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.StaticRegisterNativesAShooterPlayerState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAShooterPlayerState()
    {
        NativeCall<void>(nullptr, "AShooterPlayerState.StaticRegisterNativesAShooterPlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.TransferTribalObjects(FTribeData&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void TransferTribalObjects(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "AShooterPlayerState.TransferTribalObjects(FTribeData&,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.UnregisterPlayerWithSession()
    // endereco: casamento de bytes com a build de referencia
    void UnregisterPlayerWithSession() const
    {
        NativeCall<void>(this, "AShooterPlayerState.UnregisterPlayerWithSession()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.UpdatedPlayerData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdatedPlayerData() const
    {
        NativeCall<void>(this, "AShooterPlayerState.UpdatedPlayerData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerState.UploadCharacterSettingsOnClubARK(FPrimalPlayerCharacterConfigStructReplicate
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadCharacterSettingsOnClubARK(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerState.UploadCharacterSettingsOnClubARK(FPrimalPlayerCharacterConfigStructReplicated)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ValidateGeneratedRepEnums(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", a0);
    }

    float& AllowedRespawnIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerState.AllowedRespawnInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextAllowTurretCopySettingsTime` +80, medido na build 25090264
    //  (offset absoluto medido: 0x13C0; confianca media)
    void*& CachedPlayerIPAddressField() const
    { return BrzCampoAncorado<void*>(this, "NextAllowTurretCopySettingsTime", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextAllowTurretCopySettingsTime` +72, medido na build 25090264
    //  (offset absoluto medido: 0x13B8; confianca media)
    void*& CachedPlayerPlatformField() const
    { return BrzCampoAncorado<void*>(this, "NextAllowTurretCopySettingsTime", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextAllowTurretCopySettingsTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1388; confianca alta)
    void*& CachedPlayerUniqueNetIdField() const
    { return BrzCampoAncorado<void*>(this, "NextAllowTurretCopySettingsTime", 24); }
    TArray<void*>& CachedSpawnPointInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerState.CachedSpawnPointInfos"); }
    int& CurrentlySelectedDinoOrderGroupField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerState.CurrentlySelectedDinoOrderGroup"); }
    BrzCampoPonteiro DefaultItemSlotClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerState.DefaultItemSlotClasses")); }
    FieldArray<unsigned char> DefaultItemSlotEngramsField() const
    { return { (void*)this, "AShooterPlayerState.DefaultItemSlotEngrams" }; }
    BrzCampoPonteiro DefaultItemSlotSkillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerState.DefaultItemSlotSkills")); }
    FieldArray<FDinoOrderGroup> DinoOrderGroupsField() const
    { return { (void*)this, "AShooterPlayerState.DinoOrderGroups" }; }
    TArray<void*>& EngramItemBlueprintsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerState.EngramItemBlueprints"); }
    int& FreeEngramPointsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerState.FreeEngramPoints"); }
    int& FreeSkillPointsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerState.FreeSkillPoints"); }
    double& GenesisAbilityErrorLastTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerState.GenesisAbilityErrorLastTime"); }
    unsigned int& HashedUniqueIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterPlayerState.HashedUniqueID"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextAllowTurretCopySettingsTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1380; confianca alta)
    void*& LastChangedPlayerDataTimeField() const
    { return BrzCampoAncorado<void*>(this, "NextAllowTurretCopySettingsTime", 16); }
    double& LastTimeDiedToEnemyTeamField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerState.LastTimeDiedToEnemyTeam"); }
    BrzCampoPonteiro LastTribeInviteDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerState.LastTribeInviteData")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextAllowTurretCopySettingsTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1378; confianca alta)
    double& LastTribeRequestTimeField() const
    { return BrzCampoAncorado<double>(this, "NextAllowTurretCopySettingsTime", 8); }
    UPrimalPlayerData*& MyPlayerDataField() const
    { return *GetNativePointerField<UPrimalPlayerData**>(this, "AShooterPlayerState.MyPlayerData"); }
    FPrimalPlayerDataStruct& MyPlayerDataStructField() const
    { return *GetNativePointerField<FPrimalPlayerDataStruct*>(this, "AShooterPlayerState.MyPlayerDataStruct"); }
    BrzCampoPonteiro MyTribeDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerState.MyTribeData")); }
    double& NextAllowTurretCopySettingsTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerState.NextAllowTurretCopySettingsTime"); }
    double& NextAllowedRespawnTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerState.NextAllowedRespawnTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTribeInviteData` +504, medido na build 25090264
    //  (offset absoluto medido: 0x10D0; confianca baixa)
    void*& OnClientAdminInfoPlayerAdministratorRecivedField() const
    { return BrzCampoAncorado<void*>(this, "LastTribeInviteData", 504); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTribeInviteData` +488, medido na build 25090264
    //  (offset absoluto medido: 0x10C0; confianca baixa)
    void*& OnClientAdminInfoPlayerBannedRecivedField() const
    { return BrzCampoAncorado<void*>(this, "LastTribeInviteData", 488); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTribeInviteData` +456, medido na build 25090264
    //  (offset absoluto medido: 0x10A0; confianca baixa)
    void*& OnClientAdminInfoPlayerConnectedRecivedField() const
    { return BrzCampoAncorado<void*>(this, "LastTribeInviteData", 456); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTribeInviteData` +472, medido na build 25090264
    //  (offset absoluto medido: 0x10B0; confianca baixa)
    void*& OnClientServerOptionsInfoRecivedField() const
    { return BrzCampoAncorado<void*>(this, "LastTribeInviteData", 472); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultItemSlotSkills` +84, medido na build 25090264
    //  (offset absoluto medido: 0xD00; confianca media)
    void*& OwnedDLCsField() const
    { return BrzCampoAncorado<void*>(this, "DefaultItemSlotSkills", 84); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EngramItemBlueprints` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1118; confianca alta)
    void*& ServerEngramItemBlueprintsSetField() const
    { return BrzCampoAncorado<void*>(this, "EngramItemBlueprints", 16); }
    int& TotalEngramPointsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerState.TotalEngramPoints"); }
    int& TotalSkillPointsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerState.TotalSkillPoints"); }
    BrzCampoPonteiro TreeSkillPointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerState.TreeSkillPoints")); }
    BitFieldValue<bool, unsigned __int32> bQuitter()
    { return { (void*)this, "bQuitter" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPLAYERSTATE_H
