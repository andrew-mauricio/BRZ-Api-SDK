// ==========================================================================
//  UGameplayCueManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYCUEMANAGER_H
#define BRZ_SDK_JOGO_UGAMEPLAYCUEMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayCueManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayCueManager"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.AddGameplayCueNotifyPath(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddGameplayCueNotifyPath(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UGameplayCueManager.AddGameplayCueNotifyPath(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddGameplayCueNotifyPath(FString* a0, bool a1) const
    { return AddGameplayCueNotifyPath(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.CheckForTooManyRPCs(FName,FGameplayCuePendingExecute&,FString&,FGameplayEffe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForTooManyRPCs(unsigned long long a0, void* a1, const FString& a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*>(this, "UGameplayCueManager.CheckForTooManyRPCs(FName,FGameplayCuePendingExecute&,FString&,FGameplayEffectContext*)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CheckForTooManyRPCs(unsigned long long a0, void* a1, FString* a2, void* a3) const
    { return CheckForTooManyRPCs(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.DoesPendingCueExecuteMatch(FGameplayCuePendingExecute&,FGameplayCuePendingEx
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesPendingCueExecuteMatch(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayCueManager.DoesPendingCueExecuteMatch(FGameplayCuePendingExecute&,FGameplayCuePendingExecute&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.EndGameplayCuesFor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndGameplayCuesFor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.EndGameplayCuesFor(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.FindExistingCueOnActor(AActor&,TSubclassOf<AGameplayCueNotify_Actor>&,FGamep
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro FindExistingCueOnActor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void**, void*>(this, "UGameplayCueManager.FindExistingCueOnActor(AActor&,TSubclassOf<AGameplayCueNotify_Actor>&,FGameplayCueParameters&)", a0, &a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.FindRecycledCue(TSubclassOf<AGameplayCueNotify_Actor>&,UWorld&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindRecycledCue(void* a0, void* a1) const
    {
        return NativeCall<void*, void**, void*>(this, "UGameplayCueManager.FindRecycledCue(TSubclassOf<AGameplayCueNotify_Actor>&,UWorld&)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.FlushPendingCues()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FlushPendingCues() const
    {
        return NativeCall<void*>(this, "UGameplayCueManager.FlushPendingCues()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.GetAlwaysLoadedGameplayCuePaths()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAlwaysLoadedGameplayCuePaths() const
    {
        return NativeCall<void*>(this, "UGameplayCueManager.GetAlwaysLoadedGameplayCuePaths()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.GetInstancedCueActor(AActor*,UClass*,FGameplayCueParameters&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstancedCueActor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UGameplayCueManager.GetInstancedCueActor(AActor*,UClass*,FGameplayCueParameters&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.GetPreallocationInfo(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPreallocationInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.GetPreallocationInfo(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.GetValidGameplayCuePaths()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetValidGameplayCuePaths() const
    {
        return NativeCall<void*>(this, "UGameplayCueManager.GetValidGameplayCuePaths()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.HandleGameplayCues(AActor*,FGameplayTagContainer&,EGameplayCueEvent::Type,FG
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGameplayCues(void* a0, void* a1, int a2, void* a3, int a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, int>(this, "UGameplayCueManager.HandleGameplayCues(AActor*,FGameplayTagContainer&,EGameplayCueEvent::Type,FGameplayCueParameters&,EGameplayCueExecutionOptions)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.HandleMissingGameplayCue(UGameplayCueSet*,FGameplayCueNotifyData&,AActor*,EG
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleMissingGameplayCue(void* a0, void* a1, void* a2, int a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*>(this, "UGameplayCueManager.HandleMissingGameplayCue(UGameplayCueSet*,FGameplayCueNotifyData&,AActor*,EGameplayCueEvent::Type,FGameplayCueParameters&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.InitObjectLibrary(FGameplayCueObjectLibrary&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitObjectLibrary(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.InitObjectLibrary(FGameplayCueObjectLibrary&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.InitializeRuntimeObjectLibrary()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeRuntimeObjectLibrary() const
    {
        return NativeCall<void*>(this, "UGameplayCueManager.InitializeRuntimeObjectLibrary()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.InvokeGameplayCueAddedAndWhileActive_FromSpec(UAbilitySystemComponent*,FGame
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InvokeGameplayCueAddedAndWhileActive_FromSpec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UGameplayCueManager.InvokeGameplayCueAddedAndWhileActive_FromSpec(UAbilitySystemComponent*,FGameplayEffectSpec&,FPredictionKey)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.InvokeGameplayCueExecuted_FromSpec(UAbilitySystemComponent*,FGameplayEffectS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InvokeGameplayCueExecuted_FromSpec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UGameplayCueManager.InvokeGameplayCueExecuted_FromSpec(UAbilitySystemComponent*,FGameplayEffectSpec&,FPredictionKey)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.NotifyGameplayCueActorEndPlay(AGameplayCueNotify_Actor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=37]]
    BrzPonteiro NotifyGameplayCueActorEndPlay(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.NotifyGameplayCueActorEndPlay(AGameplayCueNotify_Actor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.NotifyGameplayCueActorFinished(AGameplayCueNotify_Actor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyGameplayCueActorFinished(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.NotifyGameplayCueActorFinished(AGameplayCueNotify_Actor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.OnCreated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCreated() const
    {
        return NativeCall<void*>(this, "UGameplayCueManager.OnCreated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.OnPostWorldCleanup(UWorld*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPostWorldCleanup(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "UGameplayCueManager.OnPostWorldCleanup(UWorld*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.OnPreReplayScrub(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPreReplayScrub(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.OnPreReplayScrub(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.RemoveGameplayCueNotifyPath(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveGameplayCueNotifyPath(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UGameplayCueManager.RemoveGameplayCueNotifyPath(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoveGameplayCueNotifyPath(FString* a0, bool a1) const
    { return RemoveGameplayCueNotifyPath(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueManager.ShouldSuppressGameplayCues(AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldSuppressGameplayCues(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueManager.ShouldSuppressGameplayCues(AActor*)", a0);
    }

    BrzCampoPonteiro EditorGameplayCueObjectLibraryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.EditorGameplayCueObjectLibrary")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EditorGameplayCueObjectLibrary` +80, medido na build 25090264
    //  (offset absoluto medido: 0xE8; confianca media)
    void*& GameplayCueAssetHandleField() const
    { return BrzCampoAncorado<void*>(this, "EditorGameplayCueObjectLibrary", 80); }
    BrzCampoPonteiro GameplayCueClassesForPreallocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.GameplayCueClassesForPreallocation")); }
    int& GameplayCueSendContextCountField() const
    { return *GetNativePointerField<int*>(this, "UGameplayCueManager.GameplayCueSendContextCount"); }
    BrzCampoPonteiro LoadedGameplayCueNotifyClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.LoadedGameplayCueNotifyClasses")); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.NativeClass")); }
    BrzCampoPonteiro PendingExecuteCuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.PendingExecuteCues")); }
    BrzCampoPonteiro PreallocationInfoList_InternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.PreallocationInfoList_Internal")); }
    BrzCampoPonteiro RuntimeGameplayCueObjectLibraryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueManager.RuntimeGameplayCueObjectLibrary")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EditorGameplayCueObjectLibrary` +96, medido na build 25090264
    //  (offset absoluto medido: 0xF8; confianca media)
    void*& StreamableManagerField() const
    { return BrzCampoAncorado<void*>(this, "EditorGameplayCueObjectLibrary", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EditorGameplayCueObjectLibrary` +328, medido na build 25090264
    //  (offset absoluto medido: 0x1E0; confianca baixa)
    void*& TranslationManagerField() const
    { return BrzCampoAncorado<void*>(this, "EditorGameplayCueObjectLibrary", 328); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYCUEMANAGER_H
