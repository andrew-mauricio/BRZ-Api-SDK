// ==========================================================================
//  UPrimalGlobals — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALGLOBALS_H
#define BRZ_SDK_JOGO_UPRIMALGLOBALS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct ADayCycleManager;
struct ASOTFNotification;
struct AStaticMeshActor;
struct UClass;
struct UFont;
struct UMaterialInstanceConstant;
struct UMaterialInterface;
struct UObject;
struct UPrimalAssets;
struct UPrimalGameData;
struct USoundClass;
struct USoundSubmix;
struct UTriggerEffectLibrary;

#include "UObject.h"

struct UPrimalGlobals : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalGlobals"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.AsyncLoadGameMedia(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void AsyncLoadGameMedia(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "UPrimalGlobals.AsyncLoadGameMedia(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.AttemptSlowClassDLO(FString&)
    // endereco: casamento de bytes com a build de referencia
    static UClass* AttemptSlowClassDLO(const FString& a0)
    {
        return NativeCall<UClass*, void*>(nullptr, "UPrimalGlobals.AttemptSlowClassDLO(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static UClass* AttemptSlowClassDLO(FString* a0)
    { return AttemptSlowClassDLO(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGlobals.DoPrivilegesNotification(UWorld*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoPrivilegesNotification(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalGlobals.DoPrivilegesNotification(UWorld*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGlobals.EqualEqual_DoubleDouble(double,double)
    // endereco: cache_pdb_25090264
    bool EqualEqual_DoubleDouble(double a0, double a1) const
    {
        return NativeCall<bool, double, double>(this, "UPrimalGlobals.EqualEqual_DoubleDouble(double,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.FinishLoadGameMedia()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void FinishLoadGameMedia() const
    {
        NativeCall<void>(this, "UPrimalGlobals.FinishLoadGameMedia()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.FinishedLoadingGameMedia()
    // endereco: casamento de bytes com a build de referencia
    void FinishedLoadingGameMedia() const
    {
        NativeCall<void>(this, "UPrimalGlobals.FinishedLoadingGameMedia()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGlobals.FlushLevelStreamingOnNextCameraUpdate(UWorld*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void FlushLevelStreamingOnNextCameraUpdate(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalGlobals.FlushLevelStreamingOnNextCameraUpdate(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGlobals.GetCustomOverlayClass()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCustomOverlayClass() const
    {
        return NativeCall<void*>(this, "UPrimalGlobals.GetCustomOverlayClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.GetDayCycleManager(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    static ADayCycleManager* GetDayCycleManager(void* a0)
    {
        return NativeCall<ADayCycleManager*, void*>(nullptr, "UPrimalGlobals.GetDayCycleManager(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.GetRagdollKinematicActor(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    static AStaticMeshActor* GetRagdollKinematicActor(void* a0)
    {
        return NativeCall<AStaticMeshActor*, void*>(nullptr, "UPrimalGlobals.GetRagdollKinematicActor(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.GetSOTFNotificationManager(UWorld*)
    // endereco: cache_pdb_25090264
    static ASOTFNotification* GetSOTFNotificationManager(void* a0)
    {
        return NativeCall<ASOTFNotification*, void*>(nullptr, "UPrimalGlobals.GetSOTFNotificationManager(UWorld*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGlobals.GetShooterPlayerCameraManager(UWorld*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* GetShooterPlayerCameraManager(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "UPrimalGlobals.GetShooterPlayerCameraManager(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.IsAudibleSimple(UAudioComponent*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static bool IsAudibleSimple(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UPrimalGlobals.IsAudibleSimple(UAudioComponent*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.LoadNextTick(UWorld*,bool)
    // endereco: casamento de bytes com a build de referencia
    void LoadNextTick(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalGlobals.LoadNextTick(UWorld*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.OnConfirmationDialogClosed(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnConfirmationDialogClosed(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalGlobals.OnConfirmationDialogClosed(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGlobals.ShowConfirmationDialog(FString&,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowConfirmationDialog(const FString& a0, const FString& a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalGlobals.ShowConfirmationDialog(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowConfirmationDialog(FString* a0, FString* a1, bool a2) const
    { return ShowConfirmationDialog(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.SimpleTeleportTo(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    static bool SimpleTeleportTo(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UPrimalGlobals.SimpleTeleportTo(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGlobals.UpdateOfflineFonts()
    // endereco: casamento de bytes com a build de referencia
    void UpdateOfflineFonts() const
    {
        NativeCall<void>(this, "UPrimalGlobals.UpdateOfflineFonts()");
    }

    BrzCampoPonteiro AlphaMissionColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.AlphaMissionColor")); }
    UPrimalAssets*& AssetsField() const
    { return *GetNativePointerField<UPrimalAssets**>(this, "UPrimalGlobals.Assets"); }
    BrzCampoPonteiro BetaMissionColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.BetaMissionColor")); }
    UFont*& BigFont_OfflineField() const
    { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.BigFont_Offline"); }
    BrzCampoPonteiro CachedDBsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.CachedDBs")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +32, medido na build 25090264
    //  (offset absoluto medido: 0x280; confianca media)
    void*& CompletedDialogField() const
    { return BrzCampoAncorado<void*>(this, "TriggerEffectLibrary", 32); }
    TArray<USoundClass*>& CoreSoundClassesField() const
    { return *GetNativePointerField<TArray<USoundClass*>*>(this, "UPrimalGlobals.CoreSoundClasses"); }
    FString& CreditStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalGlobals.CreditString"); }
    BrzCampoPonteiro CustomOverlayClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.CustomOverlayClass")); }
    BrzCampoPonteiro DefaultHarvestBushClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DefaultHarvestBushClass")); }
    BrzCampoPonteiro DefaultHarvestTreeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DefaultHarvestTreeClass")); }
    BrzCampoPonteiro DefaultOpenColorIODisplayConfigurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DefaultOpenColorIODisplayConfiguration")); }
    UMaterialInterface*& DefaultRenderTargetMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGlobals.DefaultRenderTargetMaterial"); }
    BrzCampoPonteiro DefaultReplicationGraphField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DefaultReplicationGraph")); }
    BrzCampoPonteiro DiscordConversationSceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DiscordConversationSceneTemplate")); }
    BrzCampoPonteiro DiscordFriendsSceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DiscordFriendsSceneTemplate")); }
    BrzCampoPonteiro DiscordFriendsVisualDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DiscordFriendsVisualData")); }
    BrzCampoPonteiro DiscordNotificationSceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.DiscordNotificationSceneTemplate")); }
    TArray<UObject*>& ExtraResourcesField() const
    { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGlobals.ExtraResources"); }
    BrzCampoPonteiro GammaMissionColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.GammaMissionColor")); }
    BrzCampoPonteiro GlobalGenericConfirmationDialogField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.GlobalGenericConfirmationDialog")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +16, medido na build 25090264
    //  (offset absoluto medido: 0x270; confianca media)
    unsigned long long& LoadedTotalConversionField() const
    { return BrzCampoAncorado<unsigned long long>(this, "TriggerEffectLibrary", 16); }
    BrzCampoPonteiro MissionCompleteMultiUseWheelTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.MissionCompleteMultiUseWheelTextColor")); }
    BrzCampoPonteiro ModBrowserManagementActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.ModBrowserManagementActor")); }
    UFont*& NormalFont_OfflineField() const
    { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.NormalFont_Offline"); }
    BrzCampoPonteiro OfflineFontArrayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.OfflineFontArray")); }
    USoundClass*& PS5GamepadHandsSoundClassField() const
    { return *GetNativePointerField<USoundClass**>(this, "UPrimalGlobals.PS5GamepadHandsSoundClass"); }
    USoundClass*& PS5GamepadSoundClassField() const
    { return *GetNativePointerField<USoundClass**>(this, "UPrimalGlobals.PS5GamepadSoundClass"); }
    TObjectPtr<USoundSubmix>& PS5GamepadSubmixField() const
    { return *GetNativePointerField<TObjectPtr<USoundSubmix>*>(this, "UPrimalGlobals.PS5GamepadSubmix"); }
    BrzCampoPonteiro PassivePrimalGameDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.PassivePrimalGameData")); }
    UPrimalGameData*& PrimalGameDataField() const
    { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameData"); }
    BrzCampoPonteiro PrimalGameDataAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.PrimalGameDataAsset")); }
    BrzCampoPonteiro PrimalGameDataAssetExtendedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.PrimalGameDataAssetExtended")); }
    UPrimalGameData*& PrimalGameDataOverrideField() const
    { return *GetNativePointerField<UPrimalGameData**>(this, "UPrimalGlobals.PrimalGameDataOverride"); }
    BrzCampoPonteiro RagdollKinematicActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.RagdollKinematicActorClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +24, medido na build 25090264
    //  (offset absoluto medido: 0x278; confianca media)
    int& SavingFilesCounterField() const
    { return BrzCampoAncorado<int>(this, "TriggerEffectLibrary", 24); }
    UFont*& SmallFont_OfflineField() const
    { return *GetNativePointerField<UFont**>(this, "UPrimalGlobals.SmallFont_Offline"); }
    BrzCampoPonteiro SpawnMenuUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobals.SpawnMenuUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +48, medido na build 25090264
    //  (offset absoluto medido: 0x290; confianca media)
    void*& StreamableManagerField() const
    { return BrzCampoAncorado<void*>(this, "TriggerEffectLibrary", 48); }
    UTriggerEffectLibrary*& TriggerEffectLibraryField() const
    { return *GetNativePointerField<UTriggerEffectLibrary**>(this, "UPrimalGlobals.TriggerEffectLibrary"); }
    TArray<void*>& UIOnlyShowMapFileNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGlobals.UIOnlyShowMapFileNames"); }
    TArray<void*>& UIOnlyShowModIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGlobals.UIOnlyShowModIDs"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +8, medido na build 25090264
    //  (offset absoluto medido: 0x268; confianca media)
    void*& UseLangOfflineField() const
    { return BrzCampoAncorado<void*>(this, "TriggerEffectLibrary", 8); }
    UMaterialInstanceConstant*& VertexVizField() const
    { return *GetNativePointerField<UMaterialInstanceConstant**>(this, "UPrimalGlobals.VertexViz"); }
    bool& bAllowNonDedicatedHostField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowNonDedicatedHost"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +11, medido na build 25090264
    //  (offset absoluto medido: 0x26B; confianca media)
    bool& bContentStrippedForDedicatedField() const
    { return BrzCampoAncorado<bool>(this, "TriggerEffectLibrary", 11); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +9, medido na build 25090264
    //  (offset absoluto medido: 0x269; confianca media)
    bool& bGameMediaLoadedField() const
    { return BrzCampoAncorado<bool>(this, "TriggerEffectLibrary", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TriggerEffectLibrary` +10, medido na build 25090264
    //  (offset absoluto medido: 0x26A; confianca media)
    void*& bStartedAsyncLoadField() const
    { return BrzCampoAncorado<void*>(this, "TriggerEffectLibrary", 10); }
    BitFieldValue<bool, unsigned __int32> bAllowNonDedicatedHost()
    { return { (void*)this, "bAllowNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSingleplayer()
    { return { (void*)this, "bAllowSingleplayer" }; }
    BitFieldValue<bool, unsigned __int32> bTotalConversionShowUnofficialServers()
    { return { (void*)this, "bTotalConversionShowUnofficialServers" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALGLOBALS_H
