// ==========================================================================
//  UInventoryPanelWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UINVENTORYPANELWIDGET_H
#define BRZ_SDK_JOGO_UINVENTORYPANELWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UInventoryPanelWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UInventoryPanelWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ClearSearchBox()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearSearchBox() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.ClearSearchBox()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ClickedButton(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClickedButton(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.ClickedButton(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.DelayedMoveAddedItemToFolder(FString,IDataListProviderInterface*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DelayedMoveAddedItemToFolder(const FString& a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UInventoryPanelWidget.DelayedMoveAddedItemToFolder(FString,IDataListProviderInterface*,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DelayedMoveAddedItemToFolder(FString* a0, void* a1, int a2) const
    { return DelayedMoveAddedItemToFolder(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GameTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UInventoryPanelWidget.GameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GamepadToggleTabs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GamepadToggleTabs() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GamepadToggleTabs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetActiveDataList()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActiveDataList() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetActiveDataList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetCraftables(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCraftables(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.GetCraftables(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetCraftingDataList()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCraftingDataList() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetCraftingDataList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetInventoryDataList()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetInventoryDataList() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetInventoryDataList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetParentPrimalUI()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetParentPrimalUI() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetParentPrimalUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetSelectedItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedItem() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetSelectedItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetSelectedSkin()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedSkin() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetSelectedSkin()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetSkinDataList()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSkinDataList() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetSkinDataList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetSortType()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSortType() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GetSortType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GetSortTypeShortName(EInventorySortType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSortTypeShortName(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.GetSortTypeShortName(EInventorySortType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.GotoNextTab()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GotoNextTab() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.GotoNextTab()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.HasEngrams(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasEngrams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.HasEngrams(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.Init(UUI_Inventory*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Init(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.Init(UUI_Inventory*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnAddedItemToCustomFolder(FString,IDataListEntryInterface*,IDataListProvid
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAddedItemToCustomFolder(const FString& a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UInventoryPanelWidget.OnAddedItemToCustomFolder(FString,IDataListEntryInterface*,IDataListProviderInterface*,int)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnAddedItemToCustomFolder(FString* a0, void* a1, void* a2, int a3) const
    { return OnAddedItemToCustomFolder(*a0, a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnCraftingItemDoubleClicked(UDataListEntryButton*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCraftingItemDoubleClicked(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.OnCraftingItemDoubleClicked(UDataListEntryButton*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnCustomFolderDeleted(FString,TArray<IDataListEntryInterface*,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCustomFolderDeleted(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UInventoryPanelWidget.OnCustomFolderDeleted(FString,TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnCustomFolderDeleted(FString* a0, void* a1) const
    { return OnCustomFolderDeleted(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnCustomFolderItemDeleted(FString,IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCustomFolderItemDeleted(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UInventoryPanelWidget.OnCustomFolderItemDeleted(FString,IDataListEntryInterface*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnCustomFolderItemDeleted(FString* a0, void* a1) const
    { return OnCustomFolderItemDeleted(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnCustomFoldersSwapped(FString,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCustomFoldersSwapped(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UInventoryPanelWidget.OnCustomFoldersSwapped(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnCustomFoldersSwapped(FString* a0, FString* a1) const
    { return OnCustomFoldersSwapped(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnDataListRequestUpdate(UDataListPanel&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnDataListRequestUpdate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.OnDataListRequestUpdate(UDataListPanel&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnFolderPathChange(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnFolderPathChange(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.OnFolderPathChange(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnFolderPathChange(FString* a0) const
    { return OnFolderPathChange(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnGamepadPressSortIcon()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGamepadPressSortIcon() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.OnGamepadPressSortIcon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnGetSortContextMenuContent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGetSortContextMenuContent() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.OnGetSortContextMenuContent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnInventoryItemDoubleClicked(UDataListEntryButton*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInventoryItemDoubleClicked(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.OnInventoryItemDoubleClicked(UDataListEntryButton*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnInventoryItemSelected(UDataListEntryButton*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInventoryItemSelected(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.OnInventoryItemSelected(UDataListEntryButton*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInventoryPrimalItemAdded(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UInventoryPanelWidget.OnInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnInventorySkinSelected(UDataListEntryButton*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInventorySkinSelected(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.OnInventorySkinSelected(UDataListEntryButton*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnOrderTypeSelected(FString,ESelectInfo::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnOrderTypeSelected(const FString& a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UInventoryPanelWidget.OnOrderTypeSelected(FString,ESelectInfo::Type)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnOrderTypeSelected(FString* a0, int a1) const
    { return OnOrderTypeSelected(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnSkinDelayFilterCleared(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnSkinDelayFilterCleared(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.OnSkinDelayFilterCleared(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnSkinFilterClearClicked()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnSkinFilterClearClicked() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.OnSkinFilterClearClicked()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnSkinFilterCleared()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnSkinFilterCleared() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.OnSkinFilterCleared()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.OnTransferItemToRemoteCustomFolder(FString,IDataListEntryInterface*,IDataL
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTransferItemToRemoteCustomFolder(const FString& a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UInventoryPanelWidget.OnTransferItemToRemoteCustomFolder(FString,IDataListEntryInterface*,IDataListProviderInterface*,int)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnTransferItemToRemoteCustomFolder(FString* a0, void* a1, void* a2, int a3) const
    { return OnTransferItemToRemoteCustomFolder(*a0, a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ProcessArkTributeExpirationTimes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessArkTributeExpirationTimes() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.ProcessArkTributeExpirationTimes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.RefreshItemLists()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshItemLists() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.RefreshItemLists()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SearchTextChanged(FText&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SearchTextChanged(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryPanelWidget.SearchTextChanged(FText&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SetFilterInMode(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetFilterInMode(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.SetFilterInMode(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SetReceivingInventoryItemsLabelVisible(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetReceivingInventoryItemsLabelVisible(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UInventoryPanelWidget.SetReceivingInventoryItemsLabelVisible(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SetupInventory(UPrimalInventoryComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupInventory(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UInventoryPanelWidget.SetupInventory(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SetupTradeInventory(bool,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupTradeInventory(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UInventoryPanelWidget.SetupTradeInventory(bool,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SetupTradeInventory_Implementation(bool,AShooterCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetupTradeInventory_Implementation(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UInventoryPanelWidget.SetupTradeInventory_Implementation(bool,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ShowArkCreatures()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowArkCreatures() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.ShowArkCreatures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ShowCraftables()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowCraftables() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.ShowCraftables()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ShowItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowItems() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.ShowItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.ShowSkins()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowSkins() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.ShowSkins()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.Sort(EInventorySortType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Sort(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.Sort(EInventorySortType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SortAlphabetical()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortAlphabetical() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.SortAlphabetical()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SortBySpoilTime()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortBySpoilTime() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.SortBySpoilTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SortByType()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortByType() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.SortByType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.SortByWeight()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortByWeight() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.SortByWeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.StopTimers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopTimers() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.StopTimers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.UpdateButtons()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateButtons() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.UpdateButtons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.UpdateCraftablesFolders(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCraftablesFolders(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.UpdateCraftablesFolders(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.UpdateItemsFolders(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateItemsFolders(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.UpdateItemsFolders(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.UpdateOrderCombo()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateOrderCombo() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.UpdateOrderCombo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.UpdateSkinsFolders(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSkinsFolders(int a0) const
    {
        return NativeCall<void*, int>(this, "UInventoryPanelWidget.UpdateSkinsFolders(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryPanelWidget.UpdateTradeInventory_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTradeInventory_Implementation() const
    {
        return NativeCall<void*>(this, "UInventoryPanelWidget.UpdateTradeInventory_Implementation()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UInventoryPanelWidget.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UInventoryPanelWidget.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.AnimationTickManager")); }
    FName& ArkCreaturesPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ArkCreaturesPanelName"); }
    FName& AutoStackButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.AutoStackButtonName"); }
    FName& ClearCraftingQueueButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ClearCraftingQueueButtonName"); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ConfirmationDialogUITemplate")); }
    BrzCampoPonteiro CraftQueueItemButtonNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.CraftQueueItemButtonNames")); }
    FName& CraftingButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingButtonName"); }
    FName& CraftingDataListNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingDataListName"); }
    FName& CraftingEnabledEffectNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingEnabledEffectName"); }
    FName& CraftingQueueHeaderBoxNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingQueueHeaderBoxName"); }
    FName& CraftingQueueItemsBoxNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingQueueItemsBoxName"); }
    FName& CraftingTabLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingTabLabelName"); }
    FName& CreaturesButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CreaturesButtonName"); }
    BrzCampoPonteiro CurrentTradingPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.CurrentTradingPlayer")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryPanelWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryPanelWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryPanelWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryPanelWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryPanelWidget.DPIScaler"); }
    FName& DataListSwitcherNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DataListSwitcherName"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.DefaultToolTipWidget")); }
    BrzCampoPonteiro DefaultWidgetSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.DefaultWidgetSize")); }
    int& DefaultWidgetWrapNumField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.DefaultWidgetWrapNum"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.DesiredFocusWidget")); }
    FName& DropAllButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DropAllButtonName"); }
    FString& EnableDediSortingInputButton_ToolTip_DisabledField() const
    { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableDediSortingInputButton_ToolTip_Disabled"); }
    FString& EnableDediSortingInputButton_ToolTip_EnabledField() const
    { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableDediSortingInputButton_ToolTip_Enabled"); }
    FString& EnableSortingButton_ToolTip_DisabledField() const
    { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableSortingButton_ToolTip_Disabled"); }
    FString& EnableSortingButton_ToolTip_EnabledField() const
    { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableSortingButton_ToolTip_Enabled"); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UInventoryPanelWidget.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.HTTPGetResponseEvent")); }
    BrzCampoPonteiro HandheldWidgetSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.HandheldWidgetSize")); }
    int& HandheldWidgetWrapNumField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.HandheldWidgetWrapNum"); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.HandleVisibilityWithInput")); }
    FName& HeaderBoxNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.HeaderBoxName"); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryPanelWidget.HighlightStartPointType"); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UInventoryPanelWidget.InputComponent"); }
    FName& InventoryButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryButtonName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsRemoteInventory` +4, medido na build 25535041
    //  (offset absoluto medido: 0x97C; confianca alta)
    void*& InventoryCompField() const
    { return BrzCampoAncorado<void*>(this, "bIsRemoteInventory", 4); }
    FName& InventoryDataListNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryDataListName"); }
    FName& InventoryEnabledEffectNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryEnabledEffectName"); }
    FName& InventoryTabLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryTabLabelName"); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UInventoryPanelWidget.ItemContainer"); }
    BrzCampoPonteiro LastItemSelectedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.LastItemSelected")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HandheldWidgetWrapNum` +16, medido na build 25535041
    //  (offset absoluto medido: 0x958; confianca alta)
    void*& LastSkinSelectedField() const
    { return BrzCampoAncorado<void*>(this, "HandheldWidgetWrapNum", 16); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.Navigation")); }
    FName& NewFolderButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.NewFolderButtonName"); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.OriginalUnstretchedSize")); }
    BrzCampoPonteiro OverrideButtonSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.OverrideButtonSounds")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.QueuedWidgetAnimationTransitions")); }
    FName& ReceivingItemsLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ReceivingItemsLabelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HandheldWidgetWrapNum` +8, medido na build 25535041
    //  (offset absoluto medido: 0x950; confianca alta)
    void*& RefreshItemListsHandleField() const
    { return BrzCampoAncorado<void*>(this, "HandheldWidgetWrapNum", 8); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UInventoryPanelWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.SceneStackPriority"); }
    FName& SearchTextBoxNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SearchTextBoxName"); }
    BrzCampoPonteiro ShouldStretchMainScreenWhenHandheldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ShouldStretchMainScreenWhenHandheld")); }
    FName& ShowAllButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowAllButtonName"); }
    FName& ShowEngramsBoxNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowEngramsBoxName"); }
    FName& ShowEngramsButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowEngramsButtonName"); }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.SizeBoxHandheldSize")); }
    FName& SkinDataListNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SkinDataListName"); }
    FName& SkinsButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SkinsButtonName"); }
    FName& SkinsEnabledEffectNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SkinsEnabledEffectName"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.Slot"); }
    FName& SortMenuAnchorNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SortMenuAnchorName"); }
    FName& SortMenuButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SortMenuButtonName"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryPanelWidget.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.StretchedHandheldSize")); }
    BrzCampoPonteiro SwitcherTextActiveColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.SwitcherTextActiveColor")); }
    BrzCampoPonteiro SwitcherTextInactiveColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.SwitcherTextInactiveColor")); }
    FName& TabBgSwitcherNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TabBgSwitcherName"); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.ToolTipWidgetDelegate")); }
    FName& TooltipToggleButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TooltipToggleButtonName"); }
    FName& TransferAllButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TransferAllButtonName"); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.VisibilityKBMInput")); }
    BrzCampoPonteiro WasInHandheldModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.WasInHandheldMode")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.XBoxFooterUITemplate")); }
    BrzCampoPonteiro bAutoProcessSplitscreenScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bAutoProcessSplitscreenScaling")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCachedIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bCachedIsGamepadActive")); }
    BrzCampoPonteiro bCaptureMouseInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bCaptureMouseInput")); }
    BrzCampoPonteiro bClickClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bClickClosesMenu")); }
    BrzCampoPonteiro bCloseOnPlayerDieField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bCloseOnPlayerDie")); }
    BrzCampoPonteiro bConstrainVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bConstrainVirtualCursor")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoExtraDataListButtonPanelFilteringChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bDoExtraDataListButtonPanelFilteringChecks")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bDontRenderHighlight")); }
    BrzCampoPonteiro bEscapeClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bEscapeClosesMenu")); }
    BrzCampoPonteiro bEscapeOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bEscapeOpensPauseMenu")); }
    BrzCampoPonteiro bForceDisableFrameGenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bForceDisableFrameGen")); }
    BrzCampoPonteiro bForceFullscreenVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bForceFullscreenVirtualCursor")); }
    BrzCampoPonteiro bForceVirtualCursorEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bForceVirtualCursorEnabled")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIgnoreUIScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIgnoreUIScaling")); }
    BrzCampoPonteiro bIsClosingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsClosing")); }
    BrzCampoPonteiro bIsCustomCosmeticInvField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsCustomCosmeticInv")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsFocusable")); }
    BrzCampoPonteiro bIsGameplayUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsGameplayUI")); }
    BrzCampoPonteiro bIsInvTradeOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsInvTradeOwner")); }
    BrzCampoPonteiro bIsRemoteInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsRemoteInventory")); }
    BrzCampoPonteiro bIsTopUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsTopUI")); }
    BrzCampoPonteiro bIsTradeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsTradeInventory")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bIsVolatile")); }
    BrzCampoPonteiro bMenuSupportSlomoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bMenuSupportSlomo")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bOverride_Cursor")); }
    BrzCampoPonteiro bPreventGamepadDpadNavegationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bPreventGamepadDpadNavegation")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bScaleScreenResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bScaleScreenResolution")); }
    BrzCampoPonteiro bShouldValidateInputOnRemoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShouldValidateInputOnRemove")); }
    BrzCampoPonteiro bShowAcceptIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowAcceptIcon")); }
    BrzCampoPonteiro bShowBumpersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowBumpersIcon")); }
    BrzCampoPonteiro bShowCancelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowCancelIcon")); }
    BrzCampoPonteiro bShowFaceBtnBottomIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowFaceBtnBottomIcon")); }
    BrzCampoPonteiro bShowFaceBtnLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowFaceBtnLeftIcon")); }
    BrzCampoPonteiro bShowFaceBtnRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowFaceBtnRightIcon")); }
    BrzCampoPonteiro bShowFaceBtnTopIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowFaceBtnTopIcon")); }
    BrzCampoPonteiro bShowLStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowLStickIcon")); }
    BrzCampoPonteiro bShowLTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowLTBtnIcon")); }
    BrzCampoPonteiro bShowLeftShoulderBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowLeftShoulderBtnIcon")); }
    BrzCampoPonteiro bShowRStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowRStickIcon")); }
    BrzCampoPonteiro bShowRTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowRTBtnIcon")); }
    BrzCampoPonteiro bShowStartBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowStartBtnIcon")); }
    BrzCampoPonteiro bShowXBoxFooterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bShowXBoxFooter")); }
    BrzCampoPonteiro bSpecialRightOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bSpecialRightOpensPauseMenu")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bStopAction")); }
    BrzCampoPonteiro bUseBPInitForObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bUseBPInitForObjects")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bUseWindowClippingForHighlight")); }
    BrzCampoPonteiro bWantsPrimalItemNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryPanelWidget.bWantsPrimalItemNotifications")); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.virtualCursorFrames"); }
    BitFieldValue<bool, unsigned __int32> bIsCustomCosmeticInv()
    { return { (void*)this, "bIsCustomCosmeticInv" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvTradeOwner()
    { return { (void*)this, "bIsInvTradeOwner" }; }
    BitFieldValue<bool, unsigned __int32> bIsRemoteInventory()
    { return { (void*)this, "bIsRemoteInventory" }; }
    BitFieldValue<bool, unsigned __int32> bIsTradeInventory()
    { return { (void*)this, "bIsTradeInventory" }; }

};

#endif  // BRZ_SDK_JOGO_UINVENTORYPANELWIDGET_H
