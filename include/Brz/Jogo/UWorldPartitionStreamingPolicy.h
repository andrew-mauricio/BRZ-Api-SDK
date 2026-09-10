// ==========================================================================
//  UWorldPartitionStreamingPolicy — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGPOLICY_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGPOLICY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UWorldPartition;


struct UWorldPartitionStreamingPolicy
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionStreamingPolicy"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.CanAddCellToWorld(UWorldPartitionRuntimeCell*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanAddCellToWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.CanAddCellToWorld(UWorldPartitionRuntimeCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.ComputeUpdateStreamingHash(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeUpdateStreamingHash(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldPartitionStreamingPolicy.ComputeUpdateStreamingHash(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.DrawRuntimeHash2D(FWorldPartitionDraw2DContext&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DrawRuntimeHash2D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.DrawRuntimeHash2D(FWorldPartitionDraw2DContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.DrawRuntimeHash3D()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawRuntimeHash3D() const
    {
        return NativeCall<void*>(this, "UWorldPartitionStreamingPolicy.DrawRuntimeHash3D()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.FUpdateStreamingStateParams.FUpdateStreamingStateParams(UWorldPar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FUpdateStreamingStateParams_FUpdateStreamingStateParams(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.FUpdateStreamingStateParams.FUpdateStreamingStateParams(UWorldPartitionStreamingPolicy*,FWorldPartitionUpdateStreamingCurrentState&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.FUpdateStreamingStateParams.FUpdateStreamingStateParams(UWorldPar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FUpdateStreamingStateParams_FUpdateStreamingStateParams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.FUpdateStreamingStateParams.FUpdateStreamingStateParams(UWorldPartitionStreamingPolicy::FUpdateStreamingStateParams&&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.GetCellsToReprioritize(TArray<UWorldPartitionRuntimeCell*,TSizedD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCellsToReprioritize(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.GetCellsToReprioritize(TArray<UWorldPartitionRuntimeCell*,TSizedDefaultAllocator<32>>&,TArray<UWorldPartitionRuntimeCell*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.GetCellsToUpdate(TArray<UWorldPartitionRuntimeCell*,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCellsToUpdate(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.GetCellsToUpdate(TArray<UWorldPartitionRuntimeCell*,TSizedDefaultAllocator<32>>&,TArray<UWorldPartitionRuntimeCell*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.GetIntersectingCells(TArray<FWorldPartitionStreamingQuerySource,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetIntersectingCells(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.GetIntersectingCells(TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>>&,TArray<IWorldPartitionCell*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.GetServerDisallowedStreamingOutDataLayers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerDisallowedStreamingOutDataLayers() const
    {
        return NativeCall<void*>(this, "UWorldPartitionStreamingPolicy.GetServerDisallowedStreamingOutDataLayers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.IsStreamingCompleted(EWorldPartitionRuntimeCellState,TArray<FWorl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(int a0, void* a1, bool a2) const
    {
        return NativeCall<void*, int, void*, bool>(this, "UWorldPartitionStreamingPolicy.IsStreamingCompleted(EWorldPartitionRuntimeCellState,TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.IsStreamingCompleted(TArray<FWorldPartitionStreamingSource,TSized
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.IsStreamingCompleted(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.OnCellHidden(UWorldPartitionRuntimeCell*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCellHidden(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.OnCellHidden(UWorldPartitionRuntimeCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.OnStreamingStateUpdated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnStreamingStateUpdated() const
    {
        return NativeCall<void*>(this, "UWorldPartitionStreamingPolicy.OnStreamingStateUpdated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.PostUpdateStreamingStateInternal_GameThread(FWorldPartitionUpdate
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostUpdateStreamingStateInternal_GameThread(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.PostUpdateStreamingStateInternal_GameThread(FWorldPartitionUpdateStreamingTargetState&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.SetCellStateToActivated(UWorldPartitionRuntimeCell*,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCellStateToActivated(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.SetCellStateToActivated(UWorldPartitionRuntimeCell*,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.SetCellStateToLoaded(UWorldPartitionRuntimeCell*,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCellStateToLoaded(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.SetCellStateToLoaded(UWorldPartitionRuntimeCell*,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.SetCellsStateToUnloaded(TArray<TObjectPtr<UWorldPartitionRuntimeC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCellsStateToUnloaded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionStreamingPolicy.SetCellsStateToUnloaded(TArray<TObjectPtr<UWorldPartitionRuntimeCell>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.SetShouldMergeStreamingSourceInfo(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetShouldMergeStreamingSourceInfo(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldPartitionStreamingPolicy.SetShouldMergeStreamingSourceInfo(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.UpdateStreamingSources(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingSources(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingSources(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.UpdateStreamingState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingState() const
    {
        return NativeCall<void*>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionStreamingPolicy.UpdateStreamingStateInternal(UWorldPartitionStreamingPolicy::FUpd
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingStateInternal(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionStreamingPolicy.UpdateStreamingStateInternal(UWorldPartitionStreamingPolicy::FUpdateStreamingStateParams&,FWorldPartitionUpdateStreamingTargetState&)", a0, a1);
    }

    BrzCampoPonteiro AsyncTaskCurrentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingPolicy.AsyncTaskCurrentState")); }
    BrzCampoPonteiro AsyncTaskTargetStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingPolicy.AsyncTaskTargetState")); }
    int& CurrentStateField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionStreamingPolicy.CurrentState"); }
    BrzCampoPonteiro CurrentStreamingPerformanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingPolicy.CurrentStreamingPerformance")); }
    BrzCampoPonteiro TargetStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionStreamingPolicy.TargetState")); }
    BitFieldValue<bool, unsigned __int32> bShouldMergeStreamingSourceInfo()
    { return { (void*)this, "bShouldMergeStreamingSourceInfo" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONSTREAMINGPOLICY_H
