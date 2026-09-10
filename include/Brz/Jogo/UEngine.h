// ==========================================================================
//  UEngine — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UENGINE_H
#define BRZ_SDK_JOGO_UENGINE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APlayerController;
struct UFont;
struct UGameUserSettings;
struct ULocalPlayer;
struct UMaterial;
struct UMaterialInstanceDynamic;
struct UNetDriver;
struct UObject;
struct UPhysicalMaterial;
struct UTexture;
struct UTexture2D;
struct UWorld;

#include "UObject.h"

struct UEngine : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UEngine"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.AddNewPendingStreamingLevel(UWorld*,FName,bool,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNewPendingStreamingLevel(void* a0, unsigned long long a1, bool a2, bool a3, int a4) const
    {
        return NativeCall<void*, void*, unsigned long long, bool, bool, int>(this, "UEngine.AddNewPendingStreamingLevel(UWorld*,FName,bool,bool,int)", a0, a1, a2, a3, a4);
    }

    // dump_sobre_sdk_287a0
    //   UEngine.AddPerformanceDataConsumer(TSharedPtr<IPerformanceDataConsumer,1>)
    // endereco: casamento de bytes com a build de referencia
    static void AddPerformanceDataConsumer(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UEngine.AddPerformanceDataConsumer(TSharedPtr<IPerformanceDataConsumer,1>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UEngine.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.BlockTillLevelStreamingCompleted(UWorld*)
    // endereco: cache_pdb_25090264
    BrzPonteiro BlockTillLevelStreamingCompleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.BlockTillLevelStreamingCompleted(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.BroadcastNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)
    // endereco: casamento de bytes com a build de referencia
    void BroadcastNetworkFailure(void* a0, void* a1, int a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, int, void*>(this, "UEngine.BroadcastNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BroadcastNetworkFailure(void* a0, void* a1, int a2, FString* a3) const
    { BroadcastNetworkFailure(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.BroadcastNetworkLagStateChanged(UWorld*,UNetDriver*,ENetworkLagState::Type)
    // endereco: casamento de bytes com a build de referencia
    void BroadcastNetworkLagStateChanged(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "UEngine.BroadcastNetworkLagStateChanged(UWorld*,UNetDriver*,ENetworkLagState::Type)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.BroadcastTravelFailure(UWorld*,ETravelFailure::Type,FString&)
    // endereco: casamento de bytes com a build de referencia
    void BroadcastTravelFailure(void* a0, int a1, const FString& a2) const
    {
        NativeCall<void, void*, int, void*>(this, "UEngine.BroadcastTravelFailure(UWorld*,ETravelFailure::Type,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BroadcastTravelFailure(void* a0, int a1, FString* a2) const
    { BroadcastTravelFailure(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.Browse(FWorldContext&,FURL,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Browse(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.Browse(FWorldContext&,FURL,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro Browse(void* a0, void* a1, FString* a2) const
    { return Browse(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.BrowseToDefaultMap(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    void BrowseToDefaultMap(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.BrowseToDefaultMap(FWorldContext&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CancelAllPending()
    // endereco: casamento de bytes com a build de referencia
    void CancelAllPending() const
    {
        NativeCall<void>(this, "UEngine.CancelAllPending()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.CancelPending(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CancelPending(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.CancelPending(FWorldContext&)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UEngine.CancelPending(UWorld*,UPendingNetGame*)
    // endereco: casamento de bytes com a build de referencia
    void CancelPending(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UEngine.CancelPending(UWorld*,UPendingNetGame*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CancelPendingMapChange(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    void CancelPendingMapChange(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.CancelPendingMapChange(FWorldContext&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CheckAndHandleStaleWorldObjectReferences(FWorldContext*)
    // endereco: casamento de bytes com a build de referencia
    void CheckAndHandleStaleWorldObjectReferences(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.CheckAndHandleStaleWorldObjectReferences(FWorldContext*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CleanupPackagesToFullyLoad(FWorldContext&,EFullyLoadPackageType,FString&)
    // endereco: casamento de bytes com a build de referencia
    void CleanupPackagesToFullyLoad(void* a0, int a1, const FString& a2) const
    {
        NativeCall<void, void*, int, void*>(this, "UEngine.CleanupPackagesToFullyLoad(FWorldContext&,EFullyLoadPackageType,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void CleanupPackagesToFullyLoad(void* a0, int a1, FString* a2) const
    { CleanupPackagesToFullyLoad(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ClearDebugDisplayProperties()
    // endereco: casamento de bytes com a build de referencia
    void ClearDebugDisplayProperties() const
    {
        NativeCall<void>(this, "UEngine.ClearDebugDisplayProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CommitMapChange(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    bool CommitMapChange(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UEngine.CommitMapChange(FWorldContext&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ConditionalCollectGarbage()
    // endereco: casamento de bytes com a build de referencia
    void ConditionalCollectGarbage() const
    {
        NativeCall<void>(this, "UEngine.ConditionalCollectGarbage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ConditionalCommitMapChange(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    void ConditionalCommitMapChange(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.ConditionalCommitMapChange(FWorldContext&)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UEngine.CopyPropertiesForUnrelatedObjects(UObject*,UObject*,UEngine::FCopyPropertiesForUnrelated
    // endereco: casamento de bytes com a build de referencia
    static void CopyPropertiesForUnrelatedObjects(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UEngine.CopyPropertiesForUnrelatedObjects(UObject*,UObject*,UEngine::FCopyPropertiesForUnrelatedObjectsParams)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CreateGameUserSettings()
    // endereco: casamento de bytes com a build de referencia
    void CreateGameUserSettings() const
    {
        NativeCall<void>(this, "UEngine.CreateGameUserSettings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.CreateNamedNetDriver(UPendingNetGame*,FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateNamedNetDriver(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, unsigned long long, unsigned long long>(this, "UEngine.CreateNamedNetDriver(UPendingNetGame*,FName,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.CreateNetDriver(UWorld*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateNetDriver(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "UEngine.CreateNetDriver(UWorld*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.CreateNewWorldContext(EWorldType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateNewWorldContext(int a0) const
    {
        return NativeCall<void*, int>(this, "UEngine.CreateNewWorldContext(EWorldType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.DelayGarbageCollection()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DelayGarbageCollection() const
    {
        return NativeCall<void*>(this, "UEngine.DelayGarbageCollection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.DestroyNamedNetDriver(UPendingNetGame*,FName)
    // endereco: casamento de bytes com a build de referencia
    void DestroyNamedNetDriver(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "UEngine.DestroyNamedNetDriver(UPendingNetGame*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.DestroyWorldContext(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    void DestroyWorldContext(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.DestroyWorldContext(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.EnableScreenSaver(bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableScreenSaver(bool a0) const
    {
        NativeCall<void, bool>(this, "UEngine.EnableScreenSaver(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.Exec(UWorld*,wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    bool Exec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.Exec(UWorld*,wchar_t*,FOutputDevice&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ExecEngineStat(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecEngineStat(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ExecEngineStat(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.FCopyPropertiesForUnrelatedObjectsParams.FCopyPropertiesForUnrelatedObjectsParams()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro FCopyPropertiesForUnrelatedObjectsParams_FCopyPropertiesForUnrelatedObjectsParams() const
    {
        return NativeCall<void*>(this, "UEngine.FCopyPropertiesForUnrelatedObjectsParams.FCopyPropertiesForUnrelatedObjectsParams()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.FCopyPropertiesForUnrelatedObjectsParams.FCopyPropertiesForUnrelatedObjectsParams(UEngin
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro FCopyPropertiesForUnrelatedObjectsParams_FCopyPropertiesForUnrelatedObjectsParams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.FCopyPropertiesForUnrelatedObjectsParams.FCopyPropertiesForUnrelatedObjectsParams(UEngine::FCopyPropertiesForUnrelatedObjectsParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.FEngineStatFuncs.FEngineStatFuncs(UEngine::FEngineStatFuncs&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FEngineStatFuncs_FEngineStatFuncs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.FEngineStatFuncs.FEngineStatFuncs(UEngine::FEngineStatFuncs&&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.FEngineStatFuncs.~FEngineStatFuncs()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=179+bytes40+grafo=3/3]]
    BrzPonteiro FEngineStatFuncs__FEngineStatFuncs() const
    {
        return NativeCall<void*>(this, "UEngine.FEngineStatFuncs.~FEngineStatFuncs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.FindFirstLocalPlayerFromControllerId(int)
    // endereco: casamento de bytes com a build de referencia
    ULocalPlayer* FindFirstLocalPlayerFromControllerId(int a0) const
    {
        return NativeCall<ULocalPlayer*, int>(this, "UEngine.FindFirstLocalPlayerFromControllerId(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.FindNamedNetDriver(UPendingNetGame*,FName)
    // endereco: casamento de bytes com a build de referencia
    UNetDriver* FindNamedNetDriver(void* a0, unsigned long long a1) const
    {
        return NativeCall<UNetDriver*, void*, unsigned long long>(this, "UEngine.FindNamedNetDriver(UPendingNetGame*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.FinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    void FinishDestroy() const
    {
        NativeCall<void>(this, "UEngine.FinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ForceGarbageCollection(bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceGarbageCollection(bool a0) const
    {
        NativeCall<void, bool>(this, "UEngine.ForceGarbageCollection(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetActiveAudioDevice()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActiveAudioDevice() const
    {
        return NativeCall<void*>(this, "UEngine.GetActiveAudioDevice()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetAllLocalPlayerControllers(TArray<APlayerController*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllLocalPlayerControllers(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UEngine.GetAllLocalPlayerControllers(TArray<APlayerController*,TSizedDefaultAllocator<32>>&)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetAudioDeviceManager()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetAudioDeviceManager() const
    {
        return NativeCall<void*>(this, "UEngine.GetAudioDeviceManager()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetCurrentPlayWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentPlayWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetCurrentPlayWorld(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetDebugLocalPlayer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDebugLocalPlayer() const
    {
        return NativeCall<void*>(this, "UEngine.GetDebugLocalPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetDynamicResolutionCurrentStateInfos(FDynamicResolutionStateInfos&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDynamicResolutionCurrentStateInfos(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetDynamicResolutionCurrentStateInfos(FDynamicResolutionStateInfos&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetEngineSubsystem<UCFCoreSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=6]]
    BrzPonteiro GetEngineSubsystem_UCFCoreSubsystem_() const
    {
        return NativeCall<void*>(this, "UEngine.GetEngineSubsystem<UCFCoreSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetEngineSubsystem<UContentBundleEngineSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetEngineSubsystem_UContentBundleEngineSubsystem_() const
    {
        return NativeCall<void*>(this, "UEngine.GetEngineSubsystem<UContentBundleEngineSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetEngineSubsystem<USentrySubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    BrzPonteiro GetEngineSubsystem_USentrySubsystem_() const
    {
        return NativeCall<void*>(this, "UEngine.GetEngineSubsystem<USentrySubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetEngineSubsystem<USteelShieldSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetEngineSubsystem_USteelShieldSubsystem_() const
    {
        return NativeCall<void*>(this, "UEngine.GetEngineSubsystem<USteelShieldSubsystem>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetEngineSubsystem<UThreadNodeSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetEngineSubsystem_UThreadNodeSubsystem_() const
    {
        return NativeCall<void*>(this, "UEngine.GetEngineSubsystem<UThreadNodeSubsystem>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetFirstGamePlayer(UPendingNetGame*)
    // endereco: casamento de bytes com a build de referencia
    ULocalPlayer* GetFirstGamePlayer(void* a0) const
    {
        return NativeCall<ULocalPlayer*, void*>(this, "UEngine.GetFirstGamePlayer(UPendingNetGame*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetFirstLocalPlayerController(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    APlayerController* GetFirstLocalPlayerController(void* a0) const
    {
        return NativeCall<APlayerController*, void*>(this, "UEngine.GetFirstLocalPlayerController(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetGamePlayers(UGameViewportClient*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=121+bytes40+chamadores=7]]
    BrzPonteiro GetGamePlayers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetGamePlayers(UGameViewportClient*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetGameUserSettings()
    // endereco: casamento de bytes com a build de referencia
    UGameUserSettings* GetGameUserSettings() const
    {
        return NativeCall<UGameUserSettings*>(this, "UEngine.GetGameUserSettings()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetGlobalFunctionCallspace(UFunction*,UObject*,FFrame*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    int GetGlobalFunctionCallspace(void* a0, void* a1, void* a2) const
    {
        return NativeCall<int, void*, void*, void*>(this, "UEngine.GetGlobalFunctionCallspace(UFunction*,UObject*,FFrame*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetIncrementalGCTimePerFrame()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetIncrementalGCTimePerFrame() const
    {
        return NativeCall<void*>(this, "UEngine.GetIncrementalGCTimePerFrame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetLargeFont()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLargeFont() const
    {
        return NativeCall<void*>(this, "UEngine.GetLargeFont()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetLocalPlayerFromControllerId(UGameViewportClient*,int)
    // endereco: casamento de bytes com a build de referencia
    ULocalPlayer* GetLocalPlayerFromControllerId(void* a0, int a1) const
    {
        return NativeCall<ULocalPlayer*, void*, int>(this, "UEngine.GetLocalPlayerFromControllerId(UGameViewportClient*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetLocalPlayerIterator(UGameViewportClient*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLocalPlayerIterator(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetLocalPlayerIterator(UGameViewportClient*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetMainAudioDevice()
    // endereco: casamento de bytes com a build de referencia
    void GetMainAudioDevice(void* retorno) const
    {
        NativeCall<void, void*>(this, "UEngine.GetMainAudioDevice()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetMainAudioDeviceID()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMainAudioDeviceID() const
    {
        return NativeCall<void*>(this, "UEngine.GetMainAudioDeviceID()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetMainAudioDeviceRaw()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMainAudioDeviceRaw() const
    {
        return NativeCall<void*>(this, "UEngine.GetMainAudioDeviceRaw()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetMaxTickRate(float,bool)
    // endereco: casamento de bytes com a build de referencia
    float GetMaxTickRate(float a0, bool a1) const
    {
        return NativeCall<float, float, bool>(this, "UEngine.GetMaxTickRate(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetMediumFont()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMediumFont() const
    {
        return NativeCall<void*>(this, "UEngine.GetMediumFont()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetNetMode(UWorld*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNetMode(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetNetMode(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetNumGamePlayers(UGameViewportClient*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetNumGamePlayers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetNumGamePlayers(UGameViewportClient*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetSeamlessTransitionMapPath()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSeamlessTransitionMapPath() const
    {
        return NativeCall<void*>(this, "UEngine.GetSeamlessTransitionMapPath()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetServerPlatforms()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    BrzPonteiro GetServerPlatforms() const
    {
        return NativeCall<void*>(this, "UEngine.GetServerPlatforms()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetSubtitleFont()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSubtitleFont() const
    {
        return NativeCall<void*>(this, "UEngine.GetSubtitleFont()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetTimeBetweenGarbageCollectionPasses()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    float GetTimeBetweenGarbageCollectionPasses() const
    {
        return NativeCall<float>(this, "UEngine.GetTimeBetweenGarbageCollectionPasses()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetTimeBetweenGarbageCollectionPasses(bool)
    // endereco: casamento de bytes com a build de referencia
    float GetTimeBetweenGarbageCollectionPasses(bool a0) const
    {
        return NativeCall<float, bool>(this, "UEngine.GetTimeBetweenGarbageCollectionPasses(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetTinyFont()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTinyFont() const
    {
        return NativeCall<void*>(this, "UEngine.GetTinyFont()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetWorldContextFromGameViewportChecked(UGameViewportClient*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldContextFromGameViewportChecked(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetWorldContextFromGameViewportChecked(UGameViewportClient*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetWorldContextFromHandle(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetWorldContextFromHandle(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UEngine.GetWorldContextFromHandle(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetWorldContextFromHandleChecked(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldContextFromHandleChecked(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UEngine.GetWorldContextFromHandleChecked(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetWorldContextFromPendingNetGame(UPendingNetGame*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetWorldContextFromPendingNetGame(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetWorldContextFromPendingNetGame(UPendingNetGame*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GetWorldContextFromPendingNetGameNetDriver(UNetDriver*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetWorldContextFromPendingNetGameNetDriver(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetWorldContextFromPendingNetGameNetDriver(UNetDriver*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetWorldContextFromWorld(UWorld*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetWorldContextFromWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetWorldContextFromWorld(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetWorldContextFromWorldChecked(UWorld*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldContextFromWorldChecked(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.GetWorldContextFromWorldChecked(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.GetWorldFromContextObject(UObject*,EGetWorldErrorMode)
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorldFromContextObject(void* a0, bool a1) const
    {
        return NativeCall<UWorld*, void*, bool>(this, "UEngine.GetWorldFromContextObject(UObject*,EGetWorldErrorMode)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.GuardedHTTPResponse(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool,UObject*
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=160+bytes96]]
    BrzPonteiro GuardedHTTPResponse(void* a0, void* a1, bool a2, void* a3, long long a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, bool, void*, long long, void*>(this, "UEngine.GuardedHTTPResponse(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool,UObject*,__int64,FString)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GuardedHTTPResponse(void* a0, void* a1, bool a2, void* a3, long long a4, FString* a5) const
    { return GuardedHTTPResponse(a0, a1, a2, a3, a4, *a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleBrowseToDefaultMapFailure(FWorldContext&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void HandleBrowseToDefaultMapFailure(void* a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UEngine.HandleBrowseToDefaultMapFailure(FWorldContext&,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HandleBrowseToDefaultMapFailure(void* a0, FString* a1, FString* a2) const
    { HandleBrowseToDefaultMapFailure(a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleCeCommand(UWorld*,wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    bool HandleCeCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleCeCommand(UWorld*,wchar_t*,FOutputDevice&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.HandleCrackURLCommand(wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleCrackURLCommand(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UEngine.HandleCrackURLCommand(wchar_t*,FOutputDevice&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleDisconnect(UWorld*,UNetDriver*)
    // endereco: casamento de bytes com a build de referencia
    void HandleDisconnect(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UEngine.HandleDisconnect(UWorld*,UNetDriver*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleDisconnectCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleDisconnectCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleDisconnectCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.HandleGameVerCommand(wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGameVerCommand(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UEngine.HandleGameVerCommand(wchar_t*,FOutputDevice&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)
    // endereco: casamento de bytes com a build de referencia
    void HandleNetworkFailure(void* a0, void* a1, int a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, int, void*>(this, "UEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HandleNetworkFailure(void* a0, void* a1, int a2, FString* a3) const
    { HandleNetworkFailure(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleNetworkFailure_NotifyGameInstance(UWorld*,UNetDriver*,ENetworkFailure::Type)
    // endereco: casamento de bytes com a build de referencia
    void HandleNetworkFailure_NotifyGameInstance(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "UEngine.HandleNetworkFailure_NotifyGameInstance(UWorld*,UNetDriver*,ENetworkFailure::Type)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleOpenCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=339+bytes40+grafo=12/12]]
    bool HandleOpenCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleOpenCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleReconnectCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleReconnectCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleReconnectCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleServerTravelCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleServerTravelCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleServerTravelCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleStreamMapCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleStreamMapCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleStreamMapCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleTravelCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=345+bytes40+grafo=12/12]]
    bool HandleTravelCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UEngine.HandleTravelCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleTravelFailure(UWorld*,ETravelFailure::Type,FString&)
    // endereco: casamento de bytes com a build de referencia
    void HandleTravelFailure(void* a0, int a1, const FString& a2) const
    {
        NativeCall<void, void*, int, void*>(this, "UEngine.HandleTravelFailure(UWorld*,ETravelFailure::Type,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HandleTravelFailure(void* a0, int a1, FString* a2) const
    { HandleTravelFailure(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HandleTravelFailure_NotifyGameInstance(UWorld*,ETravelFailure::Type)
    // endereco: cache_pdb_25090264
    void HandleTravelFailure_NotifyGameInstance(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UEngine.HandleTravelFailure_NotifyGameInstance(UWorld*,ETravelFailure::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.HasMultipleLocalPlayers(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HasMultipleLocalPlayers(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UEngine.HasMultipleLocalPlayers(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.Init(IEngineLoop*)
    // endereco: casamento de bytes com a build de referencia
    void Init(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.Init(IEngineLoop*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.InitializeAudioDeviceManager()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void InitializeAudioDeviceManager() const
    {
        NativeCall<void>(this, "UEngine.InitializeAudioDeviceManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.InitializeEyeTrackingDevice()
    // endereco: casamento de bytes com a build de referencia
    bool InitializeEyeTrackingDevice() const
    {
        return NativeCall<bool>(this, "UEngine.InitializeEyeTrackingDevice()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.InitializeHMDDevice()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    bool InitializeHMDDevice() const
    {
        return NativeCall<bool>(this, "UEngine.InitializeHMDDevice()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.InitializeObjectReferences()
    // endereco: casamento de bytes com a build de referencia
    void InitializeObjectReferences() const
    {
        NativeCall<void>(this, "UEngine.InitializeObjectReferences()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.InitializePortalServices()
    // endereco: casamento de bytes com a build de referencia
    void InitializePortalServices() const
    {
        NativeCall<void>(this, "UEngine.InitializePortalServices()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.InitializeRunningAverageDeltaTime()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InitializeRunningAverageDeltaTime() const
    {
        NativeCall<void>(this, "UEngine.InitializeRunningAverageDeltaTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.IsInitialized()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsInitialized() const
    {
        return NativeCall<bool>(this, "UEngine.IsInitialized()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.IsPreparingMapChange(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPreparingMapChange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.IsPreparingMapChange(FWorldContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.IsStereoscopic3D(FViewport*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStereoscopic3D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.IsStereoscopic3D(FViewport*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.IsWorldDuplicate(UWorld*const)
    // endereco: casamento de bytes com a build de referencia
    bool IsWorldDuplicate(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UEngine.IsWorldDuplicate(UWorld*const)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.LastURLFromWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LastURLFromWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.LastURLFromWorld(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.LoadBlueNoiseTexture()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadBlueNoiseTexture() const
    {
        return NativeCall<void*>(this, "UEngine.LoadBlueNoiseTexture()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.LoadDefaultBloomTexture()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadDefaultBloomTexture() const
    {
        return NativeCall<void*>(this, "UEngine.LoadDefaultBloomTexture()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.LoadDefaultFilmGrainTexture()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadDefaultFilmGrainTexture() const
    {
        return NativeCall<void*>(this, "UEngine.LoadDefaultFilmGrainTexture()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.LoadGlintTextures()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadGlintTextures() const
    {
        return NativeCall<void*>(this, "UEngine.LoadGlintTextures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.LoadLTCTextures()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadLTCTextures() const
    {
        return NativeCall<void*>(this, "UEngine.LoadLTCTextures()");
    }

    // dump_sobre_sdk_287a0
    //   UEngine.LoadMap(FWorldContext&,FURL,UPendingNetGame*,FString&)
    // endereco: casamento de bytes com a build de referencia
    static char LoadMap(void* a0, void* a1, void* a2, const FString& a3)
    {
        return NativeCall<char, void*, void*, void*, void*>(nullptr, "UEngine.LoadMap(FWorldContext&,FURL,UPendingNetGame*,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static char LoadMap(void* a0, void* a1, void* a2, FString* a3)
    { return LoadMap(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.LoadMapRedrawViewports()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void LoadMapRedrawViewports() const
    {
        NativeCall<void>(this, "UEngine.LoadMapRedrawViewports()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.LoadPackagesFully(UWorld*,EFullyLoadPackageType,FString&)
    // endereco: casamento de bytes com a build de referencia
    void LoadPackagesFully(void* a0, int a1, const FString& a2) const
    {
        NativeCall<void, void*, int, void*>(this, "UEngine.LoadPackagesFully(UWorld*,EFullyLoadPackageType,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void LoadPackagesFully(void* a0, int a1, FString* a2) const
    { LoadPackagesFully(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.LoadSimpleVolumeTextures()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadSimpleVolumeTextures() const
    {
        return NativeCall<void*>(this, "UEngine.LoadSimpleVolumeTextures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.MakeSureMapNameIsValid(FString&)
    // endereco: casamento de bytes com a build de referencia
    bool MakeSureMapNameIsValid(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "UEngine.MakeSureMapNameIsValid(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool MakeSureMapNameIsValid(FString* a0) const
    { return MakeSureMapNameIsValid(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.MovePendingLevel(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    void MovePendingLevel(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.MovePendingLevel(FWorldContext&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.OnExternalUIChange(bool)
    // endereco: cache_pdb_25090264
    void OnExternalUIChange(bool a0) const
    {
        NativeCall<void, bool>(this, "UEngine.OnExternalUIChange(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.OnLostFocusPause(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnLostFocusPause(bool a0) const
    {
        NativeCall<void, bool>(this, "UEngine.OnLostFocusPause(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ParseCommandline()
    // endereco: casamento de bytes com a build de referencia
    void ParseCommandline() const
    {
        NativeCall<void>(this, "UEngine.ParseCommandline()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.PendingNetGameFromWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PendingNetGameFromWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.PendingNetGameFromWorld(UWorld*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UEngine.PerformGarbageCollectionAndCleanupActors(bool)
    // endereco: casamento de bytes com a build de referencia
    void PerformGarbageCollectionAndCleanupActors(bool a0) const
    {
        NativeCall<void, bool>(this, "UEngine.PerformGarbageCollectionAndCleanupActors(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.PreExit()
    // endereco: casamento de bytes com a build de referencia
    void PreExit() const
    {
        NativeCall<void>(this, "UEngine.PreExit()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.PreGarbageCollect()
    // endereco: casamento de bytes com a build de referencia
    static void PreGarbageCollect()
    {
        NativeCall<void>(nullptr, "UEngine.PreGarbageCollect()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.PrepareMapChange(FWorldContext&,TArray<FName,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    bool PrepareMapChange(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UEngine.PrepareMapChange(FWorldContext&,TArray<FName,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.RecordHMDAnalytics()
    // endereco: casamento de bytes com a build de referencia
    void RecordHMDAnalytics() const
    {
        NativeCall<void>(this, "UEngine.RecordHMDAnalytics()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RegisterBeginStreamingPauseRenderingDelegate(TDelegate<void__cdecl(FViewport*)>*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro RegisterBeginStreamingPauseRenderingDelegate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.RegisterBeginStreamingPauseRenderingDelegate(TDelegate<void__cdecl(FViewport*)>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RegisterEndStreamingPauseRenderingDelegate(TDelegate<void__cdecl(void)>*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro RegisterEndStreamingPauseRenderingDelegate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.RegisterEndStreamingPauseRenderingDelegate(TDelegate<void__cdecl(void)>*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ReleaseAudioDeviceManager()
    // endereco: casamento de bytes com a build de referencia
    void ReleaseAudioDeviceManager() const
    {
        NativeCall<void>(this, "UEngine.ReleaseAudioDeviceManager()");
    }

    // dump_sobre_sdk_287a0
    //   UEngine.RemovePerformanceDataConsumer(TSharedPtr<IPerformanceDataConsumer,1>)
    // endereco: casamento de bytes com a build de referencia
    static void RemovePerformanceDataConsumer(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UEngine.RemovePerformanceDataConsumer(TSharedPtr<IPerformanceDataConsumer,1>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderNamedEventsEnabled(FCanvas*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderNamedEventsEnabled(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UEngine.RenderNamedEventsEnabled(FCanvas*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatAI(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TR
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatAI(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatAI(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatColorList(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::M
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatColorList(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatColorList(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatDrawCount(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::M
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatDrawCount(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatDrawCount(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatFPS(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatFPS(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatFPS(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatFrameCounter(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatFrameCounter(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatFrameCounter(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatHitches(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatHitches(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatHitches(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatLevels(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatLevels(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatLevels(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatSummary(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatSummary(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatSummary(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatTimecode(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatTimecode(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatTimecode(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.RenderStatUnit(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenderStatUnit(void* a0, void* a1, void* a2, int a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, void*>(this, "UEngine.RenderStatUnit(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.SeamlessTravelHandlerForWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SeamlessTravelHandlerForWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.SeamlessTravelHandlerForWorld(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetClientTravel(UWorld*,wchar_t*,ETravelType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetClientTravel(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UEngine.SetClientTravel(UWorld*,wchar_t*,ETravelType)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.SetCustomTimeStep(UEngineCustomTimeStep*)
    // endereco: casamento de bytes com a build de referencia
    bool SetCustomTimeStep(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UEngine.SetCustomTimeStep(UEngineCustomTimeStep*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetEngineStat(UWorld*,FCommonViewportClient*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetEngineStat(void* a0, void* a1, const FString& a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "UEngine.SetEngineStat(UWorld*,FCommonViewportClient*,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetEngineStat(void* a0, void* a1, FString* a2, bool a3) const
    { return SetEngineStat(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetFlashIndicatorLatencyMarker(unsigned__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetFlashIndicatorLatencyMarker(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UEngine.SetFlashIndicatorLatencyMarker(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetInputSampleLatencyMarker(unsigned__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=230+grafo=4/4]]
    BrzPonteiro SetInputSampleLatencyMarker(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UEngine.SetInputSampleLatencyMarker(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.SetMaxFPS(float)
    // endereco: casamento de bytes com a build de referencia
    void SetMaxFPS(float a0) const
    {
        NativeCall<void, float>(this, "UEngine.SetMaxFPS(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetShouldCommitPendingMapChange(UWorld*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetShouldCommitPendingMapChange(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UEngine.SetShouldCommitPendingMapChange(UWorld*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetSimulationLatencyMarkerEnd(unsigned__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=230+grafo=4/4]]
    BrzPonteiro SetSimulationLatencyMarkerEnd(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UEngine.SetSimulationLatencyMarkerEnd(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SetSimulationLatencyMarkerStart(unsigned__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=230+grafo=4/4]]
    BrzPonteiro SetSimulationLatencyMarkerStart(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UEngine.SetSimulationLatencyMarkerStart(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.SetTimecodeProvider(UTimecodeProvider*)
    // endereco: casamento de bytes com a build de referencia
    bool SetTimecodeProvider(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UEngine.SetTimecodeProvider(UTimecodeProvider*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ShouldCommitPendingMapChange(UWorld*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldCommitPendingMapChange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.ShouldCommitPendingMapChange(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ShutdownHMD()
    // endereco: casamento de bytes com a build de referencia
    void ShutdownHMD() const
    {
        NativeCall<void>(this, "UEngine.ShutdownHMD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.ShutdownWorldNetDriver(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    void ShutdownWorldNetDriver(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.ShutdownWorldNetDriver(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.SpawnServerActors(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    void SpawnServerActors(void* a0) const
    {
        NativeCall<void, void*>(this, "UEngine.SpawnServerActors(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.StartFPSChart(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartFPSChart(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UEngine.StartFPSChart(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void StartFPSChart(FString* a0, bool a1) const
    { StartFPSChart(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.StopFPSChart(FString&)
    // endereco: casamento de bytes com a build de referencia
    void StopFPSChart(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UEngine.StopFPSChart(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void StopFPSChart(FString* a0) const
    { StopFPSChart(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.SwapControllerId(ULocalPlayer*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SwapControllerId(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UEngine.SwapControllerId(ULocalPlayer*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.TickDeferredCommands()
    // endereco: casamento de bytes com a build de referencia
    void TickDeferredCommands() const
    {
        NativeCall<void>(this, "UEngine.TickDeferredCommands()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.TickPerformanceMonitoring(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickPerformanceMonitoring(float a0) const
    {
        return NativeCall<void*, float>(this, "UEngine.TickPerformanceMonitoring(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.TickWorldTravel(FWorldContext&,float)
    // endereco: casamento de bytes com a build de referencia
    void TickWorldTravel(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "UEngine.TickWorldTravel(FWorldContext&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ToggleStatDetailed(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleStatDetailed(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ToggleStatDetailed(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ToggleStatFPS(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleStatFPS(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ToggleStatFPS(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ToggleStatHitches(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleStatHitches(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ToggleStatHitches(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ToggleStatNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleStatNamedEvents(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ToggleStatNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ToggleStatUnit(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleStatUnit(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ToggleStatUnit(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ToggleStatVerboseNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleStatVerboseNamedEvents(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ToggleStatVerboseNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.TrimMemory()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro TrimMemory() const
    {
        return NativeCall<void*>(this, "UEngine.TrimMemory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.UpdateRunningAverageDeltaTime(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateRunningAverageDeltaTime(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UEngine.UpdateRunningAverageDeltaTime(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.UpdateTimeAndHandleMaxTickRate()
    // endereco: casamento de bytes com a build de referencia
    void UpdateTimeAndHandleMaxTickRate() const
    {
        NativeCall<void>(this, "UEngine.UpdateTimeAndHandleMaxTickRate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.UpdateTimecode()
    // endereco: casamento de bytes com a build de referencia
    void UpdateTimecode() const
    {
        NativeCall<void>(this, "UEngine.UpdateTimecode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.UpdateTransitionType(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTransitionType(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UEngine.UpdateTransitionType(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UEngine.UseSound()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool UseSound() const
    {
        return NativeCall<bool>(this, "UEngine.UseSound()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngine.ValidateHTTPCaller(UObject*,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateHTTPCaller(void* a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UEngine.ValidateHTTPCaller(UObject*,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ValidateHTTPCaller(void* a0, FString* a1, FString* a2) const
    { return ValidateHTTPCaller(a0, *a1, *a2); }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UEngine.CancelPending(UNetDriver*)
    //      (colide com UEngine.CancelPending(FWorldContext&))
    //    UEngine.CreateNamedNetDriver(UWorld*,FName,FName)
    //      (colide com UEngine.CreateNamedNetDriver(UPendingNetGame*,FName,FName))
    //    UEngine.DestroyNamedNetDriver(UWorld*,FName)
    //      (colide com UEngine.DestroyNamedNetDriver(UPendingNetGame*,FName))
    //    UEngine.FindNamedNetDriver(UWorld*,FName)
    //      (colide com UEngine.FindNamedNetDriver(UPendingNetGame*,FName))
    //    UEngine.GetFirstGamePlayer(UWorld*)
    //      (colide com UEngine.GetFirstGamePlayer(UPendingNetGame*))
    //    UEngine.GetGamePlayers(UWorld*)
    //      (colide com UEngine.GetGamePlayers(UGameViewportClient*))
    //    UEngine.GetLocalPlayerFromControllerId(UWorld*,int)
    //      (colide com UEngine.GetLocalPlayerFromControllerId(UGameViewportClient*,int))
    //    UEngine.GetLocalPlayerIterator(UWorld*)
    //      (colide com UEngine.GetLocalPlayerIterator(UGameViewportClient*))
    //    UEngine.GetNumGamePlayers(UWorld*)
    //      (colide com UEngine.GetNumGamePlayers(UGameViewportClient*))

    BrzCampoPonteiro AIControllerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.AIControllerClassName")); }
    TArray<void*>& ActiveClassRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.ActiveClassRedirects"); }
    TArray<void*>& ActiveGameNameRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.ActiveGameNameRedirects"); }
    TArray<void*>& ActivePluginRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.ActivePluginRedirects"); }
    TArray<void*>& ActiveStructRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.ActiveStructRedirects"); }
    TArray<void*>& AdditionalFontNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.AdditionalFontNames"); }
    TArray<void*>& AdditionalFontsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.AdditionalFonts"); }
    TObjectPtr<UMaterial>& ArrowMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ArrowMaterial"); }
    BrzCampoPonteiro ArrowMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.ArrowMaterialName")); }
    TObjectPtr<UMaterialInstanceDynamic>& ArrowMaterialYellowField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ArrowMaterialYellow"); }
    BrzCampoPonteiro AssetManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.AssetManager")); }
    BrzCampoPonteiro AssetManagerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.AssetManagerClassName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +240, medido na build 25090264
    //  (offset absoluto medido: 0xEE8; confianca baixa)
    void*& AudioDeviceManagerField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 240); }
    BrzCampoPonteiro AvoidanceManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.AvoidanceManagerClass")); }
    BrzCampoPonteiro AvoidanceManagerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.AvoidanceManagerClassName")); }
    float& BSPSelectionHighlightIntensityField() const
    { return *GetNativePointerField<float*>(this, "UEngine.BSPSelectionHighlightIntensity"); }
    TObjectPtr<UTexture2D>& BlueNoiseScalarTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.BlueNoiseScalarTexture"); }
    BrzCampoPonteiro BlueNoiseScalarTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.BlueNoiseScalarTextureName")); }
    TObjectPtr<UTexture2D>& BlueNoiseVec2TextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.BlueNoiseVec2Texture"); }
    BrzCampoPonteiro BlueNoiseVec2TextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.BlueNoiseVec2TextureName")); }
    BrzCampoPonteiro C_AddWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_AddWire")); }
    BrzCampoPonteiro C_BSPCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_BSPCollision")); }
    BrzCampoPonteiro C_BrushShapeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_BrushShape")); }
    BrzCampoPonteiro C_BrushWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_BrushWire")); }
    BrzCampoPonteiro C_NonSolidWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_NonSolidWire")); }
    BrzCampoPonteiro C_OrthoBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_OrthoBackground")); }
    BrzCampoPonteiro C_ScaleBoxHiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_ScaleBoxHi")); }
    BrzCampoPonteiro C_SemiSolidWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_SemiSolidWire")); }
    BrzCampoPonteiro C_SubtractWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_SubtractWire")); }
    BrzCampoPonteiro C_VolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_Volume")); }
    BrzCampoPonteiro C_VolumeCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_VolumeCollision")); }
    BrzCampoPonteiro C_WireBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_WireBackground")); }
    BrzCampoPonteiro C_WorldBoxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.C_WorldBox")); }
    float& CameraRotationThresholdField() const
    { return *GetNativePointerField<float*>(this, "UEngine.CameraRotationThreshold"); }
    float& CameraTranslationThresholdField() const
    { return *GetNativePointerField<float*>(this, "UEngine.CameraTranslationThreshold"); }
    BrzCampoPonteiro ConsoleClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.ConsoleClass")); }
    BrzCampoPonteiro ConsoleClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.ConsoleClassName")); }
    TObjectPtr<UMaterial>& ConstraintLimitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ConstraintLimitMaterial"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialPrismaticField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialPrismatic"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialX"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXAxisField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialXAxis"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialY"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYAxisField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialYAxis"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialZ"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZAxisField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialZAxis"); }
    BrzCampoPonteiro CustomTimeStepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.CustomTimeStep")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomTimeStep` +8, medido na build 25090264
    //  (offset absoluto medido: 0xC28; confianca alta)
    void*& CustomTimeStepChangedEventField() const
    { return BrzCampoAncorado<void*>(this, "CustomTimeStep", 8); }
    BrzCampoPonteiro CustomTimeStepClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.CustomTimeStepClassName")); }
    BrzCampoPonteiro DebugEditorMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DebugEditorMaterialName")); }
    TObjectPtr<UMaterial>& DebugMeshMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.DebugMeshMaterial"); }
    BrzCampoPonteiro DebugMeshMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DebugMeshMaterialName")); }
    TObjectPtr<UTexture2D>& DefaultBSPVertexTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBSPVertexTexture"); }
    BrzCampoPonteiro DefaultBSPVertexTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultBSPVertexTextureName")); }
    TObjectPtr<UTexture2D>& DefaultBloomKernelTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBloomKernelTexture"); }
    BrzCampoPonteiro DefaultBloomKernelTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultBloomKernelTextureName")); }
    BrzCampoPonteiro DefaultBlueprintBaseClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultBlueprintBaseClassName")); }
    TObjectPtr<UTexture2D>& DefaultBokehTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBokehTexture"); }
    BrzCampoPonteiro DefaultBokehTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultBokehTextureName")); }
    TObjectPtr<UPhysicalMaterial>& DefaultDestructiblePhysMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UEngine.DefaultDestructiblePhysMaterial"); }
    BrzCampoPonteiro DefaultDestructiblePhysMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultDestructiblePhysMaterialName")); }
    TObjectPtr<UTexture>& DefaultDiffuseTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UEngine.DefaultDiffuseTexture"); }
    BrzCampoPonteiro DefaultDiffuseTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultDiffuseTextureName")); }
    TObjectPtr<UTexture2D>& DefaultFilmGrainTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultFilmGrainTexture"); }
    BrzCampoPonteiro DefaultFilmGrainTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultFilmGrainTextureName")); }
    TObjectPtr<UPhysicalMaterial>& DefaultPhysMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UEngine.DefaultPhysMaterial"); }
    BrzCampoPonteiro DefaultPhysMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultPhysMaterialName")); }
    BrzCampoPonteiro DefaultSelectedMaterialColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultSelectedMaterialColor")); }
    TObjectPtr<UTexture2D>& DefaultTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultTexture"); }
    BrzCampoPonteiro DefaultTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DefaultTextureName")); }
    TArray<void*>& DeferredCommandsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.DeferredCommands"); }
    BrzCampoPonteiro DiffuseEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DiffuseEnergyTexture")); }
    BrzCampoPonteiro DiffuseEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.DiffuseEnergyTextureName")); }
    float& DisplayGammaField() const
    { return *GetNativePointerField<float*>(this, "UEngine.DisplayGamma"); }
    TObjectPtr<UMaterial>& EmissiveMeshMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.EmissiveMeshMaterial"); }
    BrzCampoPonteiro EmissiveMeshMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.EmissiveMeshMaterialName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightMapDensityTextureName` +32, medido na build 25090264
    //  (offset absoluto medido: 0xBD8; confianca alta)
    void*& EngineLoopField() const
    { return BrzCampoAncorado<void*>(this, "LightMapDensityTextureName", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextWorldContextHandle` +200, medido na build 25090264
    //  (offset absoluto medido: 0x11B8; confianca baixa)
    void*& EngineStatsField() const
    { return BrzCampoAncorado<void*>(this, "NextWorldContextHandle", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextWorldContextHandle` +8, medido na build 25090264
    //  (offset absoluto medido: 0x10F8; confianca media)
    void*& EngineSubsystemCollectionField() const
    { return BrzCampoAncorado<void*>(this, "NextWorldContextHandle", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextWorldContextHandle` +216, medido na build 25090264
    //  (offset absoluto medido: 0x11C8; confianca baixa)
    void*& ErrorsAndWarningsCollectorField() const
    { return BrzCampoAncorado<void*>(this, "NextWorldContextHandle", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +416, medido na build 25090264
    //  (offset absoluto medido: 0xF98; confianca baixa)
    void*& EyeTrackingDeviceField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 416); }
    float& FixedFrameRateField() const
    { return *GetNativePointerField<float*>(this, "UEngine.FixedFrameRate"); }
    BrzCampoPonteiro GGXLTCAmpTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXLTCAmpTexture")); }
    BrzCampoPonteiro GGXLTCAmpTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXLTCAmpTextureName")); }
    BrzCampoPonteiro GGXLTCMatTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXLTCMatTexture")); }
    BrzCampoPonteiro GGXLTCMatTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXLTCMatTextureName")); }
    BrzCampoPonteiro GGXReflectionEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXReflectionEnergyTexture")); }
    BrzCampoPonteiro GGXReflectionEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXReflectionEnergyTextureName")); }
    BrzCampoPonteiro GGXTransmissionEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXTransmissionEnergyTexture")); }
    BrzCampoPonteiro GGXTransmissionEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GGXTransmissionEnergyTextureName")); }
    BrzCampoPonteiro GPUSkinCacheVisualizationExcludedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GPUSkinCacheVisualizationExcludedColor")); }
    BrzCampoPonteiro GPUSkinCacheVisualizationHighMemoryColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GPUSkinCacheVisualizationHighMemoryColor")); }
    float& GPUSkinCacheVisualizationHighMemoryThresholdInMBField() const
    { return *GetNativePointerField<float*>(this, "UEngine.GPUSkinCacheVisualizationHighMemoryThresholdInMB"); }
    BrzCampoPonteiro GPUSkinCacheVisualizationIncludedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GPUSkinCacheVisualizationIncludedColor")); }
    BrzCampoPonteiro GPUSkinCacheVisualizationLowMemoryColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GPUSkinCacheVisualizationLowMemoryColor")); }
    float& GPUSkinCacheVisualizationLowMemoryThresholdInMBField() const
    { return *GetNativePointerField<float*>(this, "UEngine.GPUSkinCacheVisualizationLowMemoryThresholdInMB"); }
    BrzCampoPonteiro GPUSkinCacheVisualizationMidMemoryColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GPUSkinCacheVisualizationMidMemoryColor")); }
    TArray<void*>& GPUSkinCacheVisualizationRayTracingLODOffsetColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.GPUSkinCacheVisualizationRayTracingLODOffsetColors"); }
    BrzCampoPonteiro GPUSkinCacheVisualizationRecomputeTangentsColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GPUSkinCacheVisualizationRecomputeTangentsColor")); }
    BrzCampoPonteiro GameScreenshotSaveDirectoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameScreenshotSaveDirectory")); }
    TObjectPtr<UObject>& GameSingletonField() const
    { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "UEngine.GameSingleton"); }
    BrzCampoPonteiro GameSingletonClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameSingletonClassName")); }
    TObjectPtr<UGameUserSettings>& GameUserSettingsField() const
    { return *GetNativePointerField<TObjectPtr<UGameUserSettings>*>(this, "UEngine.GameUserSettings"); }
    BrzCampoPonteiro GameUserSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameUserSettingsClass")); }
    BrzCampoPonteiro GameUserSettingsClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameUserSettingsClassName")); }
    BrzCampoPonteiro GameViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameViewport")); }
    BrzCampoPonteiro GameViewportClientClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameViewportClientClass")); }
    BrzCampoPonteiro GameViewportClientClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GameViewportClientClassName")); }
    float& GenerateDefaultTimecodeFrameDelayField() const
    { return *GetNativePointerField<float*>(this, "UEngine.GenerateDefaultTimecodeFrameDelay"); }
    BrzCampoPonteiro GenerateDefaultTimecodeFrameRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GenerateDefaultTimecodeFrameRate")); }
    BrzCampoPonteiro GlintTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GlintTexture")); }
    BrzCampoPonteiro GlintTexture2Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GlintTexture2")); }
    BrzCampoPonteiro GlintTexture2NameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GlintTexture2Name")); }
    BrzCampoPonteiro GlintTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GlintTextureName")); }
    unsigned int& GlobalNetTravelCountField() const
    { return *GetNativePointerField<unsigned int*>(this, "UEngine.GlobalNetTravelCount"); }
    BrzCampoPonteiro GrassSliceColorationColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.GrassSliceColorationColors")); }
    TArray<void*>& HLODColorationColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.HLODColorationColors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextWorldContextHandle` +224, medido na build 25090264
    //  (offset absoluto medido: 0x11D0; confianca baixa)
    void*& HandleScreenshotCapturedDelegateHandleField() const
    { return BrzCampoAncorado<void*>(this, "NextWorldContextHandle", 224); }
    TObjectPtr<UTexture2D>& HighFrequencyNoiseTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.HighFrequencyNoiseTexture"); }
    BrzCampoPonteiro HighFrequencyNoiseTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.HighFrequencyNoiseTextureName")); }
    float& IdealLightMapDensityField() const
    { return *GetNativePointerField<float*>(this, "UEngine.IdealLightMapDensity"); }
    TObjectPtr<UMaterial>& InvalidLightmapSettingsMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.InvalidLightmapSettingsMaterial"); }
    BrzCampoPonteiro InvalidLightmapSettingsMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.InvalidLightmapSettingsMaterialName")); }
    BrzCampoPonteiro IrisNetDriverConfigsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.IrisNetDriverConfigs")); }
    TArray<void*>& LODColorationColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.LODColorationColors"); }
    TObjectPtr<UFont>& LargeFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.LargeFont"); }
    BrzCampoPonteiro LargeFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LargeFontName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +224, medido na build 25090264
    //  (offset absoluto medido: 0xED8; confianca baixa)
    unsigned long long& LastGCFrameField() const
    { return BrzCampoAncorado<unsigned long long>(this, "SelectionHighlightIntensityBillboards", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NextWorldContextHandle` +232, medido na build 25090264
    //  (offset absoluto medido: 0x11D8; confianca baixa)
    FString& LastModDownloadTextField() const
    { return BrzCampoAncorado<FString>(this, "NextWorldContextHandle", 232); }
    TObjectPtr<UMaterial>& LevelColorationLitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LevelColorationLitMaterial"); }
    FString& LevelColorationLitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.LevelColorationLitMaterialName"); }
    TObjectPtr<UMaterial>& LevelColorationUnlitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LevelColorationUnlitMaterial"); }
    FString& LevelColorationUnlitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.LevelColorationUnlitMaterialName"); }
    BrzCampoPonteiro LevelScriptActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LevelScriptActorClass")); }
    BrzCampoPonteiro LevelScriptActorClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LevelScriptActorClassName")); }
    TArray<void*>& LightComplexityColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.LightComplexityColors"); }
    BrzCampoPonteiro LightMapDensitySelectedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LightMapDensitySelectedColor")); }
    TObjectPtr<UTexture2D>& LightMapDensityTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.LightMapDensityTexture"); }
    BrzCampoPonteiro LightMapDensityTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LightMapDensityTextureName")); }
    BrzCampoPonteiro LightMapDensityVertexMappedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LightMapDensityVertexMappedColor")); }
    BrzCampoPonteiro LightingOnlyBrightnessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LightingOnlyBrightness")); }
    TObjectPtr<UMaterial>& LightingTexelDensityMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LightingTexelDensityMaterial"); }
    FString& LightingTexelDensityNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.LightingTexelDensityName"); }
    BrzCampoPonteiro LocalPlayerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LocalPlayerClass")); }
    BrzCampoPonteiro LocalPlayerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LocalPlayerClassName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +248, medido na build 25090264
    //  (offset absoluto medido: 0xEF0; confianca baixa)
    void*& MainAudioDeviceHandleField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 248); }
    float& MaxES3PixelShaderAdditiveComplexityCountField() const
    { return *GetNativePointerField<float*>(this, "UEngine.MaxES3PixelShaderAdditiveComplexityCount"); }
    float& MaxLightMapDensityField() const
    { return *GetNativePointerField<float*>(this, "UEngine.MaxLightMapDensity"); }
    float& MaxOcclusionPixelsFractionField() const
    { return *GetNativePointerField<float*>(this, "UEngine.MaxOcclusionPixelsFraction"); }
    int& MaxParticleResizeField() const
    { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResize"); }
    int& MaxParticleResizeWarnField() const
    { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResizeWarn"); }
    float& MaxPixelShaderAdditiveComplexityCountField() const
    { return *GetNativePointerField<float*>(this, "UEngine.MaxPixelShaderAdditiveComplexityCount"); }
    int& MaximumLoopIterationCountField() const
    { return *GetNativePointerField<int*>(this, "UEngine.MaximumLoopIterationCount"); }
    TObjectPtr<UFont>& MediumFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.MediumFont"); }
    BrzCampoPonteiro MediumFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.MediumFontName")); }
    //  no cache antigo este campo se chamava MessagesToCountMap.
    //  nesta build ele e' `SmallFontName` — resolve por NOME.
    BrzCampoPonteiro MessagesToCountMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SmallFontName")); }
    float& MinDesiredFrameRateField() const
    { return *GetNativePointerField<float*>(this, "UEngine.MinDesiredFrameRate"); }
    float& MinLightMapDensityField() const
    { return *GetNativePointerField<float*>(this, "UEngine.MinLightMapDensity"); }
    TObjectPtr<UTexture2D>& MiniFontTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.MiniFontTexture"); }
    BrzCampoPonteiro MiniFontTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.MiniFontTextureName")); }
    TObjectPtr<UMaterial>& NaniteHiddenSectionMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.NaniteHiddenSectionMaterial"); }
    FString& NaniteHiddenSectionMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.NaniteHiddenSectionMaterialName"); }
    BrzCampoPonteiro NavigationSystemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.NavigationSystemClass")); }
    BrzCampoPonteiro NavigationSystemClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.NavigationSystemClassName")); }
    BrzCampoPonteiro NavigationSystemConfigClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.NavigationSystemConfigClass")); }
    BrzCampoPonteiro NavigationSystemConfigClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.NavigationSystemConfigClassName")); }
    float& NearClipPlaneField() const
    { return *GetNativePointerField<float*>(this, "UEngine.NearClipPlane"); }
    float& NetClientTicksPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UEngine.NetClientTicksPerSecond"); }
    TArray<void*>& NetDriverDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.NetDriverDefinitions"); }
    float& NetErrorLogIntervalField() const
    { return *GetNativePointerField<float*>(this, "UEngine.NetErrorLogInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +192, medido na build 25090264
    //  (offset absoluto medido: 0xEB8; confianca baixa)
    void*& NetworkDDoSEscalationEventField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +144, medido na build 25090264
    //  (offset absoluto medido: 0xE88; confianca baixa)
    void*& NetworkFailureEventField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +168, medido na build 25090264
    //  (offset absoluto medido: 0xEA0; confianca baixa)
    void*& NetworkLagStateChangedEventField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 168); }
    float& NetworkStressTestClientMode_MaxFPSField() const
    { return *GetNativePointerField<float*>(this, "UEngine.NetworkStressTestClientMode_MaxFPS"); }
    float& NetworkStressTestClientMode_MinFPSField() const
    { return *GetNativePointerField<float*>(this, "UEngine.NetworkStressTestClientMode_MinFPS"); }
    int& NextWorldContextHandleField() const
    { return *GetNativePointerField<int*>(this, "UEngine.NextWorldContextHandle"); }
    int& NumPawnsAllowedToBeSpawnedInAFrameField() const
    { return *GetNativePointerField<int*>(this, "UEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +432, medido na build 25090264
    //  (offset absoluto medido: 0xFA8; confianca baixa)
    void*& OnHitchDetectedDelegateField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 432); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetErrorLogInterval` +16, medido na build 25090264
    //  (offset absoluto medido: 0x10C0; confianca alta)
    void*& OnOverrideBrowseURLField() const
    { return BrzCampoAncorado<void*>(this, "NetErrorLogInterval", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetErrorLogInterval` +32, medido na build 25090264
    //  (offset absoluto medido: 0x10D0; confianca alta)
    void*& OnOverridePendingNetGameUpdateField() const
    { return BrzCampoAncorado<void*>(this, "NetErrorLogInterval", 32); }
    FString& ParticleEventManagerClassPathField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.ParticleEventManagerClassPath"); }
    TArray<void*>& PendingDroppedNotesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.PendingDroppedNotes"); }
    BrzCampoPonteiro PhysicsCollisionHandlerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.PhysicsCollisionHandlerClass")); }
    BrzCampoPonteiro PhysicsCollisionHandlerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.PhysicsCollisionHandlerClassName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +456, medido na build 25090264
    //  (offset absoluto medido: 0xFC0; confianca baixa)
    void*& PortalRpcClientField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 456); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +472, medido na build 25090264
    //  (offset absoluto medido: 0xFD0; confianca baixa)
    void*& PortalRpcLocatorField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 472); }
    TObjectPtr<UTexture2D>& PreIntegratedSkinBRDFTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.PreIntegratedSkinBRDFTexture"); }
    BrzCampoPonteiro PreIntegratedSkinBRDFTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.PreIntegratedSkinBRDFTextureName")); }
    TObjectPtr<UMaterial>& PreviewShadowsIndicatorMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.PreviewShadowsIndicatorMaterial"); }
    BrzCampoPonteiro PreviewShadowsIndicatorMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.PreviewShadowsIndicatorMaterialName")); }
    float& PrimitiveProbablyVisibleTimeField() const
    { return *GetNativePointerField<float*>(this, "UEngine.PrimitiveProbablyVisibleTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +272, medido na build 25090264
    //  (offset absoluto medido: 0xF08; confianca baixa)
    TArray<void*>& PriorityScreenMessagesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "SelectionHighlightIntensityBillboards", 272); }
    TArray<void*>& QuadComplexityColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.QuadComplexityColors"); }
    TObjectPtr<UMaterial>& RemoveSurfaceMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.RemoveSurfaceMaterial"); }
    BrzCampoPonteiro RemoveSurfaceMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.RemoveSurfaceMaterialName")); }
    //  no cache antigo este campo se chamava RenderFunc.
    //  nesta build ele e' `TinyFont` — resolve por NOME.
    BrzCampoPonteiro RenderFuncField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.TinyFont")); }
    float& RenderLightMapDensityColorScaleField() const
    { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityColorScale"); }
    float& RenderLightMapDensityGrayscaleScaleField() const
    { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityGrayscaleScale"); }
    TArray<void*>& RuntimeServerActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.RuntimeServerActors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +288, medido na build 25090264
    //  (offset absoluto medido: 0xF18; confianca baixa)
    void*& ScreenMessagesField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 288); }
    int& ScreenSaverInhibitorSemaphoreField() const
    { return *GetNativePointerField<int*>(this, "UEngine.ScreenSaverInhibitorSemaphore"); }
    BrzCampoPonteiro SelectedMaterialColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SelectedMaterialColor")); }
    BrzCampoPonteiro SelectedMaterialColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SelectedMaterialColorOverride")); }
    float& SelectionHighlightIntensityField() const
    { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensity"); }
    float& SelectionHighlightIntensityBillboardsField() const
    { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensityBillboards"); }
    BrzCampoPonteiro SelectionOutlineColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SelectionOutlineColor")); }
    TArray<void*>& ServerActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.ServerActors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +488, medido na build 25090264
    //  (offset absoluto medido: 0xFE0; confianca baixa)
    void*& ServiceDependenciesField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 488); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +504, medido na build 25090264
    //  (offset absoluto medido: 0xFF0; confianca baixa)
    void*& ServiceLocatorField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 504); }
    TObjectPtr<UMaterial>& ShadedLevelColorationLitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ShadedLevelColorationLitMaterial"); }
    FString& ShadedLevelColorationLitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.ShadedLevelColorationLitMaterialName"); }
    TObjectPtr<UMaterial>& ShadedLevelColorationUnlitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ShadedLevelColorationUnlitMaterial"); }
    FString& ShadedLevelColorationUnlitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.ShadedLevelColorationUnlitMaterialName"); }
    TArray<void*>& ShaderComplexityColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.ShaderComplexityColors"); }
    BrzCampoPonteiro SheenEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SheenEnergyTexture")); }
    BrzCampoPonteiro SheenEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SheenEnergyTextureName")); }
    BrzCampoPonteiro SheenLTCTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SheenLTCTexture")); }
    BrzCampoPonteiro SheenLTCTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SheenLTCTextureName")); }
    BrzCampoPonteiro SheenLegacyEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SheenLegacyEnergyTextureName")); }
    BrzCampoPonteiro SimpleVolumeEnvTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SimpleVolumeEnvTexture")); }
    BrzCampoPonteiro SimpleVolumeEnvTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SimpleVolumeEnvTextureName")); }
    BrzCampoPonteiro SimpleVolumeTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SimpleVolumeTexture")); }
    BrzCampoPonteiro SimpleVolumeTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SimpleVolumeTextureName")); }
    TObjectPtr<UFont>& SmallFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.SmallFont"); }
    BrzCampoPonteiro SmallFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SmallFontName")); }
    BrzCampoPonteiro SmoothedFrameRateRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SmoothedFrameRateRange")); }
    TArray<void*>& StatColorMappingsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.StatColorMappings"); }
    TArray<void*>& StationaryLightOverlapColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.StationaryLightOverlapColors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +368, medido na build 25090264
    //  (offset absoluto medido: 0xF68; confianca baixa)
    void*& StereoRenderingDeviceField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 368); }
    TArray<void*>& StreamingAccuracyColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UEngine.StreamingAccuracyColors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `C_BrushShape` +4, medido na build 25090264
    //  (offset absoluto medido: 0xD00; confianca alta)
    float& StreamingDistanceFactorField() const
    { return BrzCampoAncorado<float>(this, "C_BrushShape", 4); }
    BrzCampoPonteiro SubduedSelectionOutlineColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SubduedSelectionOutlineColor")); }
    TObjectPtr<UFont>& SubtitleFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.SubtitleFont"); }
    BrzCampoPonteiro SubtitleFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.SubtitleFontName")); }
    BrzCampoPonteiro TextureColorViewModeMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.TextureColorViewModeMaterial")); }
    FString& TextureColorViewModeMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.TextureColorViewModeMaterialName"); }
    //  no cache antigo este campo se chamava TickerHandle.
    //  nesta build ele e' `LargeFontName` — resolve por NOME.
    BrzCampoPonteiro TickerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.LargeFontName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +232, medido na build 25090264
    //  (offset absoluto medido: 0xEE0; confianca baixa)
    float& TimeSinceLastPendingKillPurgeField() const
    { return BrzCampoAncorado<float>(this, "SelectionHighlightIntensityBillboards", 232); }
    BrzCampoPonteiro TimecodeProviderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.TimecodeProvider")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimecodeProvider` +8, medido na build 25090264
    //  (offset absoluto medido: 0xC70; confianca alta)
    void*& TimecodeProviderChangedEventField() const
    { return BrzCampoAncorado<void*>(this, "TimecodeProvider", 8); }
    BrzCampoPonteiro TimecodeProviderClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.TimecodeProviderClassName")); }
    TObjectPtr<UFont>& TinyFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.TinyFont"); }
    BrzCampoPonteiro TinyFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.TinyFontName")); }
    FString& TransitionDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.TransitionDescription"); }
    FString& TransitionGameModeField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.TransitionGameMode"); }
    BrzCampoPonteiro TransitionTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.TransitionType")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +120, medido na build 25090264
    //  (offset absoluto medido: 0xE70; confianca baixa)
    void*& TravelFailureEventField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 120); }
    bool& UseSkeletalMeshMinLODPerQualityLevelsField() const
    { return *GetNativePointerField<bool*>(this, "UEngine.UseSkeletalMeshMinLODPerQualityLevels"); }
    TObjectPtr<UMaterial>& VertexColorMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorMaterial"); }
    FString& VertexColorMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorMaterialName"); }
    FString& VertexColorViewModeMaterialName_AlphaAsColorField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_AlphaAsColor"); }
    FString& VertexColorViewModeMaterialName_BlueOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_BlueOnly"); }
    FString& VertexColorViewModeMaterialName_ColorOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_ColorOnly"); }
    FString& VertexColorViewModeMaterialName_GreenOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_GreenOnly"); }
    FString& VertexColorViewModeMaterialName_RedOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_RedOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_AlphaAsColorField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_BlueOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_BlueOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_ColorOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_ColorOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_GreenOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_GreenOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_RedOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_RedOnly"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +400, medido na build 25090264
    //  (offset absoluto medido: 0xF88; confianca baixa)
    void*& ViewExtensionsField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 400); }
    BrzCampoPonteiro WeightMapArrayPlaceholderTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.WeightMapArrayPlaceholderTexture")); }
    BrzCampoPonteiro WeightMapArrayPlaceholderTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.WeightMapArrayPlaceholderTextureName")); }
    TObjectPtr<UTexture>& WeightMapPlaceholderTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UEngine.WeightMapPlaceholderTexture"); }
    BrzCampoPonteiro WeightMapPlaceholderTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.WeightMapPlaceholderTextureName")); }
    TObjectPtr<UMaterial>& WireframeMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.WireframeMaterial"); }
    FString& WireframeMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UEngine.WireframeMaterialName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetErrorLogInterval` +48, medido na build 25090264
    //  (offset absoluto medido: 0x10E0; confianca media)
    void*& WorldListField() const
    { return BrzCampoAncorado<void*>(this, "NetErrorLogInterval", 48); }
    BrzCampoPonteiro WorldSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.WorldSettingsClass")); }
    BrzCampoPonteiro WorldSettingsClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UEngine.WorldSettingsClassName")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +384, medido na build 25090264
    //  (offset absoluto medido: 0xF78; confianca baixa)
    void*& XRSystemField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 384); }
    unsigned int& bEnableVisualLogRecordingOnStartField() const
    { return *GetNativePointerField<unsigned int*>(this, "UEngine.bEnableVisualLogRecordingOnStart"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +236, medido na build 25090264
    //  (offset absoluto medido: 0xEE4; confianca baixa)
    void*& bFullPurgeTriggeredField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 236); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomTimeStep` +32, medido na build 25090264
    //  (offset absoluto medido: 0xC40; confianca alta)
    void*& bIsCurrentCustomTimeStepInitializedField() const
    { return BrzCampoAncorado<void*>(this, "CustomTimeStep", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimecodeProvider` +32, medido na build 25090264
    //  (offset absoluto medido: 0xC88; confianca alta)
    void*& bIsCurrentTimecodeProviderInitializedField() const
    { return BrzCampoAncorado<void*>(this, "TimecodeProvider", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +216, medido na build 25090264
    //  (offset absoluto medido: 0xED0; confianca baixa)
    void*& bIsInitializedField() const
    { return BrzCampoAncorado<void*>(this, "SelectionHighlightIntensityBillboards", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetErrorLogInterval` +8, medido na build 25090264
    //  (offset absoluto medido: 0x10B8; confianca alta)
    void*& bIsVanillaProductField() const
    { return BrzCampoAncorado<void*>(this, "NetErrorLogInterval", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectionHighlightIntensityBillboards` +237, medido na build 25090264
    //  (offset absoluto medido: 0xEE5; confianca baixa)
    bool& bShouldDelayGarbageCollectField() const
    { return BrzCampoAncorado<bool>(this, "SelectionHighlightIntensityBillboards", 237); }
    BitFieldValue<bool, unsigned __int32> bRenderLightMapDensityGrayscale()
    { return { (void*)this, "bRenderLightMapDensityGrayscale" }; }
    BitFieldValue<bool, unsigned __int32> bSubtitlesEnabled()
    { return { (void*)this, "bSubtitlesEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bSubtitlesForcedOff()
    { return { (void*)this, "bSubtitlesForcedOff" }; }
    BitFieldValue<bool, unsigned __int32> bCanBlueprintsTickByDefault()
    { return { (void*)this, "bCanBlueprintsTickByDefault" }; }
    BitFieldValue<bool, unsigned __int32> bOptimizeAnimBlueprintMemberVariableAccess()
    { return { (void*)this, "bOptimizeAnimBlueprintMemberVariableAccess" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiThreadedAnimationUpdate()
    { return { (void*)this, "bAllowMultiThreadedAnimationUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bEnableEditorPSysRealtimeLOD()
    { return { (void*)this, "bEnableEditorPSysRealtimeLOD" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableFrameRateSmoothing()
    { return { (void*)this, "bForceDisableFrameRateSmoothing" }; }
    BitFieldValue<bool, unsigned __int32> bSmoothFrameRate()
    { return { (void*)this, "bSmoothFrameRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedFrameRate()
    { return { (void*)this, "bUseFixedFrameRate" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForMultiplePawnsSpawnedInAFrame()
    { return { (void*)this, "bCheckForMultiplePawnsSpawnedInAFrame" }; }
    BitFieldValue<bool, unsigned __int32> bShouldGenerateLowQualityLightmaps_DEPRECATED()
    { return { (void*)this, "bShouldGenerateLowQualityLightmaps_DEPRECATED" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMatureLanguage()
    { return { (void*)this, "bAllowMatureLanguage" }; }
    BitFieldValue<bool, unsigned __int32> bPauseOnLossOfFocus()
    { return { (void*)this, "bPauseOnLossOfFocus" }; }
    BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessages()
    { return { (void*)this, "bEnableOnScreenDebugMessages" }; }
    BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessagesDisplay()
    { return { (void*)this, "bEnableOnScreenDebugMessagesDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressMapWarnings()
    { return { (void*)this, "bSuppressMapWarnings" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAILogging()
    { return { (void*)this, "bDisableAILogging" }; }
    BitFieldValue<bool, unsigned __int32> bLockReadOnlyLevels()
    { return { (void*)this, "bLockReadOnlyLevels" }; }
    BitFieldValue<bool, unsigned __int32> bStartedLoadMapMovie()
    { return { (void*)this, "bStartedLoadMapMovie" }; }
    BitFieldValue<bool, unsigned __int32> UseClothAssetMinLODPerQualityLevels()
    { return { (void*)this, "UseClothAssetMinLODPerQualityLevels" }; }
    BitFieldValue<bool, unsigned __int32> UseGrassVarityPerQualityLevels()
    { return { (void*)this, "UseGrassVarityPerQualityLevels" }; }
    BitFieldValue<bool, unsigned __int32> UseSkeletalMeshMinLODPerQualityLevels()
    { return { (void*)this, "UseSkeletalMeshMinLODPerQualityLevels" }; }
    BitFieldValue<bool, unsigned __int32> UseStaticMeshMinLODPerQualityLevels()
    { return { (void*)this, "UseStaticMeshMinLODPerQualityLevels" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateDefaultTimecode()
    { return { (void*)this, "bGenerateDefaultTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bIsOverridingSelectedColor()
    { return { (void*)this, "bIsOverridingSelectedColor" }; }
    BitFieldValue<bool, unsigned __int32> bShouldGenerateLowQualityLightmaps()
    { return { (void*)this, "bShouldGenerateLowQualityLightmaps" }; }

};

#endif  // BRZ_SDK_JOGO_UENGINE_H
