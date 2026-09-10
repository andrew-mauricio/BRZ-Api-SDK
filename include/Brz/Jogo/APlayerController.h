// ==========================================================================
//  APlayerController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APLAYERCONTROLLER_H
#define BRZ_SDK_JOGO_APLAYERCONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ACameraActor;
struct AHUD;
struct APawn;
struct APlayerCameraManager;
struct APlayerState;
struct ASpectatorPawn;
struct UCheatManager;
struct UInputComponent;
struct UInterpTrackInstDirector;
struct ULocalPlayer;
struct UNetConnection;
struct UObject;
struct UPlayer;
struct UPlayerInput;

#include "APrimalController.h"

struct APlayerController : public APrimalController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APlayerController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.AcknowledgePossession(APawn*)
    // endereco: cache_pdb_25090264
    void AcknowledgePossession(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.AcknowledgePossession(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ActivateTouchInterface(UTouchInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ActivateTouchInterface(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ActivateTouchInterface(UTouchInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.AddCheats(bool)
    // endereco: casamento de bytes com a build de referencia
    void AddCheats(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.AddCheats(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.AutoManageActiveCameraTarget(AActor*)
    // endereco: cache_pdb_25090264
    void AutoManageActiveCameraTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.AutoManageActiveCameraTarget(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.BPPostRender(UCanvas*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPPostRender(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.BPPostRender(UCanvas*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.BeginInactiveState()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=740+grafo=9/9]]
    void BeginInactiveState() const
    {
        NativeCall<void>(this, "APlayerController.BeginInactiveState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=6]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APlayerController.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.BeginSpectatingState()
    // endereco: cache_pdb_25090264
    void BeginSpectatingState() const
    {
        NativeCall<void>(this, "APlayerController.BeginSpectatingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.BuildHiddenComponentList(UE::Math::TVector<double>&,TSet<FPrimitiveComponentId
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuildHiddenComponentList(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerController.BuildHiddenComponentList(UE::Math::TVector<double>&,TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.BuildInputStack(TArray<UInputComponent*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void BuildInputStack(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.BuildInputStack(TArray<UInputComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CalcCamera(float,FMinimalViewInfo&)
    // endereco: casamento de bytes com a build de referencia
    void CalcCamera(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "APlayerController.CalcCamera(float,FMinimalViewInfo&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CanRestartPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=194]]
    bool CanRestartPlayer() const
    {
        return NativeCall<bool>(this, "APlayerController.CanRestartPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ChangeState(FName)
    // endereco: casamento de bytes com a build de referencia
    void ChangeState(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APlayerController.ChangeState(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CleanUpAudioComponents()
    // endereco: casamento de bytes com a build de referencia
    void CleanUpAudioComponents() const
    {
        NativeCall<void>(this, "APlayerController.CleanUpAudioComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CleanupGameViewport()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void CleanupGameViewport() const
    {
        NativeCall<void>(this, "APlayerController.CleanupGameViewport()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CleanupPlayerState()
    // endereco: casamento de bytes com a build de referencia
    void CleanupPlayerState() const
    {
        NativeCall<void>(this, "APlayerController.CleanupPlayerState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClearAudioListenerOverride()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro ClearAudioListenerOverride() const
    {
        return NativeCall<void*>(this, "APlayerController.ClearAudioListenerOverride()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientAckTimeDilation_Implementation(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientAckTimeDilation_Implementation(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "APlayerController.ClientAckTimeDilation_Implementation(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientCapBandwidth(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientCapBandwidth(int a0) const
    {
        return NativeCall<void*, int>(this, "APlayerController.ClientCapBandwidth(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientCapBandwidth_Implementation(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    void ClientCapBandwidth_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "APlayerController.ClientCapBandwidth_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientCommitMapChange()
    // endereco: casamento de bytes com a build de referencia
    void ClientCommitMapChange() const
    {
        NativeCall<void>(this, "APlayerController.ClientCommitMapChange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientCommitMapChange_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientCommitMapChange_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ClientCommitMapChange_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientEnableNetworkVoice_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ClientEnableNetworkVoice_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.ClientEnableNetworkVoice_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientFlushLevelStreaming()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientFlushLevelStreaming() const
    {
        return NativeCall<void*>(this, "APlayerController.ClientFlushLevelStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientGameEnded_Implementation(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientGameEnded_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APlayerController.ClientGameEnded_Implementation(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientGotoState(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=6]]
    void ClientGotoState(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APlayerController.ClientGotoState(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientIgnoreLookInput_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ClientIgnoreLookInput_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.ClientIgnoreLookInput_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientIgnoreMoveInput_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientIgnoreMoveInput_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.ClientIgnoreMoveInput_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientMessage(FString&,FName,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientMessage(const FString& a0, unsigned long long a1, float a2) const
    {
        NativeCall<void, void*, unsigned long long, float>(this, "APlayerController.ClientMessage(FString&,FName,float)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientMessage(FString* a0, unsigned long long a1, float a2) const
    { ClientMessage(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientMessage_Implementation(FString&,FName,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientMessage_Implementation(const FString& a0, unsigned long long a1, float a2) const
    {
        NativeCall<void, void*, unsigned long long, float>(this, "APlayerController.ClientMessage_Implementation(FString&,FName,float)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientMessage_Implementation(FString* a0, unsigned long long a1, float a2) const
    { ClientMessage_Implementation(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientPlayCameraAnim_Implementation(UCameraAnim*,float,float,float,float,bool,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPlayCameraAnim_Implementation(void* a0, float a1, float a2, float a3, float a4, bool a5, bool a6, int a7, void* a8) const
    {
        return NativeCall<void*, void*, float, float, float, float, bool, bool, int, void*>(this, "APlayerController.ClientPlayCameraAnim_Implementation(UCameraAnim*,float,float,float,float,bool,bool,ECameraShakePlaySpace,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientPlayForceFeedback_Internal(UForceFeedbackEffect*,FForceFeedbackParameter
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPlayForceFeedback_Internal(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APlayerController.ClientPlayForceFeedback_Internal(UForceFeedbackEffect*,FForceFeedbackParameters,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect*,FForceFe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPlayForceFeedback_Internal_Implementation(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APlayerController.ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect*,FForceFeedbackParameters,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientPlaySoundAtLocation_Implementation(USoundBase*,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPlaySoundAtLocation_Implementation(void* a0, void* a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, void*, float, float>(this, "APlayerController.ClientPlaySoundAtLocation_Implementation(USoundBase*,UE::Math::TVector<double>,float,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientPlaySound_Implementation(USoundBase*,float,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientPlaySound_Implementation(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APlayerController.ClientPlaySound_Implementation(USoundBase*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientPrepareMapChange(FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPrepareMapChange(unsigned long long a0, bool a1, bool a2) const
    {
        return NativeCall<void*, unsigned long long, bool, bool>(this, "APlayerController.ClientPrepareMapChange(FName,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientPrepareMapChange_Implementation(FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientPrepareMapChange_Implementation(unsigned long long a0, bool a1, bool a2) const
    {
        NativeCall<void, unsigned long long, bool, bool>(this, "APlayerController.ClientPrepareMapChange_Implementation(FName,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientPrestreamTextures_Implementation(AActor*,float,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientPrestreamTextures_Implementation(void* a0, float a1, bool a2, int a3) const
    {
        NativeCall<void, void*, float, bool, int>(this, "APlayerController.ClientPrestreamTextures_Implementation(AActor*,float,bool,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage>,int,APlayerState*,APl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveLocalizedMessage(void* a0, int a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, int, void*, void*, void*>(this, "APlayerController.ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,UObject*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>,int,AP
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=423+grafo=4/4]]
    void ClientReceiveLocalizedMessage_Implementation(void* a0, int a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, int, void*, void*, void*>(this, "APlayerController.ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,UObject*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientRecvServerAckFrameDebug_Implementation(unsignedchar,float)
    // endereco: cache_pdb_25090264
    void ClientRecvServerAckFrameDebug_Implementation(unsigned char a0, float a1) const
    {
        NativeCall<void, unsigned char, float>(this, "APlayerController.ClientRecvServerAckFrameDebug_Implementation(unsignedchar,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientRecvServerAckFrame_Implementation(int,int,signedchar)
    // endereco: cache_pdb_25090264
    void ClientRecvServerAckFrame_Implementation(int a0, int a1, char a2) const
    {
        NativeCall<void, int, int, char>(this, "APlayerController.ClientRecvServerAckFrame_Implementation(int,int,signedchar)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientReset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientReset() const
    {
        return NativeCall<void*>(this, "APlayerController.ClientReset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientReset_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientReset_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ClientReset_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientRestart_Implementation(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=131]]
    void ClientRestart_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientRestart_Implementation(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientRetryClientRestart_Implementation(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=187]]
    void ClientRetryClientRestart_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientRetryClientRestart_Implementation(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientReturnToMainMenuWithTextReason_Implementation(FText&)
    // endereco: casamento de bytes com a build de referencia
    void ClientReturnToMainMenuWithTextReason_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientReturnToMainMenuWithTextReason_Implementation(FText&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientSetBlockOnAsyncLoading_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientSetBlockOnAsyncLoading_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ClientSetBlockOnAsyncLoading_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientSetCameraMode_Implementation(FName)
    // endereco: cache_pdb_25090264
    void ClientSetCameraMode_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APlayerController.ClientSetCameraMode_Implementation(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientSetCinematicMode_Implementation(bool,bool,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void ClientSetCinematicMode_Implementation(bool a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, bool, bool, bool, bool>(this, "APlayerController.ClientSetCinematicMode_Implementation(bool,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface*,float,i
    // endereco: casamento de bytes com a build de referencia
    void ClientSetForceMipLevelsToBeResident_Implementation(void* a0, float a1, int a2) const
    {
        NativeCall<void, void*, float, int>(this, "APlayerController.ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface*,float,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientSetHUD(TSubclassOf<AHUD>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=93+chamadores=2]]
    BrzPonteiro ClientSetHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ClientSetHUD(TSubclassOf<AHUD>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientSetHUD_Implementation(TSubclassOf<AHUD>)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetHUD_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientSetHUD_Implementation(TSubclassOf<AHUD>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientSetSpectatorWaiting_Implementation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientSetSpectatorWaiting_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.ClientSetSpectatorWaiting_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientSetViewTarget_Implementation(AActor*,FViewTargetTransitionParams)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=199]]
    BrzPonteiro ClientSetViewTarget_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerController.ClientSetViewTarget_Implementation(AActor*,FViewTargetTransitionParams)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientStartCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStartCameraShake(void* a0, float a1, int a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, float, int, void*, float, bool>(this, "APlayerController.ClientStartCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,UE::Math::TRotator<double>,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientStartCameraShake_Implementation(TSubclassOf<UCameraShakeBase>,float,ECam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStartCameraShake_Implementation(void* a0, float a1, int a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, float, int, void*, float, bool>(this, "APlayerController.ClientStartCameraShake_Implementation(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,UE::Math::TRotator<double>,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientStopCameraShake(TSubclassOf<UCameraShakeBase>,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientStopCameraShake(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerController.ClientStopCameraShake(TSubclassOf<UCameraShakeBase>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientStopCameraShake_Implementation(TSubclassOf<UCameraShakeBase>,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=39]]
    BrzPonteiro ClientStopCameraShake_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerController.ClientStopCameraShake_Implementation(TSubclassOf<UCameraShakeBase>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientStopForceFeedback(UForceFeedbackEffect*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStopForceFeedback(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "APlayerController.ClientStopForceFeedback(UForceFeedbackEffect*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientStopForceFeedback_Implementation(UForceFeedbackEffect*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStopForceFeedback_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "APlayerController.ClientStopForceFeedback_Implementation(UForceFeedbackEffect*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientTeamMessage(APlayerState*,FString&,FName,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientTeamMessage(void* a0, const FString& a1, unsigned long long a2, float a3) const
    {
        NativeCall<void, void*, void*, unsigned long long, float>(this, "APlayerController.ClientTeamMessage(APlayerState*,FString&,FName,float)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientTeamMessage(void* a0, FString* a1, unsigned long long a2, float a3) const
    { ClientTeamMessage(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientTeamMessage_Implementation(APlayerState*,FString&,FName,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientTeamMessage_Implementation(void* a0, const FString& a1, unsigned long long a2, float a3) const
    {
        NativeCall<void, void*, void*, unsigned long long, float>(this, "APlayerController.ClientTeamMessage_Implementation(APlayerState*,FString&,FName,float)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientTeamMessage_Implementation(void* a0, FString* a1, unsigned long long a2, float a3) const
    { ClientTeamMessage_Implementation(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientTravel(FString&,ETravelType,bool,FGuid)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientTravel(const FString& a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, int, bool, void*>(this, "APlayerController.ClientTravel(FString&,ETravelType,bool,FGuid)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientTravel(FString* a0, int a1, bool a2, void* a3) const
    { return ClientTravel(*a0, a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientTravelInternal_Implementation(FString&,ETravelType,bool,FGuid)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientTravelInternal_Implementation(const FString& a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, int, bool, void*>(this, "APlayerController.ClientTravelInternal_Implementation(FString&,ETravelType,bool,FGuid)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientTravelInternal_Implementation(FString* a0, int a1, bool a2, void* a3) const
    { return ClientTravelInternal_Implementation(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientUnmutePlayers(TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)
    // endereco: thunk
    void ClientUnmutePlayers(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientUnmutePlayers(TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientUnmutePlayers_Implementation(TArray<FUniqueNetIdRepl,TSizedDefaultAlloca
    // endereco: cache_pdb_25090264
    void ClientUnmutePlayers_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientUnmutePlayers_Implementation(TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelSta
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientUpdateMultipleLevelsStreamingStatus(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientUpdateMultipleLevelsStreamingStatus_Implementation(TArray<FUpdateLevelSt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdateMultipleLevelsStreamingStatus_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ClientUpdateMultipleLevelsStreamingStatus_Implementation(TArray<FUpdateLevelStreamingLevelStatus,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ClientVoiceHandshakeComplete_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientVoiceHandshakeComplete_Implementation() const
    {
        return NativeCall<void*>(this, "APlayerController.ClientVoiceHandshakeComplete_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ClientWasKicked(FText&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientWasKicked(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ClientWasKicked(FText&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ConsoleCommand(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ConsoleCommand(void* retorno, const FString& a0, bool a1) const
    {
        NativeCall<void, void*, void*, bool>(this, "APlayerController.ConsoleCommand(FString&,bool)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ConsoleCommand(void* retorno, FString* a0, bool a1) const
    { ConsoleCommand(retorno, *a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ConsoleKey(FKey)
    // endereco: casamento de bytes com a build de referencia
    void ConsoleKey(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ConsoleKey(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CopyStringToClipboard(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=9+bytes40+chamadores=4]]
    void CopyStringToClipboard(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.CopyStringToClipboard(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CopyStringToClipboard(FString* a0) const
    { CopyStringToClipboard(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CopyStringToClipboard_Implementation(FString&)
    // endereco: cache_pdb_25090264
    void CopyStringToClipboard_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.CopyStringToClipboard_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CopyStringToClipboard_Implementation(FString* a0) const
    { CopyStringToClipboard_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.CreateTouchInterface()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=57]]
    void CreateTouchInterface() const
    {
        NativeCall<void>(this, "APlayerController.CreateTouchInterface()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.CreateVirtualJoystick()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateVirtualJoystick() const
    {
        return NativeCall<void*>(this, "APlayerController.CreateVirtualJoystick()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.DefaultCanUnpause()
    // endereco: casamento de bytes com a build de referencia
    bool DefaultCanUnpause() const
    {
        return NativeCall<bool>(this, "APlayerController.DefaultCanUnpause()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.DelayedPrepareMapChange()
    // endereco: casamento de bytes com a build de referencia
    void DelayedPrepareMapChange() const
    {
        NativeCall<void>(this, "APlayerController.DelayedPrepareMapChange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.DeprojectScreenPositionToWorld(float,float,UE::Math::TVector<double>&,UE::Math
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DeprojectScreenPositionToWorld(float a0, float a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, float, void*, void*>(this, "APlayerController.DeprojectScreenPositionToWorld(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.DestroyNetworkActorHandled()
    // endereco: casamento de bytes com a build de referencia
    bool DestroyNetworkActorHandled() const
    {
        return NativeCall<bool>(this, "APlayerController.DestroyNetworkActorHandled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.DestroySpectatorPawn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=157]]
    void DestroySpectatorPawn() const
    {
        NativeCall<void>(this, "APlayerController.DestroySpectatorPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Destroyed() const
    {
        NativeCall<void>(this, "APlayerController.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.DisableInput(APlayerController*)
    // classe: a funcao mora em AActor, e APlayerController herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=146]]
    void DisableInput(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.DisableInput(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APlayerController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.EnableCheats(FString)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=44]]
    static void EnableCheats(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "APlayerController.EnableCheats(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void EnableCheats(FString* a0)
    { EnableCheats(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.EnableInput(APlayerController*)
    // classe: a funcao mora em AActor, e APlayerController herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void EnableInput(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.EnableInput(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=192]]
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APlayerController.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.EndPlayingState()
    // endereco: cache_pdb_25090264
    void EndPlayingState() const
    {
        NativeCall<void>(this, "APlayerController.EndPlayingState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.EndSpectatingState()
    // endereco: casamento de bytes com a build de referencia
    void EndSpectatingState() const
    {
        NativeCall<void>(this, "APlayerController.EndSpectatingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ExecuteAsyncPhysicsCommand(FAsyncPhysicsTimestamp&,UObject*,TFunction<void__cd
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteAsyncPhysicsCommand(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "APlayerController.ExecuteAsyncPhysicsCommand(FAsyncPhysicsTimestamp&,UObject*,TFunction<void__cdecl(void)>&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.FailedToSpawnPawn()
    // endereco: casamento de bytes com a build de referencia
    void FailedToSpawnPawn() const
    {
        NativeCall<void>(this, "APlayerController.FailedToSpawnPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.FlushPressedKeys()
    // endereco: cache_pdb_25090264
    void FlushPressedKeys() const
    {
        NativeCall<void>(this, "APlayerController.FlushPressedKeys()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GameHasEnded(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void GameHasEnded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APlayerController.GameHasEnded(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetActorEyesViewPoint(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetAudioListenerAttenuationOverridePosition(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=175]]
    bool GetAudioListenerAttenuationOverridePosition(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.GetAudioListenerAttenuationOverridePosition(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetAudioListenerPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    void GetAudioListenerPosition(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APlayerController.GetAudioListenerPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetAutoActivateCameraForPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=325+grafo=3/3]]
    ACameraActor* GetAutoActivateCameraForPlayer() const
    {
        return NativeCall<ACameraActor*>(this, "APlayerController.GetAutoActivateCameraForPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetDeprecatedInputYawScale()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    float GetDeprecatedInputYawScale() const
    {
        return NativeCall<float>(this, "APlayerController.GetDeprecatedInputYawScale()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetFocalLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=160]]
    BrzPonteiro GetFocalLocation() const
    {
        return NativeCall<void*>(this, "APlayerController.GetFocalLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetHUD()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetHUD() const
    {
        return NativeCall<void*>(this, "APlayerController.GetHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetHitResultAtScreenPosition(UE::Math::TVector2<double>,ECollisionChannel,bool
    // endereco: casamento de bytes com a build de referencia
    bool GetHitResultAtScreenPosition(void* a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<bool, void*, int, bool, void*>(this, "APlayerController.GetHitResultAtScreenPosition(UE::Math::TVector2<double>,ECollisionChannel,bool,FHitResult&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetHitResultAtScreenPosition(UE::Math::TVector2<double>,TArray<TEnumAsByte<EOb
    // endereco: casamento de bytes com a build de referencia
    bool GetHitResultAtScreenPosition(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, bool, void*>(this, "APlayerController.GetHitResultAtScreenPosition(UE::Math::TVector2<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,FHitResult&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetHitResultUnderFinger(ETouchIndex::Type,ECollisionChannel,bool,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool GetHitResultUnderFinger(int a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<bool, int, int, bool, void*>(this, "APlayerController.GetHitResultUnderFinger(ETouchIndex::Type,ECollisionChannel,bool,FHitResult&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetInputAnalogStickState(EControllerAnalogStick::Type,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInputAnalogStickState(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "APlayerController.GetInputAnalogStickState(EControllerAnalogStick::Type,float&,float&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetInputIndex()
    // endereco: casamento de bytes com a build de referencia
    int GetInputIndex() const
    {
        return NativeCall<int>(this, "APlayerController.GetInputIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetInputMotionState(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::
    // endereco: casamento de bytes com a build de referencia
    void GetInputMotionState(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APlayerController.GetInputMotionState(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetInputMouseDelta(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void GetInputMouseDelta(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.GetInputMouseDelta(float&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetInputVectorKeyState(FKey)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInputVectorKeyState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.GetInputVectorKeyState(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetLocalPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    ULocalPlayer* GetLocalPlayer() const
    {
        return NativeCall<ULocalPlayer*>(this, "APlayerController.GetLocalPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetMinRespawnDelay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    float GetMinRespawnDelay() const
    {
        return NativeCall<float>(this, "APlayerController.GetMinRespawnDelay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetMouseCursor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    BrzPonteiro GetMouseCursor() const
    {
        return NativeCall<void*>(this, "APlayerController.GetMouseCursor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetMousePosition(double&,double&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMousePosition(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerController.GetMousePosition(double&,double&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetMousePosition(float&,float&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GetMousePosition(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "APlayerController.GetMousePosition(float&,float&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetNetConnection()
    // endereco: cache_pdb_25090264
    UNetConnection* GetNetConnection() const
    {
        return NativeCall<UNetConnection*>(this, "APlayerController.GetNetConnection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetNetOwningPlayer()
    // classe: a funcao mora em AActor, e APlayerController herda dela: o `this` e' compativel por construcao
    // endereco: cache_pdb_25090264
    UPlayer* GetNetOwningPlayer() const
    {
        return NativeCall<UPlayer*>(this, "AActor.GetNetOwningPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,A
    // classe: a funcao mora em AActor, e APlayerController herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    float GetNetPriority(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, bool a6) const
    {
        return NativeCall<float, void*, void*, void*, void*, void*, float, bool>(this, "AActor.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetNextViewablePlayer(int)
    // endereco: casamento de bytes com a build de referencia
    APlayerState* GetNextViewablePlayer(int a0) const
    {
        return NativeCall<APlayerState*, int>(this, "APlayerController.GetNextViewablePlayer(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetPawnOrSpectator()
    // endereco: cache_pdb_25090264
    APawn* GetPawnOrSpectator() const
    {
        return NativeCall<APawn*>(this, "APlayerController.GetPawnOrSpectator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetPhysicsTimestamp(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPhysicsTimestamp(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerController.GetPhysicsTimestamp(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetPlatformUserId()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlatformUserId() const
    {
        return NativeCall<void*>(this, "APlayerController.GetPlatformUserId()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetPlayerNetworkAddress()
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerNetworkAddress(void* retorno) const
    {
        NativeCall<void, void*>(this, "APlayerController.GetPlayerNetworkAddress()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetPlayerViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerViewPoint(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.GetPlayerViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetSeamlessTravelActorList(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "APlayerController.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetServerNetworkAddress()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerNetworkAddress() const
    {
        return NativeCall<void*>(this, "APlayerController.GetServerNetworkAddress()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetSplitscreenPlayerCount()
    // endereco: casamento de bytes com a build de referencia
    int GetSplitscreenPlayerCount() const
    {
        return NativeCall<int>(this, "APlayerController.GetSplitscreenPlayerCount()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetStreamingSourceLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRo
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetStreamingSourceLocationAndRotation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.GetStreamingSourceLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetStreamingSourceOwner()
    // endereco: cache_pdb_25090264
    UObject* GetStreamingSourceOwner() const
    {
        return NativeCall<UObject*>(this, "APlayerController.GetStreamingSourceOwner()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetStreamingSourcePriority()
    // endereco: cache_pdb_25090264
    int GetStreamingSourcePriority() const
    {
        return NativeCall<int>(this, "APlayerController.GetStreamingSourcePriority()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetStreamingSourceShapes(TArray<FStreamingSourceShape,TSizedDefaultAllocator<3
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    BrzPonteiro GetStreamingSourceShapes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.GetStreamingSourceShapes(TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetStreamingSources(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSources(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.GetStreamingSources(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.GetStreamingSourcesInternal(TArray<FWorldPartitionStreamingSource,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSourcesInternal(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.GetStreamingSourcesInternal(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetViewTarget()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    AActor* GetViewTarget() const
    {
        return NativeCall<AActor*>(this, "APlayerController.GetViewTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.GetViewportSize(int&,int&)
    // endereco: casamento de bytes com a build de referencia
    void GetViewportSize(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.GetViewportSize(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.HasClientLoadedCurrentWorld()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool HasClientLoadedCurrentWorld() const
    {
        return NativeCall<bool>(this, "APlayerController.HasClientLoadedCurrentWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.InitInputSystem()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InitInputSystem() const
    {
        NativeCall<void>(this, "APlayerController.InitInputSystem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.InputAxis(FKey,float,float,int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool InputAxis(void* a0, float a1, float a2, int a3, bool a4) const
    {
        return NativeCall<bool, void*, float, float, int, bool>(this, "APlayerController.InputAxis(FKey,float,float,int,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.InputKey(FInputKeyParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InputKey(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.InputKey(FInputKeyParams&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.InputKey(FKey,EInputEvent,float,bool)
    // endereco: casamento de bytes com a build de referencia
    bool InputKey(void* a0, int a1, float a2, bool a3) const
    {
        return NativeCall<bool, void*, int, float, bool>(this, "APlayerController.InputKey(FKey,EInputEvent,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.InputMotion(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TV
    // endereco: cache_pdb_25090264
    bool InputMotion(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "APlayerController.InputMotion(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.IsInViewportClient(UGameViewportClient*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=380]]
    BrzPonteiro IsInViewportClient(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.IsInViewportClient(UGameViewportClient*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.IsInputComponentInStack(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool IsInputComponentInStack(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.IsInputComponentInStack(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.IsInputKeyDown(FKey)
    // endereco: casamento de bytes com a build de referencia
    bool IsInputKeyDown(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.IsInputKeyDown(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.IsPaused()
    // endereco: casamento de bytes com a build de referencia
    bool IsPaused() const
    {
        return NativeCall<bool>(this, "APlayerController.IsPaused()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.IsPlayerMuted(FUniqueNetId&)
    // endereco: cache_pdb_25090264
    bool IsPlayerMuted(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.IsPlayerMuted(FUniqueNetId&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.IsPrimaryPlayer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPrimaryPlayer() const
    {
        return NativeCall<void*>(this, "APlayerController.IsPrimaryPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.IsSplitscreenPlayer(int*)
    // endereco: casamento de bytes com a build de referencia
    bool IsSplitscreenPlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.IsSplitscreenPlayer(int*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.IsStreamingSourceEnabled()
    // endereco: cache_pdb_25090264
    bool IsStreamingSourceEnabled() const
    {
        return NativeCall<bool>(this, "APlayerController.IsStreamingSourceEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.LevelStreamingStatusChanged(ULevelStreaming*,bool,bool,bool,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LevelStreamingStatusChanged(void* a0, bool a1, bool a2, bool a3, bool a4, int a5) const
    {
        return NativeCall<void*, void*, bool, bool, bool, bool, int>(this, "APlayerController.LevelStreamingStatusChanged(ULevelStreaming*,bool,bool,bool,bool,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.LocalTravel(FString&)
    // endereco: casamento de bytes com a build de referencia
    void LocalTravel(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.LocalTravel(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void LocalTravel(FString* a0) const
    { LocalTravel(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.NetworkRemapPath(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void NetworkRemapPath(void* retorno, unsigned long long a0, bool a1) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "APlayerController.NetworkRemapPath(FName,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.NotifyLoadedWorld(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyLoadedWorld(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "APlayerController.NotifyLoadedWorld(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.NotifyServerReceivedClientData(APawn*,float)
    // endereco: casamento de bytes com a build de referencia
    bool NotifyServerReceivedClientData(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "APlayerController.NotifyServerReceivedClientData(APawn*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.OnActorChannelOpen(FInBunch&,UNetConnection*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=280]]
    BrzPonteiro OnActorChannelOpen(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerController.OnActorChannelOpen(FInBunch&,UNetConnection*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.OnAddedToPlayerControllerList()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAddedToPlayerControllerList() const
    {
        return NativeCall<void*>(this, "APlayerController.OnAddedToPlayerControllerList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.OnNetCleanup(UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    void OnNetCleanup(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.OnNetCleanup(UNetConnection*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.OnPossess(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=60]]
    void OnPossess(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.OnPossess(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.OnRemovedFromPlayerControllerList()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro OnRemovedFromPlayerControllerList() const
    {
        return NativeCall<void*>(this, "APlayerController.OnRemovedFromPlayerControllerList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.OnSerializeNewActor(FOutBunch&)
    // endereco: cache_pdb_25090264
    void OnSerializeNewActor(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.OnSerializeNewActor(FOutBunch&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.OnUnPossess()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnUnPossess() const
    {
        NativeCall<void>(this, "APlayerController.OnUnPossess()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.Pause()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Pause() const
    {
        NativeCall<void>(this, "APlayerController.Pause()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PawnLeavingGame()
    // endereco: casamento de bytes com a build de referencia
    void PawnLeavingGame() const
    {
        NativeCall<void>(this, "APlayerController.PawnLeavingGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PlayDynamicForceFeedback(float,float,bool,bool,bool,bool,TEnumAsByte<EDynamicF
    // endereco: casamento de bytes com a build de referencia
    void PlayDynamicForceFeedback(float a0, float a1, bool a2, bool a3, bool a4, bool a5, unsigned char a6, void* a7) const
    {
        NativeCall<void, float, float, bool, bool, bool, bool, unsigned char, void*>(this, "APlayerController.PlayDynamicForceFeedback(float,float,bool,bool,bool,bool,TEnumAsByte<EDynamicForceFeedbackAction::Type>,FLatentActionInfo)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PlayerTick(float)
    // endereco: casamento de bytes com a build de referencia
    void PlayerTick(float a0) const
    {
        NativeCall<void, float>(this, "APlayerController.PlayerTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PopInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool PopInputComponent(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.PopInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APlayerController.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    void PostLoad() const
    {
        NativeCall<void>(this, "APlayerController.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PostProcessInput(float,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    void PostProcessInput(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APlayerController.PostProcessInput(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PostSeamlessTravel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=150+grafo=4/4]]
    void PostSeamlessTravel() const
    {
        NativeCall<void>(this, "APlayerController.PostSeamlessTravel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.PreClientTravel(FString&,ETravelType,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreClientTravel(const FString& a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "APlayerController.PreClientTravel(FString&,ETravelType,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro PreClientTravel(FString* a0, int a1, bool a2) const
    { return PreClientTravel(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ProcessForceFeedbackAndHaptics(float,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void ProcessForceFeedbackAndHaptics(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APlayerController.ProcessForceFeedbackAndHaptics(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ProcessPlayerInput(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessPlayerInput(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APlayerController.ProcessPlayerInput(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ProjectWorldLocationToScreen(UE::Math::TVector<double>,UE::Math::TVector2<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProjectWorldLocationToScreen(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APlayerController.ProjectWorldLocationToScreen(UE::Math::TVector<double>,UE::Math::TVector2<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ProjectWorldLocationToScreenWithDistance(UE::Math::TVector<double>,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    char ProjectWorldLocationToScreenWithDistance(void* a0, void* a1, bool a2) const
    {
        return NativeCall<char, void*, void*, bool>(this, "APlayerController.ProjectWorldLocationToScreenWithDistance(UE::Math::TVector<double>,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.PushInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void PushInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.PushInputComponent(UInputComponent*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APlayerController.ReceivedPlayer()
    // endereco: casamento de bytes com a build de referencia
    void ReceivedPlayer() const
    {
        NativeCall<void>(this, "APlayerController.ReceivedPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ReceivedSpectatorClass(TSubclassOf<ASpectatorPawn>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ReceivedSpectatorClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ReceivedSpectatorClass(TSubclassOf<ASpectatorPawn>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.Reset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=233]]
    void Reset() const
    {
        NativeCall<void>(this, "APlayerController.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ResetCameraMode()
    // endereco: casamento de bytes com a build de referencia
    void ResetCameraMode() const
    {
        NativeCall<void>(this, "APlayerController.ResetCameraMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ResetControllerLightColor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ResetControllerLightColor() const
    {
        return NativeCall<void*>(this, "APlayerController.ResetControllerLightColor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ResetIgnoreInputFlags()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=134]]
    void ResetIgnoreInputFlags() const
    {
        NativeCall<void>(this, "APlayerController.ResetIgnoreInputFlags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.RestartLevel()
    // endereco: casamento de bytes com a build de referencia
    void RestartLevel() const
    {
        NativeCall<void>(this, "APlayerController.RestartLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SafeRetryClientRestart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void SafeRetryClientRestart() const
    {
        NativeCall<void>(this, "APlayerController.SafeRetryClientRestart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SafeServerCheckClientPossession()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void SafeServerCheckClientPossession() const
    {
        NativeCall<void>(this, "APlayerController.SafeServerCheckClientPossession()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SeamlessTravelFrom(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SeamlessTravelFrom(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SeamlessTravelFrom(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SendClientAdjustment()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SendClientAdjustment() const
    {
        NativeCall<void>(this, "APlayerController.SendClientAdjustment()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SendToConsole(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=98]]
    void SendToConsole(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SendToConsole(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SendToConsole(FString* a0) const
    { SendToConsole(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerAcknowledgePossession(APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerAcknowledgePossession(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ServerAcknowledgePossession(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerAcknowledgePossession_Implementation(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void ServerAcknowledgePossession_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ServerAcknowledgePossession_Implementation(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerAcknowledgePossession_Validate(APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ServerAcknowledgePossession_Validate(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.ServerAcknowledgePossession_Validate(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerCamera_Validate(FName)
    // endereco: casamento de bytes com a build de referencia
    bool ServerCamera_Validate(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "APlayerController.ServerCamera_Validate(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerChangeName_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerChangeName_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.ServerChangeName_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerChangeName_Implementation(FString* a0) const
    { ServerChangeName_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerChangeName_Validate(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ServerChangeName_Validate(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.ServerChangeName_Validate(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool ServerChangeName_Validate(FString* a0) const
    { return ServerChangeName_Validate(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerCheckClientPossessionReliable_Implementation()
    // endereco: cache_pdb_25090264
    void ServerCheckClientPossessionReliable_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerCheckClientPossessionReliable_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerCheckClientPossession_Implementation()
    // endereco: cache_pdb_25090264
    void ServerCheckClientPossession_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerCheckClientPossession_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerNotifyLoadedWorld(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerNotifyLoadedWorld(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APlayerController.ServerNotifyLoadedWorld(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerPause_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=28]]
    void ServerPause_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerPause_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerRecvClientInputFrame_Implementation(int,TArray<unsignedchar,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    void ServerRecvClientInputFrame_Implementation(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "APlayerController.ServerRecvClientInputFrame_Implementation(int,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerRestartPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRestartPlayer() const
    {
        NativeCall<void>(this, "APlayerController.ServerRestartPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerRestartPlayer_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=347+grafo=4/4]]
    void ServerRestartPlayer_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerRestartPlayer_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerSetSpectatorLocation_Implementation(UE::Math::TVector<double>,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    void ServerSetSpectatorLocation_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.ServerSetSpectatorLocation_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerShortTimeout_Implementation()
    // endereco: cache_pdb_25090264
    void ServerShortTimeout_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerShortTimeout_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerToggleAILogging_Implementation()
    // endereco: cache_pdb_25090264
    void ServerToggleAILogging_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerToggleAILogging_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerUnblockPlayer_Validate(FUniqueNetIdRepl)
    // endereco: casamento de bytes com a build de referencia
    long long ServerUnblockPlayer_Validate(void* a0) const
    {
        return NativeCall<long long, void*>(this, "APlayerController.ServerUnblockPlayer_Validate(FUniqueNetIdRepl)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerUnmutePlayer_Validate(FUniqueNetIdRepl)
    // endereco: casamento de bytes com a build de referencia
    bool ServerUnmutePlayer_Validate(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APlayerController.ServerUnmutePlayer_Validate(FUniqueNetIdRepl)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateLevelVisibility(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=81]]
    BrzPonteiro ServerUpdateLevelVisibility_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateLevelVisibility_Validate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo,TS
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=9+bytes40+chamadores=2]]
    BrzPonteiro ServerUpdateMultipleLevelsVisibility(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerVerifyViewTarget_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerVerifyViewTarget_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerVerifyViewTarget_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerViewNextPlayer_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerViewNextPlayer_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerViewNextPlayer_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ServerViewPrevPlayer_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerViewPrevPlayer_Implementation() const
    {
        NativeCall<void>(this, "APlayerController.ServerViewPrevPlayer_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ServerViewSelf_Implementation(FViewTargetTransitionParams)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerViewSelf_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.ServerViewSelf_Implementation(FViewTargetTransitionParams)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetCameraMode(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=169]]
    void SetCameraMode(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APlayerController.SetCameraMode(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetCinematicMode(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCinematicMode(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "APlayerController.SetCinematicMode(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetCinematicMode(bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCinematicMode(bool a0, bool a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, bool, bool, bool, bool, bool>(this, "APlayerController.SetCinematicMode(bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetDisableHaptics(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetDisableHaptics(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.SetDisableHaptics(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetHapticsByValue(float,float,EControllerHand)
    // endereco: casamento de bytes com a build de referencia
    void SetHapticsByValue(float a0, float a1, int a2) const
    {
        NativeCall<void, float, float, int>(this, "APlayerController.SetHapticsByValue(float,float,EControllerHand)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetInitialLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<do
    // endereco: casamento de bytes com a build de referencia
    void SetInitialLocationAndRotation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APlayerController.SetInitialLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.SetInputMode(FInputModeDataBase&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetInputMode(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerController.SetInputMode(FInputModeDataBase&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetName(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SetName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetName(FString* a0) const
    { SetName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetNetSpeed(int)
    // endereco: casamento de bytes com a build de referencia
    void SetNetSpeed(int a0) const
    {
        NativeCall<void, int>(this, "APlayerController.SetNetSpeed(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SetPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SetPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetPlayer(UPlayer*)
    // endereco: casamento de bytes com a build de referencia
    void SetPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SetPlayer(UPlayer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetSpawnLocation(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    void SetSpawnLocation(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SetSpawnLocation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetSpectatorPawn(ASpectatorPawn*)
    // endereco: casamento de bytes com a build de referencia
    void SetSpectatorPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SetSpectatorPawn(ASpectatorPawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.SetViewTarget(AActor*,FViewTargetTransitionParams)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetViewTarget(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerController.SetViewTarget(AActor*,FViewTargetTransitionParams)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetViewTargetWithBlend(AActor*,float,EViewTargetBlendFunction,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetViewTargetWithBlend(void* a0, float a1, int a2, float a3, bool a4) const
    {
        NativeCall<void, void*, float, int, float, bool>(this, "APlayerController.SetViewTargetWithBlend(AActor*,float,EViewTargetBlendFunction,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetupInactiveStateInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetupInactiveStateInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SetupInactiveStateInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SetupInputComponent()
    // endereco: casamento de bytes com a build de referencia
    void SetupInputComponent() const
    {
        NativeCall<void>(this, "APlayerController.SetupInputComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ShouldFlushKeysWhenViewportFocusChanges()
    // endereco: cache_pdb_25090264
    bool ShouldFlushKeysWhenViewportFocusChanges() const
    {
        return NativeCall<bool>(this, "APlayerController.ShouldFlushKeysWhenViewportFocusChanges()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.ShouldPerformFullTickWhenPaused()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldPerformFullTickWhenPaused() const
    {
        return NativeCall<void*>(this, "APlayerController.ShouldPerformFullTickWhenPaused()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ShouldShowMouseCursor()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldShowMouseCursor() const
    {
        return NativeCall<bool>(this, "APlayerController.ShouldShowMouseCursor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SmoothTargetViewRotation(APawn*,float)
    // endereco: casamento de bytes com a build de referencia
    void SmoothTargetViewRotation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APlayerController.SmoothTargetViewRotation(APawn*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SpawnDefaultHUD()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=268+grafo=3/3]]
    void SpawnDefaultHUD() const
    {
        NativeCall<void>(this, "APlayerController.SpawnDefaultHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SpawnPlayerCameraManager()
    // endereco: casamento de bytes com a build de referencia
    void SpawnPlayerCameraManager() const
    {
        NativeCall<void>(this, "APlayerController.SpawnPlayerCameraManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SpawnSpectatorPawn()
    // endereco: casamento de bytes com a build de referencia
    ASpectatorPawn* SpawnSpectatorPawn() const
    {
        return NativeCall<ASpectatorPawn*>(this, "APlayerController.SpawnSpectatorPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.StartFire(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void StartFire(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "APlayerController.StartFire(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.StartSpectatingOnly()
    // endereco: casamento de bytes com a build de referencia
    void StartSpectatingOnly() const
    {
        NativeCall<void>(this, "APlayerController.StartSpectatingOnly()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.StartTalking()
    // endereco: cache_pdb_25090264
    BrzPonteiro StartTalking() const
    {
        return NativeCall<void*>(this, "APlayerController.StartTalking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.StaticRegisterNativesAPlayerController()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesAPlayerController()
    {
        NativeCall<void>(nullptr, "APlayerController.StaticRegisterNativesAPlayerController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.StopTalking()
    // endereco: cache_pdb_25090264
    BrzPonteiro StopTalking() const
    {
        return NativeCall<void*>(this, "APlayerController.StopTalking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.StreamingSourceShouldActivate()
    // endereco: cache_pdb_25090264
    bool StreamingSourceShouldActivate() const
    {
        return NativeCall<bool>(this, "APlayerController.StreamingSourceShouldActivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.StreamingSourceShouldBlockOnSlowStreaming()
    // endereco: cache_pdb_25090264
    bool StreamingSourceShouldBlockOnSlowStreaming() const
    {
        return NativeCall<bool>(this, "APlayerController.StreamingSourceShouldBlockOnSlowStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.SwitchLevel(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SwitchLevel(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerController.SwitchLevel(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SwitchLevel(FString* a0) const
    { SwitchLevel(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.TickActor(float,ELevelTick,FActorTickFunction&)
    // endereco: casamento de bytes com a build de referencia
    void TickActor(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "APlayerController.TickActor(float,ELevelTick,FActorTickFunction&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.TickPlayerInput(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void TickPlayerInput(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APlayerController.TickPlayerInput(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ToggleSpeaking(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=150]]
    void ToggleSpeaking(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerController.ToggleSpeaking(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.UpdateForceFeedback(IInputInterface*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateForceFeedback(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APlayerController.UpdateForceFeedback(IInputInterface*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.UpdateRotation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=37]]
    void UpdateRotation(float a0) const
    {
        NativeCall<void, float>(this, "APlayerController.UpdateRotation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerController.UpdateServerTimestampToCorrect()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateServerTimestampToCorrect() const
    {
        return NativeCall<void*>(this, "APlayerController.UpdateServerTimestampToCorrect()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.UpdateStateInputComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void UpdateStateInputComponents() const
    {
        NativeCall<void>(this, "APlayerController.UpdateStateInputComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.UseShortConnectTimeout()
    // endereco: cache_pdb_25090264
    bool UseShortConnectTimeout() const
    {
        return NativeCall<bool>(this, "APlayerController.UseShortConnectTimeout()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerController.ViewAPlayer(int)
    // endereco: casamento de bytes com a build de referencia
    void ViewAPlayer(int a0) const
    {
        NativeCall<void, int>(this, "APlayerController.ViewAPlayer(int)", a0);
    }

    TObjectPtr<APawn>& AcknowledgedPawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerController.AcknowledgedPawn"); }
    TArray<void*>& ActiveForceFeedbackEffectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerController.ActiveForceFeedbackEffects"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +80, medido na build 25090264
    //  (offset absoluto medido: 0x680; confianca media)
    void*& ActiveHapticEffect_GunField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +96, medido na build 25090264
    //  (offset absoluto medido: 0x690; confianca media)
    void*& ActiveHapticEffect_HMDField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +48, medido na build 25090264
    //  (offset absoluto medido: 0x660; confianca media)
    void*& ActiveHapticEffect_LeftField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +64, medido na build 25090264
    //  (offset absoluto medido: 0x670; confianca media)
    void*& ActiveHapticEffect_RightField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +44, medido na build 25090264
    //  (offset absoluto medido: 0x86C; confianca media)
    TWeakObjectPtr<void>& AudioListenerAttenuationComponentField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "OverridePlayerInputClass", 44); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +104, medido na build 25090264
    //  (offset absoluto medido: 0x8A8; confianca media)
    void*& AudioListenerAttenuationOverrideField() const
    { return BrzCampoAncorado<void*>(this, "OverridePlayerInputClass", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +36, medido na build 25090264
    //  (offset absoluto medido: 0x864; confianca media)
    TWeakObjectPtr<void>& AudioListenerComponentField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "OverridePlayerInputClass", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +56, medido na build 25090264
    //  (offset absoluto medido: 0x878; confianca media)
    void*& AudioListenerLocationOverrideField() const
    { return BrzCampoAncorado<void*>(this, "OverridePlayerInputClass", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +80, medido na build 25090264
    //  (offset absoluto medido: 0x890; confianca media)
    void*& AudioListenerRotationOverrideField() const
    { return BrzCampoAncorado<void*>(this, "OverridePlayerInputClass", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetViewRotation` +24, medido na build 25090264
    //  (offset absoluto medido: 0x590; confianca alta)
    void*& BlendedTargetViewRotationField() const
    { return BrzCampoAncorado<void*>(this, "TargetViewRotation", 24); }
    BrzCampoPonteiro CheatClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.CheatClass")); }
    TObjectPtr<UCheatManager>& CheatManagerField() const
    { return *GetNativePointerField<TObjectPtr<UCheatManager>*>(this, "APlayerController.CheatManager"); }
    TArray<void*>& ClickEventKeysField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerController.ClickEventKeys"); }
    int& ClientCapField() const
    { return *GetNativePointerField<int*>(this, "APlayerController.ClientCap"); }
    TObjectPtr<UInterpTrackInstDirector>& ControllingDirTrackInstField() const
    { return *GetNativePointerField<TObjectPtr<UInterpTrackInstDirector>*>(this, "APlayerController.ControllingDirTrackInst"); }
    unsigned char& CurrentClickTraceChannelField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerController.CurrentClickTraceChannel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastCompletedSeamlessTravelCount` +22, medido na build 25090264
    //  (offset absoluto medido: 0x7A8; confianca media)
    TWeakObjectPtr<void>& CurrentClickablePrimitiveField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "LastCompletedSeamlessTravelCount", 22); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastCompletedSeamlessTravelCount` +118, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca media)
    TArray<TWeakObjectPtr<void>>& CurrentInputStackField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "LastCompletedSeamlessTravelCount", 118); }
    unsigned char& CurrentMouseCursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerController.CurrentMouseCursor"); }
    BrzCampoPonteiro CurrentTouchInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.CurrentTouchInterface")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastCompletedSeamlessTravelCount` +30, medido na build 25090264
    //  (offset absoluto medido: 0x7B0; confianca media)
    void*& CurrentTouchablePrimitivesField() const
    { return BrzCampoAncorado<void*>(this, "LastCompletedSeamlessTravelCount", 30); }
    unsigned char& DefaultClickTraceChannelField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerController.DefaultClickTraceChannel"); }
    unsigned char& DefaultMouseCursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerController.DefaultMouseCursor"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +16, medido na build 25090264
    //  (offset absoluto medido: 0x640; confianca media)
    void*& DynamicForceFeedbacksField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 16); }
    float& ForceFeedbackScaleField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.ForceFeedbackScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +112, medido na build 25090264
    //  (offset absoluto medido: 0x6A0; confianca media)
    void*& ForceFeedbackValuesField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 112); }
    TArray<void*>& HiddenActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerController.HiddenActors"); }
    TArray<TWeakObjectPtr<void>>& HiddenPrimitiveComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APlayerController.HiddenPrimitiveComponents"); }
    float& HitResultTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.HitResultTraceDistance"); }
    TObjectPtr<UInputComponent>& InactiveStateInputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APlayerController.InactiveStateInputComponent"); }
    float& InputPitchScaleField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.InputPitchScale"); }
    //  no cache antigo este campo se chamava InputPitchScale_DEPRECATED.
    //  nesta build ele e' `InputPitchScale` — resolve por NOME.
    float& InputPitchScale_DEPRECATEDField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.InputPitchScale"); }
    float& InputRollScaleField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.InputRollScale"); }
    //  no cache antigo este campo se chamava InputRollScale_DEPRECATED.
    //  nesta build ele e' `InputRollScale` — resolve por NOME.
    float& InputRollScale_DEPRECATEDField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.InputRollScale"); }
    float& InputYawScaleField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.InputYawScale"); }
    //  no cache antigo este campo se chamava InputYawScale_DEPRECATED.
    //  nesta build ele e' `InputYawScale` — resolve por NOME.
    float& InputYawScale_DEPRECATEDField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.InputYawScale"); }
    unsigned short& LastCompletedSeamlessTravelCountField() const
    { return *GetNativePointerField<unsigned short*>(this, "APlayerController.LastCompletedSeamlessTravelCount"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpectatorPawn` +8, medido na build 25090264
    //  (offset absoluto medido: 0x8D0; confianca alta)
    double& LastRetryPlayerTimeField() const
    { return BrzCampoAncorado<double>(this, "SpectatorPawn", 8); }
    double& LastSpectatorStateSynchTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerController.LastSpectatorStateSynchTime"); }
    BrzCampoPonteiro LastSpectatorSyncLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.LastSpectatorSyncLocation")); }
    BrzCampoPonteiro LastSpectatorSyncRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.LastSpectatorSyncRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +32, medido na build 25090264
    //  (offset absoluto medido: 0x650; confianca media)
    void*& LatentDynamicForceFeedbacksField() const
    { return BrzCampoAncorado<void*>(this, "ActiveForceFeedbackEffects", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SmoothTargetViewRotationSpeed` +4, medido na build 25090264
    //  (offset absoluto medido: 0x5AC; confianca alta)
    float& LocalPlayerCachedLODDistanceFactorField() const
    { return BrzCampoAncorado<float>(this, "SmoothTargetViewRotationSpeed", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetPlayerIndex` +4, medido na build 25090264
    //  (offset absoluto medido: 0x6C8; confianca alta)
    void*& MuteListField() const
    { return BrzCampoAncorado<void*>(this, "NetPlayerIndex", 4); }
    TObjectPtr<AHUD>& MyHUDField() const
    { return *GetNativePointerField<TObjectPtr<AHUD>*>(this, "APlayerController.MyHUD"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastCompletedSeamlessTravelCount` +6, medido na build 25090264
    //  (offset absoluto medido: 0x798; confianca media)
    TArray<void*>& NetConditionGroupsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "LastCompletedSeamlessTravelCount", 6); }
    TObjectPtr<UNetConnection>& NetConnectionField() const
    { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "APlayerController.NetConnection"); }
    unsigned char& NetPlayerIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerController.NetPlayerIndex"); }
    BrzCampoPonteiro OverridePlayerInputClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.OverridePlayerInputClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveForceFeedbackEffects` +128, medido na build 25090264
    //  (offset absoluto medido: 0x6B0; confianca media)
    TArray<void*>& PendingMapChangeLevelNamesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "ActiveForceFeedbackEffects", 128); }
    TObjectPtr<UNetConnection>& PendingSwapConnectionField() const
    { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "APlayerController.PendingSwapConnection"); }
    TObjectPtr<UPlayer>& PlayerField() const
    { return *GetNativePointerField<TObjectPtr<UPlayer>*>(this, "APlayerController.Player"); }
    TObjectPtr<APlayerCameraManager>& PlayerCameraManagerField() const
    { return *GetNativePointerField<TObjectPtr<APlayerCameraManager>*>(this, "APlayerController.PlayerCameraManager"); }
    BrzCampoPonteiro PlayerCameraManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.PlayerCameraManagerClass")); }
    TObjectPtr<UPlayerInput>& PlayerInputField() const
    { return *GetNativePointerField<TObjectPtr<UPlayerInput>*>(this, "APlayerController.PlayerInput"); }
    BrzCampoPonteiro RotationInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.RotationInput")); }
    unsigned short& SeamlessTravelCountField() const
    { return *GetNativePointerField<unsigned short*>(this, "APlayerController.SeamlessTravelCount"); }
    BrzCampoPonteiro SeamlessTravelHUDClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.SeamlessTravelHUDClass")); }
    float& SmoothTargetViewRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APlayerController.SmoothTargetViewRotationSpeed"); }
    BrzCampoPonteiro SpawnLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.SpawnLocation")); }
    TObjectPtr<ASpectatorPawn>& SpectatorPawnField() const
    { return *GetNativePointerField<TObjectPtr<ASpectatorPawn>*>(this, "APlayerController.SpectatorPawn"); }
    BrzCampoPonteiro StreamingSourceDebugColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.StreamingSourceDebugColor")); }
    BrzCampoPonteiro StreamingSourcePriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.StreamingSourcePriority")); }
    BrzCampoPonteiro StreamingSourceShapesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.StreamingSourceShapes")); }
    BrzCampoPonteiro TargetViewRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerController.TargetViewRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +24, medido na build 25090264
    //  (offset absoluto medido: 0x858; confianca alta)
    void*& TimerHandle_ClientCommitMapChangeField() const
    { return BrzCampoAncorado<void*>(this, "OverridePlayerInputClass", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +16, medido na build 25090264
    //  (offset absoluto medido: 0x850; confianca alta)
    void*& TimerHandle_DelayedPrepareMapChangeField() const
    { return BrzCampoAncorado<void*>(this, "OverridePlayerInputClass", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverridePlayerInputClass` +8, medido na build 25090264
    //  (offset absoluto medido: 0x848; confianca alta)
    void*& TimerHandle_UnFreezeField() const
    { return BrzCampoAncorado<void*>(this, "OverridePlayerInputClass", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InactiveStateInputComponent` +16, medido na build 25090264
    //  (offset absoluto medido: 0x828; confianca alta)
    void*& VirtualJoystickField() const
    { return BrzCampoAncorado<void*>(this, "InactiveStateInputComponent", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HiddenPrimitiveComponents` +16, medido na build 25090264
    //  (offset absoluto medido: 0x5D0; confianca alta)
    void*& bRenderPrimitiveComponentsField() const
    { return BrzCampoAncorado<void*>(this, "HiddenPrimitiveComponents", 16); }
    BitFieldValue<bool, unsigned __int32> bShortConnectTimeOut()
    { return { (void*)this, "bShortConnectTimeOut" }; }
    BitFieldValue<bool, unsigned __int32> bCinematicMode()
    { return { (void*)this, "bCinematicMode" }; }
    BitFieldValue<bool, unsigned __int32> bHidePawnInCinematicMode()
    { return { (void*)this, "bHidePawnInCinematicMode" }; }
    BitFieldValue<bool, unsigned __int32> bIsUsingStreamingVolumes()
    { return { (void*)this, "bIsUsingStreamingVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIsWaiting()
    { return { (void*)this, "bPlayerIsWaiting" }; }
    BitFieldValue<bool, unsigned __int32> bShowMouseCursor()
    { return { (void*)this, "bShowMouseCursor" }; }
    BitFieldValue<bool, unsigned __int32> bEnableClickEvents()
    { return { (void*)this, "bEnableClickEvents" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTouchEvents()
    { return { (void*)this, "bEnableTouchEvents" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMouseOverEvents()
    { return { (void*)this, "bEnableMouseOverEvents" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTouchOverEvents()
    { return { (void*)this, "bEnableTouchOverEvents" }; }
    BitFieldValue<bool, unsigned __int32> bForceFeedbackEnabled()
    { return { (void*)this, "bForceFeedbackEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMotionControls()
    { return { (void*)this, "bEnableMotionControls" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStreamingSource()
    { return { (void*)this, "bEnableStreamingSource" }; }
    BitFieldValue<bool, unsigned __int32> bStreamingSourceShouldActivate()
    { return { (void*)this, "bStreamingSourceShouldActivate" }; }
    BitFieldValue<bool, unsigned __int32> bStreamingSourceShouldBlockOnSlowStreaming()
    { return { (void*)this, "bStreamingSourceShouldBlockOnSlowStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bCinemaDisableInputMove()
    { return { (void*)this, "bCinemaDisableInputMove" }; }
    BitFieldValue<bool, unsigned __int32> bCinemaDisableInputLook()
    { return { (void*)this, "bCinemaDisableInputLook" }; }
    BitFieldValue<bool, unsigned __int32> bShouldPerformFullTickWhenPaused()
    { return { (void*)this, "bShouldPerformFullTickWhenPaused" }; }
    BitFieldValue<bool, unsigned __int32> bInputEnabled()
    { return { (void*)this, "bInputEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideAudioListener()
    { return { (void*)this, "bOverrideAudioListener" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideAudioAttenuationListener()
    { return { (void*)this, "bOverrideAudioAttenuationListener" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHaptics()
    { return { (void*)this, "bDisableHaptics" }; }
    BitFieldValue<bool, unsigned __int32> bShouldFlushInputWhenViewportFocusChanges()
    { return { (void*)this, "bShouldFlushInputWhenViewportFocusChanges" }; }
    BitFieldValue<bool, unsigned __int32> bAutoManageActiveCameraTarget()
    { return { (void*)this, "bAutoManageActiveCameraTarget" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocalPlayerController()
    { return { (void*)this, "bIsLocalPlayerController" }; }

};

#endif  // BRZ_SDK_JOGO_APLAYERCONTROLLER_H
