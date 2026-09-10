// ==========================================================================
//  UWorldPartitionRuntimeLevelStreamingCell — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMELEVELSTREAMINGCELL_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMELEVELSTREAMINGCELL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeLevelStreamingCell
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeLevelStreamingCell"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.Activate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Activate() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.Activate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.CreateAndSetLevelStreaming(TSoftObjectPtr<UWorld>&,UE::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateAndSetLevelStreaming(void* a0, void* a1) const
    {
        return NativeCall<void*, void**, void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.CreateAndSetLevelStreaming(TSoftObjectPtr<UWorld>&,UE::Math::TTransform<double>&)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.CreateLevelStreaming(FString&,FSoftObjectPath&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateLevelStreaming(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.CreateLevelStreaming(FString&,FSoftObjectPath&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CreateLevelStreaming(FString* a0, void* a1) const
    { return CreateLevelStreaming(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.GetCurrentState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentState() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.GetCurrentState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.GetLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetLevel() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.GetLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.GetLevelPackageName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelPackageName() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.GetLevelPackageName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.GetOrCreateLevelStreaming()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrCreateLevelStreaming() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.GetOrCreateLevelStreaming()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.Load()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Load() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.Load()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.SetIsAlwaysLoaded(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SetIsAlwaysLoaded(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldPartitionRuntimeLevelStreamingCell.SetIsAlwaysLoaded(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeLevelStreamingCell.Unload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Unload() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeLevelStreamingCell.Unload()");
    }

    BrzCampoPonteiro CellDebugColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.CellDebugColor")); }
    BrzCampoPonteiro CellGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.CellGuid")); }
    BrzCampoPonteiro ContentBundleIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.ContentBundleID")); }
    BrzCampoPonteiro DataLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.DataLayers")); }
    BrzCampoPonteiro LevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.LevelStreaming")); }
    BrzCampoPonteiro RuntimeCellDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.RuntimeCellData")); }
    BrzCampoPonteiro SourceCellGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeLevelStreamingCell.SourceCellGuid")); }
    BitFieldValue<bool, unsigned __int32> bBlockOnSlowLoading()
    { return { (void*)this, "bBlockOnSlowLoading" }; }
    BitFieldValue<bool, unsigned __int32> bClientOnlyVisible()
    { return { (void*)this, "bClientOnlyVisible" }; }
    BitFieldValue<bool, unsigned __int32> bIsAlwaysLoaded()
    { return { (void*)this, "bIsAlwaysLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bIsHLOD()
    { return { (void*)this, "bIsHLOD" }; }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMELEVELSTREAMINGCELL_H
