// ==========================================================================
//  UWorldPartitionRuntimeCell — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELL_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeCell
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeCell"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.ContainsDataLayer(UDataLayerAsset*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ContainsDataLayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCell.ContainsDataLayer(UDataLayerAsset*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetCellBounds()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCellBounds() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetCellBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetCellEffectiveWantedState(FWorldPartitionStreamingContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCellEffectiveWantedState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCell.GetCellEffectiveWantedState(FWorldPartitionStreamingContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetContentBounds()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetContentBounds() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetContentBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetContentBundleID()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetContentBundleID() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetContentBundleID()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetDataLayerInstances()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDataLayerInstances() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetDataLayerInstances()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=156]]
    BrzPonteiro GetDebugColor(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorldPartitionRuntimeCell.GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetExternalDataLayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetExternalDataLayer() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetExternalDataLayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetExternalDataLayerInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExternalDataLayerInstance() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetExternalDataLayerInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetOuterWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOuterWorld() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetOuterWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.GetOwningWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOwningWorld() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.GetOwningWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.HasAnyDataLayer(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAlloca
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasAnyDataLayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCell.HasAnyDataLayer(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.HasContentBundle()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasContentBundle() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.HasContentBundle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.IsDebugShown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDebugShown() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.IsDebugShown()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCell.Primal_GetHumanReadableName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Primal_GetHumanReadableName() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCell.Primal_GetHumanReadableName()");
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UWorldPartitionRuntimeCell.ContainsDataLayer(UDataLayerInstance*)
    //      (colide com UWorldPartitionRuntimeCell.ContainsDataLayer(UDataLayerAsset*))

    BrzCampoPonteiro CellDebugColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCell.CellDebugColor")); }
    BrzCampoPonteiro CellGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCell.CellGuid")); }
    BrzCampoPonteiro ContentBundleIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCell.ContentBundleID")); }
    BrzCampoPonteiro DataLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCell.DataLayers")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SourceCellGuid` +16, medido na build 25090264
    //  (offset absoluto medido: 0x9C; confianca alta)
    void*& EffectiveWantedStateField() const
    { return BrzCampoAncorado<void*>(this, "SourceCellGuid", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SourceCellGuid` +20, medido na build 25090264
    //  (offset absoluto medido: 0xA0; confianca alta)
    void*& EffectiveWantedStateEpochField() const
    { return BrzCampoAncorado<void*>(this, "SourceCellGuid", 20); }
    BrzCampoPonteiro RuntimeCellDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCell.RuntimeCellData")); }
    BrzCampoPonteiro SourceCellGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCell.SourceCellGuid")); }
    BitFieldValue<bool, unsigned __int32> bBlockOnSlowLoading()
    { return { (void*)this, "bBlockOnSlowLoading" }; }
    BitFieldValue<bool, unsigned __int32> bClientOnlyVisible()
    { return { (void*)this, "bClientOnlyVisible" }; }
    BitFieldValue<bool, unsigned __int32> bIsAlwaysLoaded()
    { return { (void*)this, "bIsAlwaysLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bIsHLOD()
    { return { (void*)this, "bIsHLOD" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELL_H
