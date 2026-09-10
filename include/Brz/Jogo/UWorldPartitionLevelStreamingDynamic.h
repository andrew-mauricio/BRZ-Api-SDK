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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SetLevelTransform(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingDynamic.SetLevelTransform(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingDynamic.ShouldBeAlwaysLoaded()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    BitFieldValue<bool, unsigned __int32> bClientOnlyVisible()
    { return { (void*)this, "bClientOnlyVisible" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDistanceStreaming()
    { return { (void*)this, "bDisableDistanceStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bDrawOnLevelStatusMap()
    { return { (void*)this, "bDrawOnLevelStatusMap" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTileStreaming()
    { return { (void*)this, "bEnableTileStreaming" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShouldBeAlwaysLoaded` +1, medido na build 25090264
    //  (offset absoluto medido: 0x1C9; confianca alta)
    void*& bHasSetLevelTransformField() const
    { return BrzCampoAncorado<void*>(this, "bShouldBeAlwaysLoaded", 1); }
    BitFieldValue<bool, unsigned __int32> bInitiallyLoaded()
    { return { (void*)this, "bInitiallyLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bInitiallyVisible()
    { return { (void*)this, "bInitiallyVisible" }; }
    BitFieldValue<bool, unsigned __int32> bIsStatic()
    { return { (void*)this, "bIsStatic" }; }
    BitFieldValue<bool, unsigned __int32> bLevelStreamingDesiredVisibility()
    { return { (void*)this, "bLevelStreamingDesiredVisibility" }; }
    BitFieldValue<bool, unsigned __int32> bLevelStreamingVisibilityOnly()
    { return { (void*)this, "bLevelStreamingVisibilityOnly" }; }
    BitFieldValue<bool, unsigned __int32> bLocked()
    { return { (void*)this, "bLocked" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeLoaded()
    { return { (void*)this, "bShouldBeLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeVisible()
    { return { (void*)this, "bShouldBeVisible" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBlockOnLoad()
    { return { (void*)this, "bShouldBlockOnLoad" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBlockOnUnload()
    { return { (void*)this, "bShouldBlockOnUnload" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeAlwaysLoaded()
    { return { (void*)this, "bShouldBeAlwaysLoaded" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGDYNAMIC_H
