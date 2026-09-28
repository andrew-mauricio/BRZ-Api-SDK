// ==========================================================================
//  UPrimalInventoryComponent_StorageInterface — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STORAGEINTERFACE_H
#define BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STORAGEINTERFACE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterPlayerController;
struct FActorComponentTickFunction;
struct FName;
struct UPrimalItem;
struct UTexture2D;


struct UPrimalInventoryComponent_StorageInterface
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalInventoryComponent_StorageInterface"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.BackFolderFilter()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BackFolderFilter() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.BackFolderFilter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.CacheWirelessItemUpdateDelta(UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CacheWirelessItemUpdateDelta(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void**, void*, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.CacheWirelessItemUpdateDelta(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>&,int&,bool&,bool&)", a0, &a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.CanLinkToContainer(APrimalStructureItemContainer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanLinkToContainer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.CanLinkToContainer(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.CanPlayerAccess(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerAccess(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.CanPlayerAccess(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ClientFinishReceivingItems(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientFinishReceivingItems(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.ClientFinishReceivingItems(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ClientMultiUse(APlayerController*,int,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UPrimalInventoryComponent_StorageInterface.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ClientStartReceivingItems(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStartReceivingItems(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.ClientStartReceivingItems(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.DeactivateBuffForPlayer(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DeactivateBuffForPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.DeactivateBuffForPlayer(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.DebugPrintString(FString,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DebugPrintString(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.DebugPrintString(FString,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DebugPrintString(FString* a0, bool a1) const
    { return DebugPrintString(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.DebugPrintWirelessItems(TMap<TSubclassOf<UPrimalItem>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DebugPrintWirelessItems(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.DebugPrintWirelessItems(TMap<TSubclassOf<UPrimalItem>,FStorageInterfaceItemData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,FStorageInterfaceItemData,0>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.FindItem(FItemNetID&,bool,bool,int*)
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* FindItem(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<UPrimalItem*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent_StorageInterface.FindItem(FItemNetID&,bool,bool,int*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ForceShowAlertSymbolInInventory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ForceShowAlertSymbolInInventory() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.ForceShowAlertSymbolInInventory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.GetContainersForItem(FItemNetID,TSubclassOf<UPrimalIt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetContainersForItem(unsigned long long a0, void* a1, bool a2, void* a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, void**, bool, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.GetContainersForItem(FItemNetID,TSubclassOf<UPrimalItem>&,bool,TArray<APrimalStructureItemContainer*,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, &a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.GetDataListEntries(TArray<IDataListEntryInterface*,TS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDataListEntries(void* a0, int a1, bool a2, signed char a3, void* a4, void* a5, void* a6, signed char a7, void* a8, bool a9, bool a10, bool a11, signed char a12) const
    {
        return NativeCall<void*, void*, int, bool, signed char, void*, void*, void*, signed char, void*, bool, bool, bool, signed char>(this, "UPrimalInventoryComponent_StorageInterface.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.GetItemsToSerialize(bool,TArray<TSubclassOf<UPrimalIt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemsToSerialize(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalInventoryComponent_StorageInterface.GetItemsToSerialize(bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.GetMultiUseEntries(APlayerController*,TArray<FMultiUs
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.GetWirelessItemRange()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetWirelessItemRange() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.GetWirelessItemRange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.IsInWirelessItemRange(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInWirelessItemRange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.IsInWirelessItemRange(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.IsValidItem(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidItem(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.IsValidItem(UPrimalItem*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ItemContainerUpdatedNearby(APrimalStructureItemContai
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ItemContainerUpdatedNearby(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.ItemContainerUpdatedNearby(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OnComponentDestroyed(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnComponentDestroyed(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.OnComponentDestroyed(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OnLinkedContainerDestroyed(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLinkedContainerDestroyed(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedContainerDestroyed(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemAdded(UPrimalInventoryComponent*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLinkedInventoryItemAdded(void* a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, int, bool>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemAdded(UPrimalInventoryComponent*,UPrimalItem*,int,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemQuantityUpdated(UPrimalInventory
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLinkedInventoryItemQuantityUpdated(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemQuantityUpdated(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemRemoved(UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLinkedInventoryItemRemoved(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemRemoved(UPrimalInventoryComponent*,UPrimalItem*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OnRep_LinkedContainerCount()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_LinkedContainerCount() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.OnRep_LinkedContainerCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIConfirmationDialogAccepted(A
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideHandleInventoryUIConfirmationDialogAccepted(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIConfirmationDialogAccepted(AShooterPlayerController*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemCraftAll(AShooterPlayerC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideHandleInventoryUIItemCraftAll(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemCraftAll(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemDoubleClicked(AShooterPl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideHandleInventoryUIItemDoubleClicked(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemDoubleClicked(AShooterPlayerController*,UPrimalItem*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemDragFromRemoteInventory(
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideHandleInventoryUIItemDragFromRemoteInventory(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemDragFromRemoteInventory(AShooterPlayerController*,UPrimalItem*,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemTransfer(AShooterPlayerC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideHandleInventoryUIItemTransfer(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemTransfer(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemUse(AShooterPlayerContro
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OverrideHandleInventoryUIItemUse(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemUse(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ProcessCachedWirelessItemUpdateDeltas()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessCachedWirelessItemUpdateDeltas() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.ProcessCachedWirelessItemUpdateDeltas()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RemoveItem(FItemNetID&,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveItem(void* a0, bool a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.RemoveItem(FItemNetID&,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RemoveThreshold(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveThreshold(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.RemoveThreshold(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RequestItemsForClass(AShooterPlayerController*,bool,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestItemsForClass(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent_StorageInterface.RequestItemsForClass(AShooterPlayerController*,bool,bool,TSubclassOf<UPrimalItem>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RequestLocateItem(AShooterPlayerController*,UPrimalIt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestLocateItem(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.RequestLocateItem(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RequestRemoveThreshold(AShooterPlayerController*,UPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestRemoveThreshold(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.RequestRemoveThreshold(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RequestSetThreshold(AShooterPlayerController*,UPrimal
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestSetThreshold(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.RequestSetThreshold(AShooterPlayerController*,UPrimalItem*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.RequestWithdrawItemsOfClass(AShooterPlayerController*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestWithdrawItemsOfClass(void* a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, int, bool>(this, "UPrimalInventoryComponent_StorageInterface.RequestWithdrawItemsOfClass(AShooterPlayerController*,UPrimalItem*,int,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.ServerRequestItems_ClassFilter(AShooterPlayerControll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestItems_ClassFilter(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent_StorageInterface.ServerRequestItems_ClassFilter(AShooterPlayerController*,bool,bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetClientViewingItemInstancesClass(TSubclassOf<UPrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetClientViewingItemInstancesClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.SetClientViewingItemInstancesClass(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetDediItemQty(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDediItemQty(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.SetDediItemQty(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetFuelItemQty(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetFuelItemQty(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.SetFuelItemQty(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetItemQty(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetItemQty(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.SetItemQty(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetThreshold(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetThreshold(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.SetThreshold(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetThresholdQty(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetThresholdQty(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.SetThresholdQty(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.SetWirelessItemUpdateTimer(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWirelessItemUpdateTimer(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalInventoryComponent_StorageInterface.SetWirelessItemUpdateTimer(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TimerUpdateWirelessItems()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro TimerUpdateWirelessItems() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.TimerUpdateWirelessItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TransferAllFromRemoteInventory(AShooterPlayerControll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferAllFromRemoteInventory(void* a0, const FString& a1, const FString& a2, const FString& a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.TransferAllFromRemoteInventory(AShooterPlayerController*,FString&,FString&,FString&,bool)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TransferAllFromRemoteInventory(void* a0, FString* a1, FString* a2, FString* a3, bool a4) const
    { return TransferAllFromRemoteInventory(a0, *a1, *a2, *a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TransferFromRemoteInventory(AShooterPlayerController*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferFromRemoteInventory(void* a0, unsigned long long a1, int a2, int a3, bool a4, float a5) const
    {
        return NativeCall<void*, void*, unsigned long long, int, int, bool, float>(this, "UPrimalInventoryComponent_StorageInterface.TransferFromRemoteInventory(AShooterPlayerController*,FItemNetID,int,int,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TryAddBuffToPlayer(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryAddBuffToPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.TryAddBuffToPlayer(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TryLinkContainer(APrimalStructureItemContainer*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryLinkContainer(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.TryLinkContainer(APrimalStructureItemContainer*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UPrimalInventoryComponent_StorageInterface.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.TrySwitchViewingItemClassMode(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TrySwitchViewingItemClassMode(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent_StorageInterface.TrySwitchViewingItemClassMode(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.UnlinkContainer(APrimalStructureItemContainer*,bool,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnlinkContainer(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.UnlinkContainer(APrimalStructureItemContainer*,bool,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.Unstasised()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Unstasised() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.Unstasised()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.UpdateItemsForContainer(APrimalStructureItemContainer
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateItemsForContainer(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.UpdateItemsForContainer(APrimalStructureItemContainer*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.UpdateLinkedContainerCount()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateLinkedContainerCount() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.UpdateLinkedContainerCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.UpdateWirelessItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateWirelessItems() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent_StorageInterface.UpdateWirelessItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.WithdrawAllItemsOfClass(TSubclassOf<UPrimalItem>,ASho
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WithdrawAllItemsOfClass(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalInventoryComponent_StorageInterface.WithdrawAllItemsOfClass(TSubclassOf<UPrimalItem>,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.WithdrawDedicatedStorageItems(TSubclassOf<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WithdrawDedicatedStorageItems(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent_StorageInterface.WithdrawDedicatedStorageItems(TSubclassOf<UPrimalItem>,AShooterPlayerController*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_StorageInterface.WithdrawItemsOfClass(TSubclassOf<UPrimalItem>,AShoote
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WithdrawItemsOfClass(void* a0, void* a1, int a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, int, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.WithdrawItemsOfClass(TSubclassOf<UPrimalItem>,AShooterPlayerController*,int,bool,bool)", a0, a1, a2, a3, a4);
    }

    int& AbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.AbsoluteMaxInventoryItems"); }
    int& AbsoluteMaxVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.AbsoluteMaxVanityItems"); }
    TObjectPtr<UTexture2D>& AccessInventoryIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UPrimalInventoryComponent_StorageInterface.AccessInventoryIcon"); }
    int& ActionWheelAccessInventoryPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.ActionWheelAccessInventoryPriority"); }
    float& ActiveInventoryRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.ActiveInventoryRefreshInterval"); }
    TArray<void*>& AdditionalItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.AdditionalItemSets"); }
    TArray<UPrimalItem*>& AllCustomCosmeticItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.AllCustomCosmeticItems"); }
    TArray<UPrimalItem*>& AllDyeColorItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.AllDyeColorItems"); }
    BrzCampoPonteiro AllSortingInputItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.AllSortingInputItems")); }
    TArray<UPrimalItem*>& ArkTributeItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.ArkTributeItems"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.AssetUserData"); }
    BrzCampoPonteiro BuffClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.BuffClass")); }
    float& CachedItemUpdateDeltaProcessingTimerLengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.CachedItemUpdateDeltaProcessingTimerLength"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessItems` +88, medido na build 25535041
    //  (offset absoluto medido: 0x8B0; confianca media)
    void*& CachedItemUpdateDeltasField() const
    { return BrzCampoAncorado<void*>(this, "WirelessItems", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessItems` +80, medido na build 25535041
    //  (offset absoluto medido: 0x8A8; confianca media)
    void*& CachedItemUpdateHandleField() const
    { return BrzCampoAncorado<void*>(this, "WirelessItems", 80); }
    TArray<void*>& CheatInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.CheatInventoryItems"); }
    BrzCampoPonteiro ClientViewingItemInstancesClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ClientViewingItemInstancesClass")); }
    BrzCampoPonteiro CloseInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.CloseInventorySound")); }
    BrzCampoPonteiro ColdStoredItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ColdStoredItems")); }
    BrzCampoPonteiro ColdStoredRichItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ColdStoredRichItems")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ComponentTags"); }
    float& CraftingItemSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.CraftingItemSpeed"); }
    TArray<UPrimalItem*>& CraftingItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.CraftingItems"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.CreationMethod"); }
    int& CurrentRangeSettingIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.CurrentRangeSettingIndex"); }
    int& CurrentSlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.CurrentSlotMaxMagicNumber"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.CustomData"); }
    TArray<void*>& CustomFolderItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.CustomFolderItems"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalInventoryComponent_StorageInterface.CustomTag"); }
    BrzCampoPonteiro DataListEntryWidgetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DataListEntryWidgetOverride")); }
    int& DefaultCraftingQuantityMultiplierField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultCraftingQuantityMultiplier"); }
    float& DefaultCraftingRequirementsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultCraftingRequirementsMultiplier"); }
    TArray<void*>& DefaultEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultEngrams"); }
    TArray<void*>& DefaultEngrams2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultEngrams2"); }
    TArray<void*>& DefaultEngrams3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultEngrams3"); }
    TArray<void*>& DefaultEngrams4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultEngrams4"); }
    TArray<void*>& DefaultEquippedItemSkinsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultEquippedItemSkins"); }
    TArray<void*>& DefaultEquippedItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultEquippedItems"); }
    TArray<void*>& DefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItems"); }
    TArray<void*>& DefaultInventoryItems2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItems2"); }
    TArray<void*>& DefaultInventoryItems3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItems3"); }
    TArray<void*>& DefaultInventoryItems4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItems4"); }
    BrzCampoPonteiro DefaultInventoryItemsClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItemsClasses")); }
    BrzCampoPonteiro DefaultInventoryItemsClassesNewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItemsClassesNew")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItemsRandomCustomStrings")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsWeightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryItemsRandomCustomStringsWeights")); }
    TArray<void*>& DefaultInventoryQualitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryQualities"); }
    BrzCampoPonteiro DefaultInventoryQuantitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DefaultInventoryQuantities")); }
    TArray<void*>& DefaultSlotItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.DefaultSlotItems"); }
    BrzCampoPonteiro DisabledItemsTEMPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DisabledItemsTEMP")); }
    int& DisplayDefaultItemInventoryCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.DisplayDefaultItemInventoryCount"); }
    BrzCampoPonteiro DropItemRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DropItemRotationOffset")); }
    BrzCampoPonteiro DroppedItemTemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.DroppedItemTemplateOverride")); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.EngramRequirementClassOverride")); }
    TArray<void*>& EquippableItemTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.EquippableItemTypes"); }
    BrzCampoPonteiro EquippableItemTypesHiddenInStatsPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.EquippableItemTypesHiddenInStatsPanel")); }
    TArray<UPrimalItem*>& EquippedItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.EquippedItems"); }
    TArray<void*>& EventItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.EventItems"); }
    BrzCampoPonteiro ExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ExtraItemDisplay")); }
    float& ExtraMaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.ExtraMaxInventoryWeight"); }
    BrzCampoPonteiro ForceAllowCraftingForInventoryComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ForceAllowCraftingForInventoryComponents")); }
    BrzCampoPonteiro ForceAllowItemStackingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ForceAllowItemStackings")); }
    int& ForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.ForceDefaultInventoryRefreshVersion"); }
    int& FreeCraftingModeQuantityValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.FreeCraftingModeQuantityValue"); }
    float& GenerateItemSetsQualityMultiplierMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.GenerateItemSetsQualityMultiplierMax"); }
    float& GenerateItemSetsQualityMultiplierMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.GenerateItemSetsQualityMultiplierMin"); }
    BrzCampoPonteiro GroundDropTraceLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.GroundDropTraceLocationOffset")); }
    BrzCampoPonteiro IgnoreDefaultCraftingQuantityMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.IgnoreDefaultCraftingQuantityMultiplierEngrams")); }
    BrzCampoPonteiro IgnoreDefaultCraftingRequirementsMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.IgnoreDefaultCraftingRequirementsMultiplierEngrams")); }
    int& InvUpdatedFrameField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.InvUpdatedFrame"); }
    TArray<UPrimalItem*>& InventoryItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.InventoryItems"); }
    FString& InventoryNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent_StorageInterface.InventoryNameOverride"); }
    TArray<void*>& ItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemClassWeightMultipliers"); }
    TArray<void*>& ItemCraftQueueEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemCraftQueueEntries"); }
    TArray<void*>& ItemCraftingConsumptionReplenishmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemCraftingConsumptionReplenishments"); }
    BrzCampoPonteiro ItemCraftingSoundOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ItemCraftingSoundOverride")); }
    int& ItemDisplayDecimalsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.ItemDisplayDecimals"); }
    BrzCampoPonteiro ItemRemovedBySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ItemRemovedBySound")); }
    TArray<void*>& ItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemSets"); }
    BrzCampoPonteiro ItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.ItemSetsOverride")); }
    TArray<UPrimalItem*>& ItemSlotsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemSlots"); }
    TArray<void*>& ItemSpawnActorClassOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemSpawnActorClassOverrides"); }
    TArray<void*>& ItemSpoilingTimeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.ItemSpoilingTimeMultipliers"); }
    double& LastCraftRequestTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_StorageInterface.LastCraftRequestTime"); }
    double& LastInventoryRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_StorageInterface.LastInventoryRefreshTime"); }
    double& LastRefreshCheckItemTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_StorageInterface.LastRefreshCheckItemTime"); }
    double& LastUpdatedWirelessItemsTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_StorageInterface.LastUpdatedWirelessItemsTime"); }
    BrzCampoPonteiro LastWirelessCraftingCheckLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.LastWirelessCraftingCheckLoc")); }
    int& LinkedContainerCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.LinkedContainerCount"); }
    float& LinkedContainerItemQuantityUpdateTimerLengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.LinkedContainerItemQuantityUpdateTimerLength"); }
    BrzCampoPonteiro LinkedContainersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.LinkedContainers")); }
    BrzCampoPonteiro LinkedInventoriesPerItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.LinkedInventoriesPerItemClass")); }
    BrzCampoPonteiro LinkedToStorageInterfacesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.LinkedToStorageInterfaces")); }
    float& MaxInventoryAccessDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.MaxInventoryAccessDistance"); }
    int& MaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxInventoryItems"); }
    float& MaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.MaxInventoryWeight"); }
    float& MaxItemCooldownTimeClearField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.MaxItemCooldownTimeClear"); }
    int& MaxItemCraftQueueEntriesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxItemCraftQueueEntries"); }
    float& MaxItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.MaxItemSets"); }
    TArray<void*>& MaxItemTemplateQuantitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.MaxItemTemplateQuantities"); }
    int& MaxLinkedContainersField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxLinkedContainers"); }
    int& MaxNumberOfSortingInputsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxNumberOfSortingInputs"); }
    float& MaxRemoteInventoryViewingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.MaxRemoteInventoryViewingDistance"); }
    int& MaxThresholdSizeField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxThresholdSize"); }
    float& MinItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.MinItemSets"); }
    BrzCampoPonteiro MultiUseButtonStyleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.MultiUseButtonStyleOverrides")); }
    float& NumItemSetsPowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.NumItemSetsPower"); }
    int& NumSlotsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.NumSlots"); }
    int& NumUndroppableVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.NumUndroppableVanityItems"); }
    int& NumVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.NumVanityItems"); }
    BrzCampoPonteiro OnClientFinishedReceivingItemDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnClientFinishedReceivingItemData")); }
    BrzCampoPonteiro OnClientInventoryChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnClientInventoryChanged")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnComponentDeactivated")); }
    BrzCampoPonteiro OnInventoryHotbarItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnInventoryHotbarItemUsed")); }
    BrzCampoPonteiro OnInventoryItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnInventoryItemAdded")); }
    BrzCampoPonteiro OnInventoryItemCountQtyIncrementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnInventoryItemCountQtyIncrement")); }
    BrzCampoPonteiro OnInventoryItemFinishedRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnInventoryItemFinishedRepairing")); }
    BrzCampoPonteiro OnInventoryItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnInventoryItemRemoved")); }
    BrzCampoPonteiro OnInventoryItemStartedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnInventoryItemStartedCrafting")); }
    BrzCampoPonteiro OnItemsUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnItemsUpdated")); }
    BrzCampoPonteiro OnLocateItemRequestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnLocateItemRequested")); }
    BrzCampoPonteiro OnRemoveThresholdRequestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnRemoveThresholdRequested")); }
    BrzCampoPonteiro OnSetThresholdRequestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnSetThresholdRequested")); }
    BrzCampoPonteiro OnViewingItemClassChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnViewingItemClassChanged")); }
    BrzCampoPonteiro OnWirelessItemRangeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnWirelessItemRangeUpdated")); }
    BrzCampoPonteiro OnWithdrawAllItemsOfClassRequestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnWithdrawAllItemsOfClassRequested")); }
    BrzCampoPonteiro OnWithdrawFromDedicatedStorageRequestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnWithdrawFromDedicatedStorageRequested")); }
    BrzCampoPonteiro OnWithdrawItemsOfClassRequestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnWithdrawItemsOfClassRequested")); }
    BrzCampoPonteiro OnlyAllowCraftingItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OnlyAllowCraftingItemClasses")); }
    BrzCampoPonteiro OpenInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OpenInventorySound")); }
    BrzCampoPonteiro OverrideCraftingFinishedSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.OverrideCraftingFinishedSound")); }
    int& OverrideInventoryDefaultTabField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideInventoryDefaultTab"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalInventoryComponent_StorageInterface.PrimaryComponentTick"); }
    BrzCampoPonteiro RemoteAddItemOnlyAllowItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.RemoteAddItemOnlyAllowItemClasses")); }
    BrzCampoPonteiro RemoteAddItemPreventItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.RemoteAddItemPreventItemClasses")); }
    FString& RemoteInventoryDescriptionStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent_StorageInterface.RemoteInventoryDescriptionString"); }
    TArray<AShooterPlayerController*>& RemoteViewingInventoryPlayerControllersField() const
    { return *GetNativePointerField<TArray<AShooterPlayerController*>*>(this, "UPrimalInventoryComponent_StorageInterface.RemoteViewingInventoryPlayerControllers"); }
    int& SavedForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.SavedForceDefaultInventoryRefreshVersion"); }
    TArray<void*>& SetQuantityValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.SetQuantityValues"); }
    TArray<void*>& SetQuantityWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.SetQuantityWeights"); }
    int& SlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.SlotMaxMagicNumber"); }
    BrzCampoPonteiro SortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.SortingInputAmounts")); }
    BrzCampoPonteiro SortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.SortingInputs")); }
    int& StartingAbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.StartingAbsoluteMaxInventoryItems"); }
    FName& StorageInterfaceCustomItemDataNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalInventoryComponent_StorageInterface.StorageInterfaceCustomItemDataName"); }
    float& StructureCraftingItemSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.StructureCraftingItemSpeedModifier"); }
    BrzCampoPonteiro TamedDinoForceConsiderFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.TamedDinoForceConsiderFoodTypes")); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalInventoryComponent_StorageInterface.TribeGroupInventoryRank"); }
    TArray<void*>& TribeInventoryAccessRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.TribeInventoryAccessRankSelectionIcons"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.UCSSerializationIndex"); }
    TArray<void*>& WeaponAsEquipmentAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_StorageInterface.WeaponAsEquipmentAttachmentInfos"); }
    BrzCampoPonteiro WirelessExchangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.WirelessExchanges")); }
    BrzCampoPonteiro WirelessItemRangeIconsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItemRangeIcons")); }
    BrzCampoPonteiro WirelessItemRangeStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItemRangeStrings")); }
    BrzCampoPonteiro WirelessItemRangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItemRanges")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxLinkedContainers` +8, medido na build 25535041
    //  (offset absoluto medido: 0xA20; confianca alta)
    void*& WirelessItemUpdateTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "MaxLinkedContainers", 8); }
    BrzCampoPonteiro WirelessItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItems")); }
    BrzCampoPonteiro bAddMaxInventoryItemsToDefaultItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAddMaxInventoryItemsToDefaultItems")); }
    BrzCampoPonteiro bAllDefaultInventoryIsEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllDefaultInventoryIsEngrams")); }
    BrzCampoPonteiro bAllowAddingToArkTributeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowAddingToArkTribute")); }
    BrzCampoPonteiro bAllowDeactivatedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowDeactivatedCrafting")); }
    BrzCampoPonteiro bAllowItemColdStorageOnStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowItemColdStorageOnStasis")); }
    BrzCampoPonteiro bAllowItemStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowItemStacking")); }
    BrzCampoPonteiro bAllowRemoteCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowRemoteCrafting")); }
    BrzCampoPonteiro bAllowRemoteInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowRemoteInventory")); }
    BrzCampoPonteiro bAllowRemoteRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowRemoteRepairing")); }
    BrzCampoPonteiro bAllowWorldSettingsInventoryComponentAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAllowWorldSettingsInventoryComponentAppends")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bAutoActivate")); }
    BrzCampoPonteiro bBPAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPAllowUseInInventory")); }
    BrzCampoPonteiro bBPForceCustomRemoteInventoryAllowAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPForceCustomRemoteInventoryAllowAddItems")); }
    BrzCampoPonteiro bBPForceCustomRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPForceCustomRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bBPHandleAccessInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPHandleAccessInventory")); }
    BrzCampoPonteiro bBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPNotifyItemAdded")); }
    BrzCampoPonteiro bBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPNotifyItemRemoved")); }
    BrzCampoPonteiro bBPOverrideItemMinimumUseIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPOverrideItemMinimumUseInterval")); }
    BrzCampoPonteiro bBPRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bBPRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bCanEquipItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bCanEquipItems")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCanInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bCanInventoryItems")); }
    BrzCampoPonteiro bCanUseWeaponAsEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bCanUseWeaponAsEquipment")); }
    BrzCampoPonteiro bCheckForAutoCraftBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bCheckForAutoCraftBlueprints")); }
    BrzCampoPonteiro bColdStorageDeferInflateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bColdStorageDeferInflate")); }
    BrzCampoPonteiro bConsumeCraftingRepairingRequirementsOnStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bConsumeCraftingRepairingRequirementsOnStart")); }
    BrzCampoPonteiro bCraftingEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bCraftingEnabled")); }
    BrzCampoPonteiro bDataListPadMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bDataListPadMaxInventoryItems")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDeferCheckForAutoCraftBlueprintsOnInventoryChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bDeferCheckForAutoCraftBlueprintsOnInventoryChange")); }
    BrzCampoPonteiro bDisableDropAllItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bDisableDropAllItems")); }
    BrzCampoPonteiro bDisableTransferEquipmentOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bDisableTransferEquipmentOnTransferAll")); }
    BrzCampoPonteiro bDropPhysicalInventoryDepositField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bDropPhysicalInventoryDeposit")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEditableWhenInherited")); }
    BrzCampoPonteiro bEnableDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEnableDebug")); }
    BrzCampoPonteiro bEnableDediSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEnableDediSortingInputs")); }
    BrzCampoPonteiro bEnableSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEnableSorting")); }
    BrzCampoPonteiro bEnableSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEnableSortingInputs")); }
    BrzCampoPonteiro bEquipmentForceIgnoreExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEquipmentForceIgnoreExplicitOwnerClass")); }
    BrzCampoPonteiro bEquipmentMustRequireExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEquipmentMustRequireExplicitOwnerClass")); }
    BrzCampoPonteiro bEquipmentPlayerForceRequireExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bEquipmentPlayerForceRequireExplicitOwnerClass")); }
    BrzCampoPonteiro bForceAllowAllUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bForceAllowAllUseInInventory")); }
    bool& bForceAllowCustomFoldersField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent_StorageInterface.bForceAllowCustomFolders"); }
    BrzCampoPonteiro bForceGenerateItemSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bForceGenerateItemSets")); }
    BrzCampoPonteiro bForceInventoryBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bForceInventoryBlueprints")); }
    BrzCampoPonteiro bForceInventoryNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bForceInventoryNonRemovable")); }
    BrzCampoPonteiro bForceInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bForceInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bForcePreventDropInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bForcePreventDropInventory")); }
    BrzCampoPonteiro bFreeCraftingModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bFreeCraftingMode")); }
    BrzCampoPonteiro bGivesAchievementItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bGivesAchievementItems")); }
    BrzCampoPonteiro bGrinderCanGrindAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bGrinderCanGrindAll")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHideDefaultInventoryItemsFromDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bHideDefaultInventoryItemsFromDisplay")); }
    BrzCampoPonteiro bHideEnableSortingButtonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bHideEnableSortingButton")); }
    BrzCampoPonteiro bHideSaddleFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bHideSaddleFromInventoryDisplay")); }
    BrzCampoPonteiro bHideSlotCountFromHudField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bHideSlotCountFromHud")); }
    BrzCampoPonteiro bHideTributeUploadDinosPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bHideTributeUploadDinosPanel")); }
    BrzCampoPonteiro bIgnoreDLCEquipRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIgnoreDLCEquipRestrictions")); }
    BrzCampoPonteiro bIgnoreEngramEquipRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIgnoreEngramEquipRestrictions")); }
    BrzCampoPonteiro bIgnoreItemMaxDurabilityForItemRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIgnoreItemMaxDurabilityForItemRepair")); }
    BrzCampoPonteiro bIgnoreItemRequiresInventoryForItemRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIgnoreItemRequiresInventoryForItemRepair")); }
    BrzCampoPonteiro bIgnoreMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIgnoreMaxInventoryItems")); }
    BrzCampoPonteiro bIgnoreNextItemUseCDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIgnoreNextItemUseCD")); }
    BrzCampoPonteiro bInitializedMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bInitializedMe")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIsEditorOnly")); }
    BrzCampoPonteiro bIsSecondaryInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIsSecondaryInventory")); }
    BrzCampoPonteiro bIsTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIsTaxidermyBase")); }
    BrzCampoPonteiro bIsTributeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bIsTributeInventory")); }
    BrzCampoPonteiro bLastNotifyCraftingStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bLastNotifyCraftingState")); }
    BrzCampoPonteiro bMaxInventoryWeightUseCharacterStatusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bMaxInventoryWeightUseCharacterStatus")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bNetAddressable")); }
    BrzCampoPonteiro bNotNearWirelessCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bNotNearWirelessCrafting")); }
    BrzCampoPonteiro bNotifyAddedOnClientReceiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bNotifyAddedOnClientReceive")); }
    BrzCampoPonteiro bNotifyCraftingStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bNotifyCraftingStateChanged")); }
    BrzCampoPonteiro bNotifyWirelessTribeGroupInventoryRankChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bNotifyWirelessTribeGroupInventoryRankChanged")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOneCraftQueueItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bOnlyOneCraftQueueItem")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOverrideCraftingMinDurabilityRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bOverrideCraftingMinDurabilityRequirement")); }
    BrzCampoPonteiro bOverrideInventoryDepositClassDontForceDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bOverrideInventoryDepositClassDontForceDrop")); }
    BrzCampoPonteiro bPreventAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventAutoDecreaseDurability")); }
    BrzCampoPonteiro bPreventCraftingResourceConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventCraftingResourceConsumption")); }
    BrzCampoPonteiro bPreventDropInventoryDepositField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventDropInventoryDeposit")); }
    BrzCampoPonteiro bPreventInventoryViewTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventInventoryViewTrace")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bPreventSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bPreventSortingInputs")); }
    BrzCampoPonteiro bReceivingArkInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bReceivingArkInventoryItems")); }
    BrzCampoPonteiro bReceivingEquippedItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bReceivingEquippedItems")); }
    BrzCampoPonteiro bReceivingInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bReceivingInventoryItems")); }
    BrzCampoPonteiro bRemoteInventoryAllowAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bRemoteInventoryAllowAddItems")); }
    BrzCampoPonteiro bRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bRemoteInventoryOnlyAllowSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bRemoteInventoryOnlyAllowSelf")); }
    BrzCampoPonteiro bRemoteInventoryOnlyAllowTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bRemoteInventoryOnlyAllowTribe")); }
    BrzCampoPonteiro bRemoteOnlyAllowBlueprintsOrItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bRemoteOnlyAllowBlueprintsOrItemClasses")); }
    BrzCampoPonteiro bRepairingEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bRepairingEnabled")); }
    BrzCampoPonteiro bReplicateComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bReplicateComponent")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bReplicates")); }
    BrzCampoPonteiro bSetCraftingEnabledCheckForAutoCraftBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bSetCraftingEnabledCheckForAutoCraftBlueprints")); }
    BrzCampoPonteiro bSetsRandomWithoutReplacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bSetsRandomWithoutReplacement")); }
    BrzCampoPonteiro bShowHiddenDefaultInventoryItemsDuringCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bShowHiddenDefaultInventoryItemsDuringCrafting")); }
    BrzCampoPonteiro bShowHiddenRemoteInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bShowHiddenRemoteInventoryItems")); }
    BrzCampoPonteiro bShowItemDefaultFoldersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bShowItemDefaultFolders")); }
    BrzCampoPonteiro bShowQuickSlotPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bShowQuickSlotPanel")); }
    BrzCampoPonteiro bSpawnActorOnTopOfStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bSpawnActorOnTopOfStructure")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bStasisPreventUnregister")); }
    BrzCampoPonteiro bTriggerHotbarItemUsedEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bTriggerHotbarItemUsedEvent")); }
    BrzCampoPonteiro bUseBPAllowAddInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPAllowAddInventoryItem")); }
    BrzCampoPonteiro bUseBPAllowRepairingItemInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPAllowRepairingItemInInventory")); }
    BrzCampoPonteiro bUseBPCanGrindItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPCanGrindItems")); }
    BrzCampoPonteiro bUseBPGetExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPGetExtraItemDisplay")); }
    BrzCampoPonteiro bUseBPGetExtraItemRepairResourceRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPGetExtraItemRepairResourceRequirements")); }
    BrzCampoPonteiro bUseBPInitializeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPInitializeInventory")); }
    BrzCampoPonteiro bUseBPInventoryRefreshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPInventoryRefresh")); }
    BrzCampoPonteiro bUseBPIsCraftingAllowedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPIsCraftingAllowed")); }
    BrzCampoPonteiro bUseBPIsValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPIsValidCraftingResource")); }
    BrzCampoPonteiro bUseBPModifyCustomAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPModifyCustomAutoDecreaseDurability")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseBPOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPOnTransferAll")); }
    BrzCampoPonteiro bUseBPOverrideDropItemTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPOverrideDropItemTransform")); }
    BrzCampoPonteiro bUseBPRemoteInventoryAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPRemoteInventoryAllowCrafting")); }
    BrzCampoPonteiro bUseBPRemoteInventoryAllowViewingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPRemoteInventoryAllowViewing")); }
    BrzCampoPonteiro bUseBPRemoteInventoryGetMaxVisibleSlotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPRemoteInventoryGetMaxVisibleSlots")); }
    BrzCampoPonteiro bUseBPUseCraftQueueForItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseBPUseCraftQueueForItem")); }
    BrzCampoPonteiro bUseCheatInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseCheatInventory")); }
    BrzCampoPonteiro bUseCraftQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseCraftQueue")); }
    BrzCampoPonteiro bUseCustomSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseCustomSorting")); }
    BrzCampoPonteiro bUseExtendedCharacterCraftingFunctionalityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseExtendedCharacterCraftingFunctionality")); }
    BrzCampoPonteiro bUseInventoryBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseInventoryBPDrawItemIcon")); }
    BrzCampoPonteiro bUseItemCountInsteadOfInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseItemCountInsteadOfInventory")); }
    BrzCampoPonteiro bUseItemQuantityUpdateEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseItemQuantityUpdateEvents")); }
    BrzCampoPonteiro bUseParentStructureIsValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseParentStructureIsValidCraftingResource")); }
    BrzCampoPonteiro bUseSortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_StorageInterface.bUseSortingInputAmounts")); }
    BitFieldValue<bool, unsigned __int32> bEnableDebug()
    { return { (void*)this, "bEnableDebug" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STORAGEINTERFACE_H
