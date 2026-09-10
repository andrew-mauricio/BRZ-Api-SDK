// ==========================================================================
//  UWorldPartitionHLODRuntimeSubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONHLODRUNTIMESUBSYSTEM_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONHLODRUNTIMESUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionHLODRuntimeSubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionHLODRuntimeSubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.Deinitialize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Deinitialize() const
    {
        return NativeCall<void*>(this, "UWorldPartitionHLODRuntimeSubsystem.Deinitialize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.DoesSupportWorldType(EWorldType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro DoesSupportWorldType(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorldPartitionHLODRuntimeSubsystem.DoesSupportWorldType(EWorldType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.FWorldPartitionHLODRuntimeData.FWorldPartitionHLODRuntimeDat
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro FWorldPartitionHLODRuntimeData_FWorldPartitionHLODRuntimeData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.FWorldPartitionHLODRuntimeData.FWorldPartitionHLODRuntimeData(UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData&&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.GetCellData(AWorldPartitionHLOD*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCellData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.GetCellData(AWorldPartitionHLOD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.Initialize(FSubsystemCollectionBase&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.Initialize(FSubsystemCollectionBase&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.IsHLODEnabled()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsHLODEnabled() const
    {
        return NativeCall<void*>(this, "UWorldPartitionHLODRuntimeSubsystem.IsHLODEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.OnBeginRenderViews(FSceneViewFamily&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBeginRenderViews(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.OnBeginRenderViews(FSceneViewFamily&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.OnWorldPartitionInitialized(UWorldPartition*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldPartitionInitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.OnWorldPartitionInitialized(UWorldPartition*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.OnWorldPartitionUninitialized(UWorldPartition*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldPartitionUninitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.OnWorldPartitionUninitialized(UWorldPartition*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.ProcessHLODCommand()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessHLODCommand() const
    {
        return NativeCall<void*>(this, "UWorldPartitionHLODRuntimeSubsystem.ProcessHLODCommand()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.RegisterHLODActor(AWorldPartitionHLOD*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterHLODActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.RegisterHLODActor(AWorldPartitionHLOD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.ShouldPerformWarmup()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ShouldPerformWarmup() const
    {
        return NativeCall<void*>(this, "UWorldPartitionHLODRuntimeSubsystem.ShouldPerformWarmup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionHLODRuntimeSubsystem.UnregisterHLODActor(AWorldPartitionHLOD*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterHLODActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionHLODRuntimeSubsystem.UnregisterHLODActor(AWorldPartitionHLOD*)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UWorldPartitionHLODRuntimeSubsystem.GetCellData(UWorldPartitionRuntimeCell*)
    //      (colide com UWorldPartitionHLODRuntimeSubsystem.GetCellData(AWorldPartitionHLOD*))
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONHLODRUNTIMESUBSYSTEM_H
