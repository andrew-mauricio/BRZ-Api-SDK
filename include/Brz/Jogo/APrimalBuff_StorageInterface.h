// ==========================================================================
//  APrimalBuff_StorageInterface — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_STORAGEINTERFACE_H
#define BRZ_SDK_JOGO_APRIMALBUFF_STORAGEINTERFACE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct AShooterPlayerController;
struct FActorTickFunction;
struct FName;
struct FVector2D;
struct UAudioComponent;
struct UInputComponent;
struct UMaterialInterface;
struct UPrimalBuffPersistentData;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;


struct APrimalBuff_StorageInterface
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_StorageInterface"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.CanPlayerAccessLinkedContainer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerAccessLinkedContainer() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.CanPlayerAccessLinkedContainer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClearPOIs(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearPOIs(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_StorageInterface.ClearPOIs(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalBuff_StorageInterface.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientReceiveContainersForItem(TArray<APrimalStructureItemContainer
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveContainersForItem(void* a0, void* a1, void* a2, unsigned long long a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, unsigned long long, bool>(this, "APrimalBuff_StorageInterface.ClientReceiveContainersForItem(TArray<APrimalStructureItemContainer*,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TSubclassOf<UPrimalItem>,FItemNetID,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientReceiveContainersForItem_Implementation(TArray<APrimalStructu
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveContainersForItem_Implementation(void* a0, void* a1, void* a2, unsigned long long a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, unsigned long long, bool>(this, "APrimalBuff_StorageInterface.ClientReceiveContainersForItem_Implementation(TArray<APrimalStructureItemContainer*,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TSubclassOf<UPrimalItem>,FItemNetID,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientReceiveItemData(TArray<FStorageInterfaceItemData,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveItemData(void* a0, bool a1, void* a2) const
    {
        return NativeCall<void*, void*, bool, void*>(this, "APrimalBuff_StorageInterface.ClientReceiveItemData(TArray<FStorageInterfaceItemData,TSizedDefaultAllocator<32>>&,bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientReceiveItemData_Implementation(TArray<FStorageInterfaceItemDa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientReceiveItemData_Implementation(void* a0, bool a1, void* a2) const
    {
        return NativeCall<void*, void*, bool, void*>(this, "APrimalBuff_StorageInterface.ClientReceiveItemData_Implementation(TArray<FStorageInterfaceItemData,TSizedDefaultAllocator<32>>&,bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestItemsForClass(TSubclassOf<UPrimalItem>,AShooterPlayerC
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=2]]
    BrzPonteiro ClientRequestItemsForClass(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_StorageInterface.ClientRequestItemsForClass(TSubclassOf<UPrimalItem>,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestItemsForClass_Implementation(TSubclassOf<UPrimalItem>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestItemsForClass_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_StorageInterface.ClientRequestItemsForClass_Implementation(TSubclassOf<UPrimalItem>,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestLocateItem(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestLocateItem(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuff_StorageInterface.ClientRequestLocateItem(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestLocateItemClass(TSubclassOf<UPrimalItem>,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=112+chamadores=3]]
    BrzPonteiro ClientRequestLocateItemClass(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_StorageInterface.ClientRequestLocateItemClass(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestLocateItemClass_Implementation(TSubclassOf<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestLocateItemClass_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_StorageInterface.ClientRequestLocateItemClass_Implementation(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestLocateItem_Implementation(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestLocateItem_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuff_StorageInterface.ClientRequestLocateItem_Implementation(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestRemoveThreshold_Implementation(TSubclassOf<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestRemoveThreshold_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.ClientRequestRemoveThreshold_Implementation(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestReplicateItemData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestReplicateItemData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.ClientRequestReplicateItemData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestReplicateItemData_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestReplicateItemData_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.ClientRequestReplicateItemData_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestSetThreshold_Implementation(TSubclassOf<UPrimalItem>,i
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestSetThreshold_Implementation(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_StorageInterface.ClientRequestSetThreshold_Implementation(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestWithdrawAllItemsOfClass_Implementation(TSubclassOf<UPr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestWithdrawAllItemsOfClass_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.ClientRequestWithdrawAllItemsOfClass_Implementation(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestWithdrawDedicatedStorageItems_Implementation(TSubclass
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestWithdrawDedicatedStorageItems_Implementation(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_StorageInterface.ClientRequestWithdrawDedicatedStorageItems_Implementation(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestWithdrawItemsOfClass(TSubclassOf<UPrimalItem>,int,bool
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestWithdrawItemsOfClass(void* a0, int a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, int, bool, bool>(this, "APrimalBuff_StorageInterface.ClientRequestWithdrawItemsOfClass(TSubclassOf<UPrimalItem>,int,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestWithdrawItemsOfClass_Implementation(TSubclassOf<UPrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientRequestWithdrawItemsOfClass_Implementation(void* a0, int a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, int, bool, bool>(this, "APrimalBuff_StorageInterface.ClientRequestWithdrawItemsOfClass_Implementation(TSubclassOf<UPrimalItem>,int,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.FinishedReplicatingItems(TArray<TSubclassOf<UPrimalItem>,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishedReplicatingItems(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.FinishedReplicatingItems(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.GenerateItems(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GenerateItems(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.GenerateItems(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.GetBuffPOIs(TArray<FPointOfInterestData_ForCompanion,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBuffPOIs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.GetBuffPOIs(TArray<FPointOfInterestData_ForCompanion,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalBuff_StorageInterface.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.GetPOINameForItemClass(TSubclassOf<UPrimalItem>,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPOINameForItemClass(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_StorageInterface.GetPOINameForItemClass(TSubclassOf<UPrimalItem>,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetPOINameForItemClass(void* a0, FString* a1) const
    { return GetPOINameForItemClass(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.GetPOITagValue(APrimalStructureItemContainer*,TSubclassOf<UPrimalIt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPOITagValue(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void**>(this, "APrimalBuff_StorageInterface.GetPOITagValue(APrimalStructureItemContainer*,TSubclassOf<UPrimalItem>&)", a0, &a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.GetShooterController()
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerController* GetShooterController() const
    {
        return NativeCall<AShooterPlayerController*>(this, "APrimalBuff_StorageInterface.GetShooterController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.InputDismissPOI(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InputDismissPOI(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_StorageInterface.InputDismissPOI(APlayerController*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.InventoryUIClosed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InventoryUIClosed() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.InventoryUIClosed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.LinkedContainerInventoryItemsUpdated(TSet<TSubclassOf<UPrimalItem>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LinkedContainerInventoryItemsUpdated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.LinkedContainerInventoryItemsUpdated(TSet<TSubclassOf<UPrimalItem>,DefaultKeyFuncs<TSubclassOf<UPrimalItem>,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.LinkedContainerViewingItemInstancesClassUpdated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LinkedContainerViewingItemInstancesClassUpdated() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.LinkedContainerViewingItemInstancesClassUpdated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.LocateItemRequested(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocateItemRequested(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.LocateItemRequested(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.OnInventoryChanged()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInventoryChanged() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.OnInventoryChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.OnRep_LinkedContainer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_LinkedContainer() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.OnRep_LinkedContainer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.RemoveThresholdRequested(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveThresholdRequested(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.RemoveThresholdRequested(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.RequestLocateItemsUpdate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestLocateItemsUpdate() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.RequestLocateItemsUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetLinkedContainer(APrimalStructureItemContainer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLinkedContainer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.SetLinkedContainer(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetPOIHidden(int,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetPOIHidden(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "APrimalBuff_StorageInterface.SetPOIHidden(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetPOIsHidden(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetPOIsHidden(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_StorageInterface.SetPOIsHidden(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetThresholdRequested(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetThresholdRequested(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_StorageInterface.SetThresholdRequested(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetupForInstigator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupForInstigator() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.SetupForInstigator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.WithdrawAllItemsOfClassRequested(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WithdrawAllItemsOfClassRequested(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.WithdrawAllItemsOfClassRequested(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.WithdrawFromDedicatedStorageRequested(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WithdrawFromDedicatedStorageRequested(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_StorageInterface.WithdrawFromDedicatedStorageRequested(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.WithdrawItemsOfClassRequested(TSubclassOf<UPrimalItem>,int,bool,boo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WithdrawItemsOfClassRequested(void* a0, int a1, bool a2, bool a3, bool a4, bool a5) const
    {
        return NativeCall<void*, void*, int, bool, bool, bool, bool>(this, "APrimalBuff_StorageInterface.WithdrawItemsOfClassRequested(TSubclassOf<UPrimalItem>,int,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    float& AOEBuffIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.AOEBuffIntervalMax"); }
    float& AOEBuffIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.AOEBuffIntervalMin"); }
    float& AOEBuffRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.AOEBuffRange"); }
    BrzCampoPonteiro AOEOtherBuffToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.AOEOtherBuffToApply")); }
    float& ActivateSoundFadeInDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ActivateSoundFadeInDuration"); }
    TArray<void*>& ActivePreventsBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.ActivePreventsBuffClasses"); }
    BrzCampoPonteiro ActivePreventsBuffClassesExceptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ActivePreventsBuffClassesExceptions")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_StorageInterface.ActorUsingQuickAction"); }
    int& AddBuffMaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.AddBuffMaxNumStacks"); }
    float& AdditionalRidingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.AdditionalRidingDistance"); }
    int& AltNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.AltNumStacks"); }
    float& AoEApplyDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.AoEApplyDamageInterval"); }
    BrzCampoPonteiro AoEApplyDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.AoEApplyDamageType")); }
    BrzCampoPonteiro AoEBuffLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.AoEBuffLocOffset")); }
    TArray<void*>& AoEClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.AoEClassesToExclude"); }
    TArray<void*>& AoEClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.AoEClassesToInclude"); }
    BrzCampoPonteiro AoETraceToTargetsStartOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.AoETraceToTargetsStartOffset")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_StorageInterface.AutoReceiveInput"); }
    TArray<void*>& BPNotifyActivationToOtherBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.BPNotifyActivationToOtherBuffClasses"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.BlueprintCreatedComponents"); }
    TArray<void*>& BuffClassesToCancelOnActivationField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.BuffClassesToCancelOnActivation"); }
    TWeakObjectPtr<void>& BuffDamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_StorageInterface.BuffDamageCauser"); }
    BrzCampoPonteiro BuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.BuffDescription")); }
    BrzCampoPonteiro BuffPersistentDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.BuffPersistentDataClass")); }
    BrzCampoPonteiro BuffPostProcessEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.BuffPostProcessEffect")); }
    TArray<void*>& BuffPreventsOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.BuffPreventsOwnerClass"); }
    TArray<void*>& BuffRequiresOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.BuffRequiresOwnerClass"); }
    double& BuffStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.BuffStartTime"); }
    float& BuffTickClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.BuffTickRemoteClientMinTime"); }
    float& BuffTickServerMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.BuffTickServerMinTime"); }
    BrzCampoPonteiro BuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.BuffToGiveOnDeactivation")); }
    BrzCampoPonteiro CameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.CameraShake")); }
    float& CameraShakeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CameraShakeFalloff"); }
    float& CameraShakeInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CameraShakeInnerRadius"); }
    float& CameraShakeOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CameraShakeOuterRadius"); }
    float& CameraShakeScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CameraShakeScaleMultiplier"); }
    float& CharacterAOEBuffDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterAOEBuffResistance"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    TArray<void*>& CharacterStatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.CharacterStatusValueModifiers"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ColorParameter")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.CreationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +80, medido na build 25535041
    //  (offset absoluto medido: 0xCE0; confianca media)
    void*& CurrentItemLocatorPOIsField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 80); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_StorageInterface.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.CustomTimeDilation"); }
    float& DeactivateAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.DeactivateAfterTime"); }
    float& DeactivateSoundFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.DeactivateSoundFadeOutDuration"); }
    USoundBase*& DeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_StorageInterface.DeactivatedSound"); }
    float& DeactivationLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.DeactivationLifespan"); }
    BrzCampoPonteiro DecalToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.DecalToSpawn")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DepleteInstigatorItemDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.DepleteInstigatorItemDurabilityPerSecond"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_StorageInterface.DesiredRepGraphBehavior"); }
    float& DinoColorizationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.DinoColorizationInterpSpeed"); }
    int& DinoColorizationPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.DinoColorizationPriority"); }
    TArray<void*>& DisabledWeaponTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.DisabledWeaponTags"); }
    BrzCampoPonteiro EmitterNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.EmitterNiagaraComponent")); }
    float& ExtendBuffTimeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ExtendBuffTimeOverride"); }
    USoundBase*& ExtraActivationSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_StorageInterface.ExtraActivationSoundToPlay"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.ForceMaximumReplicationRateUntilTime"); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ForceNetworkSpatializationBuffMaxLimitRange"); }
    BrzCampoPonteiro ForceNetworkSpatializationMaxLimitBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ForceNetworkSpatializationMaxLimitBuffType")); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    float& FrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.FrictionModifier"); }
    float& HarvestQuantityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.HarvestQuantityMultiplier"); }
    BrzCampoPonteiro HideTrackersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.HideTrackersIcon")); }
    BrzCampoPonteiro HitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.HitLocation")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.HypoThermiaInsulation"); }
    BrzCampoPonteiro ImpulseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ImpulseData")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalBuff_StorageInterface.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalBuff_StorageInterface.Instigator"); }
    FName& InstigatorAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_StorageInterface.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_StorageInterface.InstigatorAttachmentSocket_PlayerOverride"); }
    TWeakObjectPtr<void>& InstigatorItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_StorageInterface.InstigatorItem"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.InsulationRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastExitStasisTime"); }
    double& LastItemDurabilityDepletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastItemDurabilityDepletionTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +120, medido na build 25535041
    //  (offset absoluto medido: 0xD08; confianca media)
    void*& LastLocateItemRequestedTimeField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +104, medido na build 25535041
    //  (offset absoluto medido: 0xCF8; confianca media)
    void*& LastLocatedItemClassField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +96, medido na build 25535041
    //  (offset absoluto medido: 0xCF0; confianca media)
    void*& LastLocatedItemIDField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 96); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_StorageInterface.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_StorageInterface.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastThrottledTickTime"); }
    double& LastTimeAddedStackField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastTimeAddedStack"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.Layers"); }
    BrzCampoPonteiro LinkedContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.LinkedContainer")); }
    BrzCampoPonteiro LinkedContainerInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.LinkedContainerInventory")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +128, medido na build 25535041
    //  (offset absoluto medido: 0xD10; confianca media)
    void*& LocateItemsUpdateTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 128); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.MPCAdjusters")); }
    int& MaxConcurrentActivatedVfxField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.MaxConcurrentActivatedVfx"); }
    int& MaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.MaxNumStacks"); }
    TArray<void*>& MaxStatScalersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.MaxStatScalers"); }
    float& Maximum2DVelocityForStaminaRecoveryField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.Maximum2DVelocityForStaminaRecovery"); }
    float& MaximumVelocityZForSlowingFallField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.MaximumVelocityZForSlowingFall"); }
    float& MeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.MeleeDamageMultiplier"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.MinNetUpdateFrequency"); }
    float& MinTimeBetweenStacksField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.MinTimeBetweenStacks"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() const
    { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff_StorageInterface.MyBuffPersistentData"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_StorageInterface.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_StorageInterface.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_StorageInterface.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.NiagaraComponent")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnMatineeUpdated")); }
    BrzCampoPonteiro OnParticleBurstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnParticleBurst")); }
    BrzCampoPonteiro OnParticleCollideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnParticleCollide")); }
    BrzCampoPonteiro OnParticleDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnParticleDeath")); }
    BrzCampoPonteiro OnParticleSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnParticleSpawn")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.OnTargetingTeamChanged")); }
    float& OnlyForInstigatorSoundFadeInTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.OnlyForInstigatorSoundFadeInTime"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.OriginalCreationTime"); }
    TArray<void*>& OverrideInventoryItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.OverrideInventoryItemClassWeightMultipliers"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_StorageInterface.Owner"); }
    BrzCampoPonteiro POIItemNameOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.POIItemNameOverrides")); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_StorageInterface.ParentComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedWirelessItems` +80, medido na build 25535041
    //  (offset absoluto medido: 0xC40; confianca media)
    void*& PartialItemClassesToUpdateField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedWirelessItems", 80); }
    BrzCampoPonteiro ParticleSystemComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ParticleSystemComponent")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.PhysicsReplicationMode")); }
    float& PostProcessInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.PostProcessInterpSpeedUp"); }
    TArray<UMaterialInterface*>& PostprocessBlendablesToExcludeField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff_StorageInterface.PostprocessBlendablesToExclude"); }
    TArray<void*>& PostprocessMaterialAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.PostprocessMaterialAdjusters"); }
    TArray<void*>& PreventActorClassesTargetingField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.PreventActorClassesTargeting"); }
    TArray<void*>& PreventActorClassesTargetingRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.PreventActorClassesTargetingRanges"); }
    float& PreventIfMovementMassGreaterThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.PreventIfMovementMassGreaterThan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalBuff_StorageInterface.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.RayTracingGroupId"); }
    float& ReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ReceiveDamageMultiplier"); }
    float& ReflectMeleeDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ReflectMeleeDamagePercent"); }
    AMissionType*& RelatedMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_StorageInterface.RelatedMission"); }
    float& RemoteForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.RemoteForcedFleeDuration"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_StorageInterface.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedWirelessItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ReplicatedWirelessItems")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_StorageInterface.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalBuff_StorageInterface.RootComponent"); }
    BrzCampoPonteiro RootTransformCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.RootTransformComp")); }
    float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
    float& ShallowEmitterOverrideSecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ShallowEmitterOverrideSecondsBeforeInactive"); }
    float& ShallowEmitterSpawnableMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ShallowEmitterSpawnableMaxDistance"); }
    BrzCampoPonteiro ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    BrzCampoPonteiro ShowTrackersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.ShowTrackersIcon")); }
    float& SkillActivationCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.SkillActivationCost"); }
    unsigned char& SkillActivationStatusCostTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_StorageInterface.SkillActivationStatusCostType"); }
    float& SlowInstigatorFallingAddZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.SlowInstigatorFallingDampenZVelocity"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_StorageInterface.SoundToPlay"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnedForActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.SpawnedForActor")); }
    float& StackDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.StackDuration"); }
    float& StackingUpdatedBuffLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.StackingUpdatedBuffLifetime"); }
    float& StaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.StaminaDrainMultiplier"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalBuff_StorageInterface.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalBuff_StorageInterface.StasisUnRegisteredComponents"); }
    BrzCampoPonteiro StopTrackingIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.StopTrackingIcon")); }
    float& SubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.SubmergedMaxAccelerationModifier"); }
    float& SubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.SubmergedMaxSpeedModifier"); }
    float& SubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.SubmergedRotationRateModifier"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.TPVCameraOffsetMultiplier")); }
    float& TPVCameraSpeedInterpolationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.TPVCameraSpeedInterpolationMultiplier"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_StorageInterface.Tags"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_StorageInterface.Target"); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_StorageInterface.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_StorageInterface.TargetingInfoTooltipScale"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.TargetingTooltipCheckRange"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.UnstasisLastInRangeTime"); }
    float& UnsubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.UnsubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.UnsubmergedMaxSpeedModifier"); }
    float& UnsubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.UnsubmergedRotationRateModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_StorageInterface.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPAdjustOutputDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.UseBPAdjustOutputDamage")); }
    BrzCampoPonteiro UseBPAdjustOutputDamageForNonMeleePlayerDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.UseBPAdjustOutputDamageForNonMeleePlayerDamage")); }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_StorageInterface.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ViewMinExposureMultiplier"); }
    float& WarmupSecondsPerFrameCapField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.WarmupSecondsPerFrameCap"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.XPtoAddRate"); }
    BrzCampoPonteiro bAOEApplyOtherBuffIgnoreSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAOEApplyOtherBuffIgnoreSameTeam")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAOEApplyOtherBuffOnDinos")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAOEApplyOtherBuffOnPlayers")); }
    BrzCampoPonteiro bAOEApplyOtherBuffRequireSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAOEApplyOtherBuffRequireSameTeam")); }
    BrzCampoPonteiro bAOEBuffCarnosOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAOEBuffCarnosOnly")); }
    BrzCampoPonteiro bAOEOnlyApplyOtherBuffToWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAOEOnlyApplyOtherBuffToWildDinos")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAddCharacterValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAddCharacterValues")); }
    BrzCampoPonteiro bAddExtendBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAddExtendBuffTime")); }
    BrzCampoPonteiro bAddReactivatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAddReactivates")); }
    BrzCampoPonteiro bAddRequireSameDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAddRequireSameDamageCauser")); }
    BrzCampoPonteiro bAddResetsBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAddResetsBuffTime")); }
    BrzCampoPonteiro bAddStackResetsBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAddStackResetsBuffStart")); }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bAddTPVCameraOffset"); }
    BrzCampoPonteiro bAdditionalExperienceMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAdditionalExperienceMultiplier")); }
    BrzCampoPonteiro bAdditionalTamingSpeedMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAdditionalTamingSpeedMultiplier")); }
    BrzCampoPonteiro bAllowBuffStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowBuffStasis")); }
    BrzCampoPonteiro bAllowBuffWhenInstigatorDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowBuffWhenInstigatorDead")); }
    BrzCampoPonteiro bAllowLoopingEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowLoopingEmitter")); }
    BrzCampoPonteiro bAllowMultiUseEntriesFromSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowMultiUseEntriesFromSelf")); }
    BrzCampoPonteiro bAllowOnlyCustomFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowOnlyCustomFallDamage")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTurretsToTargetInstigatorIfTraceHitsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAllowTurretsToTargetInstigatorIfTraceHitsBuff")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysShowBuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAlwaysShowBuffDescription")); }
    BrzCampoPonteiro bAoEApplyDamageAllTargetablesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAoEApplyDamageAllTargetables")); }
    BrzCampoPonteiro bAoEBuffAllowIfAlreadyBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAoEBuffAllowIfAlreadyBuffed")); }
    BrzCampoPonteiro bAoEIgnoreDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAoEIgnoreDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoEOnlyOnDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAoEOnlyOnDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoETraceToTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAoETraceToTargets")); }
    BrzCampoPonteiro bApplyOneMaxSpeedModifierPerStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bApplyOneMaxSpeedModifierPerStack")); }
    BrzCampoPonteiro bApplyStatModifierToDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bApplyStatModifierToDinos")); }
    BrzCampoPonteiro bApplyStatModifierToPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bApplyStatModifierToPlayers")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bAutoStasis")); }
    BrzCampoPonteiro bBPAddMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPAddMultiUseEntries")); }
    BrzCampoPonteiro bBPAdjustStatusValueModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPAdjustStatusValueModification")); }
    BrzCampoPonteiro bBPDrawBuffStatusHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPDrawBuffStatusHUD")); }
    BrzCampoPonteiro bBPFilterMultiUseFilterTargetEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPFilterMultiUseFilterTargetEntries")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyCharacterFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPModifyCharacterFOV")); }
    BrzCampoPonteiro bBPOverrideActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPOverrideActorForTargetingTooltip")); }
    BrzCampoPonteiro bBPOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterWalkVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPOverrideCharacterWalkVelocity")); }
    BrzCampoPonteiro bBPOverrideWeaponBobField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPOverrideWeaponBob")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseBumpedByPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPUseBumpedByPawn")); }
    BrzCampoPonteiro bBPUseBumpedPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBPUseBumpedPawn")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffDrawFloatingHUD")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDRemotePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffDrawFloatingHUDRemotePlayers")); }
    BrzCampoPonteiro bBuffForceNoTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffForceNoTick")); }
    BrzCampoPonteiro bBuffForceNoTickDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffForceNoTickDedicated")); }
    BrzCampoPonteiro bBuffHandleInstigatorMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffHandleInstigatorMultiUseEntries")); }
    BrzCampoPonteiro bBuffHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffHidesNonWeaponHUD")); }
    BrzCampoPonteiro bBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bBuffPreventsApplyingLevelUpsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreventsApplyingLevelUps")); }
    BrzCampoPonteiro bBuffPreventsCryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreventsCryo")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreventsInventoryAccess")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessAllowMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreventsInventoryAccessAllowMissions")); }
    BrzCampoPonteiro bBuffPreventsMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreventsMountedWeaponry")); }
    BrzCampoPonteiro bBuffPreventsPlayerDropAllInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bBuffPreventsPlayerDropAllInventory")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCallRiderNotifiesOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCallRiderNotifiesOnClient")); }
    BrzCampoPonteiro bCameraShakeOrientTowardsEpicenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCameraShakeOrientTowardsEpicenter")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCanBeInCluster")); }
    BrzCampoPonteiro bCausesCryoSicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCausesCryoSickness")); }
    BrzCampoPonteiro bCheckPreventInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCheckPreventInput")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCollideWhenPlacing")); }
    BrzCampoPonteiro bCompleteCustomDepthStencilOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCompleteCustomDepthStencilOverride")); }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bContinueTickingClientAfterDeactivate"); }
    BrzCampoPonteiro bContinueTickingServerAfterDeactivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bContinueTickingServerAfterDeactivate")); }
    BrzCampoPonteiro bCurrentlyActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCurrentlyActive")); }
    BrzCampoPonteiro bCustomDepthStencilIgnoreHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bCustomDepthStencilIgnoreHealth")); }
    BrzCampoPonteiro bDeactivateAfterAddingXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDeactivateAfterAddingXP")); }
    BrzCampoPonteiro bDeactivateOnJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDeactivateOnJump")); }
    BrzCampoPonteiro bDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDeactivated")); }
    BrzCampoPonteiro bDeactivatedSoundOnlyLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDeactivatedSoundOnlyLocal")); }
    BrzCampoPonteiro bDediServerUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDediServerUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bDelayedDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDelayedDeactivation")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDestroyOnSystemFinish")); }
    BrzCampoPonteiro bDestroyOnTargetStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDestroyOnTargetStasis")); }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bDestroyWhenUnpossessed"); }
    BrzCampoPonteiro bDinoIgnoreBuffPostprocessEffectWhenRiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDinoIgnoreBuffPostprocessEffectWhenRidden")); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bDisableBloom"); }
    BrzCampoPonteiro bDisableFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDisableFaceRotation")); }
    BrzCampoPonteiro bDisableFootstepsParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDisableFootstepsParticles")); }
    BrzCampoPonteiro bDisableIfCharacterUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDisableIfCharacterUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisplayHUDProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDisplayHUDProgressBar")); }
    BrzCampoPonteiro bDoCharacterDetachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDoCharacterDetachment")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeCarryingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDoCharacterDetachmentIncludeCarrying")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDoCharacterDetachmentIncludeRiding")); }
    BrzCampoPonteiro bDontPlayInstigatorActiveSoundOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bDontPlayInstigatorActiveSoundOnDino")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableBuffStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnableBuffStacking")); }
    BrzCampoPonteiro bEnableDistanceBasedVfxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnableDistanceBasedVfx")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableStaticPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnableStaticPathing")); }
    BrzCampoPonteiro bEnableTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnableTargetingTooltip")); }
    BrzCampoPonteiro bEnablesSpyglassEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bEnablesSpyglassEffect")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bFollowTarget")); }
    BrzCampoPonteiro bForceAddUnderwaterCharacterStatusValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceAddUnderwaterCharacterStatusValues")); }
    BrzCampoPonteiro bForceAllowAddingWithoutControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceAllowAddingWithoutController")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowWhileBuriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceAllowWhileBuried")); }
    BrzCampoPonteiro bForceAlwaysAllowBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceAlwaysAllowBuff")); }
    BrzCampoPonteiro bForceCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceCrosshair")); }
    BrzCampoPonteiro bForceDrawMissionDinoTargetHealthbarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceDrawMissionDinoTargetHealthbars")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceHideFloatingName")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceInstigatorTick")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceNoRotation")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceOnDediServer")); }
    BrzCampoPonteiro bForceOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceOverrideCharacterWalkingVelocity")); }
    BrzCampoPonteiro bForcePlayerProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForcePlayerProne")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSelfTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceSelfTick")); }
    BrzCampoPonteiro bForceShowFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceShowFloatingName")); }
    BrzCampoPonteiro bForceUsePreventTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceUsePreventTargeting")); }
    BrzCampoPonteiro bForceUsePreventTargetingTurretField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceUsePreventTargetingTurret")); }
    BrzCampoPonteiro bForceUseStackCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForceUseStackCount")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bForcedOnSpectatorPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bForcedOnSpectatorPlayerController")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGetInstigatorChatMessagesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bGetInstigatorChatMessages")); }
    BrzCampoPonteiro bHUDFormatTimerAsTimecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHUDFormatTimerAsTimecode")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpulseDataAvailableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHasImpulseDataAvailable")); }
    BrzCampoPonteiro bHasRelatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHasRelatedMission")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHidden")); }
    BrzCampoPonteiro bHideBuffFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHideBuffFromHUD")); }
    BrzCampoPonteiro bHideBuffFromHUDOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHideBuffFromHUDOnly")); }
    BrzCampoPonteiro bHideFootStepDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHideFootStepDecals")); }
    BrzCampoPonteiro bHideTimerFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHideTimerFromHUD")); }
    BrzCampoPonteiro bHighPrioritySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bHighPrioritySound")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImmobilizeTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bImmobilizeTarget")); }
    BrzCampoPonteiro bImmobilizeTargetPreventDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bImmobilizeTargetPreventDismount")); }
    BrzCampoPonteiro bInterceptInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bInterceptInputEvents")); }
    BrzCampoPonteiro bInterceptUseActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bInterceptUseAction")); }
    BrzCampoPonteiro bInterceptWeaponToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bInterceptWeaponToggle")); }
    BrzCampoPonteiro bIsBuffPersistentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsBuffPersistent")); }
    BrzCampoPonteiro bIsCarryBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsCarryBuff")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDiseaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsDisease")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsFromSkillField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsFromSkill")); }
    BrzCampoPonteiro bIsHighRiskMissionBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsHighRiskMissionBuff")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsMapActor")); }
    BrzCampoPonteiro bIsSkillBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsSkillBuff")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bIsValidUnstasisCaster")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +112, medido na build 25535041
    //  (offset absoluto medido: 0xD00; confianca media)
    void*& bLastLocatedItemClassWasDediOnlyField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 112); }
    BrzCampoPonteiro bListenForInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bListenForInput")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bModifyFrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bModifyFriction")); }
    BrzCampoPonteiro bModifyMaxAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bModifyMaxAcceleration")); }
    BrzCampoPonteiro bModifyMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bModifyMaxSpeed")); }
    BrzCampoPonteiro bModifyRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bModifyRotationRate")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetResetBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetResetBuffStart")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNotifyDamage")); }
    BrzCampoPonteiro bNotifyExperienceGainedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNotifyExperienceGained")); }
    BrzCampoPonteiro bNotifyExperienceGained_AllowCountingAlphaKillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNotifyExperienceGained_AllowCountingAlphaKills")); }
    BrzCampoPonteiro bNotifyExperienceGained_IncludeSmallAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bNotifyExperienceGained_IncludeSmallAmounts")); }
    BrzCampoPonteiro bOnlyActivateSoundForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyActivateSoundForInstigator")); }
    BrzCampoPonteiro bOnlyAddCharacterValuesUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyAddCharacterValuesUnderwater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyReplicateOnNetForcedUpdate")); }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bOnlyTickIfPlayerCharacter"); }
    BrzCampoPonteiro bOnlyTickWhenPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyTickWhenPossessed")); }
    BrzCampoPonteiro bOnlyTickWhenVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOnlyTickWhenVisible")); }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bOverrideBuffDescription"); }
    BrzCampoPonteiro bOverrideBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideBuffType")); }
    BrzCampoPonteiro bOverrideCharacterLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideCharacterLanding")); }
    BrzCampoPonteiro bOverrideCharacterMovementInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideCharacterMovementInput")); }
    BrzCampoPonteiro bOverrideInventoryWeightMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideInventoryWeightMultipliers")); }
    BrzCampoPonteiro bOverrideRightShoulderOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideRightShoulderOnPlayer")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideTPVCameraOffset")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bOverrideTPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro bPersistentBuffSurvivesLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPersistentBuffSurvivesLevelUp")); }
    BrzCampoPonteiro bPlayerIgnoreBuffPostprocessEffectWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino")); }
    BrzCampoPonteiro bPostUpdateTickGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPostUpdateTickGroup")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventCarryCharacter")); }
    BrzCampoPonteiro bPreventCarryOrPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventCarryOrPassenger")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearRiderOnDinoImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventClearRiderOnDinoImmobilize")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventDinoDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventDinoDismount")); }
    BrzCampoPonteiro bPreventDinoRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventDinoRiding")); }
    BrzCampoPonteiro bPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventFallDamage")); }
    BrzCampoPonteiro bPreventInputDoesOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventInputDoesOffset")); }
    BrzCampoPonteiro bPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventInstigatorAttack")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLogoutSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventLogoutSleeping")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnBigDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnBigDino")); }
    BrzCampoPonteiro bPreventOnBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnBossDino")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnDino")); }
    BrzCampoPonteiro bPreventOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnPlayer")); }
    BrzCampoPonteiro bPreventOnRobotDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnRobotDino")); }
    BrzCampoPonteiro bPreventOnSeatingStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnSeatingStructures")); }
    BrzCampoPonteiro bPreventOnShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnShip")); }
    BrzCampoPonteiro bPreventOnWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventOnWildDino")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bPreventSaving")); }
    BrzCampoPonteiro bReactivateWithNewDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReactivateWithNewDamageCauser")); }
    BrzCampoPonteiro bReactivationAddsNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReactivationAddsNewStack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemoteForcedFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bRemoteForcedFlee")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bReplicates")); }
    BrzCampoPonteiro bRequireControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bRequireController")); }
    BrzCampoPonteiro bResetTopStackTimeWhenAddingNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bResetTopStackTimeWhenAddingNewStack")); }
    BrzCampoPonteiro bSavePlayerDataOnSaveWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSavePlayerDataOnSaveWorld")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSavedWhenStasised")); }
    BrzCampoPonteiro bShallowEmitterDontSpawnOutOfViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bShallowEmitterDontSpawnOutOfView")); }
    BrzCampoPonteiro bShallowEmitterSpawnableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bShallowEmitterSpawnable")); }
    BrzCampoPonteiro bShowBuffModifierDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bShowBuffModifierDescription")); }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bShowMammalIncubationOptions"); }
    BrzCampoPonteiro bSkillAddBuffDeactivationTimeToCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSkillAddBuffDeactivationTimeToCooldown")); }
    BrzCampoPonteiro bSkillAllowUseWhileEncumberedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSkillAllowUseWhileEncumbered")); }
    BrzCampoPonteiro bSkillAllowUseWhileSeatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSkillAllowUseWhileSeated")); }
    BrzCampoPonteiro bSkillBuffSetCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSkillBuffSetCooldown")); }
    BrzCampoPonteiro bSkipInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSkipInstigatorTick")); }
    BrzCampoPonteiro bSlowInstigatorFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSlowInstigatorFalling")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bStasised")); }
    BrzCampoPonteiro bStatusComponentUsingExtendedHUDTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bStatusComponentUsingExtendedHUDText")); }
    BrzCampoPonteiro bSupportsCustomHexagonConversionShopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bSupportsCustomHexagonConversionShop")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bTearOff")); }
    BrzCampoPonteiro bTickSoundInRangePlaybackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bTickSoundInRangePlayback")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bTriggerBPStasis")); }
    BrzCampoPonteiro bTriggerBPUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bTriggerBPUnstasis")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseASACameraPivotLocationForOldCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseASACameraPivotLocationForOldCamera")); }
    BrzCampoPonteiro bUseActivateSoundFadeInDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseActivateSoundFadeInDuration")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAdjustCharacterMovementImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPAdjustCharacterMovementImpulse")); }
    BrzCampoPonteiro bUseBPAdjustImpulseFromDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPAdjustImpulseFromDamage")); }
    BrzCampoPonteiro bUseBPAdjustRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPAdjustRadialDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPBuffControllerKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPBuffControllerKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPBuffKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffPreventBuildingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPBuffPreventBuilding")); }
    BrzCampoPonteiro bUseBPBuffPreventsImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPBuffPreventsImmobilization")); }
    BrzCampoPonteiro bUseBPBuffPreventsMultiuseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPBuffPreventsMultiuseEntries")); }
    BrzCampoPonteiro bUseBPCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPCanBeCarried")); }
    BrzCampoPonteiro bUseBPCanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPCanFly")); }
    BrzCampoPonteiro bUseBPChangeBuffStatusValueModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPChangeBuffStatusValueModifiers")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPCheckForErrors")); }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBPCustomAllowAddBuff"); }
    BrzCampoPonteiro bUseBPCustomApplyColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPCustomApplyColor")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPCustomIsRelevantForClient")); }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBPDeactivated"); }
    BrzCampoPonteiro bUseBPDinoNameColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPDinoNameColorOverride")); }
    BrzCampoPonteiro bUseBPDinoRefreshColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPDinoRefreshColorization")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPExcludeAoEActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPExcludeAoEActor")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPForceOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bUseBPFullyHarvestedNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPFullyHarvestedNode")); }
    BrzCampoPonteiro bUseBPGetAltInventoryForAmmoConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetAltInventoryForAmmoConsumption")); }
    BrzCampoPonteiro bUseBPGetAttackAnimPlayRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetAttackAnimPlayRateModifier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPGetBuffDescriptionIconAlphaMultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetBuffDescriptionIconAlphaMult")); }
    BrzCampoPonteiro bUseBPGetBuffLevelUpStatOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetBuffLevelUpStatOverride")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCameraShakeScalarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetCameraShakeScalar")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetCustomTooltipActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetCustomTooltipActor")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetHUDElementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetHUDElements")); }
    BrzCampoPonteiro bUseBPGetMoveAnimRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetMoveAnimRate")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetOrbitCamTargetLocation")); }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBPGetPlayerFootStepSound"); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetWaypointsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPGetWaypointsBuff")); }
    BrzCampoPonteiro bUseBPHandleOnStartAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPHandleOnStartAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStartFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPHandleOnStartFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPHandleOnStopAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPHandleOnStopFire")); }
    BrzCampoPonteiro bUseBPInformDamageCauserOfBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPInformDamageCauserOfBuffAdded")); }
    BrzCampoPonteiro bUseBPInitializedCharacterAnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPInitializedCharacterAnimScriptInstance")); }
    BrzCampoPonteiro bUseBPInstigatorAllowDinoTargetingRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPInstigatorAllowDinoTargetingRange")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsCharacterHardAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPIsCharacterHardAttached")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPModifyArmorValue")); }
    BrzCampoPonteiro bUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bUseBPNofityMontagePlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNofityMontagePlay")); }
    BrzCampoPonteiro bUseBPNonDedicatedPlayerPostAnimUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNonDedicatedPlayerPostAnimUpdate")); }
    BrzCampoPonteiro bUseBPNotifyBuffWeaponFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyBuffWeaponFired")); }
    BrzCampoPonteiro bUseBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyItemAdded")); }
    BrzCampoPonteiro bUseBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bUseBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyItemRemoved")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyOtherBuffActivated")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyOtherBuffDeactivated")); }
    BrzCampoPonteiro bUseBPNotifyPreventDismountingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPNotifyPreventDismounting")); }
    BrzCampoPonteiro bUseBPOnAoeBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnAoeBuffAdded")); }
    BrzCampoPonteiro bUseBPOnDestroyInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnDestroyInstigator")); }
    BrzCampoPonteiro bUseBPOnHexagonCountChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnHexagonCountChanged")); }
    BrzCampoPonteiro bUseBPOnInstigatorCapsuleComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnInstigatorCapsuleComponentHit")); }
    BrzCampoPonteiro bUseBPOnInstigatorLootedCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnInstigatorLootedCrate")); }
    BrzCampoPonteiro bUseBPOnInstigatorMovementModeChangedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnInstigatorMovementModeChangedNotify")); }
    BrzCampoPonteiro bUseBPOnOwnerMassTeleportEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnOwnerMassTeleportEvent")); }
    BrzCampoPonteiro bUseBPOnPlayerShoulderMountDinoChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnPlayerShoulderMountDinoChange")); }
    BrzCampoPonteiro bUseBPOnRiderChangeWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnRiderChangeWeapons")); }
    BrzCampoPonteiro bUseBPOnTamedWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOnTamedWildDino")); }
    BrzCampoPonteiro bUseBPOverrideAoEBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideAoEBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPOverrideBloodDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideBloodDecals")); }
    BrzCampoPonteiro bUseBPOverrideBuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideBuffToGiveOnDeactivation")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCameraArmLength")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCameraArmLengthInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraDesiredPivotLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCameraDesiredPivotLocation")); }
    BrzCampoPonteiro bUseBPOverrideCameraPivotLocationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCameraPivotLocationInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterLocalControlZInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCharacterLocalControlZInterpSpeed")); }
    BrzCampoPonteiro bUseBPOverrideCuddleFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideCuddleFoodTypes")); }
    BrzCampoPonteiro bUseBPOverrideDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideDynamicMusic")); }
    BrzCampoPonteiro bUseBPOverrideIsImprintPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideIsImprintPlayer")); }
    BrzCampoPonteiro bUseBPOverrideIsNetRelevantForField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideIsNetRelevantFor")); }
    BrzCampoPonteiro bUseBPOverrideMaxInventoryAccessDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideMaxInventoryAccessDistance")); }
    BrzCampoPonteiro bUseBPOverrideMaxUseDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideMaxUseDistance")); }
    BrzCampoPonteiro bUseBPOverrideTalkerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideTalkerCharacter")); }
    BrzCampoPonteiro bUseBPOverrideTargetStructureSettingsDamageAdjusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideTargetStructureSettingsDamageAdjuster")); }
    BrzCampoPonteiro bUseBPOverrideTargetingDesireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideTargetingDesire")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPOverrideValuesToAddPerSecondField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideValuesToAddPerSecond")); }
    BrzCampoPonteiro bUseBPOverrideWaterJumpVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPOverrideWaterJumpVelocity")); }
    BrzCampoPonteiro bUseBPPassHarvestExperienceToActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPassHarvestExperienceToActor")); }
    BrzCampoPonteiro bUseBPPreClaimWildFollowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreClaimWildFollower")); }
    BrzCampoPonteiro bUseBPPreServerUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreServerUpload")); }
    BrzCampoPonteiro bUseBPPreventAddingOtherBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventAddingOtherBuff")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventEquipWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventEquipWeapons")); }
    BrzCampoPonteiro bUseBPPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventFallDamage")); }
    BrzCampoPonteiro bUseBPPreventFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventFirstPerson")); }
    BrzCampoPonteiro bUseBPPreventFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventFlight")); }
    BrzCampoPonteiro bUseBPPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventInstigatorAttack")); }
    BrzCampoPonteiro bUseBPPreventInstigatorMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventInstigatorMovementMode")); }
    BrzCampoPonteiro bUseBPPreventNotifySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventNotifySound")); }
    BrzCampoPonteiro bUseBPPreventOnStartJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventOnStartJump")); }
    BrzCampoPonteiro bUseBPPreventRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventRunning")); }
    BrzCampoPonteiro bUseBPPreventTekArmorBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventTekArmorBuffs")); }
    BrzCampoPonteiro bUseBPPreventThrowingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPPreventThrowingItem")); }
    BrzCampoPonteiro bUseBPSetupForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPSetupForInstigator")); }
    BrzCampoPonteiro bUseBPShouldForceOwnerDedicatedMovementTickPerFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBPShouldForceOwnerDedicatedMovementTickPerFrame")); }
    BrzCampoPonteiro bUseBP_AdjustDamageExField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBP_AdjustDamageEx")); }
    BrzCampoPonteiro bUseBP_OnOwnerDealtDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBP_OnOwnerDealtDamage")); }
    BrzCampoPonteiro bUseBP_OnOwnerTeleportedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBP_OnOwnerTeleported")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBP_OverrideTerminalVelocity")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBuffOverrideFinalWanderLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBuffOverrideFinalWanderLocation")); }
    BrzCampoPonteiro bUseBuffOverrideInventoryAccessInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBuffOverrideInventoryAccessInput")); }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBuffTickClient"); }
    BrzCampoPonteiro bUseBuffTickServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseBuffTickServer")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCenteredTPVCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseCenteredTPVCamera")); }
    BrzCampoPonteiro bUseConsolidatedMultiUseWheelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseConsolidatedMultiUseWheel")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseFinalAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseFinalAdjustDamage")); }
    BrzCampoPonteiro bUseForcedBuffAimOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseForcedBuffAimOverride")); }
    BrzCampoPonteiro bUseGetGravityZScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseGetGravityZScale")); }
    BrzCampoPonteiro bUseInstigatorItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseInstigatorItem")); }
    BrzCampoPonteiro bUseInterceptInstigatorPlayerEmoteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseInterceptInstigatorPlayerEmote")); }
    BrzCampoPonteiro bUseInterceptItemSlotUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseInterceptItemSlotUse")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseNiagaraDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseNiagaraDestroyOnSystemFinish")); }
    BrzCampoPonteiro bUseOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseOnCarryCharacter")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePostAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUsePostAdjustDamage")); }
    BrzCampoPonteiro bUseRemoteClientTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseRemoteClientTick")); }
    BrzCampoPonteiro bUseSetHiddenInGameFromInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseSetHiddenInGameFromInstigator")); }
    BrzCampoPonteiro bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTickingDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUseTickingDeactivation")); }
    BrzCampoPonteiro bUsesInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bUsesInstigator")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.bWasActivated")); }
    BrzCampoPonteiro omitHapticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.omitHaptics")); }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.staticPathingDestination")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_STORAGEINTERFACE_H
