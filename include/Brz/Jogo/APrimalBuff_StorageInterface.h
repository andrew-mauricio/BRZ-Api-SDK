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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientRequestItemsForClass(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_StorageInterface.ClientRequestItemsForClass(TSubclassOf<UPrimalItem>,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.ClientRequestItemsForClass_Implementation(TSubclassOf<UPrimalItem>,
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=112+chamadores=2]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    BrzPonteiro ClientRequestWithdrawItemsOfClass_Implementation(void* a0, int a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, int, bool, bool>(this, "APrimalBuff_StorageInterface.ClientRequestWithdrawItemsOfClass_Implementation(TSubclassOf<UPrimalItem>,int,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.FinishedReplicatingItems(TArray<TSubclassOf<UPrimalItem>,TSizedDefa
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=820+grafo=12/12]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=31]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1030+grafo=20/20]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=195+grafo=4/4]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=268]]
    BrzPonteiro RequestLocateItemsUpdate() const
    {
        return NativeCall<void*>(this, "APrimalBuff_StorageInterface.RequestLocateItemsUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetLinkedContainer(APrimalStructureItemContainer*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1084+grafo=15/15]]
    BrzPonteiro SetLinkedContainer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_StorageInterface.SetLinkedContainer(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetPOIHidden(int,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetPOIHidden(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "APrimalBuff_StorageInterface.SetPOIHidden(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_StorageInterface.SetPOIsHidden(bool)
    // endereco: cache_pdb_25090264
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
    //  ancorado em `POIItemNameOverrides` +80, medido na build 25090264
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
    //  ancorado em `POIItemNameOverrides` +120, medido na build 25090264
    //  (offset absoluto medido: 0xD08; confianca media)
    void*& LastLocateItemRequestedTimeField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +104, medido na build 25090264
    //  (offset absoluto medido: 0xCF8; confianca media)
    void*& LastLocatedItemClassField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +96, medido na build 25090264
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
    //  ancorado em `POIItemNameOverrides` +128, medido na build 25090264
    //  (offset absoluto medido: 0xD10; confianca media)
    void*& LocateItemsUpdateTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 128); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.MPCAdjusters")); }
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
    //  ancorado em `ReplicatedWirelessItems` +80, medido na build 25090264
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
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamage()
    { return { (void*)this, "UseBPAdjustOutputDamage" }; }
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamageForNonMeleePlayerDamage()
    { return { (void*)this, "UseBPAdjustOutputDamageForNonMeleePlayerDamage" }; }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_StorageInterface.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.ViewMinExposureMultiplier"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_StorageInterface.XPtoAddRate"); }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffIgnoreSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffIgnoreSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnDinos()
    { return { (void*)this, "bAOEApplyOtherBuffOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnPlayers()
    { return { (void*)this, "bAOEApplyOtherBuffOnPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffRequireSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffRequireSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly()
    { return { (void*)this, "bAOEBuffCarnosOnly" }; }
    BitFieldValue<bool, unsigned __int32> bAOEOnlyApplyOtherBuffToWildDinos()
    { return { (void*)this, "bAOEOnlyApplyOtherBuffToWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAddCharacterValues()
    { return { (void*)this, "bAddCharacterValues" }; }
    BitFieldValue<bool, unsigned __int32> bAddExtendBuffTime()
    { return { (void*)this, "bAddExtendBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAddReactivates()
    { return { (void*)this, "bAddReactivates" }; }
    BitFieldValue<bool, unsigned __int32> bAddRequireSameDamageCauser()
    { return { (void*)this, "bAddRequireSameDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bAddResetsBuffTime()
    { return { (void*)this, "bAddResetsBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAddStackResetsBuffStart()
    { return { (void*)this, "bAddStackResetsBuffStart" }; }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bAddTPVCameraOffset"); }
    BitFieldValue<bool, unsigned __int32> bAdditionalExperienceMultiplier()
    { return { (void*)this, "bAdditionalExperienceMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAdditionalTamingSpeedMultiplier()
    { return { (void*)this, "bAdditionalTamingSpeedMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffStasis()
    { return { (void*)this, "bAllowBuffStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffWhenInstigatorDead()
    { return { (void*)this, "bAllowBuffWhenInstigatorDead" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoopingEmitter()
    { return { (void*)this, "bAllowLoopingEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseEntriesFromSelf()
    { return { (void*)this, "bAllowMultiUseEntriesFromSelf" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOnlyCustomFallDamage()
    { return { (void*)this, "bAllowOnlyCustomFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretsToTargetInstigatorIfTraceHitsBuff()
    { return { (void*)this, "bAllowTurretsToTargetInstigatorIfTraceHitsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysShowBuffDescription()
    { return { (void*)this, "bAlwaysShowBuffDescription" }; }
    BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables()
    { return { (void*)this, "bAoEApplyDamageAllTargetables" }; }
    BitFieldValue<bool, unsigned __int32> bAoEBuffAllowIfAlreadyBuffed()
    { return { (void*)this, "bAoEBuffAllowIfAlreadyBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bAoEIgnoreDinosTargetingInstigator()
    { return { (void*)this, "bAoEIgnoreDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoEOnlyOnDinosTargetingInstigator()
    { return { (void*)this, "bAoEOnlyOnDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoETraceToTargets()
    { return { (void*)this, "bAoETraceToTargets" }; }
    BitFieldValue<bool, unsigned __int32> bApplyOneMaxSpeedModifierPerStack()
    { return { (void*)this, "bApplyOneMaxSpeedModifierPerStack" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToDinos()
    { return { (void*)this, "bApplyStatModifierToDinos" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToPlayers()
    { return { (void*)this, "bApplyStatModifierToPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPAddMultiUseEntries()
    { return { (void*)this, "bBPAddMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPAdjustStatusValueModification()
    { return { (void*)this, "bBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bBPDrawBuffStatusHUD()
    { return { (void*)this, "bBPDrawBuffStatusHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBPFilterMultiUseFilterTargetEntries()
    { return { (void*)this, "bBPFilterMultiUseFilterTargetEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyCharacterFOV()
    { return { (void*)this, "bBPModifyCharacterFOV" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideActorForTargetingTooltip()
    { return { (void*)this, "bBPOverrideActorForTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bBPOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bBPOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterWalkVelocity()
    { return { (void*)this, "bBPOverrideCharacterWalkVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideWeaponBob()
    { return { (void*)this, "bBPOverrideWeaponBob" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedByPawn()
    { return { (void*)this, "bBPUseBumpedByPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedPawn()
    { return { (void*)this, "bBPUseBumpedPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUD()
    { return { (void*)this, "bBuffDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUDRemotePlayers()
    { return { (void*)this, "bBuffDrawFloatingHUDRemotePlayers" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTick()
    { return { (void*)this, "bBuffForceNoTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTickDedicated()
    { return { (void*)this, "bBuffForceNoTickDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHandleInstigatorMultiUseEntries()
    { return { (void*)this, "bBuffHandleInstigatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHidesNonWeaponHUD()
    { return { (void*)this, "bBuffHidesNonWeaponHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreSerializeForInstigator()
    { return { (void*)this, "bBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsApplyingLevelUps()
    { return { (void*)this, "bBuffPreventsApplyingLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsCryo()
    { return { (void*)this, "bBuffPreventsCryo" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccess()
    { return { (void*)this, "bBuffPreventsInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccessAllowMissions()
    { return { (void*)this, "bBuffPreventsInventoryAccessAllowMissions" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsMountedWeaponry()
    { return { (void*)this, "bBuffPreventsMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsPlayerDropAllInventory()
    { return { (void*)this, "bBuffPreventsPlayerDropAllInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderNotifiesOnClient()
    { return { (void*)this, "bCallRiderNotifiesOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCameraShakeOrientTowardsEpicenter()
    { return { (void*)this, "bCameraShakeOrientTowardsEpicenter" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCausesCryoSickness()
    { return { (void*)this, "bCausesCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bCheckPreventInput()
    { return { (void*)this, "bCheckPreventInput" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride()
    { return { (void*)this, "bCompleteCustomDepthStencilOverride" }; }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bContinueTickingClientAfterDeactivate"); }
    BitFieldValue<bool, unsigned __int32> bContinueTickingServerAfterDeactivate()
    { return { (void*)this, "bContinueTickingServerAfterDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bCurrentlyActive()
    { return { (void*)this, "bCurrentlyActive" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth()
    { return { (void*)this, "bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateAfterAddingXP()
    { return { (void*)this, "bDeactivateAfterAddingXP" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateOnJump()
    { return { (void*)this, "bDeactivateOnJump" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivated()
    { return { (void*)this, "bDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivatedSoundOnlyLocal()
    { return { (void*)this, "bDeactivatedSoundOnlyLocal" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bDediServerUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bDelayedDeactivation()
    { return { (void*)this, "bDelayedDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnSystemFinish()
    { return { (void*)this, "bDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnTargetStasis()
    { return { (void*)this, "bDestroyOnTargetStasis" }; }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bDestroyWhenUnpossessed"); }
    BitFieldValue<bool, unsigned __int32> bDinoIgnoreBuffPostprocessEffectWhenRidden()
    { return { (void*)this, "bDinoIgnoreBuffPostprocessEffectWhenRidden" }; }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bDisableBloom"); }
    BitFieldValue<bool, unsigned __int32> bDisableFaceRotation()
    { return { (void*)this, "bDisableFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFootstepsParticles()
    { return { (void*)this, "bDisableFootstepsParticles" }; }
    BitFieldValue<bool, unsigned __int32> bDisableIfCharacterUnderwater()
    { return { (void*)this, "bDisableIfCharacterUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHUDProgressBar()
    { return { (void*)this, "bDisplayHUDProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachment()
    { return { (void*)this, "bDoCharacterDetachment" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeCarrying()
    { return { (void*)this, "bDoCharacterDetachmentIncludeCarrying" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeRiding()
    { return { (void*)this, "bDoCharacterDetachmentIncludeRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayInstigatorActiveSoundOnDino()
    { return { (void*)this, "bDontPlayInstigatorActiveSoundOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBuffStacking()
    { return { (void*)this, "bEnableBuffStacking" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStaticPathing()
    { return { (void*)this, "bEnableStaticPathing" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTargetingTooltip()
    { return { (void*)this, "bEnableTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bEnablesSpyglassEffect()
    { return { (void*)this, "bEnablesSpyglassEffect" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFollowTarget()
    { return { (void*)this, "bFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAddUnderwaterCharacterStatusValues()
    { return { (void*)this, "bForceAddUnderwaterCharacterStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAddingWithoutController()
    { return { (void*)this, "bForceAllowAddingWithoutController" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWhileBuried()
    { return { (void*)this, "bForceAllowWhileBuried" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBuff()
    { return { (void*)this, "bForceAlwaysAllowBuff" }; }
    BitFieldValue<bool, unsigned __int32> bForceCrosshair()
    { return { (void*)this, "bForceCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawMissionDinoTargetHealthbars()
    { return { (void*)this, "bForceDrawMissionDinoTargetHealthbars" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideFloatingName()
    { return { (void*)this, "bForceHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceInstigatorTick()
    { return { (void*)this, "bForceInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoRotation()
    { return { (void*)this, "bForceNoRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnDediServer()
    { return { (void*)this, "bForceOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bForceOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bForceOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bForceOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterWalkingVelocity()
    { return { (void*)this, "bForceOverrideCharacterWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlayerProne()
    { return { (void*)this, "bForcePlayerProne" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceSelfTick()
    { return { (void*)this, "bForceSelfTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowFloatingName()
    { return { (void*)this, "bForceShowFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargeting()
    { return { (void*)this, "bForceUsePreventTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargetingTurret()
    { return { (void*)this, "bForceUsePreventTargetingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseStackCount()
    { return { (void*)this, "bForceUseStackCount" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bForcedOnSpectatorPlayerController()
    { return { (void*)this, "bForcedOnSpectatorPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bGetInstigatorChatMessages()
    { return { (void*)this, "bGetInstigatorChatMessages" }; }
    BitFieldValue<bool, unsigned __int32> bHUDFormatTimerAsTimecode()
    { return { (void*)this, "bHUDFormatTimerAsTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasImpulseDataAvailable()
    { return { (void*)this, "bHasImpulseDataAvailable" }; }
    BitFieldValue<bool, unsigned __int32> bHasRelatedMission()
    { return { (void*)this, "bHasRelatedMission" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUD()
    { return { (void*)this, "bHideBuffFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUDOnly()
    { return { (void*)this, "bHideBuffFromHUDOnly" }; }
    BitFieldValue<bool, unsigned __int32> bHideFootStepDecals()
    { return { (void*)this, "bHideFootStepDecals" }; }
    BitFieldValue<bool, unsigned __int32> bHideTimerFromHUD()
    { return { (void*)this, "bHideTimerFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHighPrioritySound()
    { return { (void*)this, "bHighPrioritySound" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTarget()
    { return { (void*)this, "bImmobilizeTarget" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTargetPreventDismount()
    { return { (void*)this, "bImmobilizeTargetPreventDismount" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptInputEvents()
    { return { (void*)this, "bInterceptInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptUseAction()
    { return { (void*)this, "bInterceptUseAction" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptWeaponToggle()
    { return { (void*)this, "bInterceptWeaponToggle" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffPersistent()
    { return { (void*)this, "bIsBuffPersistent" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryBuff()
    { return { (void*)this, "bIsCarryBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDisease()
    { return { (void*)this, "bIsDisease" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromSkill()
    { return { (void*)this, "bIsFromSkill" }; }
    BitFieldValue<bool, unsigned __int32> bIsHighRiskMissionBuff()
    { return { (void*)this, "bIsHighRiskMissionBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkillBuff()
    { return { (void*)this, "bIsSkillBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `POIItemNameOverrides` +112, medido na build 25090264
    //  (offset absoluto medido: 0xD00; confianca media)
    void*& bLastLocatedItemClassWasDediOnlyField() const
    { return BrzCampoAncorado<void*>(this, "POIItemNameOverrides", 112); }
    BitFieldValue<bool, unsigned __int32> bListenForInput()
    { return { (void*)this, "bListenForInput" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bModifyFriction()
    { return { (void*)this, "bModifyFriction" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxAcceleration()
    { return { (void*)this, "bModifyMaxAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxSpeed()
    { return { (void*)this, "bModifyMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bModifyRotationRate()
    { return { (void*)this, "bModifyRotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetResetBuffStart()
    { return { (void*)this, "bNetResetBuffStart" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyDamage()
    { return { (void*)this, "bNotifyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained()
    { return { (void*)this, "bNotifyExperienceGained" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_AllowCountingAlphaKills()
    { return { (void*)this, "bNotifyExperienceGained_AllowCountingAlphaKills" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_IncludeSmallAmounts()
    { return { (void*)this, "bNotifyExperienceGained_IncludeSmallAmounts" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator()
    { return { (void*)this, "bOnlyActivateSoundForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAddCharacterValuesUnderwater()
    { return { (void*)this, "bOnlyAddCharacterValuesUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bOnlyTickIfPlayerCharacter"); }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenPossessed()
    { return { (void*)this, "bOnlyTickWhenPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenVisible()
    { return { (void*)this, "bOnlyTickWhenVisible" }; }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bOverrideBuffDescription"); }
    BitFieldValue<bool, unsigned __int32> bOverrideBuffType()
    { return { (void*)this, "bOverrideBuffType" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterLanding()
    { return { (void*)this, "bOverrideCharacterLanding" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterMovementInput()
    { return { (void*)this, "bOverrideCharacterMovementInput" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryWeightMultipliers()
    { return { (void*)this, "bOverrideInventoryWeightMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRightShoulderOnPlayer()
    { return { (void*)this, "bOverrideRightShoulderOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffset()
    { return { (void*)this, "bOverrideTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffsetMultiplier()
    { return { (void*)this, "bOverrideTPVCameraOffsetMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPersistentBuffSurvivesLevelUp()
    { return { (void*)this, "bPersistentBuffSurvivesLevelUp" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIgnoreBuffPostprocessEffectWhenRidingDino()
    { return { (void*)this, "bPlayerIgnoreBuffPostprocessEffectWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bPostUpdateTickGroup()
    { return { (void*)this, "bPostUpdateTickGroup" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryCharacter()
    { return { (void*)this, "bPreventCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryOrPassenger()
    { return { (void*)this, "bPreventCarryOrPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearRiderOnDinoImmobilize()
    { return { (void*)this, "bPreventClearRiderOnDinoImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoDismount()
    { return { (void*)this, "bPreventDinoDismount" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoRiding()
    { return { (void*)this, "bPreventDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallDamage()
    { return { (void*)this, "bPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInputDoesOffset()
    { return { (void*)this, "bPreventInputDoesOffset" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInstigatorAttack()
    { return { (void*)this, "bPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLogoutSleeping()
    { return { (void*)this, "bPreventLogoutSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBigDino()
    { return { (void*)this, "bPreventOnBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBossDino()
    { return { (void*)this, "bPreventOnBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDino()
    { return { (void*)this, "bPreventOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnPlayer()
    { return { (void*)this, "bPreventOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnRobotDino()
    { return { (void*)this, "bPreventOnRobotDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSeatingStructures()
    { return { (void*)this, "bPreventOnSeatingStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnShip()
    { return { (void*)this, "bPreventOnShip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnWildDino()
    { return { (void*)this, "bPreventOnWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bReactivateWithNewDamageCauser()
    { return { (void*)this, "bReactivateWithNewDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bReactivationAddsNewStack()
    { return { (void*)this, "bReactivationAddsNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteForcedFlee()
    { return { (void*)this, "bRemoteForcedFlee" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRequireController()
    { return { (void*)this, "bRequireController" }; }
    BitFieldValue<bool, unsigned __int32> bResetTopStackTimeWhenAddingNewStack()
    { return { (void*)this, "bResetTopStackTimeWhenAddingNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bSavePlayerDataOnSaveWorld()
    { return { (void*)this, "bSavePlayerDataOnSaveWorld" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterDontSpawnOutOfView()
    { return { (void*)this, "bShallowEmitterDontSpawnOutOfView" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterSpawnable()
    { return { (void*)this, "bShallowEmitterSpawnable" }; }
    BitFieldValue<bool, unsigned __int32> bShowBuffModifierDescription()
    { return { (void*)this, "bShowBuffModifierDescription" }; }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bShowMammalIncubationOptions"); }
    BitFieldValue<bool, unsigned __int32> bSkillAddBuffDeactivationTimeToCooldown()
    { return { (void*)this, "bSkillAddBuffDeactivationTimeToCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileEncumbered()
    { return { (void*)this, "bSkillAllowUseWhileEncumbered" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileSeated()
    { return { (void*)this, "bSkillAllowUseWhileSeated" }; }
    BitFieldValue<bool, unsigned __int32> bSkillBuffSetCooldown()
    { return { (void*)this, "bSkillBuffSetCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkipInstigatorTick()
    { return { (void*)this, "bSkipInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling()
    { return { (void*)this, "bSlowInstigatorFalling" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStatusComponentUsingExtendedHUDText()
    { return { (void*)this, "bStatusComponentUsingExtendedHUDText" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTickSoundInRangePlayback()
    { return { (void*)this, "bTickSoundInRangePlayback" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseASACameraPivotLocationForOldCamera()
    { return { (void*)this, "bUseASACameraPivotLocationForOldCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseActivateSoundFadeInDuration()
    { return { (void*)this, "bUseActivateSoundFadeInDuration" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse()
    { return { (void*)this, "bUseBPAdjustCharacterMovementImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage()
    { return { (void*)this, "bUseBPAdjustImpulseFromDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustRadialDamage()
    { return { (void*)this, "bUseBPAdjustRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffControllerKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffControllerKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventBuilding()
    { return { (void*)this, "bUseBPBuffPreventBuilding" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsImmobilization()
    { return { (void*)this, "bUseBPBuffPreventsImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsMultiuseEntries()
    { return { (void*)this, "bUseBPBuffPreventsMultiuseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeCarried()
    { return { (void*)this, "bUseBPCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFly()
    { return { (void*)this, "bUseBPCanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangeBuffStatusValueModifiers()
    { return { (void*)this, "bUseBPChangeBuffStatusValueModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBPCustomAllowAddBuff"); }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomApplyColor()
    { return { (void*)this, "bUseBPCustomApplyColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBPDeactivated"); }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoNameColorOverride()
    { return { (void*)this, "bUseBPDinoNameColorOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoRefreshColorization()
    { return { (void*)this, "bUseBPDinoRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPExcludeAoEActor()
    { return { (void*)this, "bUseBPExcludeAoEActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceOverrideWeaponFireTransform()
    { return { (void*)this, "bUseBPForceOverrideWeaponFireTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFullyHarvestedNode()
    { return { (void*)this, "bUseBPFullyHarvestedNode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAltInventoryForAmmoConsumption()
    { return { (void*)this, "bUseBPGetAltInventoryForAmmoConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAttackAnimPlayRateModifier()
    { return { (void*)this, "bUseBPGetAttackAnimPlayRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDamageCauser()
    { return { (void*)this, "bUseBPGetBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDescriptionIconAlphaMult()
    { return { (void*)this, "bUseBPGetBuffDescriptionIconAlphaMult" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffLevelUpStatOverride()
    { return { (void*)this, "bUseBPGetBuffLevelUpStatOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraShakeScalar()
    { return { (void*)this, "bUseBPGetCameraShakeScalar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairColor()
    { return { (void*)this, "bUseBPGetCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCustomTooltipActor()
    { return { (void*)this, "bUseBPGetCustomTooltipActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements()
    { return { (void*)this, "bUseBPGetHUDElements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMoveAnimRate()
    { return { (void*)this, "bUseBPGetMoveAnimRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBPGetPlayerFootStepSound"); }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetWaypointsBuff()
    { return { (void*)this, "bUseBPGetWaypointsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartAltFire()
    { return { (void*)this, "bUseBPHandleOnStartAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartFire()
    { return { (void*)this, "bUseBPHandleOnStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopAltFire()
    { return { (void*)this, "bUseBPHandleOnStopAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopFire()
    { return { (void*)this, "bUseBPHandleOnStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInformDamageCauserOfBuffAdded()
    { return { (void*)this, "bUseBPInformDamageCauserOfBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializedCharacterAnimScriptInstance()
    { return { (void*)this, "bUseBPInitializedCharacterAnimScriptInstance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInstigatorAllowDinoTargetingRange()
    { return { (void*)this, "bUseBPInstigatorAllowDinoTargetingRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCharacterHardAttached()
    { return { (void*)this, "bUseBPIsCharacterHardAttached" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor()
    { return { (void*)this, "bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyArmorValue()
    { return { (void*)this, "bUseBPModifyArmorValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNofityMontagePlay()
    { return { (void*)this, "bUseBPNofityMontagePlay" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNonDedicatedPlayerPostAnimUpdate()
    { return { (void*)this, "bUseBPNonDedicatedPlayerPostAnimUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyBuffWeaponFired()
    { return { (void*)this, "bUseBPNotifyBuffWeaponFired" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemAdded()
    { return { (void*)this, "bUseBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemQuantityUpdated()
    { return { (void*)this, "bUseBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRemoved()
    { return { (void*)this, "bUseBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffActivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffDeactivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyPreventDismounting()
    { return { (void*)this, "bUseBPNotifyPreventDismounting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAoeBuffAdded()
    { return { (void*)this, "bUseBPOnAoeBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDestroyInstigator()
    { return { (void*)this, "bUseBPOnDestroyInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHexagonCountChanged()
    { return { (void*)this, "bUseBPOnHexagonCountChanged" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorCapsuleComponentHit()
    { return { (void*)this, "bUseBPOnInstigatorCapsuleComponentHit" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorLootedCrate()
    { return { (void*)this, "bUseBPOnInstigatorLootedCrate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorMovementModeChangedNotify()
    { return { (void*)this, "bUseBPOnInstigatorMovementModeChangedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnOwnerMassTeleportEvent()
    { return { (void*)this, "bUseBPOnOwnerMassTeleportEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnPlayerShoulderMountDinoChange()
    { return { (void*)this, "bUseBPOnPlayerShoulderMountDinoChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRiderChangeWeapons()
    { return { (void*)this, "bUseBPOnRiderChangeWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTamedWildDino()
    { return { (void*)this, "bUseBPOnTamedWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAoEBuffDamageCauser()
    { return { (void*)this, "bUseBPOverrideAoEBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBloodDecals()
    { return { (void*)this, "bUseBPOverrideBloodDecals" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBuffToGiveOnDeactivation()
    { return { (void*)this, "bUseBPOverrideBuffToGiveOnDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLength()
    { return { (void*)this, "bUseBPOverrideCameraArmLength" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLengthInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraArmLengthInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraDesiredPivotLocation()
    { return { (void*)this, "bUseBPOverrideCameraDesiredPivotLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraPivotLocationInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraPivotLocationInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterLocalControlZInterpSpeed()
    { return { (void*)this, "bUseBPOverrideCharacterLocalControlZInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCuddleFoodTypes()
    { return { (void*)this, "bUseBPOverrideCuddleFoodTypes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsImprintPlayer()
    { return { (void*)this, "bUseBPOverrideIsImprintPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsNetRelevantFor()
    { return { (void*)this, "bUseBPOverrideIsNetRelevantFor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxInventoryAccessDistance()
    { return { (void*)this, "bUseBPOverrideMaxInventoryAccessDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxUseDistance()
    { return { (void*)this, "bUseBPOverrideMaxUseDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTalkerCharacter()
    { return { (void*)this, "bUseBPOverrideTalkerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetStructureSettingsDamageAdjuster()
    { return { (void*)this, "bUseBPOverrideTargetStructureSettingsDamageAdjuster" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingDesire()
    { return { (void*)this, "bUseBPOverrideTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideValuesToAddPerSecond()
    { return { (void*)this, "bUseBPOverrideValuesToAddPerSecond" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWaterJumpVelocity()
    { return { (void*)this, "bUseBPOverrideWaterJumpVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPassHarvestExperienceToActor()
    { return { (void*)this, "bUseBPPassHarvestExperienceToActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreClaimWildFollower()
    { return { (void*)this, "bUseBPPreClaimWildFollower" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreServerUpload()
    { return { (void*)this, "bUseBPPreServerUpload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff()
    { return { (void*)this, "bUseBPPreventAddingOtherBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventEquipWeapons()
    { return { (void*)this, "bUseBPPreventEquipWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamage()
    { return { (void*)this, "bUseBPPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFirstPerson()
    { return { (void*)this, "bUseBPPreventFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFlight()
    { return { (void*)this, "bUseBPPreventFlight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorAttack()
    { return { (void*)this, "bUseBPPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorMovementMode()
    { return { (void*)this, "bUseBPPreventInstigatorMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySound()
    { return { (void*)this, "bUseBPPreventNotifySound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventOnStartJump()
    { return { (void*)this, "bUseBPPreventOnStartJump" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning()
    { return { (void*)this, "bUseBPPreventRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventTekArmorBuffs()
    { return { (void*)this, "bUseBPPreventTekArmorBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventThrowingItem()
    { return { (void*)this, "bUseBPPreventThrowingItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupForInstigator()
    { return { (void*)this, "bUseBPSetupForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldForceOwnerDedicatedMovementTickPerFrame()
    { return { (void*)this, "bUseBPShouldForceOwnerDedicatedMovementTickPerFrame" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustDamageEx()
    { return { (void*)this, "bUseBP_AdjustDamageEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerDealtDamage()
    { return { (void*)this, "bUseBP_OnOwnerDealtDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerTeleported()
    { return { (void*)this, "bUseBP_OnOwnerTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBlueprintAnimNotifications"); }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideFinalWanderLocation()
    { return { (void*)this, "bUseBuffOverrideFinalWanderLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideInventoryAccessInput()
    { return { (void*)this, "bUseBuffOverrideInventoryAccessInput" }; }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bUseBuffTickClient"); }
    BitFieldValue<bool, unsigned __int32> bUseBuffTickServer()
    { return { (void*)this, "bUseBuffTickServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCenteredTPVCamera()
    { return { (void*)this, "bUseCenteredTPVCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseConsolidatedMultiUseWheel()
    { return { (void*)this, "bUseConsolidatedMultiUseWheel" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip()
    { return { (void*)this, "bUseDinoRangeForTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseFinalAdjustDamage()
    { return { (void*)this, "bUseFinalAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcedBuffAimOverride()
    { return { (void*)this, "bUseForcedBuffAimOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetGravityZScale()
    { return { (void*)this, "bUseGetGravityZScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstigatorItem()
    { return { (void*)this, "bUseInstigatorItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptInstigatorPlayerEmote()
    { return { (void*)this, "bUseInterceptInstigatorPlayerEmote" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptItemSlotUse()
    { return { (void*)this, "bUseInterceptItemSlotUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseNiagaraDestroyOnSystemFinish()
    { return { (void*)this, "bUseNiagaraDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCarryCharacter()
    { return { (void*)this, "bUseOnCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostAdjustDamage()
    { return { (void*)this, "bUsePostAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseRemoteClientTick()
    { return { (void*)this, "bUseRemoteClientTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseSetHiddenInGameFromInstigator()
    { return { (void*)this, "bUseSetHiddenInGameFromInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad()
    { return { (void*)this, "bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickingDeactivation()
    { return { (void*)this, "bUseTickingDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUsesInstigator()
    { return { (void*)this, "bUsesInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated()
    { return { (void*)this, "bWasActivated" }; }
    BitFieldValue<bool, unsigned __int32> omitHaptics()
    { return { (void*)this, "omitHaptics" }; }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_StorageInterface.staticPathingDestination")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_STORAGEINTERFACE_H
