// ==========================================================================
//  ULevel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVEL_H
#define BRZ_SDK_JOGO_ULEVEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AWorldSettings;
struct UWorld;

#include "UObject.h"

struct ULevel : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevel"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AddReferencedObjects(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "ULevel.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginDestroy() const
    {
        return NativeCall<void*>(this, "ULevel.BeginDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.BuildActors2TMap()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuildActors2TMap() const
    {
        return NativeCall<void*>(this, "ULevel.BuildActors2TMap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.BuildStreamingData(UWorld*,ULevel*,UTexture2D*)
    // endereco: cache_pdb_25090264
    BrzPonteiro BuildStreamingData(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevel.BuildStreamingData(UWorld*,ULevel*,UTexture2D*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.CleanupLevel(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanupLevel(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "ULevel.CleanupLevel(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.CleanupReferences()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CleanupReferences() const
    {
        return NativeCall<void*>(this, "ULevel.CleanupReferences()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.ClearActorsSeamlessTraveledFlag()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ClearActorsSeamlessTraveledFlag() const
    {
        return NativeCall<void*>(this, "ULevel.ClearActorsSeamlessTraveledFlag()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.ClearLevelComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearLevelComponents() const
    {
        return NativeCall<void*>(this, "ULevel.ClearLevelComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.CommitModelSurfaces()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CommitModelSurfaces() const
    {
        return NativeCall<void*>(this, "ULevel.CommitModelSurfaces()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.CreateCluster()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateCluster() const
    {
        return NativeCall<void*>(this, "ULevel.CreateCluster()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.CreateReplicatedDestructionInfo(AActor*const)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    BrzPonteiro CreateReplicatedDestructionInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.CreateReplicatedDestructionInfo(AActor*const)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.FinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishDestroy() const
    {
        return NativeCall<void*>(this, "ULevel.FinishDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetDestroyedReplicatedStaticActors()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetDestroyedReplicatedStaticActors() const
    {
        return NativeCall<void*>(this, "ULevel.GetDestroyedReplicatedStaticActors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetEstimatedAddToWorldWorkUnitsRemaining()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetEstimatedAddToWorldWorkUnitsRemaining() const
    {
        return NativeCall<void*>(this, "ULevel.GetEstimatedAddToWorldWorkUnitsRemaining()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetEstimatedAddToWorldWorkUnitsTotal()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetEstimatedAddToWorldWorkUnitsTotal() const
    {
        return NativeCall<void*>(this, "ULevel.GetEstimatedAddToWorldWorkUnitsTotal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetLevelScriptActor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetLevelScriptActor() const
    {
        return NativeCall<void*>(this, "ULevel.GetLevelScriptActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetWorld()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "ULevel.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetWorldDataLayers()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetWorldDataLayers() const
    {
        return NativeCall<void*>(this, "ULevel.GetWorldDataLayers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetWorldPartition()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldPartition() const
    {
        return NativeCall<void*>(this, "ULevel.GetWorldPartition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetWorldPartitionRuntimeCell()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldPartitionRuntimeCell() const
    {
        return NativeCall<void*>(this, "ULevel.GetWorldPartitionRuntimeCell()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.GetWorldSettings(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    AWorldSettings* GetWorldSettings(bool a0) const
    {
        return NativeCall<AWorldSettings*, bool>(this, "ULevel.GetWorldSettings(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.HandleLegacyMapBuildData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleLegacyMapBuildData() const
    {
        return NativeCall<void*>(this, "ULevel.HandleLegacyMapBuildData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.HasVisibilityChangeRequestPending()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro HasVisibilityChangeRequestPending() const
    {
        return NativeCall<void*>(this, "ULevel.HasVisibilityChangeRequestPending()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.IncrementalUnregisterComponents(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementalUnregisterComponents(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevel.IncrementalUnregisterComponents(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.IncrementalUpdateComponents(int,bool,FRegisterComponentContext*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementalUpdateComponents(int a0, bool a1, void* a2) const
    {
        return NativeCall<void*, int, bool, void*>(this, "ULevel.IncrementalUpdateComponents(int,bool,FRegisterComponentContext*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.Initialize(FURL&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.Initialize(FURL&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.InitializeNetworkActors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeNetworkActors() const
    {
        return NativeCall<void*>(this, "ULevel.InitializeNetworkActors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.InitializePreLoadSaveFile()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializePreLoadSaveFile() const
    {
        return NativeCall<void*>(this, "ULevel.InitializePreLoadSaveFile()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.InvalidateModelSurface()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro InvalidateModelSurface() const
    {
        return NativeCall<void*>(this, "ULevel.InvalidateModelSurface()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.IsCurrentLevel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsCurrentLevel() const
    {
        return NativeCall<void*>(this, "ULevel.IsCurrentLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.IsInstancedLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsInstancedLevel() const
    {
        return NativeCall<void*>(this, "ULevel.IsInstancedLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.IsNetActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsNetActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.IsNetActor(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.IsPersistentLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro IsPersistentLevel() const
    {
        return NativeCall<void*>(this, "ULevel.IsPersistentLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.OnLevelLoaded()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelLoaded() const
    {
        return NativeCall<void*>(this, "ULevel.OnLevelLoaded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "ULevel.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_ActorsForGC_Append(TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_ActorsForGC_Append(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.PrimalLevel_ActorsForGC_Append(TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_ActorsForGC_Empty()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_ActorsForGC_Empty() const
    {
        return NativeCall<void*>(this, "ULevel.PrimalLevel_ActorsForGC_Empty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_ActorsForGC_Remove(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_ActorsForGC_Remove(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.PrimalLevel_ActorsForGC_Remove(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_Actors_Add(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_Actors_Add(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.PrimalLevel_Actors_Add(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_Actors_Empty()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_Actors_Empty() const
    {
        return NativeCall<void*>(this, "ULevel.PrimalLevel_Actors_Empty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_Actors_Find(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_Actors_Find(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.PrimalLevel_Actors_Find(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PrimalLevel_Actors_Nullify(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalLevel_Actors_Nullify(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevel.PrimalLevel_Actors_Nullify(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.PushPendingAutoReceiveInput(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PushPendingAutoReceiveInput(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.PushPendingAutoReceiveInput(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.RegisterActorForAutoReceiveInput(AActor*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterActorForAutoReceiveInput(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "ULevel.RegisterActorForAutoReceiveInput(AActor*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.ResetRouteActorInitializationState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro ResetRouteActorInitializationState() const
    {
        return NativeCall<void*>(this, "ULevel.ResetRouteActorInitializationState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.ResolveSubobject(wchar_t*,UObject*&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveSubobject(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "ULevel.ResolveSubobject(wchar_t*,UObject*&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.RouteActorInitialize(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RouteActorInitialize(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevel.RouteActorInitialize(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.SetWorldDataLayers(AWorldDataLayers*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetWorldDataLayers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.SetWorldDataLayers(AWorldDataLayers*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.SetWorldSettings(AWorldSettings*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWorldSettings(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevel.SetWorldSettings(AWorldSettings*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.SortActorList()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortActorList() const
    {
        return NativeCall<void*>(this, "ULevel.SortActorList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.TryAddActorToList(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryAddActorToList(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "ULevel.TryAddActorToList(AActor*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.UpdateLevelComponents(bool,FRegisterComponentContext*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateLevelComponents(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "ULevel.UpdateLevelComponents(bool,FRegisterComponentContext*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevel.UpdateModelComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateModelComponents() const
    {
        return NativeCall<void*>(this, "ULevel.UpdateModelComponents()");
    }

    BrzCampoPonteiro ActorClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.ActorCluster")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ULevel.AssetUserData"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldPartitionRuntimeCell` +40, medido na build 25090264
    //  (offset absoluto medido: 0x3C8; confianca media)
    void*& CachedLevelCollectionField() const
    { return BrzCampoAncorado<void*>(this, "WorldPartitionRuntimeCell", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +32, medido na build 25090264
    //  (offset absoluto medido: 0x330; confianca alta)
    void*& CurrentActorIndexForIncrementalUpdateField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +36, medido na build 25090264
    //  (offset absoluto medido: 0x334; confianca media)
    void*& CurrentActorIndexForUnregisterComponentsField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 36); }
    BrzCampoPonteiro DestroyedReplicatedStaticActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.DestroyedReplicatedStaticActors")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +28, medido na build 25090264
    //  (offset absoluto medido: 0x32C; confianca alta)
    void*& IncrementalComponentStateField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +96, medido na build 25090264
    //  (offset absoluto medido: 0x370; confianca media)
    void*& InstancedFoliageActorField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +88, medido na build 25090264
    //  (offset absoluto medido: 0x368; confianca media)
    void*& LevelBoundsActorField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +104, medido na build 25090264
    //  (offset absoluto medido: 0x378; confianca media)
    void*& LevelBoundsActorUpdatedEventField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 104); }
    BrzCampoPonteiro LevelBuildDataIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.LevelBuildDataId")); }
    BrzCampoPonteiro LevelScriptActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.LevelScriptActor")); }
    BrzCampoPonteiro LightBuildLevelOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.LightBuildLevelOffset")); }
    float& LightmapTotalSizeField() const
    { return *GetNativePointerField<float*>(this, "ULevel.LightmapTotalSize"); }
    BrzCampoPonteiro MapBuildDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.MapBuildData")); }
    BrzCampoPonteiro ModelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.Model")); }
    BrzCampoPonteiro ModelComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.ModelComponents")); }
    BrzCampoPonteiro NavDataChunksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.NavDataChunks")); }
    BrzCampoPonteiro NavListEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.NavListEnd")); }
    BrzCampoPonteiro NavListStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.NavListStart")); }
    int& NumTextureStreamingDirtyResourcesField() const
    { return *GetNativePointerField<int*>(this, "ULevel.NumTextureStreamingDirtyResources"); }
    int& NumTextureStreamingUnbuiltComponentsField() const
    { return *GetNativePointerField<int*>(this, "ULevel.NumTextureStreamingUnbuiltComponents"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +40, medido na build 25090264
    //  (offset absoluto medido: 0x338; confianca media)
    void*& OnApplyLevelTransformField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +64, medido na build 25090264
    //  (offset absoluto medido: 0x350; confianca media)
    void*& OnCleanupLevelField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 64); }
    BrzCampoPonteiro OwningWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.OwningWorld")); }
    unsigned int& PackedTextureStreamingQualityLevelFeatureLevelField() const
    { return *GetNativePointerField<unsigned int*>(this, "ULevel.PackedTextureStreamingQualityLevelFeatureLevel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AssetUserData` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3E0; confianca alta)
    void*& PendingAutoReceiveInputActorsField() const
    { return BrzCampoAncorado<void*>(this, "AssetUserData", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PackedTextureStreamingQualityLevelFeatureLevel` +16, medido na build 25090264
    //  (offset absoluto medido: 0x248; confianca media)
    void*& PrecomputedLightVolumeField() const
    { return BrzCampoAncorado<void*>(this, "PackedTextureStreamingQualityLevelFeatureLevel", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PackedTextureStreamingQualityLevelFeatureLevel` +32, medido na build 25090264
    //  (offset absoluto medido: 0x258; confianca media)
    void*& PrecomputedVisibilityHandlerField() const
    { return BrzCampoAncorado<void*>(this, "PackedTextureStreamingQualityLevelFeatureLevel", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PackedTextureStreamingQualityLevelFeatureLevel` +88, medido na build 25090264
    //  (offset absoluto medido: 0x290; confianca media)
    void*& PrecomputedVolumeDistanceFieldField() const
    { return BrzCampoAncorado<void*>(this, "PackedTextureStreamingQualityLevelFeatureLevel", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PackedTextureStreamingQualityLevelFeatureLevel` +24, medido na build 25090264
    //  (offset absoluto medido: 0x250; confianca media)
    void*& PrecomputedVolumetricLightmapField() const
    { return BrzCampoAncorado<void*>(this, "PackedTextureStreamingQualityLevelFeatureLevel", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PackedTextureStreamingQualityLevelFeatureLevel` +184, medido na build 25090264
    //  (offset absoluto medido: 0x2F0; confianca baixa)
    void*& RemoveFromSceneFenceField() const
    { return BrzCampoAncorado<void*>(this, "PackedTextureStreamingQualityLevelFeatureLevel", 184); }
    float& ShadowmapTotalSizeField() const
    { return *GetNativePointerField<float*>(this, "ULevel.ShadowmapTotalSize"); }
    BrzCampoPonteiro StaticNavigableGeometryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.StaticNavigableGeometry")); }
    BrzCampoPonteiro StreamingTextureGuidsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.StreamingTextureGuids")); }
    BrzCampoPonteiro StreamingTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.StreamingTextures")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PackedTextureStreamingQualityLevelFeatureLevel` +8, medido na build 25090264
    //  (offset absoluto medido: 0x240; confianca media)
    void*& TickTaskLevelField() const
    { return BrzCampoAncorado<void*>(this, "PackedTextureStreamingQualityLevelFeatureLevel", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LightBuildLevelOffset` +16, medido na build 25090264
    //  (offset absoluto medido: 0x320; confianca alta)
    void*& VolumetricLightmapGridManagerField() const
    { return BrzCampoAncorado<void*>(this, "LightBuildLevelOffset", 16); }
    BrzCampoPonteiro WorldDataLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.WorldDataLayers")); }
    BrzCampoPonteiro WorldPartitionRuntimeCellField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.WorldPartitionRuntimeCell")); }
    BrzCampoPonteiro WorldSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevel.WorldSettings")); }
    BitFieldValue<bool, unsigned __int32> bIsLightingScenario()
    { return { (void*)this, "bIsLightingScenario" }; }
    BitFieldValue<bool, unsigned __int32> bIsPartitioned()
    { return { (void*)this, "bIsPartitioned" }; }
    BitFieldValue<bool, unsigned __int32> bIsVisible()
    { return { (void*)this, "bIsVisible" }; }
    BitFieldValue<bool, unsigned __int32> bStaticComponentsRegisteredInStreamingManager()
    { return { (void*)this, "bStaticComponentsRegisteredInStreamingManager" }; }
    BitFieldValue<bool, unsigned __int32> bTextureStreamingRotationChanged()
    { return { (void*)this, "bTextureStreamingRotationChanged" }; }

};

#endif  // BRZ_SDK_JOGO_ULEVEL_H
