// ==========================================================================
//  ULevelStreaming — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSTREAMING_H
#define BRZ_SDK_JOGO_ULEVELSTREAMING_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;


struct ULevelStreaming
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelStreaming"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.AllowIncrementalRemovalWhilePendingVisibility()
    // endereco: cache_pdb_25090264
    BrzPonteiro AllowIncrementalRemovalWhilePendingVisibility() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.AllowIncrementalRemovalWhilePendingVisibility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.AsyncLevelLoadComplete(FName&,UPackage*,EAsyncLoadingResult::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncLevelLoadComplete(const FName& a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "ULevelStreaming.AsyncLevelLoadComplete(FName&,UPackage*,EAsyncLoadingResult::Type)", const_cast<FName*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AsyncLevelLoadComplete(FName* a0, void* a1, int a2) const
    { return AsyncLevelLoadComplete(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.BroadcastLevelVisibleStatus(UWorld*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BroadcastLevelVisibleStatus(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned long long, bool>(this, "ULevelStreaming.BroadcastLevelVisibleStatus(UWorld*,FName,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.CreateInstance(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateInstance(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreaming.CreateInstance(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CreateInstance(FString* a0) const
    { return CreateInstance(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.DefaultAllowClientUseMakingVisibleTransactionRequests()
    // endereco: cache_pdb_25090264
    BrzPonteiro DefaultAllowClientUseMakingVisibleTransactionRequests() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.DefaultAllowClientUseMakingVisibleTransactionRequests()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.DetermineTargetState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DetermineTargetState() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.DetermineTargetState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.FindStreamingLevel(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindStreamingLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreaming.FindStreamingLevel(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetLevelScriptActor()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLevelScriptActor() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.GetLevelScriptActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetLevelStreamingStatus()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelStreamingStatus() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.GetLevelStreamingStatus()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetLevelStreamingStatusColor(EStreamingStatus)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLevelStreamingStatusColor(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevelStreaming.GetLevelStreamingStatusColor(EStreamingStatus)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetLevelStreamingStatusDisplayName(EStreamingStatus)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLevelStreamingStatusDisplayName(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevelStreaming.GetLevelStreamingStatusDisplayName(EStreamingStatus)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetStreamingWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingWorld() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.GetStreamingWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetWorldAssetPackageFName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=52]]
    BrzPonteiro GetWorldAssetPackageFName() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.GetWorldAssetPackageFName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.GetWorldAssetPackageName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldAssetPackageName() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.GetWorldAssetPackageName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.IsDesiredLevelLoaded()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDesiredLevelLoaded() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.IsDesiredLevelLoaded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.IsLevelVisible()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro IsLevelVisible() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.IsLevelVisible()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.IsStreamingStatePending()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingStatePending() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.IsStreamingStatePending()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.OnLevelAdded()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro OnLevelAdded() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.OnLevelAdded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.OnLevelRemoved()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnLevelRemoved() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.OnLevelRemoved()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.PrepareLoadedLevel(ULevel*,UPackage*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareLoadedLevel(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "ULevelStreaming.PrepareLoadedLevel(ULevel*,UPackage*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.RemoveLevelAnnotation(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveLevelAnnotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreaming.RemoveLevelAnnotation(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.RenameForPIE(int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RenameForPIE(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "ULevelStreaming.RenameForPIE(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreaming.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetCurrentState(ELevelStreamingState)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCurrentState(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevelStreaming.SetCurrentState(ELevelStreamingState)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetIsRequestingUnloadAndRemoval(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetIsRequestingUnloadAndRemoval(bool a0) const
    {
        return NativeCall<void*, bool>(this, "ULevelStreaming.SetIsRequestingUnloadAndRemoval(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetLevelLODIndex(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLevelLODIndex(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevelStreaming.SetLevelLODIndex(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetLevelVisibility(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLevelVisibility(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "ULevelStreaming.SetLevelVisibility(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetLoadedLevel(ULevel*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=14]]
    BrzPonteiro SetLoadedLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreaming.SetLoadedLevel(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetPriority(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPriority(int a0) const
    {
        return NativeCall<void*, int>(this, "ULevelStreaming.SetPriority(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetShouldBeVisible(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetShouldBeVisible(bool a0) const
    {
        return NativeCall<void*, bool>(this, "ULevelStreaming.SetShouldBeVisible(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetWorldAsset(TSoftObjectPtr<UWorld>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWorldAsset(void* a0) const
    {
        return NativeCall<void*, void**>(this, "ULevelStreaming.SetWorldAsset(TSoftObjectPtr<UWorld>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.SetWorldAssetByPackageName(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWorldAssetByPackageName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "ULevelStreaming.SetWorldAssetByPackageName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldBeVisible()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldBeVisible() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.ShouldBeVisible()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldBlockOnUnload()
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldBlockOnUnload() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.ShouldBlockOnUnload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldClientUseMakingInvisibleTransactionRequest()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldClientUseMakingInvisibleTransactionRequest() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.ShouldClientUseMakingInvisibleTransactionRequest()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldClientUseMakingVisibleTransactionRequest()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldClientUseMakingVisibleTransactionRequest() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.ShouldClientUseMakingVisibleTransactionRequest()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldRequireFullVisibilityToRender()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldRequireFullVisibilityToRender() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.ShouldRequireFullVisibilityToRender()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldReuseUnloadedButStillAroundLevels(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldReuseUnloadedButStillAroundLevels(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreaming.ShouldReuseUnloadedButStillAroundLevels(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.ShouldServerUseMakingVisibleTransactionRequest()
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldServerUseMakingVisibleTransactionRequest() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.ShouldServerUseMakingVisibleTransactionRequest()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.UpdateStreamingState(bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingState(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ULevelStreaming.UpdateStreamingState(bool&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreaming.UpdateTargetState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTargetState() const
    {
        return NativeCall<void*>(this, "ULevelStreaming.UpdateTargetState()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelLODIndex` +12, medido na build 25090264
    //  (offset absoluto medido: 0xF0; confianca alta)
    void*& AsyncRequestIDsField() const
    { return BrzCampoAncorado<void*>(this, "LevelLODIndex", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelLODIndex` +28, medido na build 25090264
    //  (offset absoluto medido: 0x100; confianca alta)
    int& CurrentStateField() const
    { return BrzCampoAncorado<int>(this, "LevelLODIndex", 28); }
    BrzCampoPonteiro EditorStreamingVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.EditorStreamingVolumes")); }
    BrzCampoPonteiro LODPackageNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.LODPackageNames")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LODPackageNames` +16, medido na build 25090264
    //  (offset absoluto medido: 0x70; confianca alta)
    void*& LODPackageNamesToLoadField() const
    { return BrzCampoAncorado<void*>(this, "LODPackageNames", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MinTimeBetweenVolumeUnloadRequests` +8, medido na build 25090264
    //  (offset absoluto medido: 0x130; confianca alta)
    void*& LastVolumeUnloadRequestTimeField() const
    { return BrzCampoAncorado<void*>(this, "MinTimeBetweenVolumeUnloadRequests", 8); }
    BrzCampoPonteiro LevelColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.LevelColor")); }
    int& LevelLODIndexField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreaming.LevelLODIndex"); }
    BrzCampoPonteiro LevelTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.LevelTransform")); }
    BrzCampoPonteiro LoadedLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.LoadedLevel")); }
    float& MinTimeBetweenVolumeUnloadRequestsField() const
    { return *GetNativePointerField<float*>(this, "ULevelStreaming.MinTimeBetweenVolumeUnloadRequests"); }
    BrzCampoPonteiro OnLevelHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.OnLevelHidden")); }
    BrzCampoPonteiro OnLevelLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.OnLevelLoaded")); }
    BrzCampoPonteiro OnLevelShownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.OnLevelShown")); }
    BrzCampoPonteiro OnLevelUnloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.OnLevelUnloaded")); }
    FName& PackageNameToLoadField() const
    { return *GetNativePointerField<FName*>(this, "ULevelStreaming.PackageNameToLoad"); }
    BrzCampoPonteiro PendingUnloadLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.PendingUnloadLevel")); }
    int& StreamingPriorityField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreaming.StreamingPriority"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LevelLODIndex` +29, medido na build 25090264
    //  (offset absoluto medido: 0x101; confianca alta)
    void*& TargetStateField() const
    { return BrzCampoAncorado<void*>(this, "LevelLODIndex", 29); }
    BrzCampoPonteiro WorldAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreaming.WorldAsset")); }
    BitFieldValue<bool, unsigned __int32> bClientOnlyVisible()
    { return { (void*)this, "bClientOnlyVisible" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDistanceStreaming()
    { return { (void*)this, "bDisableDistanceStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bDrawOnLevelStatusMap()
    { return { (void*)this, "bDrawOnLevelStatusMap" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTileStreaming()
    { return { (void*)this, "bEnableTileStreaming" }; }
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

};

#endif  // BRZ_SDK_JOGO_ULEVELSTREAMING_H
