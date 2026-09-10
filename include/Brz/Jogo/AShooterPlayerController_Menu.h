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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=400+grafo=7/7]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    //  ancorado em `Discord` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB40; confianca alta)
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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToPawn()
    { return { (void*)this, "bAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoManageActiveCameraTarget()
    { return { (void*)this, "bAutoManageActiveCameraTarget" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanPossessWithoutAuthority()
    { return { (void*)this, "bCanPossessWithoutAuthority" }; }
    BitFieldValue<bool, unsigned __int32> bCheatPlayer()
    { return { (void*)this, "bCheatPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPathing()
    { return { (void*)this, "bDebugPathing" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableClickEvents()
    { return { (void*)this, "bEnableClickEvents" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMotionControls()
    { return { (void*)this, "bEnableMotionControls" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMouseOverEvents()
    { return { (void*)this, "bEnableMouseOverEvents" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStreamingSource()
    { return { (void*)this, "bEnableStreamingSource" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTouchEvents()
    { return { (void*)this, "bEnableTouchEvents" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTouchOverEvents()
    { return { (void*)this, "bEnableTouchOverEvents" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceFeedbackEnabled()
    { return { (void*)this, "bForceFeedbackEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowMouseCursor()
    { return { (void*)this, "bForceShowMouseCursor" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bIsAdmin()
    { return { (void*)this, "bIsAdmin" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsGamepadActive()
    { return { (void*)this, "bIsGamepadActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocalPlayerController()
    { return { (void*)this, "bIsLocalPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bLockedInputUI()
    { return { (void*)this, "bLockedInputUI" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIsWaiting()
    { return { (void*)this, "bPlayerIsWaiting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bShouldPerformFullTickWhenPaused()
    { return { (void*)this, "bShouldPerformFullTickWhenPaused" }; }
    BitFieldValue<bool, unsigned __int32> bShowExtendedInfoKey()
    { return { (void*)this, "bShowExtendedInfoKey" }; }
    BitFieldValue<bool, unsigned __int32> bShowMouseCursor()
    { return { (void*)this, "bShowMouseCursor" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStreamingSourceShouldActivate()
    { return { (void*)this, "bStreamingSourceShouldActivate" }; }
    BitFieldValue<bool, unsigned __int32> bStreamingSourceShouldBlockOnSlowStreaming()
    { return { (void*)this, "bStreamingSourceShouldBlockOnSlowStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BrzCampoPonteiro codeVerifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.codeVerifier")); }
    BrzCampoPonteiro customCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerController_Menu.customCursor")); }
};

#endif  // BRZ_SDK_JOGO_ASHOOTERPLAYERCONTROLLER_MENU_H
