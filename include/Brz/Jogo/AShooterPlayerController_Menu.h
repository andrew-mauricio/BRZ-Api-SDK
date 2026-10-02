// ==========================================================================
//  AShooterPlayerController_Menu — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_MENU_H
#define BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_MENU_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ACharacter;
struct AHUD;
struct APawn;
struct APlayerCameraManager;
struct APlayerState;
struct ASpectatorPawn;
struct FActorTickFunction;
struct FName;
struct UCheatManager;
struct UInputComponent;
struct UInterpTrackInstDirector;
struct UNetConnection;
struct UPlayer;
struct UPlayerInput;
struct UPrimalLocalProfile;
struct UPrimitiveComponent;
struct USceneComponent;


struct AShooterPlayerController_Menu
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterPlayerController_Menu"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.DiscordButtonPushed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DiscordButtonPushed() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.DiscordButtonPushed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.DiscordConnect()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DiscordConnect() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.DiscordConnect()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.DiscordConnectProvisional(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DiscordConnectProvisional(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController_Menu.DiscordConnectProvisional(FUniqueNetId&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.DiscordUnlink()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DiscordUnlink() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.DiscordUnlink()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.DoApplyOptions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoApplyOptions() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.DoApplyOptions()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.IsDiscordAuthorizedNonProvisional()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDiscordAuthorizedNonProvisional() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.IsDiscordAuthorizedNonProvisional()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.LoadProfile()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadProfile() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.LoadProfile()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordAuthorizeCompleted(UDiscordClientResult*,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordAuthorizeCompleted(void* a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterPlayerController_Menu.OnDiscordAuthorizeCompleted(UDiscordClientResult*,FString,FString)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnDiscordAuthorizeCompleted(void* a0, FString* a1, FString* a2) const
    { return OnDiscordAuthorizeCompleted(a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordButtonTimerReached()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnDiscordButtonTimerReached() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.OnDiscordButtonTimerReached()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordProvTokenExchange(UDiscordClientResult*,FString,FString,E
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordProvTokenExchange(void* a0, const FString& a1, const FString& a2, int a3, int a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*>(this, "AShooterPlayerController_Menu.OnDiscordProvTokenExchange(UDiscordClientResult*,FString,FString,EDiscordAuthorizationTokenType,int,FString)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnDiscordProvTokenExchange(void* a0, FString* a1, FString* a2, int a3, int a4, FString* a5) const
    { return OnDiscordProvTokenExchange(a0, *a1, *a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordStatusChanged(EDiscordClientStatus,EDiscordClientError,in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordStatusChanged(int a0, int a1, int a2) const
    {
        return NativeCall<void*, int, int, int>(this, "AShooterPlayerController_Menu.OnDiscordStatusChanged(EDiscordClientStatus,EDiscordClientError,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordTokenExchange(UDiscordClientResult*,FString,FString,EDisc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordTokenExchange(void* a0, const FString& a1, const FString& a2, int a3, int a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*>(this, "AShooterPlayerController_Menu.OnDiscordTokenExchange(UDiscordClientResult*,FString,FString,EDiscordAuthorizationTokenType,int,FString)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnDiscordTokenExchange(void* a0, FString* a1, FString* a2, int a3, int a4, FString* a5) const
    { return OnDiscordTokenExchange(a0, *a1, *a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordTokenRefresh(UDiscordClientResult*,FString,FString,EDisco
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordTokenRefresh(void* a0, const FString& a1, const FString& a2, int a3, int a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*>(this, "AShooterPlayerController_Menu.OnDiscordTokenRefresh(UDiscordClientResult*,FString,FString,EDiscordAuthorizationTokenType,int,FString)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnDiscordTokenRefresh(void* a0, FString* a1, FString* a2, int a3, int a4, FString* a5) const
    { return OnDiscordTokenRefresh(a0, *a1, *a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnDiscordTokenUpdated(UDiscordClientResult*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDiscordTokenUpdated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController_Menu.OnDiscordTokenUpdated(UDiscordClientResult*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnLoginComplete(int,bool,FUniqueNetId&,FString&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnLoginComplete(int a0, bool a1, void* a2, const FString& a3) const
    {
        return NativeCall<void*, int, bool, void*, void*>(this, "AShooterPlayerController_Menu.OnLoginComplete(int,bool,FUniqueNetId&,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnLoginComplete(int a0, bool a1, void* a2, FString* a3) const
    { return OnLoginComplete(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.OnUnMergeCompleted(UDiscordClientResult*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnUnMergeCompleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerController_Menu.OnUnMergeCompleted(UDiscordClientResult*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.SaveProfile()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveProfile() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.SaveProfile()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerController_Menu.UpdateRichPresence()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateRichPresence() const
    {
        return NativeCall<void*>(this, "AShooterPlayerController_Menu.UpdateRichPresence()");
    }

    TObjectPtr<APawn>& AcknowledgedPawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterPlayerController_Menu.AcknowledgedPawn"); }
    TArray<void*>& ActiveForceFeedbackEffectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.ActiveForceFeedbackEffects"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerController_Menu.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.BlueprintCreatedComponents"); }
    TObjectPtr<ACharacter>& CharacterField() const
    { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "AShooterPlayerController_Menu.Character"); }
    BrzCampoPonteiro CheatClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.CheatClass")); }
    TObjectPtr<UCheatManager>& CheatManagerField() const
    { return *GetNativePointerField<TObjectPtr<UCheatManager>*>(this, "AShooterPlayerController_Menu.CheatManager"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.Children"); }
    TArray<void*>& ClickEventKeysField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.ClickEventKeys"); }
    int& ClientCapField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.ClientCap"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro CodeVerifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.codeVerifier")); }
    BrzCampoPonteiro ControlRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.ControlRotation")); }
    TObjectPtr<UInterpTrackInstDirector>& ControllingDirTrackInstField() const
    { return *GetNativePointerField<TObjectPtr<UInterpTrackInstDirector>*>(this, "AShooterPlayerController_Menu.ControllingDirTrackInst"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.CreationTime"); }
    unsigned char& CurrentClickTraceChannelField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.CurrentClickTraceChannel"); }
    unsigned char& CurrentMouseCursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.CurrentMouseCursor"); }
    BrzCampoPonteiro CurrentTouchInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.CurrentTouchInterface")); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerController_Menu.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.CustomTimeDilation"); }
    unsigned char& DefaultClickTraceChannelField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.DefaultClickTraceChannel"); }
    unsigned char& DefaultMouseCursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.DefaultMouseCursor"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DiscordField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.Discord")); }
    FString& DiscordAccessTokenField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerController_Menu.DiscordAccessToken"); }
    FString& DiscordRefreshTokenField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerController_Menu.DiscordRefreshToken"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Discord` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xB40; confianca alta)
    void*& DiscordStatusField() const
    { return BrzCampoAncorado<void*>(this, "Discord", 8); }
    float& ForceFeedbackScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.ForceFeedbackScale"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.ForceMaximumReplicationRateUntilTime"); }
    TArray<void*>& HiddenActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.HiddenActors"); }
    TArray<TWeakObjectPtr<void>>& HiddenPrimitiveComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterPlayerController_Menu.HiddenPrimitiveComponents"); }
    float& HitResultTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.HitResultTraceDistance"); }
    TObjectPtr<UInputComponent>& InactiveStateInputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterPlayerController_Menu.InactiveStateInputComponent"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterPlayerController_Menu.InputComponent"); }
    float& InputPitchScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.InputPitchScale"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.InputPriority"); }
    float& InputRollScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.InputRollScale"); }
    float& InputYawScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.InputYawScale"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterPlayerController_Menu.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.LastActorForceReplicationTime"); }
    unsigned short& LastCompletedSeamlessTravelCountField() const
    { return *GetNativePointerField<unsigned short*>(this, "AShooterPlayerController_Menu.LastCompletedSeamlessTravelCount"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerController_Menu.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerController_Menu.LastSelectedWindSourceComponentName"); }
    double& LastSpectatorStateSynchTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.LastSpectatorStateSynchTime"); }
    BrzCampoPonteiro LastSpectatorSyncLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.LastSpectatorSyncLocation")); }
    BrzCampoPonteiro LastSpectatorSyncRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.LastSpectatorSyncRotation")); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.LastThrottledTickTime"); }
    int& LastValidUnstasisCasterFrameField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.LastValidUnstasisCasterFrame"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.Layers"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.MinNetUpdateFrequency"); }
    TObjectPtr<AHUD>& MyHUDField() const
    { return *GetNativePointerField<TObjectPtr<AHUD>*>(this, "AShooterPlayerController_Menu.MyHUD"); }
    TObjectPtr<UNetConnection>& NetConnectionField() const
    { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "AShooterPlayerController_Menu.NetConnection"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerController_Menu.NetDriverName"); }
    unsigned char& NetPlayerIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.NetPlayerIndex"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerController_Menu.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnEndPlay")); }
    BrzCampoPonteiro OnInstigatedAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnInstigatedAnyDamage")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnMatineeUpdated")); }
    BrzCampoPonteiro OnPossessedPawnChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnPossessedPawnChanged")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.OriginalCreationTime"); }
    BrzCampoPonteiro OverridePlayerInputClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.OverridePlayerInputClass")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerController_Menu.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerController_Menu.ParentComponent"); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterPlayerController_Menu.Pawn"); }
    TObjectPtr<UNetConnection>& PendingSwapConnectionField() const
    { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "AShooterPlayerController_Menu.PendingSwapConnection"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.PhysicsReplicationMode")); }
    TObjectPtr<UPlayer>& PlayerField() const
    { return *GetNativePointerField<TObjectPtr<UPlayer>*>(this, "AShooterPlayerController_Menu.Player"); }
    TObjectPtr<APlayerCameraManager>& PlayerCameraManagerField() const
    { return *GetNativePointerField<TObjectPtr<APlayerCameraManager>*>(this, "AShooterPlayerController_Menu.PlayerCameraManager"); }
    BrzCampoPonteiro PlayerCameraManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.PlayerCameraManagerClass")); }
    TObjectPtr<UPlayerInput>& PlayerInputField() const
    { return *GetNativePointerField<TObjectPtr<UPlayerInput>*>(this, "AShooterPlayerController_Menu.PlayerInput"); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AShooterPlayerController_Menu.PlayerState"); }
    BrzCampoPonteiro PreviousRotationInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.PreviousRotationInput")); }
    UPrimalLocalProfile*& PrimalLocalProfileField() const
    { return *GetNativePointerField<UPrimalLocalProfile**>(this, "AShooterPlayerController_Menu.PrimalLocalProfile"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterPlayerController_Menu.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerController_Menu.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterPlayerController_Menu.RootComponent"); }
    BrzCampoPonteiro RotationInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.RotationInput")); }
    unsigned short& SeamlessTravelCountField() const
    { return *GetNativePointerField<unsigned short*>(this, "AShooterPlayerController_Menu.SeamlessTravelCount"); }
    BrzCampoPonteiro SeamlessTravelHUDClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.SeamlessTravelHUDClass")); }
    float& SmoothTargetViewRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerController_Menu.SmoothTargetViewRotationSpeed"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.SpawnLocation")); }
    TObjectPtr<ASpectatorPawn>& SpectatorPawnField() const
    { return *GetNativePointerField<TObjectPtr<ASpectatorPawn>*>(this, "AShooterPlayerController_Menu.SpectatorPawn"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterPlayerController_Menu.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterPlayerController_Menu.StasisUnRegisteredComponents"); }
    FName& StateNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerController_Menu.StateName"); }
    BrzCampoPonteiro StreamingSourceDebugColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.StreamingSourceDebugColor")); }
    BrzCampoPonteiro StreamingSourcePriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.StreamingSourcePriority")); }
    BrzCampoPonteiro StreamingSourceShapesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.StreamingSourceShapes")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerController_Menu.Tags"); }
    BrzCampoPonteiro TargetViewRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.TargetViewRotation")); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.TargetingTeam"); }
    TObjectPtr<USceneComponent>& TransformComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterPlayerController_Menu.TransformComponent"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerController_Menu.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerController_Menu.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAttachToPawn")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoManageActiveCameraTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAutoManageActiveCameraTarget")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCanBeInCluster")); }
    BrzCampoPonteiro bCanPossessWithoutAuthorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCanPossessWithoutAuthority")); }
    BrzCampoPonteiro bCheatPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCheatPlayer")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDebugPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bDebugPathing")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableClickEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableClickEvents")); }
    BrzCampoPonteiro bEnableMotionControlsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableMotionControls")); }
    BrzCampoPonteiro bEnableMouseOverEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableMouseOverEvents")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableStreamingSourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableStreamingSource")); }
    BrzCampoPonteiro bEnableTouchEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableTouchEvents")); }
    BrzCampoPonteiro bEnableTouchOverEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bEnableTouchOverEvents")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceFeedbackEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceFeedbackEnabled")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceShowMouseCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForceShowMouseCursor")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsAdminField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsAdmin")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsGamepadActive")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsInvincible")); }
    BrzCampoPonteiro bIsLocalPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsLocalPlayerController")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bLockedInputUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bLockedInputUI")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPlayerIsWaitingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPlayerIsWaiting")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bSavedWhenStasised")); }
    BrzCampoPonteiro bShouldPerformFullTickWhenPausedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bShouldPerformFullTickWhenPaused")); }
    BrzCampoPonteiro bShowExtendedInfoKeyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bShowExtendedInfoKey")); }
    BrzCampoPonteiro bShowMouseCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bShowMouseCursor")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bStasised")); }
    BrzCampoPonteiro bStreamingSourceShouldActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bStreamingSourceShouldActivate")); }
    BrzCampoPonteiro bStreamingSourceShouldBlockOnSlowStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bStreamingSourceShouldBlockOnSlowStreaming")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.bWantsServerThrottledTick")); }
    BrzCampoPonteiro codeVerifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.codeVerifier")); }
    BrzCampoPonteiro customCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.customCursor")); }
};

#endif  // BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_MENU_H
