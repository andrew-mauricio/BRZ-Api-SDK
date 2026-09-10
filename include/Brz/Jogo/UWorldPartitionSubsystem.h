// ==========================================================================
//  UWorldPartitionSubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONSUBSYSTEM_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONSUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionSubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionSubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.Deinitialize()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=171+grafo=7/7]]
    BrzPonteiro Deinitialize() const
    {
        return NativeCall<void*>(this, "UWorldPartitionSubsystem.Deinitialize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.Draw(UCanvas*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Draw(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionSubsystem.Draw(UCanvas*,APlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.DrawStreamingStatusLegend(UCanvas*,UE::Math::TVector2<double>&,UWorldPa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawStreamingStatusLegend(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorldPartitionSubsystem.DrawStreamingStatusLegend(UCanvas*,UE::Math::TVector2<double>&,UWorldPartition*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.DumpWorldPartitions(FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DumpWorldPartitions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.DumpWorldPartitions(FOutputDevice&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.GetOverrideLoadingRange(FName,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOverrideLoadingRange(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UWorldPartitionSubsystem.GetOverrideLoadingRange(FName,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.GetStreamingSourceProviders()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSourceProviders() const
    {
        return NativeCall<void*>(this, "UWorldPartitionSubsystem.GetStreamingSourceProviders()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.GetStreamingSources(UWorldPartition*,TArray<FWorldPartitionStreamingSou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSources(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionSubsystem.GetStreamingSources(UWorldPartition*,TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.GetTickableTickType()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTickableTickType() const
    {
        return NativeCall<void*>(this, "UWorldPartitionSubsystem.GetTickableTickType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.HasUninitializationPendingStreamingLevels(UWorldPartition*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasUninitializationPendingStreamingLevels(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.HasUninitializationPendingStreamingLevels(UWorldPartition*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.IncrementalUpdateStreamingState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementalUpdateStreamingState() const
    {
        return NativeCall<void*>(this, "UWorldPartitionSubsystem.IncrementalUpdateStreamingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.Initialize(FSubsystemCollectionBase&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.Initialize(FSubsystemCollectionBase&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.IsStreamingCompleted(EWorldPartitionRuntimeCellState,TArray<FWorldParti
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(int a0, void* a1, bool a2) const
    {
        return NativeCall<void*, int, void*, bool>(this, "UWorldPartitionSubsystem.IsStreamingCompleted(EWorldPartitionRuntimeCellState,TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.IsStreamingCompleted(IWorldPartitionStreamingSourceProvider*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.IsStreamingCompleted(IWorldPartitionStreamingSourceProvider*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnLevelBeginMakingInvisible(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelBeginMakingInvisible(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorldPartitionSubsystem.OnLevelBeginMakingInvisible(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnLevelBeginMakingVisible(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelBeginMakingVisible(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorldPartitionSubsystem.OnLevelBeginMakingVisible(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnLevelStreamingStateChanged(UWorld*,ULevelStreaming*,ULevel*,ELevelStr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStreamingStateChanged(void* a0, void* a1, void* a2, int a3, int a4) const
    {
        return NativeCall<void*, void*, void*, void*, int, int>(this, "UWorldPartitionSubsystem.OnLevelStreamingStateChanged(UWorld*,ULevelStreaming*,ULevel*,ELevelStreamingState,ELevelStreamingState)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnLevelStreamingTargetStateChanged(UWorld*,ULevelStreaming*,ULevel*,ELe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStreamingTargetStateChanged(void* a0, void* a1, void* a2, int a3, int a4, int a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, int>(this, "UWorldPartitionSubsystem.OnLevelStreamingTargetStateChanged(UWorld*,ULevelStreaming*,ULevel*,ELevelStreamingState,ELevelStreamingTargetState,ELevelStreamingTargetState)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnUpdateStreamingState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=27]]
    BrzPonteiro OnUpdateStreamingState() const
    {
        return NativeCall<void*>(this, "UWorldPartitionSubsystem.OnUpdateStreamingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnWorldBeginPlay(UWorld&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldBeginPlay(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.OnWorldBeginPlay(UWorld&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnWorldPartitionInitialized(UWorldPartition*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldPartitionInitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.OnWorldPartitionInitialized(UWorldPartition*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.OnWorldPartitionUninitialized(UWorldPartition*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldPartitionUninitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.OnWorldPartitionUninitialized(UWorldPartition*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.RegisterStreamingSourceProvider(IWorldPartitionStreamingSourceProvider*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterStreamingSourceProvider(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.RegisterStreamingSourceProvider(IWorldPartitionStreamingSourceProvider*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "UWorldPartitionSubsystem.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.UnregisterStreamingSourceProvider(IWorldPartitionStreamingSourceProvide
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterStreamingSourceProvider(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.UnregisterStreamingSourceProvider(IWorldPartitionStreamingSourceProvider*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.UpdateLoadingAndPendingLoadStreamingLevels(ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateLoadingAndPendingLoadStreamingLevels(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionSubsystem.UpdateLoadingAndPendingLoadStreamingLevels(ULevelStreaming*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.UpdateStreamingSources()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingSources() const
    {
        return NativeCall<void*>(this, "UWorldPartitionSubsystem.UpdateStreamingSources()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionSubsystem.UpdateStreamingStateInternal(UWorld*,UWorldPartition*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingStateInternal(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionSubsystem.UpdateStreamingStateInternal(UWorld*,UWorldPartition*)", a0, a1);
    }
    BitFieldValue<bool, unsigned __int32> bHasBegunPlay()
    { return { (void*)this, "bHasBegunPlay" }; }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONSUBSYSTEM_H
