// ==========================================================================
//  APrimalBuff_MissionData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_MISSIONDATA_H
#define BRZ_SDK_JOGO_APRIMALBUFF_MISSIONDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AMissionType;
struct UObject;
struct UParticleSystem;

#include "APrimalBuff.h"

struct APrimalBuff_MissionData : public APrimalBuff
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_MissionData"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.AddMissionItem(AMissionType*,FItemNetInfo&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro AddMissionItem(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_MissionData.AddMissionItem(AMissionType*,FItemNetInfo&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.AddPlayerToMission(AMissionType*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void AddPlayerToMission(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_MissionData.AddPlayerToMission(AMissionType*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.AutoHideIndicatorParticles()
    // endereco: casamento de bytes com a build de referencia
    void AutoHideIndicatorParticles() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.AutoHideIndicatorParticles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ClientLoadMissionLevels(FName)
    // endereco: casamento de bytes com a build de referencia
    void ClientLoadMissionLevels(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ClientMissionEligibilityResponse(TArray<FMissionEligibilityData,TSizedDe
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=163+bytes40+chamadores=2]]
    BrzPonteiro ClientMissionEligibilityResponse(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse(TArray<FMissionEligibilityData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ClientMissionEligibilityResponse_Implementation(TArray<FMissionEligibili
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientMissionEligibilityResponse_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse_Implementation(TArray<FMissionEligibilityData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_MissionData.ClientMissionEvent(AMissionType*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientMissionEvent(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent(AMissionType*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ClientMissionEvent_Implementation(AMissionType*,bool,bool)
    // endereco: cache_pdb_25090264
    void ClientMissionEvent_Implementation(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent_Implementation(AMissionType*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ClientSendMissionAlert(EMissionAlertType::Type,FString&,TArray<FMissionA
    // endereco: casamento de bytes com a build de referencia
    void ClientSendMissionAlert(int a0, const FString& a1, void* a2, float a3, void* a4, bool a5) const
    {
        NativeCall<void, int, void*, void*, float, void*, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert(EMissionAlertType::Type,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientSendMissionAlert(int a0, FString* a1, void* a2, float a3, void* a4, bool a5) const
    { ClientSendMissionAlert(a0, *a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ClientSendMissionAlert_Implementation(EMissionAlertType::Type,FString&,T
    // endereco: casamento de bytes com a build de referencia
    void ClientSendMissionAlert_Implementation(int a0, const FString& a1, void* a2, float a3, void* a4, bool a5) const
    {
        NativeCall<void, int, void*, void*, float, void*, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert_Implementation(EMissionAlertType::Type,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientSendMissionAlert_Implementation(int a0, FString* a1, void* a2, float a3, void* a4, bool a5) const
    { ClientSendMissionAlert_Implementation(a0, *a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ClientSendMissionNotification(AMissionType*,FName,FLinearColor,UTexture2
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendMissionNotification(void* a0, unsigned long long a1, void* a2, void* a3, float a4, float a5, bool a6, void* a7) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*, float, float, bool, void*>(this, "APrimalBuff_MissionData.ClientSendMissionNotification(AMissionType*,FName,FLinearColor,UTexture2D*,float,float,bool,USoundBase*)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ClientSendMissionNotification_Implementation(AMissionType*,FName,FLinear
    // endereco: casamento de bytes com a build de referencia
    void ClientSendMissionNotification_Implementation(void* a0, unsigned long long a1, void* a2, void* a3, float a4, float a5, bool a6, void* a7) const
    {
        NativeCall<void, void*, unsigned long long, void*, void*, float, float, bool, void*>(this, "APrimalBuff_MissionData.ClientSendMissionNotification_Implementation(AMissionType*,FName,FLinearColor,UTexture2D*,float,float,bool,USoundBase*)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ClientSpawnEmitter(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TTrans
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSpawnEmitter(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalBuff_MissionData.ClientSpawnEmitter(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TTransform<double>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable>,U
    // endereco: casamento de bytes com a build de referencia
    void ClientSpawnEmitter_Implementation(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff_MissionData.ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TTransform<double>,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ClientStartMissionMovie_Implementation(unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=254]]
    BrzPonteiro ClientStartMissionMovie_Implementation(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalBuff_MissionData.ClientStartMissionMovie_Implementation(unsignedchar)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.ClientStopMissionMovie()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientStopMissionMovie() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ClientStopMissionMovie()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ClientStopMissionMovie_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStopMissionMovie_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_MissionData.ClientStopMissionMovie_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.FindCurrentMissionIdx(AMissionType*,bool)
    // endereco: casamento de bytes com a build de referencia
    int FindCurrentMissionIdx(void* a0, bool a1) const
    {
        return NativeCall<int, void*, bool>(this, "APrimalBuff_MissionData.FindCurrentMissionIdx(AMissionType*,bool)", a0, a1);
    }

    // ── NAO EXISTE COMO FUNCAO: e' `inline` na Unreal ──────────────
    //
    //   APrimalBuff_MissionData.GetActiveMission() nao tem endereco nesta build e nao vai ter:
    //   o compilador dissolve o getter dentro de quem chama.
    //   Ate' 09/09/2026 esta chamada devolvia o ZERO do tipo.
    //
    //   Agora le' o campo, pela reflexao viva, como o resto do SDK.
    AMissionType* GetActiveMission() const { return ActiveMissionField(); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.GetAllCurrentMissions(TArray<AMissionType*,TSizedDefaultAllocator<32>>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=28]]
    BrzPonteiro GetAllCurrentMissions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_MissionData.GetAllCurrentMissions(TArray<AMissionType*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetBiomeMissionTag(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetBiomeMissionTag(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_MissionData.GetBiomeMissionTag(UE::Math::TVector<double>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_Bool(FName,FName,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_Bool(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_Bool(FName,FName,bool&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_Double(FName,FName,double&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_Double(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_Double(FName,FName,double&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_Float(FName,FName,float&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_Float(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_Float(FName,FName,float&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_Int(FName,FName,int&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_Int(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_Int(FName,FName,int&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_Rotator(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_String(FName,FName,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_String(unsigned long long a0, unsigned long long a1, const FString& a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_String(FName,FName,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GetMissionData_String(unsigned long long a0, unsigned long long a1, FString* a2) const
    { return GetMissionData_String(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.GetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMissionData_Vector(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.GetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.GetMissionDebugData(TArray<FSerializedMissionData,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMissionDebugData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_MissionData.GetMissionDebugData(TArray<FSerializedMissionData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.GetWorldIndicatorsForMission(AMissionType*,TArray<FMissionWorldIndicator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldIndicatorsForMission(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "APrimalBuff_MissionData.GetWorldIndicatorsForMission(AMissionType*,TArray<FMissionWorldIndicator,TSizedDefaultAllocator<32>>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.HasRequestedMissionMovieSkip()
    // endereco: cache_pdb_25090264
    bool HasRequestedMissionMovieSkip() const
    {
        return NativeCall<bool>(this, "APrimalBuff_MissionData.HasRequestedMissionMovieSkip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.IsMissionDataReplicated(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsMissionDataReplicated(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long>(this, "APrimalBuff_MissionData.IsMissionDataReplicated(FName,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.IsMissionTypeActive(TSubclassOf<AMissionType>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsMissionTypeActive(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBuff_MissionData.IsMissionTypeActive(TSubclassOf<AMissionType>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.IsMissionTypeActiveWithMissionTag(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsMissionTypeActiveWithMissionTag(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "APrimalBuff_MissionData.IsMissionTypeActiveWithMissionTag(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType>,boo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPlayerEligibleForMission_CheckFromClient(void* a0, void* a1, void* a2, float a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*>(this, "APrimalBuff_MissionData.IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType>,bool&,FClientMissionEligibility&,float,AMissionDispatcher*)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.IsPlayingMissionMovie()
    // endereco: cache_pdb_25090264
    bool IsPlayingMissionMovie() const
    {
        return NativeCall<bool>(this, "APrimalBuff_MissionData.IsPlayingMissionMovie()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.KeyToString(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro KeyToString(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuff_MissionData.KeyToString(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.LoadLevelsForMissionTag(FName)
    // endereco: casamento de bytes com a build de referencia
    void LoadLevelsForMissionTag(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalBuff_MissionData.LoadLevelsForMissionTag(FName)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_MissionData.MultiClearParticleIndicator(float)
    // endereco: casamento de bytes com a build de referencia
    void MultiClearParticleIndicator(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.MultiClearParticleIndicator_Implementation(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=473+grafo=7/7]]
    void MultiClearParticleIndicator_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_MissionData.MultiUpdateMissionData_Int(FName,FName,int)
    // endereco: casamento de bytes com a build de referencia
    void MultiUpdateMissionData_Int(unsigned long long a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, int>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Int(FName,FName,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.OnActiveMissionPhaseEnded(AMissionType*,FName,FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=527+grafo=3/3]]
    void OnActiveMissionPhaseEnded(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseEnded(AMissionType*,FName,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.OnActiveMissionPhaseStarted(AMissionType*,FName,FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=527+grafo=3/3]]
    void OnActiveMissionPhaseStarted(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseStarted(AMissionType*,FName,FName)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.OnFinishedFadeFromBlack()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnFinishedFadeFromBlack() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.OnFinishedFadeFromBlack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.OnFinishedFadeToBlack()
    // endereco: casamento de bytes com a build de referencia
    void OnFinishedFadeToBlack() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.OnFinishedFadeToBlack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.OnFinishedMissionMovie(FString,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnFinishedMissionMovie(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_MissionData.OnFinishedMissionMovie(FString,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void OnFinishedMissionMovie(FString* a0, bool a1) const
    { OnFinishedMissionMovie(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.OnMissionMovieSkipRequested()
    // endereco: casamento de bytes com a build de referencia
    void OnMissionMovieSkipRequested() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.OnMissionMovieSkipRequested()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.OnRep_ActiveMissionIndex()
    // endereco: cache_pdb_25090264
    void OnRep_ActiveMissionIndex() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_ActiveMissionIndex()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.OnRep_CurrentMissions()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=185]]
    void OnRep_CurrentMissions() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_CurrentMissions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.OnRep_MissionIndicatorParticles()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_MissionIndicatorParticles() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_MissionIndicatorParticles()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_MissionData.PostBeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=22]]
    void PostBeginPlay() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.PostBeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.RemoveMissionItem(AMissionType*,FItemNetID&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveMissionItem(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_MissionData.RemoveMissionItem(AMissionType*,FItemNetID&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.RemovePlayerFromMission(AMissionType*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool RemovePlayerFromMission(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBuff_MissionData.RemovePlayerFromMission(AMissionType*,bool)", a0, a1);
    }

    // jogo_confirmou_dump
    //   APrimalBuff_MissionData.ReplicatedMissionDataUpdated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=28]]
    void ReplicatedMissionDataUpdated() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ReplicatedMissionDataUpdated()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.ServerFinishedMissionMovie()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerFinishedMissionMovie() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ServerFinishedMissionMovie()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ServerFinishedMissionMovie_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerFinishedMissionMovie_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_MissionData.ServerFinishedMissionMovie_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.ServerMulticastRequiredProps()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerMulticastRequiredProps() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerMulticastRequiredProps_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerMulticastRequiredProps_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.ServerRequestCancelMission()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ServerRequestCancelMission() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestCancelMission_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestCancelMission_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestEquipMissionItem_Implementation(AMissionType*,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestEquipMissionItem_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalBuff_MissionData.ServerRequestEquipMissionItem_Implementation(AMissionType*,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck(AMissionDispatcher*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRequestMissionEligibilityCheck(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck(AMissionDispatcher*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck_Implementation(AMissionDispatcher*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestMissionEligibilityCheck_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck_Implementation(AMissionDispatcher*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.ServerRequestMissionMovieSkip()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestMissionMovieSkip() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestMissionMovieSkip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.ServerRequestMissionMovieSkip_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=219]]
    BrzPonteiro ServerRequestMissionMovieSkip_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_MissionData.ServerRequestMissionMovieSkip_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestStartMission(TSubclassOf<AMissionType>,AMissionDispatcher*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestStartMission(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_MissionData.ServerRequestStartMission(TSubclassOf<AMissionType>,AMissionDispatcher*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag(FName,AMissionDispatcher*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=2]]
    void ServerRequestStartMissionWithMissionTag(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag(FName,AMissionDispatcher*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestStartMission_Implementation(TSubclassOf<AMissionType>,AMiss
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestStartMission_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_MissionData.ServerRequestStartMission_Implementation(TSubclassOf<AMissionType>,AMissionDispatcher*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestToggleWeapon(AMissionType*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void ServerRequestToggleWeapon(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon(AMissionType*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.ServerRequestToggleWeapon_Implementation(AMissionType*)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestToggleWeapon_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon_Implementation(AMissionType*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_Bool(FName,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetMissionData_Bool(unsigned long long a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, bool>(this, "APrimalBuff_MissionData.SetMissionData_Bool(FName,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_Double(FName,FName,double)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetMissionData_Double(unsigned long long a0, unsigned long long a1, double a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, double>(this, "APrimalBuff_MissionData.SetMissionData_Double(FName,FName,double)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_Float(FName,FName,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=636+grafo=6/6]]
    void SetMissionData_Float(unsigned long long a0, unsigned long long a1, float a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, float>(this, "APrimalBuff_MissionData.SetMissionData_Float(FName,FName,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_Int(FName,FName,int)
    // endereco: casamento de bytes com a build de referencia
    void SetMissionData_Int(unsigned long long a0, unsigned long long a1, int a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, int>(this, "APrimalBuff_MissionData.SetMissionData_Int(FName,FName,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void SetMissionData_Rotator(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.SetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_String(FName,FName,FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetMissionData_String(unsigned long long a0, unsigned long long a1, const FString& a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.SetMissionData_String(FName,FName,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetMissionData_String(unsigned long long a0, unsigned long long a1, FString* a2) const
    { SetMissionData_String(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void SetMissionData_Vector(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, unsigned long long, unsigned long long, void*>(this, "APrimalBuff_MissionData.SetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetupClientMissionCallbacks()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void SetupClientMissionCallbacks() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.SetupClientMissionCallbacks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.SetupForInstigator()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=72]]
    void SetupForInstigator() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.SetupForInstigator()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.StartFadeFromBlack()
    // endereco: casamento de bytes com a build de referencia
    void StartFadeFromBlack() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.StartFadeFromBlack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.StartFadeToBlack()
    // endereco: casamento de bytes com a build de referencia
    void StartFadeToBlack() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.StartFadeToBlack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_MissionData.StartMissionMovie()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void StartMissionMovie() const
    {
        NativeCall<void>(this, "APrimalBuff_MissionData.StartMissionMovie()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRo
    // endereco: casamento de bytes com a build de referencia
    bool TemplateAllowActorSpawn(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "APrimalBuff_MissionData.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=102+grafo=3/3]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_MissionData.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_MissionData.UnloadLevelsForMissionTag(FName)
    // endereco: casamento de bytes com a build de referencia
    void UnloadLevelsForMissionTag(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalBuff_MissionData.UnloadLevelsForMissionTag(FName)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_MissionData.UpdateBuffPersistentData_Implementation(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateBuffPersistentData_Implementation(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalBuff_MissionData.UpdateBuffPersistentData_Implementation(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.UpdateMissionRequirements(AMissionType*,TArray<FMissionPhaseRequirement,
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro UpdateMissionRequirements(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalBuff_MissionData.UpdateMissionRequirements(AMissionType*,TArray<FMissionPhaseRequirement,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_MissionData.UpdateMissionWorldIndicators(AMissionType*,TArray<FMissionWorldIndicator
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro UpdateMissionWorldIndicators(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalBuff_MissionData.UpdateMissionWorldIndicators(AMissionType*,TArray<FMissionWorldIndicator,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    AMissionType*& ActiveMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_MissionData.ActiveMission"); }
    int& ActiveMissionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_MissionData.ActiveMissionIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedMissionDataSubscriptions` +24, medido na build 25090264
    //  (offset absoluto medido: 0xCB8; confianca alta)
    double& ClientLastEligibilityCheckNetworkTimeField() const
    { return BrzCampoAncorado<double>(this, "ReplicatedMissionDataSubscriptions", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedMissionDataSubscriptions` +32, medido na build 25090264
    //  (offset absoluto medido: 0xCC0; confianca alta)
    void*& ClientMissionEligibilityMapField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedMissionDataSubscriptions", 32); }
    BrzCampoPonteiro CurrentMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.CurrentMissions")); }
    BrzCampoPonteiro MissionClientDataUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.MissionClientDataUpdated")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MissionClientDataUpdated` +16, medido na build 25090264
    //  (offset absoluto medido: 0xC50; confianca alta)
    void*& MissionDataMapField() const
    { return BrzCampoAncorado<void*>(this, "MissionClientDataUpdated", 16); }
    UParticleSystem*& MissionIndicatorParticlesField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalBuff_MissionData.MissionIndicatorParticles"); }
    BrzCampoPonteiro MissionMovieModuleCDOField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.MissionMovieModuleCDO")); }
    FString& NonHostPrepAreaNotificationField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_MissionData.NonHostPrepAreaNotification"); }
    BrzCampoPonteiro OnPlayerAddedToMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.OnPlayerAddedToMission")); }
    BrzCampoPonteiro OnPlayerRemovedFromMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.OnPlayerRemovedFromMission")); }
    BrzCampoPonteiro PendingMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.PendingMission")); }
    BrzCampoPonteiro ReplicatedMissionDataSubscriptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_MissionData.ReplicatedMissionDataSubscriptions")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedMissionDataSubscriptions` +16, medido na build 25090264
    //  (offset absoluto medido: 0xCB0; confianca alta)
    double& ServerLastEligibilityCheckNetworkTimeField() const
    { return BrzCampoAncorado<double>(this, "ReplicatedMissionDataSubscriptions", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedMissionDataSubscriptions` +112, medido na build 25090264
    //  (offset absoluto medido: 0xD10; confianca media)
    void*& bShouldMulticastCurrentMissionsField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedMissionDataSubscriptions", 112); }
    BitFieldValue<bool, unsigned __int32> bHasRequestedMovieSkip()
    { return { (void*)this, "bHasRequestedMovieSkip" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingMissionMovie()
    { return { (void*)this, "bIsPlayingMissionMovie" }; }
    BitFieldValue<bool, unsigned __int32> bSentClientStopMovie()
    { return { (void*)this, "bSentClientStopMovie" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_MISSIONDATA_H
