// ==========================================================================
//  UGameplayTagsManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTAGSMANAGER_H
#define BRZ_SDK_JOGO_UGAMEPLAYTAGSMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayTagsManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTagsManager"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddChildrenTags(FGameplayTagContainer&,TSharedPtr<FGameplayTagNode,1>,bool,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddChildrenTags(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "UGameplayTagsManager.AddChildrenTags(FGameplayTagContainer&,TSharedPtr<FGameplayTagNode,1>,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddNativeGameplayTag(FName,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNativeGameplayTag(unsigned long long a0, const FString& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UGameplayTagsManager.AddNativeGameplayTag(FName,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddNativeGameplayTag(unsigned long long a0, FString* a1) const
    { return AddNativeGameplayTag(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddNativeGameplayTag(FNativeGameplayTag*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNativeGameplayTag(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.AddNativeGameplayTag(FNativeGameplayTag*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddRestrictedGameplayTagSource(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddRestrictedGameplayTagSource(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.AddRestrictedGameplayTagSource(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddRestrictedGameplayTagSource(FString* a0) const
    { return AddRestrictedGameplayTagSource(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddTagIniSearchPath(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTagIniSearchPath(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.AddTagIniSearchPath(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddTagIniSearchPath(FString* a0) const
    { return AddTagIniSearchPath(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddTagTableRow(FGameplayTagTableRow&,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTagTableRow(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned long long, bool>(this, "UGameplayTagsManager.AddTagTableRow(FGameplayTagTableRow&,FName,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.AddTagsFromAdditionalLooseIniFiles(TArray<FString,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTagsFromAdditionalLooseIniFiles(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.AddTagsFromAdditionalLooseIniFiles(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.ConstructGameplayTagTree()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConstructGameplayTagTree() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.ConstructGameplayTagTree()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.ConstructNetIndex()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConstructNetIndex() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.ConstructNetIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.DestroyGameplayTagTree()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DestroyGameplayTagTree() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.DestroyGameplayTagTree()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.DoneAddingNativeTags()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoneAddingNativeTags() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.DoneAddingNativeTags()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.ExtractParentTags(FGameplayTag&,TArray<FGameplayTag,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExtractParentTags(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayTagsManager.ExtractParentTags(FGameplayTag&,TArray<FGameplayTag,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.FindOrAddTagSource(FName,EGameplayTagSourceType,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindOrAddTagSource(unsigned long long a0, int a1, const FString& a2) const
    {
        return NativeCall<void*, unsigned long long, int, void*>(this, "UGameplayTagsManager.FindOrAddTagSource(FName,EGameplayTagSourceType,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FindOrAddTagSource(unsigned long long a0, int a1, FString* a2) const
    { return FindOrAddTagSource(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.GetNetIndexFromTag(FGameplayTag&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNetIndexFromTag(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.GetNetIndexFromTag(FGameplayTag&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.GetRestrictedTagConfigFiles(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRestrictedTagConfigFiles(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.GetRestrictedTagConfigFiles(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.HandleGameplayTagTreeChanged(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGameplayTagTreeChanged(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayTagsManager.HandleGameplayTagTreeChanged(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.ImportSingleGameplayTag(FGameplayTag&,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ImportSingleGameplayTag(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned long long, bool>(this, "UGameplayTagsManager.ImportSingleGameplayTag(FGameplayTag&,FName,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.InitializeManager()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeManager() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.InitializeManager()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.InsertTagIntoNodeArray(FName,FName,TSharedPtr<FGameplayTagNode,1>,TArray<TS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InsertTagIntoNodeArray(unsigned long long a0, unsigned long long a1, void* a2, void* a3, unsigned long long a4, const FString& a5, bool a6, bool a7, bool a8) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*, void*, unsigned long long, void*, bool, bool, bool>(this, "UGameplayTagsManager.InsertTagIntoNodeArray(FName,FName,TSharedPtr<FGameplayTagNode,1>,TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>>&,FName,FString&,bool,bool,bool)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5), a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InsertTagIntoNodeArray(unsigned long long a0, unsigned long long a1, void* a2, void* a3, unsigned long long a4, FString* a5, bool a6, bool a7, bool a8) const
    { return InsertTagIntoNodeArray(a0, a1, a2, a3, a4, *a5, a6, a7, a8); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.LoadGameplayTagTables(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadGameplayTagTables(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayTagsManager.LoadGameplayTagTables(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.OnDoneAddingNativeTagsDelegate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro OnDoneAddingNativeTagsDelegate() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.OnDoneAddingNativeTagsDelegate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.OnLastChanceToAddNativeTags()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro OnLastChanceToAddNativeTags() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.OnLastChanceToAddNativeTags()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.RedirectTagsForContainer(FGameplayTagContainer&,FProperty*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RedirectTagsForContainer(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayTagsManager.RedirectTagsForContainer(FGameplayTagContainer&,FProperty*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.RequestGameplayTag(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestGameplayTag(unsigned long long a0, bool a1) const
    {
        return NativeCall<void*, unsigned long long, bool>(this, "UGameplayTagsManager.RequestGameplayTag(FName,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.RequestGameplayTagChildren(FGameplayTag&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestGameplayTagChildren(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.RequestGameplayTagChildren(FGameplayTag&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.RequestGameplayTagDirectParent(FGameplayTag&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestGameplayTagDirectParent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagsManager.RequestGameplayTagDirectParent(FGameplayTag&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.ShouldImportTagsFromINI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldImportTagsFromINI() const
    {
        return NativeCall<void*>(this, "UGameplayTagsManager.ShouldImportTagsFromINI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.SplitGameplayTagFName(FGameplayTag&,TArray<FName,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SplitGameplayTagFName(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayTagsManager.SplitGameplayTagFName(FGameplayTag&,TArray<FName,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagsManager.ValidateTagCreation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateTagCreation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UGameplayTagsManager.ValidateTagCreation(FName)", a0);
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +200, medido na build 25090264
    //  (offset absoluto medido: 0x250; confianca baixa)
    void*& GameplayTagMapCriticalField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 200); }
    BrzCampoPonteiro GameplayTagTablesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsManager.GameplayTagTables")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +184, medido na build 25090264
    //  (offset absoluto medido: 0x240; confianca baixa)
    void*& InvalidTagCharactersField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +240, medido na build 25090264
    //  (offset absoluto medido: 0x278; confianca baixa)
    void*& NetworkGameplayTagNodeIndexField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 240); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +256, medido na build 25090264
    //  (offset absoluto medido: 0x288; confianca baixa)
    void*& NetworkGameplayTagNodeIndexHashField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 256); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +80, medido na build 25090264
    //  (offset absoluto medido: 0x1D8; confianca media)
    void*& RestrictedGameplayTagSourceNamesField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +165, medido na build 25090264
    //  (offset absoluto medido: 0x22D; confianca baixa)
    void*& ShouldAllowUnloadingTagsOverrideField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 165); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +167, medido na build 25090264
    //  (offset absoluto medido: 0x22F; confianca baixa)
    void*& ShouldDeferGameplayTagTreeRebuildsField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 167); }
    BrzCampoPonteiro TagSourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsManager.TagSources")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +172, medido na build 25090264
    //  (offset absoluto medido: 0x234; confianca baixa)
    void*& bDeferBroadcastOnGameplayTagTreeChangedField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 172); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +169, medido na build 25090264
    //  (offset absoluto medido: 0x231; confianca baixa)
    void*& bDoneAddingNativeTagsField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 169); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +160, medido na build 25090264
    //  (offset absoluto medido: 0x228; confianca baixa)
    void*& bIsConstructingGameplayTagTreeField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +260, medido na build 25090264
    //  (offset absoluto medido: 0x28C; confianca baixa)
    void*& bNetworkIndexInvalidatedField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 260); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +164, medido na build 25090264
    //  (offset absoluto medido: 0x22C; confianca baixa)
    void*& bShouldAllowUnloadingTagsField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 164); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +176, medido na build 25090264
    //  (offset absoluto medido: 0x238; confianca baixa)
    void*& bShouldBroadcastDeferredOnGameplayTagTreeChangedField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +163, medido na build 25090264
    //  (offset absoluto medido: 0x22B; confianca baixa)
    void*& bShouldWarnOnInvalidTagsField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 163); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +162, medido na build 25090264
    //  (offset absoluto medido: 0x22A; confianca baixa)
    void*& bUseDynamicReplicationField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 162); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TagSources` +161, medido na build 25090264
    //  (offset absoluto medido: 0x229; confianca baixa)
    void*& bUseFastReplicationField() const
    { return BrzCampoAncorado<void*>(this, "TagSources", 161); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTAGSMANAGER_H
