// ==========================================================================
//  AShooterGame_Menu — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERGAME_MENU_H
#define BRZ_SDK_JOGO_ASHOOTERGAME_MENU_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AGameSession;
struct AGameStateBase;
struct APawn;
struct AServerStatReplicator;
struct FActorTickFunction;
struct FName;
struct UInputComponent;
struct UPrimitiveComponent;
struct USceneComponent;


struct AShooterGame_Menu
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterGame_Menu"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGame_Menu.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "AShooterGame_Menu.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGame_Menu.GetMainMenuBackgroundTexture()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMainMenuBackgroundTexture() const
    {
        return NativeCall<void*>(this, "AShooterGame_Menu.GetMainMenuBackgroundTexture()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGame_Menu.GetMainMenuOverrideData(FActiveEventMainMenuOverride&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMainMenuOverrideData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGame_Menu.GetMainMenuOverrideData(FActiveEventMainMenuOverride&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGame_Menu.InitGame(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitGame(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterGame_Menu.InitGame(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitGame(FString* a0, FString* a1, FString* a2) const
    { return InitGame(*a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGame_Menu.PrepareMenuBG()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareMenuBG() const
    {
        return NativeCall<void*>(this, "AShooterGame_Menu.PrepareMenuBG()");
    }

    FName& ActiveEventField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGame_Menu.ActiveEvent"); }
    BrzCampoPonteiro ActiveEventMainMenuOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.ActiveEventMainMenuOverrides")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterGame_Menu.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterGame_Menu.AutoReceiveInput"); }
    BrzCampoPonteiro BackgroundTextureOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.BackgroundTextureOverrides")); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.BlueprintCreatedComponents"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGame_Menu.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.CustomTimeDilation"); }
    BrzCampoPonteiro DefaultPawnClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.DefaultPawnClass")); }
    BrzCampoPonteiro DefaultPlayerNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.DefaultPlayerName")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterGame_Menu.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro EngineMessageClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.EngineMessageClass")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro GameNetDriverReplicationSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.GameNetDriverReplicationSystem")); }
    TObjectPtr<AGameSession>& GameSessionField() const
    { return *GetNativePointerField<TObjectPtr<AGameSession>*>(this, "AShooterGame_Menu.GameSession"); }
    BrzCampoPonteiro GameSessionClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.GameSessionClass")); }
    TObjectPtr<AGameStateBase>& GameStateField() const
    { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "AShooterGame_Menu.GameState"); }
    BrzCampoPonteiro GameStateClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.GameStateClass")); }
    BrzCampoPonteiro HUDClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.HUDClass")); }
    BrzCampoPonteiro HasStartedMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.HasStartedMusic")); }
    TArray<void*>& InactivePlayerArrayField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.InactivePlayerArray"); }
    float& InactivePlayerStateLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.InactivePlayerStateLifeSpan"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterGame_Menu.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterGame_Menu.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.LastExitStasisTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterGame_Menu.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGame_Menu.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.Layers"); }
    FName& MatchStateField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGame_Menu.MatchState"); }
    int& MaxInactivePlayersField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.MaxInactivePlayers"); }
    FString& MenuMusicField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGame_Menu.MenuMusic"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.MinNetUpdateFrequency"); }
    float& MinRespawnDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.MinRespawnDelay"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterGame_Menu.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGame_Menu.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterGame_Menu.NetworkSpatializationParent"); }
    int& NumBotsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.NumBots"); }
    int& NumPlayersField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.NumPlayers"); }
    int& NumSpectatorsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.NumSpectators"); }
    int& NumTravellingPlayersField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.NumTravellingPlayers"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.OnTargetingTeamChanged")); }
    FString& OptionsStringField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGame_Menu.OptionsString"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterGame_Menu.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterGame_Menu.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.PhysicsReplicationMode")); }
    BrzCampoPonteiro PlayerControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.PlayerControllerClass")); }
    BrzCampoPonteiro PlayerStateClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.PlayerStateClass")); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterGame_Menu.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterGame_Menu.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.RepGraphBehavior")); }
    BrzCampoPonteiro ReplaySpectatorPlayerControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.ReplaySpectatorPlayerControllerClass")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGame_Menu.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterGame_Menu.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterGame_Menu.RootComponent"); }
    TObjectPtr<AServerStatReplicator>& ServerStatReplicatorField() const
    { return *GetNativePointerField<TObjectPtr<AServerStatReplicator>*>(this, "AShooterGame_Menu.ServerStatReplicator"); }
    BrzCampoPonteiro ServerStatReplicatorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.ServerStatReplicatorClass")); }
    BrzCampoPonteiro SoundToPlayPerBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.SoundToPlayPerBackground")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpectatorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.SpectatorClass")); }
    BrzCampoPonteiro SponsoredModsMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.SponsoredModsMenu")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterGame_Menu.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterGame_Menu.StasisUnRegisteredComponents"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGame_Menu.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.TargetingTeam"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGame_Menu.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterGame_Menu.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bCanBeInCluster")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDelayedStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bDelayedStart")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHandleDedicatedServerReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bHandleDedicatedServerReplays")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPauseableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPauseable")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bSavedWhenStasised")); }
    BrzCampoPonteiro bStartPlayersAsSpectatorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bStartPlayersAsSpectators")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bStasised")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseSeamlessTravel")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGame_Menu.bWantsServerThrottledTick")); }
    BitFieldValue<bool, unsigned __int32> HasStartedMusic()
    { return { (void*)this, "HasStartedMusic" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERGAME_MENU_H
