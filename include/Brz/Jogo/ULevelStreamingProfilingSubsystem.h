// ==========================================================================
//  ULevelStreamingProfilingSubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSTREAMINGPROFILINGSUBSYSTEM_H
#define BRZ_SDK_JOGO_ULEVELSTREAMINGPROFILINGSUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelStreamingProfilingSubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelStreamingProfilingSubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.Deinitialize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Deinitialize() const
    {
        return NativeCall<void*>(this, "ULevelStreamingProfilingSubsystem.Deinitialize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.FLevelStats.operator=(ULevelStreamingProfilingSubsystem::FLeve
    // endereco: cache_pdb_25090264
    BrzPonteiro FLevelStats_operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreamingProfilingSubsystem.FLevelStats.operator=(ULevelStreamingProfilingSubsystem::FLevelStats&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelFinishedAddToWorld(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelFinishedAddToWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelFinishedAddToWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelFinishedAsyncLoading(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelFinishedAsyncLoading(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelFinishedAsyncLoading(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelFinishedRemoveFromWorld(UWorld*,ULevelStreaming*,ULevel
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelFinishedRemoveFromWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelFinishedRemoveFromWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelQueuedForAddToWorld(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelQueuedForAddToWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelQueuedForAddToWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelQueuedForLoading(UWorld*,ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelQueuedForLoading(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelQueuedForLoading(UWorld*,ULevelStreaming*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelQueuedForRemoveFromWorld(UWorld*,ULevelStreaming*,ULeve
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnLevelQueuedForRemoveFromWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelQueuedForRemoveFromWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelStartedAddToWorld(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStartedAddToWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelStartedAddToWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelStartedAsyncLoading(UWorld*,ULevelStreaming*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStartedAsyncLoading(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelStartedAsyncLoading(UWorld*,ULevelStreaming*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelStartedRemoveFromWorld(UWorld*,ULevelStreaming*,ULevel*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStartedRemoveFromWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelStartedRemoveFromWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelStreamingStateChanged(UWorld*,ULevelStreaming*,ULevel*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStreamingStateChanged(void* a0, void* a1, void* a2, int a3, int a4) const
    {
        return NativeCall<void*, void*, void*, void*, int, int>(this, "ULevelStreamingProfilingSubsystem.OnLevelStreamingStateChanged(UWorld*,ULevelStreaming*,ULevel*,ELevelStreamingState,ELevelStreamingState)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelStreamingTargetStateChanged(UWorld*,ULevelStreaming*,UL
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelStreamingTargetStateChanged(void* a0, void* a1, void* a2, int a3, int a4, int a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, int>(this, "ULevelStreamingProfilingSubsystem.OnLevelStreamingTargetStateChanged(UWorld*,ULevelStreaming*,ULevel*,ELevelStreamingState,ELevelStreamingTargetState,ELevelStreamingTargetState)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelUnqueuedForAddToWorld(UWorld*,ULevelStreaming*,ULevel*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro OnLevelUnqueuedForAddToWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelUnqueuedForAddToWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.OnLevelUnqueuedForRemoveFromWorld(UWorld*,ULevelStreaming*,ULe
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro OnLevelUnqueuedForRemoveFromWorld(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelStreamingProfilingSubsystem.OnLevelUnqueuedForRemoveFromWorld(UWorld*,ULevelStreaming*,ULevel*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.PostInitialize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitialize() const
    {
        return NativeCall<void*>(this, "ULevelStreamingProfilingSubsystem.PostInitialize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingProfilingSubsystem.ShouldCreateSubsystem(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldCreateSubsystem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreamingProfilingSubsystem.ShouldCreateSubsystem(UObject*)", a0);
    }
    BrzCampoPonteiro CellBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingProfilingSubsystem.CellBounds")); }
    BrzCampoPonteiro ContentBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingProfilingSubsystem.ContentBounds")); }
    int& StateField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingProfilingSubsystem.State"); }
    BitFieldValue<bool, unsigned __int32> bIsHLOD()
    { return { (void*)this, "bIsHLOD" }; }
    BitFieldValue<bool, unsigned __int32> bValid()
    { return { (void*)this, "bValid" }; }
};

#endif  // BRZ_SDK_JOGO_ULEVELSTREAMINGPROFILINGSUBSYSTEM_H
