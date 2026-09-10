// ==========================================================================
//  UWorld — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLD_H
#define BRZ_SDK_JOGO_UWORLD_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AGameModeBase;
struct AGameStateBase;
struct APhysicsVolume;
struct APlayerController;
struct AWorldSettings;
struct FName;
struct UAISystemBase;
struct UCanvas;
struct UGameInstance;
struct UGameViewportClient;
struct ULevel;
struct ULocalPlayer;
struct UMaterialParameterCollectionInstance;
struct UNetDriver;

#include "UPrimalWorld.h"

struct UWorld : public UPrimalWorld
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorld"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.AddController(AController*)
    // endereco: casamento de bytes com a build de referencia
    void AddController(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.AddController(AController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AddLevel(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.AddLevel(ULevel*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.AddNetworkActor(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void AddNetworkActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.AddNetworkActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.AddParameterCollectionInstance(UMaterialParameterCollection*,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddParameterCollectionInstance(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UWorld.AddParameterCollectionInstance(UMaterialParameterCollection*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AddPhysicsVolume(APhysicsVolume*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddPhysicsVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.AddPhysicsVolume(APhysicsVolume*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UWorld.AddPostProcessingSettings(UE::Math::TVector<double>,FSceneView*)
    // endereco: casamento de bytes com a build de referencia
    static void AddPostProcessingSettings(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UWorld.AddPostProcessingSettings(UE::Math::TVector<double>,FSceneView*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UWorld.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AddStreamingLevel(ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddStreamingLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.AddStreamingLevel(ULevelStreaming*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AddStreamingLevels(TArrayView<ULevelStreaming*const,int>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddStreamingLevels(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.AddStreamingLevels(TArrayView<ULevelStreaming*const,int>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AddUniqueStreamingLevel(ULevelStreaming*)
    // endereco: cache_pdb_25090264
    BrzPonteiro AddUniqueStreamingLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.AddUniqueStreamingLevel(ULevelStreaming*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AllowAudioPlayback()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro AllowAudioPlayback() const
    {
        return NativeCall<void*>(this, "UWorld.AllowAudioPlayback()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AllowLevelLoadRequests()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowLevelLoadRequests() const
    {
        return NativeCall<void*>(this, "UWorld.AllowLevelLoadRequests()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AreActorsInitialized()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro AreActorsInitialized() const
    {
        return NativeCall<void*>(this, "UWorld.AreActorsInitialized()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.AreAlwaysLoadedLevelsLoaded()
    // endereco: casamento de bytes com a build de referencia
    bool AreAlwaysLoadedLevelsLoaded() const
    {
        return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.AsyncLineTraceByChannel(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    void AsyncLineTraceByChannel(void* retorno, int a0, void* a1, void* a2, int a3, void* a4, void* a5, void* a6, unsigned int a7) const
    {
        NativeCall<void, void*, int, void*, void*, int, void*, void*, void*, unsigned int>(this, "UWorld.AsyncLineTraceByChannel(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&,TDelegate<void__cdecl(FTraceHandle&,FTraceDatum&)>*,unsignedint)", retorno, a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AsyncLineTraceByProfile(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncLineTraceByProfile(int a0, void* a1, void* a2, unsigned long long a3, void* a4, void* a5, unsigned int a6) const
    {
        return NativeCall<void*, int, void*, void*, unsigned long long, void*, void*, unsigned int>(this, "UWorld.AsyncLineTraceByProfile(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName,FCollisionQueryParams&,TDelegate<void__cdecl(FTraceHandle&,FTraceDatum&)>*,unsignedint)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AsyncOverlapByChannel(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChann
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncOverlapByChannel(void* a0, void* a1, int a2, void* a3, void* a4, void* a5, void* a6, unsigned int a7) const
    {
        return NativeCall<void*, void*, void*, int, void*, void*, void*, void*, unsigned int>(this, "UWorld.AsyncOverlapByChannel(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&,TDelegate<void__cdecl(FTraceHandle&,FOverlapDatum&)>*,unsignedint)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AsyncOverlapByObjectType(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionOb
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncOverlapByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, unsigned int a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, unsigned int>(this, "UWorld.AsyncOverlapByObjectType(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&,TDelegate<void__cdecl(FTraceHandle&,FOverlapDatum&)>*,unsignedint)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AsyncOverlapByProfile(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisio
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncOverlapByProfile(void* a0, void* a1, unsigned long long a2, void* a3, void* a4, void* a5, unsigned int a6) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, void*, void*, void*, unsigned int>(this, "UWorld.AsyncOverlapByProfile(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&,TDelegate<void__cdecl(FTraceHandle&,FOverlapDatum&)>*,unsignedint)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AsyncSweepByChannel(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncSweepByChannel(int a0, void* a1, void* a2, void* a3, int a4, void* a5, void* a6, void* a7, void* a8, unsigned int a9) const
    {
        return NativeCall<void*, int, void*, void*, void*, int, void*, void*, void*, void*, unsigned int>(this, "UWorld.AsyncSweepByChannel(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&,TDelegate<void__cdecl(FTraceHandle&,FTraceDatum&)>*,unsignedint)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.AsyncSweepByProfile(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncSweepByProfile(int a0, void* a1, void* a2, void* a3, unsigned long long a4, void* a5, void* a6, void* a7, unsigned int a8) const
    {
        return NativeCall<void*, int, void*, void*, void*, unsigned long long, void*, void*, void*, unsigned int>(this, "UWorld.AsyncSweepByProfile(EAsyncTraceType,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&,TDelegate<void__cdecl(FTraceHandle&,FTraceDatum&)>*,unsignedint)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UWorld.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "UWorld.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.BeginTearingDown()
    // endereco: cache_pdb_25090264
    void BeginTearingDown() const
    {
        NativeCall<void>(this, "UWorld.BeginTearingDown()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.BlockTillLevelStreamingCompleted()
    // endereco: casamento de bytes com a build de referencia
    void BlockTillLevelStreamingCompleted() const
    {
        NativeCall<void>(this, "UWorld.BlockTillLevelStreamingCompleted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.BroadcastPostTickDispatch()
    // endereco: cache_pdb_25090264
    BrzPonteiro BroadcastPostTickDispatch() const
    {
        return NativeCall<void*>(this, "UWorld.BroadcastPostTickDispatch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.BroadcastPostTickFlush(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro BroadcastPostTickFlush(float a0) const
    {
        return NativeCall<void*, float>(this, "UWorld.BroadcastPostTickFlush(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.BroadcastPreTickFlush(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro BroadcastPreTickFlush(float a0) const
    {
        return NativeCall<void*, float>(this, "UWorld.BroadcastPreTickFlush(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.BroadcastTickDispatch(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro BroadcastTickDispatch(float a0) const
    {
        return NativeCall<void*, float>(this, "UWorld.BroadcastTickDispatch(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.BroadcastTickFlush(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro BroadcastTickFlush(float a0) const
    {
        return NativeCall<void*, float>(this, "UWorld.BroadcastTickFlush(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.BuildPIEPackagePrefix(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuildPIEPackagePrefix(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.BuildPIEPackagePrefix(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.CleanupWorld(bool,bool,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanupWorld(bool a0, bool a1, void* a2) const
    {
        return NativeCall<void*, bool, bool, void*>(this, "UWorld.CleanupWorld(bool,bool,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.CleanupWorldInternal(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void CleanupWorldInternal(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "UWorld.CleanupWorldInternal(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ClearActorComponentEndOfFrameUpdate(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearActorComponentEndOfFrameUpdate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.ClearActorComponentEndOfFrameUpdate(UActorComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ClearDemoNetDriver()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ClearDemoNetDriver() const
    {
        return NativeCall<void*>(this, "UWorld.ClearDemoNetDriver()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ClearNetDriver(UNetDriver*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ClearNetDriver(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.ClearNetDriver(UNetDriver*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.CommitMapChange()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CommitMapChange() const
    {
        return NativeCall<void*>(this, "UWorld.CommitMapChange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ComponentOverlapMulti(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UPrimitiveCompon
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComponentOverlapMulti(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "UWorld.ComponentOverlapMulti(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FComponentQueryParams&,FCollisionObjectQueryParams&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ComponentOverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UPrimit
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComponentOverlapMultiByChannel(void* a0, void* a1, void* a2, void* a3, int a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int, void*, void*>(this, "UWorld.ComponentOverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FComponentQueryParams&,FCollisionObjectQueryParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ComponentSweepMulti(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UPrimitiveComponent*,U
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComponentSweepMulti(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "UWorld.ComponentSweepMulti(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FComponentQueryParams&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ComponentSweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UPrimitiveCom
    // endereco: casamento de bytes com a build de referencia
    bool ComponentSweepMultiByChannel(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, void*>(this, "UWorld.ComponentSweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FComponentQueryParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ConditionallyCreateDefaultLevelCollections()
    // endereco: casamento de bytes com a build de referencia
    void ConditionallyCreateDefaultLevelCollections() const
    {
        NativeCall<void>(this, "UWorld.ConditionallyCreateDefaultLevelCollections()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ContainsActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ContainsActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.ContainsActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ConvertToPIEPackageName(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static void ConvertToPIEPackageName(void* retorno, const FString& a0, int a1)
    {
        NativeCall<void, void*, void*, int>(nullptr, "UWorld.ConvertToPIEPackageName(FString&,int)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ConvertToPIEPackageName(void* retorno, FString* a0, int a1)
    { ConvertToPIEPackageName(retorno, *a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.CreateAISystem()
    // endereco: casamento de bytes com a build de referencia
    UAISystemBase* CreateAISystem() const
    {
        return NativeCall<UAISystemBase*>(this, "UWorld.CreateAISystem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.CreateFXSystem()
    // endereco: cache_pdb_25090264
    BrzPonteiro CreateFXSystem() const
    {
        return NativeCall<void*>(this, "UWorld.CreateFXSystem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.CreateWorld(EWorldType::Type,bool,FName,UPackage*,bool,ERHIFeatureLevel::Type,FWorldIniti
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateWorld(int a0, bool a1, unsigned long long a2, void* a3, bool a4, int a5, void* a6, bool a7)
    {
        return NativeCall<void*, int, bool, unsigned long long, void*, bool, int, void*, bool>(nullptr, "UWorld.CreateWorld(EWorldType::Type,bool,FName,UPackage*,bool,ERHIFeatureLevel::Type,FWorldInitializationValues*,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.DestroyActor(AActor*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool DestroyActor(void* a0, bool a1, bool a2) const
    {
        return NativeCall<bool, void*, bool, bool>(this, "UWorld.DestroyActor(AActor*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.DestroyDemoNetDriver()
    // endereco: casamento de bytes com a build de referencia
    void DestroyDemoNetDriver() const
    {
        NativeCall<void>(this, "UWorld.DestroyDemoNetDriver()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.DestroySwappedPC(UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    bool DestroySwappedPC(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UWorld.DestroySwappedPC(UNetConnection*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UWorld.EncroachingBlockingGeometry(AActor*,UE::Math::TVector<double>,UE::Math::TRotator<double>,
    // endereco: casamento de bytes com a build de referencia
    static char EncroachingBlockingGeometry(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<char, void*, void*, void*, void*>(nullptr, "UWorld.EncroachingBlockingGeometry(AActor*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.EnsureCollisionTreeIsBuilt()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnsureCollisionTreeIsBuilt() const
    {
        return NativeCall<void*>(this, "UWorld.EnsureCollisionTreeIsBuilt()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.Exec(UWorld*,wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    bool Exec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UWorld.Exec(UWorld*,wchar_t*,FOutputDevice&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.FindCollectionByType(ELevelCollectionType)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro FindCollectionByType(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.FindCollectionByType(ELevelCollectionType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.FindCollectionIndexByType(ELevelCollectionType)
    // endereco: cache_pdb_25090264
    BrzPonteiro FindCollectionIndexByType(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.FindCollectionIndexByType(ELevelCollectionType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.FindOrAddCollectionByType(ELevelCollectionType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindOrAddCollectionByType(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.FindOrAddCollectionByType(ELevelCollectionType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.FindOrAddCollectionByType_Index(ELevelCollectionType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindOrAddCollectionByType_Index(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.FindOrAddCollectionByType_Index(ELevelCollectionType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.FindOrAddCollectionForLevelStreaming(ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindOrAddCollectionForLevelStreaming(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.FindOrAddCollectionForLevelStreaming(ULevelStreaming*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UWorld.FindTeleportSpot(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static bool FindTeleportSpot(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UWorld.FindTeleportSpot(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.FindWorldInPackage(UPackage*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindWorldInPackage(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UWorld.FindWorldInPackage(UPackage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.FinishAsyncTrace()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishAsyncTrace() const
    {
        return NativeCall<void*>(this, "UWorld.FinishAsyncTrace()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.FinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    void FinishDestroy() const
    {
        NativeCall<void>(this, "UWorld.FinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.FlushLevelStreaming(EFlushLevelStreamingType)
    // endereco: casamento de bytes com a build de referencia
    void FlushLevelStreaming(int a0) const
    {
        NativeCall<void, int>(this, "UWorld.FlushLevelStreaming(EFlushLevelStreamingType)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.FollowWorldRedirectorInPackage(UPackage*,UObjectRedirector**)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FollowWorldRedirectorInPackage(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UWorld.FollowWorldRedirectorInPackage(UPackage*,UObjectRedirector**)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetActiveLevelCollection()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetActiveLevelCollection() const
    {
        return NativeCall<void*>(this, "UWorld.GetActiveLevelCollection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetActiveLightingScenario()
    // endereco: cache_pdb_25090264
    ULevel* GetActiveLightingScenario() const
    {
        return NativeCall<ULevel*>(this, "UWorld.GetActiveLightingScenario()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetActorCount()
    // endereco: casamento de bytes com a build de referencia
    int GetActorCount() const
    {
        return NativeCall<int>(this, "UWorld.GetActorCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetAllowDeferredPhysicsStateCreation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetAllowDeferredPhysicsStateCreation() const
    {
        return NativeCall<void*>(this, "UWorld.GetAllowDeferredPhysicsStateCreation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetAudioDevice()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAudioDevice() const
    {
        return NativeCall<void*>(this, "UWorld.GetAudioDevice()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetAudioDeviceRaw()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAudioDeviceRaw() const
    {
        return NativeCall<void*>(this, "UWorld.GetAudioDeviceRaw()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetAudioSettings(UE::Math::TVector<double>&,FReverbSettings*,FInteriorSettings*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAudioSettings(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorld.GetAudioSettings(UE::Math::TVector<double>&,FReverbSettings*,FInteriorSettings*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetAuthGameMode<APrimalGameMode>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAuthGameMode_APrimalGameMode_() const
    {
        return NativeCall<void*>(this, "UWorld.GetAuthGameMode<APrimalGameMode>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetAuthGameMode<AShooterGameMode>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAuthGameMode_AShooterGameMode_() const
    {
        return NativeCall<void*>(this, "UWorld.GetAuthGameMode<AShooterGameMode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetAutoActivateCameraIterator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAutoActivateCameraIterator() const
    {
        return NativeCall<void*>(this, "UWorld.GetAutoActivateCameraIterator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetBegunPlay()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetBegunPlay() const
    {
        return NativeCall<void*>(this, "UWorld.GetBegunPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetChaosEventRelay()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetChaosEventRelay() const
    {
        return NativeCall<void*>(this, "UWorld.GetChaosEventRelay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetCollisionProfileChannelAndResponseParams(FName,ECollisionChannel&,FCollisionResponsePa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCollisionProfileChannelAndResponseParams(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "UWorld.GetCollisionProfileChannelAndResponseParams(FName,ECollisionChannel&,FCollisionResponseParams&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetControllerIterator()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetControllerIterator() const
    {
        return NativeCall<void*>(this, "UWorld.GetControllerIterator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetCurrentLevel()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCurrentLevel() const
    {
        return NativeCall<void*>(this, "UWorld.GetCurrentLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetDefaultGravityZ()
    // endereco: casamento de bytes com a build de referencia
    float GetDefaultGravityZ() const
    {
        return NativeCall<float>(this, "UWorld.GetDefaultGravityZ()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetDefaultPhysicsVolume()
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetDefaultPhysicsVolume() const
    {
        return NativeCall<APhysicsVolume*>(this, "UWorld.GetDefaultPhysicsVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetFirstLocalPlayerFromController()
    // endereco: casamento de bytes com a build de referencia
    ULocalPlayer* GetFirstLocalPlayerFromController() const
    {
        return NativeCall<ULocalPlayer*>(this, "UWorld.GetFirstLocalPlayerFromController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetGameState<AShooterGameState>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameState_AShooterGameState_() const
    {
        return NativeCall<void*>(this, "UWorld.GetGameState<AShooterGameState>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetGameViewport()
    // endereco: casamento de bytes com a build de referencia
    UGameViewportClient* GetGameViewport() const
    {
        return NativeCall<UGameViewportClient*>(this, "UWorld.GetGameViewport()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetGravityZ()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGravityZ() const
    {
        return NativeCall<void*>(this, "UWorld.GetGravityZ()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetLatentActionManager()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLatentActionManager() const
    {
        return NativeCall<void*>(this, "UWorld.GetLatentActionManager()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetLevel(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLevel(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorld.GetLevel(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetLevelIterator()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLevelIterator() const
    {
        return NativeCall<void*>(this, "UWorld.GetLevelIterator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetLevelScriptActor(ULevel*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLevelScriptActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.GetLevelScriptActor(ULevel*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetMapName()
    // endereco: casamento de bytes com a build de referencia
    void GetMapName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UWorld.GetMapName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetNumPlayerControllers()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNumPlayerControllers() const
    {
        return NativeCall<void*>(this, "UWorld.GetNumPlayerControllers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetParameterCollectionInstance(UMaterialParameterCollection*)
    // endereco: casamento de bytes com a build de referencia
    UMaterialParameterCollectionInstance* GetParameterCollectionInstance(void* a0) const
    {
        return NativeCall<UMaterialParameterCollectionInstance*, void*>(this, "UWorld.GetParameterCollectionInstance(UMaterialParameterCollection*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetParameterCollectionInstances(TArray<UMaterialParameterCollectionInstance*,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetParameterCollectionInstances(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.GetParameterCollectionInstances(TArray<UMaterialParameterCollectionInstance*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetPlayerControllerIterator()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetPlayerControllerIterator() const
    {
        return NativeCall<void*>(this, "UWorld.GetPlayerControllerIterator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetPrimaryAssetId()
    // endereco: casamento de bytes com a build de referencia
    void GetPrimaryAssetId(void* retorno) const
    {
        NativeCall<void, void*>(this, "UWorld.GetPrimaryAssetId()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSoftObjectPathMapping(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSoftObjectPathMapping(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorld.GetSoftObjectPathMapping(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetSoftObjectPathMapping(FString* a0, FString* a1) const
    { return GetSoftObjectPathMapping(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UAutoDestroySubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetSubsystem_UAutoDestroySubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UAutoDestroySubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UDataLayerSubsystem>()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSubsystem_UDataLayerSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UDataLayerSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UDaySequenceSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSubsystem_UDaySequenceSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UDaySequenceSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UGameAnalyticsSubsystem>()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSubsystem_UGameAnalyticsSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UGameAnalyticsSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UGeometryCollectionISMPoolSubSystem>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetSubsystem_UGeometryCollectionISMPoolSubSystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UGeometryCollectionISMPoolSubSystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UHoldoutCompositeSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    BrzPonteiro GetSubsystem_UHoldoutCompositeSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UHoldoutCompositeSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<ULandscapeSubsystem>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetSubsystem_ULandscapeSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<ULandscapeSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<ULevelInstanceSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    BrzPonteiro GetSubsystem_ULevelInstanceSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<ULevelInstanceSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassActorSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSubsystem_UMassActorSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassActorSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassAgentSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSubsystem_UMassAgentSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassAgentSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassDebuggerSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    BrzPonteiro GetSubsystem_UMassDebuggerSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassDebuggerSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassEQSSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    BrzPonteiro GetSubsystem_UMassEQSSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassEQSSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassEntitySubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=6]]
    BrzPonteiro GetSubsystem_UMassEntitySubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassEntitySubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassReplicationSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetSubsystem_UMassReplicationSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassReplicationSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassRepresentationSubsystem>()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSubsystem_UMassRepresentationSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassRepresentationSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassSignalSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=3]]
    BrzPonteiro GetSubsystem_UMassSignalSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassSignalSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassSimulationSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=5]]
    BrzPonteiro GetSubsystem_UMassSimulationSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassSimulationSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMassSpawnerSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=4]]
    BrzPonteiro GetSubsystem_UMassSpawnerSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMassSpawnerSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UMovieGraphRenderLayerSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetSubsystem_UMovieGraphRenderLayerSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UMovieGraphRenderLayerSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UNavigationObjectRepository>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetSubsystem_UNavigationObjectRepository_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UNavigationObjectRepository>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UPCGSubsystem>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetSubsystem_UPCGSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UPCGSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UPrimalMassSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=4]]
    BrzPonteiro GetSubsystem_UPrimalMassSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UPrimalMassSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<USmartObjectSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSubsystem_USmartObjectSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<USmartObjectSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    BrzPonteiro GetSubsystem_UWorldPartitionHLODRuntimeSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UWorldPartitionSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=4]]
    BrzPonteiro GetSubsystem_UWorldPartitionSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UWorldPartitionSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UZoneGraphAnnotationSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=2]]
    BrzPonteiro GetSubsystem_UZoneGraphAnnotationSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UZoneGraphAnnotationSubsystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetSubsystem<UZoneGraphSubsystem>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=5]]
    BrzPonteiro GetSubsystem_UZoneGraphSubsystem_() const
    {
        return NativeCall<void*>(this, "UWorld.GetSubsystem<UZoneGraphSubsystem>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetTimerManager()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetTimerManager() const
    {
        return NativeCall<void*>(this, "UWorld.GetTimerManager()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetWorldDataLayers()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldDataLayers() const
    {
        return NativeCall<void*>(this, "UWorld.GetWorldDataLayers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.GetWorldPartition()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldPartition() const
    {
        return NativeCall<void*>(this, "UWorld.GetWorldPartition()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.GetWorldSettings(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    AWorldSettings* GetWorldSettings(bool a0, bool a1) const
    {
        return NativeCall<AWorldSettings*, bool, bool>(this, "UWorld.GetWorldSettings(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.HandleDemoPlayCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleDemoPlayCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UWorld.HandleDemoPlayCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.HandleDemoRecordCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleDemoRecordCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UWorld.HandleDemoRecordCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.HandleDemoScrubCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool HandleDemoScrubCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UWorld.HandleDemoScrubCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.HandleLogLastRenderedPostProcessSettings(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleLogLastRenderedPostProcessSettings(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorld.HandleLogLastRenderedPostProcessSettings(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.HandleTimelineScrubbed()
    // endereco: casamento de bytes com a build de referencia
    void HandleTimelineScrubbed() const
    {
        NativeCall<void>(this, "UWorld.HandleTimelineScrubbed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.HasBegunPlay()
    // endereco: cache_pdb_25090264
    BrzPonteiro HasBegunPlay() const
    {
        return NativeCall<void*>(this, "UWorld.HasBegunPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.HasEndOfFrameUpdates()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro HasEndOfFrameUpdates() const
    {
        return NativeCall<void*>(this, "UWorld.HasEndOfFrameUpdates()");
    }

    // dump_sobre_sdk_287a0
    //   UWorld.InitWorld(FWorldInitializationValues)
    // endereco: casamento de bytes com a build de referencia
    static void InitWorld(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UWorld.InitWorld(FWorldInitializationValues)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.InitializeActorsForPlay(FURL&,bool,FRegisterComponentContext*)
    // endereco: casamento de bytes com a build de referencia
    void InitializeActorsForPlay(void* a0, bool a1, void* a2) const
    {
        NativeCall<void, void*, bool, void*>(this, "UWorld.InitializeActorsForPlay(FURL&,bool,FRegisterComponentContext*)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UWorld.InitializeNewWorld(FWorldInitializationValues,bool)
    // endereco: casamento de bytes com a build de referencia
    static void InitializeNewWorld(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UWorld.InitializeNewWorld(FWorldInitializationValues,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.InsertPostProcessVolume(IInterface_PostProcessVolume*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InsertPostProcessVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.InsertPostProcessVolume(IInterface_PostProcessVolume*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.InternalGetDefaultPhysicsVolume()
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* InternalGetDefaultPhysicsVolume() const
    {
        return NativeCall<APhysicsVolume*>(this, "UWorld.InternalGetDefaultPhysicsVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.InternalUpdateStreamingState()
    // endereco: casamento de bytes com a build de referencia
    void InternalUpdateStreamingState() const
    {
        NativeCall<void>(this, "UWorld.InternalUpdateStreamingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.IsEditorWorld()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsEditorWorld() const
    {
        return NativeCall<void*>(this, "UWorld.IsEditorWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsGameWorld()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    static bool IsGameWorld()
    {
        return NativeCall<bool>(nullptr, "UWorld.IsGameWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsInSeamlessTravel()
    // endereco: casamento de bytes com a build de referencia
    bool IsInSeamlessTravel() const
    {
        return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsInstanced()
    // endereco: casamento de bytes com a build de referencia
    bool IsInstanced() const
    {
        return NativeCall<bool>(this, "UWorld.IsInstanced()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsPartitionedWorld()
    // endereco: casamento de bytes com a build de referencia
    bool IsPartitionedWorld() const
    {
        return NativeCall<bool>(this, "UWorld.IsPartitionedWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsPaused()
    // endereco: casamento de bytes com a build de referencia
    bool IsPaused() const
    {
        return NativeCall<bool>(this, "UWorld.IsPaused()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.IsPlayInEditor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsPlayInEditor() const
    {
        return NativeCall<void*>(this, "UWorld.IsPlayInEditor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.IsPlayingReplay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPlayingReplay() const
    {
        return NativeCall<void*>(this, "UWorld.IsPlayingReplay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.IsPreparingMapChange()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsPreparingMapChange() const
    {
        return NativeCall<void*>(this, "UWorld.IsPreparingMapChange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.IsPreviewWorld()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsPreviewWorld() const
    {
        return NativeCall<void*>(this, "UWorld.IsPreviewWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsReadyForFinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    bool IsReadyForFinishDestroy() const
    {
        return NativeCall<bool>(this, "UWorld.IsReadyForFinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsRecordingClientReplay()
    // endereco: casamento de bytes com a build de referencia
    bool IsRecordingClientReplay() const
    {
        return NativeCall<bool>(this, "UWorld.IsRecordingClientReplay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.IsRecordingReplay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsRecordingReplay() const
    {
        return NativeCall<void*>(this, "UWorld.IsRecordingReplay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.IsVisibilityRequestPending()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool IsVisibilityRequestPending() const
    {
        return NativeCall<bool>(this, "UWorld.IsVisibilityRequestPending()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.K2_GetLastAverageSceneLuminance(float&,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro K2_GetLastAverageSceneLuminance(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UWorld.K2_GetLastAverageSceneLuminance(float&,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.LineTraceMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro LineTraceMultiByChannel(void* a0, void* a1, void* a2, int a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, void*>(this, "UWorld.LineTraceMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.LineTraceMultiByObjectType(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LineTraceMultiByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UWorld.LineTraceMultiByObjectType(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FCollisionObjectQueryParams&,FCollisionQueryParams&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.LineTraceMultiByProfile(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=243+chamadores=2]]
    static BrzPonteiro LineTraceMultiByProfile(void* a0, void* a1, void* a2, unsigned long long a3, void* a4)
    {
        return NativeCall<void*, void*, void*, void*, unsigned long long, void*>(nullptr, "UWorld.LineTraceMultiByProfile(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName,FCollisionQueryParams&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.LineTraceSingleByChannel(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool LineTraceSingleByChannel(void* a0, void* a1, void* a2, int a3, void* a4, void* a5) const
    {
        return NativeCall<bool, void*, void*, void*, int, void*, void*>(this, "UWorld.LineTraceSingleByChannel(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.LineTraceSingleByObjectType(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    bool LineTraceSingleByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*>(this, "UWorld.LineTraceSingleByObjectType(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FCollisionObjectQueryParams&,FCollisionQueryParams&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.LineTraceSingleByProfile(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro LineTraceSingleByProfile(void* a0, void* a1, void* a2, unsigned long long a3, void* a4)
    {
        return NativeCall<void*, void*, void*, void*, unsigned long long, void*>(nullptr, "UWorld.LineTraceSingleByProfile(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName,FCollisionQueryParams&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.LineTraceTestByChannel(UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionCh
    // endereco: casamento de bytes com a build de referencia
    bool LineTraceTestByChannel(void* a0, void* a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, int, void*, void*>(this, "UWorld.LineTraceTestByChannel(UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.Listen(FURL&)
    // endereco: casamento de bytes com a build de referencia
    bool Listen(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UWorld.Listen(FURL&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    void MarkActorComponentForNeededEndOfFrameUpdate(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UWorld.MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.MarkObjectsPendingKill()
    // endereco: casamento de bytes com a build de referencia
    void MarkObjectsPendingKill() const
    {
        NativeCall<void>(this, "UWorld.MarkObjectsPendingKill()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ModifyLevel(ULevel*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro ModifyLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.ModifyLevel(ULevel*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.NotifyAcceptingChannel(UChannel*)
    // endereco: casamento de bytes com a build de referencia
    bool NotifyAcceptingChannel(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UWorld.NotifyAcceptingChannel(UChannel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.NotifyAcceptingConnection()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyAcceptingConnection() const
    {
        return NativeCall<void*>(this, "UWorld.NotifyAcceptingConnection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)
    // endereco: cache_pdb_25090264
    void NotifyControlMessage(void* a0, unsigned char a1, void* a2) const
    {
        NativeCall<void, void*, unsigned char, void*>(this, "UWorld.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.NotifyPostRegisterAllActorComponents(AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro NotifyPostRegisterAllActorComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.NotifyPostRegisterAllActorComponents(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.NotifyPreUnregisterAllActorComponents(AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro NotifyPreUnregisterAllActorComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.NotifyPreUnregisterAllActorComponents(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OnPostGC()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPostGC() const
    {
        return NativeCall<void*>(this, "UWorld.OnPostGC()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OnPostTickDispatch()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnPostTickDispatch() const
    {
        return NativeCall<void*>(this, "UWorld.OnPostTickDispatch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OnPostTickFlush()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnPostTickFlush() const
    {
        return NativeCall<void*>(this, "UWorld.OnPostTickFlush()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OnTickDispatch()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnTickDispatch() const
    {
        return NativeCall<void*>(this, "UWorld.OnTickDispatch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OnTickFlush()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnTickFlush() const
    {
        return NativeCall<void*>(this, "UWorld.OnTickFlush()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OverlapAnyTestByChannel(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionCha
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapAnyTestByChannel(void* a0, void* a1, int a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, int, void*, void*, void*>(this, "UWorld.OverlapAnyTestByChannel(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OverlapAnyTestByObjectType(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollision
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapAnyTestByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UWorld.OverlapAnyTestByObjectType(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OverlapBlockingTestByChannel(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisi
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapBlockingTestByChannel(void* a0, void* a1, int a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, int, void*, void*, void*>(this, "UWorld.OverlapBlockingTestByChannel(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapMultiByChannel(void* a0, void* a1, void* a2, int a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, void*, void*>(this, "UWorld.OverlapMultiByChannel(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OverlapMultiByObjectType(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapMultiByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "UWorld.OverlapMultiByObjectType(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.OverlapMultiByProfile(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapMultiByProfile(void* a0, void* a1, void* a2, unsigned long long a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, unsigned long long, void*, void*>(this, "UWorld.OverlapMultiByProfile(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.PopulateStreamingLevelsToConsider()
    // endereco: casamento de bytes com a build de referencia
    void PopulateStreamingLevelsToConsider() const
    {
        NativeCall<void>(this, "UWorld.PopulateStreamingLevelsToConsider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.PostDuplicate(bool)
    // endereco: casamento de bytes com a build de referencia
    void PostDuplicate(bool a0) const
    {
        NativeCall<void, bool>(this, "UWorld.PostDuplicate(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UWorld.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.PreDuplicate(FObjectDuplicationParameters&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro PreDuplicate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.PreDuplicate(FObjectDuplicationParameters&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.PreLoginCheckError(UNetConnection*,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreLoginCheckError(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorld.PreLoginCheckError(UNetConnection*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro PreLoginCheckError(void* a0, FString* a1) const
    { return PreLoginCheckError(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.PreSaveRoot(wchar_t*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PreSaveRoot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.PreSaveRoot(wchar_t*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.PrepareMapChange(TArray<FName,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareMapChange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.PrepareMapChange(TArray<FName,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.PrimalSpawnActorDeferred<APrimalDinoCharacter>(UClass*,UE::Math::TTransform<double>&,AAct
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalSpawnActorDeferred_APrimalDinoCharacter_(void* a0, void* a1, void* a2, void* a3, int a4, int a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int, int>(this, "UWorld.PrimalSpawnActorDeferred<APrimalDinoCharacter>(UClass*,UE::Math::TTransform<double>&,AActor*,APawn*,ESpawnActorCollisionHandlingMethod,ESpawnActorScaleMethod)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ProcessLevelStreamingVolumes(UE::Math::TVector<double>*)
    // endereco: casamento de bytes com a build de referencia
    void ProcessLevelStreamingVolumes(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.ProcessLevelStreamingVolumes(UE::Math::TVector<double>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.QueryTraceData(FTraceHandle&,FTraceDatum&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro QueryTraceData(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorld.QueryTraceData(FTraceHandle&,FTraceDatum&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.RegisterAutoActivateCamera(ACameraActor*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterAutoActivateCamera(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UWorld.RegisterAutoActivateCamera(ACameraActor*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ReleasePhysicsScene()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleasePhysicsScene() const
    {
        return NativeCall<void*>(this, "UWorld.ReleasePhysicsScene()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.RemapCompiledScriptActor(FString&)
    // endereco: casamento de bytes com a build de referencia
    bool RemapCompiledScriptActor(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "UWorld.RemapCompiledScriptActor(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool RemapCompiledScriptActor(FString* a0) const
    { return RemapCompiledScriptActor(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.RemoveActor(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveActor(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UWorld.RemoveActor(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.RemoveController(AController*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveController(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.RemoveController(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.RemoveNetworkActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveNetworkActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.RemoveNetworkActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.RemovePIEPrefix(FString&,int*)
    // endereco: casamento de bytes com a build de referencia
    static void RemovePIEPrefix(void* retorno, const FString& a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UWorld.RemovePIEPrefix(FString&,int*)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void RemovePIEPrefix(void* retorno, FString* a0, void* a1)
    { RemovePIEPrefix(retorno, *a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.RemovePhysicsVolume(APhysicsVolume*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemovePhysicsVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.RemovePhysicsVolume(APhysicsVolume*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.RemovePostProcessVolume(IInterface_PostProcessVolume*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemovePostProcessVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.RemovePostProcessVolume(IInterface_PostProcessVolume*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.RemoveStreamingLevel(ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveStreamingLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.RemoveStreamingLevel(ULevelStreaming*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.RemoveStreamingLevelAt(int)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveStreamingLevelAt(int a0) const
    {
        return NativeCall<bool, int>(this, "UWorld.RemoveStreamingLevelAt(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.RequestNewWorldOrigin(UE::Math::TIntVector3<int>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro RequestNewWorldOrigin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.RequestNewWorldOrigin(UE::Math::TIntVector3<int>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ResetAsyncTrace()
    // endereco: casamento de bytes com a build de referencia
    void ResetAsyncTrace() const
    {
        NativeCall<void>(this, "UWorld.ResetAsyncTrace()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ResolveSubobject(wchar_t*,UObject*&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ResolveSubobject(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "UWorld.ResolveSubobject(wchar_t*,UObject*&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SeamlessTravel(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void SeamlessTravel(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UWorld.SeamlessTravel(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SeamlessTravel(FString* a0, bool a1) const
    { SeamlessTravel(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SendAllEndOfFrameUpdates()
    // endereco: casamento de bytes com a build de referencia
    void SendAllEndOfFrameUpdates() const
    {
        NativeCall<void>(this, "UWorld.SendAllEndOfFrameUpdates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.ServerTravel(FString&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ServerTravel(const FString& a0, bool a1, bool a2) const
    {
        return NativeCall<bool, void*, bool, bool>(this, "UWorld.ServerTravel(FString&,bool,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool ServerTravel(FString* a0, bool a1, bool a2) const
    { return ServerTravel(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SetActiveLevelCollection(int)
    // endereco: casamento de bytes com a build de referencia
    void SetActiveLevelCollection(int a0) const
    {
        NativeCall<void, int>(this, "UWorld.SetActiveLevelCollection(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetAllowDeferredPhysicsStateCreation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetAllowDeferredPhysicsStateCreation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorld.SetAllowDeferredPhysicsStateCreation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetAudioDevice(FAudioDeviceHandle&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAudioDevice(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.SetAudioDevice(FAudioDeviceHandle&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetBegunPlay(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetBegunPlay(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorld.SetBegunPlay(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SetGameMode(FURL&)
    // endereco: casamento de bytes com a build de referencia
    bool SetGameMode(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UWorld.SetGameMode(FURL&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SetGameState(AGameStateBase*)
    // endereco: casamento de bytes com a build de referencia
    void SetGameState(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.SetGameState(AGameStateBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetNavigationSystem(UNavigationSystemBase*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetNavigationSystem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.SetNavigationSystem(UNavigationSystemBase*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UWorld.SetNewWorldOrigin(UE::Math::TIntVector3<int>)
    // endereco: casamento de bytes com a build de referencia
    static char SetNewWorldOrigin(void* a0)
    {
        return NativeCall<char, void*>(nullptr, "UWorld.SetNewWorldOrigin(UE::Math::TIntVector3<int>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetPhysicsScene(FPhysScene_Chaos*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPhysicsScene(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.SetPhysicsScene(FPhysScene_Chaos*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetShouldForceUnloadStreamingLevels(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetShouldForceUnloadStreamingLevels(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorld.SetShouldForceUnloadStreamingLevels(bool)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UWorld.SetStreamingLevels(TArrayView<ULevelStreaming*const,int>)
    // endereco: casamento de bytes com a build de referencia
    static void SetStreamingLevels(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UWorld.SetStreamingLevels(TArrayView<ULevelStreaming*const,int>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SetWorldDataLayers(AWorldDataLayers*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetWorldDataLayers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.SetWorldDataLayers(AWorldDataLayers*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SetupParameterCollectionInstances()
    // endereco: casamento de bytes com a build de referencia
    void SetupParameterCollectionInstances() const
    {
        NativeCall<void>(this, "UWorld.SetupParameterCollectionInstances()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SetupPhysicsTickFunctions(float)
    // endereco: casamento de bytes com a build de referencia
    void SetupPhysicsTickFunctions(float a0) const
    {
        NativeCall<void, float>(this, "UWorld.SetupPhysicsTickFunctions(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SpawnActor(UClass*,UE::Math::TTransform<double>*,FActorSpawnParameters&)
    // endereco: casamento de bytes com a build de referencia
    AActor* SpawnActor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<AActor*, void*, void*, void*>(this, "UWorld.SpawnActor(UClass*,UE::Math::TTransform<double>*,FActorSpawnParameters&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SpawnActor(UClass*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnPara
    // endereco: casamento de bytes com a build de referencia
    AActor* SpawnActor(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<AActor*, void*, void*, void*, void*>(this, "UWorld.SpawnActor(UClass*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FActorSpawnParameters&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SpawnActor<AHibernationManager>(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnActor_AHibernationManager_(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorld.SpawnActor<AHibernationManager>(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SpawnActorAbsolute(UClass*,UE::Math::TTransform<double>&,FActorSpawnParameters&)
    // endereco: casamento de bytes com a build de referencia
    AActor* SpawnActorAbsolute(void* a0, void* a1, void* a2) const
    {
        return NativeCall<AActor*, void*, void*, void*>(this, "UWorld.SpawnActorAbsolute(UClass*,UE::Math::TTransform<double>&,FActorSpawnParameters&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SpawnActorDeferred<AGameplayAbilityTargetActor>(UClass*,UE::Math::TTransform<double>&,AAc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnActorDeferred_AGameplayAbilityTargetActor_(void* a0, void* a1, void* a2, void* a3, int a4, int a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int, int>(this, "UWorld.SpawnActorDeferred<AGameplayAbilityTargetActor>(UClass*,UE::Math::TTransform<double>&,AActor*,APawn*,ESpawnActorCollisionHandlingMethod,ESpawnActorScaleMethod)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SpawnPlayActor(UPlayer*,ENetRole,FURL&,FUniqueNetIdRepl&,FString&,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    APlayerController* SpawnPlayActor(void* a0, int a1, void* a2, void* a3, const FString& a4, unsigned char a5) const
    {
        return NativeCall<APlayerController*, void*, int, void*, void*, void*, unsigned char>(this, "UWorld.SpawnPlayActor(UPlayer*,ENetRole,FURL&,FUniqueNetIdRepl&,FString&,unsignedchar)", a0, a1, a2, a3, const_cast<FString*>(&a4), a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    APlayerController* SpawnPlayActor(void* a0, int a1, void* a2, void* a3, FString* a4, unsigned char a5) const
    { return SpawnPlayActor(a0, a1, a2, a3, *a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.StripPIEPrefixFromPackageName(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void StripPIEPrefixFromPackageName(void* retorno, const FString& a0, const FString& a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UWorld.StripPIEPrefixFromPackageName(FString&,FString&)", retorno, const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void StripPIEPrefixFromPackageName(void* retorno, FString* a0, FString* a1)
    { StripPIEPrefixFromPackageName(retorno, *a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SupportsMakingInvisibleTransactionRequests()
    // endereco: casamento de bytes com a build de referencia
    bool SupportsMakingInvisibleTransactionRequests() const
    {
        return NativeCall<bool>(this, "UWorld.SupportsMakingInvisibleTransactionRequests()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SupportsMakingVisibleTransactionRequests()
    // endereco: casamento de bytes com a build de referencia
    bool SupportsMakingVisibleTransactionRequests() const
    {
        return NativeCall<bool>(this, "UWorld.SupportsMakingVisibleTransactionRequests()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<doub
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=100+bytes40+chamadores=22]]
    BrzPonteiro SweepMultiByChannel(void* a0, void* a1, void* a2, void* a3, int a4, void* a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int, void*, void*, void*>(this, "UWorld.SweepMultiByChannel(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SweepMultiByObjectType(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<d
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool SweepMultiByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*>(this, "UWorld.SweepMultiByObjectType(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SweepMultiByProfile(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    bool SweepMultiByProfile(void* a0, void* a1, void* a2, void* a3, unsigned long long a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, unsigned long long, void*, void*>(this, "UWorld.SweepMultiByProfile(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.SweepSingleByChannel(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SweepSingleByChannel(void* a0, void* a1, void* a2, void* a3, int a4, void* a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int, void*, void*, void*>(this, "UWorld.SweepSingleByChannel(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SweepSingleByObjectType(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool SweepSingleByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*>(this, "UWorld.SweepSingleByObjectType(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionObjectQueryParams&,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SweepSingleByProfile(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE
    // endereco: casamento de bytes com a build de referencia
    bool SweepSingleByProfile(void* a0, void* a1, void* a2, void* a3, unsigned long long a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, unsigned long long, void*, void*>(this, "UWorld.SweepSingleByProfile(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FName,FCollisionShape&,FCollisionQueryParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.SweepTestByChannel(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<
    // endereco: casamento de bytes com a build de referencia
    bool SweepTestByChannel(void* a0, void* a1, void* a2, int a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, int, void*, void*, void*>(this, "UWorld.SweepTestByChannel(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.Tick(ELevelTick,float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UWorld.Tick(ELevelTick,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.ToggleHLODHack0()
    // endereco: cache_pdb_25090264
    BrzPonteiro ToggleHLODHack0() const
    {
        return NativeCall<void*>(this, "UWorld.ToggleHLODHack0()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.UpdateCullDistanceVolumes(AActor*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool UpdateCullDistanceVolumes(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UWorld.UpdateCullDistanceVolumes(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.UpdateLevelStreaming()
    // endereco: casamento de bytes com a build de referencia
    void UpdateLevelStreaming() const
    {
        NativeCall<void>(this, "UWorld.UpdateLevelStreaming()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.UpdateStreamingLevelPriority(ULevelStreaming*)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateStreamingLevelPriority(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.UpdateStreamingLevelPriority(ULevelStreaming*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorld.UpdateStreamingLevelShouldBeConsidered(ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingLevelShouldBeConsidered(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorld.UpdateStreamingLevelShouldBeConsidered(ULevelStreaming*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.UpdateWorldComponents(bool,bool,FRegisterComponentContext*)
    // endereco: casamento de bytes com a build de referencia
    void UpdateWorldComponents(bool a0, bool a1, void* a2) const
    {
        NativeCall<void, bool, bool, void*>(this, "UWorld.UpdateWorldComponents(bool,bool,FRegisterComponentContext*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.WaitForAllAsyncTraceTasks()
    // endereco: casamento de bytes com a build de referencia
    void WaitForAllAsyncTraceTasks() const
    {
        NativeCall<void>(this, "UWorld.WaitForAllAsyncTraceTasks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UWorld.WelcomePlayer(UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    void WelcomePlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "UWorld.WelcomePlayer(UNetConnection*)", a0);
    }

    // ── SEM ENDERECO NESTA BUILD: o ajudante abaixo responde por elas ──
    //    UWorld.GetFirstPlayerController()

    BrzCampoPonteiro AISystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.AISystem")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelCollections` +16, medido na build 25090264
    //  (offset absoluto medido: 0x468; confianca alta)
    int& ActiveLevelCollectionIndexField() const
    { return BrzCampoAncorado<int>(this, "LevelCollections", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelCollections` +72, medido na build 25090264
    //  (offset absoluto medido: 0x4A0; confianca media)
    void*& AudioDeviceDestroyedHandleField() const
    { return BrzCampoAncorado<void*>(this, "LevelCollections", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelCollections` +48, medido na build 25090264
    //  (offset absoluto medido: 0x488; confianca media)
    void*& AudioDeviceHandleField() const
    { return BrzCampoAncorado<void*>(this, "LevelCollections", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +24, medido na build 25090264
    //  (offset absoluto medido: 0x9B0; confianca alta)
    double& AudioTimeSecondsField() const
    { return BrzCampoAncorado<double>(this, "TimeSeconds", 24); }
    TObjectPtr<AGameModeBase>& AuthorityGameModeField() const
    { return *GetNativePointerField<TObjectPtr<AGameModeBase>*>(this, "UWorld.AuthorityGameMode"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +48, medido na build 25090264
    //  (offset absoluto medido: 0x4F8; confianca media)
    void*& AutoCameraActorListField() const
    { return BrzCampoAncorado<void*>(this, "CanvasForDrawMaterialToRenderTarget", 48); }
    BrzCampoPonteiro AvoidanceManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.AvoidanceManager")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +72, medido na build 25090264
    //  (offset absoluto medido: 0x418; confianca media)
    int& BlockTillLevelStreamingCompletedEpochField() const
    { return BrzCampoAncorado<int>(this, "DefaultPhysicsVolume", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +32, medido na build 25090264
    //  (offset absoluto medido: 0x3F0; confianca alta)
    void*& CachedViewInfoRenderedLastFrameField() const
    { return BrzCampoAncorado<void*>(this, "DefaultPhysicsVolume", 32); }
    TObjectPtr<UCanvas>& CanvasForDrawMaterialToRenderTargetField() const
    { return *GetNativePointerField<TObjectPtr<UCanvas>*>(this, "UWorld.CanvasForDrawMaterialToRenderTarget"); }
    TObjectPtr<UCanvas>& CanvasForRenderingToTargetField() const
    { return *GetNativePointerField<TObjectPtr<UCanvas>*>(this, "UWorld.CanvasForRenderingToTarget"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +60, medido na build 25090264
    //  (offset absoluto medido: 0xA4C; confianca media)
    void*& CleanupWorldTagField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +48, medido na build 25090264
    //  (offset absoluto medido: 0xA40; confianca media)
    FName& CommittedPersistentLevelNameField() const
    { return BrzCampoAncorado<FName>(this, "ContentBundleManager", 48); }
    TArray<void*>& ComponentsThatNeedEndOfFrameUpdateField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate"); }
    TArray<void*>& ComponentsThatNeedEndOfFrameUpdate_OnGameThreadField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorld.ComponentsThatNeedEndOfFrameUpdate_OnGameThread"); }
    BrzCampoPonteiro ComponentsThatNeedPreEndOfFrameSyncField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.ComponentsThatNeedPreEndOfFrameSync")); }
    BrzCampoPonteiro ContentBundleManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.ContentBundleManager")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +16, medido na build 25090264
    //  (offset absoluto medido: 0x4D8; confianca alta)
    TArray<TWeakObjectPtr<void>>& ControllerListField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "CanvasForDrawMaterialToRenderTarget", 16); }
    TObjectPtr<ULevel>& CurrentLevelPendingInvisibilityField() const
    { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "UWorld.CurrentLevelPendingInvisibility"); }
    TObjectPtr<ULevel>& CurrentLevelPendingVisibilityField() const
    { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "UWorld.CurrentLevelPendingVisibility"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +104, medido na build 25090264
    //  (offset absoluto medido: 0x530; confianca media)
    void*& DefaultPhysicsScene_ChaosField() const
    { return BrzCampoAncorado<void*>(this, "CanvasForDrawMaterialToRenderTarget", 104); }
    TObjectPtr<APhysicsVolume>& DefaultPhysicsVolumeField() const
    { return *GetNativePointerField<TObjectPtr<APhysicsVolume>*>(this, "UWorld.DefaultPhysicsVolume"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +32, medido na build 25090264
    //  (offset absoluto medido: 0x9B8; confianca alta)
    float& DeltaRealTimeSecondsField() const
    { return BrzCampoAncorado<float>(this, "TimeSeconds", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +40, medido na build 25090264
    //  (offset absoluto medido: 0x9C0; confianca media)
    void*& DeltaTimeAlterationField() const
    { return BrzCampoAncorado<void*>(this, "TimeSeconds", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +36, medido na build 25090264
    //  (offset absoluto medido: 0x9BC; confianca media)
    float& DeltaTimeSecondsField() const
    { return BrzCampoAncorado<float>(this, "TimeSeconds", 36); }
    BrzCampoPonteiro DemoNetDriverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.DemoNetDriver")); }
    TArray<void*>& ExtraReferencedObjectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorld.ExtraReferencedObjects"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +56, medido na build 25090264
    //  (offset absoluto medido: 0x408; confianca media)
    void*& FeatureLevelField() const
    { return BrzCampoAncorado<void*>(this, "DefaultPhysicsVolume", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +8, medido na build 25090264
    //  (offset absoluto medido: 0xA18; confianca media)
    void*& FlushLevelStreamingTypeField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 8); }
    BrzCampoPonteiro ForegroundLineBatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.ForegroundLineBatcher")); }
    TObjectPtr<AGameStateBase>& GameStateField() const
    { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "UWorld.GameState"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +176, medido na build 25090264
    //  (offset absoluto medido: 0xAC0; confianca baixa)
    void*& GameStateSetEventField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +68, medido na build 25090264
    //  (offset absoluto medido: 0x414; confianca media)
    void*& IsInBlockTillLevelStreamingCompletedField() const
    { return BrzCampoAncorado<void*>(this, "DefaultPhysicsVolume", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +48, medido na build 25090264
    //  (offset absoluto medido: 0x400; confianca media)
    double& LastRenderTimeField() const
    { return BrzCampoAncorado<double>(this, "DefaultPhysicsVolume", 48); }
    BrzCampoPonteiro LevelCollectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.LevelCollections")); }
    TArray<void*>& LevelsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorld.Levels"); }
    BrzCampoPonteiro LineBatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.LineBatcher")); }
    BrzCampoPonteiro MyParticleEventManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.MyParticleEventManager")); }
    BrzCampoPonteiro NavigationSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.NavigationSystem")); }
    TObjectPtr<UNetDriver>& NetDriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "UWorld.NetDriver"); }
    BrzCampoPonteiro NetworkManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.NetworkManager")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +104, medido na build 25090264
    //  (offset absoluto medido: 0xA00; confianca media)
    float& NextSwitchCountdownField() const
    { return BrzCampoAncorado<float>(this, "TimeSeconds", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +9, medido na build 25090264
    //  (offset absoluto medido: 0xA19; confianca media)
    void*& NextTravelTypeField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA20; confianca media)
    FString& NextURLField() const
    { return BrzCampoAncorado<FString>(this, "ContentBundleManager", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +64, medido na build 25090264
    //  (offset absoluto medido: 0x508; confianca media)
    TArray<TWeakObjectPtr<void>>& NonDefaultPhysicsVolumeListField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "CanvasForDrawMaterialToRenderTarget", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +10, medido na build 25090264
    //  (offset absoluto medido: 0xA1A; confianca media)
    unsigned short& NumStreamingLevelsBeingLoadedField() const
    { return BrzCampoAncorado<unsigned short>(this, "ContentBundleManager", 10); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +80, medido na build 25090264
    //  (offset absoluto medido: 0xA60; confianca media)
    void*& OnActorsInitializedField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelCollections` +24, medido na build 25090264
    //  (offset absoluto medido: 0x470; confianca alta)
    void*& OnBeginPlayField() const
    { return BrzCampoAncorado<void*>(this, "LevelCollections", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +104, medido na build 25090264
    //  (offset absoluto medido: 0xA78; confianca media)
    void*& OnWorldBeginPlayField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +128, medido na build 25090264
    //  (offset absoluto medido: 0xA90; confianca media)
    void*& OnWorldMatchStartingField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +152, medido na build 25090264
    //  (offset absoluto medido: 0xAA8; confianca baixa)
    void*& OnWorldPreBeginPlayField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 152); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +56, medido na build 25090264
    //  (offset absoluto medido: 0x9D0; confianca media)
    void*& OriginLocationField() const
    { return BrzCampoAncorado<void*>(this, "TimeSeconds", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +80, medido na build 25090264
    //  (offset absoluto medido: 0x9E8; confianca media)
    void*& OriginOffsetThisFrameField() const
    { return BrzCampoAncorado<void*>(this, "TimeSeconds", 80); }
    TObjectPtr<UGameInstance>& OwningGameInstanceField() const
    { return *GetNativePointerField<TObjectPtr<UGameInstance>*>(this, "UWorld.OwningGameInstance"); }
    BrzCampoPonteiro PSCPoolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.PSCPool")); }
    BrzCampoPonteiro ParameterCollectionInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.ParameterCollectionInstances")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +72, medido na build 25090264
    //  (offset absoluto medido: 0xA58; confianca media)
    void*& ParticlePerfStatsField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +48, medido na build 25090264
    //  (offset absoluto medido: 0x9C8; confianca media)
    double& PauseDelayField() const
    { return BrzCampoAncorado<double>(this, "TimeSeconds", 48); }
    TArray<void*>& PerModuleDataObjectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorld.PerModuleDataObjects"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +64, medido na build 25090264
    //  (offset absoluto medido: 0xA50; confianca media)
    void*& PerfTrackersField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 64); }
    TObjectPtr<ULevel>& PersistentLevelField() const
    { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "UWorld.PersistentLevel"); }
    BrzCampoPonteiro PersistentLineBatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.PersistentLineBatcher")); }
    BrzCampoPonteiro PhysicsCollisionHandlerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.PhysicsCollisionHandler")); }
    BrzCampoPonteiro PhysicsFieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.PhysicsField")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +80, medido na build 25090264
    //  (offset absoluto medido: 0x518; confianca media)
    void*& PhysicsSceneField() const
    { return BrzCampoAncorado<void*>(this, "CanvasForDrawMaterialToRenderTarget", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +88, medido na build 25090264
    //  (offset absoluto medido: 0x520; confianca media)
    void*& PhysicsScene_ChaosField() const
    { return BrzCampoAncorado<void*>(this, "CanvasForDrawMaterialToRenderTarget", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +32, medido na build 25090264
    //  (offset absoluto medido: 0x4E8; confianca alta)
    TArray<TWeakObjectPtr<void>>& PlayerControllerListField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "CanvasForDrawMaterialToRenderTarget", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ComponentsThatNeedEndOfFrameUpdate_OnGameThread` +496, medido na build 25090264
    //  (offset absoluto medido: 0x798; confianca baixa)
    void*& PostTickDispatchEventField() const
    { return BrzCampoAncorado<void*>(this, "ComponentsThatNeedEndOfFrameUpdate_OnGameThread", 496); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +32, medido na build 25090264
    //  (offset absoluto medido: 0xA30; confianca media)
    TArray<void*>& PreparingLevelNamesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "ContentBundleManager", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +16, medido na build 25090264
    //  (offset absoluto medido: 0x9A8; confianca alta)
    double& RealTimeSecondsField() const
    { return BrzCampoAncorado<double>(this, "TimeSeconds", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +68, medido na build 25090264
    //  (offset absoluto medido: 0x9DC; confianca media)
    void*& RequestedOriginLocationField() const
    { return BrzCampoAncorado<void*>(this, "TimeSeconds", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CanvasForDrawMaterialToRenderTarget` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4D0; confianca alta)
    void*& SceneField() const
    { return BrzCampoAncorado<void*>(this, "CanvasForDrawMaterialToRenderTarget", 8); }
    BrzCampoPonteiro ServerStreamingLevelsVisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.ServerStreamingLevelsVisibility")); }
    BrzCampoPonteiro StreamingLevelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.StreamingLevels")); }
    FString& StreamingLevelsPrefixField() const
    { return *GetNativePointerField<FString*>(this, "UWorld.StreamingLevelsPrefix"); }
    BrzCampoPonteiro StreamingLevelsToConsiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.StreamingLevelsToConsider")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +57, medido na build 25090264
    //  (offset absoluto medido: 0x409; confianca media)
    unsigned char& TickGroupField() const
    { return BrzCampoAncorado<unsigned char>(this, "DefaultPhysicsVolume", 57); }
    double& TimeSecondsField() const
    { return *GetNativePointerField<double*>(this, "UWorld.TimeSeconds"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TimeSeconds` +8, medido na build 25090264
    //  (offset absoluto medido: 0x9A0; confianca alta)
    double& UnpausedTimeSecondsField() const
    { return BrzCampoAncorado<double>(this, "TimeSeconds", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3E0; confianca alta)
    TArray<void*>& ViewLocationsRenderedLastFrameField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "DefaultPhysicsVolume", 16); }
    BrzCampoPonteiro WorldCompositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorld.WorldComposition")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +58, medido na build 25090264
    //  (offset absoluto medido: 0x40A; confianca media)
    void*& WorldTypeField() const
    { return BrzCampoAncorado<void*>(this, "DefaultPhysicsVolume", 58); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3D8; confianca alta)
    void*& bAllowDeferredPhysicsStateCreationField() const
    { return BrzCampoAncorado<void*>(this, "DefaultPhysicsVolume", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ContentBundleManager` +200, medido na build 25090264
    //  (offset absoluto medido: 0xAD8; confianca baixa)
    void*& bBroadcastLevelsChangedEventIsEnabledField() const
    { return BrzCampoAncorado<void*>(this, "ContentBundleManager", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultPhysicsVolume` +64, medido na build 25090264
    //  (offset absoluto medido: 0x410; confianca media)
    void*& bIsBeingCleanedUpField() const
    { return BrzCampoAncorado<void*>(this, "DefaultPhysicsVolume", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StreamingLevelsPrefix` +18, medido na build 25090264
    //  (offset absoluto medido: 0x3AA; confianca alta)
    void*& bSupportsMakingInvisibleTransactionRequestsField() const
    { return BrzCampoAncorado<void*>(this, "StreamingLevelsPrefix", 18); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StreamingLevelsPrefix` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3A8; confianca alta)
    void*& bSupportsMakingVisibleTransactionRequestsField() const
    { return BrzCampoAncorado<void*>(this, "StreamingLevelsPrefix", 16); }
    BitFieldValue<bool, unsigned __int32> bWorldWasLoadedThisTick()
    { return { (void*)this, "bWorldWasLoadedThisTick" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerPostLoadMap()
    { return { (void*)this, "bTriggerPostLoadMap" }; }
    BitFieldValue<bool, unsigned __int32> bInTick()
    { return { (void*)this, "bInTick" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuilt()
    { return { (void*)this, "bIsBuilt" }; }
    BitFieldValue<bool, unsigned __int32> bTickNewlySpawned()
    { return { (void*)this, "bTickNewlySpawned" }; }
    BitFieldValue<bool, unsigned __int32> bPostTickComponentUpdate()
    { return { (void*)this, "bPostTickComponentUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bIsWorldInitialized()
    { return { (void*)this, "bIsWorldInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bIsLevelStreamingFrozen()
    { return { (void*)this, "bIsLevelStreamingFrozen" }; }
    BitFieldValue<bool, unsigned __int32> bDoDelayedUpdateCullDistanceVolumes()
    { return { (void*)this, "bDoDelayedUpdateCullDistanceVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIsRunningConstructionScript()
    { return { (void*)this, "bIsRunningConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSimulatePhysics()
    { return { (void*)this, "bShouldSimulatePhysics" }; }
    BitFieldValue<bool, unsigned __int32> bDropDetail()
    { return { (void*)this, "bDropDetail" }; }
    BitFieldValue<bool, unsigned __int32> bAggressiveLOD()
    { return { (void*)this, "bAggressiveLOD" }; }
    BitFieldValue<bool, unsigned __int32> bIsDefaultLevel()
    { return { (void*)this, "bIsDefaultLevel" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedBlockOnAsyncLoading()
    { return { (void*)this, "bRequestedBlockOnAsyncLoading" }; }
    BitFieldValue<bool, unsigned __int32> bActorsInitialized()
    { return { (void*)this, "bActorsInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bBegunPlay()
    { return { (void*)this, "bBegunPlay" }; }
    BitFieldValue<bool, unsigned __int32> bMatchStarted()
    { return { (void*)this, "bMatchStarted" }; }
    BitFieldValue<bool, unsigned __int32> bPlayersOnly()
    { return { (void*)this, "bPlayersOnly" }; }
    BitFieldValue<bool, unsigned __int32> bPlayersOnlyPending()
    { return { (void*)this, "bPlayersOnlyPending" }; }
    BitFieldValue<bool, unsigned __int32> bStartup()
    { return { (void*)this, "bStartup" }; }
    BitFieldValue<bool, unsigned __int32> bIsTearingDown()
    { return { (void*)this, "bIsTearingDown" }; }
    BitFieldValue<bool, unsigned __int32> bKismetScriptError()
    { return { (void*)this, "bKismetScriptError" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPauseExecution()
    { return { (void*)this, "bDebugPauseExecution" }; }
    BitFieldValue<bool, unsigned __int32> bIsCameraMoveableWhenPaused()
    { return { (void*)this, "bIsCameraMoveableWhenPaused" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAudioPlayback()
    { return { (void*)this, "bAllowAudioPlayback" }; }
    BitFieldValue<bool, unsigned __int32> bAreConstraintsDirty()
    { return { (void*)this, "bAreConstraintsDirty" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresHitProxies()
    { return { (void*)this, "bRequiresHitProxies" }; }
    BitFieldValue<bool, unsigned __int32> bShouldTick()
    { return { (void*)this, "bShouldTick" }; }
    BitFieldValue<bool, unsigned __int32> bStreamingDataDirty()
    { return { (void*)this, "bStreamingDataDirty" }; }
    BitFieldValue<bool, unsigned __int32> bShouldForceUnloadStreamingLevels()
    { return { (void*)this, "bShouldForceUnloadStreamingLevels" }; }
    BitFieldValue<bool, unsigned __int32> bShouldForceVisibleStreamingLevels()
    { return { (void*)this, "bShouldForceVisibleStreamingLevels" }; }
    BitFieldValue<bool, unsigned __int32> bMaterialParameterCollectionInstanceNeedsDeferredUpdate()
    { return { (void*)this, "bMaterialParameterCollectionInstanceNeedsDeferredUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bHasEverBeenInitialized()
    { return { (void*)this, "bHasEverBeenInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bMarkedObjectsPendingKill()
    { return { (void*)this, "bMarkedObjectsPendingKill" }; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    APlayerController* GetFirstPlayerController() const
    { TArray<TWeakObjectPtr<void>>& l = PlayerControllerListField(); return (l.ArrayNum > 0 && l.Data) ? (APlayerController*)l.Data[0].Get() : nullptr; }

};

#endif  // BRZ_SDK_JOGO_UWORLD_H
