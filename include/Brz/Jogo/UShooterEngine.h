// ==========================================================================
//  UShooterEngine — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERENGINE_H
#define BRZ_SDK_JOGO_USHOOTERENGINE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UFont;
struct UGameUserSettings;
struct UMaterial;
struct UMaterialInstanceDynamic;
struct UObject;
struct UPhysicalMaterial;
struct UTexture;
struct UTexture2D;


struct UShooterEngine
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterEngine"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.Browse(FWorldContext&,FURL,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Browse(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterEngine.Browse(FWorldContext&,FURL,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro Browse(void* a0, void* a1, FString* a2) const
    { return Browse(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.CheckDLCModOwnerships(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckDLCModOwnerships(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.CheckDLCModOwnerships(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.CheckForCFNetworkFast(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForCFNetworkFast(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterEngine.CheckForCFNetworkFast(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.CheckForLoadingScreenOverrides(FURL)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForLoadingScreenOverrides(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.CheckForLoadingScreenOverrides(FURL)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.CheckModInstallationStatus(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckModInstallationStatus(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.CheckModInstallationStatus(FWorldContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.CleanDerelictModDirectories()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanDerelictModDirectories() const
    {
        return NativeCall<void*>(this, "UShooterEngine.CleanDerelictModDirectories()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.CloseAllGuardedWebSockets()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseAllGuardedWebSockets() const
    {
        return NativeCall<void*>(this, "UShooterEngine.CloseAllGuardedWebSockets()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.ConditionallyRestartServerDueToMemoryUsage(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConditionallyRestartServerDueToMemoryUsage(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterEngine.ConditionallyRestartServerDueToMemoryUsage(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.DumpVisibleMeshes(UWorld*,FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DumpVisibleMeshes(void* a0, unsigned long long a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, unsigned long long, bool, bool>(this, "UShooterEngine.DumpVisibleMeshes(UWorld*,FName,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.Exec(UWorld*,wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Exec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterEngine.Exec(UWorld*,wchar_t*,FOutputDevice&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GetCurrentModPath()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentModPath() const
    {
        return NativeCall<void*>(this, "UShooterEngine.GetCurrentModPath()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GetLastLoadedCosmeticModID(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetLastLoadedCosmeticModID(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterEngine.GetLastLoadedCosmeticModID(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GetMods()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMods() const
    {
        return NativeCall<void*>(this, "UShooterEngine.GetMods()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GetPlatformUserAuthToken(FString&,ECFCoreExternalAuthProvider&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlatformUserAuthToken(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.GetPlatformUserAuthToken(FString&,ECFCoreExternalAuthProvider&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetPlatformUserAuthToken(FString* a0, void* a1) const
    { return GetPlatformUserAuthToken(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GetSeamlessTransitionMapPath()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSeamlessTransitionMapPath() const
    {
        return NativeCall<void*>(this, "UShooterEngine.GetSeamlessTransitionMapPath()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GetTotalConversionId()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTotalConversionId() const
    {
        return NativeCall<void*>(this, "UShooterEngine.GetTotalConversionId()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedCreateWebSocket(FString&,FString&,TMap<FString,FString,FDefaultSetAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedCreateWebSocket(const FString& a0, const FString& a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UShooterEngine.GuardedCreateWebSocket(FString&,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,bool&,UObject*)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GuardedCreateWebSocket(FString* a0, FString* a1, void* a2, void* a3, void* a4) const
    { return GuardedCreateWebSocket(*a0, *a1, a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedHTTPGetRequest(FString&,TMap<FString,FString,FDefaultSetAllocator,TDefault
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedHTTPGetRequest(const FString& a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterEngine.GuardedHTTPGetRequest(FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,UObject*)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GuardedHTTPGetRequest(FString* a0, void* a1, void* a2) const
    { return GuardedHTTPGetRequest(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedHTTPPostRequest(FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedHTTPPostRequest(const FString& a0, void* a1, const FString& a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UShooterEngine.GuardedHTTPPostRequest(FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,FString&,UObject*)", const_cast<FString*>(&a0), a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GuardedHTTPPostRequest(FString* a0, void* a1, FString* a2, void* a3) const
    { return GuardedHTTPPostRequest(*a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedHTTPRequest(FBlueprintHTTPRequestData&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedHTTPRequest(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.GuardedHTTPRequest(FBlueprintHTTPRequestData&,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedHTTPResponse(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool,U
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedHTTPResponse(void* a0, void* a1, bool a2, void* a3, long long a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, bool, void*, long long, void*>(this, "UShooterEngine.GuardedHTTPResponse(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool,UObject*,__int64,FString)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GuardedHTTPResponse(void* a0, void* a1, bool a2, void* a3, long long a4, FString* a5) const
    { return GuardedHTTPResponse(a0, a1, a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedWebSocketClose(__int64&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedWebSocketClose(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.GuardedWebSocketClose(__int64&,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedWebSocketConnect(__int64&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedWebSocketConnect(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.GuardedWebSocketConnect(__int64&,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedWebSocketIsConnected(__int64&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedWebSocketIsConnected(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.GuardedWebSocketIsConnected(__int64&,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.GuardedWebSocketSendMessage(__int64&,FString&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GuardedWebSocketSendMessage(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterEngine.GuardedWebSocketSendMessage(__int64&,FString&,UObject*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GuardedWebSocketSendMessage(void* a0, FString* a1, void* a2) const
    { return GuardedWebSocketSendMessage(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandleFinalizePurchaseSuccess()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleFinalizePurchaseSuccess() const
    {
        return NativeCall<void*>(this, "UShooterEngine.HandleFinalizePurchaseSuccess()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleNetworkFailure(void* a0, void* a1, int a2, const FString& a3) const
    {
        return NativeCall<void*, void*, void*, int, void*>(this, "UShooterEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandleNetworkFailure(void* a0, void* a1, int a2, FString* a3) const
    { return HandleNetworkFailure(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandleObtainTokenForCheckout(FString&,EExternalAuthEnvironment::Type,FGenPremiumC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleObtainTokenForCheckout(const FString& a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "UShooterEngine.HandleObtainTokenForCheckout(FString&,EExternalAuthEnvironment::Type,FGenPremiumCheckoutUrlRequest)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandleObtainTokenForCheckout(FString* a0, int a1, void* a2) const
    { return HandleObtainTokenForCheckout(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandleOnGeneratePremiumCheckoutUrl(bool&,FGenPremiumCheckoutUrlRequest&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleOnGeneratePremiumCheckoutUrl(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.HandleOnGeneratePremiumCheckoutUrl(bool&,FGenPremiumCheckoutUrlRequest&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandleOnModUninstalledEvent(FInstalledMod&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleOnModUninstalledEvent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.HandleOnModUninstalledEvent(FInstalledMod&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandlePlatformQueryOffers(FString,TSharedPtr<FUniqueNetId,1>,FPurchaseDetails&,FC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePlatformQueryOffers(const FString& a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UShooterEngine.HandlePlatformQueryOffers(FString,TSharedPtr<FUniqueNetId,1>,FPurchaseDetails&,FCFCoreInitiatePurchaseDelegate&,FCFCoreErrorDelegate&)", const_cast<FString*>(&a0), a1, a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandlePlatformQueryOffers(FString* a0, void* a1, void* a2, void* a3, void* a4) const
    { return HandlePlatformQueryOffers(*a0, a1, a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandlePlatformQueryReceipts(FPurchaseDetails&,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePlatformQueryReceipts(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.HandlePlatformQueryReceipts(FPurchaseDetails&,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandlePlatformQueryReceipts(void* a0, FString* a1) const
    { return HandlePlatformQueryReceipts(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandlePurchaseError(FCFCoreError&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePurchaseError(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.HandlePurchaseError(FCFCoreError&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandlePurchaseSuccess(FPurchaseDetails&,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePurchaseSuccess(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.HandlePurchaseSuccess(FPurchaseDetails&,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandlePurchaseSuccess(void* a0, FString* a1) const
    { return HandlePurchaseSuccess(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HandlePurchaseSuccessTokenObtain(FString&,EExternalAuthEnvironment::Type,FPurchas
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePurchaseSuccessTokenObtain(const FString& a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "UShooterEngine.HandlePurchaseSuccessTokenObtain(FString&,EExternalAuthEnvironment::Type,FPurchaseDetails)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandlePurchaseSuccessTokenObtain(FString* a0, int a1, void* a2) const
    { return HandlePurchaseSuccessTokenObtain(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.HasModInstalled(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasModInstalled(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UShooterEngine.HasModInstalled(unsigned__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.Init(IEngineLoop*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Init(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.Init(IEngineLoop*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.InitCFCore()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro InitCFCore() const
    {
        return NativeCall<void*>(this, "UShooterEngine.InitCFCore()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.IsNetBlockedMod(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsNetBlockedMod(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.IsNetBlockedMod(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro IsNetBlockedMod(FString* a0, FString* a1) const
    { return IsNetBlockedMod(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.LoadCachedPremiumModList()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadCachedPremiumModList() const
    {
        return NativeCall<void*>(this, "UShooterEngine.LoadCachedPremiumModList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.LoadGameMods(TArray<FInstalledMod,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadGameMods(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterEngine.LoadGameMods(TArray<FInstalledMod,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.LoadMap(FWorldContext&,FURL,UPendingNetGame*,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro LoadMap(void* a0, void* a1, void* a2, const FString& a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UShooterEngine.LoadMap(FWorldContext&,FURL,UPendingNetGame*,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro LoadMap(void* a0, void* a1, void* a2, FString* a3)
    { return LoadMap(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.LoadMapRedrawViewports()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro LoadMapRedrawViewports() const
    {
        return NativeCall<void*>(this, "UShooterEngine.LoadMapRedrawViewports()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.OnConfirmationDialogClosed(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnConfirmationDialogClosed(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterEngine.OnConfirmationDialogClosed(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.OnGuardedWebSocketConnected(__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGuardedWebSocketConnected(long long a0) const
    {
        return NativeCall<void*, long long>(this, "UShooterEngine.OnGuardedWebSocketConnected(__int64)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.OnGuardedWebSocketConnectionClosed(int,FString&,bool,__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGuardedWebSocketConnectionClosed(int a0, const FString& a1, bool a2, long long a3) const
    {
        return NativeCall<void*, int, void*, bool, long long>(this, "UShooterEngine.OnGuardedWebSocketConnectionClosed(int,FString&,bool,__int64)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnGuardedWebSocketConnectionClosed(int a0, FString* a1, bool a2, long long a3) const
    { return OnGuardedWebSocketConnectionClosed(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.OnGuardedWebSocketConnectionError(FString&,__int64)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGuardedWebSocketConnectionError(const FString& a0, long long a1) const
    {
        return NativeCall<void*, void*, long long>(this, "UShooterEngine.OnGuardedWebSocketConnectionError(FString&,__int64)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnGuardedWebSocketConnectionError(FString* a0, long long a1) const
    { return OnGuardedWebSocketConnectionError(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.OnRequestTimedOut(UObject*,__int64,FBlueprintHTTPRequestData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRequestTimedOut(void* a0, long long a1, void* a2) const
    {
        return NativeCall<void*, void*, long long, void*>(this, "UShooterEngine.OnRequestTimedOut(UObject*,__int64,FBlueprintHTTPRequestData)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.PreExit()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreExit() const
    {
        return NativeCall<void*>(this, "UShooterEngine.PreExit()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.PreLoadNetGameMap()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=138]]
    BrzPonteiro PreLoadNetGameMap() const
    {
        return NativeCall<void*>(this, "UShooterEngine.PreLoadNetGameMap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.Primal_IsServerUnderMemoryPressure()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Primal_IsServerUnderMemoryPressure() const
    {
        return NativeCall<void*>(this, "UShooterEngine.Primal_IsServerUnderMemoryPressure()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.ProcessAutoConsoleCommands()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessAutoConsoleCommands() const
    {
        return NativeCall<void*>(this, "UShooterEngine.ProcessAutoConsoleCommands()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.RedrawViewports(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RedrawViewports(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterEngine.RedrawViewports(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestAuthTokenThenNotifyPendingNetGame(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.ResolveDLCModInstall()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveDLCModInstall() const
    {
        return NativeCall<void*>(this, "UShooterEngine.ResolveDLCModInstall()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.RestartServerDueToMemoryUsage(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RestartServerDueToMemoryUsage(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.RestartServerDueToMemoryUsage(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RestartServerDueToMemoryUsage(FString* a0) const
    { return RestartServerDueToMemoryUsage(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.RunCheatDeleteServerMods()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=119+grafo=3/3]]
    BrzPonteiro RunCheatDeleteServerMods() const
    {
        return NativeCall<void*>(this, "UShooterEngine.RunCheatDeleteServerMods()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.SetNetBlockedMods(TArray<__int64,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetNetBlockedMods(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.SetNetBlockedMods(TArray<__int64,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.SetSparseDataOverrideClass(UClass*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetSparseDataOverrideClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.SetSparseDataOverrideClass(UClass*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.ShowLoadingScreenUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowLoadingScreenUI() const
    {
        return NativeCall<void*>(this, "UShooterEngine.ShowLoadingScreenUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.StartNextDLCModInstall(TSharedPtr<TMap<__int64,int,FDefaultSetAllocator,TDefaultM
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartNextDLCModInstall(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterEngine.StartNextDLCModInstall(TSharedPtr<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>>,1>&,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.Tick(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UShooterEngine.Tick(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.UpdateCrashReporterDataForSentryService(UWorld*,APlayerController*,FGuid)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UpdateCrashReporterDataForSentryService(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterEngine.UpdateCrashReporterDataForSentryService(UWorld*,APlayerController*,FGuid)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.UpdateJustInTimeTextures(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateJustInTimeTextures(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterEngine.UpdateJustInTimeTextures(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.UploadLastCrashCallstackToSlack(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadLastCrashCallstackToSlack(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterEngine.UploadLastCrashCallstackToSlack(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterEngine.WaitForModsToInstallAndTickEngine()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WaitForModsToInstallAndTickEngine() const
    {
        return NativeCall<void*>(this, "UShooterEngine.WaitForModsToInstallAndTickEngine()");
    }

    BrzCampoPonteiro AIControllerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.AIControllerClassName")); }
    TArray<void*>& ActiveClassRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.ActiveClassRedirects"); }
    TArray<void*>& ActiveGameNameRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.ActiveGameNameRedirects"); }
    TArray<void*>& ActivePluginRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.ActivePluginRedirects"); }
    TArray<void*>& ActiveStructRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.ActiveStructRedirects"); }
    TArray<void*>& AdditionalFontNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.AdditionalFontNames"); }
    TArray<void*>& AdditionalFontsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.AdditionalFonts"); }
    TObjectPtr<UMaterial>& ArrowMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.ArrowMaterial"); }
    BrzCampoPonteiro ArrowMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.ArrowMaterialName")); }
    TObjectPtr<UMaterialInstanceDynamic>& ArrowMaterialYellowField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ArrowMaterialYellow"); }
    BrzCampoPonteiro AssetManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.AssetManager")); }
    BrzCampoPonteiro AssetManagerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.AssetManagerClassName")); }
    BrzCampoPonteiro AvoidanceManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.AvoidanceManagerClass")); }
    BrzCampoPonteiro AvoidanceManagerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.AvoidanceManagerClassName")); }
    float& BSPSelectionHighlightIntensityField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.BSPSelectionHighlightIntensity"); }
    TObjectPtr<UTexture2D>& BlueNoiseScalarTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.BlueNoiseScalarTexture"); }
    BrzCampoPonteiro BlueNoiseScalarTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.BlueNoiseScalarTextureName")); }
    TObjectPtr<UTexture2D>& BlueNoiseVec2TextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.BlueNoiseVec2Texture"); }
    BrzCampoPonteiro BlueNoiseVec2TextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.BlueNoiseVec2TextureName")); }
    BrzCampoPonteiro C_AddWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_AddWire")); }
    BrzCampoPonteiro C_BSPCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_BSPCollision")); }
    BrzCampoPonteiro C_BrushShapeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_BrushShape")); }
    BrzCampoPonteiro C_BrushWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_BrushWire")); }
    BrzCampoPonteiro C_NonSolidWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_NonSolidWire")); }
    BrzCampoPonteiro C_OrthoBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_OrthoBackground")); }
    BrzCampoPonteiro C_ScaleBoxHiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_ScaleBoxHi")); }
    BrzCampoPonteiro C_SemiSolidWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_SemiSolidWire")); }
    BrzCampoPonteiro C_SubtractWireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_SubtractWire")); }
    BrzCampoPonteiro C_VolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_Volume")); }
    BrzCampoPonteiro C_VolumeCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_VolumeCollision")); }
    BrzCampoPonteiro C_WireBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_WireBackground")); }
    BrzCampoPonteiro C_WorldBoxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.C_WorldBox")); }
    float& CameraRotationThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.CameraRotationThreshold"); }
    float& CameraTranslationThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.CameraTranslationThreshold"); }
    BrzCampoPonteiro ConsoleClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.ConsoleClass")); }
    BrzCampoPonteiro ConsoleClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.ConsoleClassName")); }
    TObjectPtr<UMaterial>& ConstraintLimitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.ConstraintLimitMaterial"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialPrismaticField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialPrismatic"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialX"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXAxisField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialXAxis"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialY"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYAxisField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialYAxis"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialZ"); }
    TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZAxisField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UShooterEngine.ConstraintLimitMaterialZAxis"); }
    BrzCampoPonteiro CustomTimeStepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.CustomTimeStep")); }
    BrzCampoPonteiro CustomTimeStepClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.CustomTimeStepClassName")); }
    BrzCampoPonteiro DebugEditorMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DebugEditorMaterialName")); }
    TObjectPtr<UMaterial>& DebugMeshMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.DebugMeshMaterial"); }
    BrzCampoPonteiro DebugMeshMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DebugMeshMaterialName")); }
    TObjectPtr<UTexture2D>& DefaultBSPVertexTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.DefaultBSPVertexTexture"); }
    BrzCampoPonteiro DefaultBSPVertexTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultBSPVertexTextureName")); }
    TObjectPtr<UTexture2D>& DefaultBloomKernelTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.DefaultBloomKernelTexture"); }
    BrzCampoPonteiro DefaultBloomKernelTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultBloomKernelTextureName")); }
    BrzCampoPonteiro DefaultBlueprintBaseClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultBlueprintBaseClassName")); }
    TObjectPtr<UTexture2D>& DefaultBokehTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.DefaultBokehTexture"); }
    BrzCampoPonteiro DefaultBokehTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultBokehTextureName")); }
    TObjectPtr<UPhysicalMaterial>& DefaultDestructiblePhysMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UShooterEngine.DefaultDestructiblePhysMaterial"); }
    BrzCampoPonteiro DefaultDestructiblePhysMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultDestructiblePhysMaterialName")); }
    TObjectPtr<UTexture>& DefaultDiffuseTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UShooterEngine.DefaultDiffuseTexture"); }
    BrzCampoPonteiro DefaultDiffuseTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultDiffuseTextureName")); }
    TObjectPtr<UTexture2D>& DefaultFilmGrainTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.DefaultFilmGrainTexture"); }
    BrzCampoPonteiro DefaultFilmGrainTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultFilmGrainTextureName")); }
    TObjectPtr<UPhysicalMaterial>& DefaultPhysMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UShooterEngine.DefaultPhysMaterial"); }
    BrzCampoPonteiro DefaultPhysMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultPhysMaterialName")); }
    BrzCampoPonteiro DefaultSelectedMaterialColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultSelectedMaterialColor")); }
    TObjectPtr<UTexture2D>& DefaultTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.DefaultTexture"); }
    BrzCampoPonteiro DefaultTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DefaultTextureName")); }
    TArray<void*>& DeferredCommandsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.DeferredCommands"); }
    BrzCampoPonteiro DiffuseEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DiffuseEnergyTexture")); }
    BrzCampoPonteiro DiffuseEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.DiffuseEnergyTextureName")); }
    float& DisplayGammaField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.DisplayGamma"); }
    TObjectPtr<UMaterial>& EmissiveMeshMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.EmissiveMeshMaterial"); }
    BrzCampoPonteiro EmissiveMeshMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.EmissiveMeshMaterialName")); }
    float& FixedFrameRateField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.FixedFrameRate"); }
    BrzCampoPonteiro GGXLTCAmpTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXLTCAmpTexture")); }
    BrzCampoPonteiro GGXLTCAmpTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXLTCAmpTextureName")); }
    BrzCampoPonteiro GGXLTCMatTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXLTCMatTexture")); }
    BrzCampoPonteiro GGXLTCMatTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXLTCMatTextureName")); }
    BrzCampoPonteiro GGXReflectionEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXReflectionEnergyTexture")); }
    BrzCampoPonteiro GGXReflectionEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXReflectionEnergyTextureName")); }
    BrzCampoPonteiro GGXTransmissionEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXTransmissionEnergyTexture")); }
    BrzCampoPonteiro GGXTransmissionEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GGXTransmissionEnergyTextureName")); }
    BrzCampoPonteiro GPUSkinCacheVisualizationExcludedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GPUSkinCacheVisualizationExcludedColor")); }
    BrzCampoPonteiro GPUSkinCacheVisualizationHighMemoryColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GPUSkinCacheVisualizationHighMemoryColor")); }
    float& GPUSkinCacheVisualizationHighMemoryThresholdInMBField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.GPUSkinCacheVisualizationHighMemoryThresholdInMB"); }
    BrzCampoPonteiro GPUSkinCacheVisualizationIncludedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GPUSkinCacheVisualizationIncludedColor")); }
    BrzCampoPonteiro GPUSkinCacheVisualizationLowMemoryColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GPUSkinCacheVisualizationLowMemoryColor")); }
    float& GPUSkinCacheVisualizationLowMemoryThresholdInMBField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.GPUSkinCacheVisualizationLowMemoryThresholdInMB"); }
    BrzCampoPonteiro GPUSkinCacheVisualizationMidMemoryColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GPUSkinCacheVisualizationMidMemoryColor")); }
    TArray<void*>& GPUSkinCacheVisualizationRayTracingLODOffsetColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.GPUSkinCacheVisualizationRayTracingLODOffsetColors"); }
    BrzCampoPonteiro GPUSkinCacheVisualizationRecomputeTangentsColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GPUSkinCacheVisualizationRecomputeTangentsColor")); }
    BrzCampoPonteiro GameInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameInstance")); }
    BrzCampoPonteiro GameScreenshotSaveDirectoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameScreenshotSaveDirectory")); }
    TObjectPtr<UObject>& GameSingletonField() const
    { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "UShooterEngine.GameSingleton"); }
    BrzCampoPonteiro GameSingletonClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameSingletonClassName")); }
    TObjectPtr<UGameUserSettings>& GameUserSettingsField() const
    { return *GetNativePointerField<TObjectPtr<UGameUserSettings>*>(this, "UShooterEngine.GameUserSettings"); }
    BrzCampoPonteiro GameUserSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameUserSettingsClass")); }
    BrzCampoPonteiro GameUserSettingsClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameUserSettingsClassName")); }
    BrzCampoPonteiro GameViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameViewport")); }
    BrzCampoPonteiro GameViewportClientClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameViewportClientClass")); }
    BrzCampoPonteiro GameViewportClientClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GameViewportClientClassName")); }
    float& GenerateDefaultTimecodeFrameDelayField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.GenerateDefaultTimecodeFrameDelay"); }
    BrzCampoPonteiro GenerateDefaultTimecodeFrameRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GenerateDefaultTimecodeFrameRate")); }
    BrzCampoPonteiro GlintTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GlintTexture")); }
    BrzCampoPonteiro GlintTexture2Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GlintTexture2")); }
    BrzCampoPonteiro GlintTexture2NameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GlintTexture2Name")); }
    BrzCampoPonteiro GlintTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GlintTextureName")); }
    unsigned int& GlobalNetTravelCountField() const
    { return *GetNativePointerField<unsigned int*>(this, "UShooterEngine.GlobalNetTravelCount"); }
    BrzCampoPonteiro GrassSliceColorationColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.GrassSliceColorationColors")); }
    TArray<void*>& HLODColorationColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.HLODColorationColors"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StartupScreenTextBlock` +8, medido na build 25090264
    //  (offset absoluto medido: 0x12C8; confianca alta)
    void*& HandshakeInstallStateField() const
    { return BrzCampoAncorado<void*>(this, "StartupScreenTextBlock", 8); }
    TObjectPtr<UTexture2D>& HighFrequencyNoiseTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.HighFrequencyNoiseTexture"); }
    BrzCampoPonteiro HighFrequencyNoiseTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.HighFrequencyNoiseTextureName")); }
    float& IdealLightMapDensityField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.IdealLightMapDensity"); }
    TObjectPtr<UMaterial>& InvalidLightmapSettingsMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.InvalidLightmapSettingsMaterial"); }
    BrzCampoPonteiro InvalidLightmapSettingsMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.InvalidLightmapSettingsMaterialName")); }
    BrzCampoPonteiro IrisNetDriverConfigsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.IrisNetDriverConfigs")); }
    TArray<void*>& LODColorationColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.LODColorationColors"); }
    TObjectPtr<UFont>& LargeFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UShooterEngine.LargeFont"); }
    BrzCampoPonteiro LargeFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LargeFontName")); }
    TObjectPtr<UMaterial>& LevelColorationLitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.LevelColorationLitMaterial"); }
    FString& LevelColorationLitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.LevelColorationLitMaterialName"); }
    TObjectPtr<UMaterial>& LevelColorationUnlitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.LevelColorationUnlitMaterial"); }
    FString& LevelColorationUnlitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.LevelColorationUnlitMaterialName"); }
    BrzCampoPonteiro LevelScriptActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LevelScriptActorClass")); }
    BrzCampoPonteiro LevelScriptActorClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LevelScriptActorClassName")); }
    TArray<void*>& LightComplexityColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.LightComplexityColors"); }
    BrzCampoPonteiro LightMapDensitySelectedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LightMapDensitySelectedColor")); }
    TObjectPtr<UTexture2D>& LightMapDensityTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.LightMapDensityTexture"); }
    BrzCampoPonteiro LightMapDensityTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LightMapDensityTextureName")); }
    BrzCampoPonteiro LightMapDensityVertexMappedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LightMapDensityVertexMappedColor")); }
    BrzCampoPonteiro LightingOnlyBrightnessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LightingOnlyBrightness")); }
    TObjectPtr<UMaterial>& LightingTexelDensityMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.LightingTexelDensityMaterial"); }
    FString& LightingTexelDensityNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.LightingTexelDensityName"); }
    BrzCampoPonteiro LocalPlayerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LocalPlayerClass")); }
    BrzCampoPonteiro LocalPlayerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.LocalPlayerClassName")); }
    float& MaxDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MaxDeltaTime"); }
    float& MaxES3PixelShaderAdditiveComplexityCountField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MaxES3PixelShaderAdditiveComplexityCount"); }
    float& MaxLightMapDensityField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MaxLightMapDensity"); }
    float& MaxOcclusionPixelsFractionField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MaxOcclusionPixelsFraction"); }
    int& MaxParticleResizeField() const
    { return *GetNativePointerField<int*>(this, "UShooterEngine.MaxParticleResize"); }
    int& MaxParticleResizeWarnField() const
    { return *GetNativePointerField<int*>(this, "UShooterEngine.MaxParticleResizeWarn"); }
    float& MaxPixelShaderAdditiveComplexityCountField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MaxPixelShaderAdditiveComplexityCount"); }
    int& MaximumLoopIterationCountField() const
    { return *GetNativePointerField<int*>(this, "UShooterEngine.MaximumLoopIterationCount"); }
    TObjectPtr<UFont>& MediumFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UShooterEngine.MediumFont"); }
    BrzCampoPonteiro MediumFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.MediumFontName")); }
    float& MinDesiredFrameRateField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MinDesiredFrameRate"); }
    float& MinLightMapDensityField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.MinLightMapDensity"); }
    TObjectPtr<UTexture2D>& MiniFontTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.MiniFontTexture"); }
    BrzCampoPonteiro MiniFontTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.MiniFontTextureName")); }
    BrzCampoPonteiro ModBackgroundDownloaderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.ModBackgroundDownloader")); }
    TObjectPtr<UMaterial>& NaniteHiddenSectionMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.NaniteHiddenSectionMaterial"); }
    FString& NaniteHiddenSectionMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.NaniteHiddenSectionMaterialName"); }
    BrzCampoPonteiro NavigationSystemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.NavigationSystemClass")); }
    BrzCampoPonteiro NavigationSystemClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.NavigationSystemClassName")); }
    BrzCampoPonteiro NavigationSystemConfigClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.NavigationSystemConfigClass")); }
    BrzCampoPonteiro NavigationSystemConfigClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.NavigationSystemConfigClassName")); }
    float& NearClipPlaneField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.NearClipPlane"); }
    float& NetClientTicksPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.NetClientTicksPerSecond"); }
    TArray<void*>& NetDriverDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.NetDriverDefinitions"); }
    float& NetErrorLogIntervalField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.NetErrorLogInterval"); }
    float& NetworkStressTestClientMode_MaxFPSField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.NetworkStressTestClientMode_MaxFPS"); }
    float& NetworkStressTestClientMode_MinFPSField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.NetworkStressTestClientMode_MinFPS"); }
    int& NextWorldContextHandleField() const
    { return *GetNativePointerField<int*>(this, "UShooterEngine.NextWorldContextHandle"); }
    int& NumPawnsAllowedToBeSpawnedInAFrameField() const
    { return *GetNativePointerField<int*>(this, "UShooterEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
    FString& ParticleEventManagerClassPathField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.ParticleEventManagerClassPath"); }
    TArray<void*>& PendingDroppedNotesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.PendingDroppedNotes"); }
    BrzCampoPonteiro PhysicsCollisionHandlerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.PhysicsCollisionHandlerClass")); }
    BrzCampoPonteiro PhysicsCollisionHandlerClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.PhysicsCollisionHandlerClassName")); }
    TObjectPtr<UTexture2D>& PreIntegratedSkinBRDFTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UShooterEngine.PreIntegratedSkinBRDFTexture"); }
    BrzCampoPonteiro PreIntegratedSkinBRDFTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.PreIntegratedSkinBRDFTextureName")); }
    TObjectPtr<UMaterial>& PreviewShadowsIndicatorMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.PreviewShadowsIndicatorMaterial"); }
    BrzCampoPonteiro PreviewShadowsIndicatorMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.PreviewShadowsIndicatorMaterialName")); }
    float& PrimitiveProbablyVisibleTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.PrimitiveProbablyVisibleTime"); }
    TArray<void*>& QuadComplexityColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.QuadComplexityColors"); }
    TObjectPtr<UMaterial>& RemoveSurfaceMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.RemoveSurfaceMaterial"); }
    BrzCampoPonteiro RemoveSurfaceMaterialNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.RemoveSurfaceMaterialName")); }
    float& RenderLightMapDensityColorScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.RenderLightMapDensityColorScale"); }
    float& RenderLightMapDensityGrayscaleScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.RenderLightMapDensityGrayscaleScale"); }
    TArray<void*>& RuntimeServerActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.RuntimeServerActors"); }
    int& ScreenSaverInhibitorSemaphoreField() const
    { return *GetNativePointerField<int*>(this, "UShooterEngine.ScreenSaverInhibitorSemaphore"); }
    BrzCampoPonteiro SelectedMaterialColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SelectedMaterialColor")); }
    BrzCampoPonteiro SelectedMaterialColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SelectedMaterialColorOverride")); }
    float& SelectionHighlightIntensityField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.SelectionHighlightIntensity"); }
    float& SelectionHighlightIntensityBillboardsField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.SelectionHighlightIntensityBillboards"); }
    BrzCampoPonteiro SelectionOutlineColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SelectionOutlineColor")); }
    TArray<void*>& ServerActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.ServerActors"); }
    float& ServerFlushLogIntervalField() const
    { return *GetNativePointerField<float*>(this, "UShooterEngine.ServerFlushLogInterval"); }
    TObjectPtr<UMaterial>& ShadedLevelColorationLitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.ShadedLevelColorationLitMaterial"); }
    FString& ShadedLevelColorationLitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.ShadedLevelColorationLitMaterialName"); }
    TObjectPtr<UMaterial>& ShadedLevelColorationUnlitMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.ShadedLevelColorationUnlitMaterial"); }
    FString& ShadedLevelColorationUnlitMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.ShadedLevelColorationUnlitMaterialName"); }
    TArray<void*>& ShaderComplexityColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.ShaderComplexityColors"); }
    BrzCampoPonteiro SheenEnergyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SheenEnergyTexture")); }
    BrzCampoPonteiro SheenEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SheenEnergyTextureName")); }
    BrzCampoPonteiro SheenLTCTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SheenLTCTexture")); }
    BrzCampoPonteiro SheenLTCTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SheenLTCTextureName")); }
    BrzCampoPonteiro SheenLegacyEnergyTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SheenLegacyEnergyTextureName")); }
    BrzCampoPonteiro SimpleVolumeEnvTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SimpleVolumeEnvTexture")); }
    BrzCampoPonteiro SimpleVolumeEnvTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SimpleVolumeEnvTextureName")); }
    BrzCampoPonteiro SimpleVolumeTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SimpleVolumeTexture")); }
    BrzCampoPonteiro SimpleVolumeTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SimpleVolumeTextureName")); }
    TObjectPtr<UFont>& SmallFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UShooterEngine.SmallFont"); }
    BrzCampoPonteiro SmallFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SmallFontName")); }
    BrzCampoPonteiro SmoothedFrameRateRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SmoothedFrameRateRange")); }
    BrzCampoPonteiro StartupScreenTextBlockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.StartupScreenTextBlock")); }
    TArray<void*>& StatColorMappingsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.StatColorMappings"); }
    TArray<void*>& StationaryLightOverlapColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.StationaryLightOverlapColors"); }
    TArray<void*>& StreamingAccuracyColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterEngine.StreamingAccuracyColors"); }
    BrzCampoPonteiro SubduedSelectionOutlineColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SubduedSelectionOutlineColor")); }
    TObjectPtr<UFont>& SubtitleFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UShooterEngine.SubtitleFont"); }
    BrzCampoPonteiro SubtitleFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.SubtitleFontName")); }
    BrzCampoPonteiro TextureColorViewModeMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.TextureColorViewModeMaterial")); }
    FString& TextureColorViewModeMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.TextureColorViewModeMaterialName"); }
    BrzCampoPonteiro TimecodeProviderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.TimecodeProvider")); }
    BrzCampoPonteiro TimecodeProviderClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.TimecodeProviderClassName")); }
    TObjectPtr<UFont>& TinyFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UShooterEngine.TinyFont"); }
    BrzCampoPonteiro TinyFontNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.TinyFontName")); }
    FString& TransitionDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.TransitionDescription"); }
    FString& TransitionGameModeField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.TransitionGameMode"); }
    BrzCampoPonteiro TransitionTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.TransitionType")); }
    BitFieldValue<bool, unsigned __int32> UseClothAssetMinLODPerQualityLevels()
    { return { (void*)this, "UseClothAssetMinLODPerQualityLevels" }; }
    BitFieldValue<bool, unsigned __int32> UseGrassVarityPerQualityLevels()
    { return { (void*)this, "UseGrassVarityPerQualityLevels" }; }
    bool& UseSkeletalMeshMinLODPerQualityLevelsField() const
    { return *GetNativePointerField<bool*>(this, "UShooterEngine.UseSkeletalMeshMinLODPerQualityLevels"); }
    BitFieldValue<bool, unsigned __int32> UseStaticMeshMinLODPerQualityLevels()
    { return { (void*)this, "UseStaticMeshMinLODPerQualityLevels" }; }
    TObjectPtr<UMaterial>& VertexColorMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.VertexColorMaterial"); }
    FString& VertexColorMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.VertexColorMaterialName"); }
    FString& VertexColorViewModeMaterialName_AlphaAsColorField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.VertexColorViewModeMaterialName_AlphaAsColor"); }
    FString& VertexColorViewModeMaterialName_BlueOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.VertexColorViewModeMaterialName_BlueOnly"); }
    FString& VertexColorViewModeMaterialName_ColorOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.VertexColorViewModeMaterialName_ColorOnly"); }
    FString& VertexColorViewModeMaterialName_GreenOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.VertexColorViewModeMaterialName_GreenOnly"); }
    FString& VertexColorViewModeMaterialName_RedOnlyField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.VertexColorViewModeMaterialName_RedOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_AlphaAsColorField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_BlueOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.VertexColorViewModeMaterial_BlueOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_ColorOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.VertexColorViewModeMaterial_ColorOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_GreenOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.VertexColorViewModeMaterial_GreenOnly"); }
    TObjectPtr<UMaterial>& VertexColorViewModeMaterial_RedOnlyField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.VertexColorViewModeMaterial_RedOnly"); }
    BrzCampoPonteiro WeightMapArrayPlaceholderTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.WeightMapArrayPlaceholderTexture")); }
    BrzCampoPonteiro WeightMapArrayPlaceholderTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.WeightMapArrayPlaceholderTextureName")); }
    TObjectPtr<UTexture>& WeightMapPlaceholderTextureField() const
    { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UShooterEngine.WeightMapPlaceholderTexture"); }
    BrzCampoPonteiro WeightMapPlaceholderTextureNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.WeightMapPlaceholderTextureName")); }
    TObjectPtr<UMaterial>& WireframeMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UShooterEngine.WireframeMaterial"); }
    FString& WireframeMaterialNameField() const
    { return *GetNativePointerField<FString*>(this, "UShooterEngine.WireframeMaterialName"); }
    BrzCampoPonteiro WorldSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.WorldSettingsClass")); }
    BrzCampoPonteiro WorldSettingsClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterEngine.WorldSettingsClassName")); }
    BitFieldValue<bool, unsigned __int32> bAllowMatureLanguage()
    { return { (void*)this, "bAllowMatureLanguage" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiThreadedAnimationUpdate()
    { return { (void*)this, "bAllowMultiThreadedAnimationUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bCanBlueprintsTickByDefault()
    { return { (void*)this, "bCanBlueprintsTickByDefault" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForMultiplePawnsSpawnedInAFrame()
    { return { (void*)this, "bCheckForMultiplePawnsSpawnedInAFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAILogging()
    { return { (void*)this, "bDisableAILogging" }; }
    BitFieldValue<bool, unsigned __int32> bEnableEditorPSysRealtimeLOD()
    { return { (void*)this, "bEnableEditorPSysRealtimeLOD" }; }
    BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessages()
    { return { (void*)this, "bEnableOnScreenDebugMessages" }; }
    BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessagesDisplay()
    { return { (void*)this, "bEnableOnScreenDebugMessagesDisplay" }; }
    unsigned int& bEnableVisualLogRecordingOnStartField() const
    { return *GetNativePointerField<unsigned int*>(this, "UShooterEngine.bEnableVisualLogRecordingOnStart"); }
    BitFieldValue<bool, unsigned __int32> bGenerateDefaultTimecode()
    { return { (void*)this, "bGenerateDefaultTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bIsOverridingSelectedColor()
    { return { (void*)this, "bIsOverridingSelectedColor" }; }
    BitFieldValue<bool, unsigned __int32> bLockReadOnlyLevels()
    { return { (void*)this, "bLockReadOnlyLevels" }; }
    BitFieldValue<bool, unsigned __int32> bOptimizeAnimBlueprintMemberVariableAccess()
    { return { (void*)this, "bOptimizeAnimBlueprintMemberVariableAccess" }; }
    BitFieldValue<bool, unsigned __int32> bPauseOnLossOfFocus()
    { return { (void*)this, "bPauseOnLossOfFocus" }; }
    BitFieldValue<bool, unsigned __int32> bRenderLightMapDensityGrayscale()
    { return { (void*)this, "bRenderLightMapDensityGrayscale" }; }
    BitFieldValue<bool, unsigned __int32> bShouldGenerateLowQualityLightmaps()
    { return { (void*)this, "bShouldGenerateLowQualityLightmaps" }; }
    BitFieldValue<bool, unsigned __int32> bSmoothFrameRate()
    { return { (void*)this, "bSmoothFrameRate" }; }
    BitFieldValue<bool, unsigned __int32> bStartedLoadMapMovie()
    { return { (void*)this, "bStartedLoadMapMovie" }; }
    BitFieldValue<bool, unsigned __int32> bSubtitlesEnabled()
    { return { (void*)this, "bSubtitlesEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bSubtitlesForcedOff()
    { return { (void*)this, "bSubtitlesForcedOff" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressMapWarnings()
    { return { (void*)this, "bSuppressMapWarnings" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedFrameRate()
    { return { (void*)this, "bUseFixedFrameRate" }; }
};

#endif  // BRZ_SDK_JOGO_USHOOTERENGINE_H
