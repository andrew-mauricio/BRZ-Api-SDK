// ==========================================================================
//  AShooterGameMode — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERGAMEMODE_H
#define BRZ_SDK_JOGO_ASHOOTERGAMEMODE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AHibernationManager;
struct AOceanDinoManager;
struct APawn;
struct APlayerController;
struct APrimalDinoCharacter;
struct AShooterPlayerController;
struct FName;
struct UAllClustersInventory;
struct UAntiDupeTransactionLog;
struct UClass;
struct UPrimalPlayerData;
struct URCONServer;
struct UShooterCheatManager;

#include "APrimalGameMode.h"

struct AShooterGameMode : public APrimalGameMode
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterGameMode"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ActorDestroyed(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    void ActorDestroyed(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ActorDestroyed(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ActorStasised(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    void ActorStasised(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ActorStasised(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ActorUnstasised(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ActorUnstasised(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ActorUnstasised(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.AddAutoWaterRefreshCrop(APrimalStructureItemContainer_CropPlot*,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddAutoWaterRefreshCrop(void* a0, double a1) const
    {
        return NativeCall<void*, void*, double>(this, "AShooterGameMode.AddAutoWaterRefreshCrop(APrimalStructureItemContainer_CropPlot*,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.AddMaxItemQuantityOverrides(TMap<FString,FMaxItemQuantityOverride,FDefaultSetAl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddMaxItemQuantityOverrides(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.AddMaxItemQuantityOverrides(TMap<FString,FMaxItemQuantityOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMaxItemQuantityOverride,0>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddNewTribe(AShooterPlayerState*,FString&,FTribeGovernment&,FUserCosmeticInfo)
    // endereco: casamento de bytes com a build de referencia
    unsigned long long AddNewTribe(void* a0, const FString& a1, void* a2, void* a3) const
    {
        return NativeCall<unsigned long long, void*, void*, void*, void*>(this, "AShooterGameMode.AddNewTribe(AShooterPlayerState*,FString&,FTribeGovernment&,FUserCosmeticInfo)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    unsigned long long AddNewTribe(void* a0, FString* a1, void* a2, void* a3) const
    { return AddNewTribe(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddPlayerID(int,FString,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void AddPlayerID(int a0, const FString& a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "AShooterGameMode.AddPlayerID(int,FString,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AddPlayerID(int a0, FString* a1, bool a2) const
    { AddPlayerID(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.AddPlayerToBeNotifiedWhenCachedTeamTameListIsUpdated(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayer
    // endereco: casamento de bytes com a build de referencia
    bool AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.AddPlayerToNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.AddToDynamicColorSet(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=574+grafo=3/3]]
    BrzPonteiro AddToDynamicColorSet(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.AddToDynamicColorSet(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddToDynamicColorSet(FString* a0) const
    { return AddToDynamicColorSet(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.AddToHiddenHarvestingComponents(FAttachedInstancedHarvestingElement*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToHiddenHarvestingComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.AddToHiddenHarvestingComponents(FAttachedInstancedHarvestingElement*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.AddToPendingStructureDestroys(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToPendingStructureDestroys(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.AddToPendingStructureDestroys(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddToTribeLog(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void AddToTribeLog(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterGameMode.AddToTribeLog(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AddToTribeLog(int a0, FString* a1) const
    { AddToTribeLog(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddTrackedAdminCommand(APlayerController*,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void AddTrackedAdminCommand(void* a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterGameMode.AddTrackedAdminCommand(APlayerController*,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AddTrackedAdminCommand(void* a0, FString* a1, FString* a2) const
    { AddTrackedAdminCommand(a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AddTribeWar(int,int,int,int,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddTribeWar(int a0, int a1, int a2, int a3, float a4, float a5, bool a6) const
    {
        NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar(int,int,int,int,float,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)
    // endereco: cache_pdb_25090264
    void AdjustDamage(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "AShooterGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.AdminBroadcast(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdminBroadcast(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.AdminBroadcast(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AdminBroadcast(FString* a0) const
    { return AdminBroadcast(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.AdminExit(FString)
    // endereco: casamento de bytes com a build de referencia
    void AdminExit(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.AdminExit(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AdminExit(FString* a0) const
    { AdminExit(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AllowAddXP(UPrimalCharacterStatusComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool AllowAddXP(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.AllowAddXP(UPrimalCharacterStatusComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.AllowDamage(UWorld*,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowDamage(void* a0, int a1, int a2, bool a3) const
    {
        return NativeCall<bool, void*, int, int, bool>(this, "AShooterGameMode.AllowDamage(UWorld*,int,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AllowPlayerToJoinNoCheck(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    void AllowPlayerToJoinNoCheck(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.AllowPlayerToJoinNoCheck(FUniqueNetId&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AllowRenameTribe(AShooterPlayerState*,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool AllowRenameTribe(void* a0, const FString& a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.AllowRenameTribe(AShooterPlayerState*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool AllowRenameTribe(void* a0, FString* a1) const
    { return AllowRenameTribe(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AllowTaming(int,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowTaming(int a0, void* a1) const
    {
        return NativeCall<bool, int, void*>(this, "AShooterGameMode.AllowTaming(int,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AreTribesAllied(int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool AreTribesAllied(int a0, int a1) const
    {
        return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.ArkGlobalCommand(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ArkGlobalCommand(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.ArkGlobalCommand(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ArkGlobalCommand(FString* a0) const
    { return ArkGlobalCommand(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.AttemptLoadClass(FName)
    // endereco: casamento de bytes com a build de referencia
    UClass* AttemptLoadClass(unsigned long long a0) const
    {
        return NativeCall<UClass*, unsigned long long>(this, "AShooterGameMode.AttemptLoadClass(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.BPDoInitSessionParams(FShooterGameSessionParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDoInitSessionParams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.BPDoInitSessionParams(FShooterGameSessionParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.BPDoInitSessionParams_Implementation(FShooterGameSessionParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDoInitSessionParams_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.BPDoInitSessionParams_Implementation(FShooterGameSessionParams&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.BPIsSpawnpointAllowed_Implementation(APlayerStart*,AController*)
    // endereco: cache_pdb_25090264
    bool BPIsSpawnpointAllowed_Implementation(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.BPIsSpawnpointAllowed_Implementation(APlayerStart*,AController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.BPIsSpawnpointPreferred_Implementation(APlayerStart*,AController*)
    // endereco: cache_pdb_25090264
    bool BPIsSpawnpointPreferred_Implementation(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.BPIsSpawnpointPreferred_Implementation(APlayerStart*,AController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.BPPreSpawnedDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPPreSpawnedDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.BPPreSpawnedDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.BanPlayer(FString,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    static bool BanPlayer(const FString& a0, unsigned int a1)
    {
        return NativeCall<bool, void*, unsigned int>(nullptr, "AShooterGameMode.BanPlayer(FString,unsignedint)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool BanPlayer(FString* a0, unsigned int a1)
    { return BanPlayer(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterGameMode.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.BeginUnloadingWorld()
    // endereco: casamento de bytes com a build de referencia
    void BeginUnloadingWorld() const
    {
        NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.BroadcastPreSpawnDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=55]]
    void BroadcastPreSpawnDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.BroadcastPreSpawnDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ChangePlayerDataConfig(APlayerController*,FPrimalPlayerCharacterConfigStruct&)
    // endereco: casamento de bytes com a build de referencia
    void ChangePlayerDataConfig(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.ChangePlayerDataConfig(APlayerController*,FPrimalPlayerCharacterConfigStruct&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ChatLogAppend(AShooterPlayerController*,FPrimalChatMessage&)
    // endereco: casamento de bytes com a build de referencia
    void ChatLogAppend(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.ChatLogAppend(AShooterPlayerController*,FPrimalChatMessage&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ChatLogFlush(bool)
    // endereco: casamento de bytes com a build de referencia
    void ChatLogFlush(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterGameMode.ChatLogFlush(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ChatLogFlushOnTick()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ChatLogFlushOnTick() const
    {
        NativeCall<void>(this, "AShooterGameMode.ChatLogFlushOnTick()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.CheckArkTributeAvailability()
    // endereco: casamento de bytes com a build de referencia
    void CheckArkTributeAvailability() const
    {
        NativeCall<void>(this, "AShooterGameMode.CheckArkTributeAvailability()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.CheckForDupedDinos()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=515+grafo=8/8]]
    void CheckForDupedDinos() const
    {
        NativeCall<void>(this, "AShooterGameMode.CheckForDupedDinos()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.CheckForRepopulation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=17]]
    BrzPonteiro CheckForRepopulation() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.CheckForRepopulation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.CheckGlobalEnables()
    // endereco: casamento de bytes com a build de referencia
    void CheckGlobalEnables() const
    {
        NativeCall<void>(this, "AShooterGameMode.CheckGlobalEnables()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.CheckIsOfficialServer()
    // endereco: cache_pdb_25090264
    void CheckIsOfficialServer() const
    {
        NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.CheckJoinInProgress(bool,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CheckJoinInProgress(bool a0, void* a1) const
    {
        return NativeCall<bool, bool, void*>(this, "AShooterGameMode.CheckJoinInProgress(bool,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ChoosePlayerStart_Implementation(AController*)
    // endereco: casamento de bytes com a build de referencia
    AActor* ChoosePlayerStart_Implementation(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "AShooterGameMode.ChoosePlayerStart_Implementation(AController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.ClearLastMissionDeactivatedTime(TSubclassOf<AMissionType>)
    // endereco: casamento de bytes com a build de referencia
    void ClearLastMissionDeactivatedTime(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ClearLastMissionDeactivatedTime(TSubclassOf<AMissionType>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ClearSavesAndRestart()
    // endereco: casamento de bytes com a build de referencia
    void ClearSavesAndRestart() const
    {
        NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>&,float,T
    // endereco: casamento de bytes com a build de referencia
    int CountOverlappingDinoCharactersOfTeamAndClass(void* a0, float a1, void* a2, int a3, bool a4, bool a5) const
    {
        return NativeCall<int, void*, float, void*, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>&,float,TSubclassOf<APrimalDinoCharacter>,int,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.CreatePipes()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool CreatePipes() const
    {
        return NativeCall<bool>(this, "AShooterGameMode.CreatePipes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DamageEventLogFlush()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    void DamageEventLogFlush() const
    {
        NativeCall<void>(this, "AShooterGameMode.DamageEventLogFlush()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DedicatedForceLoadSoftAssets()
    // endereco: casamento de bytes com a build de referencia
    void DedicatedForceLoadSoftAssets() const
    {
        NativeCall<void>(this, "AShooterGameMode.DedicatedForceLoadSoftAssets()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.DelayedRestart(int)
    // endereco: casamento de bytes com a build de referencia
    void DelayedRestart(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameMode.DelayedRestart(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DeleteBackupForMap(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DeleteBackupForMap(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterGameMode.DeleteBackupForMap(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DeleteBackupForMap(FString* a0, FString* a1, FString* a2) const
    { return DeleteBackupForMap(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DeletePlayerData(AShooterPlayerState*,bool)
    // endereco: casamento de bytes com a build de referencia
    void DeletePlayerData(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterGameMode.DeletePlayerData(AShooterPlayerState*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DisallowPlayerToJoinNoCheck(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    void DisallowPlayerToJoinNoCheck(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.DisallowPlayerToJoinNoCheck(FUniqueNetId&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DoMaintenanceRestart()
    // endereco: casamento de bytes com a build de referencia
    void DoMaintenanceRestart() const
    {
        NativeCall<void>(this, "AShooterGameMode.DoMaintenanceRestart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DoMaintenanceRestartWarning()
    // endereco: casamento de bytes com a build de referencia
    void DoMaintenanceRestartWarning() const
    {
        NativeCall<void>(this, "AShooterGameMode.DoMaintenanceRestartWarning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DoNPCZoneManagerLandscapeChangeFixups()
    // endereco: casamento de bytes com a build de referencia
    void DoNPCZoneManagerLandscapeChangeFixups() const
    {
        NativeCall<void>(this, "AShooterGameMode.DoNPCZoneManagerLandscapeChangeFixups()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DownloadTransferredPlayer(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void DownloadTransferredPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.DownloadTransferredPlayer(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedArkTributeAvailability(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedArkTributeAvailability(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedArkTributeAvailability(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedArkTributeAvailability(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedArkTributeAvailability(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedBadWordList(bool,FString&,int,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=868+grafo=17/17]]
    BrzPonteiro DownloadedBadWordList(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedBadWordList(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedBadWordList(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedBadWordList(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedBadWordWhiteList(bool,FString&,int,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=318+grafo=7/7]]
    BrzPonteiro DownloadedBadWordWhiteList(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedBadWordWhiteList(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedBadWordWhiteList(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedBadWordWhiteList(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedBanList(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedBanList(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedBanList(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedBanList(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedBanList(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedClassLiveTunableConfig(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedClassLiveTunableConfig(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedClassLiveTunableConfig(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedClassLiveTunableConfig(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedClassLiveTunableConfig(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedCosmeticWhitelist(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedCosmeticWhitelist(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedCosmeticWhitelist(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedCosmeticWhitelist(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedCosmeticWhitelist(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedDynamicConfig(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedDynamicConfig(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedDynamicConfig(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedDynamicConfig(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedDynamicConfig(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedDynamicUndermeshConfig(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedDynamicUndermeshConfig(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedDynamicUndermeshConfig(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedDynamicUndermeshConfig(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedDynamicUndermeshConfig(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedGlobalEnables(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedGlobalEnables(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedGlobalEnables(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedGlobalEnables(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedGlobalEnables(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedLiveTuningOverloads(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedLiveTuningOverloads(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedLiveTuningOverloads(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedLiveTuningOverloads(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedLiveTuningOverloads(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.DownloadedNetModBanlist(bool,FString&,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadedNetModBanlist(bool a0, const FString& a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, bool, void*, int, void*>(this, "AShooterGameMode.DownloadedNetModBanlist(bool,FString&,int,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadedNetModBanlist(bool a0, FString* a1, int a2, FString* a3) const
    { return DownloadedNetModBanlist(a0, *a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.DumpAssetProperties(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool DumpAssetProperties(const FString& a0, const FString& a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.DumpAssetProperties(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool DumpAssetProperties(FString* a0, FString* a1) const
    { return DumpAssetProperties(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameMode.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ExecuteCommand(FString&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ExecuteCommand(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ExecuteCommand(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ExecuteCommand(FString* a0) const
    { ExecuteCommand(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    bool ExtraPreLoginChecksBeforeWelcomePlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.FillNumDinosOnTeam_PerDinoCount(int,TArray<TSoftClassPtr<APrimalDinoCharacter>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FillNumDinosOnTeam_PerDinoCount(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "AShooterGameMode.FillNumDinosOnTeam_PerDinoCount(int,TArray<TSoftClassPtr<APrimalDinoCharacter>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.FilterBadWords(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool FilterBadWords(const FString& a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "AShooterGameMode.FilterBadWords(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool FilterBadWords(FString* a0, bool a1) const
    { return FilterBadWords(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.FilterBadWordsAndURLs(FString&,bool,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FilterBadWordsAndURLs(const FString& a0, bool a1, void* a2) const
    {
        return NativeCall<void*, void*, bool, void*>(this, "AShooterGameMode.FilterBadWordsAndURLs(FString&,bool,bool&)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FilterBadWordsAndURLs(FString* a0, bool a1, void* a2) const
    { return FilterBadWordsAndURLs(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.FindInactivePlayerFromHashedUniqueID(unsignedint)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindInactivePlayerFromHashedUniqueID(unsigned int a0) const
    {
        return NativeCall<void*, unsigned int>(this, "AShooterGameMode.FindInactivePlayerFromHashedUniqueID(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.FindOrCreateSerializedObject(FAtlasSaveObjectData*,TArray<UObject*,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    void FindOrCreateSerializedObject(void* a0, void* a1, unsigned long long a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, unsigned long long, void*, void*>(this, "AShooterGameMode.FindOrCreateSerializedObject(FAtlasSaveObjectData*,TArray<UObject*,TSizedDefaultAllocator<32>>&,FName,TArray<AActor*,TSizedDefaultAllocator<32>>&,UWorld*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.FlushPrimalStats(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void FlushPrimalStats(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.FlushPrimalStats(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.ForceAddPlayerToTribe(AShooterPlayerState*,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceAddPlayerToTribe(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.ForceAddPlayerToTribe(AShooterPlayerState*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ForceAddPlayerToTribe(void* a0, FString* a1) const
    { return ForceAddPlayerToTribe(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ForceCreateTribe(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    int ForceCreateTribe(const FString& a0, int a1) const
    {
        return NativeCall<int, void*, int>(this, "AShooterGameMode.ForceCreateTribe(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int ForceCreateTribe(FString* a0, int a1) const
    { return ForceCreateTribe(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.ForceRefreshBanCheaterlist()
    // endereco: casamento de bytes com a build de referencia
    void ForceRefreshBanCheaterlist() const
    {
        NativeCall<void>(this, "AShooterGameMode.ForceRefreshBanCheaterlist()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ForceRepopulateAllHarvestElements(UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    void ForceRepopulateAllHarvestElements(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterGameMode.ForceRepopulateAllHarvestElements(UE::Math::TVector<double>,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ForceRepopulateFoliageAtPoint(UE::Math::TVector<double>,float,int,TSubclassOf<A
    // endereco: casamento de bytes com a build de referencia
    void ForceRepopulateFoliageAtPoint(void* a0, float a1, int a2, void* a3, void* a4, void* a5, bool a6, int a7, bool a8, float a9, bool a10) const
    {
        NativeCall<void, void*, float, int, void*, void*, void*, bool, int, bool, float, bool>(this, "AShooterGameMode.ForceRepopulateFoliageAtPoint(UE::Math::TVector<double>,float,int,TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,int,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GameWelcomePlayer(UNetConnection*,FString&)
    // endereco: casamento de bytes com a build de referencia
    void GameWelcomePlayer(void* a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.GameWelcomePlayer(UNetConnection*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GameWelcomePlayer(void* a0, FString* a1) const
    { GameWelcomePlayer(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GeneratePGMapFolderName(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHa
    // endereco: casamento de bytes com a build de referencia
    void GeneratePGMapFolderName(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.GeneratePGMapFolderName(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GeneratePlayerDataId(TSharedPtr<FUniqueNetId,1>)
    // endereco: casamento de bytes com a build de referencia
    unsigned int GeneratePlayerDataId(void* a0) const
    {
        return NativeCall<unsigned int, void*>(this, "AShooterGameMode.GeneratePlayerDataId(TSharedPtr<FUniqueNetId,1>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GenerateProfileFileName(FUniqueNetIdRepl&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void GenerateProfileFileName(void* retorno, void* a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterGameMode.GenerateProfileFileName(FUniqueNetIdRepl&,FString&,FString&)", retorno, a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GenerateProfileFileName(void* retorno, void* a0, FString* a1, FString* a2) const
    { GenerateProfileFileName(retorno, a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GenerateTribeId()
    // endereco: casamento de bytes com a build de referencia
    unsigned int GenerateTribeId() const
    {
        return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GenericPlayerInitialization(AController*)
    // endereco: casamento de bytes com a build de referencia
    void GenericPlayerInitialization(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.GenericPlayerInitialization(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetActorSaveGameTypes(TArray<TSubclassOf<AActor>,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetActorSaveGameTypes(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.GetActorSaveGameTypes(TArray<TSubclassOf<AActor>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetAdministratorMap()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=292+grafo=3/3]]
    BrzPonteiro GetAdministratorMap() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.GetAdministratorMap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetBackupCreationTimesForMap(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBackupCreationTimesForMap(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.GetBackupCreationTimesForMap(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetBackupCreationTimesForMap(FString* a0, FString* a1) const
    { return GetBackupCreationTimesForMap(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetBackupsForMap(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBackupsForMap(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.GetBackupsForMap(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetBackupsForMap(FString* a0, FString* a1) const
    { return GetBackupsForMap(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetBanDurationString(FTimespan&)
    // endereco: casamento de bytes com a build de referencia
    void GetBanDurationString(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.GetBanDurationString(FTimespan&)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetBannedMap()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBannedMap() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.GetBannedMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetBoolOption(FString&,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GetBoolOption(const FString& a0, const FString& a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "AShooterGameMode.GetBoolOption(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GetBoolOption(FString* a0, FString* a1, bool a2) const
    { return GetBoolOption(*a0, *a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.GetBoolOptionIni(FString,FString,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GetBoolOptionIni(const FString& a0, const FString& a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "AShooterGameMode.GetBoolOptionIni(FString,FString,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GetBoolOptionIni(FString* a0, FString* a1, bool a2) const
    { return GetBoolOptionIni(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetDefaultPawnClassForController_Implementation(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=51]]
    UClass* GetDefaultPawnClassForController_Implementation(void* a0) const
    {
        return NativeCall<UClass*, void*>(this, "AShooterGameMode.GetDefaultPawnClassForController_Implementation(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetDinoDamageMultiplier(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetDinoDamageMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterGameMode.GetDinoDamageMultiplier(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetDinoResistanceMultiplier(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=443+grafo=6/6]]
    float GetDinoResistanceMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterGameMode.GetDinoResistanceMultiplier(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetDynamicConfig()
    // endereco: casamento de bytes com a build de referencia
    void GetDynamicConfig() const
    {
        NativeCall<void>(this, "AShooterGameMode.GetDynamicConfig()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetExtraDinoSpawnWeight(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetExtraDinoSpawnWeight(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterGameMode.GetExtraDinoSpawnWeight(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetFloatOption(FString&,FString&,float)
    // endereco: casamento de bytes com a build de referencia
    float GetFloatOption(const FString& a0, const FString& a1, float a2) const
    {
        return NativeCall<float, void*, void*, float>(this, "AShooterGameMode.GetFloatOption(FString&,FString&,float)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    float GetFloatOption(FString* a0, FString* a1, float a2) const
    { return GetFloatOption(*a0, *a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.GetFloatOptionIni(FString,FString)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=140+grafo=3/3]]
    float GetFloatOptionIni(const FString& a0, const FString& a1) const
    {
        return NativeCall<float, void*, void*>(this, "AShooterGameMode.GetFloatOptionIni(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    float GetFloatOptionIni(FString* a0, FString* a1) const
    { return GetFloatOptionIni(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetGameplayVolumesDynamicConfig(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameplayVolumesDynamicConfig(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.GetGameplayVolumesDynamicConfig(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetGameplayVolumesDynamicConfig(FString* a0) const
    { return GetGameplayVolumesDynamicConfig(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    float GetHarvestResourceItemAmountMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetIntOption(FString&,FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static int GetIntOption(const FString& a0, const FString& a1, int a2)
    {
        return NativeCall<int, void*, void*, int>(nullptr, "AShooterGameMode.GetIntOption(FString&,FString&,int)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static int GetIntOption(FString* a0, FString* a1, int a2)
    { return GetIntOption(*a0, *a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.GetIntOptionIni(FString,FString)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=138+grafo=3/3]]
    int GetIntOptionIni(const FString& a0, const FString& a1) const
    {
        return NativeCall<int, void*, void*>(this, "AShooterGameMode.GetIntOptionIni(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int GetIntOptionIni(FString* a0, FString* a1) const
    { return GetIntOptionIni(*a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.GetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType>)
    // endereco: casamento de bytes com a build de referencia
    double GetLastMissionDeactivatedUtcTime(void* a0) const
    {
        return NativeCall<double, void*>(this, "AShooterGameMode.GetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetLaunchOptionFloat(FString&,float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetLaunchOptionFloat(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.GetLaunchOptionFloat(FString&,float&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetLaunchOptionFloat(FString* a0, void* a1) const
    { return GetLaunchOptionFloat(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetMapName()
    // endereco: casamento de bytes com a build de referencia
    void GetMapName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.GetMapName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetMapsSavedDirAllPlatforms(UWorld*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMapsSavedDirAllPlatforms(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterGameMode.GetMapsSavedDirAllPlatforms(UWorld*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetNextBackupFilenameForMap(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextBackupFilenameForMap(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.GetNextBackupFilenameForMap(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetNextBackupFilenameForMap(FString* a0, FString* a1) const
    { return GetNextBackupFilenameForMap(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetNumDeaths(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=32]]
    BrzPonteiro GetNumDeaths(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.GetNumDeaths(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetNumDeaths(FString* a0) const
    { return GetNumDeaths(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetNumDinosOnTeam(int)
    // endereco: casamento de bytes com a build de referencia
    int GetNumDinosOnTeam(int a0) const
    {
        return NativeCall<int, int>(this, "AShooterGameMode.GetNumDinosOnTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetNumberOfLivePlayersOnTribe(FString&)
    // endereco: casamento de bytes com a build de referencia
    int GetNumberOfLivePlayersOnTribe(const FString& a0) const
    {
        return NativeCall<int, void*>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int GetNumberOfLivePlayersOnTribe(FString* a0) const
    { return GetNumberOfLivePlayersOnTribe(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetOceanDinoManager()
    // endereco: casamento de bytes com a build de referencia
    AOceanDinoManager* GetOceanDinoManager() const
    {
        return NativeCall<AOceanDinoManager*>(this, "AShooterGameMode.GetOceanDinoManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetOrCreateLeaderboardEntry(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrCreateLeaderboardEntry(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterGameMode.GetOrCreateLeaderboardEntry(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetOrCreateServerCheatManager()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro GetOrCreateServerCheatManager() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.GetOrCreateServerCheatManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetOrLoadTribeData(int,FTribeData&,ETribeDataExclude)
    // endereco: casamento de bytes com a build de referencia
    bool GetOrLoadTribeData(int a0, void* a1, int a2) const
    {
        return NativeCall<bool, int, void*, int>(this, "AShooterGameMode.GetOrLoadTribeData(int,FTribeData&,ETribeDataExclude)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetOrLoadTribeData_ReturnAbandonedResult(int,FTribeData&,bool&,ETribeDataExclud
    // endereco: casamento de bytes com a build de referencia
    bool GetOrLoadTribeData_ReturnAbandonedResult(int a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<bool, int, void*, void*, int>(this, "AShooterGameMode.GetOrLoadTribeData_ReturnAbandonedResult(int,FTribeData&,bool&,ETribeDataExclude)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>&,float,TSu
    // endereco: casamento de bytes com a build de referencia
    void GetOverlappingDinoCharactersOfTeamAndClass(void* retorno, void* a0, float a1, void* a2, int a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, void*, float, void*, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass(UE::Math::TVector<double>&,float,TSubclassOf<APrimalDinoCharacter>,int,bool,bool)", retorno, a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetPlayerControllerByUniqueID(UWorld*,FUniqueNetIdRepl)
    // endereco: casamento de bytes com a build de referencia
    static APlayerController* GetPlayerControllerByUniqueID(void* a0, void* a1)
    {
        return NativeCall<APlayerController*, void*, void*>(nullptr, "AShooterGameMode.GetPlayerControllerByUniqueID(UWorld*,FUniqueNetIdRepl)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetPlayerData(FString&)
    // endereco: casamento de bytes com a build de referencia
    UPrimalPlayerData* GetPlayerData(const FString& a0) const
    {
        return NativeCall<UPrimalPlayerData*, void*>(this, "AShooterGameMode.GetPlayerData(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    UPrimalPlayerData* GetPlayerData(FString* a0) const
    { return GetPlayerData(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetPlayerDataByInt(unsigned__int64&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetPlayerDataByInt(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.GetPlayerDataByInt(unsigned__int64&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetPlayerDataFor(AShooterPlayerController*,bool&,bool,FPrimalPlayerCharacterCon
    // endereco: casamento de bytes com a build de referencia
    UPrimalPlayerData* GetPlayerDataFor(void* a0, void* a1, bool a2, void* a3, bool a4, bool a5) const
    {
        return NativeCall<UPrimalPlayerData*, void*, void*, bool, void*, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor(AShooterPlayerController*,bool&,bool,FPrimalPlayerCharacterConfigStruct&,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetPlayerIDForSteamID(unsigned__int64)
    // endereco: cache_pdb_25090264
    int GetPlayerIDForSteamID(unsigned int a0) const
    {
        return NativeCall<int, unsigned int>(this, "AShooterGameMode.GetPlayerIDForSteamID(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetPlayerIDFromUniqueId(FString&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetPlayerIDFromUniqueId(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.GetPlayerIDFromUniqueId(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetPlayerIDFromUniqueId(FString* a0) const
    { return GetPlayerIDFromUniqueId(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetSaveDirectoryName(UWorld*,ESaveType::Type,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetSaveDirectoryName(void* retorno, void* a0, int a1, bool a2, bool a3)
    {
        NativeCall<void, void*, void*, int, bool, bool>(nullptr, "AShooterGameMode.GetSaveDirectoryName(UWorld*,ESaveType::Type,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetServerName(bool)
    // endereco: casamento de bytes com a build de referencia
    void GetServerName(void* retorno, bool a0) const
    {
        NativeCall<void, void*, bool>(this, "AShooterGameMode.GetServerName(bool)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetServerSettingsFloat(FString&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerSettingsFloat(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.GetServerSettingsFloat(FString&,float&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetServerSettingsFloat(FString* a0, void* a1) const
    { return GetServerSettingsFloat(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetSessionTimeString_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void GetSessionTimeString_Implementation(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.GetSessionTimeString_Implementation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetSteamIDForPlayerID(int)
    // endereco: cache_pdb_25090264
    unsigned long long GetSteamIDForPlayerID(int a0) const
    {
        return NativeCall<unsigned long long, int>(this, "AShooterGameMode.GetSteamIDForPlayerID(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetSteamIDStringForPlayerID(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetSteamIDStringForPlayerID(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "AShooterGameMode.GetSteamIDStringForPlayerID(int)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.GetStringOption(FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void GetStringOption(void* retorno, const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterGameMode.GetStringOption(FString,FString)", retorno, const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetStringOption(void* retorno, FString* a0, FString* a1) const
    { GetStringOption(retorno, *a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetTracedSpawnLocation(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void GetTracedSpawnLocation(void* retorno, void* a0, float a1) const
    {
        NativeCall<void, void*, void*, float>(this, "AShooterGameMode.GetTracedSpawnLocation(UE::Math::TVector<double>&,float)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetTribeData(unsigned__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetTribeData(void* retorno, unsigned int a0) const
    {
        NativeCall<void, void*, unsigned int>(this, "AShooterGameMode.GetTribeData(unsigned__int64)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.GetTribeDataBlueprint(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTribeDataBlueprint(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterGameMode.GetTribeDataBlueprint(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.GetTribeIDOfPlayerID(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    int GetTribeIDOfPlayerID(unsigned int a0) const
    {
        return NativeCall<int, unsigned int>(this, "AShooterGameMode.GetTribeIDOfPlayerID(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.GetTribePerDinoAmountForDino(int,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTribePerDinoAmountForDino(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterGameMode.GetTribePerDinoAmountForDino(int,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HandleLeavingMap()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    void HandleLeavingMap() const
    {
        NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HandleMatchHasStarted()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142+grafo=3/3]]
    void HandleMatchHasStarted() const
    {
        NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HandleNewPlayer(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*
    // endereco: casamento de bytes com a build de referencia
    bool HandleNewPlayer(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, void*, bool>(this, "AShooterGameMode.HandleNewPlayer(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HandleNewPlayer_Implementation(AShooterPlayerController*,UPrimalPlayerData*,ASh
    // endereco: casamento de bytes com a build de referencia
    bool HandleNewPlayer_Implementation(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, void*, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation(AShooterPlayerController*,UPrimalPlayerData*,AShooterCharacter*,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HandleTransferCharacterDialogResult(bool,AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void HandleTransferCharacterDialogResult(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterGameMode.HandleTransferCharacterDialogResult(bool,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.HandleUserModValidationFailure(AShooterPlayerController*,TArray<__int64,TSizedD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleUserModValidationFailure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.HandleUserModValidationFailure(AShooterPlayerController*,TArray<__int64,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HasOption(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool HasOption(const FString& a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "AShooterGameMode.HasOption(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool HasOption(FString* a0, FString* a1)
    { return HasOption(*a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.HasReachedPerDinoAmountLimit(int,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool HasReachedPerDinoAmountLimit(int a0, void* a1) const
    {
        return NativeCall<bool, int, void*>(this, "AShooterGameMode.HasReachedPerDinoAmountLimit(int,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.HitchDetected(FSoftObjectPath&,float)
    // endereco: casamento de bytes com a build de referencia
    void HitchDetected(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterGameMode.HitchDetected(FSoftObjectPath&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.HttpSendAllCachedArkMetricsRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HttpSendAllCachedArkMetricsRequestComplete(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterGameMode.HttpSendAllCachedArkMetricsRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IncrementNumDeaths(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementNumDeaths(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.IncrementNumDeaths(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro IncrementNumDeaths(FString* a0) const
    { return IncrementNumDeaths(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IncrementNumDinos(int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void IncrementNumDinos(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IncrementNumDinos_PerDino(int,APrimalDinoCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementNumDinos_PerDino(int a0, void* a1, int a2) const
    {
        return NativeCall<void*, int, void*, int>(this, "AShooterGameMode.IncrementNumDinos_PerDino(int,APrimalDinoCharacter*,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IncrementPreLoginMetric()
    // endereco: cache_pdb_25090264
    void IncrementPreLoginMetric() const
    {
        NativeCall<void>(this, "AShooterGameMode.IncrementPreLoginMetric()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitGame(FString&,FString&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void InitGame(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterGameMode.InitGame(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitGame(FString* a0, FString* a1, FString* a2) const
    { InitGame(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitGameState()
    // endereco: casamento de bytes com a build de referencia
    void InitGameState() const
    {
        NativeCall<void>(this, "AShooterGameMode.InitGameState()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.InitGameStateDataSets()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void InitGameStateDataSets() const
    {
        NativeCall<void>(this, "AShooterGameMode.InitGameStateDataSets()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void InitNewPlayer(void* retorno, void* a0, void* a1, const FString& a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "AShooterGameMode.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)", retorno, a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitNewPlayer(void* retorno, void* a0, void* a1, FString* a2, FString* a3) const
    { InitNewPlayer(retorno, a0, a1, *a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitOptionBool(FString,FString,FString,bool)
    // endereco: casamento de bytes com a build de referencia
    void InitOptionBool(const FString& a0, const FString& a1, const FString& a2, bool a3) const
    {
        NativeCall<void, void*, void*, void*, bool>(this, "AShooterGameMode.InitOptionBool(FString,FString,FString,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptionBool(FString* a0, FString* a1, FString* a2, bool a3) const
    { InitOptionBool(*a0, *a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitOptionFloat(FString,FString,FString,float)
    // endereco: casamento de bytes com a build de referencia
    void InitOptionFloat(const FString& a0, const FString& a1, const FString& a2, float a3) const
    {
        NativeCall<void, void*, void*, void*, float>(this, "AShooterGameMode.InitOptionFloat(FString,FString,FString,float)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptionFloat(FString* a0, FString* a1, FString* a2, float a3) const
    { InitOptionFloat(*a0, *a1, *a2, a3); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.InitOptionInteger(FString,FString,FString,int)
    // endereco: casamento de bytes com a build de referencia
    void InitOptionInteger(const FString& a0, const FString& a1, const FString& a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "AShooterGameMode.InitOptionInteger(FString,FString,FString,int)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptionInteger(FString* a0, FString* a1, FString* a2, int a3) const
    { InitOptionInteger(*a0, *a1, *a2, a3); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.InitOptionString(FString,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void InitOptionString(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterGameMode.InitOptionString(FString,FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptionString(FString* a0, FString* a1, FString* a2) const
    { InitOptionString(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitOptions(FString)
    // endereco: casamento de bytes com a build de referencia
    void InitOptions(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.InitOptions(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptions(FString* a0) const
    { InitOptions(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitSeamlessTravelPlayer(AController*)
    // endereco: casamento de bytes com a build de referencia
    void InitSeamlessTravelPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.InitSeamlessTravelPlayer(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitShooterPlayer(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void InitShooterPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.InitShooterPlayer(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.InitializeDatabaseRefs()
    // endereco: casamento de bytes com a build de referencia
    void InitializeDatabaseRefs() const
    {
        NativeCall<void>(this, "AShooterGameMode.InitializeDatabaseRefs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsAHiddenHarvestingComponent(FAttachedInstancedHarvestingElement*)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsAHiddenHarvestingComponent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.IsAHiddenHarvestingComponent(FAttachedInstancedHarvestingElement*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsAllowedToCheat(FUniqueNetId&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=205+grafo=3/3]]
    BrzPonteiro IsAllowedToCheat(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.IsAllowedToCheat(FUniqueNetId&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsCachedTeamTameListOutOfDate(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsCachedTeamTameListOutOfDate(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.IsCachedTeamTameListOutOfDate(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsEngramClassGiveToPlayer(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsEngramClassGiveToPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.IsEngramClassGiveToPlayer(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsEngramClassHidden(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    bool IsEngramClassHidden(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.IsEngramClassHidden(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsFirstPlayerSpawn(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsFirstPlayerSpawn(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.IsFirstPlayerSpawn(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsLoginLockDisabled()
    // endereco: cache_pdb_25090264
    bool IsLoginLockDisabled() const
    {
        return NativeCall<bool>(this, "AShooterGameMode.IsLoginLockDisabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsPlayerAllowedToCheat(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayerAllowedToCheat(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.IsPlayerAllowedToCheat(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsPlayerAllowedToJoinNoCheck(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayerAllowedToJoinNoCheck(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.IsPlayerAllowedToJoinNoCheck(FUniqueNetId&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsPlayerAwaitingNotificationOnceTheirCachedTeamTameListFinishesUpdating(AShoote
    // endereco: cache_pdb_25090264
    BrzPonteiro IsPlayerAwaitingNotificationOnceTheirCachedTeamTameListFinishesUpdating(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.IsPlayerAwaitingNotificationOnceTheirCachedTeamTameListFinishesUpdating(AShooterPlayerController*,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsPlayerAwaitingToRecieveCachedTeamTameListASAP(AShooterPlayerController*,int&)
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayerAwaitingToRecieveCachedTeamTameListASAP(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.IsPlayerAwaitingToRecieveCachedTeamTameListASAP(AShooterPlayerController*,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsPlayerControllerAllowedToExclusiveJoin(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsPlayerInNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerC
    // endereco: cache_pdb_25090264
    BrzPonteiro IsPlayerInNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.IsPlayerInNextTeamBatchPlayersAwaitingUpdatedCachedTeamTameList(AShooterPlayerController*,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsSpawnpointPreferred(APlayerStart*,AController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsSpawnpointPreferred(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.IsSpawnpointPreferred(APlayerStart*,AController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsTeamCurrentlyUpdatingItsCachedTeamTameList(int,int&)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsTeamCurrentlyUpdatingItsCachedTeamTameList(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterGameMode.IsTeamCurrentlyUpdatingItsCachedTeamTameList(int,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.IsTeamIncludedInNextBatchToProcessTameList(int,int&)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsTeamIncludedInNextBatchToProcessTameList(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterGameMode.IsTeamIncludedInNextBatchToProcessTameList(int,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsTimeSinceMissionDeactivated(void* a0, float a1, bool a2) const
    {
        return NativeCall<bool, void*, float, bool>(this, "AShooterGameMode.IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType>,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.IsTribeWar(int,int)
    // endereco: casamento de bytes com a build de referencia
    bool IsTribeWar(int a0, int a1) const
    {
        return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.KickAllPlayersAndReload()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=114]]
    void KickAllPlayersAndReload() const
    {
        NativeCall<void>(this, "AShooterGameMode.KickAllPlayersAndReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.KickPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    static bool KickPlayer(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "AShooterGameMode.KickPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool KickPlayer(FString* a0)
    { return KickPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.KickPlayerController(APlayerController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    void KickPlayerController(void* a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.KickPlayerController(APlayerController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void KickPlayerController(void* a0, FString* a1) const
    { KickPlayerController(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.Killed(AController*,AController*,APawn*,UDamageType*)
    // endereco: casamento de bytes com a build de referencia
    void Killed(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterGameMode.Killed(AController*,AController*,APawn*,UDamageType*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ListAllPlayers(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ListAllPlayers(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ListAllPlayers(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ListAllPlayers(FString* a0) const
    { ListAllPlayers(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadAbandonedTribeFile(int)
    // endereco: casamento de bytes com a build de referencia
    void LoadAbandonedTribeFile(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "AShooterGameMode.LoadAbandonedTribeFile(int)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadBanListFromString(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void LoadBanListFromString(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterGameMode.LoadBanListFromString(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void LoadBanListFromString(FString* a0, bool a1) const
    { LoadBanListFromString(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadBannedList()
    // endereco: casamento de bytes com a build de referencia
    void LoadBannedList() const
    {
        NativeCall<void>(this, "AShooterGameMode.LoadBannedList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.LoadModValidationFiles()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro LoadModValidationFiles() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.LoadModValidationFiles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadPlayerData(AShooterPlayerState*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    UPrimalPlayerData* LoadPlayerData(void* a0, bool a1, int a2) const
    {
        return NativeCall<UPrimalPlayerData*, void*, bool, int>(this, "AShooterGameMode.LoadPlayerData(AShooterPlayerState*,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadPlayerDataIds()
    // endereco: casamento de bytes com a build de referencia
    void LoadPlayerDataIds() const
    {
        NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadPlayerIds_Process(unsigned__int64,TArray<unsignedchar,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    void LoadPlayerIds_Process(unsigned int a0, void* a1) const
    {
        NativeCall<void, unsigned int, void*>(this, "AShooterGameMode.LoadPlayerIds_Process(unsigned__int64,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadPlayersJoinNoCheckList()
    // endereco: casamento de bytes com a build de referencia
    void LoadPlayersJoinNoCheckList() const
    {
        NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadTribeData(int,FTribeData&,bool,bool,ETribeDataExclude)
    // endereco: casamento de bytes com a build de referencia
    bool LoadTribeData(int a0, void* a1, bool a2, bool a3, int a4) const
    {
        return NativeCall<bool, int, void*, bool, bool, int>(this, "AShooterGameMode.LoadTribeData(int,FTribeData&,bool,bool,ETribeDataExclude)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadTribeIds()
    // endereco: casamento de bytes com a build de referencia
    void LoadTribeIds() const
    {
        NativeCall<void>(this, "AShooterGameMode.LoadTribeIds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadTribeIds_Process(unsignedint)
    // endereco: casamento de bytes com a build de referencia
    void LoadTribeIds_Process(unsigned int a0) const
    {
        NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadTributePlayerDatas(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    void LoadTributePlayerDatas(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.LoadTributePlayerDatas(FUniqueNetId&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadWorld(bool)
    // endereco: casamento de bytes com a build de referencia
    bool LoadWorld(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterGameMode.LoadWorld(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadWorldFromFile(FString&)
    // endereco: casamento de bytes com a build de referencia
    bool LoadWorldFromFile(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.LoadWorldFromFile(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool LoadWorldFromFile(FString* a0) const
    { return LoadWorldFromFile(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadedWorld()
    // endereco: casamento de bytes com a build de referencia
    void LoadedWorld() const
    {
        NativeCall<void>(this, "AShooterGameMode.LoadedWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LoadedWorld_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void LoadedWorld_Implementation() const
    {
        NativeCall<void>(this, "AShooterGameMode.LoadedWorld_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.LogFailedWaterDinoSpawn(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void LogFailedWaterDinoSpawn(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.LogFailedWaterDinoSpawn(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.LogTrade(FString,FString,FString,FString,int,int,FString,int,FString)
    // endereco: casamento de bytes com a build de referencia
    void LogTrade(const FString& a0, const FString& a1, const FString& a2, const FString& a3, int a4, int a5, const FString& a6, int a7, const FString& a8) const
    {
        NativeCall<void, void*, void*, void*, void*, int, int, void*, int, void*>(this, "AShooterGameMode.LogTrade(FString,FString,FString,FString,int,int,FString,int,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4, a5, const_cast<FString*>(&a6), a7, const_cast<FString*>(&a8));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void LogTrade(FString* a0, FString* a1, FString* a2, FString* a3, int a4, int a5, FString* a6, int a7, FString* a8) const
    { LogTrade(*a0, *a1, *a2, *a3, a4, a5, *a6, a7, *a8); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.Logout(AController*)
    // endereco: casamento de bytes com a build de referencia
    void Logout(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.Logout(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.MaxTamedDinos_SoftTameLimit_MarkAllTamesForSoftTameLimit()
    // endereco: casamento de bytes com a build de referencia
    void MaxTamedDinos_SoftTameLimit_MarkAllTamesForSoftTameLimit() const
    {
        NativeCall<void>(this, "AShooterGameMode.MaxTamedDinos_SoftTameLimit_MarkAllTamesForSoftTameLimit()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.ModifyNPCSpawnLimits(FName,float)
    // endereco: cache_pdb_25090264
    BrzPonteiro ModifyNPCSpawnLimits(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "AShooterGameMode.ModifyNPCSpawnLimits(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRec
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRecieveUpdatedList() const
    {
        NativeCall<void>(this, "AShooterGameMode.MovePlayersAwaitingUpdatedCachedTeamTameListToArrayOfPlayersToGetNotifiedAndRecieveUpdatedList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.NotifyDamage(AActor*,float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyDamage(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, float, void*, void*, void*>(this, "AShooterGameMode.NotifyDamage(AActor*,float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: casamento de bytes com a build de referencia
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameMode.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists()
    // endereco: casamento de bytes com a build de referencia
    void OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists() const
    {
        NativeCall<void>(this, "AShooterGameMode.OnFinishedUpdatingCurrentBatchOfCachedTeamTameLists()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement*)
    // endereco: casamento de bytes com a build de referencia
    void OnHarvestingComponentHidden(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterGameMode.OnLogout(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnLogout(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.OnLogout(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.OnLogout_Implementation(AController*)
    // endereco: cache_pdb_25090264
    void OnLogout_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.OnLogout_Implementation(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.OutputThreadProc()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OutputThreadProc() const
    {
        NativeCall<void>(this, "AShooterGameMode.OutputThreadProc()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ParseServerToJson()
    // endereco: casamento de bytes com a build de referencia
    void ParseServerToJson() const
    {
        NativeCall<void>(this, "AShooterGameMode.ParseServerToJson()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.ParseServerToSQLite()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ParseServerToSQLite() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.ParseServerToSQLite()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PlayerCanRestart_Implementation(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool PlayerCanRestart_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameMode.PlayerCanRestart_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PostAdminTrackedCommands()
    // endereco: casamento de bytes com a build de referencia
    void PostAdminTrackedCommands() const
    {
        NativeCall<void>(this, "AShooterGameMode.PostAdminTrackedCommands()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PostAlarmNotification(FString,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void PostAlarmNotification(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterGameMode.PostAlarmNotification(FString,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PostAlarmNotification(FString* a0, FString* a1, FString* a2) const
    { PostAlarmNotification(*a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.PostAlarmNotificationPlayerID(int,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostAlarmNotificationPlayerID(int a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "AShooterGameMode.PostAlarmNotificationPlayerID(int,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro PostAlarmNotificationPlayerID(int a0, FString* a1, FString* a2) const
    { return PostAlarmNotificationPlayerID(a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PostAlarmNotificationTribe(int,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void PostAlarmNotificationTribe(int a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, int, void*, void*>(this, "AShooterGameMode.PostAlarmNotificationTribe(int,FString,FString)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PostAlarmNotificationTribe(int a0, FString* a1, FString* a2) const
    { PostAlarmNotificationTribe(a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PostLogin(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void PostLogin(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.PostLogin(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PostServerMetrics()
    // endereco: casamento de bytes com a build de referencia
    void PostServerMetrics() const
    {
        NativeCall<void>(this, "AShooterGameMode.PostServerMetrics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void PreLogin(const FString& a0, const FString& a1, void* a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterGameMode.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PreLogin(FString* a0, FString* a1, void* a2, FString* a3) const
    { PreLogin(*a0, *a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PrintHibernatingDino(FString)
    // endereco: casamento de bytes com a build de referencia
    void PrintHibernatingDino(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.PrintHibernatingDino(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PrintHibernatingDino(FString* a0) const
    { PrintHibernatingDino(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PrintToGameplayLog(FString&)
    // endereco: casamento de bytes com a build de referencia
    void PrintToGameplayLog(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.PrintToGameplayLog(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PrintToGameplayLog(FString* a0) const
    { PrintToGameplayLog(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.PrintToServerGameLog(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void PrintToServerGameLog(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterGameMode.PrintToServerGameLog(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PrintToServerGameLog(FString* a0, bool a1) const
    { PrintToServerGameLog(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.ProcessDinoStackingChecks()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1119+grafo=10/10]]
    BrzPonteiro ProcessDinoStackingChecks() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.ProcessDinoStackingChecks()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.QueueDinoForStackingCheck(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    BrzPonteiro QueueDinoForStackingCheck(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.QueueDinoForStackingCheck(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.QueueUpTeamForItsCachedTeamTameListToBeUpdated(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void QueueUpTeamForItsCachedTeamTameListToBeUpdated(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.QueueUpTeamForItsCachedTeamTameListToBeUpdated(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ReassertColorization()
    // endereco: casamento de bytes com a build de referencia
    void ReassertColorization() const
    {
        NativeCall<void>(this, "AShooterGameMode.ReassertColorization()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.RecordArkMetric(AShooterPlayerState*,FString&,TSharedPtr<FJsonObject,1>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RecordArkMetric(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterGameMode.RecordArkMetric(AShooterPlayerState*,FString&,TSharedPtr<FJsonObject,1>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RecordArkMetric(void* a0, FString* a1, void* a2) const
    { return RecordArkMetric(a0, *a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.RegisterBunkerForTribeLimit(APrimalStructure*,bool,int)
    // endereco: cache_pdb_25090264
    void RegisterBunkerForTribeLimit(void* a0, bool a1, int a2) const
    {
        NativeCall<void, void*, bool, int>(this, "AShooterGameMode.RegisterBunkerForTribeLimit(APrimalStructure*,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ReloadAdminIPs()
    // endereco: casamento de bytes com a build de referencia
    void ReloadAdminIPs() const
    {
        NativeCall<void>(this, "AShooterGameMode.ReloadAdminIPs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RemoveConnectedPlayer(TSharedPtr<FUniqueNetId,1>&)
    // endereco: casamento de bytes com a build de referencia
    void RemoveConnectedPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.RemoveConnectedPlayer(TSharedPtr<FUniqueNetId,1>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.RemoveFromHiddenHarvestingComponents(FAttachedInstancedHarvestingElement*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro RemoveFromHiddenHarvestingComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.RemoveFromHiddenHarvestingComponents(FAttachedInstancedHarvestingElement*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RemoveInactivePlayersAndTribes()
    // endereco: casamento de bytes com a build de referencia
    void RemoveInactivePlayersAndTribes() const
    {
        NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RemoveLoginLock(TSharedPtr<FUniqueNetId,1>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    void RemoveLoginLock(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.RemoveLoginLock(TSharedPtr<FUniqueNetId,1>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.RemoveMaxItemQuantityOverrides(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveMaxItemQuantityOverrides(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameMode.RemoveMaxItemQuantityOverrides(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.RemovePlayerData(AShooterPlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    void RemovePlayerData(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.RemovePlayerData(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RemovePlayerFromTribe(unsigned__int64,unsigned__int64,bool)
    // endereco: casamento de bytes com a build de referencia
    void RemovePlayerFromTribe(unsigned int a0, unsigned int a1, bool a2) const
    {
        NativeCall<void, unsigned int, unsigned int, bool>(this, "AShooterGameMode.RemovePlayerFromTribe(unsigned__int64,unsigned__int64,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RemoveTribe(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    void RemoveTribe(unsigned int a0) const
    {
        NativeCall<void, unsigned int>(this, "AShooterGameMode.RemoveTribe(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RequestBadWordList()
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=763+grafo=19/19]]
    void RequestBadWordList() const
    {
        NativeCall<void>(this, "AShooterGameMode.RequestBadWordList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RequestFinishAndExitToMainMenu()
    // endereco: cache_pdb_25090264
    void RequestFinishAndExitToMainMenu() const
    {
        NativeCall<void>(this, "AShooterGameMode.RequestFinishAndExitToMainMenu()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RequestPlayerRecieveKnownCachedTeamTameList(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void RequestPlayerRecieveKnownCachedTeamTameList(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.RequestPlayerRecieveKnownCachedTeamTameList(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RequestUpdateCachedTeamTameList(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void RequestUpdateCachedTeamTameList(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.RequestUpdateCachedTeamTameList(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.ResetDynamicColorSet()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void ResetDynamicColorSet() const
    {
        NativeCall<void>(this, "AShooterGameMode.ResetDynamicColorSet()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.RestartPlayer(AController*)
    // classe: a funcao mora em AGameModeBase, e AShooterGameMode herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=57]]
    void RestartPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.RestartPlayer(AController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.RestartServer()
    // endereco: casamento de bytes com a build de referencia
    void RestartServer() const
    {
        NativeCall<void>(this, "AShooterGameMode.RestartServer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.RestoreBackupForMap(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RestoreBackupForMap(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterGameMode.RestoreBackupForMap(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RestoreBackupForMap(FString* a0, FString* a1, FString* a2) const
    { return RestoreBackupForMap(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ResyncZoneVolumesWithHibernationManager(UWorld*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=337+grafo=5/5]]
    void ResyncZoneVolumesWithHibernationManager(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ResyncZoneVolumesWithHibernationManager(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval()
    // endereco: casamento de bytes com a build de referencia
    void ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval() const
    {
        NativeCall<void>(this, "AShooterGameMode.ReturnCachedTeamTameListsToAwaitingPlayers_OnInterval()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SaveBannedList()
    // endereco: casamento de bytes com a build de referencia
    void SaveBannedList() const
    {
        NativeCall<void>(this, "AShooterGameMode.SaveBannedList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SavePlayerData(UPrimalPlayerData*,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SavePlayerData(void* retorno, void* a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "AShooterGameMode.SavePlayerData(UPrimalPlayerData*,bool,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SavePlayersJoinNoCheckList()
    // endereco: casamento de bytes com a build de referencia
    void SavePlayersJoinNoCheckList() const
    {
        NativeCall<void>(this, "AShooterGameMode.SavePlayersJoinNoCheckList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SaveSimpleLogFileOfFormerTribeOwnerIDsAndTheirTimestamps(int,int)
    // endereco: casamento de bytes com a build de referencia
    bool SaveSimpleLogFileOfFormerTribeOwnerIDsAndTheirTimestamps(int a0, int a1) const
    {
        return NativeCall<bool, int, int>(this, "AShooterGameMode.SaveSimpleLogFileOfFormerTribeOwnerIDsAndTheirTimestamps(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SaveTribeData(FTribeData&,bool)
    // endereco: casamento de bytes com a build de referencia
    void SaveTribeData(void* retorno, void* a0, bool a1) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterGameMode.SaveTribeData(FTribeData&,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SaveTributePlayerDatas(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    void SaveTributePlayerDatas(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.SaveTributePlayerDatas(FUniqueNetId&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SaveWorld(bool,bool,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static void SaveWorld(bool a0, bool a1, bool a2)
    {
        NativeCall<void, bool, bool, bool>(nullptr, "AShooterGameMode.SaveWorld(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.SaveWorldToFile(FString&,FString&,FString&,TFunction<void__cdecl(bool),TArray<T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveWorldToFile(const FString& a0, const FString& a1, const FString& a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "AShooterGameMode.SaveWorldToFile(FString&,FString&,FString&,TFunction<void__cdecl(bool),TArray<TSubclassOf<AActor>,TSizedDefaultAllocator<32>>&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SaveWorldToFile(FString* a0, FString* a1, FString* a2, void* a3) const
    { return SaveWorldToFile(*a0, *a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SendAllCachedArkMetrics()
    // endereco: casamento de bytes com a build de referencia
    void SendAllCachedArkMetrics() const
    {
        NativeCall<void>(this, "AShooterGameMode.SendAllCachedArkMetrics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SendChatMessage(FPrimalChatMessage&)
    // endereco: casamento de bytes com a build de referencia
    void SendChatMessage(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.SendChatMessage(FPrimalChatMessage&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.SendChatMessageToPlayer(AShooterPlayerController*,FPrimalChatMessage&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SendChatMessageToPlayer(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameMode.SendChatMessageToPlayer(AShooterPlayerController*,FPrimalChatMessage&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.SendChatMessageToTeam(int,FPrimalChatMessage&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SendChatMessageToTeam(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterGameMode.SendChatMessageToTeam(int,FPrimalChatMessage&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SendServerChatMessage(FString&,FLinearColor,bool,int,int,FString)
    // endereco: casamento de bytes com a build de referencia
    void SendServerChatMessage(const FString& a0, void* a1, bool a2, int a3, int a4, const FString& a5) const
    {
        NativeCall<void, void*, void*, bool, int, int, void*>(this, "AShooterGameMode.SendServerChatMessage(FString&,FLinearColor,bool,int,int,FString)", const_cast<FString*>(&a0), a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SendServerChatMessage(FString* a0, void* a1, bool a2, int a3, int a4, FString* a5) const
    { SendServerChatMessage(*a0, a1, a2, a3, a4, *a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SendServerDirectMessage(FString&,FString&,FLinearColor,bool,int,int,FString&,FS
    // endereco: casamento de bytes com a build de referencia
    void SendServerDirectMessage(const FString& a0, const FString& a1, void* a2, bool a3, int a4, int a5, const FString& a6, const FString& a7) const
    {
        NativeCall<void, void*, void*, void*, bool, int, int, void*, void*>(this, "AShooterGameMode.SendServerDirectMessage(FString&,FString&,FLinearColor,bool,int,int,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4, a5, const_cast<FString*>(&a6), const_cast<FString*>(&a7));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SendServerDirectMessage(FString* a0, FString* a1, void* a2, bool a3, int a4, int a5, FString* a6, FString* a7) const
    { SendServerDirectMessage(*a0, *a1, a2, a3, a4, a5, *a6, *a7); }

    // jogo_confirmou_dump
    //   AShooterGameMode.SendServerNotification(FString&,FLinearColor,float,float,UTexture2D*,USoundBase
    // endereco: casamento de bytes com a build de referencia
    void SendServerNotification(const FString& a0, void* a1, float a2, float a3, void* a4, void* a5, int a6, int a7, bool a8, int a9) const
    {
        NativeCall<void, void*, void*, float, float, void*, void*, int, int, bool, int>(this, "AShooterGameMode.SendServerNotification(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int,int,bool,int)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SendServerNotification(FString* a0, void* a1, float a2, float a3, void* a4, void* a5, int a6, int a7, bool a8, int a9) const
    { SendServerNotification(*a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.SerializeArchiveVersion(FArchive&,int,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SerializeArchiveVersion(void* a0, int a1, int a2, int a3, int a4) const
    {
        return NativeCall<void*, void*, int, int, int, int>(this, "AShooterGameMode.SerializeArchiveVersion(FArchive&,int,int,int,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SerializeForSaveFile(int,FArchive&,bool)
    // endereco: casamento de bytes com a build de referencia
    void SerializeForSaveFile(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "AShooterGameMode.SerializeForSaveFile(int,FArchive&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced*)
    // endereco: casamento de bytes com a build de referencia
    void ServerConstructedFoliageHiddenAttachedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData()
    // endereco: casamento de bytes com a build de referencia
    void SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData() const
    {
        NativeCall<void>(this, "AShooterGameMode.SetCreatedCachedTeamTameListsOnTribeDataOrPlayerData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SetDamageEventLoggingEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetDamageEventLoggingEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterGameMode.SetDamageEventLoggingEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SetDayCycleSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    void SetDayCycleSpeed(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameMode.SetDayCycleSpeed(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.SetDisabledStatusState(TEnumAsByte<EPrimalCharacterStatusState::Type>,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetDisabledStatusState(unsigned char a0, bool a1) const
    {
        return NativeCall<void*, unsigned char, bool>(this, "AShooterGameMode.SetDisabledStatusState(TEnumAsByte<EPrimalCharacterStatusState::Type>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType>,double)
    // endereco: casamento de bytes com a build de referencia
    void SetLastMissionDeactivatedUtcTime(void* a0, double a1) const
    {
        NativeCall<void, void*, double>(this, "AShooterGameMode.SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType>,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SetMessageOfTheDay(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetMessageOfTheDay(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.SetMessageOfTheDay(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetMessageOfTheDay(FString* a0, FString* a1) const
    { SetMessageOfTheDay(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SetTimeOfDay(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetTimeOfDay(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.SetTimeOfDay(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetTimeOfDay(FString* a0) const
    { SetTimeOfDay(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.SetTransfers(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetTransfers(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterGameMode.SetTransfers(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=7]]
    void ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch() const
    {
        NativeCall<void>(this, "AShooterGameMode.ShiftAwaitingNEXTBatchOfTeamsToUpdateCachedTeamTameListsToCurrentBatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ShouldChatMessageBeBlocked(FPrimalChatMessage&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldChatMessageBeBlocked(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameMode.ShouldChatMessageBeBlocked(FPrimalChatMessage&,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ShowMessageOfTheDay()
    // endereco: casamento de bytes com a build de referencia
    void ShowMessageOfTheDay() const
    {
        NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SlowFrameDetected(float,float)
    // endereco: casamento de bytes com a build de referencia
    void SlowFrameDetected(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterGameMode.SlowFrameDetected(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch(
    // endereco: casamento de bytes com a build de referencia
    void SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch() const
    {
        NativeCall<void>(this, "AShooterGameMode.SortCurrentlyEvaluatedTameIntoAppropriateCachedTeamTameListForThisCurrentBatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SpawnDefaultPawnFor_Implementation(AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    APawn* SpawnDefaultPawnFor_Implementation(void* a0, void* a1) const
    {
        return NativeCall<APawn*, void*, void*>(this, "AShooterGameMode.SpawnDefaultPawnFor_Implementation(AController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.SpawnedPawnFor(AController*,APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SpawnedPawnFor(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.SpawnedPawnFor(AController*,APawn*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.StartIntervalUpdatingCachedTeamTameLists(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void StartIntervalUpdatingCachedTeamTameLists(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.StartIntervalUpdatingCachedTeamTameLists(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.StartNewPlayer(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void StartNewPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.StartNewPlayer(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.StartNewShooterPlayer(APlayerController*,bool,bool,FPrimalPlayerCharacterConfig
    // endereco: casamento de bytes com a build de referencia
    void StartNewShooterPlayer(void* a0, bool a1, bool a2, void* a3, void* a4, bool a5) const
    {
        NativeCall<void, void*, bool, bool, void*, void*, bool>(this, "AShooterGameMode.StartNewShooterPlayer(APlayerController*,bool,bool,FPrimalPlayerCharacterConfigStruct&,UPrimalPlayerData*,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.StaticRegisterNativesAShooterGameMode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAShooterGameMode()
    {
        NativeCall<void>(nullptr, "AShooterGameMode.StaticRegisterNativesAShooterGameMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.TempBlockCustomCosmetics()
    // endereco: casamento de bytes com a build de referencia
    void TempBlockCustomCosmetics() const
    {
        NativeCall<void>(this, "AShooterGameMode.TempBlockCustomCosmetics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameMode.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.TickLoginLocks()
    // endereco: casamento de bytes com a build de referencia
    void TickLoginLocks() const
    {
        NativeCall<void>(this, "AShooterGameMode.TickLoginLocks()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.TimeSinceMissionDeactivated(TSubclassOf<AMissionType>)
    // endereco: casamento de bytes com a build de referencia
    float TimeSinceMissionDeactivated(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterGameMode.TimeSinceMissionDeactivated(TSubclassOf<AMissionType>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.TogglePhysicsSimulationAllowed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void TogglePhysicsSimulationAllowed() const
    {
        NativeCall<void>(this, "AShooterGameMode.TogglePhysicsSimulationAllowed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.ToggleServerTickRateLogging()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ToggleServerTickRateLogging() const
    {
        NativeCall<void>(this, "AShooterGameMode.ToggleServerTickRateLogging()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.TriggerLevelCustomEvents(UWorld*,FString&,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=3/5]]
    BrzPonteiro TriggerLevelCustomEvents(void* a0, const FString& a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AShooterGameMode.TriggerLevelCustomEvents(UWorld*,FString&,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TriggerLevelCustomEvents(void* a0, FString* a1, int a2) const
    { return TriggerLevelCustomEvents(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.TryGetBoolOption(FString&,FString&,FString&,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool TryGetBoolOption(const FString& a0, const FString& a1, const FString& a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "AShooterGameMode.TryGetBoolOption(FString&,FString&,FString&,bool&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool TryGetBoolOption(FString* a0, FString* a1, FString* a2, void* a3) const
    { return TryGetBoolOption(*a0, *a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.TryGetIntOption(FString&,FString&,FString&,int&)
    // endereco: casamento de bytes com a build de referencia
    bool TryGetIntOption(const FString& a0, const FString& a1, const FString& a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "AShooterGameMode.TryGetIntOption(FString&,FString&,FString&,int&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool TryGetIntOption(FString* a0, FString* a1, FString* a2, void* a3) const
    { return TryGetIntOption(*a0, *a1, *a2, a3); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.UnRegisterBunkerForTribeLimit(APrimalStructure*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void UnRegisterBunkerForTribeLimit(void* a0, bool a1, int a2) const
    {
        NativeCall<void, void*, bool, int>(this, "AShooterGameMode.UnRegisterBunkerForTribeLimit(APrimalStructure*,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UnbanPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    static bool UnbanPlayer(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "AShooterGameMode.UnbanPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool UnbanPlayer(FString* a0)
    { return UnbanPlayer(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameMode.UnlockServerFPS()
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=102]]
    void UnlockServerFPS() const
    {
        NativeCall<void>(this, "AShooterGameMode.UnlockServerFPS()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpConvertPlayerDataToDataStore()
    // endereco: casamento de bytes com a build de referencia
    void UpConvertPlayerDataToDataStore() const
    {
        NativeCall<void>(this, "AShooterGameMode.UpConvertPlayerDataToDataStore()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpConvertTribeDataToDataStore()
    // endereco: casamento de bytes com a build de referencia
    void UpConvertTribeDataToDataStore() const
    {
        NativeCall<void>(this, "AShooterGameMode.UpConvertTribeDataToDataStore()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateBanCheaterList(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateBanCheaterList(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameMode.UpdateBanCheaterList(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateCachedTeamTameLists_OnInterval()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=470+grafo=10/10]]
    void UpdateCachedTeamTameLists_OnInterval() const
    {
        NativeCall<void>(this, "AShooterGameMode.UpdateCachedTeamTameLists_OnInterval()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateCosmeticWhitelist()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=730+grafo=19/19]]
    void UpdateCosmeticWhitelist() const
    {
        NativeCall<void>(this, "AShooterGameMode.UpdateCosmeticWhitelist()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.UpdateDynamicGameplayVolumes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateDynamicGameplayVolumes() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.UpdateDynamicGameplayVolumes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateMemoryState(FString,bool,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    void UpdateMemoryState(const FString& a0, bool a1, void* a2) const
    {
        NativeCall<void, void*, bool, void*>(this, "AShooterGameMode.UpdateMemoryState(FString,bool,ULevel*)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UpdateMemoryState(FString* a0, bool a1, void* a2) const
    { UpdateMemoryState(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameMode.UpdateNetModBanlist()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateNetModBanlist() const
    {
        return NativeCall<void*>(this, "AShooterGameMode.UpdateNetModBanlist()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateTribeAllianceData(FTribeAlliance*,TArray<unsignedint,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    void UpdateTribeAllianceData(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterGameMode.UpdateTribeAllianceData(FTribeAlliance*,TArray<unsignedint,TSizedDefaultAllocator<32>>*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateTribeData(FTribeData)
    // endereco: casamento de bytes com a build de referencia
    void UpdateTribeData(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameMode.UpdateTribeData(FTribeData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateTribeWars()
    // endereco: casamento de bytes com a build de referencia
    void UpdateTribeWars() const
    {
        NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.UpdateUnofficialBanCheaterList(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateUnofficialBanCheaterList(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameMode.UpdateUnofficialBanCheaterList(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct&)
    // endereco: casamento de bytes com a build de referencia
    void ValidateCharacterConfig(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameMode.ValidateTribeName(FString)
    // endereco: casamento de bytes com a build de referencia
    void ValidateTribeName(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameMode.ValidateTribeName(FString)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ValidateTribeName(void* retorno, FString* a0) const
    { ValidateTribeName(retorno, *a0); }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    AShooterGameMode.GetBoolOptionIni(wchar_t*,wchar_t*,bool)
    //      (colide com AShooterGameMode.GetBoolOptionIni(FString,FString,bool))
    //    AShooterGameMode.GetFloatOptionIni(wchar_t*,wchar_t*)
    //      (colide com AShooterGameMode.GetFloatOptionIni(FString,FString))
    //    AShooterGameMode.GetIntOptionIni(wchar_t*,wchar_t*)
    //      (colide com AShooterGameMode.GetIntOptionIni(FString,FString))
    //    AShooterGameMode.GetStringOption(wchar_t*,wchar_t*)
    //      (colide com AShooterGameMode.GetStringOption(FString,FString))
    //    AShooterGameMode.InitOptionBool(wchar_t*,wchar_t*,wchar_t*,bool)
    //      (colide com AShooterGameMode.InitOptionBool(FString,FString,FString,bool))
    //    AShooterGameMode.InitOptionFloat(wchar_t*,wchar_t*,wchar_t*,float)
    //      (colide com AShooterGameMode.InitOptionFloat(FString,FString,FString,float))
    //    AShooterGameMode.InitOptionInteger(wchar_t*,wchar_t*,wchar_t*,int)
    //      (colide com AShooterGameMode.InitOptionInteger(FString,FString,FString,int))
    //    AShooterGameMode.InitOptionString(wchar_t*,wchar_t*,wchar_t*)
    //      (colide com AShooterGameMode.InitOptionString(FString,FString,FString))
    //    AShooterGameMode.PostAlarmNotification(FUniqueNetId&,FString&,FString&)
    //      (colide com AShooterGameMode.PostAlarmNotification(FString,FString&,FString&))

    bool& AIForceOverlapCheckField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceOverlapCheck"); }
    bool& AIForceTargetPlayersField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceTargetPlayers"); }
    FName& ActiveEventField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGameMode.ActiveEvent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyServerId` +32, medido na build 25090264
    //  (offset absoluto medido: 0xB90; confianca alta)
    void*& ActiveProfilesSavingField() const
    { return BrzCampoAncorado<void*>(this, "MyServerId", 32); }
    TArray<APrimalDinoCharacter*>& ActivelyTamingDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "AShooterGameMode.ActivelyTamingDinos"); }
    TArray<void*>& AdditionalDefaultBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.AdditionalDefaultBuffs"); }
    float& AdjustableMutagenSpawnDelayMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.AdjustableMutagenSpawnDelayMultiplier"); }
    UAllClustersInventory*& AllClustersInventoryField() const
    { return *GetNativePointerField<UAllClustersInventory**>(this, "AShooterGameMode.AllClustersInventory"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +40, medido na build 25090264
    //  (offset absoluto medido: 0x4148; confianca media)
    TArray<void*>& AllPlayersAwaitingUpdatedCachedTeamTameListsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AntiDupeTransactionLog", 40); }
    float& AlphaKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.AlphaKillXPMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +62, medido na build 25090264
    //  (offset absoluto medido: 0xC84; confianca media)
    void*& AnchoredVesselCheckRadiusField() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 62); }
    UAntiDupeTransactionLog*& AntiDupeTransactionLogField() const
    { return *GetNativePointerField<UAntiDupeTransactionLog**>(this, "AShooterGameMode.AntiDupeTransactionLog"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +196, medido na build 25090264
    //  (offset absoluto medido: 0xE18; confianca baixa)
    TArray<void*>& ArkGameCodesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "ExplorerNoteXPMultiplier", 196); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LiveTuningFileName` +48, medido na build 25090264
    //  (offset absoluto medido: 0x3A60; confianca media)
    void*& ArkMetricsQueueField() const
    { return BrzCampoAncorado<void*>(this, "LiveTuningFileName", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LiveTuningFileName` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3A40; confianca alta)
    FString& ArkServerMetricsKeyField() const
    { return BrzCampoAncorado<FString>(this, "LiveTuningFileName", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LiveTuningFileName` +32, medido na build 25090264
    //  (offset absoluto medido: 0x3A50; confianca alta)
    FString& ArkServerMetricsURLField() const
    { return BrzCampoAncorado<FString>(this, "LiveTuningFileName", 32); }
    float& ArmadoggoDeathCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ArmadoggoDeathCooldown"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +44, medido na build 25090264
    //  (offset absoluto medido: 0xCC4; confianca media)
    float& AutoDestroyOldStructuresMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 44); }
    float& AutoPvEStartTimeSecondsField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStartTimeSeconds"); }
    float& AutoPvEStopTimeSecondsField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStopTimeSeconds"); }
    float& AutoSavePeriodMinutesField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoSavePeriodMinutes"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +144, medido na build 25090264
    //  (offset absoluto medido: 0x41B0; confianca baixa)
    void*& AutoWaterRefreshCropQueueField() const
    { return BrzCampoAncorado<void*>(this, "AntiDupeTransactionLog", 144); }
    float& BabyCuddleGracePeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleGracePeriodMultiplier"); }
    float& BabyCuddleIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleIntervalMultiplier"); }
    float& BabyCuddleLoseImprintQualitySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleLoseImprintQualitySpeedMultiplier"); }
    float& BabyFoodConsumptionSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyFoodConsumptionSpeedMultiplier"); }
    float& BabyImprintAmountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintAmountMultiplier"); }
    float& BabyImprintingStatScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintingStatScaleMultiplier"); }
    float& BabyMatureSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyMatureSpeedMultiplier"); }
    FString& BadWordListURLField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BadWordListURL"); }
    BrzCampoPonteiro BadWordMatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.BadWordMatcher")); }
    FString& BadWordWhiteListURLField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BadWordWhiteListURL"); }
    BrzCampoPonteiro BadWordWhitelistMatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.BadWordWhitelistMatcher")); }
    FString& BanFileNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BanFileName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +16, medido na build 25090264
    //  (offset absoluto medido: 0x730; confianca media)
    void*& BannedMapField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 16); }
    float& BaseHexagonRewardMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseHexagonRewardMultiplier"); }
    float& BaseTemperatureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseTemperatureMultiplier"); }
    float& BloodforgeReinforceExtraDurabilityField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BloodforgeReinforceExtraDurability"); }
    float& BloodforgeReinforceResourceCostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BloodforgeReinforceResourceCostMultiplier"); }
    float& BloodforgeReinforceSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BloodforgeReinforceSpeedMultiplier"); }
    BrzCampoPonteiro BonusSupplyCrateItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.BonusSupplyCrateItemClass")); }
    float& BonusSupplyCrateItemGiveIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval"); }
    FString& BonusSupplyCrateItemStringField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BonusSupplyCrateItemString"); }
    float& BossKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BossKillXPMultiplier"); }
    float& BunkerUnderHPThresholdDmgMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.BunkerUnderHPThresholdDmgMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTribeLogs` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2568; confianca alta)
    TArray<void*>& CachedGameLogField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MaxTribeLogs", 16); }
    float& CarnivoreNaturalTargetingRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivoreNaturalTargetingRangeMultiplier"); }
    float& CarnivorePlayerAggroMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivorePlayerAggroMultiplier"); }
    float& CaveKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CaveKillXPMultiplier"); }
    int& ChatLogFileSplitIntervalSecondsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFileSplitIntervalSeconds"); }
    int& ChatLogFlushIntervalSecondsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFlushIntervalSeconds"); }
    int& ChatLogMaxAgeInDaysField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogMaxAgeInDays"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +4, medido na build 25090264
    //  (offset absoluto medido: 0x3A80; confianca alta)
    TArray<void*>& ChatMessageBufferField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "ChatLogMaxAgeInDays", 4); }
    BrzCampoPonteiro CheatClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.CheatClass")); }
    BrzCampoPonteiro CheatTeleportLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.CheatTeleportLocations")); }
    FString& CheckGlobalEnablesURLField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CheckGlobalEnablesURL"); }
    int& CityOutpostAllowMaxStructuresNearbyField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.CityOutpostAllowMaxStructuresNearby"); }
    BrzCampoPonteiro ClubArkTributeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.ClubArkTributeInventory")); }
    TArray<void*>& CollectiveNPCReplacementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.CollectiveNPCReplacements"); }
    float& CompanionsDeathCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CompanionsDeathCooldown"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OutpostSigilRewardMultiplier` +92, medido na build 25090264
    //  (offset absoluto medido: 0x40C0; confianca media)
    TArray<void*>& CompressTasksField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "OutpostSigilRewardMultiplier", 92); }
    TArray<void*>& ConfigAddNPCSpawnEntriesContainerField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ConfigAddNPCSpawnEntriesContainer"); }
    TArray<void*>& ConfigOverrideItemCraftingCostsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ConfigOverrideItemCraftingCosts"); }
    TArray<void*>& ConfigOverrideItemMaxQuantityField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ConfigOverrideItemMaxQuantity"); }
    TArray<void*>& ConfigOverrideNPCSpawnEntriesContainerField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ConfigOverrideNPCSpawnEntriesContainer"); }
    TArray<void*>& ConfigOverrideSupplyCrateItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ConfigOverrideSupplyCrateItems"); }
    BrzCampoPonteiro ConfigSettingsModifiedTraitEffectivenessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.ConfigSettingsModifiedTraitEffectiveness")); }
    TArray<void*>& ConfigSubtractNPCSpawnEntriesContainerField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ConfigSubtractNPCSpawnEntriesContainer"); }
    int& CosmoWeaponAmmoReloadAmountField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.CosmoWeaponAmmoReloadAmount"); }
    float& CraftXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftXPMultiplier"); }
    float& CraftingSkillBonusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftingSkillBonusMultiplier"); }
    float& CropDecaySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropDecaySpeedMultiplier"); }
    float& CropGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropGrowthSpeedMultiplier"); }
    int& CropPlotStackLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.CropPlotStackLimit"); }
    float& CryoHospitalHoursToDrainTorporField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalHoursToDrainTorpor"); }
    float& CryoHospitalHoursToRegenFoodField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalHoursToRegenFood"); }
    float& CryoHospitalHoursToRegenHPField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalHoursToRegenHP"); }
    float& CryoHospitalMatingCooldownReductionField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryoHospitalMatingCooldownReduction"); }
    float& CryopodFridgeCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodFridgeCooldownTime"); }
    float& CryopodNerfDamageMultField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDamageMult"); }
    float& CryopodNerfDurationField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDuration"); }
    float& CryopodNerfIncomingDamageMultPercentField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfIncomingDamageMultPercent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAllowTekSuitPowersInGenesis` +36, medido na build 25090264
    //  (offset absoluto medido: 0x25E8; confianca media)
    FString& CurrentAdminCommandTrackingAPIKeyField() const
    { return BrzCampoAncorado<FString>(this, "bAllowTekSuitPowersInGenesis", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAllowTekSuitPowersInGenesis` +52, medido na build 25090264
    //  (offset absoluto medido: 0x25F8; confianca media)
    FString& CurrentAdminCommandTrackingURLField() const
    { return BrzCampoAncorado<FString>(this, "bAllowTekSuitPowersInGenesis", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +88, medido na build 25090264
    //  (offset absoluto medido: 0x4178; confianca media)
    TArray<AActor*>& CurrentBatchCachedTeamTameListsField() const
    { return BrzCampoAncorado<TArray<AActor*>>(this, "AntiDupeTransactionLog", 88); }
    int& CurrentChatFilterVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentChatFilterVersion"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +20, medido na build 25090264
    //  (offset absoluto medido: 0x3A90; confianca alta)
    FString& CurrentChatLogFilenameField() const
    { return BrzCampoAncorado<FString>(this, "ChatLogMaxAgeInDays", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +76, medido na build 25090264
    //  (offset absoluto medido: 0x3AC8; confianca media)
    FString& CurrentDamageEventLogFilenameField() const
    { return BrzCampoAncorado<FString>(this, "ChatLogMaxAgeInDays", 76); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedGameModeVersion` +4, medido na build 25090264
    //  (offset absoluto medido: 0x25C0; confianca alta)
    int& CurrentGameModeVersionField() const
    { return BrzCampoAncorado<int>(this, "SavedGameModeVersion", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +104, medido na build 25090264
    //  (offset absoluto medido: 0x4188; confianca media)
    int& CurrentIndexOfTameToBeAddedToCachedTeamTameListsField() const
    { return BrzCampoAncorado<int>(this, "AntiDupeTransactionLog", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAllowTekSuitPowersInGenesis` +4, medido na build 25090264
    //  (offset absoluto medido: 0x25C8; confianca alta)
    FString& CurrentMerticsURLField() const
    { return BrzCampoAncorado<FString>(this, "bAllowTekSuitPowersInGenesis", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAllowTekSuitPowersInGenesis` +20, medido na build 25090264
    //  (offset absoluto medido: 0x25D8; confianca alta)
    FString& CurrentNotificationURLField() const
    { return BrzCampoAncorado<FString>(this, "bAllowTekSuitPowersInGenesis", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyFoodConsumptionSpeedMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1190; confianca alta)
    int& CurrentPlatformSaddleStructuresField() const
    { return BrzCampoAncorado<int>(this, "BabyFoodConsumptionSpeedMultiplier", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4128; confianca media)
    TArray<void*>& CurrentTeamBatchThatAreUpdatingTheirCachedTeamTameListsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AntiDupeTransactionLog", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OutpostSigilRewardMultiplier` +12, medido na build 25090264
    //  (offset absoluto medido: 0x4070; confianca media)
    void*& CustomLevelEventsSingletonIDsField() const
    { return BrzCampoAncorado<void*>(this, "OutpostSigilRewardMultiplier", 12); }
    float& CustomRecipeEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier"); }
    float& CustomRecipeSkillMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeSkillMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +60, medido na build 25090264
    //  (offset absoluto medido: 0x3AB8; confianca media)
    TArray<void*>& DamageEventBufferField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "ChatLogMaxAgeInDays", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +92, medido na build 25090264
    //  (offset absoluto medido: 0x3AD8; confianca media)
    void*& DamageEventLogFlushHandleField() const
    { return BrzCampoAncorado<void*>(this, "ChatLogMaxAgeInDays", 92); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +8, medido na build 25090264
    //  (offset absoluto medido: 0xCA0; confianca alta)
    float& DayCycleSpeedScaleField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +16, medido na build 25090264
    //  (offset absoluto medido: 0xCA8; confianca alta)
    float& DayTimeSpeedScaleField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +26, medido na build 25090264
    //  (offset absoluto medido: 0xE68; confianca alta)
    TArray<void*>& DeferredTribeSavesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bForceRespawnDinos", 26); }
    int& DestroyTamesOverLevelClampField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.DestroyTamesOverLevelClamp"); }
    float& DifficultyValueField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValue"); }
    float& DifficultyValueMaxField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMax"); }
    float& DifficultyValueMinField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMin"); }
    float& DinoArmorDurabilityScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoArmorDurabilityScale"); }
    float& DinoCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterFoodDrainMultiplier"); }
    float& DinoCharacterHealthRecoveryMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterHealthRecoveryMultiplier"); }
    float& DinoCharacterStaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterStaminaDrainMultiplier"); }
    TArray<void*>& DinoClassDamageMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DinoClassDamageMultipliers"); }
    TArray<void*>& DinoClassResistanceMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DinoClassResistanceMultipliers"); }
    TArray<void*>& DinoClassSpeedMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DinoClassSpeedMultipliers"); }
    TArray<void*>& DinoClassStaminaMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DinoClassStaminaMultipliers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AIForceOverlapCheck` +3, medido na build 25090264
    //  (offset absoluto medido: 0xF7C; confianca alta)
    float& DinoCountMultiplierField() const
    { return BrzCampoAncorado<float>(this, "AIForceOverlapCheck", 3); }
    float& DinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoDamageMultiplier"); }
    float& DinoHairGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHairGrowthSpeedMultiplier"); }
    float& DinoHarvestingDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHarvestingDamageMultiplier"); }
    float& DinoResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoResistanceMultiplier"); }
    TArray<void*>& DinoSpawnWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DinoSpawnWeightMultipliers"); }
    float& DinoTurretDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoTurretDamageMultiplier"); }
    bool& DisableRailgunPVPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.DisableRailgunPVP"); }
    BrzCampoPonteiro DisabledStatusStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.DisabledStatusStates")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerDatas` +16, medido na build 25090264
    //  (offset absoluto medido: 0xE40; confianca alta)
    void*& DoNPCZoneManagerLandscapeChangeFixupsHandleField() const
    { return BrzCampoAncorado<void*>(this, "PlayerDatas", 16); }
    BrzCampoPonteiro DynamicColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.DynamicColorSet")); }
    float& DynamicColorSetChanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.DynamicColorSetChance"); }
    BrzCampoPonteiro DynamicColorSetInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.DynamicColorSetInstance")); }
    TArray<void*>& DynamicDisabledWorldBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DynamicDisabledWorldBuffs"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicDisabledWorldBuffs` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3FB0; confianca alta)
    void*& DynamicGameplayVolumesRawField() const
    { return BrzCampoAncorado<void*>(this, "DynamicDisabledWorldBuffs", 16); }
    TArray<void*>& DynamicNPCReplacementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.DynamicNPCReplacements"); }
    float& EggHatchSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.EggHatchSpeedMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableRailgunPVP` +3, medido na build 25090264
    //  (offset absoluto medido: 0x3F98; confianca alta)
    int& EggsHatchedThisFrameField() const
    { return BrzCampoAncorado<int>(this, "DisableRailgunPVP", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +64, medido na build 25090264
    //  (offset absoluto medido: 0xCD8; confianca media)
    float& EnableAFKKickPlayerCountPercentField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 64); }
    float& EnemyAccessBunkerHPThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.EnemyAccessBunkerHPThreshold"); }
    TArray<void*>& EngramEntryAutoUnlocksField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.EngramEntryAutoUnlocks"); }
    TArray<void*>& ExcludeItemIndicesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.ExcludeItemIndices"); }
    float& ExplorerNoteXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExplorerNoteXPMultiplier"); }
    float& ExtinctionEventTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExtinctionEventTimeInterval"); }
    float& FastDecayIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.FastDecayInterval"); }
    float& FishingLootQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.FishingLootQualityMultiplier"); }
    float& ForceLoadWorldSecondsField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ForceLoadWorldSeconds"); }
    float& FuelConsumptionIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.FuelConsumptionIntervalMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +88, medido na build 25090264
    //  (offset absoluto medido: 0x9C8; confianca media)
    void*& GameBackupPipeReadField() const
    { return BrzCampoAncorado<void*>(this, "CheckGlobalEnablesURL", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +96, medido na build 25090264
    //  (offset absoluto medido: 0x9D0; confianca media)
    void*& GameBackupPipeWriteField() const
    { return BrzCampoAncorado<void*>(this, "CheckGlobalEnablesURL", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +248, medido na build 25090264
    //  (offset absoluto medido: 0x818; confianca baixa)
    void*& GameBackupProcHandleField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 248); }
    float& GenericXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.GenericXPMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +96, medido na build 25090264
    //  (offset absoluto medido: 0x780; confianca media)
    void*& GlobalBannedMapField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 96); }
    UShooterCheatManager*& GlobalCommandsCheatManagerField() const
    { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.GlobalCommandsCheatManager"); }
    float& GlobalCorpseDecompositionTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier"); }
    float& GlobalItemDecompositionTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier"); }
    float& GlobalPoweredBatteryDurabilityDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond"); }
    float& GlobalSpoilingTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalSpoilingTimeMultiplier"); }
    float& HairGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HairGrowthSpeedMultiplier"); }
    float& HarvestAmountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestAmountMultiplier"); }
    float& HarvestHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestHealthMultiplier"); }
    TArray<void*>& HarvestResourceItemAmountClassMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.HarvestResourceItemAmountClassMultipliers"); }
    float& HarvestXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestXPMultiplier"); }
    float& HerbivoreNaturalTargetingRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivoreNaturalTargetingRangeMultiplier"); }
    float& HerbivorePlayerAggroMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivorePlayerAggroMultiplier"); }
    float& HexagonCostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HexagonCostMultiplier"); }
    float& HexagonRewardMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.HexagonRewardMultiplier"); }
    AHibernationManager*& HibernationManagerField() const
    { return *GetNativePointerField<AHibernationManager**>(this, "AShooterGameMode.HibernationManager"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeStoreCharacterConfiguration` +167, medido na build 25090264
    //  (offset absoluto medido: 0x2508; confianca baixa)
    void*& IDtoPlayerDatasField() const
    { return BrzCampoAncorado<void*>(this, "bTribeStoreCharacterConfiguration", 167); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +28, medido na build 25090264
    //  (offset absoluto medido: 0x25B4; confianca alta)
    float& ImplantSuicideCDField() const
    { return BrzCampoAncorado<float>(this, "NextExtinctionEventUTC", 28); }
    float& ImprintLimitField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ImprintLimit"); }
    float& IncreasePvPRespawnIntervalBaseAmountField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount"); }
    float& IncreasePvPRespawnIntervalCheckPeriodField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod"); }
    float& IncreasePvPRespawnIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForceLoadWorldSeconds` +16, medido na build 25090264
    //  (offset absoluto medido: 0x928; confianca alta)
    bool& InitiatedArkTributeAvailabilityCheckField() const
    { return BrzCampoAncorado<bool>(this, "ForceLoadWorldSeconds", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +226, medido na build 25090264
    //  (offset absoluto medido: 0x802; confianca baixa)
    bool& IsSavingOverlayOpenedField() const
    { return BrzCampoAncorado<bool>(this, "BanFileName", 226); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +224, medido na build 25090264
    //  (offset absoluto medido: 0x800; confianca baixa)
    bool& IsSavingPlayerDataField() const
    { return BrzCampoAncorado<bool>(this, "BanFileName", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +225, medido na build 25090264
    //  (offset absoluto medido: 0x801; confianca baixa)
    bool& IsSavingWorldDataField() const
    { return BrzCampoAncorado<bool>(this, "BanFileName", 225); }
    float& ItemStackSizeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ItemStackSizeMultiplier"); }
    BrzCampoPonteiro ItemStatClampsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.ItemStatClamps")); }
    float& KickIdlePlayersPeriodField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.KickIdlePlayersPeriod"); }
    float& KillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.KillXPMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +10, medido na build 25090264
    //  (offset absoluto medido: 0xE58; confianca alta)
    void*& LastBackupTimeField() const
    { return BrzCampoAncorado<void*>(this, "bForceRespawnDinos", 10); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPassiveDefensesDamageRiderlessDinos` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2458; confianca alta)
    double& LastBonusSupplyCrateItemGiveTimeField() const
    { return BrzCampoAncorado<double>(this, "bPassiveDefensesDamageRiderlessDinos", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +44, medido na build 25090264
    //  (offset absoluto medido: 0x3AA8; confianca media)
    void*& LastChatLogFileCreateTimeField() const
    { return BrzCampoAncorado<void*>(this, "ChatLogMaxAgeInDays", 44); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +36, medido na build 25090264
    //  (offset absoluto medido: 0x3AA0; confianca media)
    void*& LastChatLogFlushTimeField() const
    { return BrzCampoAncorado<void*>(this, "ChatLogMaxAgeInDays", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +180, medido na build 25090264
    //  (offset absoluto medido: 0xE08; confianca baixa)
    FString& LastClaimedGameCodeField() const
    { return BrzCampoAncorado<FString>(this, "ExplorerNoteXPMultiplier", 180); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +240, medido na build 25090264
    //  (offset absoluto medido: 0x810; confianca baixa)
    int& LastDayOfYearBackedUpField() const
    { return BrzCampoAncorado<int>(this, "BanFileName", 240); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +164, medido na build 25090264
    //  (offset absoluto medido: 0xDF8; confianca baixa)
    double& LastExecSaveTimeField() const
    { return BrzCampoAncorado<double>(this, "ExplorerNoteXPMultiplier", 164); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GlobalCommandsCheatManager` +16, medido na build 25090264
    //  (offset absoluto medido: 0x968; confianca alta)
    double& LastLoginLocksConnectedTimeField() const
    { return BrzCampoAncorado<double>(this, "GlobalCommandsCheatManager", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +18, medido na build 25090264
    //  (offset absoluto medido: 0xE60; confianca alta)
    void*& LastSaveWorldTimeField() const
    { return BrzCampoAncorado<void*>(this, "bForceRespawnDinos", 18); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +140, medido na build 25090264
    //  (offset absoluto medido: 0xDE0; confianca baixa)
    FString& LastServerNotificationMessageField() const
    { return BrzCampoAncorado<FString>(this, "ExplorerNoteXPMultiplier", 140); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +156, medido na build 25090264
    //  (offset absoluto medido: 0xDF0; confianca baixa)
    double& LastServerNotificationRecievedAtField() const
    { return BrzCampoAncorado<double>(this, "ExplorerNoteXPMultiplier", 156); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +232, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca baixa)
    double& LastTimeCheckedForSaveBackupField() const
    { return BrzCampoAncorado<double>(this, "BanFileName", 232); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +172, medido na build 25090264
    //  (offset absoluto medido: 0xE00; confianca baixa)
    double& LastTimeSavedWorldField() const
    { return BrzCampoAncorado<double>(this, "ExplorerNoteXPMultiplier", 172); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GlobalCommandsCheatManager` +8, medido na build 25090264
    //  (offset absoluto medido: 0x960; confianca alta)
    double& LastUpdatedLoginLocksTimeField() const
    { return BrzCampoAncorado<double>(this, "GlobalCommandsCheatManager", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyServerId` +112, medido na build 25090264
    //  (offset absoluto medido: 0xBE0; confianca media)
    FString& LaunchOptionsField() const
    { return BrzCampoAncorado<FString>(this, "MyServerId", 112); }
    float& LayEggIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.LayEggIntervalMultiplier"); }
    BrzCampoPonteiro LeaderboardContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.LeaderboardContainer")); }
    TArray<void*>& LevelExperienceRampOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.LevelExperienceRampOverrides"); }
    int& LimitBunkersPerTribeNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitBunkersPerTribeNum"); }
    int& LimitGeneratorsNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitGeneratorsNum"); }
    float& LimitGeneratorsRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitGeneratorsRange"); }
    int& LimitLinkedStoragesNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitLinkedStoragesNum"); }
    int& LimitNonPlayerDroppedItemsCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsCount"); }
    float& LimitNonPlayerDroppedItemsRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsRange"); }
    int& LimitTurretsNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitTurretsNum"); }
    float& LimitTurretsRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitTurretsRange"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +36, medido na build 25090264
    //  (offset absoluto medido: 0xCBC; confianca media)
    float& ListenServerTetherDistanceMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 36); }
    FString& LiveTuningFileNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LiveTuningFileName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerID` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2700; confianca alta)
    int& LoadForceRespawnDinosVersionField() const
    { return BrzCampoAncorado<int>(this, "ServerID", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForceLoadWorldSeconds` +8, medido na build 25090264
    //  (offset absoluto medido: 0x920; confianca alta)
    double& LoadedAtPersistentTimeField() const
    { return BrzCampoAncorado<double>(this, "ForceLoadWorldSeconds", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForceLoadWorldSeconds` +4, medido na build 25090264
    //  (offset absoluto medido: 0x91C; confianca alta)
    float& LoadedAtTimeSecondsField() const
    { return BrzCampoAncorado<float>(this, "ForceLoadWorldSeconds", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OutpostSigilRewardMultiplier` +108, medido na build 25090264
    //  (offset absoluto medido: 0x40D0; confianca media)
    void*& LocalInstancedStaticMeshComponentInstancesVisibilityStateField() const
    { return BrzCampoAncorado<void*>(this, "OutpostSigilRewardMultiplier", 108); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +20, medido na build 25090264
    //  (offset absoluto medido: 0xD68; confianca media)
    void*& LoggingForPlayerIdsField() const
    { return BrzCampoAncorado<void*>(this, "ExplorerNoteXPMultiplier", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +16, medido na build 25090264
    //  (offset absoluto medido: 0x980; confianca media)
    void*& LoginDatabasePtrField() const
    { return BrzCampoAncorado<void*>(this, "CheckGlobalEnablesURL", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0xD58; confianca media)
    void*& MaintenanceRestartHandleField() const
    { return BrzCampoAncorado<void*>(this, "ExplorerNoteXPMultiplier", 4); }
    float& MateBoostEffectMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MateBoostEffectMultiplier"); }
    float& MatingIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingIntervalMultiplier"); }
    float& MatingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingSpeedMultiplier"); }
    int& MaxActiveCityOutpostsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveCityOutposts"); }
    int& MaxActiveCityOutpostsSPField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveCityOutpostsSP"); }
    int& MaxActiveOutpostsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveOutposts"); }
    int& MaxActiveOutpostsSPField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveOutpostsSP"); }
    int& MaxActiveResourceCachesField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveResourceCaches"); }
    int& MaxActiveResourceCachesSPField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxActiveResourceCachesSP"); }
    int& MaxAlliancesPerTribeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAlliancesPerTribe"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +112, medido na build 25090264
    //  (offset absoluto medido: 0x4190; confianca media)
    int& MaxAllowedPlayersRecieveCachedTeamTameListPerTickField() const
    { return BrzCampoAncorado<int>(this, "AntiDupeTransactionLog", 112); }
    float& MaxAllowedRespawnIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxAllowedRespawnInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +108, medido na build 25090264
    //  (offset absoluto medido: 0x418C; confianca media)
    int& MaxAllowedUpdatedCachedTeamTamesPerTickField() const
    { return BrzCampoAncorado<int>(this, "AntiDupeTransactionLog", 108); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +58, medido na build 25090264
    //  (offset absoluto medido: 0xC80; confianca media)
    void*& MaxAnchoredVesselsInRangeField() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 58); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1164; confianca alta)
    void*& MaxBlueprintDinoLevelField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1168; confianca alta)
    void*& MaxBlueprintDinoQualityField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +12, medido na build 25090264
    //  (offset absoluto medido: 0x116C; confianca alta)
    void*& MaxBlueprintItemQualityField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1170; confianca alta)
    void*& MaxBlueprintScoutQualityField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 16); }
    int& MaxCosmoWeaponAmmoField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxCosmoWeaponAmmo"); }
    bool& MaxDifficultyField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.MaxDifficulty"); }
    int& MaxDinoBaseLevelField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxDinoBaseLevel"); }
    float& MaxFallSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxFallSpeedMultiplier"); }
    int& MaxGateFrameOnSaddlesField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxGateFrameOnSaddles"); }
    int& MaxHexagonsPerCharacterField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxHexagonsPerCharacter"); }
    int& MaxHexagonsToAwardField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxHexagonsToAward"); }
    int& MaxNumberOfPlayersInTribeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxNumberOfPlayersInTribe"); }
    int& MaxPerTribePlatformSaddleStructureLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPerTribePlatformSaddleStructureLimit"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTribeLogs` +4, medido na build 25090264
    //  (offset absoluto medido: 0x255C; confianca alta)
    int& MaxPersonalTamedDinosField() const
    { return BrzCampoAncorado<int>(this, "MaxTribeLogs", 4); }
    int& MaxPlatformSaddleStructureLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlatformSaddleStructureLimit"); }
    int& MaxPlayersOverrideField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlayersOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +54, medido na build 25090264
    //  (offset absoluto medido: 0xC7C; confianca media)
    int& MaxStructuresInSmallRadiusField() const
    { return BrzCampoAncorado<int>(this, "bServerHardcore", 54); }
    int& MaxStructuresToAllowForPickupOverrideField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresToAllowForPickupOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +32, medido na build 25090264
    //  (offset absoluto medido: 0xCB8; confianca alta)
    float& MaxTamedDinosField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 32); }
    int& MaxTamedDinos_SoftTameLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTamedDinos_SoftTameLimit"); }
    int& MaxTamedDinos_SoftTameLimit_CountdownForDeletionDurationField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTamedDinos_SoftTameLimit_CountdownForDeletionDuration"); }
    int& MaxTribeLogsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribeLogs"); }
    int& MaxTribesPerAllianceField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribesPerAlliance"); }
    int& MaxTributeCharactersField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeCharacters"); }
    int& MaxTributeDinosField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeDinos"); }
    int& MaxTributeItemsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeItems"); }
    float& MeshCheckingPercentageToFailField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingPercentageToFail"); }
    float& MeshCheckingRayDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingRayDistance"); }
    float& MeshCheckingSubdivisonsField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingSubdivisons"); }
    float& MinDistanceBetweenBunkersField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinDistanceBetweenBunkers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableDinoRiding` +1, medido na build 25090264
    //  (offset absoluto medido: 0x2774; confianca alta)
    float& MinimumDinoReuploadIntervalField() const
    { return BrzCampoAncorado<float>(this, "bDisableDinoRiding", 1); }
    float& MinimumTimebetweeninventoryRetrievalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumTimebetweeninventoryRetrieval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerAllowArkDownload` +4, medido na build 25090264
    //  (offset absoluto medido: 0xC40; confianca alta)
    void*& MinutesPlayedRequirementField() const
    { return BrzCampoAncorado<void*>(this, "bServerAllowArkDownload", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +416, medido na build 25090264
    //  (offset absoluto medido: 0x8C0; confianca baixa)
    void*& MissionGlobalDataField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 416); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LeaderboardContainer` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3AF0; confianca alta)
    void*& MissionTagToLeaderboardEntryField() const
    { return BrzCampoAncorado<void*>(this, "LeaderboardContainer", 16); }
    int& ModValidationFailureWarningsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.ModValidationFailureWarnings"); }
    BrzCampoPonteiro MutagenLevelBoostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.MutagenLevelBoost")); }
    BrzCampoPonteiro MutagenLevelBoost_BredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.MutagenLevelBoost_Bred")); }
    FString& MyServerIdField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.MyServerId"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bParseServerToJson` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3CE0; confianca alta)
    void*& MyStasisGridField() const
    { return BrzCampoAncorado<void*>(this, "bParseServerToJson", 8); }
    int& NPCActiveCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCount"); }
    int& NPCActiveCountTamedField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCountTamed"); }
    int& NPCCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCCount"); }
    TArray<void*>& NPCReplacementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.NPCReplacements"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerDatas` +24, medido na build 25090264
    //  (offset absoluto medido: 0xE48; confianca alta)
    int& NPCZoneManagerModField() const
    { return BrzCampoAncorado<int>(this, "PlayerDatas", 24); }
    unsigned int& NextExtinctionEventUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.NextExtinctionEventUTC"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +72, medido na build 25090264
    //  (offset absoluto medido: 0x4168; confianca media)
    TArray<AShooterPlayerController*>& NextTeamBatchPlayersAwaitingUpdatedCachedTeamTameListField() const
    { return BrzCampoAncorado<TArray<AShooterPlayerController*>>(this, "AntiDupeTransactionLog", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +24, medido na build 25090264
    //  (offset absoluto medido: 0x4138; confianca media)
    TArray<void*>& NextTeamBatchtoUpdateCachedTeamTameListsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AntiDupeTransactionLog", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +12, medido na build 25090264
    //  (offset absoluto medido: 0xCA4; confianca alta)
    float& NightTimeSpeedScaleField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +392, medido na build 25090264
    //  (offset absoluto medido: 0x8A8; confianca baixa)
    void*& OfficialAdminListFileNameOverrideField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 392); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +376, medido na build 25090264
    //  (offset absoluto medido: 0x898; confianca baixa)
    void*& OfficialBanListFileNameOverrideField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 376); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +360, medido na build 25090264
    //  (offset absoluto medido: 0x888; confianca baixa)
    void*& OfficialBanListURLOverrideField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 360); }
    BrzCampoPonteiro OnAddNewTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnAddNewTribe")); }
    BrzCampoPonteiro OnCharacterPossessedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnCharacterPossessedByPlayer")); }
    BrzCampoPonteiro OnCharacterUnpossessedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnCharacterUnpossessedByPlayer")); }
    BrzCampoPonteiro OnExplorerNoteUnlockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnExplorerNoteUnlocked")); }
    BrzCampoPonteiro OnKilledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnKilled")); }
    float& OnLoadItemQualityRatingClampField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.OnLoadItemQualityRatingClamp"); }
    BrzCampoPonteiro OnMissionTriggerBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnMissionTriggerBeginOverlap")); }
    BrzCampoPonteiro OnMissionTriggerEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnMissionTriggerEndOverlap")); }
    BrzCampoPonteiro OnNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnNotifyDamage")); }
    BrzCampoPonteiro OnPostCryoDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnPostCryoDino")); }
    BrzCampoPonteiro OnPostLoginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnPostLogin")); }
    BrzCampoPonteiro OnPostUnCryoDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnPostUnCryoDino")); }
    BrzCampoPonteiro OnPreSpawnedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnPreSpawnedDino")); }
    BrzCampoPonteiro OnRemovePlayerFromTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnRemovePlayerFromTribe")); }
    BrzCampoPonteiro OnRemoveTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnRemoveTribe")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +176, medido na build 25090264
    //  (offset absoluto medido: 0x7D0; confianca baixa)
    void*& OnSavingWorldFinishedDelegateField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +208, medido na build 25090264
    //  (offset absoluto medido: 0x7F0; confianca baixa)
    void*& OnSavingWorldStartedDelegateField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 208); }
    BrzCampoPonteiro OnSerializeForSaveFileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnSerializeForSaveFile")); }
    BrzCampoPonteiro OnServerChatMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnServerChatMessage")); }
    BrzCampoPonteiro OnServerDirectMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnServerDirectMessage")); }
    BrzCampoPonteiro OnServerNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnServerNotification")); }
    BrzCampoPonteiro OnShooterCharacterDiedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnShooterCharacterDied")); }
    BrzCampoPonteiro OnShooterCharacterSpawnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnShooterCharacterSpawned")); }
    BrzCampoPonteiro OnStartNewPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnStartNewPlayer")); }
    BrzCampoPonteiro OnTryCryoDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnTryCryoDino")); }
    BrzCampoPonteiro OnTryUnCryoDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OnTryUnCryoDino")); }
    int& OutpostAllowMaxStructuresNearbyField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.OutpostAllowMaxStructuresNearby"); }
    float& OutpostSigilRewardMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.OutpostSigilRewardMultiplier"); }
    BrzCampoPonteiro OverrideDinoTimeToRecoverAfterDecreaseStatusValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OverrideDinoTimeToRecoverAfterDecreaseStatusValue")); }
    BrzCampoPonteiro OverrideDinoTimeToRecoverAfterDepletionStatusValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OverrideDinoTimeToRecoverAfterDepletionStatusValue")); }
    TArray<void*>& OverrideEngramEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.OverrideEngramEntries"); }
    TArray<void*>& OverrideItemCraftingCostsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.OverrideItemCraftingCosts"); }
    int& OverrideMaxExperiencePointsDinoField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsDino"); }
    int& OverrideMaxExperiencePointsPlayerField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ConfigOverrideItemMaxQuantity` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2638; confianca alta)
    void*& OverrideMaxItemQuantityMapField() const
    { return BrzCampoAncorado<void*>(this, "ConfigOverrideItemMaxQuantity", 16); }
    TArray<void*>& OverrideNamedEngramEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.OverrideNamedEngramEntries"); }
    TArray<void*>& OverridePlayerLevelEngramPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.OverridePlayerLevelEngramPoints"); }
    int& OverrideSecondsUntilBuriedTreasureAutoRevealsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideSecondsUntilBuriedTreasureAutoReveals"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +68, medido na build 25090264
    //  (offset absoluto medido: 0xCDC; confianca media)
    bool& OverrideStartTimeField() const
    { return BrzCampoAncorado<bool>(this, "CryopodNerfIncomingDamageMultPercent", 68); }
    BrzCampoPonteiro OverrideTimeToRecoverAfterDecreaseStatusValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OverrideTimeToRecoverAfterDecreaseStatusValue")); }
    BrzCampoPonteiro OverrideTimeToRecoverAfterDepletionStatusValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.OverrideTimeToRecoverAfterDepletionStatusValue")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +52, medido na build 25090264
    //  (offset absoluto medido: 0xCCC; confianca media)
    float& OxygenSwimSpeedStatMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 52); }
    float& PassiveTameIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PassiveTameIntervalMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyServerId` +16, medido na build 25090264
    //  (offset absoluto medido: 0xB80; confianca alta)
    TArray<void*>& PendingLoginLockReleasesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MyServerId", 16); }
    BrzCampoPonteiro PendingMarketPaymentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PendingMarketPayments")); }
    BrzCampoPonteiro PerLevelStatsMultiplier_DinoTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed")); }
    BrzCampoPonteiro PerLevelStatsMultiplier_DinoTamed_AddField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add")); }
    BrzCampoPonteiro PerLevelStatsMultiplier_DinoTamed_AffinityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity")); }
    BrzCampoPonteiro PerLevelStatsMultiplier_DinoWildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild")); }
    BrzCampoPonteiro PerLevelStatsMultiplier_PlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PerLevelStatsMultiplier_Player")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +40, medido na build 25090264
    //  (offset absoluto medido: 0xCC0; confianca media)
    float& PerPlatformMaxStructuresMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTribeLogs` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2560; confianca alta)
    int& PersonalTamedDinosSaddleStructureCostField() const
    { return BrzCampoAncorado<int>(this, "MaxTribeLogs", 8); }
    float& PhotoModeRangeLimitField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PhotoModeRangeLimit"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +192, medido na build 25090264
    //  (offset absoluto medido: 0x7E0; confianca baixa)
    void*& Placeholder1Field() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +46, medido na build 25090264
    //  (offset absoluto medido: 0xC74; confianca media)
    void*& PlaceholderFloat1Field() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 46); }
    float& PlatformSaddleBuildAreaBoundsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlatformSaddleBuildAreaBoundsMultiplier"); }
    BrzCampoPonteiro PlayerBaseStatMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PlayerBaseStatMultipliers")); }
    float& PlayerCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterFoodDrainMultiplier"); }
    float& PlayerCharacterHealthRecoveryMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterHealthRecoveryMultiplier"); }
    float& PlayerCharacterStaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterStaminaDrainMultiplier"); }
    float& PlayerCharacterWaterDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterWaterDrainMultiplier"); }
    float& PlayerDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerDamageMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +141, medido na build 25090264
    //  (offset absoluto medido: 0x3BD8; confianca baixa)
    void*& PlayerDataStoreField() const
    { return BrzCampoAncorado<void*>(this, "bDisableListenServerTethering", 141); }
    TArray<UPrimalPlayerData*>& PlayerDatasField() const
    { return *GetNativePointerField<TArray<UPrimalPlayerData*>*>(this, "AShooterGameMode.PlayerDatas"); }
    float& PlayerHarvestingDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerHarvestingDamageMultiplier"); }
    float& PlayerResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerResistanceMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamIds` +80, medido na build 25090264
    //  (offset absoluto medido: 0xAC8; confianca media)
    void*& PlayerStringIdsField() const
    { return BrzCampoAncorado<void*>(this, "SteamIds", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +56, medido na build 25090264
    //  (offset absoluto medido: 0x4158; confianca media)
    TArray<AShooterPlayerController*>& PlayersAwaitingUpdatedCachedTeamTameListWhosTeamsAreInCurrentEvaluatedBatchField() const
    { return BrzCampoAncorado<TArray<AShooterPlayerController*>>(this, "AntiDupeTransactionLog", 56); }
    FString& PlayersExclusiveCheckFilenameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersExclusiveCheckFilename"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +72, medido na build 25090264
    //  (offset absoluto medido: 0x9B8; confianca media)
    TArray<void*>& PlayersExclusiveListField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "CheckGlobalEnablesURL", 72); }
    BrzCampoPonteiro PlayersIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PlayersIds")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +56, medido na build 25090264
    //  (offset absoluto medido: 0x9A8; confianca media)
    TArray<void*>& PlayersJoinNoCheckField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "CheckGlobalEnablesURL", 56); }
    FString& PlayersJoinNoCheckFilenameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersJoinNoCheckFilename"); }
    float& PoopIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PoopIntervalMultiplier"); }
    TArray<void*>& PreventDinoTameClassNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.PreventDinoTameClassNames"); }
    BrzCampoPonteiro PreventDisableDefaultDinoTameClassNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.PreventDisableDefaultDinoTameClassNames")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +6, medido na build 25090264
    //  (offset absoluto medido: 0x1116; confianca alta)
    bool& PreventDownloadDinosField() const
    { return BrzCampoAncorado<bool>(this, "TributeCharacterExpirationSeconds", 6); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +5, medido na build 25090264
    //  (offset absoluto medido: 0x1115; confianca alta)
    bool& PreventDownloadItemsField() const
    { return BrzCampoAncorado<bool>(this, "TributeCharacterExpirationSeconds", 5); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1114; confianca alta)
    bool& PreventDownloadSurvivorsField() const
    { return BrzCampoAncorado<bool>(this, "TributeCharacterExpirationSeconds", 4); }
    float& PreventOfflinePvPConnectionInvincibleIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPConnectionInvincibleInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +24, medido na build 25090264
    //  (offset absoluto medido: 0x25B0; confianca alta)
    float& PreventOfflinePvPIntervalField() const
    { return BrzCampoAncorado<float>(this, "NextExtinctionEventUTC", 24); }
    TArray<void*>& PreventTransferForClassNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.PreventTransferForClassNames"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +136, medido na build 25090264
    //  (offset absoluto medido: 0x41A8; confianca baixa)
    int& PreviousFrameTimeField() const
    { return BrzCampoAncorado<int>(this, "AntiDupeTransactionLog", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +285, medido na build 25090264
    //  (offset absoluto medido: 0x3C68; confianca baixa)
    void*& PrioritizedObjectMapField() const
    { return BrzCampoAncorado<void*>(this, "bDisableListenServerTethering", 285); }
    float& ProximityChatInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityChatInnerRadius"); }
    float& ProximityChatOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityChatOuterRadius"); }
    float& ProximityRadiusUnconsiousScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadiusUnconsiousScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +32, medido na build 25090264
    //  (offset absoluto medido: 0x990; confianca media)
    void*& PubSubGeneralNotificationsPtrField() const
    { return BrzCampoAncorado<void*>(this, "CheckGlobalEnablesURL", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeStoreCharacterConfiguration` +7, medido na build 25090264
    //  (offset absoluto medido: 0x2468; confianca media)
    void*& PvEActiveTribeWarsField() const
    { return BrzCampoAncorado<void*>(this, "bTribeStoreCharacterConfiguration", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +28, medido na build 25090264
    //  (offset absoluto medido: 0xCB4; confianca alta)
    float& PvEDinoDecayPeriodMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +20, medido na build 25090264
    //  (offset absoluto medido: 0xCAC; confianca alta)
    float& PvEStructureDecayPeriodMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 20); }
    float& PvPZoneStructureDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvPZoneStructureDamageMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +4, medido na build 25090264
    //  (offset absoluto medido: 0xC9C; confianca alta)
    int& RCONPortField() const
    { return BrzCampoAncorado<int>(this, "CryopodNerfIncomingDamageMultPercent", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +48, medido na build 25090264
    //  (offset absoluto medido: 0xCC8; confianca media)
    float& RCONServerGameLogBufferField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 48); }
    URCONServer*& RCONSocketField() const
    { return *GetNativePointerField<URCONServer**>(this, "AShooterGameMode.RCONSocket"); }
    float& RTSMaxRangeFromPlayerCharacterScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSMaxRangeFromPlayerCharacterScale"); }
    float& RTSModeNumSelectableDinosScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSModeNumSelectableDinosScale"); }
    float& RTSProximityToEnemyStructureScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSProximityToEnemyStructureScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +60, medido na build 25090264
    //  (offset absoluto medido: 0xCD4; confianca media)
    float& RadiusStructuresInSmallRadiusField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 60); }
    float& RaidDinoCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.RaidDinoCharacterFoodDrainMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +100, medido na build 25090264
    //  (offset absoluto medido: 0xDB8; confianca media)
    float& RandomAutoSaveSpreadField() const
    { return BrzCampoAncorado<float>(this, "ExplorerNoteXPMultiplier", 100); }
    float& RedisTimeoutInMinutesField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.RedisTimeoutInMinutes"); }
    int& RequestedChatFilterVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.RequestedChatFilterVersion"); }
    float& ResourceNoReplenishRadiusPlayersField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers"); }
    float& ResourceNoReplenishRadiusStructuresField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusStructures"); }
    float& ResourcesRespawnPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier"); }
    bool& RestartedDueToRedisTimeoutField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.RestartedDueToRedisTimeout"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +128, medido na build 25090264
    //  (offset absoluto medido: 0x41A0; confianca media)
    void*& ReturnCachedTeamTameListsToAwaitingPlayers_OnIntervalHandleField() const
    { return BrzCampoAncorado<void*>(this, "AntiDupeTransactionLog", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +296, medido na build 25090264
    //  (offset absoluto medido: 0x848; confianca baixa)
    void*& S3BanDownloaderPtrField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 296); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +264, medido na build 25090264
    //  (offset absoluto medido: 0x828; confianca baixa)
    void*& S3CheatDownloaderPtrField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 264); }
    int& SaveForceRespawnDinosVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveForceRespawnDinosVersion"); }
    int& SaveGameCustomVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveGameCustomVersion"); }
    int& SavedGameModeVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.SavedGameModeVersion"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +56, medido na build 25090264
    //  (offset absoluto medido: 0xCD0; confianca media)
    float& ServerAutoForceRespawnWildDinosIntervalField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 56); }
    UShooterCheatManager*& ServerCheatManagerField() const
    { return *GetNativePointerField<UShooterCheatManager**>(this, "AShooterGameMode.ServerCheatManager"); }
    float& ServerGeneTraitSpawnRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.ServerGeneTraitSpawnRateMultiplier"); }
    unsigned long long& ServerIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "AShooterGameMode.ServerID"); }
    double& ServerLastForceRespawnWildDinosTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +124, medido na build 25090264
    //  (offset absoluto medido: 0xDD0; confianca media)
    void*& ServerRegionField() const
    { return BrzCampoAncorado<void*>(this, "ExplorerNoteXPMultiplier", 124); }
    float& SingleplayerSettingsCorpseLifespanMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier"); }
    float& SpecialXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.SpecialXPMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +72, medido na build 25090264
    //  (offset absoluto medido: 0xCE0; confianca media)
    int& StartTimeHourField() const
    { return BrzCampoAncorado<int>(this, "CryopodNerfIncomingDamageMultPercent", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +108, medido na build 25090264
    //  (offset absoluto medido: 0xDC0; confianca media)
    FString& SteamAPIKeyField() const
    { return BrzCampoAncorado<FString>(this, "ExplorerNoteXPMultiplier", 108); }
    BrzCampoPonteiro SteamIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameMode.SteamIds")); }
    float& StructureDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageMultiplier"); }
    float& StructureDamageRepairCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageRepairCooldown"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoPvEUseSystemTime` +3, medido na build 25090264
    //  (offset absoluto medido: 0x10DC; confianca alta)
    FName& StructureDestructionTagField() const
    { return BrzCampoAncorado<FName>(this, "bAutoPvEUseSystemTime", 3); }
    float& StructurePickupHoldDurationField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupHoldDuration"); }
    float& StructurePickupTimeAfterPlacementField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupTimeAfterPlacement"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CryopodNerfIncomingDamageMultPercent` +24, medido na build 25090264
    //  (offset absoluto medido: 0xCB0; confianca alta)
    float& StructurePreventResourceRadiusMultiplierField() const
    { return BrzCampoAncorado<float>(this, "CryopodNerfIncomingDamageMultPercent", 24); }
    float& StructureResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureResistanceMultiplier"); }
    float& SupplyCrateLootQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.SupplyCrateLootQualityMultiplier"); }
    TArray<void*>& SupportedSpawnRegionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.SupportedSpawnRegions"); }
    float& TamedDinoCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoCharacterFoodDrainMultiplier"); }
    TArray<void*>& TamedDinoClassDamageMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TamedDinoClassDamageMultipliers"); }
    TArray<void*>& TamedDinoClassResistanceMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TamedDinoClassResistanceMultipliers"); }
    TArray<void*>& TamedDinoClassSpeedMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TamedDinoClassSpeedMultipliers"); }
    TArray<void*>& TamedDinoClassStaminaMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TamedDinoClassStaminaMultipliers"); }
    float& TamedDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoDamageMultiplier"); }
    float& TamedDinoResistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoResistanceMultiplier"); }
    float& TamedDinoTorporDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoTorporDrainMultiplier"); }
    float& TamedKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedKillXPMultiplier"); }
    float& TamingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamingSpeedMultiplier"); }
    TArray<void*>& TemporaryCrateModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TemporaryCrateModifiers"); }
    TArray<void*>& TemporaryResourceModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TemporaryResourceModifiers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +48, medido na build 25090264
    //  (offset absoluto medido: 0x9A0; confianca media)
    int& TerrainGeneratorVersionField() const
    { return BrzCampoAncorado<int>(this, "CheckGlobalEnablesURL", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +50, medido na build 25090264
    //  (offset absoluto medido: 0xC78; confianca media)
    int& TheMaxStructuresInRangeField() const
    { return BrzCampoAncorado<int>(this, "bServerHardcore", 50); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +365, medido na build 25090264
    //  (offset absoluto medido: 0x3CB8; confianca baixa)
    AOceanDinoManager*& TheOceanDinoManagerField() const
    { return BrzCampoAncorado<AOceanDinoManager*>(this, "bDisableListenServerTethering", 365); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +160, medido na build 25090264
    //  (offset absoluto medido: 0x41C0; confianca baixa)
    int& TicksUntilRegisterField() const
    { return BrzCampoAncorado<int>(this, "AntiDupeTransactionLog", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +256, medido na build 25090264
    //  (offset absoluto medido: 0x820; confianca baixa)
    double& TimeLastStartedDoingRemoteBackupField() const
    { return BrzCampoAncorado<double>(this, "BanFileName", 256); }
    float& TimePeriodToHideDisconnectedPlayersField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TimePeriodToHideDisconnectedPlayers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +312, medido na build 25090264
    //  (offset absoluto medido: 0x858; confianca baixa)
    double& TimeTillNextBanUpdateField() const
    { return BrzCampoAncorado<double>(this, "BanFileName", 312); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +280, medido na build 25090264
    //  (offset absoluto medido: 0x838; confianca baixa)
    double& TimeTillNextCheaterUpdateField() const
    { return BrzCampoAncorado<double>(this, "BanFileName", 280); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeStoreCharacterConfiguration` +87, medido na build 25090264
    //  (offset absoluto medido: 0x24B8; confianca media)
    void*& TribeAlliesField() const
    { return BrzCampoAncorado<void*>(this, "bTribeStoreCharacterConfiguration", 87); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +5, medido na build 25090264
    //  (offset absoluto medido: 0x3B50; confianca media)
    void*& TribeDataStoreField() const
    { return BrzCampoAncorado<void*>(this, "bDisableListenServerTethering", 5); }
    float& TribeNameChangeCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeNameChangeCooldown"); }
    float& TribeSlotReuseCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeSlotReuseCooldown"); }
    float& TribeTowerBonusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeTowerBonusMultiplier"); }
    TArray<void*>& TribesDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameMode.TribesData"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheckGlobalEnablesURL` +104, medido na build 25090264
    //  (offset absoluto medido: 0x9D8; confianca media)
    void*& TribesIdsField() const
    { return BrzCampoAncorado<void*>(this, "CheckGlobalEnablesURL", 104); }
    int& TributeCharacterExpirationSecondsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeCharacterExpirationSeconds"); }
    int& TributeDinoExpirationSecondsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeDinoExpirationSeconds"); }
    int& TributeItemExpirationSecondsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeItemExpirationSeconds"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerID` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2708; confianca alta)
    void*& TributePlayerTribeInfosField() const
    { return BrzCampoAncorado<void*>(this, "ServerID", 16); }
    float& UnclaimedKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.UnclaimedKillXPMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +344, medido na build 25090264
    //  (offset absoluto medido: 0x878; confianca baixa)
    FString& UnofficalAdminListURLField() const
    { return BrzCampoAncorado<FString>(this, "BanFileName", 344); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +328, medido na build 25090264
    //  (offset absoluto medido: 0x868; confianca baixa)
    FString& UnofficalBanListURLField() const
    { return BrzCampoAncorado<FString>(this, "BanFileName", 328); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +288, medido na build 25090264
    //  (offset absoluto medido: 0x840; confianca baixa)
    float& UpdateAllowedCheatersIntervalField() const
    { return BrzCampoAncorado<float>(this, "BanFileName", 288); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +320, medido na build 25090264
    //  (offset absoluto medido: 0x860; confianca baixa)
    float& UpdateBanIntervalField() const
    { return BrzCampoAncorado<float>(this, "BanFileName", 320); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AntiDupeTransactionLog` +120, medido na build 25090264
    //  (offset absoluto medido: 0x4198; confianca media)
    void*& UpdateCachedTeamTameLists_OnIntervalHandleField() const
    { return BrzCampoAncorado<void*>(this, "AntiDupeTransactionLog", 120); }
    float& UseCorpseLifeSpanMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.UseCorpseLifeSpanMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LeaderboardContainer` +96, medido na build 25090264
    //  (offset absoluto medido: 0x3B40; confianca media)
    FName& UseStructurePreventionVolumeTagField() const
    { return BrzCampoAncorado<FName>(this, "LeaderboardContainer", 96); }
    FString& UseStructurePreventionVolumeTagStringField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UseStructurePreventionVolumeTagString"); }
    FString& ValgueroMemorialEntriesField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ValgueroMemorialEntries"); }
    float& WildDinoCharacterFoodDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoCharacterFoodDrainMultiplier"); }
    float& WildDinoTorporDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoTorporDrainMultiplier"); }
    float& WildFollowerSpawnChanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildFollowerSpawnChanceMultiplier"); }
    float& WildFollowerSpawnCountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildFollowerSpawnCountMultiplier"); }
    float& WildKillXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildKillXPMultiplier"); }
    float& WirelessCraftingRangeOverrideField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WirelessCraftingRangeOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnSerializeForSaveFile` +32, medido na build 25090264
    //  (offset absoluto medido: 0x3E28; confianca alta)
    TArray<void*>& WorldBuffPropertyModificationsTrackersField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "OnSerializeForSaveFile", 32); }
    float& WorldBuffScalingEfficacyField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.WorldBuffScalingEfficacy"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnSerializeForSaveFile` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3E18; confianca alta)
    TArray<void*>& WorldBuffsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "OnSerializeForSaveFile", 16); }
    float& XPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.XPMultiplier"); }
    float& YoungIceFoxDeathCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameMode.YoungIceFoxDeathCooldown"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +14, medido na build 25090264
    //  (offset absoluto medido: 0xC54; confianca alta)
    bool& bAdminLoggingField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 14); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +9, medido na build 25090264
    //  (offset absoluto medido: 0x25A1; confianca alta)
    bool& bAllowAnyoneBabyImprintCuddleField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +12, medido na build 25090264
    //  (offset absoluto medido: 0xC52; confianca alta)
    bool& bAllowCaveBuildingPvEField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +13, medido na build 25090264
    //  (offset absoluto medido: 0xC53; confianca alta)
    bool& bAllowCaveBuildingPvPField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 13); }
    bool& bAllowChatFromDeadNonAdminsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowChatFromDeadNonAdmins"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +14, medido na build 25090264
    //  (offset absoluto medido: 0x25A6; confianca alta)
    bool& bAllowCrateSpawnsOnTopOfStructuresField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 14); }
    bool& bAllowCryoFridgeOnSaddleField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCryoFridgeOnSaddle"); }
    bool& bAllowCustomRecipesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCustomRecipes"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +18, medido na build 25090264
    //  (offset absoluto medido: 0xC58; confianca alta)
    bool& bAllowDeprecatedStructuresField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 18); }
    bool& bAllowDisablingSpectatorField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDisablingSpectator"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +5, medido na build 25090264
    //  (offset absoluto medido: 0xC4B; confianca alta)
    bool& bAllowFlyerCarryPvEField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 5); }
    bool& bAllowFlyerSpeedLevelingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerSpeedLeveling"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +32, medido na build 25090264
    //  (offset absoluto medido: 0xC66; confianca alta)
    bool& bAllowFlyingStaminaRecoveryField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +4, medido na build 25090264
    //  (offset absoluto medido: 0xE52; confianca alta)
    void*& bAllowGCMOnOfficialField() const
    { return BrzCampoAncorado<void*>(this, "bForceRespawnDinos", 4); }
    bool& bAllowHideDamageSourceFromLogsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHideDamageSourceFromLogs"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +20, medido na build 25090264
    //  (offset absoluto medido: 0xC5A; confianca alta)
    bool& bAllowHitMarkersField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 20); }
    bool& bAllowInactiveTribesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowInactiveTribes"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +31, medido na build 25090264
    //  (offset absoluto medido: 0xC65; confianca alta)
    bool& bAllowMultipleAttachedC4Field() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 31); }
    bool& bAllowPlatformSaddleMultiFloorsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowPlatformSaddleMultiFloors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +3, medido na build 25090264
    //  (offset absoluto medido: 0xE51; confianca alta)
    bool& bAllowRaidDinoFeedingField() const
    { return BrzCampoAncorado<bool>(this, "bForceRespawnDinos", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +18, medido na build 25090264
    //  (offset absoluto medido: 0x25AA; confianca alta)
    bool& bAllowSharedConnectionsField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 18); }
    bool& bAllowSpeedLevelingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowSpeedLeveling"); }
    bool& bAllowStoredDatasField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStoredDatas"); }
    bool& bAllowTekSuitPowersInGenesisField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowTekSuitPowersInGenesis"); }
    bool& bAllowUnclaimDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnclaimDinos"); }
    bool& bAllowUnlimitedRespecsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnlimitedRespecs"); }
    bool& bAlwaysAllowStructurePickupField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysAllowStructurePickup"); }
    bool& bAlwaysNotifyPlayerJoinedField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerJoined"); }
    bool& bAlwaysNotifyPlayerLeftField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerLeft"); }
    bool& bAutoCreateNewPlayerDataField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateNewPlayerData"); }
    bool& bAutoCreateTribesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateTribes"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +30, medido na build 25090264
    //  (offset absoluto medido: 0xC64; confianca alta)
    bool& bAutoDestroyDecayedDinosField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 30); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +16, medido na build 25090264
    //  (offset absoluto medido: 0xC56; confianca alta)
    bool& bAutoDestroyStructuresField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 16); }
    bool& bAutoPvETimerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvETimer"); }
    bool& bAutoPvEUseSystemTimeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvEUseSystemTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoCreateNewPlayerData` +4, medido na build 25090264
    //  (offset absoluto medido: 0xC14; confianca alta)
    bool& bAutoRestoreBackupsField() const
    { return BrzCampoAncorado<bool>(this, "bAutoCreateNewPlayerData", 4); }
    bool& bAutoUnlockAllEngramsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoUnlockAllEngrams"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAllowStoredDatas` +1, medido na build 25090264
    //  (offset absoluto medido: 0x3B4A; confianca alta)
    bool& bBackupTransferProfilesField() const
    { return BrzCampoAncorado<bool>(this, "bAllowStoredDatas", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsCurrentlySavingWorld` +1, medido na build 25090264
    //  (offset absoluto medido: 0xC3A; confianca alta)
    void*& bBusySavingWorldField() const
    { return BrzCampoAncorado<void*>(this, "bIsCurrentlySavingWorld", 1); }
    bool& bCheckSoftTameLimitOnTickField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckSoftTameLimitOnTick"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +373, medido na build 25090264
    //  (offset absoluto medido: 0x3CC0; confianca baixa)
    bool& bCheckedForOceanDinoManagerField() const
    { return BrzCampoAncorado<bool>(this, "bDisableListenServerTethering", 373); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +28, medido na build 25090264
    //  (offset absoluto medido: 0xC62; confianca alta)
    bool& bClampItemSpoilingTimesField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +29, medido na build 25090264
    //  (offset absoluto medido: 0xC63; confianca alta)
    bool& bClampItemStatsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 29); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +10, medido na build 25090264
    //  (offset absoluto medido: 0xC50; confianca alta)
    bool& bClampResourceHarvestDamageField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 10); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LiveTuningFileName` +64, medido na build 25090264
    //  (offset absoluto medido: 0x3A70; confianca media)
    bool& bCollectArkMetricsField() const
    { return BrzCampoAncorado<bool>(this, "LiveTuningFileName", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +33, medido na build 25090264
    //  (offset absoluto medido: 0xC67; confianca media)
    bool& bCrossARKAllowForeignDinoDownloadsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 33); }
    bool& bCustomGameModeAllowSpectatorJoinAfterMatchStartField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCustomGameModeAllowSpectatorJoinAfterMatchStart"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +52, medido na build 25090264
    //  (offset absoluto medido: 0x3AB0; confianca media)
    bool& bDamageEventLoggingEnabledField() const
    { return BrzCampoAncorado<bool>(this, "ChatLogMaxAgeInDays", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +13, medido na build 25090264
    //  (offset absoluto medido: 0x25A5; confianca alta)
    bool& bDestroyUnconnectedWaterPipesField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 13); }
    bool& bDisableCryopodEnemyCheckField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCryopodEnemyCheck"); }
    bool& bDisableCryopodFridgeRequirementField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCryopodFridgeRequirement"); }
    bool& bDisableCustomFoldersInTributeInventoriesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCustomFoldersInTributeInventories"); }
    bool& bDisableDefaultMapItemSetsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDefaultMapItemSets"); }
    bool& bDisableDinoDecayClaimingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayClaiming"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +7, medido na build 25090264
    //  (offset absoluto medido: 0xC4D; confianca alta)
    bool& bDisableDinoDecayPvEField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 7); }
    bool& bDisableDinoItemBlacklistField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoItemBlacklist"); }
    bool& bDisableDinoRidingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoRiding"); }
    bool& bDisableDinoTamingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoTaming"); }
    bool& bDisableDynamicMusicField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDynamicMusic"); }
    bool& bDisableFriendlyFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableFriendlyFire"); }
    bool& bDisableGeneTraitsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGeneTraits"); }
    bool& bDisableGenesisMissionsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGenesisMissions"); }
    bool& bDisableHexagonStoreField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableHexagonStore"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +10, medido na build 25090264
    //  (offset absoluto medido: 0x25A2; confianca alta)
    bool& bDisableImprintDinoBuffField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 10); }
    bool& bDisableListenServerTetheringField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableListenServerTethering"); }
    bool& bDisableLootCratesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableLootCrates"); }
    bool& bDisableNonTribePinAccessField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableNonTribePinAccess"); }
    bool& bDisablePhotoModeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePhotoMode"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +9, medido na build 25090264
    //  (offset absoluto medido: 0xC4F; confianca alta)
    bool& bDisablePvEGammaField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 9); }
    bool& bDisableRailgunPVPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableRailgunPVP"); }
    bool& bDisableSaveLoadField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableSaveLoad"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +6, medido na build 25090264
    //  (offset absoluto medido: 0xC4C; confianca alta)
    bool& bDisableStructureDecayPvEField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 6); }
    bool& bDisableStructurePlacementCollisionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructurePlacementCollision"); }
    bool& bDisableTekLegsBoostField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableTekLegsBoost"); }
    bool& bDisableWeatherFogField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWeatherFog"); }
    bool& bDisableWirelessCraftingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCrafting"); }
    bool& bDisableWirelessCraftingForDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForDinos"); }
    bool& bDisableWirelessCraftingForPlayersField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForPlayers"); }
    bool& bDisableWirelessCraftingForStructuresField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWirelessCraftingForStructures"); }
    bool& bDisableWorldBuffsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWorldBuffs"); }
    bool& bDisableXPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableXP"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +20, medido na build 25090264
    //  (offset absoluto medido: 0x25AC; confianca alta)
    bool& bDisabledTranfersDueToRedisConnectionLostField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +5, medido na build 25090264
    //  (offset absoluto medido: 0x259D; confianca alta)
    bool& bDoExtinctionEventField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 5); }
    //  no cache antigo este campo se chamava bDoNotStarveDinos.
    //  nesta build ele e' `MaxActiveGenesisLandOutposts` — resolve por NOME.
    bool& bEnableCryoSicknessPVEField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryoSicknessPVE"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +40, medido na build 25090264
    //  (offset absoluto medido: 0xC6E; confianca media)
    bool& bEnableCryopodNerfField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 40); }
    bool& bEnableDeathTeamSpectatorField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableDeathTeamSpectator"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtinctionEventTimeInterval` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2594; confianca alta)
    bool& bEnableExtraStructurePreventionVolumesField() const
    { return BrzCampoAncorado<bool>(this, "ExtinctionEventTimeInterval", 4); }
    bool& bEnableMeshBitingProtectionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableMeshBitingProtection"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +39, medido na build 25090264
    //  (offset absoluto medido: 0xC6D; confianca media)
    bool& bEnableOfficialOnlyVersioningCodeField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 39); }
    bool& bEnablePlayerMoveThroughAllyField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePlayerMoveThroughAlly"); }
    bool& bEnablePlayerMoveThroughSleepingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePlayerMoveThroughSleeping"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +8, medido na build 25090264
    //  (offset absoluto medido: 0xC4E; confianca alta)
    bool& bEnablePvPGammaField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 8); }
    bool& bEnableServerDestroyTamesAboveSoftTameLimitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableServerDestroyTamesAboveSoftTameLimit"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +278, medido na build 25090264
    //  (offset absoluto medido: 0x3C61; confianca baixa)
    bool& bEnableStasisGridField() const
    { return BrzCampoAncorado<bool>(this, "bDisableListenServerTethering", 278); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BanFileName` +408, medido na build 25090264
    //  (offset absoluto medido: 0x8B8; confianca baixa)
    void*& bEnableSteamValidationField() const
    { return BrzCampoAncorado<void*>(this, "BanFileName", 408); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +44, medido na build 25090264
    //  (offset absoluto medido: 0xC72; confianca media)
    void*& bEnableStructureComponentMemOptField() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 44); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +37, medido na build 25090264
    //  (offset absoluto medido: 0xC6B; confianca media)
    bool& bEnableVictoryCoreDupeCheckField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 37); }
    bool& bEnableWorldBuffScalingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableWorldBuffScaling"); }
    bool& bFailedWaterDinoSpawnLogEnabledField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFailedWaterDinoSpawnLogEnabled"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +12, medido na build 25090264
    //  (offset absoluto medido: 0x25A4; confianca alta)
    bool& bFastDecayUnsnappedCoreStructuresField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 12); }
    bool& bFilterCharacterNamesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFilterCharacterNames"); }
    bool& bFilterChatField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFilterChat"); }
    bool& bFilterTribeNamesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFilterTribeNames"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +2, medido na build 25090264
    //  (offset absoluto medido: 0xE50; confianca alta)
    bool& bFirstSaveWorldField() const
    { return BrzCampoAncorado<bool>(this, "bForceRespawnDinos", 2); }
    bool& bFlyerPlatformAllowUnalignedDinoBasingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +17, medido na build 25090264
    //  (offset absoluto medido: 0xC57; confianca alta)
    bool& bForceAllStructureLockingField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 17); }
    bool& bForceAllowAllStructuresField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAllStructures"); }
    bool& bForceAllowAscensionItemDownloadsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAscensionItemDownloads"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +4, medido na build 25090264
    //  (offset absoluto medido: 0x259C; confianca alta)
    bool& bForceAllowCaveFlyersField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +22, medido na build 25090264
    //  (offset absoluto medido: 0x1176; confianca alta)
    void*& bForceClampItemQualityField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 22); }
    bool& bForceLoadingPlayerDataField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceLoadingPlayerData"); }
    bool& bForceMapPlayerLocationField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceMapPlayerLocation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceRespawnDinos` +1, medido na build 25090264
    //  (offset absoluto medido: 0xE4F; confianca alta)
    void*& bForceResetWildDinosField() const
    { return BrzCampoAncorado<void*>(this, "bForceRespawnDinos", 1); }
    bool& bForceRespawnDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceRespawnDinos"); }
    bool& bForceUseInventoryAppendsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceUseInventoryAppends"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +21, medido na build 25090264
    //  (offset absoluto medido: 0x1175; confianca alta)
    void*& bForceWipeBlueprintDinoLevelField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDinoBaseLevel` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1174; confianca alta)
    void*& bForceWipeBlueprintItemQualityField() const
    { return BrzCampoAncorado<void*>(this, "MaxDinoBaseLevel", 20); }
    bool& bFreezeTribesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFreezeTribes"); }
    bool& bGameplayLogEnabledField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGameplayLogEnabled"); }
    bool& bGenesisUseStructuresPreventionVolumesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGenesisUseStructuresPreventionVolumes"); }
    bool& bGlobalDisableLoginLockCheckField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGlobalDisableLoginLockCheck"); }
    bool& bHardLimitTurretsInRangeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHardLimitTurretsInRange"); }
    bool& bHasCovertedToStoreField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasCovertedToStore"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableListenServerTethering` +277, medido na build 25090264
    //  (offset absoluto medido: 0x3C60; confianca baixa)
    bool& bHasLoadedSaveGameField() const
    { return BrzCampoAncorado<bool>(this, "bDisableListenServerTethering", 277); }
    bool& bHexStoreAllowOnlyEngramTradeOptionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHexStoreAllowOnlyEngramTradeOption"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +36, medido na build 25090264
    //  (offset absoluto medido: 0xC6A; confianca media)
    bool& bIdlePlayerKickAllowedField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +38, medido na build 25090264
    //  (offset absoluto medido: 0xC6C; confianca media)
    bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 38); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +43, medido na build 25090264
    //  (offset absoluto medido: 0xC71; confianca media)
    void*& bIgnorePVPMountedWeaponryRestrictionsField() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 43); }
    bool& bIgnoreStructuresPreventionVolumesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreStructuresPreventionVolumes"); }
    bool& bIncreasePvPRespawnIntervalField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIncreasePvPRespawnInterval"); }
    bool& bIsConsoleUnOfficialPCServerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsConsoleUnOfficialPCServer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +212, medido na build 25090264
    //  (offset absoluto medido: 0xE28; confianca baixa)
    bool& bIsCurrentlyRequestingKeyField() const
    { return BrzCampoAncorado<bool>(this, "ExplorerNoteXPMultiplier", 212); }
    bool& bIsCurrentlySavingWorldField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlySavingWorld"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChatLogMaxAgeInDays` +53, medido na build 25090264
    //  (offset absoluto medido: 0x3AB1; confianca media)
    bool& bIsGenesisMapField() const
    { return BrzCampoAncorado<bool>(this, "ChatLogMaxAgeInDays", 53); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +35, medido na build 25090264
    //  (offset absoluto medido: 0xC69; confianca media)
    bool& bIsLegacyServerField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 35); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerID` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2704; confianca alta)
    bool& bIsLoadedServerField() const
    { return BrzCampoAncorado<bool>(this, "ServerID", 12); }
    bool& bIsOfficialServerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsOfficialServer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoCreateNewPlayerData` +1, medido na build 25090264
    //  (offset absoluto medido: 0xC11; confianca alta)
    bool& bIsRestartingField() const
    { return BrzCampoAncorado<bool>(this, "bAutoCreateNewPlayerData", 1); }
    bool& bJoinInProgressGamesAsSpectatorField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bJoinInProgressGamesAsSpectator"); }
    bool& bLimitTurretsInRangeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitTurretsInRange"); }
    bool& bLogChatMessagesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLogChatMessages"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +4, medido na build 25090264
    //  (offset absoluto medido: 0xC4A; confianca alta)
    bool& bMapPlayerLocationField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 4); }
    bool& bNonPermanentDiseasesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNonPermanentDiseases"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +15, medido na build 25090264
    //  (offset absoluto medido: 0x25A7; confianca alta)
    bool& bNotifyAdminCommandsInChatField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +17, medido na build 25090264
    //  (offset absoluto medido: 0x25A9; confianca alta)
    bool& bOfficialDisableGenesisMissionsField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 17); }
    bool& bOnlyAllowSpecifiedEngramsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAllowSpecifiedEngrams"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +21, medido na build 25090264
    //  (offset absoluto medido: 0xC5B; confianca alta)
    bool& bOnlyAutoDestroyCoreStructuresField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +11, medido na build 25090264
    //  (offset absoluto medido: 0x25A3; confianca alta)
    bool& bOnlyDecayUnsnappedCoreStructuresField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 11); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +8, medido na build 25090264
    //  (offset absoluto medido: 0x25A0; confianca alta)
    bool& bOverideStructurePlatformPreventionField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 8); }
    bool& bParseServerToJsonField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bParseServerToJson"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bParseServerToJson` +1, medido na build 25090264
    //  (offset absoluto medido: 0x3CD9; confianca alta)
    void*& bParseServerToSQLiteField() const
    { return BrzCampoAncorado<void*>(this, "bParseServerToJson", 1); }
    bool& bPassiveDefensesDamageRiderlessDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPassiveDefensesDamageRiderlessDinos"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +45, medido na build 25090264
    //  (offset absoluto medido: 0xC73; confianca media)
    void*& bPlaceholderBool1Field() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 45); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerDatas` +28, medido na build 25090264
    //  (offset absoluto medido: 0xE4C; confianca alta)
    bool& bPopulatingSpawnZonesField() const
    { return BrzCampoAncorado<bool>(this, "PlayerDatas", 28); }
    bool& bPreventDiseasesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventDiseases"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +66, medido na build 25090264
    //  (offset absoluto medido: 0xC88; confianca media)
    bool& bPreventDroppedItemPhysicsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 66); }
    bool& bPreventHibernationManagerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventHibernationManager"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +22, medido na build 25090264
    //  (offset absoluto medido: 0xC5C; confianca alta)
    bool& bPreventMateBoostField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 22); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +10, medido na build 25090264
    //  (offset absoluto medido: 0x111A; confianca alta)
    void*& bPreventNonClusterCharacterUploadsWithItemsField() const
    { return BrzCampoAncorado<void*>(this, "TributeCharacterExpirationSeconds", 10); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +6, medido na build 25090264
    //  (offset absoluto medido: 0x259E; confianca alta)
    bool& bPreventOfflinePvPField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 6); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +19, medido na build 25090264
    //  (offset absoluto medido: 0x25AB; confianca alta)
    bool& bPreventOutOfTribePinCodeUseField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 19); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHardLimitTurretsInRange` +1, medido na build 25090264
    //  (offset absoluto medido: 0x3935; confianca alta)
    void*& bPreventPlannedStructureDecayResetField() const
    { return BrzCampoAncorado<void*>(this, "bHardLimitTurretsInRange", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +34, medido na build 25090264
    //  (offset absoluto medido: 0xC68; confianca media)
    bool& bPreventSpawnAnimationsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 34); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +11, medido na build 25090264
    //  (offset absoluto medido: 0xC51; confianca alta)
    bool& bPreventStructurePaintingField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 11); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +21, medido na build 25090264
    //  (offset absoluto medido: 0x25AD; confianca alta)
    void*& bPreventStructurePlanningField() const
    { return BrzCampoAncorado<void*>(this, "NextExtinctionEventUTC", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +19, medido na build 25090264
    //  (offset absoluto medido: 0xC59; confianca alta)
    bool& bPreventTribeAlliancesField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 19); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +9, medido na build 25090264
    //  (offset absoluto medido: 0x1119; confianca alta)
    bool& bPreventUploadDinosField() const
    { return BrzCampoAncorado<bool>(this, "TributeCharacterExpirationSeconds", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1118; confianca alta)
    bool& bPreventUploadItemsField() const
    { return BrzCampoAncorado<bool>(this, "TributeCharacterExpirationSeconds", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TributeCharacterExpirationSeconds` +7, medido na build 25090264
    //  (offset absoluto medido: 0x1117; confianca alta)
    bool& bPreventUploadSurvivorsField() const
    { return BrzCampoAncorado<bool>(this, "TributeCharacterExpirationSeconds", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoCreateNewPlayerData` +3, medido na build 25090264
    //  (offset absoluto medido: 0xC13; confianca alta)
    bool& bProximityChatField() const
    { return BrzCampoAncorado<bool>(this, "bAutoCreateNewPlayerData", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoCreateNewPlayerData` +2, medido na build 25090264
    //  (offset absoluto medido: 0xC12; confianca alta)
    bool& bProximityVoiceChatField() const
    { return BrzCampoAncorado<bool>(this, "bAutoCreateNewPlayerData", 2); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +24, medido na build 25090264
    //  (offset absoluto medido: 0xC5E; confianca alta)
    bool& bPvEAllowStructuresAtSupplyDropsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 24); }
    bool& bPvEAllowTribeWarField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWar"); }
    bool& bPvEAllowTribeWarCancelField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWarCancel"); }
    bool& bPvEDisableFriendlyFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEDisableFriendlyFire"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +7, medido na build 25090264
    //  (offset absoluto medido: 0x259F; confianca alta)
    bool& bPvPDinoDecayField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +15, medido na build 25090264
    //  (offset absoluto medido: 0xC55; confianca alta)
    bool& bPvPStructureDecayField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextExtinctionEventUTC` +16, medido na build 25090264
    //  (offset absoluto medido: 0x25A8; confianca alta)
    bool& bRandomSupplyCratePointsField() const
    { return BrzCampoAncorado<bool>(this, "NextExtinctionEventUTC", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +42, medido na build 25090264
    //  (offset absoluto medido: 0xC70; confianca media)
    void*& bResetDecayTimersField() const
    { return BrzCampoAncorado<void*>(this, "bServerHardcore", 42); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerDatas` +29, medido na build 25090264
    //  (offset absoluto medido: 0xE4D; confianca alta)
    bool& bRestartedAPlayerField() const
    { return BrzCampoAncorado<bool>(this, "PlayerDatas", 29); }
    bool& bRiderDinoCollisionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRiderDinoCollision"); }
    bool& bSaveFormerTribeOwnerLogField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bSaveFormerTribeOwnerLog"); }
    bool& bServerAllowArkDownloadField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowArkDownload"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerAllowArkDownload` +1, medido na build 25090264
    //  (offset absoluto medido: 0xC3D; confianca alta)
    bool& bServerAllowThirdPersonPlayerField() const
    { return BrzCampoAncorado<bool>(this, "bServerAllowArkDownload", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +2, medido na build 25090264
    //  (offset absoluto medido: 0xC48; confianca alta)
    bool& bServerCrosshairField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 2); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceExploitedTameDeletion` +1, medido na build 25090264
    //  (offset absoluto medido: 0x3A28; confianca alta)
    void*& bServerEnableDestroyByMeshingField() const
    { return BrzCampoAncorado<void*>(this, "bForceExploitedTameDeletion", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceExploitedTameDeletion` +2, medido na build 25090264
    //  (offset absoluto medido: 0x3A29; confianca alta)
    void*& bServerEnableDestroyOutsideMapField() const
    { return BrzCampoAncorado<void*>(this, "bForceExploitedTameDeletion", 2); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bGenesisUseStructuresPreventionVolumes` +1, medido na build 25090264
    //  (offset absoluto medido: 0x3A26; confianca alta)
    bool& bServerEnableMeshCheckingField() const
    { return BrzCampoAncorado<bool>(this, "bGenesisUseStructuresPreventionVolumes", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +3, medido na build 25090264
    //  (offset absoluto medido: 0xC49; confianca alta)
    bool& bServerForceNoHUDField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 3); }
    bool& bServerGameLogEnabledField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogEnabled"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +25, medido na build 25090264
    //  (offset absoluto medido: 0xC5F; confianca alta)
    bool& bServerGameLogIncludeTribeLogsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 25); }
    bool& bServerHardcoreField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerHardcore"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +1, medido na build 25090264
    //  (offset absoluto medido: 0xC47; confianca alta)
    bool& bServerPVEField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +26, medido na build 25090264
    //  (offset absoluto medido: 0xC60; confianca alta)
    bool& bServerRCONOutputTribeLogsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 26); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExplorerNoteXPMultiplier` +12, medido na build 25090264
    //  (offset absoluto medido: 0xD60; confianca media)
    void*& bServerTickRateLoggingField() const
    { return BrzCampoAncorado<void*>(this, "ExplorerNoteXPMultiplier", 12); }
    bool& bServerUseDinoListField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerUseDinoList"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceExploitedTameDeletion` +3, medido na build 25090264
    //  (offset absoluto medido: 0x3A2A; confianca alta)
    void*& bServerUseLineOfSightInteractionCheckField() const
    { return BrzCampoAncorado<void*>(this, "bForceExploitedTameDeletion", 3); }
    bool& bShowCreativeModeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowCreativeMode"); }
    bool& bShowFloatingDamageTextField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowFloatingDamageText"); }
    bool& bTempDisableLoginLockCheckField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTempDisableLoginLockCheck"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +23, medido na build 25090264
    //  (offset absoluto medido: 0xC5D; confianca alta)
    bool& bTribeLogDestroyedEnemyStructuresField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 23); }
    bool& bTribeStoreCharacterConfigurationField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeStoreCharacterConfiguration"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +41, medido na build 25090264
    //  (offset absoluto medido: 0xC6F; confianca media)
    bool& bUseAlarmNotificationsField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 41); }
    bool& bUseBPPreSpawnedDinoField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseBPPreSpawnedDino"); }
    bool& bUseCharacterTrackerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseCharacterTracker"); }
    bool& bUseDinoLevelUpAnimationsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDinoLevelUpAnimations"); }
    bool& bUseDisabledStatusStatesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDisabledStatusStates"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerAllowArkDownload` +2, medido na build 25090264
    //  (offset absoluto medido: 0xC3E; confianca alta)
    bool& bUseExclusiveListField() const
    { return BrzCampoAncorado<bool>(this, "bServerAllowArkDownload", 2); }
    bool& bUseOnLoadClampItemQualityRatingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOnLoadClampItemQualityRating"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bServerHardcore` +27, medido na build 25090264
    //  (offset absoluto medido: 0xC61; confianca alta)
    bool& bUseOptimizedHarvestingHealthField() const
    { return BrzCampoAncorado<bool>(this, "bServerHardcore", 27); }
    bool& bUseOverrideTimeToRecoverValuesOnDinoStatusCompField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOverrideTimeToRecoverValuesOnDinoStatusComp"); }
    bool& bUseOverrideTimeToRecoverValuesOnPlayerStatusCompField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOverrideTimeToRecoverValuesOnPlayerStatusComp"); }
    bool& bUseSingleplayerSettingsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseSingleplayerSettings"); }
    bool& bUseTameLimitForStructuresOnlyField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseTameLimitForStructuresOnly"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoPvEUseSystemTime` +1, medido na build 25090264
    //  (offset absoluto medido: 0x10DA; confianca alta)
    bool& bUsingStructureDestructionTagField() const
    { return BrzCampoAncorado<bool>(this, "bAutoPvEUseSystemTime", 1); }
    BitFieldValue<bool, unsigned __int32> bDestroyCharacterOnLogoutInLobby()
    { return { (void*)this, "bDestroyCharacterOnLogoutInLobby" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJoiningDuringMatch()
    { return { (void*)this, "bPreventJoiningDuringMatch" }; }
    BitFieldValue<bool, unsigned __int32> AIForceOverlapCheck()
    { return { (void*)this, "AIForceOverlapCheck" }; }
    BitFieldValue<bool, unsigned __int32> AIForceTargetPlayers()
    { return { (void*)this, "AIForceTargetPlayers" }; }
    BitFieldValue<bool, unsigned __int32> DisableRailgunPVP()
    { return { (void*)this, "DisableRailgunPVP" }; }
    BitFieldValue<bool, unsigned __int32> MaxDifficulty()
    { return { (void*)this, "MaxDifficulty" }; }
    BitFieldValue<bool, unsigned __int32> RestartedDueToRedisTimeout()
    { return { (void*)this, "RestartedDueToRedisTimeout" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBunkerModulesAboveGround()
    { return { (void*)this, "bAllowBunkerModulesAboveGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBunkerModulesInPreventionZones()
    { return { (void*)this, "bAllowBunkerModulesInPreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBunkersInPreventionZones()
    { return { (void*)this, "bAllowBunkersInPreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChatFromDeadNonAdmins()
    { return { (void*)this, "bAllowChatFromDeadNonAdmins" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCryoFridgeOnSaddle()
    { return { (void*)this, "bAllowCryoFridgeOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomRecipes()
    { return { (void*)this, "bAllowCustomRecipes" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoAIInsideBunkers()
    { return { (void*)this, "bAllowDinoAIInsideBunkers" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDisablingSpectator()
    { return { (void*)this, "bAllowDisablingSpectator" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFlyerSpeedLeveling()
    { return { (void*)this, "bAllowFlyerSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bAllowHideDamageSourceFromLogs()
    { return { (void*)this, "bAllowHideDamageSourceFromLogs" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInactiveTribes()
    { return { (void*)this, "bAllowInactiveTribes" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlatformSaddleMultiFloors()
    { return { (void*)this, "bAllowPlatformSaddleMultiFloors" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingDinosInsideBunkers()
    { return { (void*)this, "bAllowRidingDinosInsideBunkers" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSpeedLeveling()
    { return { (void*)this, "bAllowSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStoredDatas()
    { return { (void*)this, "bAllowStoredDatas" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTekSuitPowersInGenesis()
    { return { (void*)this, "bAllowTekSuitPowersInGenesis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTeslaCoilCaveBuildingPVP()
    { return { (void*)this, "bAllowTeslaCoilCaveBuildingPVP" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUnclaimDinos()
    { return { (void*)this, "bAllowUnclaimDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUnlimitedRespecs()
    { return { (void*)this, "bAllowUnlimitedRespecs" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysAllowStructurePickup()
    { return { (void*)this, "bAlwaysAllowStructurePickup" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysNotifyPlayerJoined()
    { return { (void*)this, "bAlwaysNotifyPlayerJoined" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysNotifyPlayerLeft()
    { return { (void*)this, "bAlwaysNotifyPlayerLeft" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCreateNewPlayerData()
    { return { (void*)this, "bAutoCreateNewPlayerData" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCreateTribes()
    { return { (void*)this, "bAutoCreateTribes" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPvETimer()
    { return { (void*)this, "bAutoPvETimer" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPvEUseSystemTime()
    { return { (void*)this, "bAutoPvEUseSystemTime" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUnlockAllEngrams()
    { return { (void*)this, "bAutoUnlockAllEngrams" }; }
    BitFieldValue<bool, unsigned __int32> bCheckSoftTameLimitOnTick()
    { return { (void*)this, "bCheckSoftTameLimitOnTick" }; }
    BitFieldValue<bool, unsigned __int32> bCustomGameModeAllowSpectatorJoinAfterMatchStart()
    { return { (void*)this, "bCustomGameModeAllowSpectatorJoinAfterMatchStart" }; }
    BitFieldValue<bool, unsigned __int32> bDisableBuffSavePlayerDataOnSaveWorld()
    { return { (void*)this, "bDisableBuffSavePlayerDataOnSaveWorld" }; }
    BitFieldValue<bool, unsigned __int32> bDisableBurrowDecayTimers()
    { return { (void*)this, "bDisableBurrowDecayTimers" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCryopodEnemyCheck()
    { return { (void*)this, "bDisableCryopodEnemyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCryopodFridgeRequirement()
    { return { (void*)this, "bDisableCryopodFridgeRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCustomFoldersInTributeInventories()
    { return { (void*)this, "bDisableCustomFoldersInTributeInventories" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultDinoTaming()
    { return { (void*)this, "bDisableDefaultDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultMapItemSets()
    { return { (void*)this, "bDisableDefaultMapItemSets" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoDecayClaiming()
    { return { (void*)this, "bDisableDinoDecayClaiming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoItemBlacklist()
    { return { (void*)this, "bDisableDinoItemBlacklist" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoRiding()
    { return { (void*)this, "bDisableDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoTaming()
    { return { (void*)this, "bDisableDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDynamicMusic()
    { return { (void*)this, "bDisableDynamicMusic" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFriendlyFire()
    { return { (void*)this, "bDisableFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bDisableGeneTraits()
    { return { (void*)this, "bDisableGeneTraits" }; }
    BitFieldValue<bool, unsigned __int32> bDisableGenesisMissions()
    { return { (void*)this, "bDisableGenesisMissions" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHexagonStore()
    { return { (void*)this, "bDisableHexagonStore" }; }
    BitFieldValue<bool, unsigned __int32> bDisableListenServerTethering()
    { return { (void*)this, "bDisableListenServerTethering" }; }
    BitFieldValue<bool, unsigned __int32> bDisableLootCrates()
    { return { (void*)this, "bDisableLootCrates" }; }
    BitFieldValue<bool, unsigned __int32> bDisableNonTribePinAccess()
    { return { (void*)this, "bDisableNonTribePinAccess" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePhotoMode()
    { return { (void*)this, "bDisablePhotoMode" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRailgunPVP()
    { return { (void*)this, "bDisableRailgunPVP" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSaveLoad()
    { return { (void*)this, "bDisableSaveLoad" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructurePlacementCollision()
    { return { (void*)this, "bDisableStructurePlacementCollision" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTekLegsBoost()
    { return { (void*)this, "bDisableTekLegsBoost" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWeatherFog()
    { return { (void*)this, "bDisableWeatherFog" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCrafting()
    { return { (void*)this, "bDisableWirelessCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForDinos()
    { return { (void*)this, "bDisableWirelessCraftingForDinos" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForPlayers()
    { return { (void*)this, "bDisableWirelessCraftingForPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForStructures()
    { return { (void*)this, "bDisableWirelessCraftingForStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWorldBuffs()
    { return { (void*)this, "bDisableWorldBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bDisableXP()
    { return { (void*)this, "bDisableXP" }; }
    BitFieldValue<bool, unsigned __int32> bDoAutomatedModValidationModeration()
    { return { (void*)this, "bDoAutomatedModValidationModeration" }; }
    BitFieldValue<bool, unsigned __int32> bDontEnforceMilestoneTaskOrder()
    { return { (void*)this, "bDontEnforceMilestoneTaskOrder" }; }
    BitFieldValue<bool, unsigned __int32> bEnableCryoSicknessPVE()
    { return { (void*)this, "bEnableCryoSicknessPVE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDeathTeamSpectator()
    { return { (void*)this, "bEnableDeathTeamSpectator" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMeshBitingProtection()
    { return { (void*)this, "bEnableMeshBitingProtection" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePlayerMoveThroughAlly()
    { return { (void*)this, "bEnablePlayerMoveThroughAlly" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePlayerMoveThroughSleeping()
    { return { (void*)this, "bEnablePlayerMoveThroughSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bEnableServerDestroyTamesAboveSoftTameLimit()
    { return { (void*)this, "bEnableServerDestroyTamesAboveSoftTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bEnableWorldBuffScaling()
    { return { (void*)this, "bEnableWorldBuffScaling" }; }
    BitFieldValue<bool, unsigned __int32> bFailedWaterDinoSpawnLogEnabled()
    { return { (void*)this, "bFailedWaterDinoSpawnLogEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bFilterCharacterNames()
    { return { (void*)this, "bFilterCharacterNames" }; }
    BitFieldValue<bool, unsigned __int32> bFilterChat()
    { return { (void*)this, "bFilterChat" }; }
    BitFieldValue<bool, unsigned __int32> bFilterTribeNames()
    { return { (void*)this, "bFilterTribeNames" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPlatformAllowUnalignedDinoBasing()
    { return { (void*)this, "bFlyerPlatformAllowUnalignedDinoBasing" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAllStructures()
    { return { (void*)this, "bForceAllowAllStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAscensionItemDownloads()
    { return { (void*)this, "bForceAllowAscensionItemDownloads" }; }
    BitFieldValue<bool, unsigned __int32> bForceExploitedTameDeletion()
    { return { (void*)this, "bForceExploitedTameDeletion" }; }
    BitFieldValue<bool, unsigned __int32> bForceGachaUnhappyInCaves()
    { return { (void*)this, "bForceGachaUnhappyInCaves" }; }
    BitFieldValue<bool, unsigned __int32> bForceLoadingPlayerData()
    { return { (void*)this, "bForceLoadingPlayerData" }; }
    BitFieldValue<bool, unsigned __int32> bForceMapPlayerLocation()
    { return { (void*)this, "bForceMapPlayerLocation" }; }
    BitFieldValue<bool, unsigned __int32> bForceRespawnDinos()
    { return { (void*)this, "bForceRespawnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseInventoryAppends()
    { return { (void*)this, "bForceUseInventoryAppends" }; }
    BitFieldValue<bool, unsigned __int32> bFreezeTribes()
    { return { (void*)this, "bFreezeTribes" }; }
    BitFieldValue<bool, unsigned __int32> bGameplayLogEnabled()
    { return { (void*)this, "bGameplayLogEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bGenesisUseStructuresPreventionVolumes()
    { return { (void*)this, "bGenesisUseStructuresPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bGlobalDisableLoginLockCheck()
    { return { (void*)this, "bGlobalDisableLoginLockCheck" }; }
    BitFieldValue<bool, unsigned __int32> bHardLimitTurretsInRange()
    { return { (void*)this, "bHardLimitTurretsInRange" }; }
    BitFieldValue<bool, unsigned __int32> bHasCovertedToStore()
    { return { (void*)this, "bHasCovertedToStore" }; }
    BitFieldValue<bool, unsigned __int32> bHexStoreAllowOnlyEngramTradeOption()
    { return { (void*)this, "bHexStoreAllowOnlyEngramTradeOption" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreStructuresPreventionVolumes()
    { return { (void*)this, "bIgnoreStructuresPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIncreasePvPRespawnInterval()
    { return { (void*)this, "bIncreasePvPRespawnInterval" }; }
    BitFieldValue<bool, unsigned __int32> bIsConsoleUnOfficialPCServer()
    { return { (void*)this, "bIsConsoleUnOfficialPCServer" }; }
    BitFieldValue<bool, unsigned __int32> bIsCurrentlySavingWorld()
    { return { (void*)this, "bIsCurrentlySavingWorld" }; }
    BitFieldValue<bool, unsigned __int32> bIsOfficialServer()
    { return { (void*)this, "bIsOfficialServer" }; }
    BitFieldValue<bool, unsigned __int32> bJoinInProgressGamesAsSpectator()
    { return { (void*)this, "bJoinInProgressGamesAsSpectator" }; }
    BitFieldValue<bool, unsigned __int32> bLimitBunkersPerTribe()
    { return { (void*)this, "bLimitBunkersPerTribe" }; }
    BitFieldValue<bool, unsigned __int32> bLimitTurretsInRange()
    { return { (void*)this, "bLimitTurretsInRange" }; }
    BitFieldValue<bool, unsigned __int32> bLogChatMessages()
    { return { (void*)this, "bLogChatMessages" }; }
    BitFieldValue<bool, unsigned __int32> bNeedsPowerToActivateAquaticCompartments()
    { return { (void*)this, "bNeedsPowerToActivateAquaticCompartments" }; }
    BitFieldValue<bool, unsigned __int32> bNonPermanentDiseases()
    { return { (void*)this, "bNonPermanentDiseases" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowSpecifiedEngrams()
    { return { (void*)this, "bOnlyAllowSpecifiedEngrams" }; }
    BitFieldValue<bool, unsigned __int32> bOutpostsNoInitialDinosSP()
    { return { (void*)this, "bOutpostsNoInitialDinosSP" }; }
    BitFieldValue<bool, unsigned __int32> bParseServerToJson()
    { return { (void*)this, "bParseServerToJson" }; }
    BitFieldValue<bool, unsigned __int32> bPassiveDefensesDamageRiderlessDinos()
    { return { (void*)this, "bPassiveDefensesDamageRiderlessDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDiseases()
    { return { (void*)this, "bPreventDiseases" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHibernationManager()
    { return { (void*)this, "bPreventHibernationManager" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemTraitEffects()
    { return { (void*)this, "bPreventItemTraitEffects" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOverworldBosses()
    { return { (void*)this, "bPreventOverworldBosses" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTekChemBenchBabies()
    { return { (void*)this, "bPreventTekChemBenchBabies" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTemplateOnSaddle()
    { return { (void*)this, "bPreventTemplateOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowTribeWar()
    { return { (void*)this, "bPvEAllowTribeWar" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowTribeWarCancel()
    { return { (void*)this, "bPvEAllowTribeWarCancel" }; }
    BitFieldValue<bool, unsigned __int32> bPvEDisableFriendlyFire()
    { return { (void*)this, "bPvEDisableFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDinoCollision()
    { return { (void*)this, "bRiderDinoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bSaveFormerTribeOwnerLog()
    { return { (void*)this, "bSaveFormerTribeOwnerLog" }; }
    BitFieldValue<bool, unsigned __int32> bServerAllowArkDownload()
    { return { (void*)this, "bServerAllowArkDownload" }; }
    BitFieldValue<bool, unsigned __int32> bServerGameLogEnabled()
    { return { (void*)this, "bServerGameLogEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bServerHardcore()
    { return { (void*)this, "bServerHardcore" }; }
    BitFieldValue<bool, unsigned __int32> bServerUseDinoList()
    { return { (void*)this, "bServerUseDinoList" }; }
    BitFieldValue<bool, unsigned __int32> bShowCreativeMode()
    { return { (void*)this, "bShowCreativeMode" }; }
    BitFieldValue<bool, unsigned __int32> bShowFloatingDamageText()
    { return { (void*)this, "bShowFloatingDamageText" }; }
    BitFieldValue<bool, unsigned __int32> bTempDisableLoginLockCheck()
    { return { (void*)this, "bTempDisableLoginLockCheck" }; }
    BitFieldValue<bool, unsigned __int32> bTribeStoreCharacterConfiguration()
    { return { (void*)this, "bTribeStoreCharacterConfiguration" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreSpawnedDino()
    { return { (void*)this, "bUseBPPreSpawnedDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseCharacterTracker()
    { return { (void*)this, "bUseCharacterTracker" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoLevelUpAnimations()
    { return { (void*)this, "bUseDinoLevelUpAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bUseDisabledStatusStates()
    { return { (void*)this, "bUseDisabledStatusStates" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnLoadClampItemQualityRating()
    { return { (void*)this, "bUseOnLoadClampItemQualityRating" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverrideTimeToRecoverValuesOnDinoStatusComp()
    { return { (void*)this, "bUseOverrideTimeToRecoverValuesOnDinoStatusComp" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverrideTimeToRecoverValuesOnPlayerStatusComp()
    { return { (void*)this, "bUseOverrideTimeToRecoverValuesOnPlayerStatusComp" }; }
    BitFieldValue<bool, unsigned __int32> bUseSingleplayerSettings()
    { return { (void*)this, "bUseSingleplayerSettings" }; }
    BitFieldValue<bool, unsigned __int32> bUseTameLimitForStructuresOnly()
    { return { (void*)this, "bUseTameLimitForStructuresOnly" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERGAMEMODE_H
