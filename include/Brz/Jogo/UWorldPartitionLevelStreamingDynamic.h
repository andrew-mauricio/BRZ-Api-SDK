// ==========================================================================
//  UWorldPartitionLevelStreamingDynamic — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGDYNAMIC_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGDYNAMIC_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionLevelStreamingDynamic
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionLevelStreamingDynamic"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.GetStreamingWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingWorld() const
    {
        return NativeCall<void*>(this, "UWorldPartitionLevelStreamingDynamic.GetStreamingWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.GetWorldPartitionCell()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldPartitionCell() const
    {
        return NativeCall<void*>(this, "UWorldPartitionLevelStreamingDynamic.GetWorldPartitionCell()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.Initialize(UWorldPartitionRuntimeLevelStreamingCell&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingDynamic.Initialize(UWorldPartitionRuntimeLevelStreamingCell&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.RequestVisibilityChange(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestVisibilityChange(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldPartitionLevelStreamingDynamic.RequestVisibilityChange(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.SetLevelTransform(UE::Math::TTransform<double>&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetLevelTransform(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingDynamic.SetLevelTransform(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.ShouldBeAlwaysLoaded()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShouldBeAlwaysLoaded() const
    {
        return NativeCall<void*>(this, "UWorldPartitionLevelStreamingDynamic.ShouldBeAlwaysLoaded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.ShouldBlockOnUnload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldBlockOnUnload() const
    {
        return NativeCall<void*>(this, "UWorldPartitionLevelStreamingDynamic.ShouldBlockOnUnload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.UpdateShouldSkipMakingVisibilityTransactionRequest()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateShouldSkipMakingVisibilityTransactionRequest() const
    {
        return NativeCall<void*>(this, "UWorldPartitionLevelStreamingDynamic.UpdateShouldSkipMakingVisibilityTransactionRequest()");
    }

    BrzCampoPonteiro EditorStreamingVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.EditorStreamingVolumes")); }
    BrzCampoPonteiro LODPackageNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.LODPackageNames")); }
    BrzCampoPonteiro LevelColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.LevelColor")); }
    int& LevelLODIndexField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionLevelStreamingDynamic.LevelLODIndex"); }
    BrzCampoPonteiro LevelTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.LevelTransform")); }
    BrzCampoPonteiro LoadedLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.LoadedLevel")); }
    float& MinTimeBetweenVolumeUnloadRequestsField() const
    { return *GetNativePointerField<float*>(this, "UWorldPartitionLevelStreamingDynamic.MinTimeBetweenVolumeUnloadRequests"); }
    BrzCampoPonteiro OnLevelHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.OnLevelHidden")); }
    BrzCampoPonteiro OnLevelLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.OnLevelLoaded")); }
    BrzCampoPonteiro OnLevelShownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.OnLevelShown")); }
    BrzCampoPonteiro OnLevelUnloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.OnLevelUnloaded")); }
    BrzCampoPonteiro OuterWorldPartitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.OuterWorldPartition")); }
    FName& PackageNameToLoadField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionLevelStreamingDynamic.PackageNameToLoad"); }
    BrzCampoPonteiro PendingUnloadLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.PendingUnloadLevel")); }
    TWeakObjectPtr<void>& StreamingCellField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UWorldPartitionLevelStreamingDynamic.StreamingCell"); }
    int& StreamingPriorityField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionLevelStreamingDynamic.StreamingPriority"); }
    BrzCampoPonteiro WorldAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.WorldAsset")); }
    BrzCampoPonteiro bClientOnlyVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bClientOnlyVisible")); }
    BrzCampoPonteiro bDisableDistanceStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bDisableDistanceStreaming")); }
    BrzCampoPonteiro bDrawOnLevelStatusMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bDrawOnLevelStatusMap")); }
    BrzCampoPonteiro bEnableTileStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bEnableTileStreaming")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShouldBeAlwaysLoaded` +1, medido na build 25535041
    //  (offset absoluto medido: 0x1C9; confianca alta)
    void*& bHasSetLevelTransformField() const
    { return BrzCampoAncorado<void*>(this, "bShouldBeAlwaysLoaded", 1); }
    BrzCampoPonteiro bInitiallyLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bInitiallyLoaded")); }
    BrzCampoPonteiro bInitiallyVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bInitiallyVisible")); }
    BrzCampoPonteiro bIsStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bIsStatic")); }
    BrzCampoPonteiro bLevelStreamingDesiredVisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bLevelStreamingDesiredVisibility")); }
    BrzCampoPonteiro bLevelStreamingVisibilityOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bLevelStreamingVisibilityOnly")); }
    BrzCampoPonteiro bLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bLocked")); }
    BrzCampoPonteiro bShouldBeAlwaysLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bShouldBeAlwaysLoaded")); }
    BrzCampoPonteiro bShouldBeLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bShouldBeLoaded")); }
    BrzCampoPonteiro bShouldBeVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bShouldBeVisible")); }
    BrzCampoPonteiro bShouldBlockOnLoadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bShouldBlockOnLoad")); }
    BrzCampoPonteiro bShouldBlockOnUnloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingDynamic.bShouldBlockOnUnload")); }
    BitFieldValue<bool, unsigned __int32> bShouldBeAlwaysLoaded()
    { return { (void*)this, "bShouldBeAlwaysLoaded" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGDYNAMIC_H
