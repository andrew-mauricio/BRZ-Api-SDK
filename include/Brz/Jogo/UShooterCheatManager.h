// ==========================================================================
//  UShooterCheatManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERCHEATMANAGER_H
#define BRZ_SDK_JOGO_USHOOTERCHEATMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APrimalDinoCharacter;
struct AShooterPlayerController;
struct UWorld;

#include "UCheatManager.h"

struct UShooterCheatManager : public UCheatManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterCheatManager"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ActivateSkill(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void ActivateSkill(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "UShooterCheatManager.ActivateSkill(FName,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AddAOEToDebugHUD(float)
    // endereco: casamento de bytes com a build de referencia
    void AddAOEToDebugHUD(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.AddAOEToDebugHUD(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddBuffPreventTagToSelf(FName)
    // endereco: casamento de bytes com a build de referencia
    void AddBuffPreventTagToSelf(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.AddBuffPreventTagToSelf(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddChibiExp(float)
    // endereco: casamento de bytes com a build de referencia
    void AddChibiExp(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.AddChibiExp(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddChibiExpToPlayer(__int64,float)
    // endereco: casamento de bytes com a build de referencia
    void AddChibiExpToPlayer(long long a0, float a1) const
    {
        NativeCall<void, long long, float>(this, "UShooterCheatManager.AddChibiExpToPlayer(__int64,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddDeniedSpawnFloatingText()
    // endereco: casamento de bytes com a build de referencia
    void AddDeniedSpawnFloatingText() const
    {
        NativeCall<void>(this, "UShooterCheatManager.AddDeniedSpawnFloatingText()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddEquipmentDurability(float)
    // endereco: casamento de bytes com a build de referencia
    void AddEquipmentDurability(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.AddEquipmentDurability(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.AddExperience(float,bool,bool,EXPType::Type)
    // classe: a funcao mora em AShooterPlayerController, e UShooterCheatManager herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro AddExperience(float a0, bool a1, bool a2, int a3) const
    {
        return NativeCall<void*, float, bool, bool, int>(this, "AShooterPlayerController.AddExperience(float,bool,bool,EXPType::Type)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.AddExperienceToTarget(float,bool,bool,EXPType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddExperienceToTarget(float a0, bool a1, bool a2, int a3) const
    {
        return NativeCall<void*, float, bool, bool, int>(this, "UShooterCheatManager.AddExperienceToTarget(float,bool,bool,EXPType::Type)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddHexagons(float)
    // endereco: casamento de bytes com a build de referencia
    void AddHexagons(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.AddHexagons(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AddHostileStacks(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddHostileStacks(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "UShooterCheatManager.AddHostileStacks(int,bool,bool)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.AddItemToAllClustersInventory(FString,int)
    // endereco: casamento de bytes com a build de referencia
    static void AddItemToAllClustersInventory(const FString& a0, int a1)
    {
        NativeCall<void, void*, int>(nullptr, "UShooterCheatManager.AddItemToAllClustersInventory(FString,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void AddItemToAllClustersInventory(FString* a0, int a1)
    { AddItemToAllClustersInventory(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AddMaxItemQuantityOverride(FString,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddMaxItemQuantityOverride(const FString& a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "UShooterCheatManager.AddMaxItemQuantityOverride(FString,int,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AddMaxItemQuantityOverride(FString* a0, int a1, bool a2) const
    { AddMaxItemQuantityOverride(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddMutations(int,int)
    // endereco: casamento de bytes com a build de referencia
    void AddMutations(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UShooterCheatManager.AddMutations(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AddTargetToDebugHUD()
    // endereco: casamento de bytes com a build de referencia
    void AddTargetToDebugHUD() const
    {
        NativeCall<void>(this, "UShooterCheatManager.AddTargetToDebugHUD()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AddThreat(int)
    // endereco: casamento de bytes com a build de referencia
    void AddThreat(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.AddThreat(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AddThreatMyTarget(int)
    // endereco: casamento de bytes com a build de referencia
    void AddThreatMyTarget(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.AddThreatMyTarget(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddTokens(int)
    // endereco: casamento de bytes com a build de referencia
    void AddTokens(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.AddTokens(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AddWorldBuff(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=100]]
    void AddWorldBuff(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.AddWorldBuff(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AddWorldBuff(FString* a0) const
    { AddWorldBuff(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AllowPlayerToJoinNoCheck(FString&)
    // endereco: casamento de bytes com a build de referencia
    void AllowPlayerToJoinNoCheck(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.AllowPlayerToJoinNoCheck(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AllowPlayerToJoinNoCheck(FString* a0) const
    { AllowPlayerToJoinNoCheck(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.AreAllSublevelsForDataLayerLoaded(FString&)
    // endereco: casamento de bytes com a build de referencia
    void AreAllSublevelsForDataLayerLoaded(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.AreAllSublevelsForDataLayerLoaded(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void AreAllSublevelsForDataLayerLoaded(FString* a0) const
    { AreAllSublevelsForDataLayerLoaded(*a0); }

    // jogo_confirmou_dump
    //   UShooterCheatManager.ArkChangeUIPlatform(FString)
    // endereco: casamento de bytes com a build de referencia
    static void ArkChangeUIPlatform(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.ArkChangeUIPlatform(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ArkChangeUIPlatform(FString* a0)
    { ArkChangeUIPlatform(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.Attack(int)
    // endereco: casamento de bytes com a build de referencia
    void Attack(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.Attack(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AttackAOE(int,float)
    // endereco: casamento de bytes com a build de referencia
    void AttackAOE(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UShooterCheatManager.AttackAOE(int,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.AttackInfoTarget()
    // endereco: casamento de bytes com a build de referencia
    void AttackInfoTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.AttackInfoTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.BPCheckDenySpawningInThisMap(FString&)
    // endereco: casamento de bytes com a build de referencia
    bool BPCheckDenySpawningInThisMap(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "UShooterCheatManager.BPCheckDenySpawningInThisMap(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool BPCheckDenySpawningInThisMap(FString* a0) const
    { return BPCheckDenySpawningInThisMap(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.BackblazeDownloadCallback(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpRespon
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BackblazeDownloadCallback(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UShooterCheatManager.BackblazeDownloadCallback(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.BanPlayer(FString,FString)
    // endereco: casamento de bytes com a build de referencia
    static void BanPlayer(const FString& a0, const FString& a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UShooterCheatManager.BanPlayer(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BanPlayer(FString* a0, FString* a1)
    { BanPlayer(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.Broadcast(FString&)
    // endereco: casamento de bytes com a build de referencia
    void Broadcast(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.Broadcast(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Broadcast(FString* a0) const
    { Broadcast(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.CamZoomIn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=89]]
    void CamZoomIn() const
    {
        NativeCall<void>(this, "UShooterCheatManager.CamZoomIn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.CamZoomOut()
    // endereco: casamento de bytes com a build de referencia
    void CamZoomOut() const
    {
        NativeCall<void>(this, "UShooterCheatManager.CamZoomOut()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ChatLogAppend(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ChatLogAppend(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.ChatLogAppend(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ChatLogAppend(FString* a0) const
    { ChatLogAppend(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.CheatAction(FString&)
    // endereco: casamento de bytes com a build de referencia
    void CheatAction(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.CheatAction(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CheatAction(FString* a0) const
    { CheatAction(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ClearCryoSickness()
    // endereco: casamento de bytes com a build de referencia
    void ClearCryoSickness() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ClearCryoSickness()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ClearDebugHUD()
    // endereco: casamento de bytes com a build de referencia
    void ClearDebugHUD() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ClearDebugHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ClearMessageOfTheDay()
    // endereco: casamento de bytes com a build de referencia
    void ClearMessageOfTheDay() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ClearMessageOfTheDay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ClearMyBuffs()
    // endereco: casamento de bytes com a build de referencia
    void ClearMyBuffs() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ClearMyBuffs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ClearPlayerInventory(int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearPlayerInventory(int a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, int, bool, bool, bool>(this, "UShooterCheatManager.ClearPlayerInventory(int,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.CloneDino()
    // endereco: casamento de bytes com a build de referencia
    void CloneDino() const
    {
        NativeCall<void>(this, "UShooterCheatManager.CloneDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.CompleteCurrentMilestone(int,FString)
    // endereco: casamento de bytes com a build de referencia
    void CompleteCurrentMilestone(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "UShooterCheatManager.CompleteCurrentMilestone(int,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CompleteCurrentMilestone(int a0, FString* a1) const
    { CompleteCurrentMilestone(a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.CopyMyTargetToClipboard()
    // endereco: casamento de bytes com a build de referencia
    void CopyMyTargetToClipboard() const
    {
        NativeCall<void>(this, "UShooterCheatManager.CopyMyTargetToClipboard()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.CreateRandomMarkets(int,float,int,int)
    // endereco: casamento de bytes com a build de referencia
    void CreateRandomMarkets(int a0, float a1, int a2, int a3) const
    {
        NativeCall<void, int, float, int, int>(this, "UShooterCheatManager.CreateRandomMarkets(int,float,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.CreateRequestOrder(FString&,FString&,int,int,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateRequestOrder(const FString& a0, const FString& a1, int a2, int a3, int a4, int a5, int a6) const
    {
        return NativeCall<void*, void*, void*, int, int, int, int, int>(this, "UShooterCheatManager.CreateRequestOrder(FString&,FString&,int,int,int,int,int)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CreateRequestOrder(FString* a0, FString* a1, int a2, int a3, int a4, int a5, int a6) const
    { return CreateRequestOrder(*a0, *a1, a2, a3, a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.Cryo(FString&)
    // endereco: casamento de bytes com a build de referencia
    void Cryo(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.Cryo(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Cryo(FString* a0) const
    { Cryo(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.CryoAOE(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=408+bytes40+grafo=4/4]]
    void CryoAOE(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.CryoAOE(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.CryoMyTarget()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void CryoMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.CryoMyTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DCMSet(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void DCMSet(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.DCMSet(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DeactivateMission()
    // endereco: casamento de bytes com a build de referencia
    void DeactivateMission() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DeactivateMission()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.DebugActors(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DebugActors(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterCheatManager.DebugActors(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DebugActors(FString* a0, bool a1) const
    { return DebugActors(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DebugCheckDinoPawnsOctree()
    // endereco: casamento de bytes com a build de referencia
    void DebugCheckDinoPawnsOctree() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DebugCheckDinoPawnsOctree()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DebugCompanionAsyncLoadedFiles()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=180]]
    void DebugCompanionAsyncLoadedFiles() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DebugCompanionAsyncLoadedFiles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DebugCompanionReactions()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=175]]
    void DebugCompanionReactions() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DebugCompanionReactions()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DebugMyDinoTarget(bool)
    // endereco: casamento de bytes com a build de referencia
    void DebugMyDinoTarget(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.DebugMyDinoTarget(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DebugMyTarget()
    // endereco: casamento de bytes com a build de referencia
    void DebugMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DebugMyTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DebugMyTargetPrint(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void DebugMyTargetPrint(void* a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.DebugMyTargetPrint(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DebugPathsForTarget()
    // endereco: casamento de bytes com a build de referencia
    void DebugPathsForTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DebugPathsForTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DefeatAllBosses(int)
    // endereco: casamento de bytes com a build de referencia
    void DefeatAllBosses(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.DefeatAllBosses(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DefeatBoss(int,FName,signedchar)
    // endereco: casamento de bytes com a build de referencia
    void DefeatBoss(int a0, unsigned long long a1, char a2) const
    {
        NativeCall<void, int, unsigned long long, char>(this, "UShooterCheatManager.DefeatBoss(int,FName,signedchar)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyActors(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void DestroyActors(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UShooterCheatManager.DestroyActors(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void DestroyActors(FString* a0, bool a1) const
    { DestroyActors(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyAllEnemies()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=923+grafo=8/10]]
    void DestroyAllEnemies() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyAllEnemies()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyAllTames()
    // endereco: casamento de bytes com a build de referencia
    void DestroyAllTames() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyAllTames()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyFoliage(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void DestroyFoliage(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UShooterCheatManager.DestroyFoliage(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyMyPawn()
    // endereco: casamento de bytes com a build de referencia
    void DestroyMyPawn() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyMyPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyMyTarget()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=687+grafo=9/9]]
    void DestroyMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyMyTarget2()
    // endereco: casamento de bytes com a build de referencia
    void DestroyMyTarget2() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget2()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DestroySelectStasisedStructureComponents()
    // endereco: casamento de bytes com a build de referencia
    void DestroySelectStasisedStructureComponents() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroySelectStasisedStructureComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyStructures()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=939+grafo=8/10]]
    void DestroyStructures() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyStructures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeDinos()
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeDinos() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyTribeDinos()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeId(int)
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeId(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeId(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeIdDinos(int)
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeIdDinos(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdDinos(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeIdPlayers(int)
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeIdPlayers(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdPlayers(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeIdStructures(int)
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeIdStructures(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdStructures(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribePlayers()
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribePlayers() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyTribePlayers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeStructures()
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeStructures() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyTribeStructures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyTribeStructuresLessThan(int,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void DestroyTribeStructuresLessThan(int a0, int a1, bool a2, bool a3) const
    {
        NativeCall<void, int, int, bool, bool>(this, "UShooterCheatManager.DestroyTribeStructuresLessThan(int,int,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyWildDinoClasses(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void DestroyWildDinoClasses(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UShooterCheatManager.DestroyWildDinoClasses(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void DestroyWildDinoClasses(FString* a0, bool a1) const
    { DestroyWildDinoClasses(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DestroyWildDinos()
    // endereco: casamento de bytes com a build de referencia
    void DestroyWildDinos() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DestroyWildDinos()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DetachChar()
    // endereco: cache_pdb_25090264
    void DetachChar() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DetachChar()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.Dino(FName)
    // endereco: casamento de bytes com a build de referencia
    void Dino(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.Dino(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.DinoAttack(AActor*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DinoAttack(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterCheatManager.DinoAttack(AActor*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DinoSet(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void DinoSet(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.DinoSet(FName,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DisablePaintMode()
    // endereco: casamento de bytes com a build de referencia
    void DisablePaintMode() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DisablePaintMode()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DisableStructureCollision()
    // endereco: casamento de bytes com a build de referencia
    void DisableStructureCollision() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DisableStructureCollision()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DisableTraceChannels(FString)
    // endereco: casamento de bytes com a build de referencia
    void DisableTraceChannels(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.DisableTraceChannels(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void DisableTraceChannels(FString* a0) const
    { DisableTraceChannels(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.DisallowPlayerToJoinNoCheck(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisallowPlayerToJoinNoCheck(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.DisallowPlayerToJoinNoCheck(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DisallowPlayerToJoinNoCheck(FString* a0) const
    { return DisallowPlayerToJoinNoCheck(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoDamagePct(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void DoDamagePct(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "UShooterCheatManager.DoDamagePct(float,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoDestroyTribeIdStructures()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DoDestroyTribeIdStructures() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoDestroyTribeIdStructures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoExit()
    // endereco: casamento de bytes com a build de referencia
    void DoExit() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoExit()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoHang()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void DoHang() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoHang()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoRestartLevel()
    // endereco: casamento de bytes com a build de referencia
    void DoRestartLevel() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoRestartLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoSpectateTarget()
    // endereco: casamento de bytes com a build de referencia
    void DoSpectateTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoSpectateTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DoStall(float)
    // endereco: cache_pdb_25090264
    void DoStall(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.DoStall(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoSummon(FString&)
    // endereco: casamento de bytes com a build de referencia
    AActor* DoSummon(const FString& a0) const
    {
        return NativeCall<AActor*, void*>(this, "UShooterCheatManager.DoSummon(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    AActor* DoSummon(FString* a0) const
    { return DoSummon(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoTame()
    // endereco: cache_pdb_25090264
    void DoTame() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoTame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DoTestingThing()
    // endereco: cache_pdb_25090264
    void DoTestingThing() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DoTestingThing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.DownloadFromBackblaze(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadFromBackblaze(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.DownloadFromBackblaze(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DownloadFromBackblaze(FString* a0) const
    { return DownloadFromBackblaze(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DragMyTarget()
    // endereco: casamento de bytes com a build de referencia
    void DragMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DragMyTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.DrainTargetFood(float)
    // endereco: casamento de bytes com a build de referencia
    void DrainTargetFood(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.DrainTargetFood(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DrawDebugBoxForVolumes(float,int,bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void DrawDebugBoxForVolumes(float a0, int a1, bool a2, bool a3, float a4) const
    {
        NativeCall<void, float, int, bool, bool, float>(this, "UShooterCheatManager.DrawDebugBoxForVolumes(float,int,bool,bool,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DumpAssetProperties(FString&)
    // endereco: casamento de bytes com a build de referencia
    void DumpAssetProperties(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.DumpAssetProperties(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void DumpAssetProperties(FString* a0) const
    { DumpAssetProperties(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DumpConfig()
    // endereco: casamento de bytes com a build de referencia
    void DumpConfig() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DumpConfig()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DumpDinoStats()
    // endereco: casamento de bytes com a build de referencia
    void DumpDinoStats() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DumpDinoStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DumpFallbackSeeds()
    // endereco: casamento de bytes com a build de referencia
    void DumpFallbackSeeds() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DumpFallbackSeeds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.DupeLastItem()
    // endereco: casamento de bytes com a build de referencia
    void DupeLastItem() const
    {
        NativeCall<void>(this, "UShooterCheatManager.DupeLastItem()");
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.EnableCheats(FString)
    // endereco: casamento de bytes com a build de referencia
    static void EnableCheats(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.EnableCheats(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void EnableCheats(FString* a0)
    { EnableCheats(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.EnablePaintMode(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnablePaintMode(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "UShooterCheatManager.EnablePaintMode(unsignedchar)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.FillTradeLog(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=4473+bytes40+grafo=91/92]]
    void FillTradeLog(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.FillTradeLog(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.FindMutagenDrops()
    // endereco: casamento de bytes com a build de referencia
    void FindMutagenDrops() const
    {
        NativeCall<void>(this, "UShooterCheatManager.FindMutagenDrops()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.FindPlayerControllerFromPlayerID(__int64)
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerController* FindPlayerControllerFromPlayerID(long long a0) const
    {
        return NativeCall<AShooterPlayerController*, long long>(this, "UShooterCheatManager.FindPlayerControllerFromPlayerID(__int64)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.FoShoDestroyMyTarget()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=654+grafo=9/9]]
    void FoShoDestroyMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.FoShoDestroyMyTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceCheckInMesh()
    // endereco: casamento de bytes com a build de referencia
    void ForceCheckInMesh() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceCheckInMesh()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceCompleteActiveMission(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ForceCompleteActiveMission(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.ForceCompleteActiveMission(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ForceCompleteActiveMission(FString* a0) const
    { ForceCompleteActiveMission(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ForceDoAttack(int)
    // endereco: casamento de bytes com a build de referencia
    void ForceDoAttack(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.ForceDoAttack(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceEnableMeshCheckingOnMe(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceEnableMeshCheckingOnMe(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UShooterCheatManager.ForceEnableMeshCheckingOnMe(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceGiveBuff(FName&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceGiveBuff(const FName& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UShooterCheatManager.ForceGiveBuff(FName&,bool)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ForceGiveBuff(FName* a0, bool a1) const
    { ForceGiveBuff(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceMutagenSpawn()
    // endereco: casamento de bytes com a build de referencia
    void ForceMutagenSpawn() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceMutagenSpawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForcePlayerToJoinTargetTribe(__int64)
    // endereco: casamento de bytes com a build de referencia
    void ForcePlayerToJoinTargetTribe(long long a0) const
    {
        NativeCall<void, long long>(this, "UShooterCheatManager.ForcePlayerToJoinTargetTribe(__int64)", a0);
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.ForcePlayerToJoinTribe(__int64,FString)
    // endereco: casamento de bytes com a build de referencia
    static void ForcePlayerToJoinTribe(long long a0, const FString& a1)
    {
        NativeCall<void, long long, void*>(nullptr, "UShooterCheatManager.ForcePlayerToJoinTribe(__int64,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ForcePlayerToJoinTribe(long long a0, FString* a1)
    { ForcePlayerToJoinTribe(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForcePlayerToJoinTribeId(__int64,int)
    // endereco: casamento de bytes com a build de referencia
    void ForcePlayerToJoinTribeId(long long a0, int a1) const
    {
        NativeCall<void, long long, int>(this, "UShooterCheatManager.ForcePlayerToJoinTribeId(__int64,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ForceRefreshBanCheatList()
    // endereco: casamento de bytes com a build de referencia
    void ForceRefreshBanCheatList() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceRefreshBanCheatList()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ForceRespecOnAimedPlayer()
    // endereco: casamento de bytes com a build de referencia
    void ForceRespecOnAimedPlayer() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceRespecOnAimedPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceStartMatch(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceStartMatch(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UShooterCheatManager.ForceStartMatch(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceStartMission(FName)
    // endereco: casamento de bytes com a build de referencia
    void ForceStartMission(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.ForceStartMission(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ForceStuckMilestone(FName)
    // endereco: casamento de bytes com a build de referencia
    void ForceStuckMilestone(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.ForceStuckMilestone(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceTame()
    // endereco: cache_pdb_25090264
    void ForceTame() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceTame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceTameAOE(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ForceTameAOE(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.ForceTameAOE(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ForceUpdateDynamicConfig()
    // endereco: casamento de bytes com a build de referencia
    void ForceUpdateDynamicConfig() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceUpdateDynamicConfig()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ForceUpdateGameplayVolumesDynamicConfig()
    // endereco: casamento de bytes com a build de referencia
    void ForceUpdateGameplayVolumesDynamicConfig() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ForceUpdateGameplayVolumesDynamicConfig()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.FuzzyMissionSearch(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FuzzyMissionSearch(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.FuzzyMissionSearch(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FuzzyMissionSearch(FString* a0) const
    { return FuzzyMissionSearch(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GBI(FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void GBI(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.GBI(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GBI(FString* a0, FString* a1) const
    { GBI(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GCM()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void GCM() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GCM()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GCMP(__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void GCMP(long long a0) const
    {
        NativeCall<void, long long>(this, "UShooterCheatManager.GCMP(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GCMT()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GCMT() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GCMT()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GFI(FName&,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void GFI(const FName& a0, int a1, float a2, bool a3) const
    {
        NativeCall<void, void*, int, float, bool>(this, "UShooterCheatManager.GFI(FName&,int,float,bool)", const_cast<FName*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GFI(FName* a0, int a1, float a2, bool a3) const
    { GFI(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GFID(FName&)
    // endereco: casamento de bytes com a build de referencia
    void GFID(const FName& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.GFID(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GFID(FName* a0) const
    { GFID(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.GFIS(FName&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GFIS(const FName& a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UShooterCheatManager.GFIS(FName&,float)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GFIS(FName* a0, float a1) const
    { return GFIS(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GMBuff()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GMBuff() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GMBuff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GMComp(int)
    // endereco: casamento de bytes com a build de referencia
    void GMComp(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GMComp(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GMSummon(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    void GMSummon(const FString& a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UShooterCheatManager.GMSummon(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GMSummon(FString* a0, int a1) const
    { GMSummon(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GameCommand(FString&)
    // endereco: casamento de bytes com a build de referencia
    void GameCommand(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.GameCommand(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GameCommand(FString* a0) const
    { GameCommand(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetAimedTargetFromLocation(UE::Math::TVector<double>&,UE::Math::TRotator<do
    // endereco: casamento de bytes com a build de referencia
    AActor* GetAimedTargetFromLocation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<AActor*, void*, void*, void*>(this, "UShooterCheatManager.GetAimedTargetFromLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetAllMyTarget(FString&)
    // endereco: casamento de bytes com a build de referencia
    void GetAllMyTarget(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.GetAllMyTarget(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetAllMyTarget(FString* a0) const
    { GetAllMyTarget(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetAllNumbers()
    // endereco: casamento de bytes com a build de referencia
    static void GetAllNumbers()
    {
        NativeCall<void>(nullptr, "UShooterCheatManager.GetAllNumbers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetChat()
    // endereco: casamento de bytes com a build de referencia
    void GetChat() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GetChat()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GetCurrentInventoryCounts()
    // endereco: casamento de bytes com a build de referencia
    void GetCurrentInventoryCounts() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GetCurrentInventoryCounts()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetEgg(int)
    // endereco: casamento de bytes com a build de referencia
    void GetEgg(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GetEgg(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetGameLog()
    // endereco: casamento de bytes com a build de referencia
    void GetGameLog() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GetGameLog()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.GetItemAssetData(FString&,TSoftClassPtr<UObject>&,FTopLevelAssetPath&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemAssetData(const FString& a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void**, void*>(this, "UShooterCheatManager.GetItemAssetData(FString&,TSoftClassPtr<UObject>&,FTopLevelAssetPath&)", const_cast<FString*>(&a0), &a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetItemAssetData(FString* a0, void* a1, void* a2) const
    { return GetItemAssetData(*a0, a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GetItemIds()
    // endereco: casamento de bytes com a build de referencia
    void GetItemIds() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GetItemIds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetNearestAlliedPlayerOrDino()
    // endereco: casamento de bytes com a build de referencia
    void GetNearestAlliedPlayerOrDino() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GetNearestAlliedPlayerOrDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GetPlatformIDForPlayerID(int)
    // endereco: casamento de bytes com a build de referencia
    void GetPlatformIDForPlayerID(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GetPlatformIDForPlayerID(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GetPlayerIDForPlatformID(int)
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerIDForPlatformID(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GetPlayerIDForPlatformID(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetSpoiledEgg(int)
    // endereco: casamento de bytes com a build de referencia
    void GetSpoiledEgg(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GetSpoiledEgg(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetTribeIdPlayerList(int)
    // endereco: casamento de bytes com a build de referencia
    void GetTribeIdPlayerList(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GetTribeIdPlayerList(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GetWorld()
    // classe: a funcao mora em AActor, e UShooterCheatManager herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "AActor.GetWorld()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveActiveShipSkill(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void GiveActiveShipSkill(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.GiveActiveShipSkill(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveAllExplorerNotes()
    // endereco: casamento de bytes com a build de referencia
    void GiveAllExplorerNotes() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveAllExplorerNotes()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveAllExplorerNotesLC()
    // endereco: casamento de bytes com a build de referencia
    void GiveAllExplorerNotesLC() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveAllExplorerNotesLC()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveAllItemsInSet(AShooterPlayerController*,TArray<FItemCount,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    static void GiveAllItemsInSet(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UShooterCheatManager.GiveAllItemsInSet(AShooterPlayerController*,TArray<FItemCount,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveAllStructure()
    // endereco: casamento de bytes com a build de referencia
    void GiveAllStructure() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveAllStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveAllTreeSkills(FName)
    // endereco: casamento de bytes com a build de referencia
    void GiveAllTreeSkills(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.GiveAllTreeSkills(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveArmorSet(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    void GiveArmorSet(unsigned long long a0, unsigned long long a1) const
    {
        NativeCall<void, unsigned long long, unsigned long long>(this, "UShooterCheatManager.GiveArmorSet(FName,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveBossEngrams(int,FName,signedchar)
    // endereco: casamento de bytes com a build de referencia
    void GiveBossEngrams(int a0, unsigned long long a1, char a2) const
    {
        NativeCall<void, int, unsigned long long, char>(this, "UShooterCheatManager.GiveBossEngrams(int,FName,signedchar)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveBossItems()
    // endereco: casamento de bytes com a build de referencia
    void GiveBossItems() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveBossItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveCreativeMode()
    // endereco: casamento de bytes com a build de referencia
    void GiveCreativeMode() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveCreativeMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveCreativeModeToPlayer(__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=445+grafo=11/11]]
    void GiveCreativeModeToPlayer(long long a0) const
    {
        NativeCall<void, long long>(this, "UShooterCheatManager.GiveCreativeModeToPlayer(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveCreativeModeToTarget()
    // endereco: casamento de bytes com a build de referencia
    void GiveCreativeModeToTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveCreativeModeToTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveDinoSet(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void GiveDinoSet(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.GiveDinoSet(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveEngrams()
    // endereco: cache_pdb_25090264
    void GiveEngrams() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveEngrams()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveEngramsTekOnly()
    // endereco: cache_pdb_25090264
    void GiveEngramsTekOnly() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveEngramsTekOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveExpToPlayer(__int64,float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveExpToPlayer(long long a0, float a1, bool a2, bool a3) const
    {
        NativeCall<void, long long, float, bool, bool>(this, "UShooterCheatManager.GiveExpToPlayer(__int64,float,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveExpToTarget(float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveExpToTarget(float a0, bool a1, bool a2) const
    {
        NativeCall<void, float, bool, bool>(this, "UShooterCheatManager.GiveExpToTarget(float,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveExplorerNote(int)
    // endereco: casamento de bytes com a build de referencia
    void GiveExplorerNote(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GiveExplorerNote(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveInfiniteStatsToTarget()
    // endereco: casamento de bytes com a build de referencia
    void GiveInfiniteStatsToTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveInfiniteStatsToTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveItem(FString&,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveItem(const FString& a0, int a1, float a2, bool a3) const
    {
        NativeCall<void, void*, int, float, bool>(this, "UShooterCheatManager.GiveItem(FString&,int,float,bool)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GiveItem(FString* a0, int a1, float a2, bool a3) const
    { GiveItem(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveItemNum(int,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveItemNum(int a0, int a1, float a2, bool a3) const
    {
        NativeCall<void, int, int, float, bool>(this, "UShooterCheatManager.GiveItemNum(int,int,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveItemNumToPlayer(int,int,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveItemNumToPlayer(int a0, int a1, int a2, float a3, bool a4) const
    {
        NativeCall<void, int, int, int, float, bool>(this, "UShooterCheatManager.GiveItemNumToPlayer(int,int,int,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveItemSet(FName)
    // endereco: casamento de bytes com a build de referencia
    void GiveItemSet(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.GiveItemSet(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveItemSkins(FString&)
    // endereco: casamento de bytes com a build de referencia
    void GiveItemSkins(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.GiveItemSkins(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GiveItemSkins(FString* a0) const
    { GiveItemSkins(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveItemToPlayer(int,FString&,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveItemToPlayer(int a0, const FString& a1, int a2, float a3, bool a4) const
    {
        NativeCall<void, int, void*, int, float, bool>(this, "UShooterCheatManager.GiveItemToPlayer(int,FString&,int,float,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GiveItemToPlayer(int a0, FString* a1, int a2, float a3, bool a4) const
    { GiveItemToPlayer(a0, *a1, a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveMaxLevel(int)
    // endereco: casamento de bytes com a build de referencia
    void GiveMaxLevel(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GiveMaxLevel(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveMilestoneWithTask(FName)
    // endereco: casamento de bytes com a build de referencia
    void GiveMilestoneWithTask(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.GiveMilestoneWithTask(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveShipSkill(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void GiveShipSkill(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.GiveShipSkill(FName,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveShipSkillPoints(int)
    // endereco: casamento de bytes com a build de referencia
    void GiveShipSkillPoints(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.GiveShipSkillPoints(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveShipSkills()
    // endereco: casamento de bytes com a build de referencia
    void GiveShipSkills() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GiveShipSkills()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveTekEngramsTo(__int64,FName&)
    // endereco: casamento de bytes com a build de referencia
    void GiveTekEngramsTo(long long a0, const FName& a1) const
    {
        NativeCall<void, long long, void*>(this, "UShooterCheatManager.GiveTekEngramsTo(__int64,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GiveTekEngramsTo(long long a0, FName* a1) const
    { GiveTekEngramsTo(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveToMeAOE(float)
    // endereco: casamento de bytes com a build de referencia
    void GiveToMeAOE(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.GiveToMeAOE(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveTraitToTarget(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void GiveTraitToTarget(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.GiveTraitToTarget(FName,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.GiveTreeSkillPoints(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void GiveTreeSkillPoints(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.GiveTreeSkillPoints(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GiveWeaponSet(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    void GiveWeaponSet(unsigned long long a0, unsigned long long a1) const
    {
        NativeCall<void, unsigned long long, unsigned long long>(this, "UShooterCheatManager.GiveWeaponSet(FName,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GlobalObjectCount()
    // endereco: casamento de bytes com a build de referencia
    void GlobalObjectCount() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GlobalObjectCount()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.GoToFirstMutagenDrop()
    // endereco: casamento de bytes com a build de referencia
    void GoToFirstMutagenDrop() const
    {
        NativeCall<void>(this, "UShooterCheatManager.GoToFirstMutagenDrop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.HatchEgg()
    // endereco: casamento de bytes com a build de referencia
    void HatchEgg() const
    {
        NativeCall<void>(this, "UShooterCheatManager.HatchEgg()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.HidePlayer(bool)
    // endereco: cache_pdb_25090264
    void HidePlayer(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.HidePlayer(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.HurtMyAOE(int,float)
    // endereco: casamento de bytes com a build de referencia
    void HurtMyAOE(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UShooterCheatManager.HurtMyAOE(int,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.HurtMyTarget(int)
    // endereco: casamento de bytes com a build de referencia
    void HurtMyTarget(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.HurtMyTarget(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.InfiniteStats()
    // endereco: casamento de bytes com a build de referencia
    void InfiniteStats() const
    {
        NativeCall<void>(this, "UShooterCheatManager.InfiniteStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.InfiniteWeight()
    // endereco: casamento de bytes com a build de referencia
    void InfiniteWeight() const
    {
        NativeCall<void>(this, "UShooterCheatManager.InfiniteWeight()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.IsInUndermeshExclusionZone()
    // endereco: casamento de bytes com a build de referencia
    void IsInUndermeshExclusionZone() const
    {
        NativeCall<void>(this, "UShooterCheatManager.IsInUndermeshExclusionZone()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.IsUndermesh(float)
    // endereco: casamento de bytes com a build de referencia
    void IsUndermesh(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.IsUndermesh(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.JoinTribe(__int64,int)
    // endereco: casamento de bytes com a build de referencia
    void JoinTribe(long long a0, int a1) const
    {
        NativeCall<void, long long, int>(this, "UShooterCheatManager.JoinTribe(__int64,int)", a0, a1);
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.KickPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    static void KickPlayer(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.KickPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void KickPlayer(FString* a0)
    { KickPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.Kill()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Kill() const
    {
        NativeCall<void>(this, "UShooterCheatManager.Kill()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.KillAOE(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void KillAOE(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.KillAOE(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.KillAOETribe(FName,float,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void KillAOETribe(unsigned long long a0, float a1, int a2, bool a3) const
    {
        NativeCall<void, unsigned long long, float, int, bool>(this, "UShooterCheatManager.KillAOETribe(FName,float,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.KillPlayer(__int64)
    // endereco: casamento de bytes com a build de referencia
    void KillPlayer(long long a0) const
    {
        NativeCall<void, long long>(this, "UShooterCheatManager.KillPlayer(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.KillSplitscreenPlayer()
    // endereco: casamento de bytes com a build de referencia
    void KillSplitscreenPlayer() const
    {
        NativeCall<void>(this, "UShooterCheatManager.KillSplitscreenPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.LeaveMission()
    // endereco: casamento de bytes com a build de referencia
    void LeaveMission() const
    {
        NativeCall<void>(this, "UShooterCheatManager.LeaveMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.LevelUp(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void LevelUp(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.LevelUp(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.LevelUpAOE(FName,float,int)
    // endereco: casamento de bytes com a build de referencia
    void LevelUpAOE(unsigned long long a0, float a1, int a2) const
    {
        NativeCall<void, unsigned long long, float, int>(this, "UShooterCheatManager.LevelUpAOE(FName,float,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.LevelUpInternal(APrimalCharacter*,FName,int)
    // endereco: casamento de bytes com a build de referencia
    void LevelUpInternal(void* a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, void*, unsigned long long, int>(this, "UShooterCheatManager.LevelUpInternal(APrimalCharacter*,FName,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.LevelUpTarget(FName,int)
    // endereco: casamento de bytes com a build de referencia
    void LevelUpTarget(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UShooterCheatManager.LevelUpTarget(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListActiveHordeEvents()
    // endereco: casamento de bytes com a build de referencia
    void ListActiveHordeEvents() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListActiveHordeEvents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListAllItems()
    // endereco: casamento de bytes com a build de referencia
    void ListAllItems() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListAllItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.ListAllItemsOfActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ListAllItemsOfActors(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.ListAllItemsOfActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListAllItemsOfTarget()
    // endereco: casamento de bytes com a build de referencia
    void ListAllItemsOfTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListAllItemsOfTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListAllPlayerBuffs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=211+grafo=3/3]]
    void ListAllPlayerBuffs() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListAllPlayerBuffs()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListAttacks()
    // endereco: casamento de bytes com a build de referencia
    void ListAttacks() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListAttacks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListBuffs(APrimalCharacter&)
    // endereco: casamento de bytes com a build de referencia
    void ListBuffs(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.ListBuffs(APrimalCharacter&)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListCurrentMilestoneIDs()
    // endereco: casamento de bytes com a build de referencia
    void ListCurrentMilestoneIDs() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListCurrentMilestoneIDs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListDinos()
    // endereco: casamento de bytes com a build de referencia
    static void ListDinos(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.ListDinos()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListHordeDinos()
    // endereco: casamento de bytes com a build de referencia
    void ListHordeDinos() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListHordeDinos()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListMyBuffs()
    // endereco: casamento de bytes com a build de referencia
    void ListMyBuffs() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListMyBuffs()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListMySkillCooldowns()
    // endereco: casamento de bytes com a build de referencia
    void ListMySkillCooldowns() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListMySkillCooldowns()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListMyTargetBuffs()
    // endereco: casamento de bytes com a build de referencia
    void ListMyTargetBuffs() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListMyTargetBuffs()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListOwnedPremiumMods()
    // endereco: casamento de bytes com a build de referencia
    void ListOwnedPremiumMods() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListOwnedPremiumMods()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ListPlayers()
    // endereco: casamento de bytes com a build de referencia
    void ListPlayers() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListPlayers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.ListUploadedSurvivorsForPlayer(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ListUploadedSurvivorsForPlayer(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.ListUploadedSurvivorsForPlayer(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ListUploadedSurvivorsForPlayer(FString* a0) const
    { return ListUploadedSurvivorsForPlayer(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.ListUploadedSurvivorsForPlayerWithClusterID(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ListUploadedSurvivorsForPlayerWithClusterID(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterCheatManager.ListUploadedSurvivorsForPlayerWithClusterID(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ListUploadedSurvivorsForPlayerWithClusterID(FString* a0, FString* a1) const
    { return ListUploadedSurvivorsForPlayerWithClusterID(*a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ListUploadedSurvivorsForTargetPlayer()
    // endereco: casamento de bytes com a build de referencia
    void ListUploadedSurvivorsForTargetPlayer() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ListUploadedSurvivorsForTargetPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.LvlUp(__int64,short)
    // endereco: casamento de bytes com a build de referencia
    void LvlUp(long long a0, short a1) const
    {
        NativeCall<void, long long, short>(this, "UShooterCheatManager.LvlUp(__int64,short)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.MakeTribeAdmin()
    // endereco: cache_pdb_25090264
    void MakeTribeAdmin() const
    {
        NativeCall<void>(this, "UShooterCheatManager.MakeTribeAdmin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.MakeTribeFounder()
    // endereco: casamento de bytes com a build de referencia
    void MakeTribeFounder() const
    {
        NativeCall<void>(this, "UShooterCheatManager.MakeTribeFounder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.MaxAscend(int)
    // endereco: casamento de bytes com a build de referencia
    void MaxAscend(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.MaxAscend(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.Mission(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void Mission(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.Mission(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.MoveTargetTo(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void MoveTargetTo(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "UShooterCheatManager.MoveTargetTo(float,float,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.NextTrackAllMusic()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=288+bytes40+grafo=5/5]]
    void NextTrackAllMusic() const
    {
        NativeCall<void>(this, "UShooterCheatManager.NextTrackAllMusic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.OneHP()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=119]]
    void OneHP() const
    {
        NativeCall<void>(this, "UShooterCheatManager.OneHP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.OneHPAOE(FName,float,int)
    // endereco: casamento de bytes com a build de referencia
    void OneHPAOE(unsigned long long a0, float a1, int a2) const
    {
        NativeCall<void, unsigned long long, float, int>(this, "UShooterCheatManager.OneHPAOE(FName,float,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.OneHPTarget()
    // endereco: casamento de bytes com a build de referencia
    void OneHPTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.OneHPTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.OpenMap(FString&)
    // endereco: casamento de bytes com a build de referencia
    void OpenMap(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.OpenMap(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void OpenMap(FString* a0) const
    { OpenMap(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.OwnsDLC(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro OwnsDLC(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UShooterCheatManager.OwnsDLC(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro OwnsDLC(FString* a0)
    { return OwnsDLC(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.OwnsPremiumMod(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OwnsPremiumMod(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.OwnsPremiumMod(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OwnsPremiumMod(FString* a0) const
    { return OwnsPremiumMod(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.PauseAllMusic()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=277+bytes40+grafo=4/4]]
    void PauseAllMusic() const
    {
        NativeCall<void>(this, "UShooterCheatManager.PauseAllMusic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.PendingCheatCommand.PendingCheatCommand(UShooterCheatManager::PendingCheatC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PendingCheatCommand_PendingCheatCommand(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.PendingCheatCommand.PendingCheatCommand(UShooterCheatManager::PendingCheatCommand&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.PerformGCAndCleanupActors()
    // endereco: cache_pdb_25090264
    void PerformGCAndCleanupActors() const
    {
        NativeCall<void>(this, "UShooterCheatManager.PerformGCAndCleanupActors()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.PlayAllMusic()
    // endereco: casamento de bytes com a build de referencia
    void PlayAllMusic() const
    {
        NativeCall<void>(this, "UShooterCheatManager.PlayAllMusic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.PlayerCommand(FString&)
    // endereco: casamento de bytes com a build de referencia
    void PlayerCommand(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.PlayerCommand(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PlayerCommand(FString* a0) const
    { PlayerCommand(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    void PostInitProperties() const
    {
        NativeCall<void>(this, "UShooterCheatManager.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.PrintActorLocation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void PrintActorLocation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.PrintActorLocation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PrintActorLocation(FString* a0) const
    { PrintActorLocation(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.PrintCheatCommandQueue()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrintCheatCommandQueue() const
    {
        return NativeCall<void*>(this, "UShooterCheatManager.PrintCheatCommandQueue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.PrintDinoStats()
    // endereco: casamento de bytes com a build de referencia
    void PrintDinoStats() const
    {
        NativeCall<void>(this, "UShooterCheatManager.PrintDinoStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.PrintMessageOut(FString&)
    // endereco: casamento de bytes com a build de referencia
    void PrintMessageOut(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.PrintMessageOut(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PrintMessageOut(FString* a0) const
    { PrintMessageOut(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.PrintTargetStructureMemoryUsage()
    // endereco: casamento de bytes com a build de referencia
    void PrintTargetStructureMemoryUsage() const
    {
        NativeCall<void>(this, "UShooterCheatManager.PrintTargetStructureMemoryUsage()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ProgressMilestone(FName,float,FName)
    // endereco: casamento de bytes com a build de referencia
    void ProgressMilestone(unsigned long long a0, float a1, unsigned long long a2) const
    {
        NativeCall<void, unsigned long long, float, unsigned long long>(this, "UShooterCheatManager.ProgressMilestone(FName,float,FName)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ProgressMilestoneTask(int,int,float,FName)
    // endereco: casamento de bytes com a build de referencia
    void ProgressMilestoneTask(int a0, int a1, float a2, unsigned long long a3) const
    {
        NativeCall<void, int, int, float, unsigned long long>(this, "UShooterCheatManager.ProgressMilestoneTask(int,int,float,FName)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.QualityNameToFloat(FName)
    // endereco: casamento de bytes com a build de referencia
    static float QualityNameToFloat(unsigned long long a0)
    {
        return NativeCall<float, unsigned long long>(nullptr, "UShooterCheatManager.QualityNameToFloat(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.QueueAttack(int,float)
    // endereco: casamento de bytes com a build de referencia
    void QueueAttack(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UShooterCheatManager.QueueAttack(int,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.QueueAttackAOE(int,float,float)
    // endereco: casamento de bytes com a build de referencia
    void QueueAttackAOE(int a0, float a1, float a2) const
    {
        NativeCall<void, int, float, float>(this, "UShooterCheatManager.QueueAttackAOE(int,float,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.QueueCheat(FString,float)
    // endereco: casamento de bytes com a build de referencia
    void QueueCheat(const FString& a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "UShooterCheatManager.QueueCheat(FString,float)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void QueueCheat(FString* a0, float a1) const
    { QueueCheat(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.QueueDinoAttack(AActor*,int,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro QueueDinoAttack(void* a0, int a1, float a2) const
    {
        return NativeCall<void*, void*, int, float>(this, "UShooterCheatManager.QueueDinoAttack(AActor*,int,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RainCritters(int,float,float)
    // endereco: casamento de bytes com a build de referencia
    void RainCritters(int a0, float a1, float a2) const
    {
        NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainCritters(int,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RainDanger(int,float,float)
    // endereco: casamento de bytes com a build de referencia
    void RainDanger(int a0, float a1, float a2) const
    {
        NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainDanger(int,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RainDinos(int,float,float)
    // endereco: casamento de bytes com a build de referencia
    void RainDinos(int a0, float a1, float a2) const
    {
        NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainDinos(int,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RainDinosHelper(TArray<FString,TSizedDefaultAllocator<32>>&,int,float,float
    // endereco: casamento de bytes com a build de referencia
    void RainDinosHelper(void* a0, int a1, float a2, float a3) const
    {
        NativeCall<void, void*, int, float, float>(this, "UShooterCheatManager.RainDinosHelper(TArray<FString,TSizedDefaultAllocator<32>>&,int,float,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RainMonkeys(int,float,float)
    // endereco: casamento de bytes com a build de referencia
    void RainMonkeys(int a0, float a1, float a2) const
    {
        NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainMonkeys(int,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ReassertColorization()
    // endereco: casamento de bytes com a build de referencia
    void ReassertColorization() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ReassertColorization()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RefillStats()
    // endereco: casamento de bytes com a build de referencia
    void RefillStats() const
    {
        NativeCall<void>(this, "UShooterCheatManager.RefillStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RegrowFoliage(float)
    // endereco: casamento de bytes com a build de referencia
    void RegrowFoliage(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.RegrowFoliage(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.RemoveAccessories()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=363]]
    void RemoveAccessories() const
    {
        NativeCall<void>(this, "UShooterCheatManager.RemoveAccessories()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RemoveAllWorldBuffs()
    // endereco: casamento de bytes com a build de referencia
    void RemoveAllWorldBuffs() const
    {
        NativeCall<void>(this, "UShooterCheatManager.RemoveAllWorldBuffs()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.RemoveMaxItemQuantityOverride(FString)
    // endereco: casamento de bytes com a build de referencia
    void RemoveMaxItemQuantityOverride(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.RemoveMaxItemQuantityOverride(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RemoveMaxItemQuantityOverride(FString* a0) const
    { RemoveMaxItemQuantityOverride(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RemoveTribeAdmin()
    // endereco: casamento de bytes com a build de referencia
    void RemoveTribeAdmin() const
    {
        NativeCall<void>(this, "UShooterCheatManager.RemoveTribeAdmin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RemoveWorldBuff(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    void RemoveWorldBuff(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.RemoveWorldBuff(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RemoveWorldBuff(FString* a0) const
    { RemoveWorldBuff(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RenamePlayer(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void RenamePlayer(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.RenamePlayer(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RenamePlayer(FString* a0, FString* a1) const
    { RenamePlayer(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RenamePlayerId(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void RenamePlayerId(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "UShooterCheatManager.RenamePlayerId(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RenamePlayerId(int a0, FString* a1) const
    { RenamePlayerId(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RenameTribe(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void RenameTribe(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.RenameTribe(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RenameTribe(FString* a0, FString* a1) const
    { RenameTribe(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RenameTribeID(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void RenameTribeID(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "UShooterCheatManager.RenameTribeID(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RenameTribeID(int a0, FString* a1) const
    { RenameTribeID(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RepairArea(float)
    // endereco: casamento de bytes com a build de referencia
    void RepairArea(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.RepairArea(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RequestUpdateActiveMissionTags()
    // endereco: casamento de bytes com a build de referencia
    void RequestUpdateActiveMissionTags() const
    {
        NativeCall<void>(this, "UShooterCheatManager.RequestUpdateActiveMissionTags()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ResetAttackCooldowns()
    // endereco: casamento de bytes com a build de referencia
    void ResetAttackCooldowns() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetAttackCooldowns()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ResetLeaderboards()
    // endereco: casamento de bytes com a build de referencia
    void ResetLeaderboards() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetLeaderboards()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ResetLiveTuningOverloads()
    // endereco: casamento de bytes com a build de referencia
    void ResetLiveTuningOverloads() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetLiveTuningOverloads()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ResetMilestones()
    // endereco: casamento de bytes com a build de referencia
    void ResetMilestones() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetMilestones()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ResetShipSkillCooldowns()
    // endereco: casamento de bytes com a build de referencia
    void ResetShipSkillCooldowns() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetShipSkillCooldowns()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ResetSkillCooldowns()
    // endereco: casamento de bytes com a build de referencia
    void ResetSkillCooldowns() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetSkillCooldowns()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ResetSkills()
    // endereco: casamento de bytes com a build de referencia
    void ResetSkills() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetSkills()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ResetSparseDataModifications()
    // endereco: cache_pdb_25090264
    void ResetSparseDataModifications() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ResetSparseDataModifications()");
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.RespawnPlayer(bool,int)
    // endereco: casamento de bytes com a build de referencia
    void RespawnPlayer(bool a0, int a1) const
    {
        NativeCall<void, bool, int>(this, "UShooterCheatManager.RespawnPlayer(bool,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.RunDinoTest(FName&,int,float)
    // endereco: casamento de bytes com a build de referencia
    void RunDinoTest(const FName& a0, int a1, float a2) const
    {
        NativeCall<void, void*, int, float>(this, "UShooterCheatManager.RunDinoTest(FName&,int,float)", const_cast<FName*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RunDinoTest(FName* a0, int a1, float a2) const
    { RunDinoTest(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SAP()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SAP() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SAP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SDF(FName&,bool,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SDF(const FName& a0, bool a1, int a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, bool, int, bool, bool>(this, "UShooterCheatManager.SDF(FName&,bool,int,bool,bool)", const_cast<FName*>(&a0), a1, a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SDF(FName* a0, bool a1, int a2, bool a3, bool a4) const
    { SDF(*a0, a1, a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SDFBaby(FName&,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void SDFBaby(const FName& a0, int a1, int a2, bool a3) const
    {
        NativeCall<void, void*, int, int, bool>(this, "UShooterCheatManager.SDFBaby(FName&,int,int,bool)", const_cast<FName*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SDFBaby(FName* a0, int a1, int a2, bool a3) const
    { SDFBaby(*a0, a1, a2, a3); }

    // jogo_confirmou_dump
    //   UShooterCheatManager.SDFRide(FName&,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SDFRide(const FName& a0, int a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, int, bool, bool>(this, "UShooterCheatManager.SDFRide(FName&,int,bool,bool)", const_cast<FName*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SDFRide(FName* a0, int a1, bool a2, bool a3) const
    { SDFRide(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SDFSpawnDino(UClass*,bool,int,bool)
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* SDFSpawnDino(void* a0, bool a1, int a2, bool a3) const
    {
        return NativeCall<APrimalDinoCharacter*, void*, bool, int, bool>(this, "UShooterCheatManager.SDFSpawnDino(UClass*,bool,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SPIG(float,float,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SPIG(float a0, float a1, float a2, float a3, float a4) const
    {
        NativeCall<void, float, float, float, float, float>(this, "UShooterCheatManager.SPIG(float,float,float,float,float)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SaveBackup()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void SaveBackup() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SaveBackup()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SaveWorld()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    static void SaveWorld()
    {
        NativeCall<void>(nullptr, "UShooterCheatManager.SaveWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SaveWorldDisableTransfer()
    // endereco: casamento de bytes com a build de referencia
    void SaveWorldDisableTransfer() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SaveWorldDisableTransfer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.Scatter()
    // endereco: casamento de bytes com a build de referencia
    void Scatter() const
    {
        NativeCall<void>(this, "UShooterCheatManager.Scatter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ScriptCommand(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ScriptCommand(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.ScriptCommand(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ScriptCommand(FString* a0) const
    { ScriptCommand(*a0); }

    // jogo_confirmou_dump
    //   UShooterCheatManager.SendDataDogMetric(FString)
    // endereco: casamento de bytes com a build de referencia
    static void SendDataDogMetric(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.SendDataDogMetric(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SendDataDogMetric(FString* a0)
    { SendDataDogMetric(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ServerChat(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerChat(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.ServerChat(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerChat(FString* a0) const
    { ServerChat(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ServerChatTo(FString&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=264+grafo=4/4]]
    void ServerChatTo(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.ServerChatTo(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerChatTo(FString* a0, FString* a1) const
    { ServerChatTo(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ServerChatToPlayer(FString&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=271+grafo=4/4]]
    void ServerChatToPlayer(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.ServerChatToPlayer(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerChatToPlayer(FString* a0, FString* a1) const
    { ServerChatToPlayer(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetActiveMissionDebugFlags(int)
    // endereco: casamento de bytes com a build de referencia
    void SetActiveMissionDebugFlags(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.SetActiveMissionDebugFlags(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetAllAvailableMissionsComplete()
    // endereco: casamento de bytes com a build de referencia
    void SetAllAvailableMissionsComplete() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SetAllAvailableMissionsComplete()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetBabyAge(float)
    // endereco: casamento de bytes com a build de referencia
    void SetBabyAge(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetBabyAge(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetBabyAgeAOE(float,float)
    // endereco: casamento de bytes com a build de referencia
    void SetBabyAgeAOE(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "UShooterCheatManager.SetBabyAgeAOE(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetCameraProfile(FName)
    // endereco: casamento de bytes com a build de referencia
    void SetCameraProfile(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.SetCameraProfile(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetChatLogMaxAgeInDays(int)
    // endereco: casamento de bytes com a build de referencia
    void SetChatLogMaxAgeInDays(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.SetChatLogMaxAgeInDays(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetCreativeModeOnPawn(AShooterCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool SetCreativeModeOnPawn(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UShooterCheatManager.SetCreativeModeOnPawn(AShooterCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetDay(int)
    // endereco: casamento de bytes com a build de referencia
    void SetDay(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.SetDay(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetDayCycleSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    void SetDayCycleSpeed(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetDayCycleSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetDebugMeleeAttacks(bool,float)
    // endereco: casamento de bytes com a build de referencia
    void SetDebugMeleeAttacks(bool a0, float a1) const
    {
        NativeCall<void, bool, float>(this, "UShooterCheatManager.SetDebugMeleeAttacks(bool,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetDifficultyValue(float)
    // endereco: casamento de bytes com a build de referencia
    void SetDifficultyValue(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetDifficultyValue(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetGlobalPause(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetGlobalPause(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.SetGlobalPause(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetImprintQuality(float)
    // classe: a funcao mora em AShooterPlayerController, e UShooterCheatManager herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void SetImprintQuality(float a0) const
    {
        NativeCall<void, float>(this, "AShooterPlayerController.SetImprintQuality(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetImprintedPlayer(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetImprintedPlayer(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.SetImprintedPlayer(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetImprintedPlayer(FString* a0, FString* a1) const
    { SetImprintedPlayer(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetInfiniteStats(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetInfiniteStats(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.SetInfiniteStats(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetMaterialParamaterCollectionByNameAndFloatValue(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void SetMaterialParamaterCollectionByNameAndFloatValue(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.SetMaterialParamaterCollectionByNameAndFloatValue(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetMessageOfTheDay(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetMessageOfTheDay(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.SetMessageOfTheDay(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetMessageOfTheDay(FString* a0, FString* a1) const
    { SetMessageOfTheDay(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetMyTargetSleeping(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetMyTargetSleeping(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.SetMyTargetSleeping(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetNetworkTime(float)
    // endereco: casamento de bytes com a build de referencia
    void SetNetworkTime(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetNetworkTime(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetShipNetworkAndStasisRnageMultiplier(float)
    // endereco: casamento de bytes com a build de referencia
    void SetShipNetworkAndStasisRnageMultiplier(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetShipNetworkAndStasisRnageMultiplier(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetShowAllPlayers(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetShowAllPlayers(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.SetShowAllPlayers(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetSleepingAOE(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSleepingAOE(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UShooterCheatManager.SetSleepingAOE(float,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetStat(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void SetStat(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.SetStat(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetStatOnTarget(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void SetStatOnTarget(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UShooterCheatManager.SetStatOnTarget(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetTamingEffectivenessModifier(float)
    // endereco: casamento de bytes com a build de referencia
    void SetTamingEffectivenessModifier(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetTamingEffectivenessModifier(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetTargetDinoColor(int,int)
    // endereco: casamento de bytes com a build de referencia
    void SetTargetDinoColor(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UShooterCheatManager.SetTargetDinoColor(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetTargetDinoImprintedPlayerToMe(float)
    // endereco: casamento de bytes com a build de referencia
    void SetTargetDinoImprintedPlayerToMe(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetTargetDinoImprintedPlayerToMe(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetTargetPlayerBodyVal(int,float)
    // endereco: casamento de bytes com a build de referencia
    void SetTargetPlayerBodyVal(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UShooterCheatManager.SetTargetPlayerBodyVal(int,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetTargetPlayerColorVal(int,float)
    // endereco: casamento de bytes com a build de referencia
    void SetTargetPlayerColorVal(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UShooterCheatManager.SetTargetPlayerColorVal(int,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetTargetRandomColors()
    // endereco: casamento de bytes com a build de referencia
    void SetTargetRandomColors() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SetTargetRandomColors()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetThreat(int)
    // endereco: casamento de bytes com a build de referencia
    void SetThreat(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.SetThreat(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetThreatMyTarget(int)
    // endereco: casamento de bytes com a build de referencia
    void SetThreatMyTarget(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.SetThreatMyTarget(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SetTimeOfDay(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetTimeOfDay(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.SetTimeOfDay(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetTimeOfDay(FString* a0) const
    { SetTimeOfDay(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetUIQuickbarScale(float)
    // endereco: casamento de bytes com a build de referencia
    void SetUIQuickbarScale(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetUIQuickbarScale(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetWindDir(float)
    // endereco: casamento de bytes com a build de referencia
    void SetWindDir(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetWindDir(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetWindSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    void SetWindSpeed(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetWindSpeed(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SetWindStr(float)
    // endereco: casamento de bytes com a build de referencia
    void SetWindStr(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.SetWindStr(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ShowActiveMissions()
    // endereco: casamento de bytes com a build de referencia
    void ShowActiveMissions() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ShowActiveMissions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ShowAvailableMissionTags()
    // endereco: casamento de bytes com a build de referencia
    void ShowAvailableMissionTags() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ShowAvailableMissionTags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ShowDebugPingLifetime(bool)
    // endereco: casamento de bytes com a build de referencia
    void ShowDebugPingLifetime(bool a0) const
    {
        NativeCall<void, bool>(this, "UShooterCheatManager.ShowDebugPingLifetime(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ShowDynamicAntiMeshVolumes(float)
    // endereco: casamento de bytes com a build de referencia
    void ShowDynamicAntiMeshVolumes(float a0) const
    {
        NativeCall<void, float>(this, "UShooterCheatManager.ShowDynamicAntiMeshVolumes(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ShowHibernatingDino(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ShowHibernatingDino(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.ShowHibernatingDino(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ShowHibernatingDino(FString* a0) const
    { ShowHibernatingDino(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ShowMessageOfTheDay()
    // endereco: casamento de bytes com a build de referencia
    void ShowMessageOfTheDay() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ShowMessageOfTheDay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.ShowVolumes(TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>>&,F
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowVolumes(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "UShooterCheatManager.ShowVolumes(TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>>&,FLinearColor,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ShowWindVelocity()
    // endereco: casamento de bytes com a build de referencia
    void ShowWindVelocity() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ShowWindVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.Slack(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Slack(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.Slack(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro Slack(FString* a0) const
    { return Slack(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.SlackWithURL(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SlackWithURL(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterCheatManager.SlackWithURL(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SlackWithURL(FString* a0, FString* a1) const
    { return SlackWithURL(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnActor(FString&,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnActor(const FString& a0, float a1, float a2, float a3) const
    {
        NativeCall<void, void*, float, float, float>(this, "UShooterCheatManager.SpawnActor(FString&,float,float,float)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnActor(FString* a0, float a1, float a2, float a3) const
    { SpawnActor(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnActorBaby(FString&,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnActorBaby(const FString& a0, float a1, float a2, float a3) const
    {
        NativeCall<void, void*, float, float, float>(this, "UShooterCheatManager.SpawnActorBaby(FString&,float,float,float)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnActorBaby(FString* a0, float a1, float a2, float a3) const
    { SpawnActorBaby(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnActorTamed(FString&,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnActorTamed(const FString& a0, float a1, float a2, float a3) const
    {
        NativeCall<void, void*, float, float, float>(this, "UShooterCheatManager.SpawnActorTamed(FString&,float,float,float)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnActorTamed(FString* a0, float a1, float a2, float a3) const
    { SpawnActorTamed(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnDino(FString&,float,float,float,int)
    // endereco: casamento de bytes com a build de referencia
    static void SpawnDino(const FString& a0, float a1, float a2, float a3, int a4)
    {
        NativeCall<void, void*, float, float, float, int>(nullptr, "UShooterCheatManager.SpawnDino(FString&,float,float,float,int)", const_cast<FString*>(&a0), a1, a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SpawnDino(FString* a0, float a1, float a2, float a3, int a4)
    { SpawnDino(*a0, a1, a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnEgg()
    // endereco: casamento de bytes com a build de referencia
    void SpawnEgg() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SpawnEgg()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnExactDino(FString&,FString&,float,int,int,FString&,FString&,FString&,s
    // endereco: casamento de bytes com a build de referencia
    void SpawnExactDino(const FString& a0, const FString& a1, float a2, int a3, int a4, const FString& a5, const FString& a6, const FString& a7, char a8, char a9, const FString& a10, const FString& a11, const FString& a12, const FString& a13, float a14, const FString& a15, long long a16, long long a17, float a18, float a19, float a20) const
    {
        NativeCall<void, void*, void*, float, int, int, void*, void*, void*, char, char, void*, void*, void*, void*, float, void*, long long, long long, float, float, float>(this, "UShooterCheatManager.SpawnExactDino(FString&,FString&,float,int,int,FString&,FString&,FString&,signedchar,signedchar,FString&,FString&,FString&,FString&,float,FString&,__int64,__int64,float,float,float)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4, const_cast<FString*>(&a5), const_cast<FString*>(&a6), const_cast<FString*>(&a7), a8, a9, const_cast<FString*>(&a10), const_cast<FString*>(&a11), const_cast<FString*>(&a12), const_cast<FString*>(&a13), a14, const_cast<FString*>(&a15), a16, a17, a18, a19, a20);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnExactDino(FString* a0, FString* a1, float a2, int a3, int a4, FString* a5, FString* a6, FString* a7, char a8, char a9, FString* a10, FString* a11, FString* a12, FString* a13, float a14, FString* a15, long long a16, long long a17, float a18, float a19, float a20) const
    { SpawnExactDino(*a0, *a1, a2, a3, a4, *a5, *a6, *a7, a8, a9, *a10, *a11, *a12, *a13, a14, *a15, a16, a17, a18, a19, a20); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SpawnFleetCaptain(int,int,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SpawnFleetCaptain(int a0, int a1, float a2, float a3, bool a4) const
    {
        NativeCall<void, int, int, float, float, bool>(this, "UShooterCheatManager.SpawnFleetCaptain(int,int,float,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnSetupDino(FString&,FString&,float,int,FString&,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnSetupDino(const FString& a0, const FString& a1, float a2, int a3, const FString& a4, float a5, float a6, float a7) const
    {
        NativeCall<void, void*, void*, float, int, void*, float, float, float>(this, "UShooterCheatManager.SpawnSetupDino(FString&,FString&,float,int,FString&,float,float,float)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, const_cast<FString*>(&a4), a5, a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SpawnSetupDino(FString* a0, FString* a1, float a2, int a3, FString* a4, float a5, float a6, float a7) const
    { SpawnSetupDino(*a0, *a1, a2, a3, *a4, a5, a6, a7); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpawnSetupDinoInternal(FDinoSetup&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* SpawnSetupDinoInternal(void* a0, void* a1) const
    {
        return NativeCall<APrimalDinoCharacter*, void*, void*>(this, "UShooterCheatManager.SpawnSetupDinoInternal(FDinoSetup&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.SpawnShip(FString&,float,bool,bool,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnShip(const FString& a0, float a1, bool a2, bool a3, bool a4, int a5) const
    {
        return NativeCall<void*, void*, float, bool, bool, bool, int>(this, "UShooterCheatManager.SpawnShip(FString&,float,bool,bool,bool,int)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SpawnShip(FString* a0, float a1, bool a2, bool a3, bool a4, int a5) const
    { return SpawnShip(*a0, a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.SpawnShipAtOffset(FString&,float,bool,bool,bool,int,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnShipAtOffset(const FString& a0, float a1, bool a2, bool a3, bool a4, int a5, float a6, float a7) const
    {
        return NativeCall<void*, void*, float, bool, bool, bool, int, float, float>(this, "UShooterCheatManager.SpawnShipAtOffset(FString&,float,bool,bool,bool,int,float,float)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SpawnShipAtOffset(FString* a0, float a1, bool a2, bool a3, bool a4, int a5, float a6, float a7) const
    { return SpawnShipAtOffset(*a0, a1, a2, a3, a4, a5, a6, a7); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SpawnShipPerfGrid()
    // endereco: casamento de bytes com a build de referencia
    void SpawnShipPerfGrid() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SpawnShipPerfGrid()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.SpawnShipPerfGridCustom(FString&,int,int,int,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnShipPerfGridCustom(const FString& a0, int a1, int a2, int a3, float a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, int, int, int, float, float, bool>(this, "UShooterCheatManager.SpawnShipPerfGridCustom(FString&,int,int,int,float,float,bool)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SpawnShipPerfGridCustom(FString* a0, int a1, int a2, int a3, float a4, float a5, bool a6) const
    { return SpawnShipPerfGridCustom(*a0, a1, a2, a3, a4, a5, a6); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.SpawnStructures(int,int)
    // endereco: casamento de bytes com a build de referencia
    void SpawnStructures(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UShooterCheatManager.SpawnStructures(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SpectateMyTarget()
    // endereco: casamento de bytes com a build de referencia
    void SpectateMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.SpectateMyTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.StartMission(FName)
    // endereco: casamento de bytes com a build de referencia
    void StartMission(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.StartMission(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.StartMissionWithMetaData(FName)
    // endereco: casamento de bytes com a build de referencia
    void StartMissionWithMetaData(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UShooterCheatManager.StartMissionWithMetaData(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.StartNearestHorde(FName,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartNearestHorde(unsigned long long a0, int a1, bool a2) const
    {
        NativeCall<void, unsigned long long, int, bool>(this, "UShooterCheatManager.StartNearestHorde(FName,int,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.StartPerformanceRecording()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91+grafo=4/4]]
    void StartPerformanceRecording() const
    {
        NativeCall<void>(this, "UShooterCheatManager.StartPerformanceRecording()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.StartPerformanceRecordingOfChannels(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro StartPerformanceRecordingOfChannels(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.StartPerformanceRecordingOfChannels(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StartPerformanceRecordingOfChannels(FString* a0) const
    { return StartPerformanceRecordingOfChannels(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.StartSaveBackup()
    // endereco: casamento de bytes com a build de referencia
    void StartSaveBackup() const
    {
        NativeCall<void>(this, "UShooterCheatManager.StartSaveBackup()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.StopBreaking(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void StopBreaking(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UShooterCheatManager.StopBreaking(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.StopPerformanceRecording()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void StopPerformanceRecording() const
    {
        NativeCall<void>(this, "UShooterCheatManager.StopPerformanceRecording()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.SummonTamed(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SummonTamed(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.SummonTamed(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SummonTamed(FString* a0) const
    { SummonTamed(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TCTM(FString&)
    // endereco: casamento de bytes com a build de referencia
    void TCTM(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TCTM(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TCTM(FString* a0) const
    { TCTM(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TOD(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void TOD(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TOD(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TOD(FString* a0) const
    { TOD(*a0); }

    // jogo_confirmou_dump
    //   UShooterCheatManager.TP(FString)
    // endereco: casamento de bytes com a build de referencia
    static void TP(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.TP(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void TP(FString* a0)
    { TP(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TPCoords(float,float,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void TPCoords(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "UShooterCheatManager.TPCoords(float,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TPName(FString&)
    // endereco: cache_pdb_25090264
    void TPName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TPName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TPName(FString* a0) const
    { TPName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TTAL(FString&,int&)
    // endereco: casamento de bytes com a build de referencia
    void TTAL(const FString& a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UShooterCheatManager.TTAL(FString&,int&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TTAL(FString* a0, void* a1) const
    { TTAL(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.TTATL(FString&,int&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TTATL(const FString& a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UShooterCheatManager.TTATL(FString&,int&,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TTATL(FString* a0, void* a1, int a2) const
    { return TTATL(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TTC(FString&)
    // endereco: casamento de bytes com a build de referencia
    void TTC(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TTC(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TTC(FString* a0) const
    { TTC(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TacoBell()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=301]]
    void TacoBell() const
    {
        NativeCall<void>(this, "UShooterCheatManager.TacoBell()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.TailWind()
    // endereco: casamento de bytes com a build de referencia
    void TailWind() const
    {
        NativeCall<void>(this, "UShooterCheatManager.TailWind()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TakeTribe(int)
    // endereco: casamento de bytes com a build de referencia
    void TakeTribe(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.TakeTribe(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TameAOE(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void TameAOE(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "UShooterCheatManager.TameAOE(float,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportPlayerIDToMe(__int64)
    // endereco: casamento de bytes com a build de referencia
    void TeleportPlayerIDToMe(long long a0) const
    {
        NativeCall<void, long long>(this, "UShooterCheatManager.TeleportPlayerIDToMe(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportPlayerNameToMe(FString&)
    // endereco: casamento de bytes com a build de referencia
    void TeleportPlayerNameToMe(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TeleportPlayerNameToMe(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TeleportPlayerNameToMe(FString* a0) const
    { TeleportPlayerNameToMe(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportToActiveHorde(int)
    // endereco: casamento de bytes com a build de referencia
    void TeleportToActiveHorde(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.TeleportToActiveHorde(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportToActorLocation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void TeleportToActorLocation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TeleportToActorLocation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TeleportToActorLocation(FString* a0) const
    { TeleportToActorLocation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportToNearestDino(float,float,float,float,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void TeleportToNearestDino(float a0, float a1, float a2, float a3, bool a4, int a5) const
    {
        NativeCall<void, float, float, float, float, bool, int>(this, "UShooterCheatManager.TeleportToNearestDino(float,float,float,float,bool,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportToPlayer(__int64)
    // endereco: casamento de bytes com a build de referencia
    void TeleportToPlayer(long long a0) const
    {
        NativeCall<void, long long>(this, "UShooterCheatManager.TeleportToPlayer(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TeleportToPlayerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    void TeleportToPlayerName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TeleportToPlayerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TeleportToPlayerName(FString* a0) const
    { TeleportToPlayerName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleClawStepping()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    void ToggleClawStepping() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleClawStepping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleDamageLogging()
    // endereco: casamento de bytes com a build de referencia
    void ToggleDamageLogging() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleDamageLogging()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleDamageNumbers()
    // endereco: casamento de bytes com a build de referencia
    void ToggleDamageNumbers() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleDamageNumbers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleFoliageInteraction()
    // endereco: casamento de bytes com a build de referencia
    void ToggleFoliageInteraction() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleFoliageInteraction()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ToggleFreeCraft()
    // endereco: casamento de bytes com a build de referencia
    void ToggleFreeCraft() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleFreeCraft()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleFreezeStatusValues()
    // endereco: casamento de bytes com a build de referencia
    void ToggleFreezeStatusValues() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleFreezeStatusValues()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ToggleGameplayDebuggerHUD()
    // endereco: casamento de bytes com a build de referencia
    void ToggleGameplayDebuggerHUD() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleGameplayDebuggerHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleGeneTraits()
    // endereco: casamento de bytes com a build de referencia
    void ToggleGeneTraits() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleGeneTraits()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleLowGravSpin()
    // endereco: casamento de bytes com a build de referencia
    void ToggleLowGravSpin() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleLowGravSpin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleNavSystem()
    // endereco: casamento de bytes com a build de referencia
    void ToggleNavSystem() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleNavSystem()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.ToggleNetworkSmoothing(float,float)
    // endereco: casamento de bytes com a build de referencia
    void ToggleNetworkSmoothing(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "UShooterCheatManager.ToggleNetworkSmoothing(float,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.TogglePremiumModOwnershipChecks()
    // endereco: casamento de bytes com a build de referencia
    void TogglePremiumModOwnershipChecks() const
    {
        NativeCall<void>(this, "UShooterCheatManager.TogglePremiumModOwnershipChecks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleTracker()
    // endereco: casamento de bytes com a build de referencia
    void ToggleTracker() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleTracker()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.ToggleVolumetricDispatcher()
    // endereco: cache_pdb_25090264
    void ToggleVolumetricDispatcher() const
    {
        NativeCall<void>(this, "UShooterCheatManager.ToggleVolumetricDispatcher()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.TrackCarByName(FString)
    // endereco: casamento de bytes com a build de referencia
    void TrackCarByName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.TrackCarByName(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TrackCarByName(FString* a0) const
    { TrackCarByName(*a0); }

    // jogo_confirmou_dump
    //   UShooterCheatManager.TransferImprints(FString&,int,FString)
    // endereco: casamento de bytes com a build de referencia
    static void TransferImprints(const FString& a0, int a1, const FString& a2)
    {
        NativeCall<void, void*, int, void*>(nullptr, "UShooterCheatManager.TransferImprints(FString&,int,FString)", const_cast<FString*>(&a0), a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void TransferImprints(FString* a0, int a1, FString* a2)
    { TransferImprints(*a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TribeDinoAudit(int)
    // endereco: casamento de bytes com a build de referencia
    void TribeDinoAudit(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.TribeDinoAudit(int)", a0);
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.TribeMessage(int,FString)
    // endereco: casamento de bytes com a build de referencia
    static void TribeMessage(int a0, const FString& a1)
    {
        NativeCall<void, int, void*>(nullptr, "UShooterCheatManager.TribeMessage(int,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void TribeMessage(int a0, FString* a1)
    { TribeMessage(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.TribeStructureAudit(int)
    // endereco: casamento de bytes com a build de referencia
    void TribeStructureAudit(int a0) const
    {
        NativeCall<void, int>(this, "UShooterCheatManager.TribeStructureAudit(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.TriggerCheatCommandQueue()
    // endereco: casamento de bytes com a build de referencia
    void TriggerCheatCommandQueue() const
    {
        NativeCall<void>(this, "UShooterCheatManager.TriggerCheatCommandQueue()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCheatManager.TriggerPendingCheat(UShooterCheatManager::PendingCheatCommand)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TriggerPendingCheat(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCheatManager.TriggerPendingCheat(UShooterCheatManager::PendingCheatCommand)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UShooterCheatManager.TrimMemory()
    // endereco: casamento de bytes com a build de referencia
    void TrimMemory() const
    {
        NativeCall<void>(this, "UShooterCheatManager.TrimMemory()");
    }

    // jogo_confirmou_dump
    //   UShooterCheatManager.UnbanPlayer(FString)
    // endereco: casamento de bytes com a build de referencia
    static void UnbanPlayer(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UShooterCheatManager.UnbanPlayer(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void UnbanPlayer(FString* a0)
    { UnbanPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.UnlockAllExplorerNotes()
    // endereco: casamento de bytes com a build de referencia
    void UnlockAllExplorerNotes() const
    {
        NativeCall<void>(this, "UShooterCheatManager.UnlockAllExplorerNotes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.UnlockEngram(FString&)
    // endereco: casamento de bytes com a build de referencia
    void UnlockEngram(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.UnlockEngram(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UnlockEngram(FString* a0) const
    { UnlockEngram(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.VerifyTransferInventory()
    // endereco: casamento de bytes com a build de referencia
    void VerifyTransferInventory() const
    {
        NativeCall<void>(this, "UShooterCheatManager.VerifyTransferInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.VisualizeClass(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    void VisualizeClass(const FString& a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UShooterCheatManager.VisualizeClass(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void VisualizeClass(FString* a0, int a1) const
    { VisualizeClass(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.WhatIsMyTarget()
    // endereco: casamento de bytes com a build de referencia
    void WhatIsMyTarget() const
    {
        NativeCall<void>(this, "UShooterCheatManager.WhatIsMyTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShooterCheatManager.psc(FString&)
    // endereco: casamento de bytes com a build de referencia
    void psc(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UShooterCheatManager.psc(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void psc(FString* a0) const
    { psc(*a0); }

    BrzCampoPonteiro CheatManagerExtentionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCheatManager.CheatManagerExtentions")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsRCONCheatManager` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB8; confianca alta)
    AShooterPlayerController*& MyPCField() const
    { return BrzCampoAncorado<AShooterPlayerController*>(this, "bIsRCONCheatManager", 8); }
    BrzCampoPonteiro PaintModeTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCheatManager.PaintModeTimerHandle")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheatManagerExtentions` +24, medido na build 25090264
    //  (offset absoluto medido: 0xA0; confianca alta)
    void*& PendingCheatCommandsField() const
    { return BrzCampoAncorado<void*>(this, "CheatManagerExtentions", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsRCONCheatManager` +16, medido na build 25090264
    //  (offset absoluto medido: 0xC0; confianca alta)
    int& PendingTribeTeamIDField() const
    { return BrzCampoAncorado<int>(this, "bIsRCONCheatManager", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheatManagerExtentions` +16, medido na build 25090264
    //  (offset absoluto medido: 0x98; confianca alta)
    void*& SpectatorTargetField() const
    { return BrzCampoAncorado<void*>(this, "CheatManagerExtentions", 16); }
    BitFieldValue<bool, unsigned __int32> bIsRCONCheatManager()
    { return { (void*)this, "bIsRCONCheatManager" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERCHEATMANAGER_H
