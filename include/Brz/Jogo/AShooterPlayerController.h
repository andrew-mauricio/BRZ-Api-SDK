// ==========================================================================
//  AShooterPlayerController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_H
#define BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct APointOfInterestCosmeticActor;
struct APostProcessVolume;
struct APrimalCinematicActor;
struct APrimalDinoCharacter;
struct APrimalStructurePlacer;
struct AShooterCharacter;
struct ASpectatorPawn;
struct FItemNetID;
struct FItemNetInfo;
struct FName;
struct FPrimalPlayerDataStruct;
struct UActorComponent;
struct UClass;
struct UObject;
struct UPaintingStreamingComponent;
struct UPrimalInventoryComponent;
struct UPrimalItem;
struct UPrimalLocalProfile;
struct UShooterCheatManager;
struct UShooterPersistentUser;
struct USoundCue;
struct UTexture2D;
struct UUserWidget;

#include "ABasePlayerController.h"

struct AShooterPlayerController : public ABasePlayerController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterPlayerController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AcknowledgePossession(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void AcknowledgePossession(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.AcknowledgePossession(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.AddAdminPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddAdminPlayer(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.AddAdminPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddAdminPlayer(FString* a0) const
    { return AddAdminPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddCheats(bool)
    // endereco: casamento de bytes com a build de referencia
    void AddCheats(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.AddCheats(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddCustomActorTrackListEntries_Combined(TArray<FTrackedActorPlusInfoStr
    // endereco: casamento de bytes com a build de referencia
    void AddCustomActorTrackListEntries_Combined(void* retorno, void* a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.AddCustomActorTrackListEntries_Combined(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddCustomActorTrackList_Individual(FTrackedActorPlusInfoStruct&,ETracke
    // endereco: casamento de bytes com a build de referencia
    void AddCustomActorTrackList_Individual(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "AShooterPlayerController.AddCustomActorTrackList_Individual(FTrackedActorPlusInfoStruct&,ETrackedActorCategory::Type,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.AddDinoToClientTrackedActorPointersIfApplicable(APrimalDinoCharacter*)
    // endereco: cache_pdb_25090264
    BrzPonteiro AddDinoToClientTrackedActorPointersIfApplicable(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.AddDinoToClientTrackedActorPointersIfApplicable(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.AddDinoToMap(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddDinoToMap(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.AddDinoToMap(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddExperience(float,bool,bool,EXPType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void AddExperience(float a0, bool a1, bool a2, int a3) const
    {
        NativeCall<void, float, bool, bool, int>(this, "AShooterPlayerController.AddExperience(float,bool,bool,EXPType::Type)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.AddFloatingDamageText(UE::Math::TVector<double>&,float,AActor*,AActor*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddFloatingDamageText(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "AShooterPlayerController.AddFloatingDamageText(UE::Math::TVector<double>&,float,AActor*,AActor*,AShooterPlayerController*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddFloatingDamageText_Implementation(UE::Math::TVector<double>&,float,A
    // endereco: casamento de bytes com a build de referencia
    bool AddFloatingDamageText_Implementation(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<bool, void*, float, void*, void*, void*>(this, "AShooterPlayerController.AddFloatingDamageText_Implementation(UE::Math::TVector<double>&,float,AActor*,AActor*,AShooterPlayerController*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddItemToAllClustersInventory(FString,int)
    // endereco: casamento de bytes com a build de referencia
    static char AddItemToAllClustersInventory(const FString& a0, int a1)
    {
        return NativeCall<char, void*, int>(nullptr, "AShooterPlayerController.AddItemToAllClustersInventory(FString,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static char AddItemToAllClustersInventory(FString* a0, int a1)
    { return AddItemToAllClustersInventory(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.AddMapPerformanceLocation(float,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddMapPerformanceLocation(float a0, float a1, float a2, bool a3) const
    {
        NativeCall<void, float, float, float, bool>(this, "AShooterPlayerController.AddMapPerformanceLocation(float,float,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AddPlayerToClientTrackedActorPointersIfApplicable(AShooterCharacter*)
    // endereco: cache_pdb_25090264
    void AddPlayerToClientTrackedActorPointersIfApplicable(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.AddPlayerToClientTrackedActorPointersIfApplicable(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AdminCheat(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void AdminCheat(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.AdminCheat(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AdminCheat(FString* a0) const
    { AdminCheat(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AllowConsoleUI()
    // endereco: casamento de bytes com a build de referencia
    bool AllowConsoleUI() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.AllowConsoleUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AllowPlayerToJoinNoCheck(FString&)
    // endereco: cache_pdb_25090264
    void AllowPlayerToJoinNoCheck(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.AllowPlayerToJoinNoCheck(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AllowPlayerToJoinNoCheck(FString* a0) const
    { AllowPlayerToJoinNoCheck(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.AllowTribeGroupPermission(ETribeGroupPermission::Type,UObject*)
    // endereco: cache_pdb_25090264
    BrzPonteiro AllowTribeGroupPermission(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterPlayerController.AllowTribeGroupPermission(ETribeGroupPermission::Type,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AllowedToSpectateAllTeams()
    // endereco: casamento de bytes com a build de referencia
    bool AllowedToSpectateAllTeams() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.AllowedToSpectateAllTeams()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ApplySkillBuff(FName,int,AActor*,APrimalBuff*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ApplySkillBuff(unsigned long long a0, int a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<bool, unsigned long long, int, void*, void*, bool>(this, "AShooterPlayerController.ApplySkillBuff(FName,int,AActor*,APrimalBuff*,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AsyncLoadInventory()
    // endereco: casamento de bytes com a build de referencia
    void AsyncLoadInventory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.AsyncLoadInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.AttemptTransferRedownload()
    // endereco: cache_pdb_25090264
    void AttemptTransferRedownload() const
    {
        NativeCall<void>(this, "AShooterPlayerController.AttemptTransferRedownload()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.AutoCycle(float)
    // endereco: cache_pdb_25090264
    void AutoCycle(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.AutoCycle(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.BPAcknowledgePossession(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPAcknowledgePossession(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.BPAcknowledgePossession(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.BPApplyFoliageHarvestEffectOnHitAndCollect(UE::Math::TVector<double>,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPApplyFoliageHarvestEffectOnHitAndCollect(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.BPApplyFoliageHarvestEffectOnHitAndCollect(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.BPCheckCanDinoSpawnFromLocation(TSubclassOf<APrimalDinoCharacter>,UE::M
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCheckCanDinoSpawnFromLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.BPCheckCanDinoSpawnFromLocation(TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPCheckClientPossession()
    // endereco: casamento de bytes com a build de referencia
    bool BPCheckClientPossession() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.BPCheckClientPossession()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPDisableSpectator()
    // endereco: cache_pdb_25090264
    void BPDisableSpectator() const
    {
        NativeCall<void>(this, "AShooterPlayerController.BPDisableSpectator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BPGetExtraWaypointsSOTF(APlayerController*,AShooterCharacter*,TArray<FP
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=408+bytes40+grafo=5/5]]
    void BPGetExtraWaypointsSOTF(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterPlayerController.BPGetExtraWaypointsSOTF(APlayerController*,AShooterCharacter*,TArray<FPointOfInterestData_ForCompanion,TSizedDefaultAllocator<32>>&,TArray<FPointOfInterestData_ForCompanion,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPHandleClientCheckUnfreeze()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=61]]
    bool BPHandleClientCheckUnfreeze() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.BPHandleClientCheckUnfreeze()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPHandleServerCheckUnfreeze()
    // endereco: casamento de bytes com a build de referencia
    bool BPHandleServerCheckUnfreeze() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.BPHandleServerCheckUnfreeze()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.BPOnRecievedUpdatedCachedTeamTameList(int,int,FString&,bool,int,bool&,i
    // endereco: casamento de bytes com a build de referencia
    void BPOnRecievedUpdatedCachedTeamTameList(int a0, int a1, const FString& a2, bool a3, int a4, void* a5, int a6) const
    {
        NativeCall<void, int, int, void*, bool, int, void*, int>(this, "AShooterPlayerController.BPOnRecievedUpdatedCachedTeamTameList(int,int,FString&,bool,int,bool&,int)", a0, a1, const_cast<FString*>(&a2), a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPOnRecievedUpdatedCachedTeamTameList(int a0, int a1, FString* a2, bool a3, int a4, void* a5, int a6) const
    { BPOnRecievedUpdatedCachedTeamTameList(a0, a1, *a2, a3, a4, a5, a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.BPPostRender_Implementation(UCanvas*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=255]]
    BrzPonteiro BPPostRender_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.BPPostRender_Implementation(UCanvas*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BPPreventChangeCamera()
    // endereco: cache_pdb_25090264
    bool BPPreventChangeCamera() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.BPPreventChangeCamera()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPSearchForPOIs()
    // endereco: cache_pdb_25090264
    bool BPSearchForPOIs() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.BPSearchForPOIs()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.BPSearchForPOIs_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool BPSearchForPOIs_Implementation() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.BPSearchForPOIs_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BPServerCycleSpectator(bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* BPServerCycleSpectator(bool a0) const
    {
        return NativeCall<AActor*, bool>(this, "AShooterPlayerController.BPServerCycleSpectator(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.BPServerRequestCustomTrackedActorList(int,int,FString&,bool&,int)
    // endereco: casamento de bytes com a build de referencia
    void BPServerRequestCustomTrackedActorList(int a0, int a1, const FString& a2, void* a3, int a4) const
    {
        NativeCall<void, int, int, void*, void*, int>(this, "AShooterPlayerController.BPServerRequestCustomTrackedActorList(int,int,FString&,bool&,int)", a0, a1, const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPServerRequestCustomTrackedActorList(int a0, int a1, FString* a2, void* a3, int a4) const
    { BPServerRequestCustomTrackedActorList(a0, a1, *a2, a3, a4); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPServerRequestRespawnAtPoint(int,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPServerRequestRespawnAtPoint(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.BPServerRequestRespawnAtPoint(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(AShooterCharacter*,bool
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(void* a0, bool a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, bool, bool, bool, bool>(this, "AShooterPlayerController.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(AShooterCharacter*,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BanPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    static void BanPlayer(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "AShooterPlayerController.BanPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BanPlayer(FString* a0)
    { BanPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BaseGetPlayerCharacter()
    // endereco: casamento de bytes com a build de referencia
    AShooterCharacter* BaseGetPlayerCharacter() const
    {
        return NativeCall<AShooterCharacter*>(this, "AShooterPlayerController.BaseGetPlayerCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BeginInactiveState()
    // endereco: casamento de bytes com a build de referencia
    void BeginInactiveState() const
    {
        NativeCall<void>(this, "AShooterPlayerController.BeginInactiveState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterPlayerController.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.BeginSpectatingState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void BeginSpectatingState() const
    {
        NativeCall<void>(this, "AShooterPlayerController.BeginSpectatingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.BumpThresholdMilestone(TSubclassOf<UObject>,EPrimalMilestoneType,float,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BumpThresholdMilestone(void* a0, int a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, int, float, float>(this, "AShooterPlayerController.BumpThresholdMilestone(TSubclassOf<UObject>,EPrimalMilestoneType,float,float)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.CCC()
    // endereco: cache_pdb_25090264
    void CCC() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CCC()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.CacheNewCosmeticsForNewPlayer(TArray<FApplyReplicatedCosmetic,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CacheNewCosmeticsForNewPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.CacheNewCosmeticsForNewPlayer(TArray<FApplyReplicatedCosmetic,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanDismissPOI(FPointOfInterestData)
    // endereco: casamento de bytes com a build de referencia
    long long CanDismissPOI(void* a0) const
    {
        return NativeCall<long long, void*>(this, "AShooterPlayerController.CanDismissPOI(FPointOfInterestData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanDoPlayerCharacterInput(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanDoPlayerCharacterInput(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "AShooterPlayerController.CanDoPlayerCharacterInput(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanGather()
    // endereco: casamento de bytes com a build de referencia
    bool CanGather() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.CanGather()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanPingRallyPoint()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=356+grafo=7/7]]
    bool CanPingRallyPoint() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.CanPingRallyPoint()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.CanPlayerDropAllInventory()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerDropAllInventory() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.CanPlayerDropAllInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanRestartPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
    bool CanRestartPlayer() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.CanRestartPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanTeamPing()
    // endereco: casamento de bytes com a build de referencia
    bool CanTeamPing() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.CanTeamPing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CanUseAimMagnetism()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=627+grafo=5/5]]
    bool CanUseAimMagnetism() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.CanUseAimMagnetism()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ChangeState(FName)
    // endereco: casamento de bytes com a build de referencia
    void ChangeState(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ChangeState(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.CheckCanEnableCheats()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void CheckCanEnableCheats() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CheckCanEnableCheats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CheckCanEnableCheats_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void CheckCanEnableCheats_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CheckCanEnableCheats_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CheckCheatsPassword_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void CheckCheatsPassword_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.CheckCheatsPassword_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CheckCheatsPassword_Implementation(FString* a0) const
    { CheckCheatsPassword_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CheckForPlayerInventory()
    // endereco: casamento de bytes com a build de referencia
    void CheckForPlayerInventory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CheckForPlayerInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CheckIsOnTransferAllCooldown(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool CheckIsOnTransferAllCooldown(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerController.CheckIsOnTransferAllCooldown(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.CheckOwnsDLC()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckOwnsDLC() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.CheckOwnsDLC()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CheckRequestSpectator_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void CheckRequestSpectator_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.CheckRequestSpectator_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CheckRequestSpectator_Implementation(FString* a0) const
    { CheckRequestSpectator_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CheckforOrbiting()
    // endereco: casamento de bytes com a build de referencia
    void CheckforOrbiting() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CheckforOrbiting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClearInstigatorVOQueue()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClearInstigatorVOQueue() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ClearInstigatorVOQueue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClearMapPerformanceLocations()
    // endereco: casamento de bytes com a build de referencia
    void ClearMapPerformanceLocations() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClearMapPerformanceLocations()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClearTutorials()
    // endereco: cache_pdb_25090264
    void ClearTutorials() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClearTutorials()");
    }

    // jogo_confirmou_dump
    //   AShooterPlayerController.ClientAddActorItem(UPrimalInventoryComponent*,FItemNetInfo,bool,bool,bo
    // endereco: casamento de bytes com a build de referencia
    void ClientAddActorItem(void* a0, void* a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.ClientAddActorItem(UPrimalInventoryComponent*,FItemNetInfo,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientAddActorItemToFolder(UPrimalInventoryComponent*,FItemNetInfo,bool
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientAddActorItemToFolder(void* a0, void* a1, bool a2, bool a3, const FString& a4) const
    {
        return NativeCall<void*, void*, void*, bool, bool, void*>(this, "AShooterPlayerController.ClientAddActorItemToFolder(UPrimalInventoryComponent*,FItemNetInfo,bool,bool,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientAddActorItemToFolder(void* a0, void* a1, bool a2, bool a3, FString* a4) const
    { return ClientAddActorItemToFolder(a0, a1, a2, a3, *a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientAddActorItemToFolder_Implementation(UPrimalInventoryComponent*,FI
    // endereco: casamento de bytes com a build de referencia
    void ClientAddActorItemToFolder_Implementation(void* a0, void* a1, bool a2, bool a3, const FString& a4) const
    {
        NativeCall<void, void*, void*, bool, bool, void*>(this, "AShooterPlayerController.ClientAddActorItemToFolder_Implementation(UPrimalInventoryComponent*,FItemNetInfo,bool,bool,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientAddActorItemToFolder_Implementation(void* a0, void* a1, bool a2, bool a3, FString* a4) const
    { ClientAddActorItemToFolder_Implementation(a0, a1, a2, a3, *a4); }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ClientAddActorItem_Implementation(UPrimalInventoryComponent*,FItemNetIn
    // endereco: casamento de bytes com a build de referencia
    void ClientAddActorItem_Implementation(void* a0, void* a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.ClientAddActorItem_Implementation(UPrimalInventoryComponent*,FItemNetInfo,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientAddCustomActorTrackListEntries_Creatures(TArray<FCustomTrackedAct
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientAddCustomActorTrackListEntries_Creatures(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.ClientAddCustomActorTrackListEntries_Creatures(TArray<FCustomTrackedActorInfo,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientAddCustomActorTrackListEntries_Creatures_ForcePOIVisible(TArray<F
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientAddCustomActorTrackListEntries_Creatures_ForcePOIVisible(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.ClientAddCustomActorTrackListEntries_Creatures_ForcePOIVisible(TArray<FCustomTrackedActorInfo,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientAddCustomActorTrackListEntries_Players(TArray<FCustomTrackedActor
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientAddCustomActorTrackListEntries_Players(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.ClientAddCustomActorTrackListEntries_Players(TArray<FCustomTrackedActorInfo,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientAddFloatingDamageText_Implementation(FVector_NetQuantize,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientAddFloatingDamageText_Implementation(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "AShooterPlayerController.ClientAddFloatingDamageText_Implementation(FVector_NetQuantize,int,int)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientAddFolderToInventoryComponent(UPrimalInventoryComponent*,FString&
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientAddFolderToInventoryComponent(void* a0, const FString& a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterPlayerController.ClientAddFolderToInventoryComponent(UPrimalInventoryComponent*,FString&,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientAddFolderToInventoryComponent(void* a0, FString* a1, int a2) const
    { ClientAddFolderToInventoryComponent(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientAddFolderToInventoryComponent_Implementation(UPrimalInventoryComp
    // endereco: casamento de bytes com a build de referencia
    void ClientAddFolderToInventoryComponent_Implementation(void* a0, const FString& a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterPlayerController.ClientAddFolderToInventoryComponent_Implementation(UPrimalInventoryComponent*,FString&,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientAddFolderToInventoryComponent_Implementation(void* a0, FString* a1, int a2) const
    { ClientAddFolderToInventoryComponent_Implementation(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientAddItemToArk(UPrimalInventoryComponent*,FItemNetInfo,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientAddItemToArk(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.ClientAddItemToArk(UPrimalInventoryComponent*,FItemNetInfo,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientAddItemToArk_Implementation(UPrimalInventoryComponent*,FItemNetIn
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=89+grafo=3/3]]
    void ClientAddItemToArk_Implementation(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerController.ClientAddItemToArk_Implementation(UPrimalInventoryComponent*,FItemNetInfo,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientBeginBatchedArkItemChanges()
    // endereco: casamento de bytes com a build de referencia
    void ClientBeginBatchedArkItemChanges() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientBeginBatchedArkItemChanges()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientBeginBatchedArkItemChanges_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientBeginBatchedArkItemChanges_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ClientBeginBatchedArkItemChanges_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientChatMessage(FPrimalChatMessage)
    // endereco: casamento de bytes com a build de referencia
    void ClientChatMessage(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientChatMessage(FPrimalChatMessage)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientChatMessage_Implementation(FPrimalChatMessage)
    // endereco: casamento de bytes com a build de referencia
    void ClientChatMessage_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientChatMessage_Implementation(FPrimalChatMessage)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientCollectedAchievementItem(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    void ClientCollectedAchievementItem(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientCollectedAchievementItem(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientCollectedAchievementItem_Implementation(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientCollectedAchievementItem_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientCollectedAchievementItem_Implementation(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientCreateDeathMark(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientCreateDeathMark(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientCreateDeathMark(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDisplayNotificationDialog(FString&,FString&,bool,bool,bool,bool,b
    // endereco: casamento de bytes com a build de referencia
    void ClientDisplayNotificationDialog(const FString& a0, const FString& a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    {
        NativeCall<void, void*, void*, bool, bool, bool, bool, bool>(this, "AShooterPlayerController.ClientDisplayNotificationDialog(FString&,FString&,bool,bool,bool,bool,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientDisplayNotificationDialog(FString* a0, FString* a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    { ClientDisplayNotificationDialog(*a0, *a1, a2, a3, a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDisplayNotificationDialog_Implementation(FString&,FString&,bool,b
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientDisplayNotificationDialog_Implementation(const FString& a0, const FString& a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    {
        NativeCall<void, void*, void*, bool, bool, bool, bool, bool>(this, "AShooterPlayerController.ClientDisplayNotificationDialog_Implementation(FString&,FString&,bool,bool,bool,bool,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientDisplayNotificationDialog_Implementation(FString* a0, FString* a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    { ClientDisplayNotificationDialog_Implementation(*a0, *a1, a2, a3, a4, a5, a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientDisplayOutdatedCosmeticsWarning(__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientDisplayOutdatedCosmeticsWarning(long long a0) const
    {
        return NativeCall<void*, long long>(this, "AShooterPlayerController.ClientDisplayOutdatedCosmeticsWarning(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDoMultiUse(UObject*,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=11]]
    void ClientDoMultiUse(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ClientDoMultiUse(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDoMultiUse_Implementation(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientDoMultiUse_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ClientDoMultiUse_Implementation(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDownloadDinoRequestFinished(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void ClientDownloadDinoRequestFinished(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadDinoRequestFinished(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDownloadDinoRequestFinished_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientDownloadDinoRequestFinished_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadDinoRequestFinished_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDownloadPlayerCharacterRequestFinished(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void ClientDownloadPlayerCharacterRequestFinished(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadPlayerCharacterRequestFinished(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDownloadPlayerCharacterRequestFinished_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientDownloadPlayerCharacterRequestFinished_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadPlayerCharacterRequestFinished_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientDrawUndermeshSphere_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ClientDrawUndermeshSphere_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ClientDrawUndermeshSphere_Implementation(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientEndBatchedArkItemChanges()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientEndBatchedArkItemChanges() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientEndBatchedArkItemChanges()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientEndBatchedArkItemChanges_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientEndBatchedArkItemChanges_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ClientEndBatchedArkItemChanges_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientEndReceivingTribeLog_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientEndReceivingTribeLog_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientEndReceivingTribeLog_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientFailedRemoveSaddle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientFailedRemoveSaddle() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientFailedRemoveSaddle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientFailedToAddItemFromArkInventory_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientFailedToAddItemFromArkInventory_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientFailedToAddItemFromArkInventory_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientFinishedLoadArkItems(UPrimalInventoryComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientFinishedLoadArkItems(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientFinishedLoadArkItems(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientFinishedLoadArkItems_Implementation(UPrimalInventoryComponent*)
    // endereco: cache_pdb_25090264
    void ClientFinishedLoadArkItems_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientFinishedLoadArkItems_Implementation(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientFinishedReceivingActorItems(UPrimalInventoryComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientFinishedReceivingActorItems(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientFinishedReceivingActorItems(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientFinishedReceivingActorItems_Implementation(UPrimalInventoryCompon
    // endereco: casamento de bytes com a build de referencia
    void ClientFinishedReceivingActorItems_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientFinishedReceivingActorItems_Implementation(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientGetMessageOfTheDay_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ClientGetMessageOfTheDay_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientGetMessageOfTheDay_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientGetMessageOfTheDay_Implementation(FString* a0) const
    { ClientGetMessageOfTheDay_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientHUDNotificationTypeParams(int,int,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    void ClientHUDNotificationTypeParams(int a0, int a1, int a2, void* a3) const
    {
        NativeCall<void, int, int, int, void*>(this, "AShooterPlayerController.ClientHUDNotificationTypeParams(int,int,int,UObject*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientHUDNotificationTypeParams_Implementation(int,int,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    void ClientHUDNotificationTypeParams_Implementation(int a0, int a1, int a2, void* a3) const
    {
        NativeCall<void, int, int, int, void*>(this, "AShooterPlayerController.ClientHUDNotificationTypeParams_Implementation(int,int,int,UObject*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientInsertActorItem(UPrimalInventoryComponent*,FItemNetInfo,FItemNetI
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientInsertActorItem(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientInsertActorItem(UPrimalInventoryComponent*,FItemNetInfo,FItemNetID)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientInsertActorItem_Implementation(UPrimalInventoryComponent*,FItemNe
    // endereco: casamento de bytes com a build de referencia
    void ClientInsertActorItem_Implementation(void* a0, void* a1, unsigned long long a2) const
    {
        NativeCall<void, void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientInsertActorItem_Implementation(UPrimalInventoryComponent*,FItemNetInfo,FItemNetID)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientLoadArkItems(UPrimalInventoryComponent*,TArray<FItemNetInfo,TSize
    // endereco: thunk
    void ClientLoadArkItems(void* a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.ClientLoadArkItems(UPrimalInventoryComponent*,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientLoadArkItems_Implementation(UPrimalInventoryComponent*,TArray<FIt
    // endereco: cache_pdb_25090264
    void ClientLoadArkItems_Implementation(void* a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.ClientLoadArkItems_Implementation(UPrimalInventoryComponent*,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "AShooterPlayerController.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyAdmin()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientNotifyAdmin() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientNotifyAdmin()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientNotifyCantHarvest()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientNotifyCantHarvest() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientNotifyCantHarvest()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientNotifyCantHitHarvest()
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyCantHitHarvest() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientNotifyCantHitHarvest()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientNotifyDefeatedDino(TSubclassOf<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyDefeatedDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyDefeatedDino(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyDinoDeath_Implementation(FString&,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyDinoDeath_Implementation(const FString& a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerController.ClientNotifyDinoDeath_Implementation(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientNotifyDinoDeath_Implementation(FString* a0, FString* a1, bool a2) const
    { ClientNotifyDinoDeath_Implementation(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyDinoKill(APrimalDinoCharacter*,APawn*)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyDinoKill(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ClientNotifyDinoKill(APrimalDinoCharacter*,APawn*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyEditText(TSubclassOf<UObject>,int,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyEditText(void* a0, int a1, int a2, void* a3) const
    {
        NativeCall<void, void*, int, int, void*>(this, "AShooterPlayerController.ClientNotifyEditText(TSubclassOf<UObject>,int,int,UObject*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientNotifyHitHarvest()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyHitHarvest() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientNotifyHitHarvest()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyLevelUp_Implementation(APrimalCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyLevelUp_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ClientNotifyLevelUp_Implementation(APrimalCharacter*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientNotifyMessageOfTheDay(FString&,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyMessageOfTheDay(const FString& a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterPlayerController.ClientNotifyMessageOfTheDay(FString&,float)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientNotifyMessageOfTheDay(FString* a0, float a1) const
    { ClientNotifyMessageOfTheDay(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyMessageOfTheDay_Implementation(FString&,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyMessageOfTheDay_Implementation(const FString& a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterPlayerController.ClientNotifyMessageOfTheDay_Implementation(FString&,float)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientNotifyMessageOfTheDay_Implementation(FString* a0, float a1) const
    { ClientNotifyMessageOfTheDay_Implementation(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyPaintFinished(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void ClientNotifyPaintFinished(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientNotifyPaintFinished(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyPaintFinished_Implementation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyPaintFinished_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientNotifyPaintFinished_Implementation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientNotifyPlayerDeath(APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyPlayerDeath(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyPlayerDeath(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyPlayerDeathReason(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyPlayerDeathReason(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyPlayerDeathReason(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientNotifyPlayerDeathReason(FString* a0) const
    { ClientNotifyPlayerDeathReason(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyPlayerKill(AActor*,APawn*)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyPlayerKill(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ClientNotifyPlayerKill(AActor*,APawn*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyReconnected_Implementation(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyReconnected_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyReconnected_Implementation(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyRespawned_Implementation(APawn*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyRespawned_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientNotifyRespawned_Implementation(APawn*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyShowProfileRequest(FUniqueNetIdRepl)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyShowProfileRequest(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyShowProfileRequest(FUniqueNetIdRepl)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyShowProfileRequest_Implementation(FUniqueNetIdRepl)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyShowProfileRequest_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyShowProfileRequest_Implementation(FUniqueNetIdRepl)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyTamedDino(TSubclassOf<APrimalDinoCharacter>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=93+chamadores=2]]
    void ClientNotifyTamedDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyTamedDino(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyTamedDino_Implementation(TSubclassOf<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyTamedDino_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientNotifyTamedDino_Implementation(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientNotifyTorpidityIncrease()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientNotifyTorpidityIncrease() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientNotifyTorpidityIncrease()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientNotifyTribeXP(float)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyTribeXP(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.ClientNotifyTribeXP(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyTribeXP_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyTribeXP_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.ClientNotifyTribeXP_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientNotifyUnlockHairStyleOrEmote(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyUnlockHairStyleOrEmote(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ClientNotifyUnlockHairStyleOrEmote(FName)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientNotifyUnlockedAllBTTExplorerNotes(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=4]]
    void ClientNotifyUnlockedAllBTTExplorerNotes(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ClientNotifyUnlockedAllBTTExplorerNotes(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientNotifyUnlockedAllExplorerNotes()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyUnlockedAllExplorerNotes() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientNotifyUnlockedAllExplorerNotes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyUnlockedEngram(TSubclassOf<UPrimalItem>,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=112+chamadores=2]]
    void ClientNotifyUnlockedEngram(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientNotifyUnlockedEngram(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientNotifyUnlockedEngram_Implementation(TSubclassOf<UPrimalItem>,bool
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyUnlockedEngram_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientNotifyUnlockedEngram_Implementation(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientOnAddedItemsToAllClustersInventory(bool,FString&,TArray<int,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOnAddedItemsToAllClustersInventory(bool a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, bool, void*, void*>(this, "AShooterPlayerController.ClientOnAddedItemsToAllClustersInventory(bool,FString&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientOnAddedItemsToAllClustersInventory(bool a0, FString* a1, void* a2) const
    { return ClientOnAddedItemsToAllClustersInventory(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnAddedItemsToAllClustersInventory_Implementation(bool,FString&,T
    // endereco: casamento de bytes com a build de referencia
    void ClientOnAddedItemsToAllClustersInventory_Implementation(bool a0, const FString& a1, void* a2) const
    {
        NativeCall<void, bool, void*, void*>(this, "AShooterPlayerController.ClientOnAddedItemsToAllClustersInventory_Implementation(bool,FString&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientOnAddedItemsToAllClustersInventory_Implementation(bool a0, FString* a1, void* a2) const
    { ClientOnAddedItemsToAllClustersInventory_Implementation(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnCurrentCharacterAndItemsUploaded(unsigned__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientOnCurrentCharacterAndItemsUploaded(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ClientOnCurrentCharacterAndItemsUploaded(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnCurrentCharacterAndItemsUploaded_Implementation(unsigned__int64
    // endereco: casamento de bytes com a build de referencia
    void ClientOnCurrentCharacterAndItemsUploaded_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ClientOnCurrentCharacterAndItemsUploaded_Implementation(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnDropAllNotReadyForUploadItemsFinished_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientOnDropAllNotReadyForUploadItemsFinished_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientOnDropAllNotReadyForUploadItemsFinished_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnEndDownloadTransferredPlayerCharacter(bool,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ClientOnEndDownloadTransferredPlayerCharacter(bool a0, int a1, const FString& a2) const
    {
        NativeCall<void, bool, int, void*>(this, "AShooterPlayerController.ClientOnEndDownloadTransferredPlayerCharacter(bool,int,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientOnEndDownloadTransferredPlayerCharacter(bool a0, int a1, FString* a2) const
    { ClientOnEndDownloadTransferredPlayerCharacter(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnEndDownloadTransferredPlayerCharacter_Implementation(bool,int,F
    // endereco: casamento de bytes com a build de referencia
    void ClientOnEndDownloadTransferredPlayerCharacter_Implementation(bool a0, int a1, const FString& a2) const
    {
        NativeCall<void, bool, int, void*>(this, "AShooterPlayerController.ClientOnEndDownloadTransferredPlayerCharacter_Implementation(bool,int,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientOnEndDownloadTransferredPlayerCharacter_Implementation(bool a0, int a1, FString* a2) const
    { ClientOnEndDownloadTransferredPlayerCharacter_Implementation(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientOnItemTraitEffectActivated(APrimalCharacter*,FName,float,FBPNetEx
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOnItemTraitEffectActivated(void* a0, unsigned long long a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, float, void*>(this, "AShooterPlayerController.ClientOnItemTraitEffectActivated(APrimalCharacter*,FName,float,FBPNetExecParams)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientOnItemTraitEffectActivated_Implementation(APrimalCharacter*,FName
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOnItemTraitEffectActivated_Implementation(void* a0, unsigned long long a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, float, void*>(this, "AShooterPlayerController.ClientOnItemTraitEffectActivated_Implementation(APrimalCharacter*,FName,float,FBPNetExecParams)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientOnMarketInfoUpdated(FMarketInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOnMarketInfoUpdated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientOnMarketInfoUpdated(FMarketInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientOnMarketInfoUpdated_Implementation(FMarketInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOnMarketInfoUpdated_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientOnMarketInfoUpdated_Implementation(FMarketInfo&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientOnStartDownloadTransferredPlayerCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientOnStartDownloadTransferredPlayerCharacter() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientOnStartDownloadTransferredPlayerCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientOnStartDownloadTransferredPlayerCharacter_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientOnStartDownloadTransferredPlayerCharacter_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientOnStartDownloadTransferredPlayerCharacter_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientOpenShipSkillTree_Implementation(APrimalShip*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOpenShipSkillTree_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientOpenShipSkillTree_Implementation(APrimalShip*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientPlayInstigatorVO_Implementation(AActor*,FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientPlayInstigatorVO_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientPlayInstigatorVO_Implementation(AActor*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientPlayLocalSound(USoundBase*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientPlayLocalSound(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientPlayLocalSound(USoundBase*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientPlayLocalSound_Implementation(USoundBase*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=224]]
    void ClientPlayLocalSound_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientPlayLocalSound_Implementation(USoundBase*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientPlayMultipleInstigatorVO(TArray<AActor*,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPlayMultipleInstigatorVO(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ClientPlayMultipleInstigatorVO(TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientPlayMultipleInstigatorVO_Implementation(TArray<AActor*,TSizedDefa
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientPlayMultipleInstigatorVO_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ClientPlayMultipleInstigatorVO_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientPlayerIsValidToDownload(bool,FArkTributePlayerData)
    // endereco: casamento de bytes com a build de referencia
    void ClientPlayerIsValidToDownload(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.ClientPlayerIsValidToDownload(bool,FArkTributePlayerData)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientPlayerIsValidToDownload_Implementation(bool,FArkTributePlayerData
    // endereco: casamento de bytes com a build de referencia
    void ClientPlayerIsValidToDownload_Implementation(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.ClientPlayerIsValidToDownload_Implementation(bool,FArkTributePlayerData)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientProcessItemNetExecCommandBP(UPrimalInventoryComponent*,FItemNetID
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientProcessItemNetExecCommandBP(void* a0, unsigned long long a1, bool a2, unsigned long long a3, void* a4) const
    {
        NativeCall<void, void*, unsigned long long, bool, unsigned long long, void*>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandBP(UPrimalInventoryComponent*,FItemNetID,bool,FName,FBPNetExecParams)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientProcessItemNetExecCommandBP_Implementation(UPrimalInventoryCompon
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=224+bytes40+grafo=7/7]]
    void ClientProcessItemNetExecCommandBP_Implementation(void* a0, unsigned long long a1, bool a2, unsigned long long a3, void* a4) const
    {
        NativeCall<void, void*, unsigned long long, bool, unsigned long long, void*>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandBP_Implementation(UPrimalInventoryComponent*,FItemNetID,bool,FName,FBPNetExecParams)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientProcessItemNetExecCommandUnreliableBP(UPrimalInventoryComponent*,
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientProcessItemNetExecCommandUnreliableBP(void* a0, unsigned long long a1, bool a2, unsigned long long a3, void* a4) const
    {
        NativeCall<void, void*, unsigned long long, bool, unsigned long long, void*>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandUnreliableBP(UPrimalInventoryComponent*,FItemNetID,bool,FName,FBPNetExecParams)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientProgressAchievement(FString&,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientProgressAchievement(const FString& a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "AShooterPlayerController.ClientProgressAchievement(FString&,float,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientProgressAchievement(FString* a0, float a1, bool a2) const
    { ClientProgressAchievement(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientProgressAchievementInteger_Implementation(FString&,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientProgressAchievementInteger_Implementation(const FString& a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "AShooterPlayerController.ClientProgressAchievementInteger_Implementation(FString&,int,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientProgressAchievementInteger_Implementation(FString* a0, int a1, bool a2) const
    { ClientProgressAchievementInteger_Implementation(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientProgressAchievement_Implementation(FString&,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientProgressAchievement_Implementation(const FString& a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "AShooterPlayerController.ClientProgressAchievement_Implementation(FString&,float,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientProgressAchievement_Implementation(FString* a0, float a1, bool a2) const
    { ClientProgressAchievement_Implementation(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientReceiveActiveMissionTags_Implementation(TArray<FName,TSizedDefaul
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientReceiveActiveMissionTags_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveActiveMissionTags_Implementation(TArray<FName,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveDinoAncestors(APrimalDinoCharacter*,TArray<FDinoAncestorsE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveDinoAncestors(void* a0, void* a1, void* a2, int a3, int a4) const
    {
        return NativeCall<void*, void*, void*, void*, int, int>(this, "AShooterPlayerController.ClientReceiveDinoAncestors(APrimalDinoCharacter*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>&,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>&,int,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientReceiveDinoAncestors_Implementation(APrimalDinoCharacter*,TArray<
    // endereco: cache_pdb_25090264
    void ClientReceiveDinoAncestors_Implementation(void* a0, void* a1, void* a2, int a3, int a4) const
    {
        NativeCall<void, void*, void*, void*, int, int>(this, "AShooterPlayerController.ClientReceiveDinoAncestors_Implementation(APrimalDinoCharacter*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>&,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>&,int,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveDinoCharStats(APrimalDinoCharacter*,TArray<float,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveDinoCharStats(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.ClientReceiveDinoCharStats(APrimalDinoCharacter*,TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientReceiveDinoCharStats_Implementation(APrimalDinoCharacter*,TArray<
    // endereco: casamento de bytes com a build de referencia
    void ClientReceiveDinoCharStats_Implementation(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.ClientReceiveDinoCharStats_Implementation(APrimalDinoCharacter*,TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveInventoryItems(UPrimalInventoryComponent*,TArray<unsignedc
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientReceiveInventoryItems(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ClientReceiveInventoryItems(UPrimalInventoryComponent*,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveInventoryItems_AppendChunk(TArray<unsignedchar,TSizedDefau
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientReceiveInventoryItems_AppendChunk(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveInventoryItems_AppendChunk(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveInventoryItems_AppendChunk_Implementation(TArray<unsignedc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveInventoryItems_AppendChunk_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveInventoryItems_AppendChunk_Implementation(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientReceiveInventoryItems_BeginChunked(UPrimalInventoryComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientReceiveInventoryItems_BeginChunked(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveInventoryItems_BeginChunked(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveInventoryItems_BeginChunked_Implementation(UPrimalInventor
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveInventoryItems_BeginChunked_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveInventoryItems_BeginChunked_Implementation(UPrimalInventoryComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientReceiveInventoryItems_EndChunked()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientReceiveInventoryItems_EndChunked() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientReceiveInventoryItems_EndChunked()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveInventoryItems_EndChunked_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveInventoryItems_EndChunked_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ClientReceiveInventoryItems_EndChunked_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientReceiveItemForStructureSkin(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void ClientReceiveItemForStructureSkin(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveItemForStructureSkin(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveItemForStructureSkin_Implementation(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro ClientReceiveItemForStructureSkin_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveItemForStructureSkin_Implementation(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveMarketTradeData(APrimalStructure*,TArray<unsignedint,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveMarketTradeData(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, bool a6, bool a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterPlayerController.ClientReceiveMarketTradeData(APrimalStructure*,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,FNetMarketTradeData&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveMarketTradeDataChunk(TArray<FNetMarketSellOrder,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveMarketTradeDataChunk(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.ClientReceiveMarketTradeDataChunk(TArray<FNetMarketSellOrder,TSizedDefaultAllocator<32>>&,TArray<FNetMarketRequestOrder,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveMarketTradeDataChunk_Implementation(TArray<FNetMarketSellO
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveMarketTradeDataChunk_Implementation(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.ClientReceiveMarketTradeDataChunk_Implementation(TArray<FNetMarketSellOrder,TSizedDefaultAllocator<32>>&,TArray<FNetMarketRequestOrder,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveMarketTradeData_Implementation(APrimalStructure*,TArray<un
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveMarketTradeData_Implementation(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, bool a6, bool a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterPlayerController.ClientReceiveMarketTradeData_Implementation(APrimalStructure*,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,FNetMarketTradeData&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientReceiveMyTribeOnlineList_Implementation(TArray<unsignedint,TSized
    // endereco: casamento de bytes com a build de referencia
    void ClientReceiveMyTribeOnlineList_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveMyTribeOnlineList_Implementation(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientReceiveOriginalHairColor_Implementation(FLinearColor)
    // endereco: casamento de bytes com a build de referencia
    void ClientReceiveOriginalHairColor_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveOriginalHairColor_Implementation(FLinearColor)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerData(FArkTributePlayerDataList
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceivePlayerDataArray_AppendPlayerData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerData(FArkTributePlayerDataListing)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerDataChunk(TArray<unsignedchar,
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientReceivePlayerDataArray_AppendPlayerDataChunk(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerDataChunk(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerDataChunk_Implementation(TArra
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceivePlayerDataArray_AppendPlayerDataChunk_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerDataChunk_Implementation(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerData_Implementation(FArkTribut
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceivePlayerDataArray_AppendPlayerData_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_AppendPlayerData_Implementation(FArkTributePlayerDataListing)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientReceivePlayerDataArray_Begin()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientReceivePlayerDataArray_Begin() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_Begin()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientReceivePlayerDataArray_End(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientReceivePlayerDataArray_End(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_End(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceivePlayerDataArray_End_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceivePlayerDataArray_End_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterPlayerController.ClientReceivePlayerDataArray_End_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveStructuresPlacedOnFloor_Implementation(TArray<FStructuresO
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveStructuresPlacedOnFloor_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveStructuresPlacedOnFloor_Implementation(TArray<FStructuresOnFloor,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveTamingInfoList(TArray<FTamingDinoInfo,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveTamingInfoList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveTamingInfoList(TArray<FTamingDinoInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveTamingInfoList_Implementation(TArray<FTamingDinoInfo,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveTamingInfoList_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientReceiveTamingInfoList_Implementation(TArray<FTamingDinoInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveTradeLog(APrimalStructureMarket*,TArray<FMarketTradeLogEnt
    // endereco: thunk
    BrzPonteiro ClientReceiveTradeLog(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.ClientReceiveTradeLog(APrimalStructureMarket*,TArray<FMarketTradeLogEntry,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientReceiveTradeLog_Implementation(APrimalStructureMarket*,TArray<FMa
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro ClientReceiveTradeLog_Implementation(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.ClientReceiveTradeLog_Implementation(APrimalStructureMarket*,TArray<FMarketTradeLogEntry,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientReceiveTribeLog(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=167]]
    void ClientReceiveTribeLog(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveTribeLog(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientReceiveTribeLog(FString* a0) const
    { ClientReceiveTribeLog(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientReceiveTribeLog_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ClientReceiveTribeLog_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientReceiveTribeLog_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientReceiveTribeLog_Implementation(FString* a0) const
    { ClientReceiveTribeLog_Implementation(*a0); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientRefreshSteamInventoryFinished(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientRefreshSteamInventoryFinished(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientRefreshSteamInventoryFinished(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientRemoveActorItem(UPrimalInventoryComponent*,FItemNetID,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRemoveActorItem(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned long long, bool>(this, "AShooterPlayerController.ClientRemoveActorItem(UPrimalInventoryComponent*,FItemNetID,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientRemoveActorItem_Implementation(UPrimalInventoryComponent*,FItemNe
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=64]]
    void ClientRemoveActorItem_Implementation(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "AShooterPlayerController.ClientRemoveActorItem_Implementation(UPrimalInventoryComponent*,FItemNetID,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientRemoveCustomActorTrackListEntries_FromTotalList_Creatures(TArray<
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientRemoveCustomActorTrackListEntries_FromTotalList_Creatures(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.ClientRemoveCustomActorTrackListEntries_FromTotalList_Creatures(TArray<int,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ClientRemoveCustomActorTrackListEntries_FromTotalList_Creatures_Impleme
    // endereco: cache_pdb_25090264
    void ClientRemoveCustomActorTrackListEntries_FromTotalList_Creatures_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientRemoveCustomActorTrackListEntries_FromTotalList_Creatures_Implementation(TArray<int,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientRemoveCustomActorTrackListEntries_FromTotalList_TeammatePlayers(T
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientRemoveCustomActorTrackListEntries_FromTotalList_TeammatePlayers(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.ClientRemoveCustomActorTrackListEntries_FromTotalList_TeammatePlayers(TArray<int,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientRemoveItemFromArk(UPrimalInventoryComponent*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRemoveItemFromArk(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientRemoveItemFromArk(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientRemoveItemFromArk_Implementation(UPrimalInventoryComponent*,FItem
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=39]]
    void ClientRemoveItemFromArk_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ClientRemoveItemFromArk_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientRemoveItemFromSteamInventory(TArray<unsigned__int64,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRemoveItemFromSteamInventory(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterPlayerController.ClientRemoveItemFromSteamInventory(TArray<unsigned__int64,TSizedDefaultAllocator<32>>&,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientRequestNewTrackInfoFromServer(bool,int,int,FString&,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientRequestNewTrackInfoFromServer(bool a0, int a1, int a2, const FString& a3, int a4) const
    {
        NativeCall<void, bool, int, int, void*, int>(this, "AShooterPlayerController.ClientRequestNewTrackInfoFromServer(bool,int,int,FString&,int)", a0, a1, a2, const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientRequestNewTrackInfoFromServer(bool a0, int a1, int a2, FString* a3, int a4) const
    { ClientRequestNewTrackInfoFromServer(a0, a1, a2, *a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientRequestNewTrackInfoFromServer_TimerRestriction(int,int,FString&,i
    // endereco: casamento de bytes com a build de referencia
    void ClientRequestNewTrackInfoFromServer_TimerRestriction(int a0, int a1, const FString& a2, int a3) const
    {
        NativeCall<void, int, int, void*, int>(this, "AShooterPlayerController.ClientRequestNewTrackInfoFromServer_TimerRestriction(int,int,FString&,int)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientRequestNewTrackInfoFromServer_TimerRestriction(int a0, int a1, FString* a2, int a3) const
    { ClientRequestNewTrackInfoFromServer_TimerRestriction(a0, a1, *a2, a3); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientResetRespawningFlag()
    // endereco: casamento de bytes com a build de referencia
    void ClientResetRespawningFlag() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientResetRespawningFlag()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientResetRespawningFlag_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientResetRespawningFlag_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientResetRespawningFlag_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientRunLocalConsoleCommand(FString&,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=186+bytes40+chamadores=2]]
    void ClientRunLocalConsoleCommand(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientRunLocalConsoleCommand(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientRunLocalConsoleCommand(FString* a0, bool a1) const
    { ClientRunLocalConsoleCommand(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientRunLocalConsoleCommand_Implementation(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientRunLocalConsoleCommand_Implementation(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientRunLocalConsoleCommand_Implementation(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientRunLocalConsoleCommand_Implementation(FString* a0, bool a1) const
    { ClientRunLocalConsoleCommand_Implementation(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSendArkDataPayload(FGuid,EPrimalARKTributeDataType::Type,TArray<u
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientSendArkDataPayload(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "AShooterPlayerController.ClientSendArkDataPayload(FGuid,EPrimalARKTributeDataType::Type,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   AShooterPlayerController.ClientSendArkDataPayloadBegin(FGuid,EPrimalARKTributeDataType::Type,FSt
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=537+bytes40+grafo=4/4]]
    void ClientSendArkDataPayloadBegin(void* a0, int a1, const FString& a2, const FString& a3, const FString& a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    {
        NativeCall<void, void*, int, void*, void*, void*, void*, unsigned int, unsigned int, int>(this, "AShooterPlayerController.ClientSendArkDataPayloadBegin(FGuid,EPrimalARKTributeDataType::Type,FString&,FString&,FString&,TArray<FString,TSizedDefaultAllocator<32>>&,unsignedint,unsignedint,int)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), const_cast<FString*>(&a4), a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientSendArkDataPayloadBegin(void* a0, int a1, FString* a2, FString* a3, FString* a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    { ClientSendArkDataPayloadBegin(a0, a1, *a2, *a3, *a4, a5, a6, a7, a8); }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ClientSendArkDataPayloadBegin_Implementation(FGuid,EPrimalARKTributeDat
    // endereco: casamento de bytes com a build de referencia
    void ClientSendArkDataPayloadBegin_Implementation(void* a0, int a1, const FString& a2, const FString& a3, const FString& a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    {
        NativeCall<void, void*, int, void*, void*, void*, void*, unsigned int, unsigned int, int>(this, "AShooterPlayerController.ClientSendArkDataPayloadBegin_Implementation(FGuid,EPrimalARKTributeDataType::Type,FString&,FString&,FString&,TArray<FString,TSizedDefaultAllocator<32>>&,unsignedint,unsignedint,int)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), const_cast<FString*>(&a4), a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientSendArkDataPayloadBegin_Implementation(void* a0, int a1, FString* a2, FString* a3, FString* a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    { ClientSendArkDataPayloadBegin_Implementation(a0, a1, *a2, *a3, *a4, a5, a6, a7, a8); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSendArkDataPayloadEnd(FGuid,EPrimalARKTributeDataType::Type,unsig
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendArkDataPayloadEnd(void* a0, int a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, int, unsigned long long>(this, "AShooterPlayerController.ClientSendArkDataPayloadEnd(FGuid,EPrimalARKTributeDataType::Type,unsigned__int64)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSendArkDataPayloadEnd_Implementation(FGuid,EPrimalARKTributeDataT
    // endereco: casamento de bytes com a build de referencia
    void ClientSendArkDataPayloadEnd_Implementation(void* a0, int a1, unsigned long long a2) const
    {
        NativeCall<void, void*, int, unsigned long long>(this, "AShooterPlayerController.ClientSendArkDataPayloadEnd_Implementation(FGuid,EPrimalARKTributeDataType::Type,unsigned__int64)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSendArkDataPayload_Implementation(FGuid,EPrimalARKTributeDataType
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendArkDataPayload_Implementation(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "AShooterPlayerController.ClientSendArkDataPayload_Implementation(FGuid,EPrimalARKTributeDataType::Type,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSendFolderData(UPrimalInventoryComponent*,TArray<FServerCustomFol
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendFolderData(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ClientSendFolderData(UPrimalInventoryComponent*,TArray<FServerCustomFolder,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSendFolderData_Implementation(UPrimalInventoryComponent*,TArray<F
    // endereco: casamento de bytes com a build de referencia
    void ClientSendFolderData_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ClientSendFolderData_Implementation(UPrimalInventoryComponent*,TArray<FServerCustomFolder,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSendItemNetExecCommandToServer(UPrimalItem*,FName,FBPNetExecParam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendItemNetExecCommandToServer(void* a0, unsigned long long a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, bool>(this, "AShooterPlayerController.ClientSendItemNetExecCommandToServer(UPrimalItem*,FName,FBPNetExecParams&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientServerChatDirectMessage(FString&,FLinearColor,bool,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ClientServerChatDirectMessage(const FString& a0, void* a1, bool a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, bool, void*>(this, "AShooterPlayerController.ClientServerChatDirectMessage(FString&,FLinearColor,bool,FString&)", const_cast<FString*>(&a0), a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientServerChatDirectMessage(FString* a0, void* a1, bool a2, FString* a3) const
    { ClientServerChatDirectMessage(*a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientServerChatMessage(FString&,FLinearColor,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientServerChatMessage(const FString& a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.ClientServerChatMessage(FString&,FLinearColor,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientServerChatMessage(FString* a0, void* a1, bool a2) const
    { return ClientServerChatMessage(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientServerChatMessage_Implementation(FString&,FLinearColor,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientServerChatMessage_Implementation(const FString& a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerController.ClientServerChatMessage_Implementation(FString&,FLinearColor,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientServerChatMessage_Implementation(FString* a0, void* a1, bool a2) const
    { ClientServerChatMessage_Implementation(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientServerNotification(FString&,FLinearColor,float,float,UTexture2D*,
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientServerNotification(const FString& a0, void* a1, float a2, float a3, void* a4, void* a5, int a6) const
    {
        NativeCall<void, void*, void*, float, float, void*, void*, int>(this, "AShooterPlayerController.ClientServerNotification(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientServerNotification(FString* a0, void* a1, float a2, float a3, void* a4, void* a5, int a6) const
    { ClientServerNotification(*a0, a1, a2, a3, a4, a5, a6); }

    // jogo_confirmou_dump
    //   AShooterPlayerController.ClientServerNotificationSingle(FString&,FLinearColor,float,float,UTextu
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientServerNotificationSingle(const FString& a0, void* a1, float a2, float a3, void* a4, void* a5, int a6, int a7) const
    {
        NativeCall<void, void*, void*, float, float, void*, void*, int, int>(this, "AShooterPlayerController.ClientServerNotificationSingle(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int,int)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientServerNotificationSingle(FString* a0, void* a1, float a2, float a3, void* a4, void* a5, int a6, int a7) const
    { ClientServerNotificationSingle(*a0, a1, a2, a3, a4, a5, a6, a7); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientServerSOTFNotificationCustom(FString&,FLinearColor,float,float,UT
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=257]]
    BrzPonteiro ClientServerSOTFNotificationCustom(const FString& a0, void* a1, float a2, float a3, void* a4, void* a5, int a6) const
    {
        return NativeCall<void*, void*, void*, float, float, void*, void*, int>(this, "AShooterPlayerController.ClientServerSOTFNotificationCustom(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientServerSOTFNotificationCustom(FString* a0, void* a1, float a2, float a3, void* a4, void* a5, int a6) const
    { return ClientServerSOTFNotificationCustom(*a0, a1, a2, a3, a4, a5, a6); }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ClientServerSOTFNotificationCustom_Implementation(FString&,FLinearColor
    // endereco: casamento de bytes com a build de referencia
    void ClientServerSOTFNotificationCustom_Implementation(const FString& a0, void* a1, float a2, float a3, void* a4, void* a5, int a6) const
    {
        NativeCall<void, void*, void*, float, float, void*, void*, int>(this, "AShooterPlayerController.ClientServerSOTFNotificationCustom_Implementation(FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,int)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientServerSOTFNotificationCustom_Implementation(FString* a0, void* a1, float a2, float a3, void* a4, void* a5, int a6) const
    { ClientServerSOTFNotificationCustom_Implementation(*a0, a1, a2, a3, a4, a5, a6); }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ClientServerSOTFNotification_Implementation(ESTOFNotificationType::Type
    // endereco: casamento de bytes com a build de referencia
    void ClientServerSOTFNotification_Implementation(int a0, const FString& a1, void* a2, float a3, float a4, void* a5, void* a6, bool a7, const FString& a8, void* a9, const FString& a10, void* a11, int a12) const
    {
        NativeCall<void, int, void*, void*, float, float, void*, void*, bool, void*, void*, void*, void*, int>(this, "AShooterPlayerController.ClientServerSOTFNotification_Implementation(ESTOFNotificationType::Type,FString&,FLinearColor,float,float,UTexture2D*,USoundBase*,bool,FString&,TArray<FString,TSizedDefaultAllocator<32>>&,FString&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&,int)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6, a7, const_cast<FString*>(&a8), a9, const_cast<FString*>(&a10), a11, a12);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientServerSOTFNotification_Implementation(int a0, FString* a1, void* a2, float a3, float a4, void* a5, void* a6, bool a7, FString* a8, void* a9, FString* a10, void* a11, int a12) const
    { ClientServerSOTFNotification_Implementation(a0, *a1, a2, a3, a4, a5, a6, a7, *a8, a9, *a10, a11, a12); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetArkTributeLimits(bool,bool,bool,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetArkTributeLimits(bool a0, bool a1, bool a2, int a3, int a4, int a5) const
    {
        NativeCall<void, bool, bool, bool, int, int, int>(this, "AShooterPlayerController.ClientSetArkTributeLimits(bool,bool,bool,int,int,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetArkTributeLimits_Implementation(bool,bool,bool,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetArkTributeLimits_Implementation(bool a0, bool a1, bool a2, int a3, int a4, int a5) const
    {
        NativeCall<void, bool, bool, bool, int, int, int>(this, "AShooterPlayerController.ClientSetArkTributeLimits_Implementation(bool,bool,bool,int,int,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientSetCanEnableCheats(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetCanEnableCheats(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientSetCanEnableCheats(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetCanEnableCheats_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ClientSetCanEnableCheats_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientSetCanEnableCheats_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetContainerFuel_Implementation(APrimalStructureItemContainer*,fl
    // endereco: cache_pdb_25090264
    void ClientSetContainerFuel_Implementation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterPlayerController.ClientSetContainerFuel_Implementation(APrimalStructureItemContainer*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSetControlRotation(UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSetControlRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientSetControlRotation(UE::Math::TRotator<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetHUDAndInitUIScenes(TSubclassOf<AHUD>)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetHUDAndInitUIScenes(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientSetHUDAndInitUIScenes(TSubclassOf<AHUD>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetHUDAndInitUIScenes_Implementation(TSubclassOf<AHUD>)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetHUDAndInitUIScenes_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientSetHUDAndInitUIScenes_Implementation(TSubclassOf<AHUD>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSetNewCosmeticsForNewPlayer_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSetNewCosmeticsForNewPlayer_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ClientSetNewCosmeticsForNewPlayer_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSetPerfCheckLocations(TArray<FString,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSetPerfCheckLocations(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "AShooterPlayerController.ClientSetPerfCheckLocations(TArray<FString,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSetPerfCheckLocations_Implementation(TArray<FString,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSetPerfCheckLocations_Implementation(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "AShooterPlayerController.ClientSetPerfCheckLocations_Implementation(TArray<FString,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientSetPersonalDinoTameCount(int)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetPersonalDinoTameCount(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ClientSetPersonalDinoTameCount(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetPersonalDinoTameCount_Implementation(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientSetPersonalDinoTameCount_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ClientSetPersonalDinoTameCount_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSetSpectatorLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSetSpectatorLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientSetSpectatorLocation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSetSpectatorLocation_Implementation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetSpectatorLocation_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientSetSpectatorLocation_Implementation(UE::Math::TVector<double>)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientShooterWasKicked(FText&)
    // endereco: thunk
    void ClientShooterWasKicked(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientShooterWasKicked(FText&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShooterWasKicked_Implementation(FText&)
    // endereco: casamento de bytes com a build de referencia
    void ClientShooterWasKicked_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientShooterWasKicked_Implementation(FText&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShowCharacterCreationUI(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientShowCharacterCreationUI(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientShowCharacterCreationUI(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShowCharacterCreationUI_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientShowCharacterCreationUI_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ClientShowCharacterCreationUI_Implementation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientShowCustomModConfirmation(__int64,FString&,FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientShowCustomModConfirmation(long long a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, long long, void*, void*>(this, "AShooterPlayerController.ClientShowCustomModConfirmation(__int64,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientShowCustomModConfirmation(long long a0, FString* a1, FString* a2) const
    { ClientShowCustomModConfirmation(a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientShowCustomModConfirmation_Implementation(__int64,FString&,FString
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowCustomModConfirmation_Implementation(long long a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, long long, void*, void*>(this, "AShooterPlayerController.ClientShowCustomModConfirmation_Implementation(__int64,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientShowCustomModConfirmation_Implementation(long long a0, FString* a1, FString* a2) const
    { return ClientShowCustomModConfirmation_Implementation(a0, *a1, *a2); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientShowDLCModPrompt(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ClientShowDLCModPrompt(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.ClientShowDLCModPrompt(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientShowDLCModPrompt(FString* a0, FString* a1, FString* a2) const
    { ClientShowDLCModPrompt(*a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientShowDLCModPrompt_Implementation(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowDLCModPrompt_Implementation(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.ClientShowDLCModPrompt_Implementation(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientShowDLCModPrompt_Implementation(FString* a0, FString* a1, FString* a2) const
    { return ClientShowDLCModPrompt_Implementation(*a0, *a1, *a2); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientShowItemNotification(FItemNetInfo&)
    // endereco: casamento de bytes com a build de referencia
    void ClientShowItemNotification(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientShowItemNotification(FItemNetInfo&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShowLeaderboard(TSubclassOf<ULeaderboard>,FName,TArray<FLeaderboa
    // endereco: casamento de bytes com a build de referencia
    void ClientShowLeaderboard(void* a0, unsigned long long a1, void* a2, bool a3, void* a4) const
    {
        NativeCall<void, void*, unsigned long long, void*, bool, void*>(this, "AShooterPlayerController.ClientShowLeaderboard(TSubclassOf<ULeaderboard>,FName,TArray<FLeaderboardRow,TSizedDefaultAllocator<32>>&,bool,FLeaderboardRow)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShowLeaderboard_Implementation(TSubclassOf<ULeaderboard>,FName,TA
    // endereco: casamento de bytes com a build de referencia
    void ClientShowLeaderboard_Implementation(void* a0, unsigned long long a1, void* a2, bool a3, void* a4) const
    {
        NativeCall<void, void*, unsigned long long, void*, bool, void*>(this, "AShooterPlayerController.ClientShowLeaderboard_Implementation(TSubclassOf<ULeaderboard>,FName,TArray<FLeaderboardRow,TSizedDefaultAllocator<32>>&,bool,FLeaderboardRow)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShowPaintingUI(UObject*)
    // endereco: casamento de bytes com a build de referencia
    void ClientShowPaintingUI(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientShowPaintingUI(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientShowRequiresDLCClassDialog(TSubclassOf<UDLC>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowRequiresDLCClassDialog(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientShowRequiresDLCClassDialog(TSubclassOf<UDLC>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientShowRequiresDLCClassDialog_Implementation(TSubclassOf<UDLC>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowRequiresDLCClassDialog_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientShowRequiresDLCClassDialog_Implementation(TSubclassOf<UDLC>)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientShowRequiresDLCDialog(EEngramGroup::Type)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=5]]
    void ClientShowRequiresDLCDialog(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ClientShowRequiresDLCDialog(EEngramGroup::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientShowRequiresDLCDialog_Implementation(EEngramGroup::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowRequiresDLCDialog_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.ClientShowRequiresDLCDialog_Implementation(EEngramGroup::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientShowSpawnUIForTransferringPlayer(TSubclassOf<AHUD>,unsigned__int6
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowSpawnUIForTransferringPlayer(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned long long, bool>(this, "AShooterPlayerController.ClientShowSpawnUIForTransferringPlayer(TSubclassOf<AHUD>,unsigned__int64,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientShowSpawnUIForTransferringPlayer_Implementation(TSubclassOf<AHUD>
    // endereco: casamento de bytes com a build de referencia
    void ClientShowSpawnUIForTransferringPlayer_Implementation(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "AShooterPlayerController.ClientShowSpawnUIForTransferringPlayer_Implementation(TSubclassOf<AHUD>,unsigned__int64,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientShowTransferredPlayerConfirmationDialog()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ClientShowTransferredPlayerConfirmationDialog() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientShowTransferredPlayerConfirmationDialog()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSimpleMarkTrackedActorInfoUpdated_Implementation()
    // endereco: cache_pdb_25090264
    void ClientSimpleMarkTrackedActorInfoUpdated_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientSimpleMarkTrackedActorInfoUpdated_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientSkillActivationResult(FName,int,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    void ClientSkillActivationResult(unsigned long long a0, int a1, int a2, void* a3) const
    {
        NativeCall<void, unsigned long long, int, int, void*>(this, "AShooterPlayerController.ClientSkillActivationResult(FName,int,int,UObject*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientStartActivity_Implementation(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96+grafo=3/3]]
    void ClientStartActivity_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientStartActivity_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientStartActivity_Implementation(FString* a0) const
    { ClientStartActivity_Implementation(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientStartReceivingTribeLog()
    // endereco: casamento de bytes com a build de referencia
    void ClientStartReceivingTribeLog() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientStartReceivingTribeLog()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientStartReceivingTribeLog_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientStartReceivingTribeLog_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ClientStartReceivingTribeLog_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientStartSurfaceCameraForPassenger(float,float,float,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientStartSurfaceCameraForPassenger(float a0, float a1, float a2, bool a3) const
    {
        NativeCall<void, float, float, float, bool>(this, "AShooterPlayerController.ClientStartSurfaceCameraForPassenger(float,float,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientStartSurfaceCameraForPassenger_Implementation(float,float,float,b
    // endereco: casamento de bytes com a build de referencia
    void ClientStartSurfaceCameraForPassenger_Implementation(float a0, float a1, float a2, bool a3) const
    {
        NativeCall<void, float, float, float, bool>(this, "AShooterPlayerController.ClientStartSurfaceCameraForPassenger_Implementation(float,float,float,bool)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientStopLocalSound(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    void ClientStopLocalSound(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientStopLocalSound(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientStopLocalSound_Implementation(USoundBase*)
    // endereco: cache_pdb_25090264
    void ClientStopLocalSound_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientStopLocalSound_Implementation(USoundBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientSwapActorItems(UPrimalInventoryComponent*,FItemNetID,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSwapActorItems(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, unsigned long long, unsigned long long>(this, "AShooterPlayerController.ClientSwapActorItems(UPrimalInventoryComponent*,FItemNetID,FItemNetID)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientSwapActorItems_Implementation(UPrimalInventoryComponent*,FItemNet
    // endereco: casamento de bytes com a build de referencia
    void ClientSwapActorItems_Implementation(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long>(this, "AShooterPlayerController.ClientSwapActorItems_Implementation(UPrimalInventoryComponent*,FItemNetID,FItemNetID)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientTeamMessage_Implementation(APlayerState*,FString&,FName,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientTeamMessage_Implementation(void* a0, const FString& a1, unsigned long long a2, float a3) const
    {
        NativeCall<void, void*, void*, unsigned long long, float>(this, "AShooterPlayerController.ClientTeamMessage_Implementation(APlayerState*,FString&,FName,float)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientTeamMessage_Implementation(void* a0, FString* a1, unsigned long long a2, float a3) const
    { ClientTeamMessage_Implementation(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientTeleportSpectator(UE::Math::TVector<double>,unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientTeleportSpectator(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientTeleportSpectator(UE::Math::TVector<double>,unsigned__int64)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientTeleportSpectator_Implementation(UE::Math::TVector<double>,unsign
    // endereco: casamento de bytes com a build de referencia
    void ClientTeleportSpectator_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ClientTeleportSpectator_Implementation(UE::Math::TVector<double>,unsigned__int64)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientTeleportSucceeded_Implementation(UE::Math::TVector<double>,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    void ClientTeleportSucceeded_Implementation(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerController.ClientTeleportSucceeded_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUnlockAchievement(FString&,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=186+bytes40+chamadores=9]]
    void ClientUnlockAchievement(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientUnlockAchievement(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientUnlockAchievement(FString* a0, bool a1) const
    { ClientUnlockAchievement(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUnlockAchievement_Implementation(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientUnlockAchievement_Implementation(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientUnlockAchievement_Implementation(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientUnlockAchievement_Implementation(FString* a0, bool a1) const
    { ClientUnlockAchievement_Implementation(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUnlockExplorerNote(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientUnlockExplorerNote(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerController.ClientUnlockExplorerNote(int,bool,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ClientUnlockExplorerNote_V2(int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientUnlockExplorerNote_V2(int a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, int, bool, bool, bool>(this, "AShooterPlayerController.ClientUnlockExplorerNote_V2(int,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientUnlockedShipSkill(FName,APrimalShip*)
    // endereco: casamento de bytes com a build de referencia
    void ClientUnlockedShipSkill(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AShooterPlayerController.ClientUnlockedShipSkill(FName,APrimalShip*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUnlockedShipSkill_Implementation(FName,APrimalShip*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientUnlockedShipSkill_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ClientUnlockedShipSkill_Implementation(FName,APrimalShip*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateCustomActorTrackListEntries_Creatures_Implementation(TArray
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateCustomActorTrackListEntries_Creatures_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientUpdateCustomActorTrackListEntries_Creatures_Implementation(TArray<FCustomTrackedActorInfo,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateCustomActorTrackListEntries_Players_Implementation(TArray<F
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateCustomActorTrackListEntries_Players_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ClientUpdateCustomActorTrackListEntries_Players_Implementation(TArray<FCustomTrackedActorInfo,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateInventoryCraftQueue(UPrimalInventoryComponent*,TArray<FItem
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateInventoryCraftQueue(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ClientUpdateInventoryCraftQueue(UPrimalInventoryComponent*,TArray<FItemCraftQueueEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateInventoryCraftQueue_Implementation(UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateInventoryCraftQueue_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ClientUpdateInventoryCraftQueue_Implementation(UPrimalInventoryComponent*,TArray<FItemCraftQueueEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateInventoryEnableSorting_Implementation(UPrimalInventoryCompo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateInventoryEnableSorting_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.ClientUpdateInventoryEnableSorting_Implementation(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateInventorySortingInputs(UPrimalInventoryComponent*,TArray<TS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateInventorySortingInputs(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.ClientUpdateInventorySortingInputs(UPrimalInventoryComponent*,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateInventorySortingInputs_Implementation(UPrimalInventoryCompo
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=181]]
    BrzPonteiro ClientUpdateInventorySortingInputs_Implementation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.ClientUpdateInventorySortingInputs_Implementation(UPrimalInventoryComponent*,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateItemCustomData(UPrimalInventoryComponent*,FItemNetID,FCusto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateItemCustomData(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AShooterPlayerController.ClientUpdateItemCustomData(UPrimalInventoryComponent*,FItemNetID,FCustomItemData)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateItemCustomData_Implementation(UPrimalInventoryComponent*,FI
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateItemCustomData_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "AShooterPlayerController.ClientUpdateItemCustomData_Implementation(UPrimalInventoryComponent*,FItemNetID,FCustomItemData)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateItemDurability(UPrimalInventoryComponent*,FItemNetID,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateItemDurability(void* a0, unsigned long long a1, float a2) const
    {
        return NativeCall<void*, void*, unsigned long long, float>(this, "AShooterPlayerController.ClientUpdateItemDurability(UPrimalInventoryComponent*,FItemNetID,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateItemDurability_Implementation(UPrimalInventoryComponent*,FI
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateItemDurability_Implementation(void* a0, unsigned long long a1, float a2) const
    {
        NativeCall<void, void*, unsigned long long, float>(this, "AShooterPlayerController.ClientUpdateItemDurability_Implementation(UPrimalInventoryComponent*,FItemNetID,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateItemQuantity(UPrimalInventoryComponent*,FItemNetID,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=63+chamadores=2]]
    BrzPonteiro ClientUpdateItemQuantity(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ClientUpdateItemQuantity(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateItemQuantity_Implementation(UPrimalInventoryComponent*,FIte
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    void ClientUpdateItemQuantity_Implementation(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ClientUpdateItemQuantity_Implementation(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateItemWeaponClipAmmo(UPrimalInventoryComponent*,FItemNetID,in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateItemWeaponClipAmmo(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ClientUpdateItemWeaponClipAmmo(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateItemWeaponClipAmmo_Implementation(UPrimalInventoryComponent
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateItemWeaponClipAmmo_Implementation(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ClientUpdateItemWeaponClipAmmo_Implementation(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUpdateMyPlayerDataStruct(FPrimalPlayerDataStruct)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateMyPlayerDataStruct(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientUpdateMyPlayerDataStruct(FPrimalPlayerDataStruct)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUpdateMyPlayerDataStruct_Implementation(FPrimalPlayerDataStruct)
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateMyPlayerDataStruct_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ClientUpdateMyPlayerDataStruct_Implementation(FPrimalPlayerDataStruct)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUploadAscensionTributeItem(FItemNetInfo&,unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUploadAscensionTributeItem(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientUploadAscensionTributeItem(FItemNetInfo&,unsigned__int64)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUploadAscensionTributeItem_Implementation(FItemNetInfo&,unsigned_
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUploadAscensionTributeItem_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientUploadAscensionTributeItem_Implementation(FItemNetInfo&,unsigned__int64)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUploadedDinosLoaded(TArray<FARKTributeDinoListing,TSizedDefaultAl
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=207+bytes40+grafo=5/5]]
    BrzPonteiro ClientUploadedDinosLoaded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientUploadedDinosLoaded(TArray<FARKTributeDinoListing,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUploadedDinosLoaded_Implementation(TArray<FARKTributeDinoListing,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUploadedDinosLoaded_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ClientUploadedDinosLoaded_Implementation(TArray<FARKTributeDinoListing,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClientUsedActorItem(UPrimalInventoryComponent*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUsedActorItem(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ClientUsedActorItem(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ClientUsedActorItem_Implementation(UPrimalInventoryComponent*,FItemNetI
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=72]]
    void ClientUsedActorItem_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ClientUsedActorItem_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_AddTeamPing(FTeamPingData)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=269+grafo=3/3]]
    void Client_AddTeamPing(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.Client_AddTeamPing(FTeamPingData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_AddTeamPing_Implementation(FTeamPingData)
    // endereco: casamento de bytes com a build de referencia
    void Client_AddTeamPing_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.Client_AddTeamPing_Implementation(FTeamPingData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_GetPlatformNameFromId(unsignedint,FString&)
    // endereco: casamento de bytes com a build de referencia
    void Client_GetPlatformNameFromId(unsigned int a0, const FString& a1) const
    {
        NativeCall<void, unsigned int, void*>(this, "AShooterPlayerController.Client_GetPlatformNameFromId(unsignedint,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Client_GetPlatformNameFromId(unsigned int a0, FString* a1) const
    { Client_GetPlatformNameFromId(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_GetPlatformNameFromId_Implementation(unsignedint,FString&)
    // endereco: casamento de bytes com a build de referencia
    void Client_GetPlatformNameFromId_Implementation(unsigned int a0, const FString& a1) const
    {
        NativeCall<void, unsigned int, void*>(this, "AShooterPlayerController.Client_GetPlatformNameFromId_Implementation(unsignedint,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Client_GetPlatformNameFromId_Implementation(unsigned int a0, FString* a1) const
    { Client_GetPlatformNameFromId_Implementation(a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.Client_OnCannonCharacterFired()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Client_OnCannonCharacterFired() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Client_OnCannonCharacterFired()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Client_OnCannonCharacterFired_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Client_OnCannonCharacterFired_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.Client_OnCannonCharacterFired_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Client_OnCannonSideClaimed(EShipFiringSide)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Client_OnCannonSideClaimed(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.Client_OnCannonSideClaimed(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Client_OnCannonSideClaimed_Implementation(EShipFiringSide)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=11/11]]
    BrzPonteiro Client_OnCannonSideClaimed_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.Client_OnCannonSideClaimed_Implementation(EShipFiringSide)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.Client_OnCannonSideReleased()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Client_OnCannonSideReleased() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Client_OnCannonSideReleased()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Client_OnCannonSideReleased_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82]]
    BrzPonteiro Client_OnCannonSideReleased_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.Client_OnCannonSideReleased_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.Client_ReceiveBuffFromDayCycle(TSubclassOf<APrimalBuff>,ADayCycleManage
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=2]]
    void Client_ReceiveBuffFromDayCycle(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.Client_ReceiveBuffFromDayCycle(TSubclassOf<APrimalBuff>,ADayCycleManager*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_ReceiveBuffFromDayCycle_Implementation(TSubclassOf<APrimalBuff>,
    // endereco: casamento de bytes com a build de referencia
    void Client_ReceiveBuffFromDayCycle_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.Client_ReceiveBuffFromDayCycle_Implementation(TSubclassOf<APrimalBuff>,ADayCycleManager*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Client_ReceiveLastDeathTrackingActorLoc(int,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Client_ReceiveLastDeathTrackingActorLoc(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterPlayerController.Client_ReceiveLastDeathTrackingActorLoc(int,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_ReceiveLastDeathTrackingActorLoc_Implementation(int,UE::Math::TV
    // endereco: cache_pdb_25090264
    void Client_ReceiveLastDeathTrackingActorLoc_Implementation(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterPlayerController.Client_ReceiveLastDeathTrackingActorLoc_Implementation(int,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Client_RecieveBlockedUserIdsFromServer(TArray<unsignedint,TSizedDefault
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Client_RecieveBlockedUserIdsFromServer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.Client_RecieveBlockedUserIdsFromServer(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_RecieveBlockedUserIdsFromServer_Implementation(TArray<unsignedin
    // endereco: casamento de bytes com a build de referencia
    void Client_RecieveBlockedUserIdsFromServer_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.Client_RecieveBlockedUserIdsFromServer_Implementation(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_UpdateRallyPointData(bool,FTeamPingData)
    // endereco: casamento de bytes com a build de referencia
    void Client_UpdateRallyPointData(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.Client_UpdateRallyPointData(bool,FTeamPingData)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Client_UpdateRallyPointData_Implementation(bool,FTeamPingData)
    // endereco: casamento de bytes com a build de referencia
    void Client_UpdateRallyPointData_Implementation(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.Client_UpdateRallyPointData_Implementation(bool,FTeamPingData)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientsideSetActiveWaypointTrackedCreatureViaCharacterIndex(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientsideSetActiveWaypointTrackedCreatureViaCharacterIndex(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ClientsideSetActiveWaypointTrackedCreatureViaCharacterIndex(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientsideSetActiveWaypointTrackedPlayerViaCharacterIndex(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientsideSetActiveWaypointTrackedPlayerViaCharacterIndex(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ClientsideSetActiveWaypointTrackedPlayerViaCharacterIndex(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientsideTogglePOIVisibilityForTrackedCreatureWaypoint(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientsideTogglePOIVisibilityForTrackedCreatureWaypoint(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ClientsideTogglePOIVisibilityForTrackedCreatureWaypoint(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ClientsideTogglePOIVisibilityForTrackedPlayerWaypoint(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientsideTogglePOIVisibilityForTrackedPlayerWaypoint(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ClientsideTogglePOIVisibilityForTrackedPlayerWaypoint(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ClubArkCheckProfileLoadedForLogin()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClubArkCheckProfileLoadedForLogin() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ClubArkCheckProfileLoadedForLogin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ConditionalSaveProfile()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ConditionalSaveProfile() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ConditionalSaveProfile()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ConditonalEndGamepadModiferState()
    // endereco: casamento de bytes com a build de referencia
    void ConditonalEndGamepadModiferState() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ConditonalEndGamepadModiferState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ConsoleCommand(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ConsoleCommand(void* retorno, const FString& a0, bool a1) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerController.ConsoleCommand(FString&,bool)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ConsoleCommand(void* retorno, FString* a0, bool a1) const
    { ConsoleCommand(retorno, *a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsEndInventory()
    // endereco: cache_pdb_25090264
    void ControlsEndInventory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsEndInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsEndJump()
    // endereco: cache_pdb_25090264
    void ControlsEndJump() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsEndJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsEndReload()
    // endereco: cache_pdb_25090264
    void ControlsEndReload() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsEndReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsEndUse()
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=196+grafo=9/9]]
    void ControlsEndUse() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsEndUse()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsStartInventory()
    // endereco: cache_pdb_25090264
    void ControlsStartInventory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsStartInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsStartJump()
    // endereco: cache_pdb_25090264
    void ControlsStartJump() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsStartJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsStartMap()
    // endereco: cache_pdb_25090264
    void ControlsStartMap() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsStartMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsStartReload()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=754+grafo=8/8]]
    void ControlsStartReload() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsStartReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsStartUse()
    // endereco: cache_pdb_25090264
    void ControlsStartUse() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsStartUse()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ControlsStopMap()
    // endereco: cache_pdb_25090264
    void ControlsStopMap() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ControlsStopMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CopyCoordsToClipboard()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=742+grafo=8/8]]
    void CopyCoordsToClipboard() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CopyCoordsToClipboard()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.CopyWorldBuffStatus()
    // endereco: casamento de bytes com a build de referencia
    void CopyWorldBuffStatus() const
    {
        NativeCall<void>(this, "AShooterPlayerController.CopyWorldBuffStatus()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DebugCheckSeven(bool)
    // endereco: casamento de bytes com a build de referencia
    void DebugCheckSeven(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.DebugCheckSeven(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DelayedNetCleanup()
    // endereco: cache_pdb_25090264
    void DelayedNetCleanup() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DelayedNetCleanup()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DisableEnemyInvisible()
    // endereco: cache_pdb_25090264
    void DisableEnemyInvisible() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DisableEnemyInvisible()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DisableSpectator()
    // endereco: casamento de bytes com a build de referencia
    void DisableSpectator() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DisableSpectator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DisableStreamingSource()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=429+grafo=6/6]]
    void DisableStreamingSource() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DisableStreamingSource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DisallowPlayerToJoinNoCheck(FString&)
    // endereco: cache_pdb_25090264
    void DisallowPlayerToJoinNoCheck(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.DisallowPlayerToJoinNoCheck(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void DisallowPlayerToJoinNoCheck(FString* a0) const
    { DisallowPlayerToJoinNoCheck(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DisconnectVoiceUser(bool)
    // endereco: casamento de bytes com a build de referencia
    void DisconnectVoiceUser(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.DisconnectVoiceUser(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DoCrash()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DoCrash() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DoCrash()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.DoPlayInstigatorVO(AActor*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoPlayInstigatorVO(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.DoPlayInstigatorVO(AActor*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.DoPlayNextInstigatorVO()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    BrzPonteiro DoPlayNextInstigatorVO() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.DoPlayNextInstigatorVO()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.DoPlayerCommand(FString)
    // endereco: casamento de bytes com a build de referencia
    void DoPlayerCommand(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.DoPlayerCommand(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void DoPlayerCommand(FString* a0) const
    { DoPlayerCommand(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DoServerCheckUnfreeze_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void DoServerCheckUnfreeze_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DoServerCheckUnfreeze_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.DoesPlayerOwnPing(AShooterPlayerController*,int)
    // endereco: cache_pdb_25090264
    bool DoesPlayerOwnPing(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "AShooterPlayerController.DoesPlayerOwnPing(AShooterPlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DownloadTransferredPlayerCharacter()
    // endereco: casamento de bytes com a build de referencia
    void DownloadTransferredPlayerCharacter() const
    {
        NativeCall<void>(this, "AShooterPlayerController.DownloadTransferredPlayerCharacter()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.DrawCrosshairOnScreenBP()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawCrosshairOnScreenBP() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.DrawCrosshairOnScreenBP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.DrawMultiUsePingEntry(int,FName,UCanvas*,UE::Math::TVector2<double>&)
    // endereco: casamento de bytes com a build de referencia
    void DrawMultiUsePingEntry(int a0, unsigned long long a1, void* a2, void* a3) const
    {
        NativeCall<void, int, unsigned long long, void*, void*>(this, "AShooterPlayerController.DrawMultiUsePingEntry(int,FName,UCanvas*,UE::Math::TVector2<double>&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.EditorReconnect()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void EditorReconnect() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EditorReconnect()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EnableSpectator(bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableSpectator(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EnableSpectator(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EnableStreamingSource()
    // endereco: casamento de bytes com a build de referencia
    void EnableStreamingSource() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EnableStreamingSource()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.EnableVesselSimpleInterpMode(bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableVesselSimpleInterpMode(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EnableVesselSimpleInterpMode(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndAArkGamepadDpadUp()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    void EndAArkGamepadDpadUp() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndAArkGamepadDpadUp()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadBackButton()
    // endereco: casamento de bytes com a build de referencia
    void EndArkGamepadBackButton() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadBackButton()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadDpadDown()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=33]]
    void EndArkGamepadDpadDown() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadDpadDown()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadDpadRight()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=75]]
    void EndArkGamepadDpadRight() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadDpadRight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadFaceButtonBottom()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void EndArkGamepadFaceButtonBottom() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonBottom()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadFaceButtonLeft()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=163+grafo=3/3]]
    void EndArkGamepadFaceButtonLeft() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonLeft()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadFaceButtonRight()
    // endereco: casamento de bytes com a build de referencia
    void EndArkGamepadFaceButtonRight() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonRight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadLeftShoulder()
    // endereco: casamento de bytes com a build de referencia
    void EndArkGamepadLeftShoulder() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadLeftShoulder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndArkGamepadRightShoulder()
    // endereco: casamento de bytes com a build de referencia
    void EndArkGamepadRightShoulder() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadRightShoulder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndEmoteSelection(bool)
    // endereco: casamento de bytes com a build de referencia
    void EndEmoteSelection(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EndEmoteSelection(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndInventoryRadialSelector(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void EndInventoryRadialSelector(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EndInventoryRadialSelector(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.EndMultiuseWheelForActor(bool,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void EndMultiuseWheelForActor(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.EndMultiuseWheelForActor(bool,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EndWhistleSelectionInput(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=250+grafo=6/6]]
    void EndWhistleSelectionInput(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EndWhistleSelectionInput(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EnemyInVisible(bool)
    // endereco: cache_pdb_25090264
    void EnemyInVisible(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EnemyInVisible(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.EnforcementHighlight(bool)
    // endereco: cache_pdb_25090264
    void EnforcementHighlight(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.EnforcementHighlight(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.EnvQA()
    // endereco: casamento de bytes com a build de referencia
    void EnvQA() const
    {
        NativeCall<void>(this, "AShooterPlayerController.EnvQA()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ExportDinoData(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ExportDinoData(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ExportDinoData(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FailedToSpawnPawn()
    // endereco: casamento de bytes com a build de referencia
    void FailedToSpawnPawn() const
    {
        NativeCall<void>(this, "AShooterPlayerController.FailedToSpawnPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FinalFlushLevelStreaming()
    // endereco: casamento de bytes com a build de referencia
    void FinalFlushLevelStreaming() const
    {
        NativeCall<void>(this, "AShooterPlayerController.FinalFlushLevelStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FindGetTrackedActorFavoritedIndex(int,TEnumAsByte<ETrackedActorCategory
    // endereco: cache_pdb_25090264
    int FindGetTrackedActorFavoritedIndex(int a0, unsigned char a1) const
    {
        return NativeCall<int, int, unsigned char>(this, "AShooterPlayerController.FindGetTrackedActorFavoritedIndex(int,TEnumAsByte<ETrackedActorCategory::Type>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.FindGetTrackedActorFavoritedIndexID(int,int)
    // endereco: cache_pdb_25090264
    int FindGetTrackedActorFavoritedIndexID(int a0, int a1) const
    {
        return NativeCall<int, int, int>(this, "AShooterPlayerController.FindGetTrackedActorFavoritedIndexID(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FindGetTrackedActorWaypointIndex(int,TEnumAsByte<ETrackedActorCategory:
    // endereco: cache_pdb_25090264
    int FindGetTrackedActorWaypointIndex(int a0, unsigned char a1) const
    {
        return NativeCall<int, int, unsigned char>(this, "AShooterPlayerController.FindGetTrackedActorWaypointIndex(int,TEnumAsByte<ETrackedActorCategory::Type>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.FindGetTrackedActorWaypointIndexID(int,int)
    // endereco: cache_pdb_25090264
    int FindGetTrackedActorWaypointIndexID(int a0, int a1) const
    {
        return NativeCall<int, int, int>(this, "AShooterPlayerController.FindGetTrackedActorWaypointIndexID(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FinishInputBlockingTimeout()
    // endereco: cache_pdb_25090264
    void FinishInputBlockingTimeout() const
    {
        NativeCall<void>(this, "AShooterPlayerController.FinishInputBlockingTimeout()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FlushLevelStreaming()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=577+grafo=12/12]]
    void FlushLevelStreaming() const
    {
        NativeCall<void>(this, "AShooterPlayerController.FlushLevelStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FlushPrimalStats()
    // endereco: casamento de bytes com a build de referencia
    void FlushPrimalStats() const
    {
        NativeCall<void>(this, "AShooterPlayerController.FlushPrimalStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ForceCraftPressed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void ForceCraftPressed() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ForceCraftPressed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ForceCraftReleased()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void ForceCraftReleased() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ForceCraftReleased()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ForceTame(bool,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ForceTame(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.ForceTame(bool,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ForceTribes(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ForceTribes(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.ForceTribes(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ForceTribes(FString* a0, FString* a1, FString* a2) const
    { ForceTribes(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ForceUnstasisAtLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void ForceUnstasisAtLocation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ForceUnstasisAtLocation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.FormatTextWithKeyBindings(FString,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void FormatTextWithKeyBindings(void* retorno, const FString& a0, bool a1, int a2) const
    {
        NativeCall<void, void*, void*, bool, int>(this, "AShooterPlayerController.FormatTextWithKeyBindings(FString,bool,int)", retorno, const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void FormatTextWithKeyBindings(void* retorno, FString* a0, bool a1, int a2) const
    { FormatTextWithKeyBindings(retorno, *a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetActiveMission()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AMissionType* GetActiveMission() const
    {
        return NativeCall<AMissionType*>(this, "AShooterPlayerController.GetActiveMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<dou
    // endereco: casamento de bytes com a build de referencia
    void GetActorEyesViewPoint(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetAimedUseActor(UActorComponent**,int*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* GetAimedUseActor(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<AActor*, void*, void*, bool, bool>(this, "AShooterPlayerController.GetAimedUseActor(UActorComponent**,int*,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetAimedUseActor_Internal(UActorComponent**,int*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* GetAimedUseActor_Internal(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<AActor*, void*, void*, bool, bool>(this, "AShooterPlayerController.GetAimedUseActor_Internal(UActorComponent**,int*,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetAllAimedHarvestActors(float,TArray<AActor*,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    bool GetAllAimedHarvestActors(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "AShooterPlayerController.GetAllAimedHarvestActors(float,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetAllCachedTeamTames()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllCachedTeamTames() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetAllCachedTeamTames()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetAllMatinees()
    // endereco: casamento de bytes com a build de referencia
    void GetAllMatinees() const
    {
        NativeCall<void>(this, "AShooterPlayerController.GetAllMatinees()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetAudioListenerPosition(UE::Math::TVector<double>&,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    void GetAudioListenerPosition(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.GetAudioListenerPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetBestScoreForMission(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBestScoreForMission(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.GetBestScoreForMission(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetCheatsCommands()
    // endereco: casamento de bytes com a build de referencia
    void GetCheatsCommands(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetCheatsCommands()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCompanionBuff()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=180+chamadores=7]]
    UObject* GetCompanionBuff() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetCompanionBuff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetControllerPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AShooterCharacter* GetControllerPlayer() const
    {
        return NativeCall<AShooterCharacter*>(this, "AShooterPlayerController.GetControllerPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetControllingCinematic()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    APrimalCinematicActor* GetControllingCinematic() const
    {
        return NativeCall<APrimalCinematicActor*>(this, "AShooterPlayerController.GetControllingCinematic()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCurrentBuffForSkill(FName)
    // endereco: casamento de bytes com a build de referencia
    UClass* GetCurrentBuffForSkill(unsigned long long a0) const
    {
        return NativeCall<UClass*, unsigned long long>(this, "AShooterPlayerController.GetCurrentBuffForSkill(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCurrentMilestoneAsset(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UObject* GetCurrentMilestoneAsset(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "AShooterPlayerController.GetCurrentMilestoneAsset(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCurrentMilestoneAssets()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentMilestoneAssets() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetCurrentMilestoneAssets()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetCurrentMilestoneBranches(FName,TArray<FPrimalMilestoneBranch,TSizedD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentMilestoneBranches(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.GetCurrentMilestoneBranches(FName,TArray<FPrimalMilestoneBranch,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCurrentMilestoneLevelAndIndex(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentMilestoneLevelAndIndex(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.GetCurrentMilestoneLevelAndIndex(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetCurrentMultiUseWheelCategory()
    // endereco: casamento de bytes com a build de referencia
    int GetCurrentMultiUseWheelCategory() const
    {
        return NativeCall<int>(this, "AShooterPlayerController.GetCurrentMultiUseWheelCategory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetCustomCloudData(FName,FCustomItemData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCustomCloudData(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.GetCustomCloudData(FName,FCustomItemData&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCustomCosmeticUISelectedItemLocal()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    UObject* GetCustomCosmeticUISelectedItemLocal() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetCustomCosmeticUISelectedItemLocal()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCustomCosmeticUISelectedSkinLocal()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    UObject* GetCustomCosmeticUISelectedSkinLocal() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetCustomCosmeticUISelectedSkinLocal()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetCustomItemsClubARK()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCustomItemsClubARK() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetCustomItemsClubARK()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetCustomTooltipActor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCustomTooltipActor() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetCustomTooltipActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetDesiredRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=111]]
    BrzPonteiro GetDesiredRotation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetDesiredRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetDisplayedNameForPlayer(unsignedint,FString,bool&)
    // endereco: casamento de bytes com a build de referencia
    void GetDisplayedNameForPlayer(void* retorno, unsigned int a0, const FString& a1, void* a2) const
    {
        NativeCall<void, void*, unsigned int, void*, void*>(this, "AShooterPlayerController.GetDisplayedNameForPlayer(unsignedint,FString,bool&)", retorno, a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetDisplayedNameForPlayer(void* retorno, unsigned int a0, FString* a1, void* a2) const
    { GetDisplayedNameForPlayer(retorno, a0, *a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetExplorerNoteEntry(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExplorerNoteEntry(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.GetExplorerNoteEntry(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetFocalLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFocalLocation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetFocalLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetHeldItemSlots()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHeldItemSlots() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetHeldItemSlots()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetIntFromTrackedActorCategoryEnum(TEnumAsByte<ETrackedActorCategory::T
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetIntFromTrackedActorCategoryEnum(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "AShooterPlayerController.GetIntFromTrackedActorCategoryEnum(TEnumAsByte<ETrackedActorCategory::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetInventoryUISelectedItemLocal()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    UObject* GetInventoryUISelectedItemLocal() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetInventoryUISelectedItemLocal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetInventoryUISelectedItemRemote()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UPrimalItem* GetInventoryUISelectedItemRemote() const
    {
        return NativeCall<UPrimalItem*>(this, "AShooterPlayerController.GetInventoryUISelectedItemRemote()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetInventoryUISelectedSkinLocal()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    UPrimalItem* GetInventoryUISelectedSkinLocal() const
    {
        return NativeCall<UPrimalItem*>(this, "AShooterPlayerController.GetInventoryUISelectedSkinLocal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetIsMissionWaypointActive()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetIsMissionWaypointActive() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetIsMissionWaypointActive()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetLastInventoryRetrievalTime()
    // endereco: cache_pdb_25090264
    double GetLastInventoryRetrievalTime() const
    {
        return NativeCall<double>(this, "AShooterPlayerController.GetLastInventoryRetrievalTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetLatestScoreForMission(FName)
    // endereco: casamento de bytes com a build de referencia
    void GetLatestScoreForMission(void* retorno, unsigned long long a0) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.GetLatestScoreForMission(FName)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetLevelStreamingPawnViewLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelStreamingPawnViewLocation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetLevelStreamingPawnViewLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAlloca
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=535+grafo=20/20]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // ── NAO EXISTE COMO FUNCAO: e' `inline` na Unreal ──────────────
    //
    //   AShooterPlayerController.GetLinkedPlayerID() nao tem endereco nesta build e nao vai ter:
    //   o compilador dissolve o getter dentro de quem chama.
    //   Ate' 09/09/2026 esta chamada devolvia o ZERO do tipo.
    //
    //   Agora le' o campo, pela reflexao viva, como o resto do SDK.
    long long GetLinkedPlayerID() const { return LinkedPlayerIDField(); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetLocalPlayerViewSize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLocalPlayerViewSize() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetLocalPlayerViewSize()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetMapDinos()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMapDinos() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetMapDinos()");
    }

    // jogo_confirmou_dump
    //   AShooterPlayerController.GetMapMarkerPOIs()
    // endereco: casamento de bytes com a build de referencia
    void GetMapMarkerPOIs() const
    {
        NativeCall<void>(this, "AShooterPlayerController.GetMapMarkerPOIs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetMaxUseDistance(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxUseDistance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.GetMaxUseDistance(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetMilestoneAdditionalClasses(FName,TArray<TSoftClassPtr<UObject>,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMilestoneAdditionalClasses(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.GetMilestoneAdditionalClasses(FName,TArray<TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetMilestoneProgress(FName)
    // endereco: cache_pdb_25090264
    float GetMilestoneProgress(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "AShooterPlayerController.GetMilestoneProgress(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetMilestoneProgressAmount(FName)
    // endereco: casamento de bytes com a build de referencia
    int GetMilestoneProgressAmount(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "AShooterPlayerController.GetMilestoneProgressAmount(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetMilestoneRewardForLevel(FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMilestoneRewardForLevel(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "AShooterPlayerController.GetMilestoneRewardForLevel(FName,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetMissionWaypointID()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetMissionWaypointID() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetMissionWaypointID()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AShooterPlayerController.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetMultiUseEntriesForTarget(IMultiUseInterface*,TArray<FMultiUseEntry,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntriesForTarget(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AShooterPlayerController.GetMultiUseEntriesForTarget(IMultiUseInterface*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetNearbyPOIs()
    // endereco: casamento de bytes com a build de referencia
    void GetNearbyPOIs(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetNearbyPOIs()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetNewValidMilestoneIndex(FName,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1834+chamadores=2+grafo=15/15]]
    int GetNewValidMilestoneIndex(unsigned long long a0, int a1) const
    {
        return NativeCall<int, unsigned long long, int>(this, "AShooterPlayerController.GetNewValidMilestoneIndex(FName,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetOwnerTradeItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOwnerTradeItems() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetOwnerTradeItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPawnInventoryComponent()
    // endereco: casamento de bytes com a build de referencia
    UPrimalInventoryComponent* GetPawnInventoryComponent() const
    {
        return NativeCall<UPrimalInventoryComponent*>(this, "AShooterPlayerController.GetPawnInventoryComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetPersistentProfileItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPersistentProfileItems() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetPersistentProfileItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPersistentUser()
    // endereco: casamento de bytes com a build de referencia
    UShooterPersistentUser* GetPersistentUser() const
    {
        return NativeCall<UShooterPersistentUser*>(this, "AShooterPlayerController.GetPersistentUser()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPersonalTameLimitString()
    // endereco: casamento de bytes com a build de referencia
    void GetPersonalTameLimitString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetPersonalTameLimitString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetPingIconForComponent(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetPingIconForComponent(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "AShooterPlayerController.GetPingIconForComponent(UPrimitiveComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPlatformNameFromId(unsignedint)
    // endereco: casamento de bytes com a build de referencia
    void GetPlatformNameFromId(void* retorno, unsigned int a0) const
    {
        NativeCall<void, void*, unsigned int>(this, "AShooterPlayerController.GetPlatformNameFromId(unsignedint)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetPlayerCharacterEvenIfDead()
    // endereco: cache_pdb_25090264
    UObject* GetPlayerCharacterEvenIfDead() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetPlayerCharacterEvenIfDead()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPlayerCharacterName()
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerCharacterName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetPlayerCharacterName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPlayerControllerViewerOverride()
    // endereco: casamento de bytes com a build de referencia
    AActor* GetPlayerControllerViewerOverride() const
    {
        return NativeCall<AActor*>(this, "AShooterPlayerController.GetPlayerControllerViewerOverride()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetPlayerFinishedNamedEvent(FName)
    // endereco: cache_pdb_25090264
    bool GetPlayerFinishedNamedEvent(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.GetPlayerFinishedNamedEvent(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPlayerInventory()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UPrimalInventoryComponent* GetPlayerInventory() const
    {
        return NativeCall<UPrimalInventoryComponent*>(this, "AShooterPlayerController.GetPlayerInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPlayerViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerViewPoint(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AShooterPlayerController.GetPlayerViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetPlayerViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRot
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerViewPointNoModifiers(void* a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.GetPlayerViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetPotentialBountiesForClass(TSubclassOf<UObject>,EPrimalMilestoneType)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetPotentialBountiesForClass(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterPlayerController.GetPotentialBountiesForClass(TSubclassOf<UObject>,EPrimalMilestoneType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetPotentialBountiesForClassAndTypes(TSubclassOf<UObject>,TArray<EPrima
    // endereco: cache_pdb_25090264
    BrzPonteiro GetPotentialBountiesForClassAndTypes(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.GetPotentialBountiesForClassAndTypes(TSubclassOf<UObject>,TArray<EPrimalMilestoneType,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetPotentialMilestonesForClass(TSubclassOf<UObject>,EPrimalMilestoneTyp
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPotentialMilestonesForClass(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterPlayerController.GetPotentialMilestonesForClass(TSubclassOf<UObject>,EPrimalMilestoneType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetPotentialMilestonesForClassAndTypes(TSubclassOf<UObject>,TArray<EPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPotentialMilestonesForClassAndTypes(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.GetPotentialMilestonesForClassAndTypes(TSubclassOf<UObject>,TArray<EPrimalMilestoneType,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetPotentialMilestonesForClassWithData(TSubclassOf<UObject>,EPrimalMile
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPotentialMilestonesForClassWithData(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "AShooterPlayerController.GetPotentialMilestonesForClassWithData(TSubclassOf<UObject>,EPrimalMilestoneType,TArray<FPrimalMilestone,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetPotentialMilestonesForClassWithData(TSubclassOf<UObject>,EPrimalMile
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPotentialMilestonesForClassWithData(void* a0, int a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, int, void*, void*>(this, "AShooterPlayerController.GetPotentialMilestonesForClassWithData(TSubclassOf<UObject>,EPrimalMilestoneType,TArray<FPrimalMilestone,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderCurrentBuffClassForSkill_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderCurrentBuffClassForSkill_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.GetProviderCurrentBuffClassForSkill_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderFreeSkillPoints_Implementation(AShooterPlayerController*,FNa
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderFreeSkillPoints_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.GetProviderFreeSkillPoints_Implementation(AShooterPlayerController*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderSkillBuffTargets_Implementation(ESkillBuffAplicationType,ASh
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    BrzPonteiro GetProviderSkillBuffTargets_Implementation(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterPlayerController.GetProviderSkillBuffTargets_Implementation(ESkillBuffAplicationType,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderSkillCooldown_Implementation(FName,FSkillCooldown&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=79]]
    BrzPonteiro GetProviderSkillCooldown_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.GetProviderSkillCooldown_Implementation(FName,FSkillCooldown&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderSkillData(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderSkillData(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.GetProviderSkillData(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderSkillModifier_Implementation(FName,FName,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderSkillModifier_Implementation(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*>(this, "AShooterPlayerController.GetProviderSkillModifier_Implementation(FName,FName,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderSkillPointsSpent_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderSkillPointsSpent_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.GetProviderSkillPointsSpent_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderSkillRank_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderSkillRank_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.GetProviderSkillRank_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName,TSizedDef
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetProviderUnlockedSkillsAndRanks_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetRadioFrequencies()
    // endereco: casamento de bytes com a build de referencia
    void GetRadioFrequencies(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetRadioFrequencies()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetReceiverTradeItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetReceiverTradeItems() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetReceiverTradeItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetResponsibleDamager(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=107]]
    APawn* GetResponsibleDamager(void* a0) const
    {
        return NativeCall<APawn*, void*>(this, "AShooterPlayerController.GetResponsibleDamager(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetRotationForPawnMovementInput(APrimalCharacter*,UE::Math::TRotator<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRotationForPawnMovementInput(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.GetRotationForPawnMovementInput(APrimalCharacter*,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetSkillBuffTargets(ESkillBuffAplicationType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkillBuffTargets(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.GetSkillBuffTargets(ESkillBuffAplicationType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetSkillModifier(FName,FName,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkillModifier(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*>(this, "AShooterPlayerController.GetSkillModifier(FName,FName,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetSkillUnlockedAndRank(FName,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkillUnlockedAndRank(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.GetSkillUnlockedAndRank(FName,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetStreamingSourcesInternal(TArray<FWorldPartitionStreamingSource,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSourcesInternal(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.GetStreamingSourcesInternal(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetSubscribedAppIds()
    // endereco: casamento de bytes com a build de referencia
    int GetSubscribedAppIds() const
    {
        return NativeCall<int>(this, "AShooterPlayerController.GetSubscribedAppIds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetTamedDinosNearBy(TArray<APrimalDinoCharacter*,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    void GetTamedDinosNearBy(void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, void*>(this, "AShooterPlayerController.GetTamedDinosNearBy(TArray<APrimalDinoCharacter*,TSizedDefaultAllocator<32>>&,float,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetTamedDinosNearBy(TArray<TWeakObjectPtr<APrimalDinoCharacter,FWeakObj
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTamedDinosNearBy(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.GetTamedDinosNearBy(TArray<TWeakObjectPtr<APrimalDinoCharacter,FWeakObjectPtr>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetTeamPingSettingsByType(TEnumAsByte<ETeamPingType::Type>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTeamPingSettingsByType(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "AShooterPlayerController.GetTeamPingSettingsByType(TEnumAsByte<ETeamPingType::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetTrackedActorCategoryEnumFromInt(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    unsigned char GetTrackedActorCategoryEnumFromInt(int a0) const
    {
        return NativeCall<unsigned char, int>(this, "AShooterPlayerController.GetTrackedActorCategoryEnumFromInt(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetTradeOptionsAvailable()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTradeOptionsAvailable() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetTradeOptionsAvailable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetUIHidingSequenceDirector()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=88]]
    BrzPonteiro GetUIHidingSequenceDirector() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetUIHidingSequenceDirector()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetUniqueNetIdAsString()
    // endereco: casamento de bytes com a build de referencia
    void GetUniqueNetIdAsString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetUniqueNetIdAsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetUniqueNetIdAsUINT64()
    // endereco: casamento de bytes com a build de referencia
    unsigned long long GetUniqueNetIdAsUINT64() const
    {
        return NativeCall<unsigned long long>(this, "AShooterPlayerController.GetUniqueNetIdAsUINT64()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetUniqueNetIdPtr()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUniqueNetIdPtr() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetUniqueNetIdPtr()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.GetUseLaunchShoulderMountedDinoOverride()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUseLaunchShoulderMountedDinoOverride() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.GetUseLaunchShoulderMountedDinoOverride()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetViewLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetViewLocation(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GetViewLocation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GetViewTarget()
    // endereco: cache_pdb_25090264
    AActor* GetViewTarget() const
    {
        return NativeCall<AActor*>(this, "AShooterPlayerController.GetViewTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetViewingInventory()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetViewingInventory() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetViewingInventory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GetViewingInventoryUI()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetViewingInventoryUI() const
    {
        return NativeCall<UObject*>(this, "AShooterPlayerController.GetViewingInventoryUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveActorToMe(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveActorToMe(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.GiveActorToMe(AActor*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GiveColors(int)
    // endereco: casamento de bytes com a build de referencia
    void GiveColors(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.GiveColors(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveCryoItemAndCaptureDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void GiveCryoItemAndCaptureDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.GiveCryoItemAndCaptureDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveEngrams(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveEngrams(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterPlayerController.GiveEngrams(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveFast(FName&,int,float,bool,float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GiveFast(const FName& a0, int a1, float a2, bool a3, float a4, bool a5, bool a6) const
    {
        return NativeCall<bool, void*, int, float, bool, float, bool, bool>(this, "AShooterPlayerController.GiveFast(FName&,int,float,bool,float,bool,bool)", const_cast<FName*>(&a0), a1, a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GiveFast(FName* a0, int a1, float a2, bool a3, float a4, bool a5, bool a6) const
    { return GiveFast(*a0, a1, a2, a3, a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveItem(FString&,int,float,bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    bool GiveItem(const FString& a0, int a1, float a2, bool a3, bool a4, float a5) const
    {
        return NativeCall<bool, void*, int, float, bool, bool, float>(this, "AShooterPlayerController.GiveItem(FString&,int,float,bool,bool,float)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GiveItem(FString* a0, int a1, float a2, bool a3, bool a4, float a5) const
    { return GiveItem(*a0, a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveItem(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,FString&,int,
    // endereco: casamento de bytes com a build de referencia
    bool GiveItem(void* a0, const FString& a1, int a2, float a3, bool a4, bool a5, float a6) const
    {
        return NativeCall<bool, void*, void*, int, float, bool, bool, float>(this, "AShooterPlayerController.GiveItem(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,FString&,int,float,bool,bool,float)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GiveItem(void* a0, FString* a1, int a2, float a3, bool a4, bool a5, float a6) const
    { return GiveItem(a0, *a1, a2, a3, a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveItemNum(int,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GiveItemNum(int a0, int a1, float a2, bool a3) const
    {
        return NativeCall<bool, int, int, float, bool>(this, "AShooterPlayerController.GiveItemNum(int,int,float,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GivePersistentProfileItems()
    // endereco: casamento de bytes com a build de referencia
    bool GivePersistentProfileItems() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.GivePersistentProfileItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveResources()
    // endereco: casamento de bytes com a build de referencia
    void GiveResources() const
    {
        NativeCall<void>(this, "AShooterPlayerController.GiveResources()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveSlotItem(FString&,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool GiveSlotItem(const FString& a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "AShooterPlayerController.GiveSlotItem(FString&,int,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GiveSlotItem(FString* a0, int a1, int a2) const
    { return GiveSlotItem(*a0, a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.GiveSlotItemNum(int,int,int)
    // endereco: thunk
    bool GiveSlotItemNum(int a0, int a1, int a2) const
    {
        return NativeCall<bool, int, int, int>(this, "AShooterPlayerController.GiveSlotItemNum(int,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.GiveToMe()
    // endereco: casamento de bytes com a build de referencia
    void GiveToMe() const
    {
        NativeCall<void>(this, "AShooterPlayerController.GiveToMe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HandleRespawned_Implementation(APawn*,bool)
    // endereco: casamento de bytes com a build de referencia
    void HandleRespawned_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.HandleRespawned_Implementation(APawn*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HarvestedElement(FAttachedInstancedHarvestingElement*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void HarvestedElement(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "AShooterPlayerController.HarvestedElement(FAttachedInstancedHarvestingElement*,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.HasBestScoreForMission(FName)
    // endereco: casamento de bytes com a build de referencia
    bool HasBestScoreForMission(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.HasBestScoreForMission(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.HasCustomCloudData(FName)
    // endereco: casamento de bytes com a build de referencia
    bool HasCustomCloudData(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.HasCustomCloudData(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.HasGodMode()
    // endereco: cache_pdb_25090264
    bool HasGodMode() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.HasGodMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HasInstantHarvest()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool HasInstantHarvest() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.HasInstantHarvest()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HasRadio(bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasRadio(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterPlayerController.HasRadio(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.HasReachedClubARKInventoryLimit()
    // endereco: casamento de bytes com a build de referencia
    bool HasReachedClubARKInventoryLimit() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.HasReachedClubARKInventoryLimit()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.HavePingDataOfPlayer(int,int&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro HavePingDataOfPlayer(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterPlayerController.HavePingDataOfPlayer(int,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HiWarp(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    void HiWarp(const FString& a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.HiWarp(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HiWarp(FString* a0, int a1) const
    { HiWarp(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HibernationReport(FString&)
    // endereco: casamento de bytes com a build de referencia
    void HibernationReport(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.HibernationReport(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HibernationReport(FString* a0) const
    { HibernationReport(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HideChat()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=41]]
    void HideChat() const
    {
        NativeCall<void>(this, "AShooterPlayerController.HideChat()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HideFPVMesh()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=310]]
    void HideFPVMesh() const
    {
        NativeCall<void>(this, "AShooterPlayerController.HideFPVMesh()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.HideRiders(bool)
    // endereco: casamento de bytes com a build de referencia
    void HideRiders(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.HideRiders(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.HttpLoadMapPerformanceLocationsRequestComplete(TSharedPtr<IHttpRequest,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HttpLoadMapPerformanceLocationsRequestComplete(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerController.HttpLoadMapPerformanceLocationsRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IncrementPrimalStats(EPrimalStatsValueTypes::Type)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=541+grafo=9/9]]
    void IncrementPrimalStats(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.IncrementPrimalStats(EPrimalStatsValueTypes::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IncrementStat(EPrimalGDKStat::Type)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=3]]
    void IncrementStat(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.IncrementStat(EPrimalGDKStat::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.InfiniteStats()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void InfiniteStats() const
    {
        NativeCall<void>(this, "AShooterPlayerController.InfiniteStats()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.InitCharacterPainting(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InitCharacterPainting(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.InitCharacterPainting(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.InitCharacterPainting_Implementation(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void InitCharacterPainting_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.InitCharacterPainting_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.InitHUD(bool)
    // endereco: cache_pdb_25090264
    void InitHUD(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.InitHUD(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.InitInputSystem()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=120]]
    void InitInputSystem() const
    {
        NativeCall<void>(this, "AShooterPlayerController.InitInputSystem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.InputDismissPOI(APlayerController*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=75]]
    void InputDismissPOI(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.InputDismissPOI(APlayerController*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.InputKey(FInputKeyParams&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=195+grafo=5/5]]
    BrzPonteiro InputKey(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.InputKey(FInputKeyParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Internal_UpdateOwnedPMXM(TArray<__int64,TSizedDefaultAllocator<32>>&,bo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Internal_UpdateOwnedPMXM(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerController.Internal_UpdateOwnedPMXM(TArray<__int64,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsAtPersonalTameLimit(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsAtPersonalTameLimit(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterPlayerController.IsAtPersonalTameLimit(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsEmoteUnlocked(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsEmoteUnlocked(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.IsEmoteUnlocked(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsFirstLocalPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=97]]
    bool IsFirstLocalPlayer() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsFirstLocalPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsFirstLocalPlayerOrLivingLocalPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=176+grafo=6/6]]
    bool IsFirstLocalPlayerOrLivingLocalPlayer() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsFirstLocalPlayerOrLivingLocalPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsInTribe()
    // endereco: casamento de bytes com a build de referencia
    bool IsInTribe() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsInTribe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsInputPressed(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsInputPressed(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long>(this, "AShooterPlayerController.IsInputPressed(FName,FName)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsMilestoneBoardTree(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsMilestoneBoardTree(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.IsMilestoneBoardTree(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsMilestoneComplete(FName)
    // endereco: cache_pdb_25090264
    bool IsMilestoneComplete(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.IsMilestoneComplete(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsOnSeatingStructure()
    // endereco: casamento de bytes com a build de referencia
    bool IsOnSeatingStructure() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsOnSeatingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsPOINearCenterOfScreen(UE::Math::TVector2<double>,UE::Math::TVector2<d
    // endereco: casamento de bytes com a build de referencia
    bool IsPOINearCenterOfScreen(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterPlayerController.IsPOINearCenterOfScreen(UE::Math::TVector2<double>,UE::Math::TVector2<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsPawnAcknowledged()
    // endereco: cache_pdb_25090264
    bool IsPawnAcknowledged() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsPawnAcknowledged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.IsPhotoMode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    BrzPonteiro IsPhotoMode() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.IsPhotoMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsPingedItem(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsPingedItem(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "AShooterPlayerController.IsPingedItem(UPrimitiveComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsPlayerViewingPing(AShooterPlayerController*,FPingData&)
    // endereco: casamento de bytes com a build de referencia
    static bool IsPlayerViewingPing(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "AShooterPlayerController.IsPlayerViewingPing(AShooterPlayerController*,FPingData&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsPlayingInstigatorVO()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    bool IsPlayingInstigatorVO() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsPlayingInstigatorVO()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.IsProviderSkillReadyToUse_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsProviderSkillReadyToUse_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.IsProviderSkillReadyToUse_Implementation(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsRemoteControlling()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsRemoteControlling() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsRemoteControlling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsRidingDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsRidingDino() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsRidingDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsSOTFIntro()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=112]]
    bool IsSOTFIntro() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsSOTFIntro()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsSavingData()
    // endereco: casamento de bytes com a build de referencia
    bool IsSavingData() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsSavingData()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsSkillReadyToUse(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsSkillReadyToUse(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.IsSkillReadyToUse(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsSkillUnlocked(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsSkillUnlocked(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.IsSkillUnlocked(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsSpectator(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsSpectator(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterPlayerController.IsSpectator(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsTamedDinoNearBy(APrimalDinoCharacter*,float)
    // endereco: casamento de bytes com a build de referencia
    bool IsTamedDinoNearBy(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "AShooterPlayerController.IsTamedDinoNearBy(APrimalDinoCharacter*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsTargetSleeping()
    // endereco: casamento de bytes com a build de referencia
    void IsTargetSleeping() const
    {
        NativeCall<void>(this, "AShooterPlayerController.IsTargetSleeping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsTribeAdmin()
    // endereco: casamento de bytes com a build de referencia
    bool IsTribeAdmin() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsTribeAdmin()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.IsUsingSurfaceCamera()
    // endereco: cache_pdb_25090264
    bool IsUsingSurfaceCamera() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsUsingSurfaceCamera()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsValidArkTributePlayerDownloadForThisServer(FArkTributePlayerData&)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidArkTributePlayerDownloadForThisServer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerController.IsValidArkTributePlayerDownloadForThisServer(FArkTributePlayerData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsValidUnStasisCaster()
    // classe: a funcao mora em UPrimalActor, e AShooterPlayerController herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool IsValidUnStasisCaster() const
    {
        return NativeCall<bool>(this, "UPrimalActor.IsValidUnStasisCaster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.IsViewingInventoryUI()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsViewingInventoryUI() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.IsViewingInventoryUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.JoinDiscordVoiceChannel(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinDiscordVoiceChannel(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.JoinDiscordVoiceChannel(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro JoinDiscordVoiceChannel(FString* a0) const
    { return JoinDiscordVoiceChannel(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.JoinVoiceChannel_Implementation(FString&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void JoinVoiceChannel_Implementation(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.JoinVoiceChannel_Implementation(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void JoinVoiceChannel_Implementation(FString* a0, FString* a1) const
    { JoinVoiceChannel_Implementation(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.JoinVoiceLobbyCallback(FOnlineError&,FUniqueNetId&,TSharedPtr<FOnlineLo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinVoiceLobbyCallback(void* a0, void* a1, void* a2, const FString& a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "AShooterPlayerController.JoinVoiceLobbyCallback(FOnlineError&,FUniqueNetId&,TSharedPtr<FOnlineLobby,1>&,FString)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro JoinVoiceLobbyCallback(void* a0, void* a1, void* a2, FString* a3) const
    { return JoinVoiceLobbyCallback(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.JoinVoiceLobby_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinVoiceLobby_Implementation(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.JoinVoiceLobby_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro JoinVoiceLobby_Implementation(FString* a0) const
    { return JoinVoiceLobby_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.KickPlayer(FString)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void KickPlayer(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "AShooterPlayerController.KickPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void KickPlayer(FString* a0)
    { KickPlayer(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.LaunchShoulderMountedDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=19]]
    BrzPonteiro LaunchShoulderMountedDino() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.LaunchShoulderMountedDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LeaveMeAlone()
    // endereco: casamento de bytes com a build de referencia
    void LeaveMeAlone() const
    {
        NativeCall<void>(this, "AShooterPlayerController.LeaveMeAlone()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LevelView()
    // endereco: casamento de bytes com a build de referencia
    void LevelView() const
    {
        NativeCall<void>(this, "AShooterPlayerController.LevelView()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LinkedPlayerIDString()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void LinkedPlayerIDString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.LinkedPlayerIDString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.LoadJIRAConfigFromURL(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=257+grafo=4/4]]
    BrzPonteiro LoadJIRAConfigFromURL(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.LoadJIRAConfigFromURL(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadJIRAConfigFromURL(FString* a0) const
    { return LoadJIRAConfigFromURL(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LoadLocalPlayerArkData()
    // endereco: casamento de bytes com a build de referencia
    void LoadLocalPlayerArkData() const
    {
        NativeCall<void>(this, "AShooterPlayerController.LoadLocalPlayerArkData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.LoadMapPerformanceLocations(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadMapPerformanceLocations(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.LoadMapPerformanceLocations(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadMapPerformanceLocations(FString* a0) const
    { return LoadMapPerformanceLocations(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.LoadMapPerformanceLocationsFromSpyglass()
    // endereco: casamento de bytes com a build de referencia
    void LoadMapPerformanceLocationsFromSpyglass() const
    {
        NativeCall<void>(this, "AShooterPlayerController.LoadMapPerformanceLocationsFromSpyglass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.LoadProfile(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro LoadProfile(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterPlayerController.LoadProfile(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LoadSpectatorPos(int)
    // endereco: casamento de bytes com a build de referencia
    void LoadSpectatorPos(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.LoadSpectatorPos(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.LocalSendChatMessage(FString&,EChatSendMode::Type,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalSendChatMessage(const FString& a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "AShooterPlayerController.LocalSendChatMessage(FString&,EChatSendMode::Type,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LocalSendChatMessage(FString* a0, int a1, int a2) const
    { return LocalSendChatMessage(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LockEmote(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    void LockEmote(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.LockEmote(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LogChatMessage(FPrimalChatMessage&)
    // endereco: casamento de bytes com a build de referencia
    void LogChatMessage(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.LogChatMessage(FPrimalChatMessage&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LookInput(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=61]]
    void LookInput(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.LookInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.LookUpAtRate(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=434]]
    void LookUpAtRate(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.LookUpAtRate(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.MarkDinoListEntryWidgetFavoriteCombined(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void MarkDinoListEntryWidgetFavoriteCombined(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.MarkDinoListEntryWidgetFavoriteCombined(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.MarkDinoListEntryWidgetFavoriteCreature_Implementation(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void MarkDinoListEntryWidgetFavoriteCreature_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.MarkDinoListEntryWidgetFavoriteCreature_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.MarkDinoListEntryWidgetFavoritePlayer_Implementation(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MarkDinoListEntryWidgetFavoritePlayer_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.MarkDinoListEntryWidgetFavoritePlayer_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.NewMinimapMark(FMinimapMark)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NewMinimapMark(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.NewMinimapMark(FMinimapMark)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.NotifyDealDamageSuccess(APrimalCharacter*,bool,float,float,FDamageEvent
    // endereco: casamento de bytes com a build de referencia
    void NotifyDealDamageSuccess(void* a0, bool a1, float a2, float a3, void* a4) const
    {
        NativeCall<void, void*, bool, float, float, void*>(this, "AShooterPlayerController.NotifyDealDamageSuccess(APrimalCharacter*,bool,float,float,FDamageEvent&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.NotifyPawnBuffsOfDamageEvent(AActor*,float,FDamageEvent&)
    // endereco: thunk
    void NotifyPawnBuffsOfDamageEvent(void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, void*>(this, "AShooterPlayerController.NotifyPawnBuffsOfDamageEvent(AActor*,float,FDamageEvent&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.NotifyTribeWarStatus(FString&,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=184+bytes40+chamadores=2]]
    void NotifyTribeWarStatus(const FString& a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.NotifyTribeWarStatus(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NotifyTribeWarStatus(FString* a0, int a1) const
    { NotifyTribeWarStatus(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnAddedItemsToAllClustersInventory(bool,FString&,TArray<int,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    void OnAddedItemsToAllClustersInventory(bool a0, const FString& a1, void* a2) const
    {
        NativeCall<void, bool, void*, void*>(this, "AShooterPlayerController.OnAddedItemsToAllClustersInventory(bool,FString&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void OnAddedItemsToAllClustersInventory(bool a0, FString* a1, void* a2) const
    { OnAddedItemsToAllClustersInventory(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnAltFireReleased_RTSKeyBinds()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnAltFireReleased_RTSKeyBinds() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnAltFireReleased_RTSKeyBinds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnAppResume()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAppResume() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnAppResume()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnAppSuspend()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAppSuspend() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnAppSuspend()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnArkTributeAllClustersInventoryItemsLoaded(TArray<FItemNetInfo,TSizedD
    // endereco: casamento de bytes com a build de referencia
    void OnArkTributeAllClustersInventoryItemsLoaded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.OnArkTributeAllClustersInventoryItemsLoaded(TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnArkTributeSaved(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnArkTributeSaved(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.OnArkTributeSaved(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnCurrentCharacterAndItemsUploaded(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnCurrentCharacterAndItemsUploaded(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.OnCurrentCharacterAndItemsUploaded(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.OnDisableSpectator()
    // endereco: thunk
    void OnDisableSpectator() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnDisableSpectator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnDisableSpectator_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void OnDisableSpectator_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnDisableSpectator_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnDiscordProvTokenExchange(UDiscordClientResult*,FString,FString,EDisco
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordProvTokenExchange(void* a0, const FString& a1, const FString& a2, int a3, int a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*>(this, "AShooterPlayerController.OnDiscordProvTokenExchange(UDiscordClientResult*,FString,FString,EDiscordAuthorizationTokenType,int,FString)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnDiscordProvTokenExchange(void* a0, FString* a1, FString* a2, int a3, int a4, FString* a5) const
    { return OnDiscordProvTokenExchange(a0, *a1, *a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnDiscordStatusChanged(EDiscordClientStatus,EDiscordClientError,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    BrzPonteiro OnDiscordStatusChanged(int a0, int a1, int a2) const
    {
        return NativeCall<void*, int, int, int>(this, "AShooterPlayerController.OnDiscordStatusChanged(EDiscordClientStatus,EDiscordClientError,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnDiscordTokenExpired()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordTokenExpired() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnDiscordTokenExpired()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnEmoteKey1Release()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    void OnEmoteKey1Release() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnEmoteKey1Release()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnEmoteKey2Press()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=388+grafo=6/6]]
    void OnEmoteKey2Press() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnEmoteKey2Press()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnExtendedInfoPress()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=472+grafo=7/7]]
    void OnExtendedInfoPress() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnExtendedInfoPress()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnExtendedInfoRelease()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void OnExtendedInfoRelease() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnExtendedInfoRelease()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnFirstSaveAfterCharacterDownloadFinished(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnFirstSaveAfterCharacterDownloadFinished(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.OnFirstSaveAfterCharacterDownloadFinished(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.OnInstigatorVOFinished()
    // endereco: casamento de bytes com a build de referencia
    void OnInstigatorVOFinished() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnInstigatorVOFinished()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.OnInstigatorVOPlaybackPercent(USoundWave*,float)
    // endereco: casamento de bytes com a build de referencia
    void OnInstigatorVOPlaybackPercent(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterPlayerController.OnInstigatorVOPlaybackPercent(USoundWave*,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.OnLevelView()
    // endereco: casamento de bytes com a build de referencia
    void OnLevelView() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnLevelView()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnLoadArkTributePlayersDataFinished(bool,TArray<FArkTributePlayerData,T
    // endereco: casamento de bytes com a build de referencia
    void OnLoadArkTributePlayersDataFinished(bool a0, void* a1, int a2) const
    {
        NativeCall<void, bool, void*, int>(this, "AShooterPlayerController.OnLoadArkTributePlayersDataFinished(bool,TArray<FArkTributePlayerData,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnNetCleanup(UNetConnection*)
    // classe: a funcao mora em APlayerController, e AShooterPlayerController herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void OnNetCleanup(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.OnNetCleanup(UNetConnection*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnPingDown()
    // endereco: casamento de bytes com a build de referencia
    void OnPingDown() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnPingDown()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnPingUp()
    // endereco: casamento de bytes com a build de referencia
    void OnPingUp() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnPingUp()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.OnPlayerTeamChanged(UPrimalActor*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void OnPlayerTeamChanged(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "AShooterPlayerController.OnPlayerTeamChanged(UPrimalActor*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnPoopReleased_RTSKeyBinds()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnPoopReleased_RTSKeyBinds() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnPoopReleased_RTSKeyBinds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnPossess(APawn*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2202+grafo=42/42]]
    void OnPossess(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.OnPossess(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnPressGroupAddOrRemoveTame()
    // endereco: casamento de bytes com a build de referencia
    void OnPressGroupAddOrRemoveTame() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnPressGroupAddOrRemoveTame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnRecievedUpdatedCachedTeamTameList(bool,int)
    // endereco: casamento de bytes com a build de referencia
    void OnRecievedUpdatedCachedTeamTameList(bool a0, int a1) const
    {
        NativeCall<void, bool, int>(this, "AShooterPlayerController.OnRecievedUpdatedCachedTeamTameList(bool,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<0>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_0_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<0>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<1>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_1_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<1>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<2>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_2_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<2>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<3>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_3_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<3>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<4>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_4_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<4>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<5>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_5_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<5>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<6>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_6_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<6>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<7>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_7_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<7>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<8>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_8_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<8>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnReleaseItemSlot<9>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnReleaseItemSlot_9_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnReleaseItemSlot<9>()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.OnRep_Pawn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=346+grafo=3/3]]
    void OnRep_Pawn() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnRep_Pawn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnRep_PlayerState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=67]]
    BrzPonteiro OnRep_PlayerState() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnRep_PlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnRepeatUseHeldTimer()
    // endereco: casamento de bytes com a build de referencia
    void OnRepeatUseHeldTimer() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnRepeatUseHeldTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnSelectOrderGroup<0>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnSelectOrderGroup_0_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnSelectOrderGroup<0>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnStartFire()
    // endereco: casamento de bytes com a build de referencia
    void OnStartFire() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnStartFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnStartInGameMenu()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=417+grafo=7/7]]
    void OnStartInGameMenu() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnStartInGameMenu()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnStartTargeting()
    // endereco: casamento de bytes com a build de referencia
    void OnStartTargeting() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnStartTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnStopFire()
    // endereco: casamento de bytes com a build de referencia
    void OnStopFire() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnStopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnStopTargeting()
    // endereco: casamento de bytes com a build de referencia
    void OnStopTargeting() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnStopTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnSubobjectDestroyFromReplication(UObject*)
    // endereco: casamento de bytes com a build de referencia
    void OnSubobjectDestroyFromReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.OnSubobjectDestroyFromReplication(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnToggleInGameMenu()
    // endereco: casamento de bytes com a build de referencia
    void OnToggleInGameMenu() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnToggleInGameMenu()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnUnPossess()
    // endereco: casamento de bytes com a build de referencia
    void OnUnPossess() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnUnPossess()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnUseHeldTimer()
    // endereco: casamento de bytes com a build de referencia
    void OnUseHeldTimer() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnUseHeldTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<0>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_0_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<0>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<1>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_1_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<1>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<2>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=115]]
    BrzPonteiro OnUseItemSlot_2_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<2>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<3>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_3_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<3>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<4>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_4_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<4>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<5>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_5_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<5>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<6>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_6_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<6>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<7>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_7_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<7>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<8>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnUseItemSlot_8_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<8>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.OnUseItemSlot<9>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=158]]
    BrzPonteiro OnUseItemSlot_9_() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.OnUseItemSlot<9>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnUseItemSlotForStructure(int)
    // endereco: casamento de bytes com a build de referencia
    void OnUseItemSlotForStructure(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.OnUseItemSlotForStructure(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnUsePress(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnUsePress(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.OnUsePress(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnUseRelease(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnUseRelease(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.OnUseRelease(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OnWhistlePress()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=418+grafo=6/6]]
    void OnWhistlePress() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OnWhistlePress()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.OpenMapMarkers()
    // endereco: casamento de bytes com a build de referencia
    void OpenMapMarkers() const
    {
        NativeCall<void>(this, "AShooterPlayerController.OpenMapMarkers()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.OrganizeSOTFQueue(TEnumAsByte<ESTOFNotificationType::Type>,TArray<FStri
    // endereco: casamento de bytes com a build de referencia
    void OrganizeSOTFQueue(unsigned char a0, void* a1, const FString& a2, const FString& a3, void* a4, bool a5, bool a6, float a7, const FString& a8, int a9) const
    {
        NativeCall<void, unsigned char, void*, void*, void*, void*, bool, bool, float, void*, int>(this, "AShooterPlayerController.OrganizeSOTFQueue(TEnumAsByte<ESTOFNotificationType::Type>,TArray<FString,TSizedDefaultAllocator<32>>,FString,FString,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>,bool,bool,float,FString,int)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4, a5, a6, a7, const_cast<FString*>(&a8), a9);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void OrganizeSOTFQueue(unsigned char a0, void* a1, FString* a2, FString* a3, void* a4, bool a5, bool a6, float a7, FString* a8, int a9) const
    { OrganizeSOTFQueue(a0, a1, *a2, *a3, a4, a5, a6, a7, *a8, a9); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.OwnsPremiumMod(__int64)
    // endereco: cache_pdb_25090264
    bool OwnsPremiumMod(long long a0) const
    {
        return NativeCall<bool, long long>(this, "AShooterPlayerController.OwnsPremiumMod(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PawnLeavingGame()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=435]]
    void PawnLeavingGame() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PawnLeavingGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PawnPendingDestroy(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void PawnPendingDestroy(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.PawnPendingDestroy(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.PlayHitMarkerCharacter(bool,FHitMarkerSettings,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayHitMarkerCharacter(bool a0, void* a1, bool a2) const
    {
        return NativeCall<void*, bool, void*, bool>(this, "AShooterPlayerController.PlayHitMarkerCharacter(bool,FHitMarkerSettings,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.PlayHitMarkerCharacterBP(bool,FHitMarkerSettings,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayHitMarkerCharacterBP(bool a0, void* a1, bool a2) const
    {
        return NativeCall<void*, bool, void*, bool>(this, "AShooterPlayerController.PlayHitMarkerCharacterBP(bool,FHitMarkerSettings,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.PlayHitMarkerCharacter_Implementation(bool,FHitMarkerSettings,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayHitMarkerCharacter_Implementation(bool a0, void* a1, bool a2) const
    {
        return NativeCall<void*, bool, void*, bool>(this, "AShooterPlayerController.PlayHitMarkerCharacter_Implementation(bool,FHitMarkerSettings,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.PlayHitMarkerStructure()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PlayHitMarkerStructure() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PlayHitMarkerStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.PlayHitMarkerStructureAlly()
    // endereco: casamento de bytes com a build de referencia
    void PlayHitMarkerStructureAlly() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PlayHitMarkerStructureAlly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PlayReconnectSound()
    // endereco: casamento de bytes com a build de referencia
    void PlayReconnectSound() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PlayReconnectSound()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PlayRespawnSound()
    // endereco: cache_pdb_25090264
    void PlayRespawnSound() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PlayRespawnSound()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.PlaySoundOnCompVO(USoundCue*,UAudioComponent*,FVO_DataEntry)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlaySoundOnCompVO(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.PlaySoundOnCompVO(USoundCue*,UAudioComponent*,FVO_DataEntry)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PlayWheelProgressSound()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=138]]
    void PlayWheelProgressSound() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PlayWheelProgressSound()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.PlayWheelSelectSound()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro PlayWheelSelectSound() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.PlayWheelSelectSound()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PlayerCommand_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void PlayerCommand_Implementation(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.PlayerCommand_Implementation(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PlayerCommand_Implementation(void* retorno, FString* a0) const
    { PlayerCommand_Implementation(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=159+grafo=5/5]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PressedChangeCameraMode()
    // endereco: casamento de bytes com a build de referencia
    void PressedChangeCameraMode() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PressedChangeCameraMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PrintColors()
    // endereco: casamento de bytes com a build de referencia
    void PrintColors() const
    {
        NativeCall<void>(this, "AShooterPlayerController.PrintColors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ProcessIncomingVoiceData(TArrayView<short,int>,int,int,bool,FString&,FS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessIncomingVoiceData(void* a0, int a1, int a2, bool a3, const FString& a4, const FString& a5) const
    {
        return NativeCall<void*, void*, int, int, bool, void*, void*>(this, "AShooterPlayerController.ProcessIncomingVoiceData(TArrayView<short,int>,int,int,bool,FString&,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4), const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ProcessIncomingVoiceData(void* a0, int a1, int a2, bool a3, FString* a4, FString* a5) const
    { return ProcessIncomingVoiceData(a0, a1, a2, a3, *a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ProcessOutgoingVoiceData(TArrayView<short,int>,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessOutgoingVoiceData(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "AShooterPlayerController.ProcessOutgoingVoiceData(TArrayView<short,int>,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ProcessServerMessages()
    // endereco: casamento de bytes com a build de referencia
    void ProcessServerMessages() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ProcessServerMessages()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ProcessedSyncTamingDinoWaypoints(TMap<unsignedint,FTamingDinoInfo,FDefa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessedSyncTamingDinoWaypoints(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ProcessedSyncTamingDinoWaypoints(TMap<unsignedint,FTamingDinoInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsignedint,FTamingDinoInfo,0>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ProcessedSyncTrackedActorWaypoints()
    // endereco: casamento de bytes com a build de referencia
    void ProcessedSyncTrackedActorWaypoints() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ProcessedSyncTrackedActorWaypoints()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ProgressBounties(FName,float,float,bool,FName)
    // endereco: cache_pdb_25090264
    float ProgressBounties(unsigned long long a0, float a1, float a2, bool a3, unsigned long long a4) const
    {
        return NativeCall<float, unsigned long long, float, float, bool, unsigned long long>(this, "AShooterPlayerController.ProgressBounties(FName,float,float,bool,FName)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ProgressMilestone(FName,float,float,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    float ProgressMilestone(unsigned long long a0, float a1, float a2, bool a3, unsigned long long a4) const
    {
        return NativeCall<float, unsigned long long, float, float, bool, unsigned long long>(this, "AShooterPlayerController.ProgressMilestone(FName,float,float,bool,FName)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ProviderSkillAddedToSlot_Implementation(FName,int,AShooterPlayerControl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProviderSkillAddedToSlot_Implementation(unsigned long long a0, int a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, int, void*>(this, "AShooterPlayerController.ProviderSkillAddedToSlot_Implementation(FName,int,AShooterPlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.PurchaseEngramPoint(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=268]]
    void PurchaseEngramPoint(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.PurchaseEngramPoint(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.QuitToMainMenu()
    // endereco: casamento de bytes com a build de referencia
    void QuitToMainMenu() const
    {
        NativeCall<void>(this, "AShooterPlayerController.QuitToMainMenu()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.RPCStayAlive()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void RPCStayAlive() const
    {
        NativeCall<void>(this, "AShooterPlayerController.RPCStayAlive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RawSyncTamingDinoWaypoints(TArray<FTamingDinoInfo,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RawSyncTamingDinoWaypoints(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.RawSyncTamingDinoWaypoints(TArray<FTamingDinoInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ReceiveCustomActorTrackList_Combined(TArray<FTrackedActorPlusInfoStruct
    // endereco: casamento de bytes com a build de referencia
    void ReceiveCustomActorTrackList_Combined(void* retorno, void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.ReceiveCustomActorTrackList_Combined(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool,bool)", retorno, a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ReceivedGameModeClass(TSubclassOf<AGameModeBase>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedGameModeClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ReceivedGameModeClass(TSubclassOf<AGameModeBase>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ReceivedPlayerState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedPlayerState() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ReceivedPlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RefreshDinoTrackInfo()
    // endereco: casamento de bytes com a build de referencia
    void RefreshDinoTrackInfo() const
    {
        NativeCall<void>(this, "AShooterPlayerController.RefreshDinoTrackInfo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RefreshLastWheelCategories(bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshLastWheelCategories(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.RefreshLastWheelCategories(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RefreshLocalTrackedActors(bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshLocalTrackedActors(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.RefreshLocalTrackedActors(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RefreshSteamInventory()
    // endereco: casamento de bytes com a build de referencia
    void RefreshSteamInventory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.RefreshSteamInventory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RegisterBounties(FName,FPrimalMilestone)
    // endereco: cache_pdb_25090264
    BrzPonteiro RegisterBounties(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.RegisterBounties(FName,FPrimalMilestone)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ReleasedChangeCameraMode()
    // endereco: casamento de bytes com a build de referencia
    void ReleasedChangeCameraMode() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ReleasedChangeCameraMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RemoteServerCheat_Implementation(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=519+grafo=13/13]]
    void RemoteServerCheat_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.RemoteServerCheat_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RemoteServerCheat_Implementation(FString* a0) const
    { RemoteServerCheat_Implementation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RemoveAdminPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveAdminPlayer(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.RemoveAdminPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoveAdminPlayer(FString* a0) const
    { return RemoveAdminPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RemoveCustomActorTrackListEntries_FromTotalList_Combined(TArray<int,TSi
    // endereco: casamento de bytes com a build de referencia
    void RemoveCustomActorTrackListEntries_FromTotalList_Combined(void* a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, bool, bool, bool>(this, "AShooterPlayerController.RemoveCustomActorTrackListEntries_FromTotalList_Combined(TArray<int,TSizedDefaultAllocator<32>>&,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RemoveCustomActorTrackList_Individual(int,ETrackedActorCategory::Type)
    // endereco: casamento de bytes com a build de referencia
    void RemoveCustomActorTrackList_Individual(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.RemoveCustomActorTrackList_Individual(int,ETrackedActorCategory::Type)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.RemoveCustomCloudData(FName)
    // endereco: casamento de bytes com a build de referencia
    void RemoveCustomCloudData(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.RemoveCustomCloudData(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RemoveDinoFromClientTrackedActorPointers(APrimalDinoCharacter*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveDinoFromClientTrackedActorPointers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.RemoveDinoFromClientTrackedActorPointers(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RemoveDinoFromMap(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveDinoFromMap(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.RemoveDinoFromMap(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.RemoveEquipmentAccessories()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=341]]
    void RemoveEquipmentAccessories() const
    {
        NativeCall<void>(this, "AShooterPlayerController.RemoveEquipmentAccessories()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RemoveItemFromClubArk(FItemNetID,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveItemFromClubArk(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "AShooterPlayerController.RemoveItemFromClubArk(FItemNetID,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RemoveMinimapMark(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    void RemoveMinimapMark(unsigned long long a0, unsigned long long a1) const
    {
        NativeCall<void, unsigned long long, unsigned long long>(this, "AShooterPlayerController.RemoveMinimapMark(FName,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RemovePlayerFromClientTrackedActorPointers(AShooterCharacter*)
    // endereco: cache_pdb_25090264
    void RemovePlayerFromClientTrackedActorPointers(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.RemovePlayerFromClientTrackedActorPointers(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RenamePlayer(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenamePlayer(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.RenamePlayer(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RenamePlayer(FString* a0) const
    { return RenamePlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ReportLeastSpawnManagers()
    // endereco: casamento de bytes com a build de referencia
    void ReportLeastSpawnManagers() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ReportLeastSpawnManagers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ReportSpawnManagers()
    // endereco: casamento de bytes com a build de referencia
    void ReportSpawnManagers() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ReportSpawnManagers()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.RequestCreateNewPlayerWithArkData(TArray<unsignedchar,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    void RequestCreateNewPlayerWithArkData(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.RequestCreateNewPlayerWithArkData(TArray<unsignedchar,TSizedDefaultAllocator<32>>,unsigned__int64,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.RequestCreateNewPlayerWithArkDataPossibleItems(FArkTributePlayerData&,u
    // endereco: casamento de bytes com a build de referencia
    void RequestCreateNewPlayerWithArkDataPossibleItems(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.RequestCreateNewPlayerWithArkDataPossibleItems(FArkTributePlayerData&,unsigned__int64)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.RequestCreateNewPlayerWithArkDataPossibleItems_W_BedID(FArkTributePlaye
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestCreateNewPlayerWithArkDataPossibleItems_W_BedID(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "AShooterPlayerController.RequestCreateNewPlayerWithArkDataPossibleItems_W_BedID(FArkTributePlayerData&,unsigned__int64,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.RequestTradeData(APrimalStructureItemContainer*,double)
    // endereco: casamento de bytes com a build de referencia
    void RequestTradeData(void* a0, double a1) const
    {
        NativeCall<void, void*, double>(this, "AShooterPlayerController.RequestTradeData(APrimalStructureItemContainer*,double)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.RequestUpdateCachedTeamTameList()
    // endereco: casamento de bytes com a build de referencia
    void RequestUpdateCachedTeamTameList() const
    {
        NativeCall<void>(this, "AShooterPlayerController.RequestUpdateCachedTeamTameList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Reset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=128]]
    void Reset() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ResetCameraMode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=22]]
    void ResetCameraMode() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ResetCameraMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ResetSpawnTime()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetSpawnTime() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ResetSpawnTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ResetThresholdMilestone(EPrimalMilestoneType)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=127]]
    BrzPonteiro ResetThresholdMilestone(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.ResetThresholdMilestone(EPrimalMilestoneType)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SCP()
    // endereco: cache_pdb_25090264
    void SCP() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SCP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SPI(float,float,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SPI(float a0, float a1, float a2, float a3, float a4) const
    {
        NativeCall<void, float, float, float, float, float>(this, "AShooterPlayerController.SPI(float,float,float,float,float)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SameLinkedId(__int64)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool SameLinkedId(long long a0) const
    {
        return NativeCall<bool, long long>(this, "AShooterPlayerController.SameLinkedId(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SaveSpectatorPos(int)
    // endereco: casamento de bytes com a build de referencia
    void SaveSpectatorPos(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SaveSpectatorPos(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ScheduleTryLoadProfile()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=371+grafo=6/6]]
    void ScheduleTryLoadProfile() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ScheduleTryLoadProfile()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SendAlarmNotification(FString,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void SendAlarmNotification(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.SendAlarmNotification(FString,FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SendAlarmNotification(FString* a0, FString* a1, FString* a2) const
    { SendAlarmNotification(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SendArKPayload(bool,FARKTributeData)
    // endereco: casamento de bytes com a build de referencia
    void SendArKPayload(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterPlayerController.SendArKPayload(bool,FARKTributeData)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SendDinoToServer(FARKTributeDino)
    // endereco: casamento de bytes com a build de referencia
    void SendDinoToServer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SendDinoToServer(FARKTributeDino)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SendInventoryItemsToClient(UPrimalInventoryComponent*,TArray<unsignedch
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SendInventoryItemsToClient(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.SendInventoryItemsToClient(UPrimalInventoryComponent*,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SendUseItemSlotToStructure()
    // endereco: casamento de bytes com a build de referencia
    bool SendUseItemSlotToStructure() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.SendUseItemSlotToStructure()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerAcknowledgePossession_Implementation(APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerAcknowledgePossession_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerAcknowledgePossession_Implementation(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerActorCloseRemoteInventory(UPrimalInventoryComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerActorCloseRemoteInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerActorCloseRemoteInventory(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerActorViewRemoteInventory(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void ServerActorViewRemoteInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerActorViewRemoteInventory(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddAchievementID(FString&,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=186+bytes40+chamadores=3]]
    void ServerAddAchievementID(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ServerAddAchievementID(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerAddAchievementID(FString* a0, bool a1) const
    { ServerAddAchievementID(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddAchievementID_Implementation(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerAddAchievementID_Implementation(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ServerAddAchievementID_Implementation(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerAddAchievementID_Implementation(FString* a0, bool a1) const
    { ServerAddAchievementID_Implementation(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddCustomActorTrackListEntries_Creatures(TArray<FTrackedActorPlus
    // endereco: casamento de bytes com a build de referencia
    void ServerAddCustomActorTrackListEntries_Creatures(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ServerAddCustomActorTrackListEntries_Creatures(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddCustomActorTrackListEntries_Creatures_ForcePOIVisible(TArray<F
    // endereco: casamento de bytes com a build de referencia
    void ServerAddCustomActorTrackListEntries_Creatures_ForcePOIVisible(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ServerAddCustomActorTrackListEntries_Creatures_ForcePOIVisible(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddCustomActorTrackListEntries_Players(TArray<FTrackedActorPlusIn
    // endereco: casamento de bytes com a build de referencia
    void ServerAddCustomActorTrackListEntries_Players(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ServerAddCustomActorTrackListEntries_Players(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerAddItemFromArkInventory(UPrimalInventoryComponent*,FItemNetID,int
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerAddItemFromArkInventory(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerAddItemFromArkInventory(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddItemFromArkInventory_Implementation(UPrimalInventoryComponent*
    // endereco: casamento de bytes com a build de referencia
    void ServerAddItemFromArkInventory_Implementation(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerAddItemFromArkInventory_Implementation(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerAddItemToArkInventory(UPrimalInventoryComponent*,FItemNetID,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerAddItemToArkInventory(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerAddItemToArkInventory(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddItemToArkInventory_Implementation(UPrimalInventoryComponent*,F
    // endereco: casamento de bytes com a build de referencia
    void ServerAddItemToArkInventory_Implementation(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerAddItemToArkInventory_Implementation(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddItemToCustomFolder(UPrimalInventoryComponent*,FString&,int,FIt
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=202+bytes40+chamadores=4]]
    void ServerAddItemToCustomFolder(void* a0, const FString& a1, int a2, unsigned long long a3) const
    {
        NativeCall<void, void*, void*, int, unsigned long long>(this, "AShooterPlayerController.ServerAddItemToCustomFolder(UPrimalInventoryComponent*,FString&,int,FItemNetID)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerAddItemToCustomFolder(void* a0, FString* a1, int a2, unsigned long long a3) const
    { ServerAddItemToCustomFolder(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAddItemToCustomFolder_Implementation(UPrimalInventoryComponent*,F
    // endereco: casamento de bytes com a build de referencia
    void ServerAddItemToCustomFolder_Implementation(void* a0, const FString& a1, int a2, unsigned long long a3) const
    {
        NativeCall<void, void*, void*, int, unsigned long long>(this, "AShooterPlayerController.ServerAddItemToCustomFolder_Implementation(UPrimalInventoryComponent*,FString&,int,FItemNetID)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerAddItemToCustomFolder_Implementation(void* a0, FString* a1, int a2, unsigned long long a3) const
    { ServerAddItemToCustomFolder_Implementation(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerAsyncLoadArkInventoryItems(TArray<FItemNetInfo,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerAsyncLoadArkInventoryItems(void* a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "AShooterPlayerController.ServerAsyncLoadArkInventoryItems(TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerAsyncLoadArkInventoryItems_Implementation(TArray<FItemNetInfo,TSi
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerAsyncLoadArkInventoryItems_Implementation(void* a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "AShooterPlayerController.ServerAsyncLoadArkInventoryItems_Implementation(TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerAutoStackItemIDs(UPrimalInventoryComponent*,TArray<FItemNetID,TSi
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerAutoStackItemIDs(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ServerAutoStackItemIDs(UPrimalInventoryComponent*,TArray<FItemNetID,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerAutoStackItemIDs_Implementation(UPrimalInventoryComponent*,TArray
    // endereco: casamento de bytes com a build de referencia
    void ServerAutoStackItemIDs_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ServerAutoStackItemIDs_Implementation(UPrimalInventoryComponent*,TArray<FItemNetID,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerBanPlayer_Implementation(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=277+grafo=9/9]]
    void ServerBanPlayer_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerBanPlayer_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerBanPlayer_Implementation(FString* a0) const
    { ServerBanPlayer_Implementation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerChangeName_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerChangeName_Implementation(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerChangeName_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ServerChangeName_Implementation(FString* a0) const
    { return ServerChangeName_Implementation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerCharacterUploadWithItems_CharacterPayload(unsigned__int64,TArray<
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerCharacterUploadWithItems_CharacterPayload(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_CharacterPayload(unsigned__int64,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerCharacterUploadWithItems_CharacterPayload_Implementation(unsigned
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCharacterUploadWithItems_CharacterPayload_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_CharacterPayload_Implementation(unsigned__int64,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter(unsigned__int64
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCharacterUploadWithItems_FinishAndCreateCharacter(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter_Implementation(
    // endereco: casamento de bytes com a build de referencia
    void ServerCharacterUploadWithItems_FinishAndCreateCharacter_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter_Implementation(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerCharacterUploadWithItems_Start(unsigned__int64,FArkTributePlayerD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCharacterUploadWithItems_Start(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_Start(unsigned__int64,FArkTributePlayerData)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCharacterUploadWithItems_Start_Implementation(unsigned__int64,FAr
    // endereco: casamento de bytes com a build de referencia
    void ServerCharacterUploadWithItems_Start_Implementation(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_Start_Implementation(unsigned__int64,FArkTributePlayerData)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerCharacterUploadWithItems_UploadItem(unsigned__int64,FItemNetInfo)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCharacterUploadWithItems_UploadItem(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_UploadItem(unsigned__int64,FItemNetInfo)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCharacterUploadWithItems_UploadItem_Implementation(unsigned__int6
    // endereco: casamento de bytes com a build de referencia
    void ServerCharacterUploadWithItems_UploadItem_Implementation(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_UploadItem_Implementation(unsigned__int64,FItemNetInfo)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCheckIfWildDinoChildCanBeImprinted()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ServerCheckIfWildDinoChildCanBeImprinted() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerCheckIfWildDinoChildCanBeImprinted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCheckIfWildDinoChildCanBeImprinted_ServerLogic()
    // endereco: casamento de bytes com a build de referencia
    void ServerCheckIfWildDinoChildCanBeImprinted_ServerLogic() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerCheckIfWildDinoChildCanBeImprinted_ServerLogic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCheckIsValidPlayerToDownload_Implementation(FArkTributePlayerData
    // endereco: casamento de bytes com a build de referencia
    void ServerCheckIsValidPlayerToDownload_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerCheckIsValidPlayerToDownload_Implementation(FArkTributePlayerData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerClearDeathWaypoint_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerClearDeathWaypoint_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ServerClearDeathWaypoint_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerClearDeathWaypoint_ServerLogic(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerClearDeathWaypoint_ServerLogic(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ServerClearDeathWaypoint_ServerLogic(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerClearPOIVisibilityForAllActors_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=152]]
    void ServerClearPOIVisibilityForAllActors_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerClearPOIVisibilityForAllActors_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerClearPOIVisibilityForAllActors_ServerLogic()
    // endereco: cache_pdb_25090264
    void ServerClearPOIVisibilityForAllActors_ServerLogic() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerClearPOIVisibilityForAllActors_ServerLogic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCraftItem(UPrimalInventoryComponent*,FItemNetID)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerCraftItem(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerCraftItem(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCraftItem_Implementation(UPrimalInventoryComponent*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerCraftItem_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerCraftItem_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerCycleSpectator_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerCycleSpectator_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerCycleSpectator_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDPC()
    // endereco: casamento de bytes com a build de referencia
    void ServerDPC() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerDPC()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDPC_Implementation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerDPC_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerDPC_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerDeleteCustomFolder(UPrimalInventoryComponent*,FString&,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerDeleteCustomFolder(void* a0, const FString& a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterPlayerController.ServerDeleteCustomFolder(UPrimalInventoryComponent*,FString&,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerDeleteCustomFolder(void* a0, FString* a1, int a2) const
    { ServerDeleteCustomFolder(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDeleteCustomFolder_Implementation(UPrimalInventoryComponent*,FStr
    // endereco: casamento de bytes com a build de referencia
    void ServerDeleteCustomFolder_Implementation(void* a0, const FString& a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterPlayerController.ServerDeleteCustomFolder_Implementation(UPrimalInventoryComponent*,FString&,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerDeleteCustomFolder_Implementation(void* a0, FString* a1, int a2) const
    { ServerDeleteCustomFolder_Implementation(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerDeleteItemFromCustomFolder(UPrimalInventoryComponent*,FString&,in
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerDeleteItemFromCustomFolder(void* a0, const FString& a1, int a2, unsigned long long a3) const
    {
        return NativeCall<void*, void*, void*, int, unsigned long long>(this, "AShooterPlayerController.ServerDeleteItemFromCustomFolder(UPrimalInventoryComponent*,FString&,int,FItemNetID)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ServerDeleteItemFromCustomFolder(void* a0, FString* a1, int a2, unsigned long long a3) const
    { return ServerDeleteItemFromCustomFolder(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDeleteItemFromCustomFolder_Implementation(UPrimalInventoryCompone
    // endereco: casamento de bytes com a build de referencia
    void ServerDeleteItemFromCustomFolder_Implementation(void* a0, const FString& a1, int a2, unsigned long long a3) const
    {
        NativeCall<void, void*, void*, int, unsigned long long>(this, "AShooterPlayerController.ServerDeleteItemFromCustomFolder_Implementation(UPrimalInventoryComponent*,FString&,int,FItemNetID)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerDeleteItemFromCustomFolder_Implementation(void* a0, FString* a1, int a2, unsigned long long a3) const
    { ServerDeleteItemFromCustomFolder_Implementation(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDownloadDino(FARKTributeDino)
    // endereco: casamento de bytes com a build de referencia
    char ServerDownloadDino(void* a0) const
    {
        return NativeCall<char, void*>(this, "AShooterPlayerController.ServerDownloadDino(FARKTributeDino)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerDownloadTransferredPlayer(int,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerDownloadTransferredPlayer(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerDownloadTransferredPlayer(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDownloadTransferredPlayer_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerDownloadTransferredPlayer_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerDownloadTransferredPlayer_Implementation(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerDropAllNotReadyForUploadItems()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerDropAllNotReadyForUploadItems() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerDropAllNotReadyForUploadItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDropAllNotReadyForUploadItems_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerDropAllNotReadyForUploadItems_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerDropAllNotReadyForUploadItems_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDropFromRemoteInventory(UPrimalInventoryComponent*,FItemNetID)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=7]]
    void ServerDropFromRemoteInventory(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerDropFromRemoteInventory(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerDropFromRemoteInventory_Implementation(UPrimalInventoryComponent*
    // endereco: casamento de bytes com a build de referencia
    void ServerDropFromRemoteInventory_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerDropFromRemoteInventory_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerEquipPawnItem(FItemNetID)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=4]]
    void ServerEquipPawnItem(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ServerEquipPawnItem(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerEquipPawnItem_Implementation(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerEquipPawnItem_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ServerEquipPawnItem_Implementation(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerEquipToRemoteInventory(UPrimalInventoryComponent*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerEquipToRemoteInventory(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerEquipToRemoteInventory(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerEquipToRemoteInventory_Implementation(UPrimalInventoryComponent*,
    // endereco: casamento de bytes com a build de referencia
    void ServerEquipToRemoteInventory_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerEquipToRemoteInventory_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerFindAndEquipItemCosmetic(FSoftObjectPath)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerFindAndEquipItemCosmetic(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerFindAndEquipItemCosmetic(FSoftObjectPath)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerFindAndEquipItemCosmetic_Implementation(FSoftObjectPath)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerFindAndEquipItemCosmetic_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerFindAndEquipItemCosmetic_Implementation(FSoftObjectPath)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerFixScoutPlayerState_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerFixScoutPlayerState_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ServerFixScoutPlayerState_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerGetMessageOfTheDay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGetMessageOfTheDay() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerGetMessageOfTheDay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerGetMessageOfTheDay_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGetMessageOfTheDay_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerGetMessageOfTheDay_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerGetOriginalHairColor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerGetOriginalHairColor() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerGetOriginalHairColor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerGetOriginalHairColor_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGetOriginalHairColor_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerGetOriginalHairColor_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerGlobalCommand_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerGlobalCommand_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerGlobalCommand_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerGlobalCommand_Implementation(FString* a0) const
    { ServerGlobalCommand_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerGrindItemInRemoteInventory_Implementation(UPrimalInventoryCompone
    // endereco: casamento de bytes com a build de referencia
    void ServerGrindItemInRemoteInventory_Implementation(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "AShooterPlayerController.ServerGrindItemInRemoteInventory_Implementation(UPrimalInventoryComponent*,FItemNetID,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerInventoryClearCraftQueue(UPrimalInventoryComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerInventoryClearCraftQueue(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerInventoryClearCraftQueue(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerInventoryClearCraftQueue_Implementation(UPrimalInventoryComponent
    // endereco: casamento de bytes com a build de referencia
    void ServerInventoryClearCraftQueue_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerInventoryClearCraftQueue_Implementation(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerListPlayers_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerListPlayers_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerListPlayers_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerLoadUploadedCharacters()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerLoadUploadedCharacters() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedCharacters()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerLoadUploadedCharacters_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerLoadUploadedCharacters_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedCharacters_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerLoadUploadedDinos()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerLoadUploadedDinos() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedDinos()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerLoadUploadedDinos_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerLoadUploadedDinos_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedDinos_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerMultiUse(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerMultiUse(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerMultiUse(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerMultiUse_Implementation(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerMultiUse_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerMultiUse_Implementation(UObject*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerNotifyEditText(FString&,bool,TSubclassOf<UObject>,unsignedint,uns
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerNotifyEditText(const FString& a0, bool a1, void* a2, unsigned int a3, unsigned int a4, void* a5) const
    {
        return NativeCall<void*, void*, bool, void*, unsigned int, unsigned int, void*>(this, "AShooterPlayerController.ServerNotifyEditText(FString&,bool,TSubclassOf<UObject>,unsignedint,unsignedint,UObject*)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ServerNotifyEditText(FString* a0, bool a1, void* a2, unsigned int a3, unsigned int a4, void* a5) const
    { return ServerNotifyEditText(*a0, a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerNotifyEditText_Implementation(FString&,bool,TSubclassOf<UObject>,
    // endereco: casamento de bytes com a build de referencia
    void ServerNotifyEditText_Implementation(const FString& a0, bool a1, void* a2, unsigned int a3, unsigned int a4, void* a5) const
    {
        NativeCall<void, void*, bool, void*, unsigned int, unsigned int, void*>(this, "AShooterPlayerController.ServerNotifyEditText_Implementation(FString&,bool,TSubclassOf<UObject>,unsignedint,unsignedint,UObject*)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerNotifyEditText_Implementation(FString* a0, bool a1, void* a2, unsigned int a3, unsigned int a4, void* a5) const
    { ServerNotifyEditText_Implementation(*a0, a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerPaint(UStructurePaintingComponent*,TArray<FPaintItem,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    void ServerPaint(void* a0, void* a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.ServerPaint(UStructurePaintingComponent*,TArray<FPaintItem,TSizedDefaultAllocator<32>>&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ServerPaint_Implementation(UStructurePaintingComponent*,TArray<FPaintIt
    // endereco: casamento de bytes com a build de referencia
    void ServerPaint_Implementation(void* a0, void* a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.ServerPaint_Implementation(UStructurePaintingComponent*,TArray<FPaintItem,TSizedDefaultAllocator<32>>&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerProcessItemNetExecCommandBP(UPrimalInventoryComponent*,FItemNetID
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=279+grafo=9/9]]
    BrzPonteiro ServerProcessItemNetExecCommandBP(void* a0, unsigned long long a1, bool a2, unsigned long long a3, void* a4) const
    {
        return NativeCall<void*, void*, unsigned long long, bool, unsigned long long, void*>(this, "AShooterPlayerController.ServerProcessItemNetExecCommandBP(UPrimalInventoryComponent*,FItemNetID,bool,FName,FBPNetExecParams)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerProcessItemNetExecCommandBP_Implementation(UPrimalInventoryCompon
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=224+bytes40+grafo=7/7]]
    void ServerProcessItemNetExecCommandBP_Implementation(void* a0, unsigned long long a1, bool a2, unsigned long long a3, void* a4) const
    {
        NativeCall<void, void*, unsigned long long, bool, unsigned long long, void*>(this, "AShooterPlayerController.ServerProcessItemNetExecCommandBP_Implementation(UPrimalInventoryComponent*,FItemNetID,bool,FName,FBPNetExecParams)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerReadMessageOFTheDay()
    // endereco: cache_pdb_25090264
    void ServerReadMessageOFTheDay() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerReadMessageOFTheDay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerReadMessageOFTheDay_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerReadMessageOFTheDay_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerReadMessageOFTheDay_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerReleaseSeatingStructure()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void ServerReleaseSeatingStructure() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerReleaseSeatingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerReleaseSeatingStructure_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerReleaseSeatingStructure_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerReleaseSeatingStructure_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRemovePassenger()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=45+chamadores=2]]
    void ServerRemovePassenger() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRemovePassenger()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRemovePassenger_Implementation()
    // endereco: cache_pdb_25090264
    void ServerRemovePassenger_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRemovePassenger_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRemovePawnItem(FItemNetID,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=9]]
    void ServerRemovePawnItem(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "AShooterPlayerController.ServerRemovePawnItem(FItemNetID,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRemovePawnItem_Implementation(FItemNetID,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRemovePawnItem_Implementation(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "AShooterPlayerController.ServerRemovePawnItem_Implementation(FItemNetID,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerRemoveSteamItemSucceeded()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRemoveSteamItemSucceeded() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRemoveSteamItemSucceeded()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRemoveSteamItemSucceeded_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerRemoveSteamItemSucceeded_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRemoveSteamItemSucceeded_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRepairItem(UPrimalInventoryComponent*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerRepairItem(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRepairItem(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRepairItem_Implementation(UPrimalInventoryComponent*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerRepairItem_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRepairItem_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRepeatMultiUse(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRepeatMultiUse(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerRepeatMultiUse(UObject*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestActivateSkill_Implementation(FName,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestActivateSkill_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerRequestActivateSkill_Implementation(FName,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestActorItems(UPrimalInventoryComponent*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestActorItems(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "AShooterPlayerController.ServerRequestActorItems(UPrimalInventoryComponent*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestActorItems_Implementation(UPrimalInventoryComponent*,bool,
    // endereco: cache_pdb_25090264
    void ServerRequestActorItems_Implementation(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "AShooterPlayerController.ServerRequestActorItems_Implementation(UPrimalInventoryComponent*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestAddAsSortingInput_Implementation(UPrimalInventoryComponent
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestAddAsSortingInput_Implementation(void* a0, void* a1, unsigned long long a2, int a3) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestAddAsSortingInput_Implementation(UPrimalInventoryComponent*,UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestAddSkillToSlot(FName,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestAddSkillToSlot(unsigned long long a0, int a1, void* a2) const
    {
        NativeCall<void, unsigned long long, int, void*>(this, "AShooterPlayerController.ServerRequestAddSkillToSlot(FName,int,UObject*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestAddSkillToSlot_Implementation(FName,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestAddSkillToSlot_Implementation(unsigned long long a0, int a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, int, void*>(this, "AShooterPlayerController.ServerRequestAddSkillToSlot_Implementation(FName,int,UObject*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestApplyCustomCosmetic(FItemNetID,__int64,int,FCustomCosmetic
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestApplyCustomCosmetic(unsigned long long a0, long long a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, long long, int, void*, void*>(this, "AShooterPlayerController.ServerRequestApplyCustomCosmetic(FItemNetID,__int64,int,FCustomCosmeticAdditionalSettings,UPrimalInventoryComponent*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestApplyCustomCosmetic_Implementation(FItemNetID,__int64,int,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestApplyCustomCosmetic_Implementation(unsigned long long a0, long long a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, long long, int, void*, void*>(this, "AShooterPlayerController.ServerRequestApplyCustomCosmetic_Implementation(FItemNetID,__int64,int,FCustomCosmeticAdditionalSettings,UPrimalInventoryComponent*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestContainerFuel(APrimalStructureItemContainer*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestContainerFuel(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestContainerFuel(APrimalStructureItemContainer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestContainerFuel_Implementation(APrimalStructureItemContainer
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestContainerFuel_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestContainerFuel_Implementation(APrimalStructureItemContainer*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerRequestCreateMissionDataBuff()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestCreateMissionDataBuff() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestCreateMissionDataBuff()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ServerRequestCreateNewPlayerWithArkData(TArray<unsignedchar,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCreateNewPlayerWithArkData(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestCreateNewPlayerWithArkData(TArray<unsignedchar,TSizedDefaultAllocator<32>>&,unsigned__int64,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestCustomTrackedActorList(int,int,FString&,int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestCustomTrackedActorList(int a0, int a1, const FString& a2, int a3, bool a4) const
    {
        NativeCall<void, int, int, void*, int, bool>(this, "AShooterPlayerController.ServerRequestCustomTrackedActorList(int,int,FString&,int,bool)", a0, a1, const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestCustomTrackedActorList(int a0, int a1, FString* a2, int a3, bool a4) const
    { ServerRequestCustomTrackedActorList(a0, a1, *a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestCustomTrackedActorList_Implementation(int,int,FString&,int
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCustomTrackedActorList_Implementation(int a0, int a1, const FString& a2, int a3, bool a4) const
    {
        NativeCall<void, int, int, void*, int, bool>(this, "AShooterPlayerController.ServerRequestCustomTrackedActorList_Implementation(int,int,FString&,int,bool)", a0, a1, const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestCustomTrackedActorList_Implementation(int a0, int a1, FString* a2, int a3, bool a4) const
    { ServerRequestCustomTrackedActorList_Implementation(a0, a1, *a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestCustomTrackedActorList_ServerLogic(int,int,FString&,int,bo
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCustomTrackedActorList_ServerLogic(int a0, int a1, const FString& a2, int a3, bool a4) const
    {
        NativeCall<void, int, int, void*, int, bool>(this, "AShooterPlayerController.ServerRequestCustomTrackedActorList_ServerLogic(int,int,FString&,int,bool)", a0, a1, const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestCustomTrackedActorList_ServerLogic(int a0, int a1, FString* a2, int a3, bool a4) const
    { ServerRequestCustomTrackedActorList_ServerLogic(a0, a1, *a2, a3, a4); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestDinoAncestors(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDinoAncestors(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestDinoAncestors(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDinoAncestors_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDinoAncestors_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestDinoAncestors_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDinoCharStats_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDinoCharStats_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestDinoCharStats_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDownloadDino(FARKTributeDino)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDownloadDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestDownloadDino(FARKTributeDino)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDownloadDino_Implementation(FARKTributeDino)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDownloadDino_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestDownloadDino_Implementation(FARKTributeDino)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestDownloadPlayerCharacter(FArkTributePlayerData,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestDownloadPlayerCharacter(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "AShooterPlayerController.ServerRequestDownloadPlayerCharacter(FArkTributePlayerData,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDownloadPlayerCharacter_Implementation(FArkTributePlayerDa
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDownloadPlayerCharacter_Implementation(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "AShooterPlayerController.ServerRequestDownloadPlayerCharacter_Implementation(FArkTributePlayerData,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDropAllItems(FString&,FString&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDropAllItems(const FString& a0, const FString& a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.ServerRequestDropAllItems(FString&,FString&,bool,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestDropAllItems(FString* a0, FString* a1, bool a2, bool a3) const
    { ServerRequestDropAllItems(*a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestDropAllItems_Implementation(FString&,FString&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestDropAllItems_Implementation(const FString& a0, const FString& a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.ServerRequestDropAllItems_Implementation(FString&,FString&,bool,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestDropAllItems_Implementation(FString* a0, FString* a1, bool a2, bool a3) const
    { ServerRequestDropAllItems_Implementation(*a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestEquipGhostCustomCosmetic(EPrimalEquipmentType::Type,__int6
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestEquipGhostCustomCosmetic(int a0, long long a1, int a2, void* a3) const
    {
        return NativeCall<void*, int, long long, int, void*>(this, "AShooterPlayerController.ServerRequestEquipGhostCustomCosmetic(EPrimalEquipmentType::Type,__int64,int,FCustomCosmeticAdditionalSettings)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestEquipGhostCustomCosmetic_Implementation(EPrimalEquipmentTy
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestEquipGhostCustomCosmetic_Implementation(int a0, long long a1, int a2, void* a3) const
    {
        return NativeCall<void*, int, long long, int, void*>(this, "AShooterPlayerController.ServerRequestEquipGhostCustomCosmetic_Implementation(EPrimalEquipmentType::Type,__int64,int,FCustomCosmeticAdditionalSettings)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestEquipRemoteGhostCustomCosmetic(UPrimalInventoryComponent*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestEquipRemoteGhostCustomCosmetic(void* a0, int a1, long long a2, int a3, void* a4) const
    {
        return NativeCall<void*, void*, int, long long, int, void*>(this, "AShooterPlayerController.ServerRequestEquipRemoteGhostCustomCosmetic(UPrimalInventoryComponent*,EPrimalEquipmentType::Type,__int64,int,FCustomCosmeticAdditionalSettings)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestEquipRemoteGhostCustomCosmetic_Implementation(UPrimalInven
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestEquipRemoteGhostCustomCosmetic_Implementation(void* a0, int a1, long long a2, int a3, void* a4) const
    {
        return NativeCall<void*, void*, int, long long, int, void*>(this, "AShooterPlayerController.ServerRequestEquipRemoteGhostCustomCosmetic_Implementation(UPrimalInventoryComponent*,EPrimalEquipmentType::Type,__int64,int,FCustomCosmeticAdditionalSettings)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerRequestExtendedStructureRange()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestExtendedStructureRange() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestExtendedStructureRange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestExtendedStructureRange_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=111]]
    BrzPonteiro ServerRequestExtendedStructureRange_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ServerRequestExtendedStructureRange_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestFastTravelToPoint(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestFastTravelToPoint(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestFastTravelToPoint(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestFastTravelToPoint_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestFastTravelToPoint_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestFastTravelToPoint_Implementation(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventorySwapItems(UPrimalInventoryComponent*,FItemNetID,F
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventorySwapItems(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long>(this, "AShooterPlayerController.ServerRequestInventorySwapItems(UPrimalInventoryComponent*,FItemNetID,FItemNetID)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventorySwapItems_Implementation(UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventorySwapItems_Implementation(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long>(this, "AShooterPlayerController.ServerRequestInventorySwapItems_Implementation(UPrimalInventoryComponent*,FItemNetID,FItemNetID)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItem(UPrimalInventoryComponent*,FItemNetID,int
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventoryUseItem(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItem(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestInventoryUseItemRemoteWithItemLocal(UPrimalInventoryCompon
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestInventoryUseItemRemoteWithItemLocal(void* a0, void* a1, unsigned long long a2, unsigned long long a3, int a4) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemRemoteWithItemLocal(UPrimalInventoryComponent*,UPrimalInventoryComponent*,FItemNetID,FItemNetID,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItemRemoteWithItemLocal_Implementation(UPrimal
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestInventoryUseItemRemoteWithItemLocal_Implementation(void* a0, void* a1, unsigned long long a2, unsigned long long a3, int a4) const
    {
        NativeCall<void, void*, void*, unsigned long long, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemRemoteWithItemLocal_Implementation(UPrimalInventoryComponent*,UPrimalInventoryComponent*,FItemNetID,FItemNetID,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItemWithActor(AActor*,UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventoryUseItemWithActor(void* a0, void* a1, unsigned long long a2, int a3) const
    {
        NativeCall<void, void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithActor(AActor*,UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItemWithActor_Implementation(AActor*,UPrimalIn
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventoryUseItemWithActor_Implementation(void* a0, void* a1, unsigned long long a2, int a3) const
    {
        NativeCall<void, void*, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithActor_Implementation(AActor*,UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItemWithItem(UPrimalInventoryComponent*,FItemN
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventoryUseItemWithItem(void* a0, unsigned long long a1, unsigned long long a2, int a3) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithItem(UPrimalInventoryComponent*,FItemNetID,FItemNetID,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItemWithItem_Implementation(UPrimalInventoryCo
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestInventoryUseItemWithItem_Implementation(void* a0, unsigned long long a1, unsigned long long a2, int a3) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithItem_Implementation(UPrimalInventoryComponent*,FItemNetID,FItemNetID,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestInventoryUseItem_Implementation(UPrimalInventoryComponent*
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestInventoryUseItem_Implementation(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItem_Implementation(UPrimalInventoryComponent*,FItemNetID,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestItemForStructureSkin_Implementation(APrimalStructure*,FIte
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestItemForStructureSkin_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestItemForStructureSkin_Implementation(APrimalStructure*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestLevelUp_Implementation(UPrimalCharacterStatusComponent*,EP
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestLevelUp_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerRequestLevelUp_Implementation(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerRequestMyTribeOnlineList()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestMyTribeOnlineList() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestMyTribeOnlineList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestMyTribeOnlineList_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestMyTribeOnlineList_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestMyTribeOnlineList_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestPlaceStructure(int,UE::Math::TVector<double>,UE::Math::TRo
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestPlaceStructure(int a0, void* a1, void* a2, void* a3, unsigned long long a4, void* a5, void* a6, bool a7, bool a8, int a9) const
    {
        NativeCall<void, int, void*, void*, void*, unsigned long long, void*, void*, bool, bool, int>(this, "AShooterPlayerController.ServerRequestPlaceStructure(int,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,FItemNetID,FPlacementData,FBPNetExecParams,bool,bool,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestPlaceStructureSkin(APrimalStructure*,TSubclassOf<APrimalSt
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestPlaceStructureSkin(void* a0, void* a1, long long a2, int a3) const
    {
        NativeCall<void, void*, void*, long long, int>(this, "AShooterPlayerController.ServerRequestPlaceStructureSkin(APrimalStructure*,TSubclassOf<APrimalStructure>,__int64,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestPlaceStructureSkin_Implementation(APrimalStructure*,TSubcl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestPlaceStructureSkin_Implementation(void* a0, void* a1, long long a2, int a3) const
    {
        return NativeCall<void*, void*, void*, long long, int>(this, "AShooterPlayerController.ServerRequestPlaceStructureSkin_Implementation(APrimalStructure*,TSubclassOf<APrimalStructure>,__int64,int)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestRemoteDropAllItems(UPrimalInventoryComponent*,FString&,FSt
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestRemoteDropAllItems(void* a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.ServerRequestRemoteDropAllItems(UPrimalInventoryComponent*,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestRemoteDropAllItems(void* a0, FString* a1, FString* a2) const
    { ServerRequestRemoteDropAllItems(a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoteDropAllItems_Implementation(UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoteDropAllItems_Implementation(void* a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterPlayerController.ServerRequestRemoteDropAllItems_Implementation(UPrimalInventoryComponent*,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerRequestRemoteDropAllItems_Implementation(void* a0, FString* a1, FString* a2) const
    { ServerRequestRemoteDropAllItems_Implementation(a0, *a1, *a2); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestRemoveAsSortingInput(UPrimalInventoryComponent*,TSubclassO
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoveAsSortingInput(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ServerRequestRemoveAsSortingInput(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestRemoveAsSortingInput_Implementation(UPrimalInventoryCompon
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestRemoveAsSortingInput_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ServerRequestRemoveAsSortingInput_Implementation(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestRemoveCustomCosmetic(FItemNetID,UPrimalInventoryComponent*
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ServerRequestRemoveCustomCosmetic(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerRequestRemoveCustomCosmetic(FItemNetID,UPrimalInventoryComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestRemoveCustomCosmetic_Implementation(FItemNetID,UPrimalInve
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestRemoveCustomCosmetic_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerRequestRemoveCustomCosmetic_Implementation(FItemNetID,UPrimalInventoryComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoveDinoFromTamingListByID_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoveDinoFromTamingListByID_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRemoveDinoFromTamingListByID_Implementation(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoveDinoFromTamingListByID_ServerLogic(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoveDinoFromTamingListByID_ServerLogic(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRemoveDinoFromTamingListByID_ServerLogic(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestRemoveItemSkin(UPrimalInventoryComponent*,FItemNetID)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ServerRequestRemoveItemSkin(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestRemoveItemSkin(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestRemoveItemSkinOnly(UPrimalInventoryComponent*,FItemNetID)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ServerRequestRemoveItemSkinOnly(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestRemoveItemSkinOnly(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoveItemSkin_Implementation(UPrimalInventoryComponent*,F
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoveItemSkin_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestRemoveItemSkin_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoveWeaponAccessoryOnly(UPrimalInventoryComponent*,FItem
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestRemoveWeaponAccessoryOnly(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestRemoveWeaponAccessoryOnly(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoveWeaponClipAmmo(UPrimalInventoryComponent*,FItemNetID
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestRemoveWeaponClipAmmo(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestRemoveWeaponClipAmmo(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRemoveWeaponClipAmmo_Implementation(UPrimalInventoryCompon
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRemoveWeaponClipAmmo_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestRemoveWeaponClipAmmo_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestRespawnAtPoint(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRespawnAtPoint(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRespawnAtPoint(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestRespawnAtPoint_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestRespawnAtPoint_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRespawnAtPoint_Implementation(int,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestSetDefaultDestination(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSetDefaultDestination(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestSetDefaultDestination(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestSetDefaultDestination_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSetDefaultDestination_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestSetDefaultDestination_Implementation(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestSetPin(UObject*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSetPin(void* a0, int a1, bool a2, int a3) const
    {
        NativeCall<void, void*, int, bool, int>(this, "AShooterPlayerController.ServerRequestSetPin(UObject*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestSetPin_Implementation(UObject*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestSetPin_Implementation(void* a0, int a1, bool a2, int a3) const
    {
        NativeCall<void, void*, int, bool, int>(this, "AShooterPlayerController.ServerRequestSetPin_Implementation(UObject*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestShowLeaderboards(TSubclassOf<ULeaderboard>,FName)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestShowLeaderboards(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestShowLeaderboards(TSubclassOf<ULeaderboard>,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestShowLeaderboards_Implementation(TSubclassOf<ULeaderboard>,
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestShowLeaderboards_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestShowLeaderboards_Implementation(TSubclassOf<ULeaderboard>,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestSkinToggleIgnoreCharacterCustomizationProportions_Implemen
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestSkinToggleIgnoreCharacterCustomizationProportions_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestSkinToggleIgnoreCharacterCustomizationProportions_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestStructureGhostCustomCosmetic(int,__int64,int,FCustomCosmet
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestStructureGhostCustomCosmetic(int a0, long long a1, int a2, void* a3) const
    {
        return NativeCall<void*, int, long long, int, void*>(this, "AShooterPlayerController.ServerRequestStructureGhostCustomCosmetic(int,__int64,int,FCustomCosmeticAdditionalSettings)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestStructureGhostCustomCosmetic_Implementation(int,__int64,in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestStructureGhostCustomCosmetic_Implementation(int a0, long long a1, int a2, void* a3) const
    {
        return NativeCall<void*, int, long long, int, void*>(this, "AShooterPlayerController.ServerRequestStructureGhostCustomCosmetic_Implementation(int,__int64,int,FCustomCosmeticAdditionalSettings)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestStructuresPlacedOnFloor_Implementation(TArray<APrimalStruc
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestStructuresPlacedOnFloor_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestStructuresPlacedOnFloor_Implementation(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestTamingInfoList_ServerLogic()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestTamingInfoList_ServerLogic() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestTamingInfoList_ServerLogic()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestToggleInventorySorting(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestToggleInventorySorting(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerRequestToggleInventorySorting(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestToggleInventorySorting_Implementation(UPrimalInventoryComp
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestToggleInventorySorting_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerRequestToggleInventorySorting_Implementation(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestTradeData_Implementation(APrimalStructureItemContainer*,do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestTradeData_Implementation(void* a0, double a1) const
    {
        return NativeCall<void*, void*, double>(this, "AShooterPlayerController.ServerRequestTradeData_Implementation(APrimalStructureItemContainer*,double)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerRequestTradeLog(APrimalStructureMarket*,double)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestTradeLog(void* a0, double a1) const
    {
        NativeCall<void, void*, double>(this, "AShooterPlayerController.ServerRequestTradeLog(APrimalStructureMarket*,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestTradeLog_Implementation(APrimalStructureMarket*,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestTradeLog_Implementation(void* a0, double a1) const
    {
        return NativeCall<void*, void*, double>(this, "AShooterPlayerController.ServerRequestTradeLog_Implementation(APrimalStructureMarket*,double)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerRequestTribeLog()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ServerRequestTribeLog() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestTribeLog()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestTribeLog_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=89]]
    void ServerRequestTribeLog_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestTribeLog_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestUnlockShipSkill_Implementation(APrimalShip*,FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerRequestUnlockShipSkill_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ServerRequestUnlockShipSkill_Implementation(APrimalShip*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerRequestUnlockSkill_Implementation(FName,UObject*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerRequestUnlockSkill_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerRequestUnlockSkill_Implementation(FName,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestUpdateActiveMissionTags()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestUpdateActiveMissionTags() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestUpdateActiveMissionTags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestUpdateActiveMissionTags_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestUpdateActiveMissionTags_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerRequestUpdateActiveMissionTags_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestUpdateTrackedWaypointsAndMapPlayers(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void ServerRequestUpdateTrackedWaypointsAndMapPlayers(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerRequestUpdateTrackedWaypointsAndMapPlayers(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestUpdateTrackedWaypointsAndMapPlayers_ServerLogic(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestUpdateTrackedWaypointsAndMapPlayers_ServerLogic(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerRequestUpdateTrackedWaypointsAndMapPlayers_ServerLogic(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerRequestUpdateTrackedWaypointsOnly(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestUpdateTrackedWaypointsOnly(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerRequestUpdateTrackedWaypointsOnly(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerRequestUpdateTrackedWaypointsOnly_ServerLogic(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=128]]
    void ServerRequestUpdateTrackedWaypointsOnly_ServerLogic(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerRequestUpdateTrackedWaypointsOnly_ServerLogic(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerResizePaint_Implementation(UStructurePaintingComponent*,float,flo
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerResizePaint_Implementation(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "AShooterPlayerController.ServerResizePaint_Implementation(UStructurePaintingComponent*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSelectedCustomItemAction_Implementation(UPrimalInventoryComponent
    // endereco: casamento de bytes com a build de referencia
    void ServerSelectedCustomItemAction_Implementation(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long>(this, "AShooterPlayerController.ServerSelectedCustomItemAction_Implementation(UPrimalInventoryComponent*,FItemNetID,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSendArkDataPayload(FGuid,EPrimalARKTributeDataType::Type,TArray<u
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerSendArkDataPayload(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "AShooterPlayerController.ServerSendArkDataPayload(FGuid,EPrimalARKTributeDataType::Type,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   AShooterPlayerController.ServerSendArkDataPayloadBegin(FGuid,EPrimalARKTributeDataType::Type,FSt
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=537+bytes40+grafo=4/4]]
    void ServerSendArkDataPayloadBegin(void* a0, int a1, const FString& a2, const FString& a3, const FString& a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    {
        NativeCall<void, void*, int, void*, void*, void*, void*, unsigned int, unsigned int, int>(this, "AShooterPlayerController.ServerSendArkDataPayloadBegin(FGuid,EPrimalARKTributeDataType::Type,FString&,FString&,FString&,TArray<FString,TSizedDefaultAllocator<32>>&,unsignedint,unsignedint,int)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), const_cast<FString*>(&a4), a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSendArkDataPayloadBegin(void* a0, int a1, FString* a2, FString* a3, FString* a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    { ServerSendArkDataPayloadBegin(a0, a1, *a2, *a3, *a4, a5, a6, a7, a8); }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.ServerSendArkDataPayloadBegin_Implementation(FGuid,EPrimalARKTributeDat
    // endereco: casamento de bytes com a build de referencia
    void ServerSendArkDataPayloadBegin_Implementation(void* a0, int a1, const FString& a2, const FString& a3, const FString& a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    {
        NativeCall<void, void*, int, void*, void*, void*, void*, unsigned int, unsigned int, int>(this, "AShooterPlayerController.ServerSendArkDataPayloadBegin_Implementation(FGuid,EPrimalARKTributeDataType::Type,FString&,FString&,FString&,TArray<FString,TSizedDefaultAllocator<32>>&,unsignedint,unsignedint,int)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), const_cast<FString*>(&a4), a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSendArkDataPayloadBegin_Implementation(void* a0, int a1, FString* a2, FString* a3, FString* a4, void* a5, unsigned int a6, unsigned int a7, int a8) const
    { ServerSendArkDataPayloadBegin_Implementation(a0, a1, *a2, *a3, *a4, a5, a6, a7, a8); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSendArkDataPayloadEnd(FGuid,EPrimalARKTributeDataType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSendArkDataPayloadEnd(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterPlayerController.ServerSendArkDataPayloadEnd(FGuid,EPrimalARKTributeDataType::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSendArkDataPayloadEnd_Implementation(FGuid,EPrimalARKTributeDataT
    // endereco: casamento de bytes com a build de referencia
    void ServerSendArkDataPayloadEnd_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerSendArkDataPayloadEnd_Implementation(FGuid,EPrimalARKTributeDataType::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSendArkDataPayload_Implementation(FGuid,EPrimalARKTributeDataType
    // endereco: casamento de bytes com a build de referencia
    void ServerSendArkDataPayload_Implementation(void* a0, int a1, void* a2) const
    {
        NativeCall<void, void*, int, void*>(this, "AShooterPlayerController.ServerSendArkDataPayload_Implementation(FGuid,EPrimalARKTributeDataType::Type,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSendChatMessage(FString&,EChatSendMode::Type,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerSendChatMessage(const FString& a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "AShooterPlayerController.ServerSendChatMessage(FString&,EChatSendMode::Type,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSendChatMessage(FString* a0, int a1, int a2) const
    { ServerSendChatMessage(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSendChatMessage_Implementation(FString&,EChatSendMode::Type,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerSendChatMessage_Implementation(const FString& a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "AShooterPlayerController.ServerSendChatMessage_Implementation(FString&,EChatSendMode::Type,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSendChatMessage_Implementation(FString* a0, int a1, int a2) const
    { ServerSendChatMessage_Implementation(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSendDirectMessage(FString&,FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=293+bytes40+chamadores=17]]
    void ServerSendDirectMessage(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ServerSendDirectMessage(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSendDirectMessage(FString* a0, FString* a1) const
    { ServerSendDirectMessage(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSendDirectMessage_Implementation(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerSendDirectMessage_Implementation(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ServerSendDirectMessage_Implementation(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSendDirectMessage_Implementation(FString* a0, FString* a1) const
    { ServerSendDirectMessage_Implementation(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetActiveWaypointTrackedActorViaCharacterIndex_Combined(int,bool,
    // endereco: casamento de bytes com a build de referencia
    void ServerSetActiveWaypointTrackedActorViaCharacterIndex_Combined(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerController.ServerSetActiveWaypointTrackedActorViaCharacterIndex_Combined(int,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerSetActiveWaypointTrackedCreatureViaCharacterIndex_ServerLogic(int
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetActiveWaypointTrackedCreatureViaCharacterIndex_ServerLogic(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetActiveWaypointTrackedCreatureViaCharacterIndex_ServerLogic(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerSetActiveWaypointTrackedPlayerViaCharacterIndex_ServerLogic(int,b
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetActiveWaypointTrackedPlayerViaCharacterIndex_ServerLogic(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetActiveWaypointTrackedPlayerViaCharacterIndex_ServerLogic(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetControlRotation(UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetControlRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerSetControlRotation(UE::Math::TRotator<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetDeathWaypointInvisible(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetDeathWaypointInvisible(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ServerSetDeathWaypointInvisible(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetDeathWaypointInvisible_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetDeathWaypointInvisible_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ServerSetDeathWaypointInvisible_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetDeathWaypointInvisible_ServerLogic(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerSetDeathWaypointInvisible_ServerLogic(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ServerSetDeathWaypointInvisible_ServerLogic(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetDeathWaypointVisible_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetDeathWaypointVisible_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.ServerSetDeathWaypointVisible_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetDiscordID(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetDiscordID(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.ServerSetDiscordID(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetDiscordID_Implementation(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetDiscordID_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterPlayerController.ServerSetDiscordID_Implementation(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetFavoriteTrackedActorViaCharacterIndex_Combined(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetFavoriteTrackedActorViaCharacterIndex_Combined(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerController.ServerSetFavoriteTrackedActorViaCharacterIndex_Combined(int,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerSetFavoriteTrackedCreatureViaCharacterIndex_ServerLogic(int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetFavoriteTrackedCreatureViaCharacterIndex_ServerLogic(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetFavoriteTrackedCreatureViaCharacterIndex_ServerLogic(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetFavoriteTrackedPlayerViaCharacterIndex(int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetFavoriteTrackedPlayerViaCharacterIndex(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetFavoriteTrackedPlayerViaCharacterIndex(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerSetFavoriteTrackedPlayerViaCharacterIndex_ServerLogic(int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetFavoriteTrackedPlayerViaCharacterIndex_ServerLogic(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetFavoriteTrackedPlayerViaCharacterIndex_ServerLogic(int,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerSetFreeCraftingQuantity(UPrimalInventoryComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetFreeCraftingQuantity(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerSetFreeCraftingQuantity(UPrimalInventoryComponent*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetFreeCraftingQuantity_Implementation(UPrimalInventoryComponent*
    // endereco: casamento de bytes com a build de referencia
    void ServerSetFreeCraftingQuantity_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerSetFreeCraftingQuantity_Implementation(UPrimalInventoryComponent*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetItemBalloonLocation_Implementation(APrimalStructureMovingConta
    // endereco: casamento de bytes com a build de referencia
    void ServerSetItemBalloonLocation_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ServerSetItemBalloonLocation_Implementation(APrimalStructureMovingContainer*,FPrimalMapMarkerEntryData)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetMessageOfTheDay_Implementation(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=268+grafo=8/8]]
    void ServerSetMessageOfTheDay_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerSetMessageOfTheDay_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSetMessageOfTheDay_Implementation(FString* a0) const
    { ServerSetMessageOfTheDay_Implementation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetOwns(bool,bool,bool,bool,bool,TArray<TSubclassOf<UDLC>,TSizedD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetOwns(bool a0, bool a1, bool a2, bool a3, bool a4, void* a5) const
    {
        return NativeCall<void*, bool, bool, bool, bool, bool, void*>(this, "AShooterPlayerController.ServerSetOwns(bool,bool,bool,bool,bool,TArray<TSubclassOf<UDLC>,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetOwns_Implementation(bool,bool,bool,bool,bool,TArray<TSubclassO
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetOwns_Implementation(bool a0, bool a1, bool a2, bool a3, bool a4, void* a5) const
    {
        return NativeCall<void*, bool, bool, bool, bool, bool, void*>(this, "AShooterPlayerController.ServerSetOwns_Implementation(bool,bool,bool,bool,bool,TArray<TSubclassOf<UDLC>,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetPlayerFinishedNamedEvent_Implementation(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetPlayerFinishedNamedEvent_Implementation(unsigned long long a0, bool a1) const
    {
        return NativeCall<void*, unsigned long long, bool>(this, "AShooterPlayerController.ServerSetPlayerFinishedNamedEvent_Implementation(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetSlomoRateFromSpectator_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetSlomoRateFromSpectator_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.ServerSetSlomoRateFromSpectator_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetSpectatorLocation_Implementation(UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    void ServerSetSpectatorLocation_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.ServerSetSpectatorLocation_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerSetSubscribedApp(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetSubscribedApp(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetSubscribedApp(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetSubscribedApp_Implementation(int,bool)
    // endereco: cache_pdb_25090264
    void ServerSetSubscribedApp_Implementation(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetSubscribedApp_Implementation(int,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerSetSupressAdminIcon(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetSupressAdminIcon(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetSupressAdminIcon(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetSupressAdminIcon_Implementation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetSupressAdminIcon_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetSupressAdminIcon_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerSetThrottleAndControlRotation_Implementation(float,float,float,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerSetThrottleAndControlRotation_Implementation(float a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, float, float, float, void*>(this, "AShooterPlayerController.ServerSetThrottleAndControlRotation_Implementation(float,float,float,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerSetVRPlayer(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetVRPlayer(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetVRPlayer(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSetVRPlayer_Implementation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetVRPlayer_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetVRPlayer_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerShowMessageOfTheDay_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ServerShowMessageOfTheDay_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerShowMessageOfTheDay_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerSpectateToPlayerByID_Implementation(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    void ServerSpectateToPlayerByID_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ServerSpectateToPlayerByID_Implementation(unsigned__int64)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerStartWeaponAltFire(AShooterWeapon*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void ServerStartWeaponAltFire(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerStartWeaponAltFire(AShooterWeapon*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerStartWeaponFire(AShooterWeapon*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void ServerStartWeaponFire(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerStartWeaponFire(AShooterWeapon*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerStopWeaponAltFire(AShooterWeapon*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void ServerStopWeaponAltFire(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerStopWeaponAltFire(AShooterWeapon*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerStopWeaponFire(AShooterWeapon*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerStopWeaponFire(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerStopWeaponFire(AShooterWeapon*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerStructureSetSkinPersistentData_Implementation(APrimalStructure*,F
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerStructureSetSkinPersistentData_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerController.ServerStructureSetSkinPersistentData_Implementation(APrimalStructure*,FSkinNetMessageParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerStructureSkinNetMessage_Implementation(APrimalStructure*,FName,FS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerStructureSkinNetMessage_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AShooterPlayerController.ServerStructureSkinNetMessage_Implementation(APrimalStructure*,FName,FSkinNetMessageParams&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTakeItemFromArkInventoryAfterRefresh()
    // endereco: casamento de bytes com a build de referencia
    void ServerTakeItemFromArkInventoryAfterRefresh() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerTakeItemFromArkInventoryAfterRefresh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerToggleMuteExtraEquipmentSounds_Implementation(UPrimalInventoryCom
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerToggleMuteExtraEquipmentSounds_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "AShooterPlayerController.ServerToggleMuteExtraEquipmentSounds_Implementation(UPrimalInventoryComponent*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTogglePOIVisibilityForTrackedActorWaypoint_Combined(int,bool,bool
    // endereco: casamento de bytes com a build de referencia
    void ServerTogglePOIVisibilityForTrackedActorWaypoint_Combined(int a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, int, bool, bool, bool>(this, "AShooterPlayerController.ServerTogglePOIVisibilityForTrackedActorWaypoint_Combined(int,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTogglePOIVisibilityForTrackedCreatureWaypoint_Implementation(int,
    // endereco: casamento de bytes com a build de referencia
    void ServerTogglePOIVisibilityForTrackedCreatureWaypoint_Implementation(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerTogglePOIVisibilityForTrackedCreatureWaypoint_Implementation(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerTogglePOIVisibilityForTrackedCreatureWaypoint_ServerLogic(int,boo
    // endereco: casamento de bytes com a build de referencia
    void ServerTogglePOIVisibilityForTrackedCreatureWaypoint_ServerLogic(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerTogglePOIVisibilityForTrackedCreatureWaypoint_ServerLogic(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTogglePOIVisibilityForTrackedPlayerWaypoint_Implementation(int,bo
    // endereco: casamento de bytes com a build de referencia
    void ServerTogglePOIVisibilityForTrackedPlayerWaypoint_Implementation(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerTogglePOIVisibilityForTrackedPlayerWaypoint_Implementation(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerTogglePOIVisibilityForTrackedPlayerWaypoint_ServerLogic(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerTogglePOIVisibilityForTrackedPlayerWaypoint_ServerLogic(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerTogglePOIVisibilityForTrackedPlayerWaypoint_ServerLogic(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferAllFromRemoteInventory(UPrimalInventoryComponent*,FString
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerTransferAllFromRemoteInventory(void* a0, const FString& a1, const FString& a2, const FString& a3, bool a4) const
    {
        NativeCall<void, void*, void*, void*, void*, bool>(this, "AShooterPlayerController.ServerTransferAllFromRemoteInventory(UPrimalInventoryComponent*,FString&,FString&,FString&,bool)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTransferAllFromRemoteInventory(void* a0, FString* a1, FString* a2, FString* a3, bool a4) const
    { ServerTransferAllFromRemoteInventory(a0, *a1, *a2, *a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferAllFromRemoteInventory_Implementation(UPrimalInventoryCom
    // endereco: cache_pdb_25090264
    void ServerTransferAllFromRemoteInventory_Implementation(void* a0, const FString& a1, const FString& a2, const FString& a3, bool a4) const
    {
        NativeCall<void, void*, void*, void*, void*, bool>(this, "AShooterPlayerController.ServerTransferAllFromRemoteInventory_Implementation(UPrimalInventoryComponent*,FString&,FString&,FString&,bool)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTransferAllFromRemoteInventory_Implementation(void* a0, FString* a1, FString* a2, FString* a3, bool a4) const
    { ServerTransferAllFromRemoteInventory_Implementation(a0, *a1, *a2, *a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferAllToRemoteInventory(UPrimalInventoryComponent*,FString&,
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerTransferAllToRemoteInventory(void* a0, const FString& a1, const FString& a2, const FString& a3, bool a4, bool a5, bool a6) const
    {
        NativeCall<void, void*, void*, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.ServerTransferAllToRemoteInventory(UPrimalInventoryComponent*,FString&,FString&,FString&,bool,bool,bool)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTransferAllToRemoteInventory(void* a0, FString* a1, FString* a2, FString* a3, bool a4, bool a5, bool a6) const
    { ServerTransferAllToRemoteInventory(a0, *a1, *a2, *a3, a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferAllToRemoteInventory_Implementation(UPrimalInventoryCompo
    // endereco: casamento de bytes com a build de referencia
    void ServerTransferAllToRemoteInventory_Implementation(void* a0, const FString& a1, const FString& a2, const FString& a3, bool a4, bool a5, bool a6) const
    {
        NativeCall<void, void*, void*, void*, void*, bool, bool, bool>(this, "AShooterPlayerController.ServerTransferAllToRemoteInventory_Implementation(UPrimalInventoryComponent*,FString&,FString&,FString&,bool,bool,bool)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerTransferAllToRemoteInventory_Implementation(void* a0, FString* a1, FString* a2, FString* a3, bool a4, bool a5, bool a6) const
    { ServerTransferAllToRemoteInventory_Implementation(a0, *a1, *a2, *a3, a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferFromRemoteInventory(UPrimalInventoryComponent*,FItemNetID
    // endereco: casamento de bytes com a build de referencia
    void ServerTransferFromRemoteInventory(void* a0, unsigned long long a1, int a2, int a3, bool a4) const
    {
        NativeCall<void, void*, unsigned long long, int, int, bool>(this, "AShooterPlayerController.ServerTransferFromRemoteInventory(UPrimalInventoryComponent*,FItemNetID,int,int,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferFromRemoteInventory_Implementation(UPrimalInventoryCompon
    // endereco: casamento de bytes com a build de referencia
    void ServerTransferFromRemoteInventory_Implementation(void* a0, unsigned long long a1, int a2, int a3, bool a4) const
    {
        NativeCall<void, void*, unsigned long long, int, int, bool>(this, "AShooterPlayerController.ServerTransferFromRemoteInventory_Implementation(UPrimalInventoryComponent*,FItemNetID,int,int,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerTransferFromRemoteToRemoteInventory(UPrimalInventoryComponent*,UP
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerTransferFromRemoteToRemoteInventory(void* a0, void* a1, unsigned long long a2, int a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, int, bool>(this, "AShooterPlayerController.ServerTransferFromRemoteToRemoteInventory(UPrimalInventoryComponent*,UPrimalInventoryComponent*,FItemNetID,int,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerTransferFromRemoteToRemoteInventory_Implementation(UPrimalInvento
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerTransferFromRemoteToRemoteInventory_Implementation(void* a0, void* a1, unsigned long long a2, int a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, int, bool>(this, "AShooterPlayerController.ServerTransferFromRemoteToRemoteInventory_Implementation(UPrimalInventoryComponent*,UPrimalInventoryComponent*,FItemNetID,int,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferToRemoteInventory(UPrimalInventoryComponent*,FItemNetID,b
    // endereco: casamento de bytes com a build de referencia
    void ServerTransferToRemoteInventory(void* a0, unsigned long long a1, bool a2, int a3) const
    {
        NativeCall<void, void*, unsigned long long, bool, int>(this, "AShooterPlayerController.ServerTransferToRemoteInventory(UPrimalInventoryComponent*,FItemNetID,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferToRemoteInventory_Implementation(UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    void ServerTransferToRemoteInventory_Implementation(void* a0, unsigned long long a1, bool a2, int a3) const
    {
        NativeCall<void, void*, unsigned long long, bool, int>(this, "AShooterPlayerController.ServerTransferToRemoteInventory_Implementation(UPrimalInventoryComponent*,FItemNetID,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerTransferredPlayerConfirmationResult_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerTransferredPlayerConfirmationResult_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.ServerTransferredPlayerConfirmationResult_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerTryToggleShipLadders_Implementation(APrimalShip*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerTryToggleShipLadders_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerTryToggleShipLadders_Implementation(APrimalShip*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerUnlockPerMapExplorerNote(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerUnlockPerMapExplorerNote(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerController.ServerUnlockPerMapExplorerNote(int,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerUnlockPerMapExplorerNote_Implementation(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerUnlockPerMapExplorerNote_Implementation(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerController.ServerUnlockPerMapExplorerNote_Implementation(int,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerUntrackAllActors()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerUntrackAllActors() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerUntrackAllActors()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerUntrackAllActors_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerUntrackAllActors_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerUntrackAllActors_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerUntrackAllActors_ServerLogic()
    // endereco: cache_pdb_25090264
    void ServerUntrackAllActors_ServerLogic() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerUntrackAllActors_ServerLogic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerUpdateCustomActorTrackListEntries_Creatures(TArray<FTrackedActorP
    // endereco: casamento de bytes com a build de referencia
    void ServerUpdateCustomActorTrackListEntries_Creatures(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterPlayerController.ServerUpdateCustomActorTrackListEntries_Creatures(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelI
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateLevelVisibility_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerUpdateOwnedPMXM(TArray<__int64,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ServerUpdateOwnedPMXM(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerUpdateOwnedPMXM(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerUpdateOwnedPMXM_Implementation(TArray<__int64,TSizedDefaultAlloca
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerUpdateOwnedPMXM_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.ServerUpdateOwnedPMXM_Implementation(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ServerUpdatePersistentItemUnlocks()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void ServerUpdatePersistentItemUnlocks() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ServerUpdatePersistentItemUnlocks()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ServerUpdatePersistentItemUnlocks_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdatePersistentItemUnlocks_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ServerUpdatePersistentItemUnlocks_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerUploadCharacterDataToArk(UPrimalInventoryComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerUploadCharacterDataToArk(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerUploadCharacterDataToArk(UPrimalInventoryComponent*)", a0);
    }

    // jogo_confirmou_dump
    //   AShooterPlayerController.ServerUploadCurrentCharacterAndItems(UPrimalInventoryComponent*,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerUploadCurrentCharacterAndItems(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerUploadCurrentCharacterAndItems(UPrimalInventoryComponent*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerUploadCurrentCharacterAndItems_Implementation(UPrimalInventoryCom
    // endereco: casamento de bytes com a build de referencia
    void ServerUploadCurrentCharacterAndItems_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterPlayerController.ServerUploadCurrentCharacterAndItems_Implementation(UPrimalInventoryComponent*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ServerUploadDino(APrimalDinoCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerUploadDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerUploadDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerUploadDino_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerUploadDino_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ServerUploadDino_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ServerVerifyStructurePlacementItemData_Implementation(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerVerifyStructurePlacementItemData_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.ServerVerifyStructurePlacementItemData_Implementation(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_BeginShipCannonAim(EShipFiringSide)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Server_BeginShipCannonAim(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.Server_BeginShipCannonAim(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_DoTeamPing(FTeamPingData)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=269+grafo=3/3]]
    BrzPonteiro Server_DoTeamPing(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.Server_DoTeamPing(FTeamPingData)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_DoTeamPing_Implementation(FTeamPingData)
    // endereco: cache_pdb_25090264
    void Server_DoTeamPing_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.Server_DoTeamPing_Implementation(FTeamPingData)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.Server_FireShipCannons()
    // endereco: cache_pdb_25090264
    void Server_FireShipCannons() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Server_FireShipCannons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_GetPlatformNameFromId(unsignedint)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=52]]
    BrzPonteiro Server_GetPlatformNameFromId(unsigned int a0) const
    {
        return NativeCall<void*, unsigned int>(this, "AShooterPlayerController.Server_GetPlatformNameFromId(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_GetPlatformNameFromId_Implementation(unsignedint)
    // endereco: cache_pdb_25090264
    void Server_GetPlatformNameFromId_Implementation(unsigned int a0) const
    {
        NativeCall<void, unsigned int>(this, "AShooterPlayerController.Server_GetPlatformNameFromId_Implementation(unsignedint)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.Server_HandleOnPossessBlockedPlayer(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void Server_HandleOnPossessBlockedPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.Server_HandleOnPossessBlockedPlayer(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_JoinGlobalVoiceChannel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Server_JoinGlobalVoiceChannel() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.Server_JoinGlobalVoiceChannel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_JoinTribeAndAllianceVoiceChannel()
    // endereco: casamento de bytes com a build de referencia
    void Server_JoinTribeAndAllianceVoiceChannel() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Server_JoinTribeAndAllianceVoiceChannel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_LoadCharacterIntoCannon_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Server_LoadCharacterIntoCannon_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.Server_LoadCharacterIntoCannon_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.Server_RequestLastDeathTrackingActorLoc()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Server_RequestLastDeathTrackingActorLoc() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Server_RequestLastDeathTrackingActorLoc()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_RequestLastDeathTrackingActorLoc_ServerLogic()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=156+grafo=3/3]]
    void Server_RequestLastDeathTrackingActorLoc_ServerLogic() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Server_RequestLastDeathTrackingActorLoc_ServerLogic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_SelectAndJoinVoiceChannel_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void Server_SelectAndJoinVoiceChannel_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.Server_SelectAndJoinVoiceChannel_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_SendBlockListFromClient_Implementation(TArray<FString,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    void Server_SendBlockListFromClient_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.Server_SendBlockListFromClient_Implementation(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_SetShipCannonAimDeltas_Implementation(float,float)
    // endereco: cache_pdb_25090264
    BrzPonteiro Server_SetShipCannonAimDeltas_Implementation(float a0, float a1) const
    {
        return NativeCall<void*, float, float>(this, "AShooterPlayerController.Server_SetShipCannonAimDeltas_Implementation(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_SetShipSailTurningInput_Implementation(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro Server_SetShipSailTurningInput_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerController.Server_SetShipSailTurningInput_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.Server_SetShipSteeringInput(float)
    // endereco: cache_pdb_25090264
    void Server_SetShipSteeringInput(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.Server_SetShipSteeringInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_SetShipSteeringInput_Implementation(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro Server_SetShipSteeringInput_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerController.Server_SetShipSteeringInput_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.Server_SetShipThrottleTarget(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Server_SetShipThrottleTarget(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.Server_SetShipThrottleTarget(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.Server_SetWantsForcedMovement(int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=52]]
    void Server_SetWantsForcedMovement(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.Server_SetWantsForcedMovement(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_SetWantsForcedMovement_Implementation(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro Server_SetWantsForcedMovement_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterPlayerController.Server_SetWantsForcedMovement_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.Server_UnloadCharacterFromCannon_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Server_UnloadCharacterFromCannon_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.Server_UnloadCharacterFromCannon_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Server_UpdateRallyPointData_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=88]]
    void Server_UpdateRallyPointData_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.Server_UpdateRallyPointData_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetAdminIcon(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetAdminIcon(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetAdminIcon(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetAutoRunEnabled(bool)
    // endereco: cache_pdb_25090264
    void SetAutoRunEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetAutoRunEnabled(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetCannonInputEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCannonInputEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetCannonInputEnabled(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetCheatPlayer(bool)
    // endereco: cache_pdb_25090264
    void SetCheatPlayer(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetCheatPlayer(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetCinematicMode(bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCinematicMode(bool a0, bool a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, bool, bool, bool, bool, bool>(this, "AShooterPlayerController.SetCinematicMode(bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetCinematicModeAdvanced(bool,bool,bool,bool,TArray<FName,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void SetCinematicModeAdvanced(bool a0, bool a1, bool a2, bool a3, void* a4, bool a5) const
    {
        NativeCall<void, bool, bool, bool, bool, void*, bool>(this, "AShooterPlayerController.SetCinematicModeAdvanced(bool,bool,bool,bool,TArray<FName,TSizedDefaultAllocator<32>>,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetControlRotation(UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void SetControlRotation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SetControlRotation(UE::Math::TRotator<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetControllerGamepadActive(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetControllerGamepadActive(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetControllerGamepadActive(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetCurrentMultiUseWheelCategory(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void SetCurrentMultiUseWheelCategory(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SetCurrentMultiUseWheelCategory(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetCustomActorTracking_LastSavedCustomTameSearchText(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetCustomActorTracking_LastSavedCustomTameSearchText(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SetCustomActorTracking_LastSavedCustomTameSearchText(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetCustomActorTracking_LastSavedCustomTameSearchText(FString* a0) const
    { SetCustomActorTracking_LastSavedCustomTameSearchText(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetCustomActorTracking_LastSavedCustomTameSelectionType(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetCustomActorTracking_LastSavedCustomTameSelectionType(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SetCustomActorTracking_LastSavedCustomTameSelectionType(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetCustomActorTracking_LastSavedDinoGroup(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void SetCustomActorTracking_LastSavedDinoGroup(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SetCustomActorTracking_LastSavedDinoGroup(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetCustomActorTracking_LastSavedScrollbarIndex(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetCustomActorTracking_LastSavedScrollbarIndex(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SetCustomActorTracking_LastSavedScrollbarIndex(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetCustomCloudData(FCustomItemData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCustomCloudData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.SetCustomCloudData(FCustomItemData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetDoFInterpTime(float)
    // endereco: cache_pdb_25090264
    void SetDoFInterpTime(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.SetDoFInterpTime(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetDoingMeleeAimAssist()
    // endereco: cache_pdb_25090264
    void SetDoingMeleeAimAssist() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SetDoingMeleeAimAssist()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetFCustomTrackedDinoInfoMembersByDinoRef(APrimalDinoCharacter*,bool,bo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetFCustomTrackedDinoInfoMembersByDinoRef(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, bool, bool>(this, "AShooterPlayerController.SetFCustomTrackedDinoInfoMembersByDinoRef(APrimalDinoCharacter*,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetFCustomTrackedPlayerInfoMembersByPlayerRef(AShooterCharacter*,bool,b
    // endereco: casamento de bytes com a build de referencia
    void SetFCustomTrackedPlayerInfoMembersByPlayerRef(void* retorno, void* a0, bool a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, void*, bool, bool, bool, bool>(this, "AShooterPlayerController.SetFCustomTrackedPlayerInfoMembersByPlayerRef(AShooterCharacter*,bool,bool,bool,bool)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetGodMode(bool)
    // endereco: cache_pdb_25090264
    void SetGodMode(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetGodMode(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetGraphicsQuality(int)
    // endereco: casamento de bytes com a build de referencia
    void SetGraphicsQuality(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SetGraphicsQuality(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetImprintQuality(float)
    // endereco: casamento de bytes com a build de referencia
    void SetImprintQuality(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.SetImprintQuality(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetInfiniteStats(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetInfiniteStats(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetInfiniteStats(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetInputMode(FInputModeDataBase&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetInputMode(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.SetInputMode(FInputModeDataBase&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetInstantHarvest(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetInstantHarvest(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetInstantHarvest(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetKickedNotification(FString)
    // endereco: casamento de bytes com a build de referencia
    void SetKickedNotification(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SetKickedNotification(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetKickedNotification(FString* a0) const
    { SetKickedNotification(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetLastInventoryRetrievalTime()
    // endereco: casamento de bytes com a build de referencia
    void SetLastInventoryRetrievalTime() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SetLastInventoryRetrievalTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetMissionWaypointInfo(FString,UE::Math::TVector<double>,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetMissionWaypointInfo(const FString& a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, void*, unsigned long long>(this, "AShooterPlayerController.SetMissionWaypointInfo(FString,UE::Math::TVector<double>,FName)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetMissionWaypointInfo(FString* a0, void* a1, unsigned long long a2) const
    { return SetMissionWaypointInfo(*a0, a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetMissionWaypointVisible(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetMissionWaypointVisible(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetMissionWaypointVisible(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetMultiUseWheelCategory(int,APrimalBuff*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void SetMultiUseWheelCategory(int a0, void* a1, void* a2) const
    {
        NativeCall<void, int, void*, void*>(this, "AShooterPlayerController.SetMultiUseWheelCategory(int,APrimalBuff*,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SetPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SetPawn(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetPerfCheckLocationsFromSpyglass(TArray<FString,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPerfCheckLocationsFromSpyglass(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float>(this, "AShooterPlayerController.SetPerfCheckLocationsFromSpyglass(TArray<FString,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetPlayer(UPlayer*)
    // endereco: casamento de bytes com a build de referencia
    void SetPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SetPlayer(UPlayer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetPlayerPos(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SetPlayerPos(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "AShooterPlayerController.SetPlayerPos(float,float,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.SetPreventInstigatorVO(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=108]]
    void SetPreventInstigatorVO(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetPreventInstigatorVO(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetSyncTamingDinosWithoutUI(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSyncTamingDinosWithoutUI(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetSyncTamingDinosWithoutUI(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetSyncTrackedActorsWithoutUI(bool,int,int,FString&,int)
    // endereco: casamento de bytes com a build de referencia
    void SetSyncTrackedActorsWithoutUI(bool a0, int a1, int a2, const FString& a3, int a4) const
    {
        NativeCall<void, bool, int, int, void*, int>(this, "AShooterPlayerController.SetSyncTrackedActorsWithoutUI(bool,int,int,FString&,int)", a0, a1, a2, const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetSyncTrackedActorsWithoutUI(bool a0, int a1, int a2, FString* a3, int a4) const
    { SetSyncTrackedActorsWithoutUI(a0, a1, a2, *a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetTamingEffectivenessModifier(float)
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* SetTamingEffectivenessModifier(float a0) const
    {
        return NativeCall<APrimalDinoCharacter*, float>(this, "AShooterPlayerController.SetTamingEffectivenessModifier(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetTamingWaypoints(TArray<FTamingWaypointInfo,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetTamingWaypoints(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.SetTamingWaypoints(TArray<FTamingWaypointInfo,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetTrackedActorWaypoints(TArray<FTrackedActorWaypointInfo,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void SetTrackedActorWaypoints(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.SetTrackedActorWaypoints(TArray<FTrackedActorWaypointInfo,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetVideoReplayEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetVideoReplayEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SetVideoReplayEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetVoiceChatFilterType(int)
    // endereco: casamento de bytes com a build de referencia
    void SetVoiceChatFilterType(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SetVoiceChatFilterType(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetupAimMagnetism()
    // endereco: casamento de bytes com a build de referencia
    void SetupAimMagnetism() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SetupAimMagnetism()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetupInputComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=148/148]]
    void SetupInputComponent() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SetupInputComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SetupNewTrackBP()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void SetupNewTrackBP() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SetupNewTrackBP()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetupVoiceDataCallbacks()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupVoiceDataCallbacks() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.SetupVoiceDataCallbacks()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SetupVoiceUserVolume()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupVoiceUserVolume() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.SetupVoiceUserVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ShouldBlockGameInputsForUI()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldBlockGameInputsForUI() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.ShouldBlockGameInputsForUI()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ShouldFilterItemARK(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldFilterItemARK(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerController.ShouldFilterItemARK(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ShouldFilterOwnerTradeItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldFilterOwnerTradeItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerController.ShouldFilterOwnerTradeItem(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ShouldFilterReceiverTradeItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldFilterReceiverTradeItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerController.ShouldFilterReceiverTradeItem(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ShouldHideGameplayUI()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldHideGameplayUI() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.ShouldHideGameplayUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ShouldShowExtendedHUDInfo()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldShowExtendedHUDInfo() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.ShouldShowExtendedHUDInfo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ShouldSpawnWaterInteraction()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldSpawnWaterInteraction() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.ShouldSpawnWaterInteraction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ShowAllPlayersListToFollow()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    void ShowAllPlayersListToFollow() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ShowAllPlayersListToFollow()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ShowAllianceChat()
    // endereco: casamento de bytes com a build de referencia
    void ShowAllianceChat() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ShowAllianceChat()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ShowBattleGameModeHUD()
    // endereco: casamento de bytes com a build de referencia
    void ShowBattleGameModeHUD() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ShowBattleGameModeHUD()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.ShowStructureCustomCosmeticUI(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void ShowStructureCustomCosmeticUI(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ShowStructureCustomCosmeticUI(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ShowTransferCharacterConfirmationDialog()
    // endereco: casamento de bytes com a build de referencia
    void ShowTransferCharacterConfirmationDialog() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ShowTransferCharacterConfirmationDialog()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.ShowTribeManagerBP()
    // endereco: casamento de bytes com a build de referencia
    void ShowTribeManagerBP() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ShowTribeManagerBP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SlowMovementOff()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void SlowMovementOff() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SlowMovementOff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SlowMovementOn()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SlowMovementOn() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SlowMovementOn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnActor(FString&,float,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* SpawnActor(const FString& a0, float a1, float a2, float a3, bool a4) const
    {
        return NativeCall<AActor*, void*, float, float, float, bool>(this, "AShooterPlayerController.SpawnActor(FString&,float,float,float,bool)", const_cast<FString*>(&a0), a1, a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    AActor* SpawnActor(FString* a0, float a1, float a2, float a3, bool a4) const
    { return SpawnActor(*a0, a1, a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnActorSpread(FString&,float,float,float,int,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnActorSpread(const FString& a0, float a1, float a2, float a3, int a4, float a5) const
    {
        NativeCall<void, void*, float, float, float, int, float>(this, "AShooterPlayerController.SpawnActorSpread(FString&,float,float,float,int,float)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnActorSpread(FString* a0, float a1, float a2, float a3, int a4, float a5) const
    { SpawnActorSpread(*a0, a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnActorSpreadTamed(FString&,float,float,float,int,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnActorSpreadTamed(const FString& a0, float a1, float a2, float a3, int a4, float a5) const
    {
        NativeCall<void, void*, float, float, float, int, float>(this, "AShooterPlayerController.SpawnActorSpreadTamed(FString&,float,float,float,int,float)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnActorSpreadTamed(FString* a0, float a1, float a2, float a3, int a4, float a5) const
    { SpawnActorSpreadTamed(*a0, a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnPlayerCameraManager()
    // endereco: casamento de bytes com a build de referencia
    void SpawnPlayerCameraManager() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SpawnPlayerCameraManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnSpectatorPawn()
    // endereco: casamento de bytes com a build de referencia
    ASpectatorPawn* SpawnSpectatorPawn() const
    {
        return NativeCall<ASpectatorPawn*>(this, "AShooterPlayerController.SpawnSpectatorPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnTestDinos(int,float,int,int)
    // endereco: casamento de bytes com a build de referencia
    void SpawnTestDinos(int a0, float a1, int a2, int a3) const
    {
        NativeCall<void, int, float, int, int>(this, "AShooterPlayerController.SpawnTestDinos(int,float,int,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpawnTestStructures(int,float,int,int)
    // endereco: casamento de bytes com a build de referencia
    void SpawnTestStructures(int a0, float a1, int a2, int a3) const
    {
        NativeCall<void, int, float, int, int>(this, "AShooterPlayerController.SpawnTestStructures(int,float,int,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpectatorDetachOrbitCamera()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SpectatorDetachOrbitCamera() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SpectatorDetachOrbitCamera()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SpectatorNextPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    BrzPonteiro SpectatorNextPlayer() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.SpectatorNextPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.SpectatorPreviousPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    BrzPonteiro SpectatorPreviousPlayer() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.SpectatorPreviousPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpectatorTurn(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void SpectatorTurn(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.SpectatorTurn(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SpectatorUseItem(int)
    // endereco: casamento de bytes com a build de referencia
    void SpectatorUseItem(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.SpectatorUseItem(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadBackButton()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=749+grafo=11/11]]
    void StartArkGamepadBackButton() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadBackButton()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadDpadDown()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=33]]
    void StartArkGamepadDpadDown() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadDown()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadDpadRight()
    // endereco: casamento de bytes com a build de referencia
    void StartArkGamepadDpadRight() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadRight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadDpadUp()
    // endereco: cache_pdb_25090264
    void StartArkGamepadDpadUp() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadUp()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadFaceButtonBottom()
    // endereco: cache_pdb_25090264
    void StartArkGamepadFaceButtonBottom() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonBottom()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadFaceButtonLeft()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1010+grafo=9/9]]
    void StartArkGamepadFaceButtonLeft() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonLeft()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadFaceButtonRight()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=617+grafo=8/8]]
    void StartArkGamepadFaceButtonRight() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonRight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadLeftShoulder()
    // endereco: casamento de bytes com a build de referencia
    void StartArkGamepadLeftShoulder() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadLeftShoulder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartArkGamepadRightShoulder()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=191+grafo=6/6]]
    void StartArkGamepadRightShoulder() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadRightShoulder()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.StartAutomatedMapPerfSequence(FString,FString,FString,float)
    // endereco: casamento de bytes com a build de referencia
    void StartAutomatedMapPerfSequence(const FString& a0, const FString& a1, const FString& a2, float a3) const
    {
        NativeCall<void, void*, void*, void*, float>(this, "AShooterPlayerController.StartAutomatedMapPerfSequence(FString,FString,FString,float)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void StartAutomatedMapPerfSequence(FString* a0, FString* a1, FString* a2, float a3) const
    { StartAutomatedMapPerfSequence(*a0, *a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartEmoteSelection()
    // endereco: casamento de bytes com a build de referencia
    void StartEmoteSelection() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartEmoteSelection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartInventoryRadialSelector()
    // endereco: casamento de bytes com a build de referencia
    void StartInventoryRadialSelector() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartInventoryRadialSelector()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.StartMultiuseHoldForActor()
    // endereco: casamento de bytes com a build de referencia
    void StartMultiuseHoldForActor() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartMultiuseHoldForActor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.StartMultiusePressForActor(bool,AActor*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartMultiusePressForActor(bool a0, void* a1, int a2, bool a3) const
    {
        NativeCall<void, bool, void*, int, bool>(this, "AShooterPlayerController.StartMultiusePressForActor(bool,AActor*,int,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.StartPlacingStructrue(TSubclassOf<APrimalStructure>)
    // endereco: casamento de bytes com a build de referencia
    void StartPlacingStructrue(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.StartPlacingStructrue(TSubclassOf<APrimalStructure>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.StartSurfaceCamera(float,float,float,float,bool,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartSurfaceCamera(float a0, float a1, float a2, float a3, bool a4, void* a5) const
    {
        return NativeCall<void*, float, float, float, float, bool, void*>(this, "AShooterPlayerController.StartSurfaceCamera(float,float,float,float,bool,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.StartSurfaceCameraForPassenger(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void StartSurfaceCameraForPassenger(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "AShooterPlayerController.StartSurfaceCameraForPassenger(float,float,float)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.StartTalkingWrapper()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void StartTalkingWrapper() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartTalkingWrapper()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartTalkingWrapperKeybind()
    // endereco: casamento de bytes com a build de referencia
    void StartTalkingWrapperKeybind() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartTalkingWrapperKeybind()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartTeamPingWheel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=98]]
    void StartTeamPingWheel() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartTeamPingWheel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StartWhistleSelection()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82]]
    void StartWhistleSelection() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StartWhistleSelection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StaticRegisterNativesAShooterPlayerController()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesAShooterPlayerController()
    {
        NativeCall<void>(nullptr, "AShooterPlayerController.StaticRegisterNativesAShooterPlayerController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StopLoadingMusic()
    // endereco: casamento de bytes com a build de referencia
    void StopLoadingMusic() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StopLoadingMusic()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.StopMapPerformanceTest()
    // endereco: casamento de bytes com a build de referencia
    void StopMapPerformanceTest() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StopMapPerformanceTest()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StopTalkingWrapper()
    // endereco: casamento de bytes com a build de referencia
    void StopTalkingWrapper() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StopTalkingWrapper()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.StopWheelProgressSound()
    // endereco: cache_pdb_25090264
    void StopWheelProgressSound() const
    {
        NativeCall<void>(this, "AShooterPlayerController.StopWheelProgressSound()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SwitchFastInventory(bool)
    // endereco: casamento de bytes com a build de referencia
    void SwitchFastInventory(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.SwitchFastInventory(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.SwitchMinimalTooltip()
    // endereco: casamento de bytes com a build de referencia
    void SwitchMinimalTooltip() const
    {
        NativeCall<void>(this, "AShooterPlayerController.SwitchMinimalTooltip()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterPlayerController.TellServerAboutNewAutoTrackSetting(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TellServerAboutNewAutoTrackSetting(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.TellServerAboutNewAutoTrackSetting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TellServerAboutNewAutoTrackSetting_ServerLogic(bool)
    // endereco: casamento de bytes com a build de referencia
    void TellServerAboutNewAutoTrackSetting_ServerLogic(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterPlayerController.TellServerAboutNewAutoTrackSetting_ServerLogic(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TestAlarmNotification(FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void TestAlarmNotification(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterPlayerController.TestAlarmNotification(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TestAlarmNotification(FString* a0, FString* a1) const
    { TestAlarmNotification(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TestNotification()
    // endereco: casamento de bytes com a build de referencia
    void TestNotification() const
    {
        NativeCall<void>(this, "AShooterPlayerController.TestNotification()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.TestPurchaseEP()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=260]]
    void TestPurchaseEP() const
    {
        NativeCall<void>(this, "AShooterPlayerController.TestPurchaseEP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TickActor(float,ELevelTick,FActorTickFunction&)
    // endereco: casamento de bytes com a build de referencia
    void TickActor(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "AShooterPlayerController.TickActor(float,ELevelTick,FActorTickFunction&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TickStasisForCharacter(UWorld*,APrimalCharacter*,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    static void TickStasisForCharacter(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "AShooterPlayerController.TickStasisForCharacter(UWorld*,APrimalCharacter*,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TickVoiceChatClientInfo(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickVoiceChatClientInfo(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerController.TickVoiceChatClientInfo(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Tick_SearchForPOIs(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_SearchForPOIs(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.Tick_SearchForPOIs(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.Tick_UpdatePings(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_UpdatePings(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.Tick_UpdatePings(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ToggleAutoRun()
    // endereco: cache_pdb_25090264
    BrzPonteiro ToggleAutoRun() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ToggleAutoRun()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleDinoNameTags()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=24]]
    void ToggleDinoNameTags() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ToggleDinoNameTags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleGun()
    // endereco: casamento de bytes com a build de referencia
    void ToggleGun() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ToggleGun()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleMap()
    // endereco: casamento de bytes com a build de referencia
    void ToggleMap() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ToggleMap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TogglePlannedStructureVisibility()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TogglePlannedStructureVisibility() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.TogglePlannedStructureVisibility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.ToggleRTSKeyBindsIfChordActive()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleRTSKeyBindsIfChordActive() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.ToggleRTSKeyBindsIfChordActive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleShowAllPlayersWhenSpectatingLocal()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ToggleShowAllPlayersWhenSpectatingLocal() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ToggleShowAllPlayersWhenSpectatingLocal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleSpeaking(bool)
    // classe: a funcao mora em APlayerController, e AShooterPlayerController herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=150]]
    void ToggleSpeaking(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.ToggleSpeaking(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleThirdPersonCamera()
    // endereco: cache_pdb_25090264
    void ToggleThirdPersonCamera() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ToggleThirdPersonCamera()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleTrackingDinoOnMultiUse(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=1363+grafo=24/24]]
    void ToggleTrackingDinoOnMultiUse(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ToggleTrackingDinoOnMultiUse(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleTrackingPlayerOnMultiUse(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ToggleTrackingPlayerOnMultiUse(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.ToggleTrackingPlayerOnMultiUse(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ToggleWeaponAccessory()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ToggleWeaponAccessory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ToggleWeaponAccessory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TraceTeamPingType(TEnumAsByte<ETeamPingType::Type>,FHitResult&,TEnumAsB
    // endereco: casamento de bytes com a build de referencia
    bool TraceTeamPingType(unsigned char a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned char, void*, void*>(this, "AShooterPlayerController.TraceTeamPingType(TEnumAsByte<ETeamPingType::Type>,FHitResult&,TEnumAsByte<ETeamPingType::Type>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TradeSelectItem(FItemNetID,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TradeSelectItem(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "AShooterPlayerController.TradeSelectItem(FItemNetID,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TradeUnSelectItem(FItemNetID,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TradeUnSelectItem(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "AShooterPlayerController.TradeUnSelectItem(FItemNetID,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.TryActivateSkill(FName,UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    void TryActivateSkill(unsigned long long a0, void* a1, bool a2) const
    {
        NativeCall<void, unsigned long long, void*, bool>(this, "AShooterPlayerController.TryActivateSkill(FName,UObject*,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.TryAddCurrentSkillCooldown(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool TryAddCurrentSkillCooldown(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterPlayerController.TryAddCurrentSkillCooldown(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TryBackWheelCategory()
    // endereco: casamento de bytes com a build de referencia
    void TryBackWheelCategory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.TryBackWheelCategory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TryCreateTeamPingType(TEnumAsByte<ETeamPingType::Type>)
    // endereco: casamento de bytes com a build de referencia
    bool TryCreateTeamPingType(unsigned char a0) const
    {
        return NativeCall<bool, unsigned char>(this, "AShooterPlayerController.TryCreateTeamPingType(TEnumAsByte<ETeamPingType::Type>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TryInputCurrentDismiss()
    // endereco: cache_pdb_25090264
    void TryInputCurrentDismiss() const
    {
        NativeCall<void>(this, "AShooterPlayerController.TryInputCurrentDismiss()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TryLoadProfile()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=74]]
    void TryLoadProfile() const
    {
        NativeCall<void>(this, "AShooterPlayerController.TryLoadProfile()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TryRemoveUnownedDLC()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryRemoveUnownedDLC() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.TryRemoveUnownedDLC()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TryToForceUploadCharacter_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void TryToForceUploadCharacter_Implementation() const
    {
        NativeCall<void>(this, "AShooterPlayerController.TryToForceUploadCharacter_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TryToStartTalking(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryToStartTalking(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterPlayerController.TryToStartTalking(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TryToStopTalking(bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=240]]
    BrzPonteiro TryToStopTalking(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterPlayerController.TryToStopTalking(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.TryUnlockDLCContent()
    // endereco: cache_pdb_25090264
    BrzPonteiro TryUnlockDLCContent() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController.TryUnlockDLCContent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TurnAtRate(float)
    // endereco: cache_pdb_25090264
    void TurnAtRate(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.TurnAtRate(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.TurnInput(float)
    // endereco: cache_pdb_25090264
    void TurnInput(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.TurnInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UICanDragDropCharacter(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool UICanDragDropCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterPlayerController.UICanDragDropCharacter(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UnFreeze()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void UnFreeze() const
    {
        NativeCall<void>(this, "AShooterPlayerController.UnFreeze()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UnbanPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    static void UnbanPlayer(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "AShooterPlayerController.UnbanPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void UnbanPlayer(FString* a0)
    { UnbanPlayer(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.UndermeshSphere(int)
    // endereco: casamento de bytes com a build de referencia
    void UndermeshSphere(int a0) const
    {
        NativeCall<void, int>(this, "AShooterPlayerController.UndermeshSphere(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UnlockEmote(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UnlockEmote(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.UnlockEmote(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UnlockExplorerNote(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UnlockExplorerNote(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "AShooterPlayerController.UnlockExplorerNote(int,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.UnlockExplorerNote_V2(int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UnlockExplorerNote_V2(int a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, int, bool, bool, bool>(this, "AShooterPlayerController.UnlockExplorerNote_V2(int,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.UnlockPersistentProfileItem(TSubclassOf<UPrimalItem>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool UnlockPersistentProfileItem(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "AShooterPlayerController.UnlockPersistentProfileItem(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.UnlockSkill(FName,bool,UPrimalProgressionTreeAsset*)
    // endereco: casamento de bytes com a build de referencia
    void UnlockSkill(unsigned long long a0, bool a1, void* a2) const
    {
        NativeCall<void, unsigned long long, bool, void*>(this, "AShooterPlayerController.UnlockSkill(FName,bool,UPrimalProgressionTreeAsset*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.UnregisterBounties(FName,APrimalBuff*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void UnregisterBounties(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AShooterPlayerController.UnregisterBounties(FName,APrimalBuff*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UpdateCustomActorTrackListEntries_Combined(TArray<FTrackedActorPlusInfo
    // endereco: casamento de bytes com a build de referencia
    void UpdateCustomActorTrackListEntries_Combined(void* retorno, void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "AShooterPlayerController.UpdateCustomActorTrackListEntries_Combined(TArray<FTrackedActorPlusInfoStruct,TSizedDefaultAllocator<32>>&,bool,bool)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UpdateCustomActorTrackList_Individual(FTrackedActorPlusInfoStruct&,ETra
    // endereco: casamento de bytes com a build de referencia
    bool UpdateCustomActorTrackList_Individual(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "AShooterPlayerController.UpdateCustomActorTrackList_Individual(FTrackedActorPlusInfoStruct&,ETrackedActorCategory::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UpdatePostProcessVolumes()
    // endereco: casamento de bytes com a build de referencia
    void UpdatePostProcessVolumes() const
    {
        NativeCall<void>(this, "AShooterPlayerController.UpdatePostProcessVolumes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.UpdateProfileSig11_Implementation(TArray<__int64,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateProfileSig11_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.UpdateProfileSig11_Implementation(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UpdateRequestEquippedItemsQueue()
    // endereco: casamento de bytes com a build de referencia
    void UpdateRequestEquippedItemsQueue() const
    {
        NativeCall<void>(this, "AShooterPlayerController.UpdateRequestEquippedItemsQueue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UpdateRotation(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateRotation(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.UpdateRotation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UpdateTrackingWaypointMark(FName)
    // endereco: casamento de bytes com a build de referencia
    void UpdateTrackingWaypointMark(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterPlayerController.UpdateTrackingWaypointMark(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.UploadCharacterDataToArk(UPrimalInventoryComponent*)
    // endereco: cache_pdb_25090264
    BrzPonteiro UploadCharacterDataToArk(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.UploadCharacterDataToArk(UPrimalInventoryComponent*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AShooterPlayerController.UploadCharacterPlayerDataToArk(TArray<unsignedchar,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    void UploadCharacterPlayerDataToArk(void* a0, int a1, const FString& a2, void* a3, unsigned long long a4, bool a5, unsigned int a6, bool a7) const
    {
        NativeCall<void, void*, int, void*, void*, unsigned long long, bool, unsigned int, bool>(this, "AShooterPlayerController.UploadCharacterPlayerDataToArk(TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int,FString,TArray<FString,TSizedDefaultAllocator<32>>,unsigned__int64,bool,unsignedint,bool)", a0, a1, const_cast<FString*>(&a2), a3, a4, a5, a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UploadCharacterPlayerDataToArk(void* a0, int a1, FString* a2, void* a3, unsigned long long a4, bool a5, unsigned int a6, bool a7) const
    { UploadCharacterPlayerDataToArk(a0, a1, *a2, a3, a4, a5, a6, a7); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.UploadItemFromClubArk(FItemNetID,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadItemFromClubArk(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "AShooterPlayerController.UploadItemFromClubArk(FItemNetID,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.UploadToS3(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadToS3(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController.UploadToS3(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro UploadToS3(FString* a0, FString* a1, FString* a2) const
    { return UploadToS3(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UseFastInventory()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UseFastInventory() const
    {
        NativeCall<void>(this, "AShooterPlayerController.UseFastInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.UseTribeGroupRanks()
    // endereco: casamento de bytes com a build de referencia
    bool UseTribeGroupRanks() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.UseTribeGroupRanks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.VerifyNearbyPOIActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void VerifyNearbyPOIActors(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterPlayerController.VerifyNearbyPOIActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ViewingAnUploadTerminal()
    // endereco: casamento de bytes com a build de referencia
    bool ViewingAnUploadTerminal() const
    {
        return NativeCall<bool>(this, "AShooterPlayerController.ViewingAnUploadTerminal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController.WritePNTScreenshot(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WritePNTScreenshot(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController.WritePNTScreenshot(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro WritePNTScreenshot(FString* a0) const
    { return WritePNTScreenshot(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterPlayerController.WriteVideoReplayBufferToDisk()
    // endereco: casamento de bytes com a build de referencia
    void WriteVideoReplayBufferToDisk() const
    {
        NativeCall<void>(this, "AShooterPlayerController.WriteVideoReplayBufferToDisk()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterPlayerController.ZoneVolumeReport()
    // endereco: casamento de bytes com a build de referencia
    void ZoneVolumeReport() const
    {
        NativeCall<void>(this, "AShooterPlayerController.ZoneVolumeReport()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayerTravelLocation` +24, medido na build 25090264
    //  (offset absoluto medido: 0x36F0; confianca alta)
    void*& AccumulatedRideTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayerTravelLocation", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRawInputDir` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1040; confianca alta)
    void*& AcknowledgePosessionCallsField() const
    { return BrzCampoAncorado<void*>(this, "LastRawInputDir", 24); }
    BrzCampoPonteiro ActiveWaypoints_CreaturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActiveWaypoints_Creatures")); }
    BrzCampoPonteiro ActiveWaypoints_PlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActiveWaypoints_Players")); }
    float& ActorTrackingPOIAlphaOffScreenField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ActorTrackingPOIAlphaOffScreen"); }
    float& ActorTrackingPOIAlphaOnScreenField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ActorTrackingPOIAlphaOnScreen"); }
    BrzCampoPonteiro ActorTrackingPOIDistanceToScreenCenterForTransparencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActorTrackingPOIDistanceToScreenCenterForTransparency")); }
    float& ActorTrackingPOIScaleOffScreenField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ActorTrackingPOIScaleOffScreen"); }
    float& ActorTrackingPOIScaleOnScreenField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ActorTrackingPOIScaleOnScreen"); }
    BrzCampoPonteiro ActorTracking_TempTrackActorsNotYetSyncedAtAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActorTracking_TempTrackActorsNotYetSyncedAtAll")); }
    BrzCampoPonteiro ActorTracking_TempTrackPOIVisibleState_CreaturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActorTracking_TempTrackPOIVisibleState_Creatures")); }
    BrzCampoPonteiro ActorTracking_TempTrackPOIVisibleState_PlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActorTracking_TempTrackPOIVisibleState_Players")); }
    BrzCampoPonteiro ActorTracking_TempTrack_TrackState_CreaturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActorTracking_TempTrack_TrackState_Creatures")); }
    BrzCampoPonteiro ActorTracking_TempTrack_TrackState_PlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ActorTracking_TempTrack_TrackState_Players")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +120, medido na build 25090264
    //  (offset absoluto medido: 0x3610; confianca media)
    void*& AdvanceMapPerformanceTestHandleField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomActorTracking_HasJustChangedSearchText` +2, medido na build 25090264
    //  (offset absoluto medido: 0x2720; confianca alta)
    void*& AimMangetismClosestLocationField() const
    { return BrzCampoAncorado<void*>(this, "CustomActorTracking_HasJustChangedSearchText", 2); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomActorTracking_HasJustChangedSearchText` +26, medido na build 25090264
    //  (offset absoluto medido: 0x2738; confianca alta)
    FName& AimMangetismCosestBoneField() const
    { return BrzCampoAncorado<FName>(this, "CustomActorTracking_HasJustChangedSearchText", 26); }
    BrzCampoPonteiro AllCreaturesWhosInfoIsBeingSentToClientFromServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.AllCreaturesWhosInfoIsBeingSentToClientFromServer")); }
    BrzCampoPonteiro AllPlayersWhosInfoIsBeingSentToClientFromServer_NotTeammatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.AllPlayersWhosInfoIsBeingSentToClientFromServer_NotTeammates")); }
    BrzCampoPonteiro AllPlayersWhosInfoIsBeingSentToClientFromServer_TeammatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.AllPlayersWhosInfoIsBeingSentToClientFromServer_Teammates")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +456, medido na build 25090264
    //  (offset absoluto medido: 0x2318; confianca baixa)
    void*& ApplicationEnteredForegroundDelegateHandleField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 456); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +448, medido na build 25090264
    //  (offset absoluto medido: 0x2310; confianca baixa)
    void*& ApplicationReactivatedDelegateHandleField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 448); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +464, medido na build 25090264
    //  (offset absoluto medido: 0x2320; confianca baixa)
    void*& ApplicationSystemBlockListChangedDelegateHandleField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 464); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPlayerCharacterLocation` +60, medido na build 25090264
    //  (offset absoluto medido: 0xD4C; confianca media)
    void*& ArkTributeAsyncBatchCountField() const
    { return BrzCampoAncorado<void*>(this, "CurrentPlayerCharacterLocation", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPlayerCharacterLocation` +56, medido na build 25090264
    //  (offset absoluto medido: 0xD48; confianca media)
    void*& ArkTributeAsyncLoadIndexField() const
    { return BrzCampoAncorado<void*>(this, "CurrentPlayerCharacterLocation", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1280; confianca alta)
    void*& AwaitingHUDClassField() const
    { return BrzCampoAncorado<void*>(this, "PhotoModeMarkerActor", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2160; confianca media)
    void*& BeforeSendHandleField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +336, medido na build 25090264
    //  (offset absoluto medido: 0x22A0; confianca baixa)
    void*& BlockedTextUsersField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 336); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +176, medido na build 25090264
    //  (offset absoluto medido: 0x2200; confianca baixa)
    void*& BlockedVoiceQueryResultsField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +256, medido na build 25090264
    //  (offset absoluto medido: 0x2250; confianca baixa)
    void*& BlockedVoiceUsersField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 256); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +144, medido na build 25090264
    //  (offset absoluto medido: 0x3628; confianca baixa)
    void*& CacheOwnedPremiumModsField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +48, medido na build 25090264
    //  (offset absoluto medido: 0x25B8; confianca media)
    AActor*& CachedAimedUseActorField() const
    { return BrzCampoAncorado<AActor*>(this, "EnforcementColors", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +56, medido na build 25090264
    //  (offset absoluto medido: 0x25C0; confianca media)
    UActorComponent*& CachedAimedUseActorComponentField() const
    { return BrzCampoAncorado<UActorComponent*>(this, "EnforcementColors", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentTrackingMark` +160, medido na build 25090264
    //  (offset absoluto medido: 0x11A0; confianca baixa)
    void*& CachedCosmeticsForNewPlayerField() const
    { return BrzCampoAncorado<void*>(this, "CurrentTrackingMark", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +64, medido na build 25090264
    //  (offset absoluto medido: 0x25C8; confianca media)
    int& CachedHitBodyIndexField() const
    { return BrzCampoAncorado<int>(this, "EnforcementColors", 64); }
    double& CachedTeamTameListUpdateIntervalField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.CachedTeamTameListUpdateInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +72, medido na build 25090264
    //  (offset absoluto medido: 0x25D0; confianca media)
    TArray<void*>& Cached_AimedSimplePrimitivesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "EnforcementColors", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +119, medido na build 25090264
    //  (offset absoluto medido: 0x16E0; confianca media)
    void*& ChatPrivilegCSField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 119); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bEnableAltFire` +15, medido na build 25090264
    //  (offset absoluto medido: 0x1658; confianca alta)
    float& ChatSpamWeightField() const
    { return BrzCampoAncorado<float>(this, "bEnableAltFire", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceHideGameplayUI` +39, medido na build 25090264
    //  (offset absoluto medido: 0x1A38; confianca media)
    TArray<void*>& ClientCachedTribeOnlineListField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bForceHideGameplayUI", 39); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentTrackingMark` +128, medido na build 25090264
    //  (offset absoluto medido: 0x1180; confianca media)
    void*& ClientRecvDataField() const
    { return BrzCampoAncorado<void*>(this, "CurrentTrackingMark", 128); }
    FString& ClientTimerCachedCustomTameSearchTextField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerController.ClientTimerCachedCustomTameSearchText"); }
    int& ClientTimerCachedDinoGroupField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ClientTimerCachedDinoGroup"); }
    int& ClientTimerCachedNewScrollbarIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ClientTimerCachedNewScrollbarIndex"); }
    int& ClientTimerCachedTameSelectionTypeField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ClientTimerCachedTameSelectionType"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +56, medido na build 25090264
    //  (offset absoluto medido: 0x12A0; confianca media)
    void*& CloseSteamStatusSceneHandleField() const
    { return BrzCampoAncorado<void*>(this, "PhotoModeMarkerActor", 56); }
    int& ClubArkTokensField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ClubArkTokens"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +152, medido na build 25090264
    //  (offset absoluto medido: 0x2420; confianca baixa)
    void*& CommunicationAllowedPermissionsField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 152); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +72, medido na build 25090264
    //  (offset absoluto medido: 0x23D0; confianca media)
    void*& CommunicationPermissionsActivelyBeingCheckedField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 72); }
    BrzCampoPonteiro CreativeModeBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CreativeModeBuff")); }
    BrzCampoPonteiro CreaturesAlreadyHandledByTamingAutoAddField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CreaturesAlreadyHandledByTamingAutoAdd")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +296, medido na build 25090264
    //  (offset absoluto medido: 0x19A8; confianca baixa)
    void*& CurrentCharacterTransferStateField() const
    { return BrzCampoAncorado<void*>(this, "LastDownloadedTributePlayerData", 296); }
    BrzCampoPonteiro CurrentClientTeamPingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CurrentClientTeamPings")); }
    BrzCampoPonteiro CurrentDiscordCallsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CurrentDiscordCalls")); }
    int& CurrentGameModeMaxNumOfRespawnsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CurrentGameModeMaxNumOfRespawns"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +296, medido na build 25090264
    //  (offset absoluto medido: 0x3420; confianca baixa)
    void*& CurrentLeavingVoiceChannelsField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 296); }
    TArray<void*>& CurrentPingsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.CurrentPings"); }
    BrzCampoPonteiro CurrentPlayerCharacterLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CurrentPlayerCharacterLocation")); }
    BrzCampoPonteiro CurrentRadialDirection1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CurrentRadialDirection1")); }
    BrzCampoPonteiro CurrentRadialDirection2Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CurrentRadialDirection2")); }
    BrzCampoPonteiro CurrentTrackingMarkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.CurrentTrackingMark")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +95, medido na build 25090264
    //  (offset absoluto medido: 0x16C8; confianca media)
    TArray<void*>& CurrentTribeLogField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bPreventPaintingStreaming", 95); }
    int& CustomActorTracking_DisplayedResultsCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CustomActorTracking_DisplayedResultsCount"); }
    bool& CustomActorTracking_HasJustChangedDinoGroupField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.CustomActorTracking_HasJustChangedDinoGroup"); }
    FString& CustomActorTracking_LastSavedCustomTameSearchTextField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerController.CustomActorTracking_LastSavedCustomTameSearchText"); }
    int& CustomActorTracking_LastSavedCustomTameSelectionTypeField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CustomActorTracking_LastSavedCustomTameSelectionType"); }
    int& CustomActorTracking_LastSavedDinoGroupField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CustomActorTracking_LastSavedDinoGroup"); }
    int& CustomActorTracking_LastSavedScrollbarIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CustomActorTracking_LastSavedScrollbarIndex"); }
    int& CustomActorTracking_MaxAllowedFavoritedActorsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CustomActorTracking_MaxAllowedFavoritedActors"); }
    int& CustomActorTracking_MaxAllowedWaypointTrackedActorsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CustomActorTracking_MaxAllowedWaypointTrackedActors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +24, medido na build 25090264
    //  (offset absoluto medido: 0x25A0; confianca alta)
    void*& DelayedNetCleanupHandleField() const
    { return BrzCampoAncorado<void*>(this, "EnforcementColors", 24); }
    float& DesiredDistanceForActorTrackingPOILoweredTransparencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.DesiredDistanceForActorTrackingPOILoweredTransparency"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +32, medido na build 25090264
    //  (offset absoluto medido: 0x23A8; confianca media)
    void*& DiscordLockField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 32); }
    BrzCampoPonteiro DiscordUserIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.DiscordUserID")); }
    float& DistanceNearDeathWaypointToClearPOIField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.DistanceNearDeathWaypointToClearPOI"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +96, medido na build 25090264
    //  (offset absoluto medido: 0x1858; confianca media)
    float& DoFSettingCurrentTimerField() const
    { return BrzCampoAncorado<float>(this, "WaypointsSOTF", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +100, medido na build 25090264
    //  (offset absoluto medido: 0x185C; confianca media)
    float& DoFSettingTargetTimerField() const
    { return BrzCampoAncorado<float>(this, "WaypointsSOTF", 100); }
    TArray<void*>& EnforcementColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.EnforcementColors"); }
    TArray<void*>& EnforcementRelevantStructuresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.EnforcementRelevantStructures"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bEnableAltFire` +23, medido na build 25090264
    //  (offset absoluto medido: 0x1660; confianca alta)
    double& EnteredSpectatingStateTimeField() const
    { return BrzCampoAncorado<double>(this, "bEnableAltFire", 23); }
    TWeakObjectPtr<void>& FastTravelDroppedInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerController.FastTravelDroppedInventory"); }
    BrzCampoPonteiro FogOfWarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.FogOfWar")); }
    BrzCampoPonteiro FogOfWarClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.FogOfWarClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnBountyCategoryProgressed` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2540; confianca alta)
    void*& ForceColorOverlayColorField() const
    { return BrzCampoAncorado<void*>(this, "OnBountyCategoryProgressed", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnBountyCategoryProgressed` +40, medido na build 25090264
    //  (offset absoluto medido: 0x2558; confianca media)
    double& ForceColorOverlayFadeOutTimeField() const
    { return BrzCampoAncorado<double>(this, "OnBountyCategoryProgressed", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnBountyCategoryProgressed` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2550; confianca alta)
    double& ForceColorOverlayUntilTimeField() const
    { return BrzCampoAncorado<double>(this, "OnBountyCategoryProgressed", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPendingAllowPlayerMovement` +8, medido na build 25090264
    //  (offset absoluto medido: 0x19E8; confianca alta)
    double& ForceDrawCurrentGroupsUntilTimeField() const
    { return BrzCampoAncorado<double>(this, "bPendingAllowPlayerMovement", 8); }
    float& ForcedTimerRestrictionOnRequestingTrackingInfoFromServerField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ForcedTimerRestrictionOnRequestingTrackingInfoFromServer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +16, medido na build 25090264
    //  (offset absoluto medido: 0x10C0; confianca alta)
    void*& GamepadBackHandleField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 16); }
    int& Gen1ENFixDesyncValueField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.Gen1ENFixDesyncValue"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MissionWaypoint` +68, medido na build 25090264
    //  (offset absoluto medido: 0x2514; confianca media)
    int& Gen1FixENCountField() const
    { return BrzCampoAncorado<int>(this, "MissionWaypoint", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MissionWaypoint` +72, medido na build 25090264
    //  (offset absoluto medido: 0x2518; confianca media)
    int& Gen1FixENCountThresholdField() const
    { return BrzCampoAncorado<int>(this, "MissionWaypoint", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MissionWaypoint` +64, medido na build 25090264
    //  (offset absoluto medido: 0x2510; confianca media)
    float& Gen1FixENTimeThresholdField() const
    { return BrzCampoAncorado<float>(this, "MissionWaypoint", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +159, medido na build 25090264
    //  (offset absoluto medido: 0x1708; confianca baixa)
    void*& GetUserCommunicationPrivilegeWithTargetUserCompleteDelegateField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 159); }
    FieldArray<unsigned char> HeldItemSlotField() const
    { return { (void*)this, "AShooterPlayerController.HeldItemSlot" }; }
    FieldArray<double> HeldItemSlotTimeField() const
    { return { (void*)this, "AShooterPlayerController.HeldItemSlotTime" }; }
    BrzCampoPonteiro HighlightedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.HighlightedStructures")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +168, medido na build 25090264
    //  (offset absoluto medido: 0x1358; confianca baixa)
    void*& InProgressNonClusterCharacterUploadsField() const
    { return BrzCampoAncorado<void*>(this, "SteamInventoryStatusUITemplate", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +88, medido na build 25090264
    //  (offset absoluto medido: 0x1308; confianca media)
    void*& LastArkTributeDataField() const
    { return BrzCampoAncorado<void*>(this, "SteamInventoryStatusUITemplate", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +184, medido na build 25090264
    //  (offset absoluto medido: 0xD08; confianca baixa)
    void*& LastAudioComponentVOField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +432, medido na build 25090264
    //  (offset absoluto medido: 0x2300; confianca baixa)
    double& LastBlockedVoiceQueryTimeField() const
    { return BrzCampoAncorado<double>(this, "bTribeCacheHaveRallyPointData", 432); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +8, medido na build 25090264
    //  (offset absoluto medido: 0xC58; confianca media)
    void*& LastCachedPlayerControlRotationField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +101, medido na build 25090264
    //  (offset absoluto medido: 0x17B0; confianca media)
    void*& LastCheckedOwnedDLCField() const
    { return BrzCampoAncorado<void*>(this, "bHasReachedLowestDepth", 101); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceHideGameplayUI` +31, medido na build 25090264
    //  (offset absoluto medido: 0x1A30; confianca alta)
    double& LastClientModifiedARKInventoryTimeField() const
    { return BrzCampoAncorado<double>(this, "bForceHideGameplayUI", 31); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +48, medido na build 25090264
    //  (offset absoluto medido: 0xC80; confianca media)
    void*& LastClientNotifyShowProfileRequestCallTimeField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceHideGameplayUI` +23, medido na build 25090264
    //  (offset absoluto medido: 0x1A28; confianca alta)
    double& LastClientRequestTribeOnlineListTimeField() const
    { return BrzCampoAncorado<double>(this, "bForceHideGameplayUI", 23); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRawInputDir` +52, medido na build 25090264
    //  (offset absoluto medido: 0x105C; confianca media)
    TWeakObjectPtr<void>& LastControlledPlayerCharacterField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "LastRawInputDir", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SFXVolumeMultiplier` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1A58; confianca alta)
    unsigned long long& LastConvertedPlayerIDField() const
    { return BrzCampoAncorado<unsigned long long>(this, "SFXVolumeMultiplier", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SFXVolumeMultiplier` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1A60; confianca alta)
    FString& LastConvertedPlayerIDStringField() const
    { return BrzCampoAncorado<FString>(this, "SFXVolumeMultiplier", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDeathPrimalCharacter` +16, medido na build 25090264
    //  (offset absoluto medido: 0xF98; confianca alta)
    double& LastDeadCharacterDestructionTimeField() const
    { return BrzCampoAncorado<double>(this, "LastDeathPrimalCharacter", 16); }
    BrzCampoPonteiro LastDeathLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.LastDeathLocation")); }
    double& LastDeathMarkField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.LastDeathMark"); }
    TWeakObjectPtr<void>& LastDeathPrimalCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerController.LastDeathPrimalCharacter"); }
    double& LastDeathTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.LastDeathTime"); }
    AShooterCharacter*& LastDiedListenServerHostField() const
    { return *GetNativePointerField<AShooterCharacter**>(this, "AShooterPlayerController.LastDiedListenServerHost"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +128, medido na build 25090264
    //  (offset absoluto medido: 0x1878; confianca media)
    int& LastDownloadCachedTribeIDField() const
    { return BrzCampoAncorado<int>(this, "WaypointsSOTF", 128); }
    BrzCampoPonteiro LastDownloadedTributePlayerDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.LastDownloadedTributePlayerData")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +32, medido na build 25090264
    //  (offset absoluto medido: 0x1288; confianca alta)
    FItemNetID& LastEquipedItemNetIDField() const
    { return BrzCampoAncorado<FItemNetID>(this, "PhotoModeMarkerActor", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +40, medido na build 25090264
    //  (offset absoluto medido: 0x25B0; confianca media)
    int& LastFrameAimedUseActorCachedField() const
    { return BrzCampoAncorado<int>(this, "EnforcementColors", 40); }
    int& LastFrameScrollDownField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.LastFrameScrollDown"); }
    int& LastFrameScrollUpField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.LastFrameScrollUp"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceHideGameplayUI` +7, medido na build 25090264
    //  (offset absoluto medido: 0x1A18; confianca alta)
    double& LastGamepadOpenRemoteInventoryTimeField() const
    { return BrzCampoAncorado<double>(this, "bForceHideGameplayUI", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MissionWaypoint` +56, medido na build 25090264
    //  (offset absoluto medido: 0x2508; confianca media)
    double& LastGen1FixENTimeField() const
    { return BrzCampoAncorado<double>(this, "MissionWaypoint", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +15, medido na build 25090264
    //  (offset absoluto medido: 0x1678; confianca media)
    int& LastHarvestedElementIndexField() const
    { return BrzCampoAncorado<int>(this, "bPreventPaintingStreaming", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +80, medido na build 25090264
    //  (offset absoluto medido: 0x1210; confianca media)
    TWeakObjectPtr<void>& LastHeldUseActorField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "RemoteViewingInventories", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +96, medido na build 25090264
    //  (offset absoluto medido: 0x1220; confianca media)
    int& LastHeldUseHitBodyIndexField() const
    { return BrzCampoAncorado<int>(this, "RemoteViewingInventories", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +88, medido na build 25090264
    //  (offset absoluto medido: 0x1218; confianca media)
    TWeakObjectPtr<void>& LastHeldUseHitComponentField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "RemoteViewingInventories", 88); }
    APostProcessVolume*& LastHighestPriorityPostProcessVolumeField() const
    { return *GetNativePointerField<APostProcessVolume**>(this, "AShooterPlayerController.LastHighestPriorityPostProcessVolume"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +48, medido na build 25090264
    //  (offset absoluto medido: 0x1828; confianca media)
    void*& LastHitMarkerCharacterSettingsField() const
    { return BrzCampoAncorado<void*>(this, "WaypointsSOTF", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1808; confianca media)
    double& LastHitMarkerCharacterTimeField() const
    { return BrzCampoAncorado<double>(this, "WaypointsSOTF", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +32, medido na build 25090264
    //  (offset absoluto medido: 0x1818; confianca media)
    double& LastHitMarkerStructureTimeField() const
    { return BrzCampoAncorado<double>(this, "WaypointsSOTF", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +80, medido na build 25090264
    //  (offset absoluto medido: 0xCA0; confianca media)
    void*& LastInstigatorVOEntryField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +125, medido na build 25090264
    //  (offset absoluto medido: 0x17C8; confianca media)
    void*& LastLargeMoveLocationField() const
    { return BrzCampoAncorado<void*>(this, "bHasReachedLowestDepth", 125); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +149, medido na build 25090264
    //  (offset absoluto medido: 0x17E0; confianca baixa)
    double& LastLargeMoveTimeField() const
    { return BrzCampoAncorado<double>(this, "bHasReachedLowestDepth", 149); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +40, medido na build 25090264
    //  (offset absoluto medido: 0x12D8; confianca media)
    double& LastMultiUseInteractionTimeField() const
    { return BrzCampoAncorado<double>(this, "SteamInventoryStatusUITemplate", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +117, medido na build 25090264
    //  (offset absoluto medido: 0x17C0; confianca media)
    double& LastMultiUseTraceTimeField() const
    { return BrzCampoAncorado<double>(this, "bHasReachedLowestDepth", 117); }
    double& LastNetworkTimeRequestedFilterCachedTeamTameListField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.LastNetworkTimeRequestedFilterCachedTeamTameList"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +157, medido na build 25090264
    //  (offset absoluto medido: 0x17E8; confianca baixa)
    double& LastNotOnUnriddenDinoTimeField() const
    { return BrzCampoAncorado<double>(this, "bHasReachedLowestDepth", 157); }
    double& LastPingTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.LastPingTime"); }
    BrzCampoPonteiro LastPlayerTravelLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.LastPlayerTravelLocation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +93, medido na build 25090264
    //  (offset absoluto medido: 0x17A8; confianca media)
    double& LastRPCStayAliveTimeField() const
    { return BrzCampoAncorado<double>(this, "bHasReachedLowestDepth", 93); }
    BrzCampoPonteiro LastRawInputDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.LastRawInputDir")); }
    FieldArray<double> LastRepeatUseConsumableTimeField() const
    { return { (void*)this, "AShooterPlayerController.LastRepeatUseConsumableTime" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPendingAllowPlayerMovement` +16, medido na build 25090264
    //  (offset absoluto medido: 0x19F0; confianca alta)
    double& LastRequestedPlaceStructureTimeField() const
    { return BrzCampoAncorado<double>(this, "bPendingAllowPlayerMovement", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1270; confianca alta)
    double& LastRespawnTimeField() const
    { return BrzCampoAncorado<double>(this, "PhotoModeMarkerActor", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +64, medido na build 25090264
    //  (offset absoluto medido: 0x12F0; confianca media)
    void*& LastSentCarriedAsPassengerRotationField() const
    { return BrzCampoAncorado<void*>(this, "SteamInventoryStatusUITemplate", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPendingAllowPlayerMovement` +32, medido na build 25090264
    //  (offset absoluto medido: 0x1A00; confianca alta)
    double& LastServerRemovePawnItemTimeField() const
    { return BrzCampoAncorado<double>(this, "bPendingAllowPlayerMovement", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentTrackingMark` +152, medido na build 25090264
    //  (offset absoluto medido: 0x1198; confianca baixa)
    double& LastServerRequestFuelQuantityField() const
    { return BrzCampoAncorado<double>(this, "CurrentTrackingMark", 152); }
    double& LastShowExtendedInfoTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.LastShowExtendedInfoTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +320, medido na build 25090264
    //  (offset absoluto medido: 0x19C0; confianca baixa)
    void*& LastSnapPointCyclePositionField() const
    { return BrzCampoAncorado<void*>(this, "LastDownloadedTributePlayerData", 320); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +72, medido na build 25090264
    //  (offset absoluto medido: 0xC98; confianca media)
    void*& LastSoundWaveField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +120, medido na build 25090264
    //  (offset absoluto medido: 0x1870; confianca media)
    int& LastSpawnPointIDField() const
    { return BrzCampoAncorado<int>(this, "WaypointsSOTF", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +124, medido na build 25090264
    //  (offset absoluto medido: 0x1874; confianca media)
    int& LastSpawnRegionIndexField() const
    { return BrzCampoAncorado<int>(this, "WaypointsSOTF", 124); }
    FItemNetID& LastSteamItemIDToAddField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterPlayerController.LastSteamItemIDToAdd"); }
    FItemNetID& LastSteamItemIDToRemoveField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterPlayerController.LastSteamItemIDToRemove"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +392, medido na build 25090264
    //  (offset absoluto medido: 0x3480; confianca baixa)
    void*& LastStructureSkinNetMessageTimeField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 392); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +384, medido na build 25090264
    //  (offset absoluto medido: 0x3478; confianca baixa)
    void*& LastStructureSkinSetPersistentDataTimeField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 384); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SFXVolumeMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1A50; confianca alta)
    double& LastTeleportedTimeField() const
    { return BrzCampoAncorado<double>(this, "SFXVolumeMultiplier", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomActorTracking_HasJustChangedSearchText` +34, medido na build 25090264
    //  (offset absoluto medido: 0x2740; confianca media)
    double& LastTimeFoundBetterClosestLocationField() const
    { return BrzCampoAncorado<double>(this, "CustomActorTracking_HasJustChangedSearchText", 34); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForcedTimerRestrictionOnRequestingTrackingInfoFromServer` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2A88; confianca alta)
    void*& LastTimeRequestedTrackingFromServerField() const
    { return BrzCampoAncorado<void*>(this, "ForcedTimerRestrictionOnRequestingTrackingInfoFromServer", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventCanOpenMap` +15, medido na build 25090264
    //  (offset absoluto medido: 0x1260; confianca alta)
    void*& LastTimeRequestedTradeDataField() const
    { return BrzCampoAncorado<void*>(this, "bPreventCanOpenMap", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +56, medido na build 25090264
    //  (offset absoluto medido: 0x12E8; confianca media)
    void*& LastTimeSentCarriedAsPassengerRotationField() const
    { return BrzCampoAncorado<void*>(this, "SteamInventoryStatusUITemplate", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +48, medido na build 25090264
    //  (offset absoluto medido: 0x12E0; confianca media)
    double& LastTimeSentCarriedRotationField() const
    { return BrzCampoAncorado<double>(this, "SteamInventoryStatusUITemplate", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRawInputDir` +32, medido na build 25090264
    //  (offset absoluto medido: 0x1048; confianca alta)
    void*& LastTimeToAcknowledgePosessionCallsField() const
    { return BrzCampoAncorado<void*>(this, "LastRawInputDir", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDeathPrimalCharacter` +24, medido na build 25090264
    //  (offset absoluto medido: 0xFA0; confianca alta)
    double& LastTransferTimeField() const
    { return BrzCampoAncorado<double>(this, "LastDeathPrimalCharacter", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +300, medido na build 25090264
    //  (offset absoluto medido: 0x19AC; confianca baixa)
    void*& LastTransferWasDownloadingAscendedCharacterField() const
    { return BrzCampoAncorado<void*>(this, "LastDownloadedTributePlayerData", 300); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +288, medido na build 25090264
    //  (offset absoluto medido: 0x19A0; confianca baixa)
    unsigned long long& LastTransferredPlayerIDField() const
    { return BrzCampoAncorado<unsigned long long>(this, "LastDownloadedTributePlayerData", 288); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastShowExtendedInfoTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1A80; confianca media)
    UPrimalItem*& LastTransferredToRemoteInventoryItemField() const
    { return BrzCampoAncorado<UPrimalItem*>(this, "LastShowExtendedInfoTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +111, medido na build 25090264
    //  (offset absoluto medido: 0x16D8; confianca media)
    double& LastTribeLogRequestTimeField() const
    { return BrzCampoAncorado<double>(this, "bPreventPaintingStreaming", 111); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +16, medido na build 25090264
    //  (offset absoluto medido: 0x12C0; confianca media)
    void*& LastTurnSpeedField() const
    { return BrzCampoAncorado<void*>(this, "SteamInventoryStatusUITemplate", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +40, medido na build 25090264
    //  (offset absoluto medido: 0x1290; confianca media)
    FItemNetID& LastUnequippedItemNetIDField() const
    { return BrzCampoAncorado<FItemNetID>(this, "PhotoModeMarkerActor", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +7, medido na build 25090264
    //  (offset absoluto medido: 0x1670; confianca media)
    double& LastUsePressTimeField() const
    { return BrzCampoAncorado<double>(this, "bPreventPaintingStreaming", 7); }
    FieldArray<double> LastUsedItemSlotTimesField() const
    { return { (void*)this, "AShooterPlayerController.LastUsedItemSlotTimes" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPendingAllowPlayerMovement` +24, medido na build 25090264
    //  (offset absoluto medido: 0x19F8; confianca alta)
    double& LastVerifyStructureItemTimeField() const
    { return BrzCampoAncorado<double>(this, "bPendingAllowPlayerMovement", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +63, medido na build 25090264
    //  (offset absoluto medido: 0x16A8; confianca media)
    void*& LastViewLocationField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 63); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +160, medido na build 25090264
    //  (offset absoluto medido: 0x21F0; confianca baixa)
    double& LastVoiceOutTimeField() const
    { return BrzCampoAncorado<double>(this, "bTribeCacheHaveRallyPointData", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +32, medido na build 25090264
    //  (offset absoluto medido: 0x11E0; confianca alta)
    TArray<void*>& LastWheelCategoriesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "RemoteViewingInventories", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +48, medido na build 25090264
    //  (offset absoluto medido: 0x11F0; confianca media)
    TArray<UTexture2D*>& LastWheelIconsField() const
    { return BrzCampoAncorado<TArray<UTexture2D*>>(this, "RemoteViewingInventories", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +64, medido na build 25090264
    //  (offset absoluto medido: 0x1200; confianca media)
    TArray<void*>& LastWheelStringsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "RemoteViewingInventories", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +64, medido na build 25090264
    //  (offset absoluto medido: 0x12A8; confianca media)
    long long& LinkedPlayerIDField() const
    { return BrzCampoAncorado<long long>(this, "PhotoModeMarkerActor", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +88, medido na build 25090264
    //  (offset absoluto medido: 0x25E0; confianca media)
    unsigned long long& LoadingFramesField() const
    { return BrzCampoAncorado<unsigned long long>(this, "EnforcementColors", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2398; confianca media)
    void*& MainLobbyJoinTimerField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 16); }
    TArray<void*>& MapDinosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.MapDinos"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPlayerCharacterLocation` +32, medido na build 25090264
    //  (offset absoluto medido: 0xD30; confianca alta)
    float& MaxDragWeightToAimBoneField() const
    { return BrzCampoAncorado<float>(this, "CurrentPlayerCharacterLocation", 32); }
    int& MaxTeamPingDataOnClientField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.MaxTeamPingDataOnClient"); }
    float& MaxUseCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.MaxUseCheckRadius"); }
    float& MaxUseDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.MaxUseDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructurePlacer` +8, medido na build 25090264
    //  (offset absoluto medido: 0xD58; confianca alta)
    void*& MeleeAimAssistTimerField() const
    { return BrzCampoAncorado<void*>(this, "StructurePlacer", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +183, medido na build 25090264
    //  (offset absoluto medido: 0x1720; confianca baixa)
    TArray<void*>& MessageQueueField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bPreventPaintingStreaming", 183); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +175, medido na build 25090264
    //  (offset absoluto medido: 0x1718; confianca baixa)
    void*& MessageQueueTasksCounterField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 175); }
    BrzCampoPonteiro MidasTouchDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.MidasTouchData")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayerTravelLocation` +32, medido na build 25090264
    //  (offset absoluto medido: 0x36F8; confianca alta)
    void*& MilestoneThresholdCountersField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayerTravelLocation", 32); }
    BrzCampoPonteiro MissionWaypointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.MissionWaypoint")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPlayerCharacterLocation` +52, medido na build 25090264
    //  (offset absoluto medido: 0xD44; confianca media)
    int& ModifedButtonCountField() const
    { return BrzCampoAncorado<int>(this, "CurrentPlayerCharacterLocation", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventCanOpenMap` +7, medido na build 25090264
    //  (offset absoluto medido: 0x1258; confianca alta)
    void*& MultiuseForActorTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "bPreventCanOpenMap", 7); }
    FPrimalPlayerDataStruct& MyPlayerDataStructField() const
    { return *GetNativePointerField<FPrimalPlayerDataStruct*>(this, "AShooterPlayerController.MyPlayerDataStruct"); }
    BrzCampoPonteiro MyVolumetricDispatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.MyVolumetricDispatcher")); }
    TArray<void*>& NearbyPointsOfInterestField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.NearbyPointsOfInterest"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +23, medido na build 25090264
    //  (offset absoluto medido: 0x1680; confianca media)
    TArray<void*>& NotifiedTribeWarIDsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bPreventPaintingStreaming", 23); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +39, medido na build 25090264
    //  (offset absoluto medido: 0x1690; confianca media)
    TArray<void*>& NotifiedTribeWarNamesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bPreventPaintingStreaming", 39); }
    BrzCampoPonteiro OnBountyCategoryProgressedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.OnBountyCategoryProgressed")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +32, medido na build 25090264
    //  (offset absoluto medido: 0xC70; confianca media)
    void*& OnClientMessageOfTheDayRecivedField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 32); }
    BrzCampoPonteiro OnClientReceiveStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.OnClientReceiveStructuresPlacedOnFloor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +24, medido na build 25090264
    //  (offset absoluto medido: 0x23A0; confianca media)
    void*& OnFriendsChangedHandleField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FastTravelDroppedInventory` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1248; confianca alta)
    void*& OnRepeatUseHeldTimerHandlerField() const
    { return BrzCampoAncorado<void*>(this, "FastTravelDroppedInventory", 24); }
    BrzCampoPonteiro OnSkillsChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.OnSkillsChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +440, medido na build 25090264
    //  (offset absoluto medido: 0x2308; confianca baixa)
    void*& OnSystemUIOverlayStateChangedDelegateHandleField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 440); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +24, medido na build 25090264
    //  (offset absoluto medido: 0x11D8; confianca alta)
    void*& OnUseHeldTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "RemoteViewingInventories", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShooterHUDDebugActors` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3690; confianca alta)
    void*& OutdatedCosmeticIDsField() const
    { return BrzCampoAncorado<void*>(this, "ShooterHUDDebugActors", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShooterHUDDebugActors` +40, medido na build 25090264
    //  (offset absoluto medido: 0x36A8; confianca media)
    void*& OutdatedCosmeticsWarningHandleField() const
    { return BrzCampoAncorado<void*>(this, "ShooterHUDDebugActors", 40); }
    BrzCampoPonteiro POIDistanceToScreenCenterDismissField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.POIDistanceToScreenCenterDismiss")); }
    double& POI_LastSearchTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController.POI_LastSearchTickTime"); }
    float& POI_SearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.POI_SearchRadius"); }
    float& POI_SearchTickInterval_CurrentField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.POI_SearchTickInterval_Current"); }
    BrzCampoPonteiro POI_SearchTickInterval_RandRangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.POI_SearchTickInterval_RandRanges")); }
    UPaintingStreamingComponent*& PaintingStreamingComponentField() const
    { return *GetNativePointerField<UPaintingStreamingComponent**>(this, "AShooterPlayerController.PaintingStreamingComponent"); }
    BrzCampoPonteiro PauseMenuUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.PauseMenuUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PhotoModeMarkerActor` +48, medido na build 25090264
    //  (offset absoluto medido: 0x1298; confianca media)
    void*& PendingAscensionItemCountField() const
    { return BrzCampoAncorado<void*>(this, "PhotoModeMarkerActor", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +64, medido na build 25090264
    //  (offset absoluto medido: 0xC90; confianca media)
    void*& PendingInstigatorHandleField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +144, medido na build 25090264
    //  (offset absoluto medido: 0xCE0; confianca baixa)
    void*& PendingInstigatorVOField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +160, medido na build 25090264
    //  (offset absoluto medido: 0xCF0; confianca baixa)
    void*& PendingInstigatorVORowsField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentTrackingMark` +144, medido na build 25090264
    //  (offset absoluto medido: 0x1190; confianca baixa)
    void*& PendingMarketDataRequestingStructureField() const
    { return BrzCampoAncorado<void*>(this, "CurrentTrackingMark", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastShowExtendedInfoTime` +104, medido na build 25090264
    //  (offset absoluto medido: 0x1AD8; confianca media)
    void*& PendingRequestEquippedItemsQueueField() const
    { return BrzCampoAncorado<void*>(this, "LastShowExtendedInfoTime", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastShowExtendedInfoTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1A88; confianca media)
    void*& PendingResponseEquippedItemsQueueField() const
    { return BrzCampoAncorado<void*>(this, "LastShowExtendedInfoTime", 24); }
    int& PendingViewingWheelCategoryField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.PendingViewingWheelCategory"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +80, medido na build 25090264
    //  (offset absoluto medido: 0x35E8; confianca media)
    void*& PerfCheckCurrentLocationIndexField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +84, medido na build 25090264
    //  (offset absoluto medido: 0x35EC; confianca media)
    void*& PerfCheckCurrentYawField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 84); }
    BrzCampoPonteiro PerfCheckLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.PerfCheckLocations")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +48, medido na build 25090264
    //  (offset absoluto medido: 0x35C8; confianca media)
    void*& PerfCheckLocationsShouldTakeMemReportField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +32, medido na build 25090264
    //  (offset absoluto medido: 0x35B8; confianca media)
    void*& PerfCheckLocationsShouldTakeScreenShotField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +16, medido na build 25090264
    //  (offset absoluto medido: 0x35A8; confianca media)
    void*& PerfCheckPoiTodsField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +88, medido na build 25090264
    //  (offset absoluto medido: 0x35F0; confianca media)
    void*& PerfCheckShouldTakeScreenshotField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 88); }
    FString& PerfCheckTimeOfDayField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerController.PerfCheckTimeOfDay"); }
    float& PerfCheckWaitingSecondsAfterTeleportField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PerfCheckWaitingSecondsAfterTeleport"); }
    BrzCampoPonteiro PersistentItemUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.PersistentItemUnlocks")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPendingAllowPlayerMovement` +44, medido na build 25090264
    //  (offset absoluto medido: 0x1A0C; confianca media)
    int& PersonalDinoTameCountField() const
    { return BrzCampoAncorado<int>(this, "bPendingAllowPlayerMovement", 44); }
    AActor*& PhotoModeMarkerActorField() const
    { return *GetNativePointerField<AActor**>(this, "AShooterPlayerController.PhotoModeMarkerActor"); }
    float& PingCoolDownTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingCoolDownTime"); }
    UTexture2D*& PingIcon_DefaultField() const
    { return *GetNativePointerField<UTexture2D**>(this, "AShooterPlayerController.PingIcon_Default"); }
    UTexture2D*& PingIcon_DinosField() const
    { return *GetNativePointerField<UTexture2D**>(this, "AShooterPlayerController.PingIcon_Dinos"); }
    UTexture2D*& PingIcon_PlayersField() const
    { return *GetNativePointerField<UTexture2D**>(this, "AShooterPlayerController.PingIcon_Players"); }
    UTexture2D*& PingIcon_StructuresField() const
    { return *GetNativePointerField<UTexture2D**>(this, "AShooterPlayerController.PingIcon_Structures"); }
    float& PingLifetimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingLifetime"); }
    float& PingLifetime_DyingField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingLifetime_Dying"); }
    float& PingNotifyRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingNotifyRadius"); }
    float& PingTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingTraceDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +109, medido na build 25090264
    //  (offset absoluto medido: 0x17B8; confianca media)
    int& PlayerBadgeGroupField() const
    { return BrzCampoAncorado<int>(this, "bHasReachedLowestDepth", 109); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +12, medido na build 25090264
    //  (offset absoluto medido: 0x12BC; confianca media)
    int& PlayerControllerNumField() const
    { return BrzCampoAncorado<int>(this, "SteamInventoryStatusUITemplate", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +72, medido na build 25090264
    //  (offset absoluto medido: 0x2198; confianca media)
    void*& PlayerDataForVoiceField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2168; confianca media)
    void*& PlayerDataForVoiceCSField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +104, medido na build 25090264
    //  (offset absoluto medido: 0x1860; confianca media)
    TArray<void*>& PlayerInventoryItemsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "WaypointsSOTF", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +304, medido na build 25090264
    //  (offset absoluto medido: 0x19B0; confianca baixa)
    double& PossessedFirstPawnTimeField() const
    { return BrzCampoAncorado<double>(this, "LastDownloadedTributePlayerData", 304); }
    UPrimalLocalProfile*& PrimalLocalProfileField() const
    { return *GetNativePointerField<UPrimalLocalProfile**>(this, "AShooterPlayerController.PrimalLocalProfile"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalStatsCacheFlushInterval` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1B58; confianca alta)
    void*& PrimalStatsCacheField() const
    { return BrzCampoAncorado<void*>(this, "PrimalStatsCacheFlushInterval", 8); }
    float& PrimalStatsCacheFlushIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PrimalStatsCacheFlushInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +168, medido na build 25090264
    //  (offset absoluto medido: 0x21F8; confianca baixa)
    void*& QueryBlockedVoiceStateField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +416, medido na build 25090264
    //  (offset absoluto medido: 0x22F0; confianca baixa)
    TArray<void*>& QueuedBlockedVoiceChatUsersToProcessAfterLoggingInField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bTribeCacheHaveRallyPointData", 416); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +136, medido na build 25090264
    //  (offset absoluto medido: 0x3380; confianca baixa)
    void*& QueuedVoiceChannelsToJoinField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +216, medido na build 25090264
    //  (offset absoluto medido: 0x33D0; confianca baixa)
    void*& QueuedVoiceLobbiesToJoinField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +112, medido na build 25090264
    //  (offset absoluto medido: 0x3608; confianca media)
    void*& RecordMapPerformanceTestHandleField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +96, medido na build 25090264
    //  (offset absoluto medido: 0x35F8; confianca media)
    void*& RecordedPerfChecksField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2158; confianca media)
    void*& RecvHandleField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 8); }
    TArray<TWeakObjectPtr<void>>& RemoteViewingInventoriesField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterPlayerController.RemoteViewingInventories"); }
    float& RespawnSoundDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.RespawnSoundDelay"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActorTracking_TempTrackActorsNotYetSyncedAtAll` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2BE0; confianca alta)
    void*& RestrictClientAutoMarkDeathWaypointAsReachedField() const
    { return BrzCampoAncorado<void*>(this, "ActorTracking_TempTrackActorsNotYetSyncedAtAll", 16); }
    float& SFXVolumeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.SFXVolumeMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalLocalProfile` +8, medido na build 25090264
    //  (offset absoluto medido: 0xFF8; confianca alta)
    void*& SaveProfileHandleField() const
    { return BrzCampoAncorado<void*>(this, "PrimalLocalProfile", 8); }
    int& SavedMissionBiomeFilterMaskField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.SavedMissionBiomeFilterMask"); }
    TArray<void*>& SavedSurvivorProfileSettingsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.SavedSurvivorProfileSettings"); }
    USoundCue*& SelectSlotSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterPlayerController.SelectSlotSound"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +5, medido na build 25090264
    //  (offset absoluto medido: 0x1750; confianca media)
    void*& ServerCachedAchievementIDsField() const
    { return BrzCampoAncorado<void*>(this, "bHasReachedLowestDepth", 5); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +52, medido na build 25090264
    //  (offset absoluto medido: 0x2C20; confianca media)
    double& ServerClearDeathWaypoint_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "ClientsideTrackLatestDeathPOI", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +60, medido na build 25090264
    //  (offset absoluto medido: 0x2C28; confianca media)
    float& ServerClearDeathWaypoint_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "ClientsideTrackLatestDeathPOI", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +176, medido na build 25090264
    //  (offset absoluto medido: 0x2A48; confianca baixa)
    double& ServerClearPOIVisibilityForAllActors_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +184, medido na build 25090264
    //  (offset absoluto medido: 0x2A50; confianca baixa)
    float& ServerClearPOIVisibilityForAllActors_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 184); }
    BrzCampoPonteiro ServerMessageQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ServerMessageQueue")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +203, medido na build 25090264
    //  (offset absoluto medido: 0x1734; confianca baixa)
    void*& ServerMessageQueueTasksCounterField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 203); }
    float& ServerRequestCustomTrackedActorListInterval_WithUIField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ServerRequestCustomTrackedActorListInterval_WithUI"); }
    float& ServerRequestCustomTrackedActorListInterval_WithoutUIField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ServerRequestCustomTrackedActorListInterval_WithoutUI"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +48, medido na build 25090264
    //  (offset absoluto medido: 0x29C8; confianca media)
    double& ServerRequestCustomTrackedActorList_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +56, medido na build 25090264
    //  (offset absoluto medido: 0x29D0; confianca media)
    float& ServerRequestCustomTrackedActorList_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +32, medido na build 25090264
    //  (offset absoluto medido: 0x29B8; confianca media)
    double& ServerRequestRemoveDinoFromTamingListByID_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +40, medido na build 25090264
    //  (offset absoluto medido: 0x29C0; confianca media)
    float& ServerRequestRemoveDinoFromTamingListByID_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastNetworkTimeRequestedFilterCachedTeamTameList` +8, medido na build 25090264
    //  (offset absoluto medido: 0x26A8; confianca alta)
    void*& ServerRequestTamingInfoListHandleField() const
    { return BrzCampoAncorado<void*>(this, "LastNetworkTimeRequestedFilterCachedTeamTameList", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +16, medido na build 25090264
    //  (offset absoluto medido: 0x29A8; confianca media)
    double& ServerRequestTamingInfoList_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +24, medido na build 25090264
    //  (offset absoluto medido: 0x29B0; confianca media)
    float& ServerRequestTamingInfoList_ServerRequestTamingInfoListField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TamingWaypoints` +24, medido na build 25090264
    //  (offset absoluto medido: 0x26C8; confianca alta)
    void*& ServerRequestTrackedDinoInfoListHandle_WithUIField() const
    { return BrzCampoAncorado<void*>(this, "TamingWaypoints", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TamingWaypoints` +32, medido na build 25090264
    //  (offset absoluto medido: 0x26D0; confianca alta)
    void*& ServerRequestTrackedDinoInfoListHandle_WithoutUIField() const
    { return BrzCampoAncorado<void*>(this, "TamingWaypoints", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +80, medido na build 25090264
    //  (offset absoluto medido: 0x29E8; confianca media)
    double& ServerRequestUpdateTrackedWaypointsAndMapPlayers_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +88, medido na build 25090264
    //  (offset absoluto medido: 0x29F0; confianca media)
    float& ServerRequestUpdateTrackedWaypointsAndMapPlayers_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +64, medido na build 25090264
    //  (offset absoluto medido: 0x29D8; confianca media)
    double& ServerRequestUpdateTrackedWaypointsOnly_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +72, medido na build 25090264
    //  (offset absoluto medido: 0x29E0; confianca media)
    float& ServerRequestUpdateTrackedWaypointsOnly_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +128, medido na build 25090264
    //  (offset absoluto medido: 0x2A18; confianca media)
    double& ServerSetActiveWaypointTrackedCreatureViaCharacterIndex_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +136, medido na build 25090264
    //  (offset absoluto medido: 0x2A20; confianca baixa)
    float& ServerSetActiveWaypointTrackedCreatureViaCharacterIndex_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +112, medido na build 25090264
    //  (offset absoluto medido: 0x2A08; confianca media)
    double& ServerSetActiveWaypointTrackedPlayerViaCharacterIndex_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +120, medido na build 25090264
    //  (offset absoluto medido: 0x2A10; confianca media)
    float& ServerSetActiveWaypointTrackedPlayerViaCharacterIndex_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +20, medido na build 25090264
    //  (offset absoluto medido: 0x2C00; confianca alta)
    double& ServerSetDeathWaypointInvisible_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "ClientsideTrackLatestDeathPOI", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +28, medido na build 25090264
    //  (offset absoluto medido: 0x2C08; confianca alta)
    float& ServerSetDeathWaypointInvisible_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "ClientsideTrackLatestDeathPOI", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2BF0; confianca alta)
    double& ServerSetDeathWaypointVisible_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "ClientsideTrackLatestDeathPOI", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2BF8; confianca alta)
    float& ServerSetDeathWaypointVisible_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "ClientsideTrackLatestDeathPOI", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +208, medido na build 25090264
    //  (offset absoluto medido: 0x2A68; confianca baixa)
    double& ServerSetFavoriteTrackedCreatureViaCharacterIndex_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 208); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +216, medido na build 25090264
    //  (offset absoluto medido: 0x2A70; confianca baixa)
    float& ServerSetFavoriteTrackedCreatureViaCharacterIndex_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +192, medido na build 25090264
    //  (offset absoluto medido: 0x2A58; confianca baixa)
    double& ServerSetFavoriteTrackedPlayerViaCharacterIndex_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +200, medido na build 25090264
    //  (offset absoluto medido: 0x2A60; confianca baixa)
    float& ServerSetFavoriteTrackedPlayerViaCharacterIndex_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +160, medido na build 25090264
    //  (offset absoluto medido: 0x2A38; confianca baixa)
    double& ServerTogglePOIVisibilityForTrackedCreatureWaypoint_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +168, medido na build 25090264
    //  (offset absoluto medido: 0x2A40; confianca baixa)
    float& ServerTogglePOIVisibilityForTrackedCreatureWaypoint_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +144, medido na build 25090264
    //  (offset absoluto medido: 0x2A28; confianca baixa)
    double& ServerTogglePOIVisibilityForTrackedPlayerWaypoint_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +152, medido na build 25090264
    //  (offset absoluto medido: 0x2A30; confianca baixa)
    float& ServerTogglePOIVisibilityForTrackedPlayerWaypoint_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 152); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +55, medido na build 25090264
    //  (offset absoluto medido: 0x16A0; confianca media)
    int& ServerTribeLogLastLogIndexField() const
    { return BrzCampoAncorado<int>(this, "bPreventPaintingStreaming", 55); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +59, medido na build 25090264
    //  (offset absoluto medido: 0x16A4; confianca media)
    int& ServerTribeLogLastTribeIDField() const
    { return BrzCampoAncorado<int>(this, "bPreventPaintingStreaming", 59); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +96, medido na build 25090264
    //  (offset absoluto medido: 0x29F8; confianca media)
    double& ServerUntrackAllActors_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +104, medido na build 25090264
    //  (offset absoluto medido: 0x2A00; confianca media)
    float& ServerUntrackAllActors_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalLocalProfile` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1008; confianca alta)
    FString& ServerVersionField() const
    { return BrzCampoAncorado<FString>(this, "PrimalLocalProfile", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +480, medido na build 25090264
    //  (offset absoluto medido: 0x34D8; confianca baixa)
    void*& Server_BlockedUserIdsField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 480); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +36, medido na build 25090264
    //  (offset absoluto medido: 0x2C10; confianca media)
    double& Server_RequestLastDeathTrackingActorLoc_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "ClientsideTrackLatestDeathPOI", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClientsideTrackLatestDeathPOI` +44, medido na build 25090264
    //  (offset absoluto medido: 0x2C18; confianca media)
    float& Server_RequestLastDeathTrackingActorLoc_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "ClientsideTrackLatestDeathPOI", 44); }
    BrzCampoPonteiro ShooterHUDDebugActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ShooterHUDDebugActors")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +69, medido na build 25090264
    //  (offset absoluto medido: 0x35DD; confianca media)
    void*& ShouldUploadPerfCheckScreenshotsToJIRAField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 69); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +68, medido na build 25090264
    //  (offset absoluto medido: 0x35DC; confianca media)
    void*& ShouldUploadPerfCheckToJIRAField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +312, medido na build 25090264
    //  (offset absoluto medido: 0x19B8; confianca baixa)
    int& SnapPointCycleField() const
    { return BrzCampoAncorado<int>(this, "LastDownloadedTributePlayerData", 312); }
    BrzCampoPonteiro SnowManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.SnowManager")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +104, medido na build 25090264
    //  (offset absoluto medido: 0x1228; confianca media)
    TWeakObjectPtr<void>& SpawnAtBedField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "RemoteViewingInventories", 104); }
    TArray<APointOfInterestCosmeticActor*>& SpawnedPointCosmeticActorsField() const
    { return *GetNativePointerField<TArray<APointOfInterestCosmeticActor*>*>(this, "AShooterPlayerController.SpawnedPointCosmeticActors"); }
    TArray<UUserWidget*>& SpawnedPointWidgetsField() const
    { return *GetNativePointerField<TArray<UUserWidget*>*>(this, "AShooterPlayerController.SpawnedPointWidgets"); }
    int& SpectatorCycleIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.SpectatorCycleIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +64, medido na build 25090264
    //  (offset absoluto medido: 0x35D8; confianca media)
    void*& SpyglassPerfWaitSecondsOverrideField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bMissionSortByDistance` +15, medido na build 25090264
    //  (offset absoluto medido: 0x10A8; confianca alta)
    void*& StartChatHandleField() const
    { return BrzCampoAncorado<void*>(this, "bMissionSortByDistance", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +40, medido na build 25090264
    //  (offset absoluto medido: 0x10D8; confianca media)
    void*& StartEmoteSelectionHandleField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bMissionSortByDistance` +7, medido na build 25090264
    //  (offset absoluto medido: 0x10A0; confianca alta)
    void*& StartInventoryRadialSelectorHandleField() const
    { return BrzCampoAncorado<void*>(this, "bMissionSortByDistance", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +8, medido na build 25090264
    //  (offset absoluto medido: 0x10B8; confianca alta)
    void*& StartPlayerActionRadialSelectorHandleField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +32, medido na build 25090264
    //  (offset absoluto medido: 0x10D0; confianca alta)
    void*& StartWhistleSelectionHandleField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +72, medido na build 25090264
    //  (offset absoluto medido: 0x35E0; confianca media)
    void*& StartedPerfCheckAtField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 72); }
    BrzCampoPonteiro SteamInventoryStatusUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.SteamInventoryStatusUITemplate")); }
    APrimalStructurePlacer*& StructurePlacerField() const
    { return *GetNativePointerField<APrimalStructurePlacer**>(this, "AShooterPlayerController.StructurePlacer"); }
    BrzCampoPonteiro StructurePlacerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.StructurePlacerClass")); }
    BrzCampoPonteiro TamingWaypointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TamingWaypoints")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPlayerCharacterLocation` +24, medido na build 25090264
    //  (offset absoluto medido: 0xD28; confianca alta)
    AActor*& TargetAimMagnetismField() const
    { return BrzCampoAncorado<AActor*>(this, "CurrentPlayerCharacterLocation", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRawInputDir` +40, medido na build 25090264
    //  (offset absoluto medido: 0x1050; confianca media)
    unsigned long long& TargetOrbitedPlayerIdField() const
    { return BrzCampoAncorado<unsigned long long>(this, "LastRawInputDir", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRawInputDir` +48, medido na build 25090264
    //  (offset absoluto medido: 0x1058; confianca media)
    void*& TargetOrbitedTrialCountField() const
    { return BrzCampoAncorado<void*>(this, "LastRawInputDir", 48); }
    BrzCampoPonteiro TeamPingSettings_AttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_Attack")); }
    BrzCampoPonteiro TeamPingSettings_ClearRallyPointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_ClearRallyPoint")); }
    BrzCampoPonteiro TeamPingSettings_DangerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_Danger")); }
    BrzCampoPonteiro TeamPingSettings_FollowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_Follow")); }
    BrzCampoPonteiro TeamPingSettings_FollowMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_FollowMe")); }
    BrzCampoPonteiro TeamPingSettings_GoHereField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_GoHere")); }
    BrzCampoPonteiro TeamPingSettings_LootItField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_LootIt")); }
    BrzCampoPonteiro TeamPingSettings_RallyPointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_RallyPoint")); }
    BrzCampoPonteiro TeamPingSettings_TameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_Tame")); }
    BrzCampoPonteiro TeamPingSettings_TrackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TeamPingSettings_Track")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPings` +16, medido na build 25090264
    //  (offset absoluto medido: 0x20F0; confianca alta)
    void*& TeamPingWheelHandleField() const
    { return BrzCampoAncorado<void*>(this, "CurrentPings", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +224, medido na build 25090264
    //  (offset absoluto medido: 0x2A78; confianca baixa)
    double& TellServerAboutNewAutoTrackSetting_LastRequestedTimeField() const
    { return BrzCampoAncorado<double>(this, "POIDistanceToScreenCenterDismiss", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIDistanceToScreenCenterDismiss` +232, medido na build 25090264
    //  (offset absoluto medido: 0x2A80; confianca baixa)
    float& TellServerAboutNewAutoTrackSetting_ServerCallRestrictionIntervalField() const
    { return BrzCampoAncorado<float>(this, "POIDistanceToScreenCenterDismiss", 232); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FastTravelDroppedInventory` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1238; confianca alta)
    APawn*& TempLastLostPawnField() const
    { return BrzCampoAncorado<APawn*>(this, "FastTravelDroppedInventory", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShooterHUDDebugActors` +32, medido na build 25090264
    //  (offset absoluto medido: 0x36A0; confianca alta)
    void*& TimeLastDisplayOutdatedCosmeticsWarningField() const
    { return BrzCampoAncorado<void*>(this, "ShooterHUDDebugActors", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +176, medido na build 25090264
    //  (offset absoluto medido: 0xD00; confianca baixa)
    void*& TimerDoPlayNextInstigatorVOField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `IsChangingCameraMode` +8, medido na build 25090264
    //  (offset absoluto medido: 0x10E8; confianca alta)
    void*& TimerToggleChangeCameraModeField() const
    { return BrzCampoAncorado<void*>(this, "IsChangingCameraMode", 8); }
    BrzCampoPonteiro ToggleAutoRunIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.ToggleAutoRunIcon")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `IsChangingCameraMode` +16, medido na build 25090264
    //  (offset absoluto medido: 0x10F0; confianca alta)
    void*& ToggleDubleTapTimerMapField() const
    { return BrzCampoAncorado<void*>(this, "IsChangingCameraMode", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +316, medido na build 25090264
    //  (offset absoluto medido: 0x19BC; confianca baixa)
    int& TotalNumSnapPointsField() const
    { return BrzCampoAncorado<int>(this, "LastDownloadedTributePlayerData", 316); }
    float& TrackActorPOILocationLerpRateWhenNotInClientRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController.TrackActorPOILocationLerpRateWhenNotInClientRange"); }
    BrzCampoPonteiro TrackedActorIDs_OrderMap_CreaturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TrackedActorIDs_OrderMap_Creatures")); }
    BrzCampoPonteiro TrackedActorIDs_OrderMap_PlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TrackedActorIDs_OrderMap_Players")); }
    TArray<void*>& TrackedActorIDs_TotalForFilter_OrderedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.TrackedActorIDs_TotalForFilter_Ordered"); }
    BrzCampoPonteiro TrackedActorWaypointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TrackedActorWaypoints")); }
    BrzCampoPonteiro TrackedActorWaypoints_TeammatesOnMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TrackedActorWaypoints_TeammatesOnMap")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDeathPrimalCharacter` +32, medido na build 25090264
    //  (offset absoluto medido: 0xFA8; confianca alta)
    double& TransferTimeCooldownField() const
    { return BrzCampoAncorado<double>(this, "LastDeathPrimalCharacter", 32); }
    BrzCampoPonteiro TribeCacheRallyPointDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.TribeCacheRallyPointData")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2390; confianca media)
    void*& TribeLobbyJoinTimerField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPings` +24, medido na build 25090264
    //  (offset absoluto medido: 0x20F8; confianca alta)
    void*& TribeRallyPointUpdateHandleField() const
    { return BrzCampoAncorado<void*>(this, "CurrentPings", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructurePlacerClass` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1070; confianca alta)
    void*& UnFreezeHandleField() const
    { return BrzCampoAncorado<void*>(this, "StructurePlacerClass", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +140, medido na build 25090264
    //  (offset absoluto medido: 0x3624; confianca baixa)
    void*& UploadedDinoCountField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 140); }
    FieldArray<unsigned char> UsedItemSlotField() const
    { return { (void*)this, "AShooterPlayerController.UsedItemSlot" }; }
    BrzCampoPonteiro UserCosmeticInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController.UserCosmeticInfo")); }
    int& ViewingWheelCategoryField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ViewingWheelCategory"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FastTravelDroppedInventory` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1240; confianca alta)
    int& VoiceChatFilerTypeField() const
    { return BrzCampoAncorado<int>(this, "FastTravelDroppedInventory", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +152, medido na build 25090264
    //  (offset absoluto medido: 0x21E8; confianca baixa)
    void*& VoiceChatFilerTypeTSField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 152); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +376, medido na build 25090264
    //  (offset absoluto medido: 0x3470; confianca baixa)
    void*& VoiceChatReevaluatingBlockedUsersField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 376); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +128, medido na build 25090264
    //  (offset absoluto medido: 0x3618; confianca media)
    void*& WaitingCloudClubARKTimerField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bEnableAltFire` +7, medido na build 25090264
    //  (offset absoluto medido: 0x1650; confianca alta)
    double& WaitingForSpawnUITimeField() const
    { return BrzCampoAncorado<double>(this, "bEnableAltFire", 7); }
    TArray<void*>& WaypointsSOTFField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController.WaypointsSOTF"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentTrackingMark` +120, medido na build 25090264
    //  (offset absoluto medido: 0x1178; confianca media)
    void*& WeakClientRecvInventoryPtrField() const
    { return BrzCampoAncorado<void*>(this, "CurrentTrackingMark", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +56, medido na build 25090264
    //  (offset absoluto medido: 0xC88; confianca media)
    void*& bAbsolutelyForceSetInputModeField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalStatsCacheFlushInterval` +57, medido na build 25090264
    //  (offset absoluto medido: 0x1B89; confianca media)
    bool& bAutoPlayerField() const
    { return BrzCampoAncorado<bool>(this, "PrimalStatsCacheFlushInterval", 57); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bEnableAltFire` +19, medido na build 25090264
    //  (offset absoluto medido: 0x165C; confianca alta)
    void*& bChatSpammedField() const
    { return BrzCampoAncorado<void*>(this, "bEnableAltFire", 19); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bForceHideGameplayUI` +15, medido na build 25090264
    //  (offset absoluto medido: 0x1A20; confianca alta)
    void*& bClientIsDPCField() const
    { return BrzCampoAncorado<void*>(this, "bForceHideGameplayUI", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +88, medido na build 25090264
    //  (offset absoluto medido: 0x16C1; confianca media)
    bool& bClientReceivedTribeLogField() const
    { return BrzCampoAncorado<bool>(this, "bPreventPaintingStreaming", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bEnableAltFire` +31, medido na build 25090264
    //  (offset absoluto medido: 0x1668; confianca alta)
    void*& bCommunicationPrivilegeFetchedField() const
    { return BrzCampoAncorado<void*>(this, "bEnableAltFire", 31); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentDiscordCalls` +80, medido na build 25090264
    //  (offset absoluto medido: 0x2380; confianca media)
    void*& bCommunicationRestoredField() const
    { return BrzCampoAncorado<void*>(this, "CurrentDiscordCalls", 80); }
    bool& bDrawBlackBackgroundField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bDrawBlackBackground"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SteamInventoryStatusUITemplate` +8, medido na build 25090264
    //  (offset absoluto medido: 0x12B8; confianca media)
    void*& bDrawLocationField() const
    { return BrzCampoAncorado<void*>(this, "SteamInventoryStatusUITemplate", 8); }
    bool& bEnableAltFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bEnableAltFire"); }
    bool& bEnableSpectatorCyclingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bEnableSpectatorCycling"); }
    bool& bEnableTargetingInputField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bEnableTargetingInput"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDrawBlackBackground` +1, medido na build 25090264
    //  (offset absoluto medido: 0x1B42; confianca alta)
    void*& bFailedToDownloadedTransferredCharacterField() const
    { return BrzCampoAncorado<void*>(this, "bDrawBlackBackground", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +90, medido na build 25090264
    //  (offset absoluto medido: 0x35F2; confianca media)
    void*& bFirstTimePerfCheckingField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 90); }
    bool& bForceHideGameplayUIField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bForceHideGameplayUI"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastShowExtendedInfoTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1A78; confianca media)
    void*& bHasDisplayedSplitScreenMessageField() const
    { return BrzCampoAncorado<void*>(this, "LastShowExtendedInfoTime", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +87, medido na build 25090264
    //  (offset absoluto medido: 0x16C0; confianca media)
    void*& bHasGottenInitialSpawnLocationField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 87); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FastTravelDroppedInventory` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1244; confianca alta)
    void*& bHasLoadedProfileField() const
    { return BrzCampoAncorado<void*>(this, "FastTravelDroppedInventory", 20); }
    bool& bHasReachedLowestDepthField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasReachedLowestDepth"); }
    bool& bHasSurvivedOneDayField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasSurvivedOneDay"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2598; confianca alta)
    void*& bHighlightEnforcementStructuresField() const
    { return BrzCampoAncorado<void*>(this, "EnforcementColors", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayerTravelLocation` +112, medido na build 25090264
    //  (offset absoluto medido: 0x3748; confianca media)
    void*& bInputWasntResetField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayerTravelLocation", 112); }
    unsigned char& bIsAutoRunEnabledField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController.bIsAutoRunEnabled"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +17, medido na build 25090264
    //  (offset absoluto medido: 0x2599; confianca alta)
    bool& bIsDelayedNetCleanupField() const
    { return BrzCampoAncorado<bool>(this, "EnforcementColors", 17); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructurePlacer` +16, medido na build 25090264
    //  (offset absoluto medido: 0xD60; confianca alta)
    void*& bIsDoingMeleeAimAssitField() const
    { return BrzCampoAncorado<void*>(this, "StructurePlacer", 16); }
    bool& bIsFastTravellingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsFastTravelling"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +64, medido na build 25090264
    //  (offset absoluto medido: 0x2190; confianca media)
    void*& bIsMicMutedThreadedField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 64); }
    bool& bIsOnlyViewingRemoteInventoryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsOnlyViewingRemoteInventory"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalStatsCacheFlushInterval` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1B54; confianca alta)
    void*& bIsPrimalStatsTimerActiveField() const
    { return BrzCampoAncorado<void*>(this, "PrimalStatsCacheFlushInterval", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +303, medido na build 25090264
    //  (offset absoluto medido: 0x19AF; confianca baixa)
    void*& bIsTransferingClubArkCharacterField() const
    { return BrzCampoAncorado<void*>(this, "LastDownloadedTributePlayerData", 303); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +302, medido na build 25090264
    //  (offset absoluto medido: 0x19AE; confianca baixa)
    bool& bIsTransferringCharacterField() const
    { return BrzCampoAncorado<bool>(this, "LastDownloadedTributePlayerData", 302); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastShowExtendedInfoTime` +184, medido na build 25090264
    //  (offset absoluto medido: 0x1B28; confianca baixa)
    void*& bIsViewingTributeInventoryField() const
    { return BrzCampoAncorado<void*>(this, "LastShowExtendedInfoTime", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +136, medido na build 25090264
    //  (offset absoluto medido: 0x3620; confianca baixa)
    void*& bIsWaitingCloudClubARKField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +137, medido na build 25090264
    //  (offset absoluto medido: 0x3621; confianca baixa)
    void*& bIsWaitingToGiveInitialProfileItemsField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 137); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1810; confianca media)
    void*& bLastHitMarkerCharacterAllyField() const
    { return BrzCampoAncorado<void*>(this, "WaypointsSOTF", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaypointsSOTF` +40, medido na build 25090264
    //  (offset absoluto medido: 0x1820; confianca media)
    void*& bLastHitMarkerStructureAllyField() const
    { return BrzCampoAncorado<void*>(this, "WaypointsSOTF", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FastTravelDroppedInventory` +32, medido na build 25090264
    //  (offset absoluto medido: 0x1250; confianca alta)
    void*& bLockedInputDontRecenterMouseField() const
    { return BrzCampoAncorado<void*>(this, "FastTravelDroppedInventory", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2394; confianca media)
    void*& bMainLobbyFailField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 12); }
    bool& bMissionSortByDistanceField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bMissionSortByDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPendingAllowPlayerMovement` +48, medido na build 25090264
    //  (offset absoluto medido: 0x1A10; confianca media)
    void*& bNextShowCharacterCreationUIDownloadField() const
    { return BrzCampoAncorado<void*>(this, "bPendingAllowPlayerMovement", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventCanOpenMap` +1, medido na build 25090264
    //  (offset absoluto medido: 0x1252; confianca alta)
    void*& bPassedInputBlockingTimeoutField() const
    { return BrzCampoAncorado<void*>(this, "bPreventCanOpenMap", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +199, medido na build 25090264
    //  (offset absoluto medido: 0x1730; confianca baixa)
    void*& bPendingServerCheckField() const
    { return BrzCampoAncorado<void*>(this, "bPreventPaintingStreaming", 199); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PerfCheckLocations` +89, medido na build 25090264
    //  (offset absoluto medido: 0x35F1; confianca media)
    void*& bPerfCheckShouldTakeMemReportField() const
    { return BrzCampoAncorado<void*>(this, "PerfCheckLocations", 89); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalLocalProfile` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1000; confianca alta)
    void*& bPlayerSpeakingField() const
    { return BrzCampoAncorado<void*>(this, "PrimalLocalProfile", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpectatorCycleIndex` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1644; confianca alta)
    void*& bPossessedAnyPawnField() const
    { return BrzCampoAncorado<void*>(this, "SpectatorCycleIndex", 4); }
    bool& bPreventCanOpenMapField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bPreventCanOpenMap"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PauseMenuUITemplate` +57, medido na build 25090264
    //  (offset absoluto medido: 0xC89; confianca media)
    void*& bPreventInstigatorVOField() const
    { return BrzCampoAncorado<void*>(this, "PauseMenuUITemplate", 57); }
    bool& bPreventPaintingStreamingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bPreventPaintingStreaming"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +24, medido na build 25090264
    //  (offset absoluto medido: 0x10C8; confianca alta)
    void*& bRTSKeyBindsAltFireHeldField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +26, medido na build 25090264
    //  (offset absoluto medido: 0x10CA; confianca alta)
    void*& bRTSKeyBindsChordConsumedField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 26); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUsingExtendedInfoMap` +25, medido na build 25090264
    //  (offset absoluto medido: 0x10C9; confianca alta)
    void*& bRTSKeyBindsPoopHeldField() const
    { return BrzCampoAncorado<void*>(this, "bUsingExtendedInfoMap", 25); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDownloadedTributePlayerData` +301, medido na build 25090264
    //  (offset absoluto medido: 0x19AD; confianca baixa)
    void*& bReceivedSubscribedAppsField() const
    { return BrzCampoAncorado<void*>(this, "LastDownloadedTributePlayerData", 301); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventPaintingStreaming` +200, medido na build 25090264
    //  (offset absoluto medido: 0x1731; confianca baixa)
    bool& bServerAllowCommunicationField() const
    { return BrzCampoAncorado<bool>(this, "bPreventPaintingStreaming", 200); }
    bool& bShowGameModeHUDField() const
    { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bShowGameModeHUD"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bEnableAltFire` +1, medido na build 25090264
    //  (offset absoluto medido: 0x164A; confianca alta)
    void*& bSuppressAdminIconField() const
    { return BrzCampoAncorado<void*>(this, "bEnableAltFire", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TamingWaypoints` +16, medido na build 25090264
    //  (offset absoluto medido: 0x26C0; confianca alta)
    void*& bSyncTamingWithoutUIField() const
    { return BrzCampoAncorado<void*>(this, "TamingWaypoints", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TrackedActorWaypoints_TeammatesOnMap` +16, medido na build 25090264
    //  (offset absoluto medido: 0x26F8; confianca alta)
    void*& bSyncTrackedActorsWithoutUIField() const
    { return BrzCampoAncorado<void*>(this, "TrackedActorWaypoints_TeammatesOnMap", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +13, medido na build 25090264
    //  (offset absoluto medido: 0x2395; confianca media)
    void*& bTeamChangingField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 13); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalLocalProfile` +40, medido na build 25090264
    //  (offset absoluto medido: 0x1018; confianca media)
    void*& bUpdateDLCContentField() const
    { return BrzCampoAncorado<void*>(this, "PrimalLocalProfile", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewingInventories` +100, medido na build 25090264
    //  (offset absoluto medido: 0x1224; confianca media)
    void*& bUsePressedFromGamepadField() const
    { return BrzCampoAncorado<void*>(this, "RemoteViewingInventories", 100); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +473, medido na build 25090264
    //  (offset absoluto medido: 0x2329; confianca baixa)
    bool& bWaitingForServerMessageOfTheDayField() const
    { return BrzCampoAncorado<bool>(this, "bTribeCacheHaveRallyPointData", 473); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bTribeCacheHaveRallyPointData` +472, medido na build 25090264
    //  (offset absoluto medido: 0x2328; confianca baixa)
    void*& bWaitingToQueryVoiceChatPermissionsAgainField() const
    { return BrzCampoAncorado<void*>(this, "bTribeCacheHaveRallyPointData", 472); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDeathPrimalCharacter` +8, medido na build 25090264
    //  (offset absoluto medido: 0xF90; confianca alta)
    void*& bWasDeadField() const
    { return BrzCampoAncorado<void*>(this, "LastDeathPrimalCharacter", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +86, medido na build 25090264
    //  (offset absoluto medido: 0x17A1; confianca media)
    bool& bZoomingInField() const
    { return BrzCampoAncorado<bool>(this, "bHasReachedLowestDepth", 86); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bHasReachedLowestDepth` +85, medido na build 25090264
    //  (offset absoluto medido: 0x17A0; confianca media)
    void*& bZoomingOutField() const
    { return BrzCampoAncorado<void*>(this, "bHasReachedLowestDepth", 85); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +96, medido na build 25090264
    //  (offset absoluto medido: 0x25E8; confianca media)
    float& disableWalkFromRadialWheelField() const
    { return BrzCampoAncorado<float>(this, "EnforcementColors", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +44, medido na build 25090264
    //  (offset absoluto medido: 0x25B4; confianca media)
    void*& doingHarvestMeleeField() const
    { return BrzCampoAncorado<void*>(this, "EnforcementColors", 44); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +32, medido na build 25090264
    //  (offset absoluto medido: 0x25A8; confianca alta)
    void*& meleeAttackOrGatheringActiveField() const
    { return BrzCampoAncorado<void*>(this, "EnforcementColors", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +33, medido na build 25090264
    //  (offset absoluto medido: 0x25A9; confianca media)
    bool& meleeAttackOrGatheringIsGatheringField() const
    { return BrzCampoAncorado<bool>(this, "EnforcementColors", 33); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EnforcementColors` +36, medido na build 25090264
    //  (offset absoluto medido: 0x25AC; confianca media)
    float& meleeAttackOrGatheringTimerField() const
    { return BrzCampoAncorado<float>(this, "EnforcementColors", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyVolumetricDispatcher` +400, medido na build 25090264
    //  (offset absoluto medido: 0x3488; confianca baixa)
    void*& playerIDToPlatformNameMapField() const
    { return BrzCampoAncorado<void*>(this, "MyVolumetricDispatcher", 400); }
    BitFieldValue<bool, unsigned __int32> bDidAutoRunCheats()
    { return { (void*)this, "bDidAutoRunCheats" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteAmmo()
    { return { (void*)this, "bInfiniteAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bGodMode()
    { return { (void*)this, "bGodMode" }; }
    BitFieldValue<bool, unsigned __int32> bHideGun()
    { return { (void*)this, "bHideGun" }; }
    BitFieldValue<bool, unsigned __int32> bEnemyInvisible()
    { return { (void*)this, "bEnemyInvisible" }; }
    BitFieldValue<bool, unsigned __int32> bIsAdminPauseUIEnabled()
    { return { (void*)this, "bIsAdminPauseUIEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bCanEnableCheats()
    { return { (void*)this, "bCanEnableCheats" }; }
    BitFieldValue<bool, unsigned __int32> bUsePressed()
    { return { (void*)this, "bUsePressed" }; }
    BitFieldValue<bool, unsigned __int32> bSkipForcedUnpossess()
    { return { (void*)this, "bSkipForcedUnpossess" }; }
    BitFieldValue<bool, unsigned __int32> bForceCraftButtonHeld()
    { return { (void*)this, "bForceCraftButtonHeld" }; }
    BitFieldValue<bool, unsigned __int32> bExtendedInfoKeyHeldFromInputAction()
    { return { (void*)this, "bExtendedInfoKeyHeldFromInputAction" }; }
    BitFieldValue<bool, unsigned __int32> bPreventControllerAutoUnfreeze()
    { return { (void*)this, "bPreventControllerAutoUnfreeze" }; }
    BitFieldValue<bool, unsigned __int32> bShouldAutoUploadTribeFlag()
    { return { (void*)this, "bShouldAutoUploadTribeFlag" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadHotbarModifierPressed()
    { return { (void*)this, "bGamepadHotbarModifierPressed" }; }
    BitFieldValue<bool, unsigned __int32> bUpdatedAimMagnetismOffset()
    { return { (void*)this, "bUpdatedAimMagnetismOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPServerCycleSpectator()
    { return { (void*)this, "bUseBPServerCycleSpectator" }; }
    BitFieldValue<bool, unsigned __int32> bIsFirstSpawn()
    { return { (void*)this, "bIsFirstSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bIsRespawning()
    { return { (void*)this, "bIsRespawning" }; }
    BitFieldValue<bool, unsigned __int32> bIsVRPlayer()
    { return { (void*)this, "bIsVRPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bBattlEyePlayerHasGottenInGameFully()
    { return { (void*)this, "bBattlEyePlayerHasGottenInGameFully" }; }
    BitFieldValue<bool, unsigned __int32> bAdminShowAllPlayers()
    { return { (void*)this, "bAdminShowAllPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyPawnBuffsOfDamageEvents()
    { return { (void*)this, "bNotifyPawnBuffsOfDamageEvents" }; }
    BitFieldValue<bool, unsigned __int32> bInstantHarvest()
    { return { (void*)this, "bInstantHarvest" }; }
    BitFieldValue<bool, unsigned __int32> bForceAdminMeshChecking()
    { return { (void*)this, "bForceAdminMeshChecking" }; }
    BitFieldValue<bool, unsigned __int32> bForceAdminMeshCheckingOnShooterCharacters()
    { return { (void*)this, "bForceAdminMeshCheckingOnShooterCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToPing()
    { return { (void*)this, "bWantsToPing" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePingSystem()
    { return { (void*)this, "bEnablePingSystem" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNextToggleInGameMenu()
    { return { (void*)this, "bIgnoreNextToggleInGameMenu" }; }
    BitFieldValue<bool, unsigned __int32> Gen1FixENCountRecord()
    { return { (void*)this, "Gen1FixENCountRecord" }; }
    BitFieldValue<bool, unsigned __int32> bWasGamepadHotbarModifierPressed_RightShoulder()
    { return { (void*)this, "bWasGamepadHotbarModifierPressed_RightShoulder" }; }
    BitFieldValue<bool, unsigned __int32> bUseIntercepted()
    { return { (void*)this, "bUseIntercepted" }; }
    BitFieldValue<bool, unsigned __int32> DebugPingLifetime()
    { return { (void*)this, "DebugPingLifetime" }; }
    BitFieldValue<bool, unsigned __int32> bEnablingSpectator()
    { return { (void*)this, "bEnablingSpectator" }; }
    BitFieldValue<bool, unsigned __int32> ClientsideTrackLatestDeathPOI()
    { return { (void*)this, "ClientsideTrackLatestDeathPOI" }; }
    BitFieldValue<bool, unsigned __int32> CustomActorTracking_HasJustChangedDinoGroup()
    { return { (void*)this, "CustomActorTracking_HasJustChangedDinoGroup" }; }
    BitFieldValue<bool, unsigned __int32> CustomActorTracking_HasJustChangedSearchText()
    { return { (void*)this, "CustomActorTracking_HasJustChangedSearchText" }; }
    BitFieldValue<bool, unsigned __int32> CustomActorTracking_HasJustChangedSelectionType()
    { return { (void*)this, "CustomActorTracking_HasJustChangedSelectionType" }; }
    BitFieldValue<bool, unsigned __int32> IsChangingCameraMode()
    { return { (void*)this, "IsChangingCameraMode" }; }
    BitFieldValue<bool, unsigned __int32> LatestClientAutoTrackTamesSetting()
    { return { (void*)this, "LatestClientAutoTrackTamesSetting" }; }
    BitFieldValue<bool, unsigned __int32> bArePlannedStructuresHidden()
    { return { (void*)this, "bArePlannedStructuresHidden" }; }
    BitFieldValue<bool, unsigned __int32> bCachedOnlyShowOnlineTribeMembers()
    { return { (void*)this, "bCachedOnlyShowOnlineTribeMembers" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPOIs()
    { return { (void*)this, "bDebugPOIs" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePremiumModChecksForTesting()
    { return { (void*)this, "bDisablePremiumModChecksForTesting" }; }
    BitFieldValue<bool, unsigned __int32> bDrawBlackBackground()
    { return { (void*)this, "bDrawBlackBackground" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAltFire()
    { return { (void*)this, "bEnableAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFire()
    { return { (void*)this, "bEnableFire" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSpectatorCycling()
    { return { (void*)this, "bEnableSpectatorCycling" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSpectatorDetach()
    { return { (void*)this, "bEnableSpectatorDetach" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTargetingInput()
    { return { (void*)this, "bEnableTargetingInput" }; }
    BitFieldValue<bool, unsigned __int32> bFirstSpecatorCycleSinceDeath()
    { return { (void*)this, "bFirstSpecatorCycleSinceDeath" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideGameplayUI()
    { return { (void*)this, "bForceHideGameplayUI" }; }
    BitFieldValue<bool, unsigned __int32> bHasReachedHighestPeak()
    { return { (void*)this, "bHasReachedHighestPeak" }; }
    BitFieldValue<bool, unsigned __int32> bHasReachedLowestDepth()
    { return { (void*)this, "bHasReachedLowestDepth" }; }
    BitFieldValue<bool, unsigned __int32> bHasSurvivedOneDay()
    { return { (void*)this, "bHasSurvivedOneDay" }; }
    BitFieldValue<bool, unsigned __int32> bHasViewOnlyInventoryOpen()
    { return { (void*)this, "bHasViewOnlyInventoryOpen" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedMissionUI()
    { return { (void*)this, "bInitializedMissionUI" }; }
    BitFieldValue<bool, unsigned __int32> bIsFastTravelling()
    { return { (void*)this, "bIsFastTravelling" }; }
    BitFieldValue<bool, unsigned __int32> bIsInAdvancedCinematicMode()
    { return { (void*)this, "bIsInAdvancedCinematicMode" }; }
    BitFieldValue<bool, unsigned __int32> bIsOnlyViewingRemoteInventory()
    { return { (void*)this, "bIsOnlyViewingRemoteInventory" }; }
    BitFieldValue<bool, unsigned __int32> bLastSpawnWasFastTravel()
    { return { (void*)this, "bLastSpawnWasFastTravel" }; }
    BitFieldValue<bool, unsigned __int32> bMissionSortByDistance()
    { return { (void*)this, "bMissionSortByDistance" }; }
    BitFieldValue<bool, unsigned __int32> bPendingAllowPlayerMovement()
    { return { (void*)this, "bPendingAllowPlayerMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCanOpenMap()
    { return { (void*)this, "bPreventCanOpenMap" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDefaultCharacterItems()
    { return { (void*)this, "bPreventDefaultCharacterItems" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPaintingStreaming()
    { return { (void*)this, "bPreventPaintingStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bReachedTamedDinoLimit()
    { return { (void*)this, "bReachedTamedDinoLimit" }; }
    BitFieldValue<bool, unsigned __int32> bShowGameModeHUD()
    { return { (void*)this, "bShowGameModeHUD" }; }
    BitFieldValue<bool, unsigned __int32> bSprintInputPressed()
    { return { (void*)this, "bSprintInputPressed" }; }
    BitFieldValue<bool, unsigned __int32> bTribeCacheHaveRallyPointData()
    { return { (void*)this, "bTribeCacheHaveRallyPointData" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraWaypointsSOTF()
    { return { (void*)this, "bUseBPGetExtraWaypointsSOTF" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomCrosshairBP()
    { return { (void*)this, "bUseCustomCrosshairBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseOldMiniMap()
    { return { (void*)this, "bUseOldMiniMap" }; }
    BitFieldValue<bool, unsigned __int32> bUsingExtendedInfoMap()
    { return { (void*)this, "bUsingExtendedInfoMap" }; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    AShooterCharacter* GetPlayerCharacter() const
    { LPVOID f = GetAddress("AShooterPlayerController.BaseGetPlayerCharacter()"); return f ? reinterpret_cast<AShooterCharacter*(__fastcall*)(DWORD64)>(f)(reinterpret_cast<DWORD64>(this)) : nullptr; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    UShooterCheatManager* GetCheatManager() const
    { return (UShooterCheatManager*)GetNativeField<void*>(this, "CheatManager"); }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_H
