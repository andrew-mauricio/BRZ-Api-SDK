// ==========================================================================
//  AGameStateBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AGAMESTATEBASE_H
#define BRZ_SDK_JOGO_AGAMESTATEBASE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AGameModeBase;
struct APlayerState;

#include "AInfo.h"

struct AGameStateBase : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AGameStateBase"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.AddPlayerState(APlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void AddPlayerState(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameStateBase.AddPlayerState(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.GetDefaultGameMode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AGameModeBase* GetDefaultGameMode() const
    {
        return NativeCall<AGameModeBase*>(this, "AGameStateBase.GetDefaultGameMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameStateBase.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.GetPlayerStateFromUniqueNetId(FUniqueNetIdWrapper&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static APlayerState* GetPlayerStateFromUniqueNetId(void* a0)
    {
        return NativeCall<APlayerState*, void*>(nullptr, "AGameStateBase.GetPlayerStateFromUniqueNetId(FUniqueNetIdWrapper&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.GetServerWorldTimeSeconds()
    // endereco: casamento de bytes com a build de referencia
    double GetServerWorldTimeSeconds() const
    {
        return NativeCall<double>(this, "AGameStateBase.GetServerWorldTimeSeconds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.HandleBeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void HandleBeginPlay() const
    {
        NativeCall<void>(this, "AGameStateBase.HandleBeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.HasMatchStarted()
    // endereco: casamento de bytes com a build de referencia
    bool HasMatchStarted() const
    {
        return NativeCall<bool>(this, "AGameStateBase.HasMatchStarted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.OnRep_ReplicatedHasBegunPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void OnRep_ReplicatedHasBegunPlay() const
    {
        NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedHasBegunPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.OnRep_ReplicatedWorldTimeSeconds()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ReplicatedWorldTimeSeconds() const
    {
        NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedWorldTimeSeconds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.OnRep_ReplicatedWorldTimeSecondsDouble()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=172]]
    void OnRep_ReplicatedWorldTimeSecondsDouble() const
    {
        NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedWorldTimeSecondsDouble()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AGameStateBase.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.ReceivedGameModeClass()
    // endereco: casamento de bytes com a build de referencia
    void ReceivedGameModeClass() const
    {
        NativeCall<void>(this, "AGameStateBase.ReceivedGameModeClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.ReceivedSpectatorClass()
    // endereco: casamento de bytes com a build de referencia
    void ReceivedSpectatorClass() const
    {
        NativeCall<void>(this, "AGameStateBase.ReceivedSpectatorClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.RemovePlayerState(APlayerState*)
    // endereco: casamento de bytes com a build de referencia
    void RemovePlayerState(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameStateBase.RemovePlayerState(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.SeamlessTravelTransitionCheckpoint(bool)
    // endereco: casamento de bytes com a build de referencia
    void SeamlessTravelTransitionCheckpoint(bool a0) const
    {
        NativeCall<void, bool>(this, "AGameStateBase.SeamlessTravelTransitionCheckpoint(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameStateBase.UpdateServerTimeSeconds()
    // endereco: casamento de bytes com a build de referencia
    void UpdateServerTimeSeconds() const
    {
        NativeCall<void>(this, "AGameStateBase.UpdateServerTimeSeconds()");
    }

    TObjectPtr<AGameModeBase>& AuthorityGameModeField() const
    { return *GetNativePointerField<TObjectPtr<AGameModeBase>*>(this, "AGameStateBase.AuthorityGameMode"); }
    BrzCampoPonteiro GameModeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameStateBase.GameModeClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerWorldTimeSecondsUpdateFrequency` +20, medido na build 25090264
    //  (offset absoluto medido: 0x4E0; confianca alta)
    void*& NumServerWorldTimeSecondsDeltasField() const
    { return BrzCampoAncorado<void*>(this, "ServerWorldTimeSecondsUpdateFrequency", 20); }
    BrzCampoPonteiro OnAnyPostProcessVolumeEnteredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameStateBase.OnAnyPostProcessVolumeEntered")); }
    BrzCampoPonteiro OnAnyPostProcessVolumeLeftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameStateBase.OnAnyPostProcessVolumeLeft")); }
    TArray<void*>& PlayerArrayField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AGameStateBase.PlayerArray"); }
    float& ReplicatedWorldTimeSecondsField() const
    { return *GetNativePointerField<float*>(this, "AGameStateBase.ReplicatedWorldTimeSeconds"); }
    double& ReplicatedWorldTimeSecondsDoubleField() const
    { return *GetNativePointerField<double*>(this, "AGameStateBase.ReplicatedWorldTimeSecondsDouble"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerWorldTimeSecondsUpdateFrequency` +28, medido na build 25090264
    //  (offset absoluto medido: 0x4E8; confianca alta)
    void*& SemaphoreStorageField() const
    { return BrzCampoAncorado<void*>(this, "ServerWorldTimeSecondsUpdateFrequency", 28); }
    float& ServerWorldTimeSecondsDeltaField() const
    { return *GetNativePointerField<float*>(this, "AGameStateBase.ServerWorldTimeSecondsDelta"); }
    float& ServerWorldTimeSecondsUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AGameStateBase.ServerWorldTimeSecondsUpdateFrequency"); }
    BrzCampoPonteiro SpectatorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameStateBase.SpectatorClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerWorldTimeSecondsUpdateFrequency` +12, medido na build 25090264
    //  (offset absoluto medido: 0x4D8; confianca alta)
    double& SumServerWorldTimeSecondsDeltaField() const
    { return BrzCampoAncorado<double>(this, "ServerWorldTimeSecondsUpdateFrequency", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerWorldTimeSecondsUpdateFrequency` +4, medido na build 25090264
    //  (offset absoluto medido: 0x4D0; confianca alta)
    void*& TimerHandle_UpdateServerTimeSecondsField() const
    { return BrzCampoAncorado<void*>(this, "ServerWorldTimeSecondsUpdateFrequency", 4); }
    BitFieldValue<bool, unsigned __int32> bReplicatedHasBegunPlay()
    { return { (void*)this, "bReplicatedHasBegunPlay" }; }

};

#endif  // BRZ_SDK_JOGO_AGAMESTATEBASE_H
