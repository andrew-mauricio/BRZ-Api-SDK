// ==========================================================================
//  UPrimalInventoryComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ADroppedItem;
struct APrimalStructureItemContainer;
struct AShooterHUD;
struct AShooterPlayerController;
struct FItemNetID;
struct UClass;
struct UObject;
struct UPrimalCharacterStatusComponent;
struct UPrimalItem;
struct UPrimalWirelessExchangeData;
struct UTexture2D;

#include "UActorComponent.h"

struct UPrimalInventoryComponent : public UActorComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalInventoryComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ActivePlayerInventoryTick(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=94+chamadores=2]]
    void ActivePlayerInventoryTick(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalInventoryComponent.ActivePlayerInventoryTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddAfterRemovingFromArkTributeInventory(UPrimalItem*,FItemNetInfo&,boo
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* AddAfterRemovingFromArkTributeInventory(void* a0, void* a1, bool a2) const
    {
        return NativeCall<UPrimalItem*, void*, void*, bool>(this, "UPrimalInventoryComponent.AddAfterRemovingFromArkTributeInventory(UPrimalItem*,FItemNetInfo&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddArkTributeItem(FItemNetInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddArkTributeItem(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalInventoryComponent.AddArkTributeItem(FItemNetInfo&,bool)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.AddCustomFolder(FString,int)
    // endereco: casamento de bytes com a build de referencia
    static void AddCustomFolder(const FString& a0, int a1)
    {
        NativeCall<void, void*, int>(nullptr, "UPrimalInventoryComponent.AddCustomFolder(FString,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void AddCustomFolder(FString* a0, int a1)
    { AddCustomFolder(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddItem(FItemNetInfo&,bool,bool,bool,FItemNetID*,bool,bool,bool,AShoot
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* AddItem(void* a0, bool a1, bool a2, bool a3, void* a4, bool a5, bool a6, bool a7, void* a8, bool a9, bool a10, bool a11, bool a12, bool a13, bool a14) const
    {
        return NativeCall<UPrimalItem*, void*, bool, bool, bool, void*, bool, bool, bool, void*, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.AddItem(FItemNetInfo&,bool,bool,bool,FItemNetID*,bool,bool,bool,AShooterCharacter*,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddItemCrafting(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void AddItemCrafting(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.AddItemCrafting(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddItemObject(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* AddItemObject(void* a0) const
    {
        return NativeCall<UPrimalItem*, void*>(this, "UPrimalInventoryComponent.AddItemObject(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddItemObjectEx(UPrimalItem*,bool,bool,bool,bool,bool,bool,AShooterCha
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* AddItemObjectEx(void* a0, bool a1, bool a2, bool a3, bool a4, bool a5, bool a6, void* a7, bool a8, void* a9, bool a10) const
    {
        return NativeCall<UPrimalItem*, void*, bool, bool, bool, bool, bool, bool, void*, bool, void*, bool>(this, "UPrimalInventoryComponent.AddItemObjectEx(UPrimalItem*,bool,bool,bool,bool,bool,bool,AShooterCharacter*,bool,UPrimalItem*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AddToCraftQueue(UPrimalItem*,AShooterPlayerController*,bool,bool,float
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void AddToCraftQueue(void* a0, void* a1, bool a2, bool a3, float a4, float a5) const
    {
        NativeCall<void, void*, void*, bool, bool, float, float>(this, "UPrimalInventoryComponent.AddToCraftQueue(UPrimalItem*,AShooterPlayerController*,bool,bool,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AddToFolders(TArray<FString,TSizedDefaultAllocator<32>>*,UPrimalItem*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToFolders(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "UPrimalInventoryComponent.AddToFolders(TArray<FString,TSizedDefaultAllocator<32>>*,UPrimalItem*,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AllowAddInventoryItem(UPrimalItem*,int*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowAddInventoryItem(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, bool, bool>(this, "UPrimalInventoryComponent.AllowAddInventoryItem(UPrimalItem*,int*,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.AllowAddInventoryItem_AnyQuantity(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowAddInventoryItem_AnyQuantity(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_AnyQuantity(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AllowAddInventoryItem_MaxQuantity(UPrimalItem*,int&,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowAddInventoryItem_MaxQuantity(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_MaxQuantity(UPrimalItem*,int&,int&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.AllowAddInventoryItem_OnlyAddAll(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowAddInventoryItem_OnlyAddAll(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.AllowAddInventoryItem_OnlyAddAll(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AllowAddingToArkTribute()
    // endereco: cache_pdb_25090264
    BrzPonteiro AllowAddingToArkTribute() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.AllowAddingToArkTribute()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=47+chamadores=2]]
    BrzPonteiro AllowBlueprintCraftingRequirement(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent.AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowCraftingResourceConsumption(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent.AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.AllowEquippingItemType(EPrimalEquipmentType::Type)
    // endereco: casamento de bytes com a build de referencia
    bool AllowEquippingItemType(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalInventoryComponent.AllowEquippingItemType(EPrimalEquipmentType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AllowOwnerStasis()
    // endereco: cache_pdb_25090264
    BrzPonteiro AllowOwnerStasis() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.AllowOwnerStasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.AttemptAddEventItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AttemptAddEventItems() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.AttemptAddEventItems()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPAccessedInventory(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPAccessedInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.BPAccessedInventory(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.BPAllowAddInventoryItem(UPrimalItem*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowAddInventoryItem(void* a0, int a1, bool a2) const
    {
        return NativeCall<bool, void*, int, bool>(this, "UPrimalInventoryComponent.BPAllowAddInventoryItem(UPrimalItem*,int,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPAllowRepairingItemInInventory(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    bool BPAllowRepairingItemInInventory(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.BPAllowRepairingItemInInventory(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPAllowUseInInventory(UPrimalItem*,bool,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowUseInInventory(void* a0, bool a1, void* a2) const
    {
        return NativeCall<bool, void*, bool, void*>(this, "UPrimalInventoryComponent.BPAllowUseInInventory(UPrimalItem*,bool,AShooterPlayerController*)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPCraftingFinishedNotification(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPCraftingFinishedNotification(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.BPCraftingFinishedNotification(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPCraftingStateChanged(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPCraftingStateChanged(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.BPCraftingStateChanged(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.BPCreateDropItemInventoryEmpty(double,TSubclassOf<APrimalStructureItem
    // endereco: casamento de bytes com a build de referencia
    APrimalStructureItemContainer* BPCreateDropItemInventoryEmpty(double a0, void* a1, void* a2, void* a3, int a4, float a5, bool a6, void* a7) const
    {
        return NativeCall<APrimalStructureItemContainer*, double, void*, void*, void*, int, float, bool, void*>(this, "UPrimalInventoryComponent.BPCreateDropItemInventoryEmpty(double,TSubclassOf<APrimalStructureItemContainer>,APrimalStructureItemContainer*,AActor*,int,float,bool,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPCreateTinkeredItem(AShooterPlayerController*,TArray<FItemNetID,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCreateTinkeredItem(void* a0, void* a1, bool a2, bool a3, float a4) const
    {
        return NativeCall<void*, void*, void*, bool, bool, float>(this, "UPrimalInventoryComponent.BPCreateTinkeredItem(AShooterPlayerController*,TArray<FItemNetID,TSizedDefaultAllocator<32>>&,bool,bool,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController*,UPrimal
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCustomRemoteInventoryAllowAddItems(void* a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController*,UPrimalItem*,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPri
    // endereco: casamento de bytes com a build de referencia
    bool BPCustomRemoteInventoryAllowRemoveItems(void* a0, void* a1, int a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, void*, int, bool, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalItem*,int,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPDropAtLocationInventoryDeposit(double,UE::Math::TVector<double>,bool
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDropAtLocationInventoryDeposit(double a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, double, void*, bool, void*>(this, "UPrimalInventoryComponent.BPDropAtLocationInventoryDeposit(double,UE::Math::TVector<double>,bool,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPDropForceLocationInventoryDeposit(double,int,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDropForceLocationInventoryDeposit(double a0, int a1, void* a2, int a3) const
    {
        return NativeCall<void*, double, int, void*, int>(this, "UPrimalInventoryComponent.BPDropForceLocationInventoryDeposit(double,int,UE::Math::TVector<double>,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPDropInventoryDeposit(double,int,bool,UE::Math::TVector<double>,bool,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDropInventoryDeposit(double a0, int a1, bool a2, void* a3, bool a4, void* a5, float a6) const
    {
        return NativeCall<void*, double, int, bool, void*, bool, void*, float>(this, "UPrimalInventoryComponent.BPDropInventoryDeposit(double,int,bool,UE::Math::TVector<double>,bool,TSubclassOf<APrimalStructureItemContainer>,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.BPDropInventoryDeposit_Get(double,int,bool,UE::Math::TVector<double>,b
    // endereco: casamento de bytes com a build de referencia
    APrimalStructureItemContainer* BPDropInventoryDeposit_Get(double a0, int a1, bool a2, void* a3, bool a4, void* a5) const
    {
        return NativeCall<APrimalStructureItemContainer*, double, int, bool, void*, bool, void*>(this, "UPrimalInventoryComponent.BPDropInventoryDeposit_Get(double,int,bool,UE::Math::TVector<double>,bool,TSubclassOf<APrimalStructureItemContainer>)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPFindItemWithID(int,int)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPFindItemWithID(int a0, int a1) const
    {
        return NativeCall<UObject*, int, int>(this, "UPrimalInventoryComponent.BPFindItemWithID(int,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPGetExtraItemDisplay(bool&,FString&,FString&,UTexture2D*&,UMaterialIn
    // endereco: casamento de bytes com a build de referencia
    void BPGetExtraItemDisplay(void* a0, const FString& a1, const FString& a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "UPrimalInventoryComponent.BPGetExtraItemDisplay(bool&,FString&,FString&,UTexture2D*&,UMaterialInterface*&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPGetExtraItemDisplay(void* a0, FString* a1, FString* a2, void* a3, void* a4) const
    { BPGetExtraItemDisplay(a0, *a1, *a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPGetExtraItemRepairResourceRequirements(UPrimalItem*,TArray<int,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetExtraItemRepairResourceRequirements(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent.BPGetExtraItemRepairResourceRequirements(UPrimalItem*,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPGetExtraItemRepairResourceRequirements_Implementation(UPrimalItem*,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetExtraItemRepairResourceRequirements_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent.BPGetExtraItemRepairResourceRequirements_Implementation(UPrimalItem*,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPGetItemOfTemplate(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetItemOfTemplate(void* a0, bool a1, bool a2, bool a3, bool a4, bool a5, bool a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<UObject*, void*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.BPGetItemOfTemplate(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPIncrementItemTemplateQuantity(TSubclassOf<UPrimalItem>,int,bool,bool
    // endereco: casamento de bytes com a build de referencia
    int BPIncrementItemTemplateQuantity(void* a0, int a1, bool a2, bool a3, bool a4, bool a5, bool a6, bool a7, void* a8, bool a9, bool a10) const
    {
        return NativeCall<int, void*, int, bool, bool, bool, bool, bool, bool, void*, bool, bool>(this, "UPrimalInventoryComponent.BPIncrementItemTemplateQuantity(TSubclassOf<UPrimalItem>,int,bool,bool,bool,bool,bool,bool,UPrimalItem*,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPInitializeInventory()
    // endereco: casamento de bytes com a build de referencia
    void BPInitializeInventory() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.BPInitializeInventory()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPInventoryDrawItemIcon(UPrimalItem*,UCanvas*,UE::Math::TVector2<doubl
    // endereco: casamento de bytes com a build de referencia
    void BPInventoryDrawItemIcon(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5) const
    {
        NativeCall<void, void*, void*, void*, void*, bool, void*>(this, "UPrimalInventoryComponent.BPInventoryDrawItemIcon(UPrimalItem*,UCanvas*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,bool,FLinearColor&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPInventoryRefresh()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPInventoryRefresh() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.BPInventoryRefresh()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPModifyCustomAutoDecreaseDurability(UPrimalItem*,float)
    // endereco: casamento de bytes com a build de referencia
    float BPModifyCustomAutoDecreaseDurability(void* a0, float a1) const
    {
        return NativeCall<float, void*, float>(this, "UPrimalInventoryComponent.BPModifyCustomAutoDecreaseDurability(UPrimalItem*,float)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPNotifyItemAdded(UPrimalItem*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyItemAdded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalInventoryComponent.BPNotifyItemAdded(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPNotifyItemQuantityUpdated(UPrimalItem*,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyItemQuantityUpdated(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalInventoryComponent.BPNotifyItemQuantityUpdated(UPrimalItem*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPNotifyItemRemoved(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyItemRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.BPNotifyItemRemoved(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPOnTransferAll(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnTransferAll(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.BPOnTransferAll(UPrimalInventoryComponent*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.BPOverrideDropItemTransform(UE::Math::TVector<double>&,UE::Math::TRota
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOverrideDropItemTransform(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalInventoryComponent.BPOverrideDropItemTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPPlayerPreventInventoryViewTrace(APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPPlayerPreventInventoryViewTrace(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.BPPlayerPreventInventoryViewTrace(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPPreInitDefaultInventory()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPreInitDefaultInventory() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.BPPreInitDefaultInventory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPPreventEquipItem(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPPreventEquipItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.BPPreventEquipItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPPreventEquipItemType(EPrimalEquipmentType::Type)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPPreventEquipItemType(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalInventoryComponent.BPPreventEquipItemType(EPrimalEquipmentType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem(AShooterPlayerController*,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool BPRemoteInventoryAllowAddItem(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem_SpecificQuantity(AShooterPlayerControlle
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPRemoteInventoryAllowAddItem_SpecificQuantity(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItem_SpecificQuantity(AShooterPlayerController*,UPrimalItem*,int&,int&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPRemoteInventoryAllowAddItems(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPRemoteInventoryAllowAddItems(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowAddItems(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalIte
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPRemoteInventoryAllowRemoveItems(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPRemoteInventoryAllowViewing(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPRemoteInventoryAllowViewing(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowViewing(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPRemoteInventoryGetMaxVisibleSlots(int,AShooterPlayerController*,bool
    // endereco: casamento de bytes com a build de referencia
    int BPRemoteInventoryGetMaxVisibleSlots(int a0, void* a1, bool a2) const
    {
        return NativeCall<int, int, void*, bool>(this, "UPrimalInventoryComponent.BPRemoteInventoryGetMaxVisibleSlots(int,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.BPRequestedInventoryItems(AShooterPlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=2]]
    void BPRequestedInventoryItems(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.BPRequestedInventoryItems(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.BPUseCraftQueueForItem(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPUseCraftQueueForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.BPUseCraftQueueForItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CanAccessWirelessResources(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool CanAccessWirelessResources(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.CanAccessWirelessResources(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CanEquipItem(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanEquipItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.CanEquipItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.CanEquipItems()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanEquipItems() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.CanEquipItems()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.CanGrindItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanGrindItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.CanGrindItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CanGrindItems(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanGrindItems(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.CanGrindItems(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CanInventoryItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanInventoryItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.CanInventoryItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.CanInventoryItems()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanInventoryItems() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.CanInventoryItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.CheckAllowSharedBlueprintCrafting(UPrimalItem*,AShooterPlayerControlle
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckAllowSharedBlueprintCrafting(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalInventoryComponent.CheckAllowSharedBlueprintCrafting(UPrimalItem*,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CheckForAutoCraftBlueprints()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void CheckForAutoCraftBlueprints() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.CheckForAutoCraftBlueprints()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CheckFullInventoryConditionForItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CheckFullInventoryConditionForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.CheckFullInventoryConditionForItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CheckRefreshDefaultInventoryItems()
    // endereco: casamento de bytes com a build de referencia
    void CheckRefreshDefaultInventoryItems() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.CheckRefreshDefaultInventoryItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.CheckReplenishSlotIndex(int,TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    void CheckReplenishSlotIndex(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UPrimalInventoryComponent.CheckReplenishSlotIndex(int,TSubclassOf<UPrimalItem>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.CleanupDirtyItem(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanupDirtyItem(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalInventoryComponent.CleanupDirtyItem(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClearCraftQueue(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClearCraftQueue(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClearCraftQueue(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ClientFinishReceivingItems(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=22]]
    BrzPonteiro ClientFinishReceivingItems(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalInventoryComponent.ClientFinishReceivingItems(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientItemMessageNotification(FItemNetID,EPrimalItemMessage::Type)
    // endereco: casamento de bytes com a build de referencia
    void ClientItemMessageNotification(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UPrimalInventoryComponent.ClientItemMessageNotification(FItemNetID,EPrimalItemMessage::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientItemMessageNotification_Implementation(FItemNetID,EPrimalItemMes
    // endereco: casamento de bytes com a build de referencia
    void ClientItemMessageNotification_Implementation(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UPrimalInventoryComponent.ClientItemMessageNotification_Implementation(FItemNetID,EPrimalItemMessage::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "UPrimalInventoryComponent.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.ClientNotifyCreatedTinkeredItem(bool,FItemNetID&)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyCreatedTinkeredItem(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "UPrimalInventoryComponent.ClientNotifyCreatedTinkeredItem(bool,FItemNetID&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ClientNotifyCreatedTinkeredItem_Implementation(bool,FItemNetID&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientNotifyCreatedTinkeredItem_Implementation(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalInventoryComponent.ClientNotifyCreatedTinkeredItem_Implementation(bool,FItemNetID&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientOnArkTributeItemsAdded_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientOnArkTributeItemsAdded_Implementation() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientStartReceivingItems(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientStartReceivingItems(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientStartReceivingItems(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientUpdateFreeCraftingMode(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateFreeCraftingMode(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ClientUpdateFreeCraftingMode_Implementation(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientUpdateFreeCraftingMode_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ConsumeArmorDurability(float,bool,EPrimalEquipmentType::Type,float)
    // endereco: casamento de bytes com a build de referencia
    void ConsumeArmorDurability(float a0, bool a1, int a2, float a3) const
    {
        NativeCall<void, float, bool, int, float>(this, "UPrimalInventoryComponent.ConsumeArmorDurability(float,bool,EPrimalEquipmentType::Type,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ConsumeResources(TArray<FCraftingResourceRequirement,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConsumeResources(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.ConsumeResources(TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.ConsumeWirelessResources(TSubclassOf<UPrimalItem>,int,bool,TSubclassOf
    // endereco: casamento de bytes com a build de referencia
    int ConsumeWirelessResources(void* a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<int, void*, int, bool, void*>(this, "UPrimalInventoryComponent.ConsumeWirelessResources(TSubclassOf<UPrimalItem>,int,bool,TSubclassOf<UPrimalItem>)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem>,TSubclassOf<AActor
    // endereco: casamento de bytes com a build de referencia
    AActor* CraftedBlueprintSpawnActor(void* a0, void* a1, int a2) const
    {
        return NativeCall<AActor*, void*, void*, int>(this, "UPrimalInventoryComponent.CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem>,TSubclassOf<AActor>,int)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.DeleteItemFromCustomFolder(AShooterPlayerController*,FString,FItemNetI
    // endereco: casamento de bytes com a build de referencia
    static void DeleteItemFromCustomFolder(void* a0, const FString& a1, unsigned long long a2, int a3)
    {
        NativeCall<void, void*, void*, unsigned long long, int>(nullptr, "UPrimalInventoryComponent.DeleteItemFromCustomFolder(AShooterPlayerController*,FString,FItemNetID,int)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void DeleteItemFromCustomFolder(void* a0, FString* a1, unsigned long long a2, int a3)
    { DeleteItemFromCustomFolder(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.DeserializeInventoryData(AShooterPlayerController*,TArray<unsignedchar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DeserializeInventoryData(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent.DeserializeInventoryData(AShooterPlayerController*,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.DropInventoryDeposit(double,bool,bool,TSubclassOf<APrimalStructureItem
    // endereco: casamento de bytes com a build de referencia
    bool DropInventoryDeposit(double a0, bool a1, bool a2, void* a3, void* a4, void* a5, void* a6, const FString& a7, const FString& a8, unsigned int a9, float a10, bool a11, int a12, bool a13, void* a14, bool a15, bool a16, bool a17, bool a18, bool a19) const
    {
        return NativeCall<bool, double, bool, bool, void**, void*, void*, void*, void*, void*, unsigned int, float, bool, int, bool, void*, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.DropInventoryDeposit(double,bool,bool,TSubclassOf<APrimalStructureItemContainer>,APrimalStructureItemContainer*,APrimalStructureItemContainer**,AActor*,FString,FString,unsigned__int64,float,bool,int,bool,UE::Math::TVector<double>&,bool,bool,bool,bool,bool)", a0, a1, a2, &a3, a4, a5, a6, const_cast<FString*>(&a7), const_cast<FString*>(&a8), a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool DropInventoryDeposit(double a0, bool a1, bool a2, void* a3, void* a4, void* a5, void* a6, FString* a7, FString* a8, unsigned int a9, float a10, bool a11, int a12, bool a13, void* a14, bool a15, bool a16, bool a17, bool a18, bool a19) const
    { return DropInventoryDeposit(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.DropItem(FItemNetInfo&,bool,UE::Math::TVector<double>&,UE::Math::TRota
    // endereco: casamento de bytes com a build de referencia
    void DropItem(void* a0, bool a1, void* a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        NativeCall<void, void*, bool, void*, void*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.DropItem(FItemNetInfo&,bool,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.DropNotReadyInventoryDeposit(double)
    // endereco: casamento de bytes com a build de referencia
    bool DropNotReadyInventoryDeposit(double a0) const
    {
        return NativeCall<bool, double>(this, "UPrimalInventoryComponent.DropNotReadyInventoryDeposit(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.EjectItem(FItemNetID&,bool,bool,bool,UE::Math::TVector<double>&,bool,T
    // endereco: casamento de bytes com a build de referencia
    ADroppedItem* EjectItem(void* a0, bool a1, bool a2, bool a3, void* a4, bool a5, void* a6, bool a7, int a8) const
    {
        return NativeCall<ADroppedItem*, void*, bool, bool, bool, void*, bool, void*, bool, int>(this, "UPrimalInventoryComponent.EjectItem(FItemNetID&,bool,bool,bool,UE::Math::TVector<double>&,bool,TSubclassOf<ADroppedItem>,bool,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.EnableInventory(bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableInventory(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.EnableInventory(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.FindAllItemsOfType(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,b
    // endereco: casamento de bytes com a build de referencia
    void FindAllItemsOfType(void* retorno, void* a0, bool a1, bool a2, bool a3, bool a4, bool a5, bool a6, bool a7) const
    {
        NativeCall<void, void*, void*, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.FindAllItemsOfType(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,bool,bool)", retorno, a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.FindArkTributeItem(FItemNetID&)
    // endereco: cache_pdb_25090264
    UPrimalItem* FindArkTributeItem(void* a0) const
    {
        return NativeCall<UPrimalItem*, void*>(this, "UPrimalInventoryComponent.FindArkTributeItem(FItemNetID&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.FindArkTributeItemBP(FItemNetID)
    // endereco: cache_pdb_25090264
    BrzPonteiro FindArkTributeItemBP(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalInventoryComponent.FindArkTributeItemBP(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.FindBrushColorItem(short)
    // endereco: casamento de bytes com a build de referencia
    void FindBrushColorItem(void* retorno, short a0) const
    {
        NativeCall<void, void*, short>(this, "UPrimalInventoryComponent.FindBrushColorItem(short)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem>,boo
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* FindInventoryStackableItemCompareQuantity(void* a0, bool a1, void* a2) const
    {
        return NativeCall<UPrimalItem*, void*, bool, void*>(this, "UPrimalInventoryComponent.FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem>,bool,UPrimalItem*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.FindItem(FItemNetID&,bool,bool,int*)
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* FindItem(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<UPrimalItem*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent.FindItem(FItemNetID&,bool,bool,int*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.FinishedLoadingArkItems()
    // endereco: cache_pdb_25090264
    BrzPonteiro FinishedLoadingArkItems() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.FinishedLoadingArkItems()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.ForceUpdateWirelessResources(bool)
    // endereco: cache_pdb_25090264
    void ForceUpdateWirelessResources(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.ForceUpdateWirelessResources(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GenerateCrateItems(float,float,int,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    bool GenerateCrateItems(float a0, float a1, int a2, float a3, float a4, float a5) const
    {
        return NativeCall<bool, float, float, int, float, float, float>(this, "UPrimalInventoryComponent.GenerateCrateItems(float,float,int,float,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // jogo_confirmou_dump
    //   UPrimalInventoryComponent.GenerateCustomCrateItems(TSubclassOf<UObject>,TArray<FSupplyCrateItemS
    // endereco: casamento de bytes com a build de referencia
    static long long GenerateCustomCrateItems(void* a0, void* a1, float a2, float a3, float a4, bool a5, void* a6, float a7, float a8, int a9, float a10, float a11, float a12, bool a13)
    {
        return NativeCall<long long, void*, void*, float, float, float, bool, void*, float, float, int, float, float, float, bool>(nullptr, "UPrimalInventoryComponent.GenerateCustomCrateItems(TSubclassOf<UObject>,TArray<FSupplyCrateItemSet,TSizedDefaultAllocator<32>>,float,float,float,bool,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,float,float,int,float,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetAbsoluteMaxInventoryItems(bool)
    // endereco: cache_pdb_25090264
    int GetAbsoluteMaxInventoryItems(bool a0) const
    {
        return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetAbsoluteMaxInventoryItems(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.GetAvailableCraftingResourceMap(TMap<TSubclassOf<UPrimalItem>,int,FDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvailableCraftingResourceMap(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "UPrimalInventoryComponent.GetAvailableCraftingResourceMap(TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetCapacityForItem(TSubclassOf<UPrimalItem>,bool)
    // endereco: casamento de bytes com a build de referencia
    int GetCapacityForItem(void* a0, bool a1) const
    {
        return NativeCall<int, void*, bool>(this, "UPrimalInventoryComponent.GetCapacityForItem(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetCharacterStatusComponent()
    // endereco: casamento de bytes com a build de referencia
    UPrimalCharacterStatusComponent* GetCharacterStatusComponent() const
    {
        return NativeCall<UPrimalCharacterStatusComponent*>(this, "UPrimalInventoryComponent.GetCharacterStatusComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetCraftQueueResourceCost(TSubclassOf<UPrimalItem>,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    int GetCraftQueueResourceCost(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "UPrimalInventoryComponent.GetCraftQueueResourceCost(TSubclassOf<UPrimalItem>,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetCraftingSpeed()
    // endereco: casamento de bytes com a build de referencia
    float GetCraftingSpeed() const
    {
        return NativeCall<float>(this, "UPrimalInventoryComponent.GetCraftingSpeed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetCurrentNumInventoryItems()
    // endereco: casamento de bytes com a build de referencia
    int GetCurrentNumInventoryItems() const
    {
        return NativeCall<int>(this, "UPrimalInventoryComponent.GetCurrentNumInventoryItems()");
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.GetCustomFolderItems(FString,TArray<IDataListEntryInterface*,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    static void GetCustomFolderItems(const FString& a0, void* a1, int a2)
    {
        NativeCall<void, void*, void*, int>(nullptr, "UPrimalInventoryComponent.GetCustomFolderItems(FString,TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>*,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetCustomFolderItems(FString* a0, void* a1, int a2)
    { GetCustomFolderItems(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetCustomFolders(int)
    // endereco: casamento de bytes com a build de referencia
    void GetCustomFolders(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "UPrimalInventoryComponent.GetCustomFolders(int)", retorno, a0);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    void GetDataListEntries(void* a0, int a1, bool a2, signed char a3, void* a4, void* a5, void* a6, signed char a7, void* a8, bool a9, bool a10, bool a11, signed char a12) const
    {
        NativeCall<void, void*, int, bool, signed char, void*, void*, void*, signed char, void*, bool, bool, bool, signed char>(this, "UPrimalInventoryComponent.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetEmptySlotCount(bool)
    // endereco: casamento de bytes com a build de referencia
    int GetEmptySlotCount(bool a0) const
    {
        return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetEmptySlotCount(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetEquippedArmorRating(EPrimalEquipmentType::Type)
    // endereco: casamento de bytes com a build de referencia
    float GetEquippedArmorRating(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalInventoryComponent.GetEquippedArmorRating(EPrimalEquipmentType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetEquippedItemOfClass(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetEquippedItemOfClass(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "UPrimalInventoryComponent.GetEquippedItemOfClass(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetEquippedItemOfType(EPrimalEquipmentType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UPrimalItem* GetEquippedItemOfType(int a0) const
    {
        return NativeCall<UPrimalItem*, int>(this, "UPrimalInventoryComponent.GetEquippedItemOfType(EPrimalEquipmentType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.GetExtraFolderData(FString,TArray<UObject*,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExtraFolderData(const FString& a0, void* a1, int a2, void* a3, const FString& a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, void*>(this, "UPrimalInventoryComponent.GetExtraFolderData(FString,TArray<UObject*,TSizedDefaultAllocator<32>>&,int,UObject*,FString&)", const_cast<FString*>(&a0), a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetExtraFolderData(FString* a0, void* a1, int a2, void* a3, FString* a4) const
    { return GetExtraFolderData(*a0, a1, a2, a3, *a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetFirstUnoccupiedSlot(AShooterPlayerState*,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    int GetFirstUnoccupiedSlot(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "UPrimalInventoryComponent.GetFirstUnoccupiedSlot(AShooterPlayerState*,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetForceShowCraftablesInventoryTab()
    // endereco: casamento de bytes com a build de referencia
    bool GetForceShowCraftablesInventoryTab() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.GetForceShowCraftablesInventoryTab()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalInventoryComponent.GetGrinderSettings(int&,float&,int&)
    // endereco: casamento de bytes com a build de referencia
    void GetGrinderSettings(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UPrimalInventoryComponent.GetGrinderSettings(int&,float&,int&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetGrinderSettings_Implementation(int&,float&,int&)
    // endereco: cache_pdb_25090264
    void GetGrinderSettings_Implementation(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UPrimalInventoryComponent.GetGrinderSettings_Implementation(int&,float&,int&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetGroundLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    static bool GetGroundLocation(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, void* a6, bool a7)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool, void*, bool>(nullptr, "UPrimalInventoryComponent.GetGroundLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,APrimalStructure**,AActor*,bool,UPrimitiveComponent**,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetInventoryName(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetInventoryName(void* retorno, bool a0, bool a1) const
    {
        NativeCall<void, void*, bool, bool>(this, "UPrimalInventoryComponent.GetInventoryName(bool,bool)", retorno, a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetInventoryUpdatedFrame()
    // endereco: cache_pdb_25090264
    int GetInventoryUpdatedFrame() const
    {
        return NativeCall<int>(this, "UPrimalInventoryComponent.GetInventoryUpdatedFrame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetInventoryWeight()
    // endereco: casamento de bytes com a build de referencia
    float GetInventoryWeight() const
    {
        return NativeCall<float>(this, "UPrimalInventoryComponent.GetInventoryWeight()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetItemInSlot(int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UObject* GetItemInSlot(int a0, bool a1) const
    {
        return NativeCall<UObject*, int, bool>(this, "UPrimalInventoryComponent.GetItemInSlot(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetItemOfTemplate(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,UP
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* GetItemOfTemplate(void* a0, bool a1, bool a2, bool a3, bool a4, bool a5, void* a6, bool a7, void* a8, bool a9, bool a10, bool a11, bool a12, void* a13, void* a14) const
    {
        return NativeCall<UPrimalItem*, void**, bool, bool, bool, bool, bool, void*, bool, void*, bool, bool, bool, bool, void*, void**>(this, "UPrimalInventoryComponent.GetItemOfTemplate(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,UPrimalItem*,bool,int*,bool,bool,bool,bool,UPrimalItem*,TSubclassOf<UPrimalItem>)", &a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, &a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetItemTemplateQuantity(TSubclassOf<UPrimalItem>,UPrimalItem*,bool,boo
    // endereco: casamento de bytes com a build de referencia
    int GetItemTemplateQuantity(void* a0, void* a1, bool a2, bool a3, bool a4, bool a5, void* a6) const
    {
        return NativeCall<int, void**, void*, bool, bool, bool, bool, void**>(this, "UPrimalInventoryComponent.GetItemTemplateQuantity(TSubclassOf<UPrimalItem>,UPrimalItem*,bool,bool,bool,bool,TSubclassOf<UPrimalItem>)", &a0, a1, a2, a3, a4, a5, &a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetItemWeightMultiplier(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    float GetItemWeightMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalInventoryComponent.GetItemWeightMultiplier(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.GetItemsToSerialize(bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefault
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetItemsToSerialize(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalInventoryComponent.GetItemsToSerialize(bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetLastItemSlot()
    // endereco: cache_pdb_25090264
    UPrimalItem* GetLastItemSlot() const
    {
        return NativeCall<UPrimalItem*>(this, "UPrimalInventoryComponent.GetLastItemSlot()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetLastItemSlotIndex()
    // endereco: cache_pdb_25090264
    int GetLastItemSlotIndex() const
    {
        return NativeCall<int>(this, "UPrimalInventoryComponent.GetLastItemSlotIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.GetLatestItemClassUseTime(TSubclassOf<UPrimalItem>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=194]]
    BrzPonteiro GetLatestItemClassUseTime(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.GetLatestItemClassUseTime(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetLocalOwnerHUD()
    // endereco: casamento de bytes com a build de referencia
    AShooterHUD* GetLocalOwnerHUD() const
    {
        return NativeCall<AShooterHUD*>(this, "UPrimalInventoryComponent.GetLocalOwnerHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetMaxInventoryItems(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetMaxInventoryItems(bool a0) const
    {
        return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetMaxInventoryItems(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "UPrimalInventoryComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetNextAvailableAccessorySlot()
    // endereco: casamento de bytes com a build de referencia
    unsigned char GetNextAvailableAccessorySlot() const
    {
        return NativeCall<unsigned char>(this, "UPrimalInventoryComponent.GetNextAvailableAccessorySlot()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetNumItems(bool,bool)
    // endereco: cache_pdb_25090264
    int GetNumItems(bool a0, bool a1) const
    {
        return NativeCall<int, bool, bool>(this, "UPrimalInventoryComponent.GetNumItems(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetNumNonVanityItems()
    // endereco: cache_pdb_25090264
    int GetNumNonVanityItems() const
    {
        return NativeCall<int>(this, "UPrimalInventoryComponent.GetNumNonVanityItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetNumOfDefaultItemsBlacklisted()
    // endereco: casamento de bytes com a build de referencia
    int GetNumOfDefaultItemsBlacklisted() const
    {
        return NativeCall<int>(this, "UPrimalInventoryComponent.GetNumOfDefaultItemsBlacklisted()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetNumVanityItems()
    // endereco: cache_pdb_25090264
    int GetNumVanityItems() const
    {
        return NativeCall<int>(this, "UPrimalInventoryComponent.GetNumVanityItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetOwnerController()
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerController* GetOwnerController() const
    {
        return NativeCall<AShooterPlayerController*>(this, "UPrimalInventoryComponent.GetOwnerController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.GetRole()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetRole() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.GetRole()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetSpoilingTimeMultiplier(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    float GetSpoilingTimeMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalInventoryComponent.GetSpoilingTimeMultiplier(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    float GetTotalDurabilityOfTemplate(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalInventoryComponent.GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GetTotalEquippedItemStat(EPrimalItemStat::Type)
    // endereco: casamento de bytes com a build de referencia
    float GetTotalEquippedItemStat(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalInventoryComponent.GetTotalEquippedItemStat(EPrimalItemStat::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.GetWirelessItemQty(TSubclassOf<UPrimalItem>,bool,TSubclassOf<UPrimalIt
    // endereco: casamento de bytes com a build de referencia
    int GetWirelessItemQty(void* a0, bool a1, void* a2) const
    {
        return NativeCall<int, void*, bool, void*>(this, "UPrimalInventoryComponent.GetWirelessItemQty(TSubclassOf<UPrimalItem>,bool,TSubclassOf<UPrimalItem>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.GiveInitialItems(bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveInitialItems(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.GiveInitialItems(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.GrindItem(FItemNetID,bool,AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GrindItem(unsigned long long a0, bool a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, bool, void*>(this, "UPrimalInventoryComponent.GrindItem(FItemNetID,bool,AShooterPlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.HandleLootItemMilestones(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleLootItemMilestones(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.HandleLootItemMilestones(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.HasItemOfSameType(UClass*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasItemOfSameType(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.HasItemOfSameType(UClass*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.HasItemsEquipped(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasItemsEquipped(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, bool, bool>(this, "UPrimalInventoryComponent.HasItemsEquipped(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&,bool,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.HasResources(TArray<FCraftingResourceRequirement,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasResources(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.HasResources(TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.HideEquippedItemTypeInStatsPanel(EPrimalEquipmentType::Type)
    // endereco: cache_pdb_25090264
    BrzPonteiro HideEquippedItemTypeInStatsPanel(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalInventoryComponent.HideEquippedItemTypeInStatsPanel(EPrimalEquipmentType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.ImpersonateOwnerClass()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UClass* ImpersonateOwnerClass() const
    {
        return NativeCall<UClass*>(this, "UPrimalInventoryComponent.ImpersonateOwnerClass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.IncreaseAbsoluteMaxInventoryItems(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro IncreaseAbsoluteMaxInventoryItems(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalInventoryComponent.IncreaseAbsoluteMaxInventoryItems(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IncrementArkTributeItemQuantity(UPrimalItem*,UPrimalItem**)
    // endereco: casamento de bytes com a build de referencia
    bool IncrementArkTributeItemQuantity(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalInventoryComponent.IncrementArkTributeItemQuantity(UPrimalItem*,UPrimalItem**)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem>,int,bool,bool,U
    // endereco: casamento de bytes com a build de referencia
    int IncrementItemTemplateQuantity(void* a0, int a1, bool a2, bool a3, void* a4, void* a5, bool a6, bool a7, bool a8, bool a9, bool a10, bool a11, bool a12, bool a13, bool a14, bool a15, void* a16) const
    {
        return NativeCall<int, void**, int, bool, bool, void*, void*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, void**>(this, "UPrimalInventoryComponent.IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem>,int,bool,bool,UPrimalItem**,UPrimalItem**,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,TSubclassOf<UPrimalItem>)", &a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, &a16);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.InitDefaultInventory()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=68]]
    void InitDefaultInventory() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.InitDefaultInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.InitializeInventory()
    // endereco: casamento de bytes com a build de referencia
    void InitializeInventory() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.InitializeInventory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.InventoryCustomFilter(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InventoryCustomFilter(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalInventoryComponent.InventoryCustomFilter(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.InventoryCustomSortPredicate(UPrimalItem*,UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool InventoryCustomSortPredicate(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalInventoryComponent.InventoryCustomSortPredicate(UPrimalItem*,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.InventoryRefresh()
    // endereco: casamento de bytes com a build de referencia
    void InventoryRefresh() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.InventoryRefresh()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.InventoryViewersPlayLocalSound(USoundBase*,bool)
    // endereco: casamento de bytes com a build de referencia
    void InventoryViewersPlayLocalSound(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalInventoryComponent.InventoryViewersPlayLocalSound(USoundBase*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.InventoryViewersStopLocalSound(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    void InventoryViewersStopLocalSound(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.InventoryViewersStopLocalSound(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsAllowedInventoryAccess(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsAllowedInventoryAccess(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.IsAllowedInventoryAccess(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsAtMaxInventoryItems()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=71]]
    bool IsAtMaxInventoryItems() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.IsAtMaxInventoryItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsCraftingAllowed(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=64]]
    bool IsCraftingAllowed(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.IsCraftingAllowed(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.IsItemInCurrentFolderPath(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsItemInCurrentFolderPath(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UPrimalInventoryComponent.IsItemInCurrentFolderPath(UPrimalItem*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.IsItemOnCosmeticFilter(UPrimalItem*,EPrimalCustomCosmeticType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsItemOnCosmeticFilter(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent.IsItemOnCosmeticFilter(UPrimalItem*,EPrimalCustomCosmeticType::Type)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.IsItemSkin(UPrimalItem*)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsItemSkin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.IsItemSkin(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsLocal()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=117]]
    bool IsLocal() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsLocalToPlayer(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsLocalToPlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.IsLocalToPlayer(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsOnCraftRequestCooldown()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=128+grafo=3/3]]
    bool IsOnCraftRequestCooldown() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOnCraftRequestCooldown()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsOwnedByPlayer()
    // endereco: casamento de bytes com a build de referencia
    bool IsOwnedByPlayer() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOwnedByPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsRepairingAllowed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    bool IsRepairingAllowed() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.IsRepairingAllowed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsServerCustomFolder(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsServerCustomFolder(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalInventoryComponent.IsServerCustomFolder(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.IsValidCraftingResource(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    BrzPonteiro IsValidCraftingResource(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.IsValidCraftingResource(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.IsValidWirelessConnection(UPrimalInventoryComponent*,UPrimalWirelessEx
    // endereco: casamento de bytes com a build de referencia
    UPrimalWirelessExchangeData* IsValidWirelessConnection(void* a0, void* a1) const
    {
        return NativeCall<UPrimalWirelessExchangeData*, void*, void*>(this, "UPrimalInventoryComponent.IsValidWirelessConnection(UPrimalInventoryComponent*,UPrimalWirelessExchangeData*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.LoadAdditionalStructureEngrams()
    // endereco: casamento de bytes com a build de referencia
    bool LoadAdditionalStructureEngrams() const
    {
        return NativeCall<bool>(this, "UPrimalInventoryComponent.LoadAdditionalStructureEngrams()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.LoadArkTributeItems(TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadArkTributeItems(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "UPrimalInventoryComponent.LoadArkTributeItems(TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.LocalUseItemSlot(int,bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=40]]
    void LocalUseItemSlot(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "UPrimalInventoryComponent.LocalUseItemSlot(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.LocalUseItemSlotAfterHold(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro LocalUseItemSlotAfterHold(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalInventoryComponent.LocalUseItemSlotAfterHold(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.MulticastUpdateNearbyWirelessCrafting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void MulticastUpdateNearbyWirelessCrafting() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.MulticastUpdateNearbyWirelessCrafting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.MulticastUpdateNearbyWirelessCrafting_Implementation()
    // endereco: cache_pdb_25090264
    void MulticastUpdateNearbyWirelessCrafting_Implementation() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.MulticastUpdateNearbyWirelessCrafting_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.NotifyClientItemArkTributeStatusChanged(UPrimalItem*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyClientItemArkTributeStatusChanged(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientItemArkTributeStatusChanged(UPrimalItem*,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.NotifyClientsDurabilityChange(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyClientsDurabilityChange(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalInventoryComponent.NotifyClientsDurabilityChange(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.NotifyClientsItemStatus(UPrimalItem*,bool,bool,bool,bool,bool,UPrimalI
    // endereco: casamento de bytes com a build de referencia
    void NotifyClientsItemStatus(void* a0, bool a1, bool a2, bool a3, bool a4, bool a5, void* a6, void* a7, bool a8, bool a9, bool a10, bool a11) const
    {
        NativeCall<void, void*, bool, bool, bool, bool, bool, void*, void*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientsItemStatus(UPrimalItem*,bool,bool,bool,bool,bool,UPrimalItem*,FItemNetID*,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.NotifyCraftedItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyCraftedItem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.NotifyCraftedItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem>,int)
    // endereco: casamento de bytes com a build de referencia
    void NotifyCraftingItemConsumption(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalInventoryComponent.NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.NotifyCreatedTinkeredItem(bool,UPrimalItem*,UPrimalInventoryComponent*
    // endereco: casamento de bytes com a build de referencia
    void NotifyCreatedTinkeredItem(bool a0, void* a1, void* a2) const
    {
        NativeCall<void, bool, void*, void*>(this, "UPrimalInventoryComponent.NotifyCreatedTinkeredItem(bool,UPrimalItem*,UPrimalInventoryComponent*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.NotifyItemAdded(UPrimalItem*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemAdded(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "UPrimalInventoryComponent.NotifyItemAdded(UPrimalItem*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.NotifyItemQuantityUpdated(UPrimalItem*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemQuantityUpdated(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "UPrimalInventoryComponent.NotifyItemQuantityUpdated(UPrimalItem*,int,bool)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.NotifyItemRemoved(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemRemoved(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalInventoryComponent.NotifyItemRemoved(UPrimalItem*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.NotifyWirelessBlueprintSharingSupplierOfMaxCraftingsDecremented(UPrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyWirelessBlueprintSharingSupplierOfMaxCraftingsDecremented(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalInventoryComponent.NotifyWirelessBlueprintSharingSupplierOfMaxCraftingsDecremented(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.NotifyWirelessContainerBoxNameChanged()
    // endereco: casamento de bytes com a build de referencia
    void NotifyWirelessContainerBoxNameChanged() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.NotifyWirelessContainerBoxNameChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.NotifyWirelessTribeGroupInventoryRankChanged()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyWirelessTribeGroupInventoryRankChanged() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.NotifyWirelessTribeGroupInventoryRankChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OnArkTributeItemsAdded(bool,TArray<FItemNetInfo,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    void OnArkTributeItemsAdded(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "UPrimalInventoryComponent.OnArkTributeItemsAdded(bool,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OnArkTributeItemsRemoved(bool,TArray<FItemNetInfo,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    void OnArkTributeItemsRemoved(bool a0, void* a1, void* a2, int a3, const FString& a4, bool a5) const
    {
        NativeCall<void, bool, void*, void*, int, void*, bool>(this, "UPrimalInventoryComponent.OnArkTributeItemsRemoved(bool,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&,int,FString&,bool)", a0, a1, a2, a3, const_cast<FString*>(&a4), a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void OnArkTributeItemsRemoved(bool a0, void* a1, void* a2, int a3, FString* a4, bool a5) const
    { OnArkTributeItemsRemoved(a0, a1, a2, a3, *a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OnComponentCreated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    void OnComponentCreated() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentCreated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OnComponentDestroyed(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnComponentDestroyed(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.OnComponentDestroyed(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=95/95]]
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalInventoryComponent.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OnRegister()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=92+grafo=3/3]]
    void OnRegister() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.OnRegister()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.OnSortingInputsChanged()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnSortingInputsChanged() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.OnSortingInputsChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=47+chamadores=4]]
    BrzPonteiro OverrideBlueprintCraftingRequirement(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent.OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.OverrideItemMinimumUseInterval(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    float OverrideItemMinimumUseInterval(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalInventoryComponent.OverrideItemMinimumUseInterval(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.OverrideUseItem(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool OverrideUseItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalInventoryComponent.OverrideUseItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.OwnerDied()
    // endereco: cache_pdb_25090264
    BrzPonteiro OwnerDied() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.OwnerDied()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.RefreshAllCustomCosmetics()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshAllCustomCosmetics() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.RefreshAllCustomCosmetics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RefreshItemSpoilingTimes()
    // endereco: casamento de bytes com a build de referencia
    void RefreshItemSpoilingTimes() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.RefreshItemSpoilingTimes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.RefreshWirelessBlueprintSharingSupplier(APrimalStructureItemContainer*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshWirelessBlueprintSharingSupplier(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalInventoryComponent.RefreshWirelessBlueprintSharingSupplier(APrimalStructureItemContainer*,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>,TArray<FItemNetID,TSizedDefaultAllocator<32>>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoteAddItemToCustomFolder(FString&,int,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void RemoteAddItemToCustomFolder(const FString& a0, int a1, unsigned long long a2) const
    {
        NativeCall<void, void*, int, unsigned long long>(this, "UPrimalInventoryComponent.RemoteAddItemToCustomFolder(FString&,int,FItemNetID)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RemoteAddItemToCustomFolder(FString* a0, int a1, unsigned long long a2) const
    { RemoteAddItemToCustomFolder(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.RemoteDeleteCustomFolder(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoteDeleteCustomFolder(const FString& a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalInventoryComponent.RemoteDeleteCustomFolder(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoteDeleteCustomFolder(FString* a0, int a1) const
    { return RemoteDeleteCustomFolder(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.RemoteDeleteItemFromCustomFolder(AShooterPlayerController*,FString&,in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoteDeleteItemFromCustomFolder(void* a0, const FString& a1, int a2, unsigned long long a3) const
    {
        return NativeCall<void*, void*, void*, int, unsigned long long>(this, "UPrimalInventoryComponent.RemoteDeleteItemFromCustomFolder(AShooterPlayerController*,FString&,int,FItemNetID)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoteDeleteItemFromCustomFolder(void* a0, FString* a1, int a2, unsigned long long a3) const
    { return RemoteDeleteItemFromCustomFolder(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoteInventoryAllowAddItems(AShooterPlayerController*,UPrimalItem*,in
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1705+chamadores=11+grafo=9/9]]
    bool RemoteInventoryAllowAddItems(void* a0, void* a1, void* a2, bool a3, float a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, float>(this, "UPrimalInventoryComponent.RemoteInventoryAllowAddItems(AShooterPlayerController*,UPrimalItem*,int*,bool,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoteInventoryAllowCraftingItems(AShooterPlayerController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool RemoteInventoryAllowCraftingItems(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowCraftingItems(AShooterPlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalItem*
    // endereco: casamento de bytes com a build de referencia
    bool RemoteInventoryAllowRemoveItems(void* a0, void* a1, void* a2, bool a3, bool a4, float a5) const
    {
        return NativeCall<bool, void*, void*, void*, bool, bool, float>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalItem*,int*,bool,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoteInventoryAllowRepairingItems(AShooterPlayerController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool RemoteInventoryAllowRepairingItems(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRepairingItems(AShooterPlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoteInventoryAllowViewing(AShooterPlayerController*,float)
    // endereco: casamento de bytes com a build de referencia
    bool RemoteInventoryAllowViewing(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "UPrimalInventoryComponent.RemoteInventoryAllowViewing(AShooterPlayerController*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoveArkTributeItem(FItemNetID&,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveArkTributeItem(void* a0, unsigned int a1) const
    {
        return NativeCall<bool, void*, unsigned int>(this, "UPrimalInventoryComponent.RemoveArkTributeItem(FItemNetID&,unsignedint)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.RemoveCustomFolder(AShooterPlayerController*,FString,int)
    // endereco: casamento de bytes com a build de referencia
    static void RemoveCustomFolder(void* a0, const FString& a1, int a2)
    {
        NativeCall<void, void*, void*, int>(nullptr, "UPrimalInventoryComponent.RemoveCustomFolder(AShooterPlayerController*,FString,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void RemoveCustomFolder(void* a0, FString* a1, int a2)
    { RemoveCustomFolder(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoveItem(FItemNetID&,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveItem(void* a0, bool a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.RemoveItem(FItemNetID&,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoveItemCrafting(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveItemCrafting(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.RemoveItemCrafting(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RemoveItemSpoilingTimer(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveItemSpoilingTimer(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.RemoveItemSpoilingTimer(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.RemoveWirelessBlueprintSharingSupplier(APrimalStructureItemContainer*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=649+grafo=14/14]]
    void RemoveWirelessBlueprintSharingSupplier(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.RemoveWirelessBlueprintSharingSupplier(APrimalStructureItemContainer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.RequestAddArkTributeItem(FItemNetInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    void RequestAddArkTributeItem(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalInventoryComponent.RequestAddArkTributeItem(FItemNetInfo&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ResetCraftingTickOnUnstasis()
    // endereco: cache_pdb_25090264
    BrzPonteiro ResetCraftingTickOnUnstasis() const
    {
        return NativeCall<void*>(this, "UPrimalInventoryComponent.ResetCraftingTickOnUnstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.Serialize(FArchive&)
    // classe: a funcao mora em UActorComponent, e UPrimalInventoryComponent herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorComponent.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.SerializeInventoryData_ClassFilter(AShooterPlayerController*,bool,bool
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SerializeInventoryData_ClassFilter(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent.SerializeInventoryData_ClassFilter(AShooterPlayerController*,bool,bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.SerializeInventoryData_V1_ClassFilter(FArchive&,AShooterPlayerControll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SerializeInventoryData_V1_ClassFilter(void* a0, void* a1, bool a2, bool a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent.SerializeInventoryData_V1_ClassFilter(FArchive&,AShooterPlayerController*,bool,bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerAddFromArkTributeInventory(FItemNetID&,int)
    // endereco: casamento de bytes com a build de referencia
    bool ServerAddFromArkTributeInventory(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "UPrimalInventoryComponent.ServerAddFromArkTributeInventory(FItemNetID&,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerAddItemToSlot(FItemNetID,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerAddItemToSlot(unsigned long long a0, int a1, bool a2) const
    {
        NativeCall<void, unsigned long long, int, bool>(this, "UPrimalInventoryComponent.ServerAddItemToSlot(FItemNetID,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerAddItemToSlot_Implementation(FItemNetID,int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=169]]
    void ServerAddItemToSlot_Implementation(unsigned long long a0, int a1, bool a2) const
    {
        NativeCall<void, unsigned long long, int, bool>(this, "UPrimalInventoryComponent.ServerAddItemToSlot_Implementation(FItemNetID,int,bool)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.ServerAddToArkTributeInventory(FItemNetID&,TArray<unsigned__int64,TSiz
    // endereco: casamento de bytes com a build de referencia
    static char ServerAddToArkTributeInventory(void* a0, void* a1, void* a2)
    {
        return NativeCall<char, void*, void*, void*>(nullptr, "UPrimalInventoryComponent.ServerAddToArkTributeInventory(FItemNetID&,TArray<unsigned__int64,TSizedDefaultAllocator<32>>,FItemNetInfo*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerCloseRemoteInventory(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCloseRemoteInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.ServerCloseRemoteInventory(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerCraftItem(FItemNetID&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCraftItem(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalInventoryComponent.ServerCraftItem(FItemNetID&,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ServerCreateTinkeredItem(AShooterPlayerController*,UPrimalInventoryCom
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCreateTinkeredItem(void* a0, void* a1, void* a2, bool a3, bool a4, float a5) const
    {
        return NativeCall<void*, void*, void*, void*, bool, bool, float>(this, "UPrimalInventoryComponent.ServerCreateTinkeredItem(AShooterPlayerController*,UPrimalInventoryComponent*,TArray<FItemNetID,TSizedDefaultAllocator<32>>&,bool,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ServerCreateTinkeredItem_Implementation(AShooterPlayerController*,UPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCreateTinkeredItem_Implementation(void* a0, void* a1, void* a2, bool a3, bool a4, float a5) const
    {
        return NativeCall<void*, void*, void*, void*, bool, bool, float>(this, "UPrimalInventoryComponent.ServerCreateTinkeredItem_Implementation(AShooterPlayerController*,UPrimalInventoryComponent*,TArray<FItemNetID,TSizedDefaultAllocator<32>>&,bool,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerEquipItem(FItemNetID&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool ServerEquipItem(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalInventoryComponent.ServerEquipItem(FItemNetID&,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerForceMergeItemStack(FItemNetID,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerForceMergeItemStack(unsigned long long a0, unsigned long long a1) const
    {
        NativeCall<void, unsigned long long, unsigned long long>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack(FItemNetID,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerForceMergeItemStack_Implementation(FItemNetID,FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerForceMergeItemStack_Implementation(unsigned long long a0, unsigned long long a1) const
    {
        NativeCall<void, unsigned long long, unsigned long long>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack_Implementation(FItemNetID,FItemNetID)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerMakeRecipeItem(APrimalStructureItemContainer*,FItemNetID,TSubcla
    // endereco: casamento de bytes com a build de referencia
    void ServerMakeRecipeItem(void* a0, unsigned long long a1, void* a2, const FString& a3, const FString& a4, void* a5, void* a6) const
    {
        NativeCall<void, void*, unsigned long long, void*, void*, void*, void*, void*>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem(APrimalStructureItemContainer*,FItemNetID,TSubclassOf<UPrimalItem>,FString&,FString&,TArray<FColor,TSizedDefaultAllocator<32>>&,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>&)", a0, a1, a2, const_cast<FString*>(&a3), const_cast<FString*>(&a4), a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerMakeRecipeItem(void* a0, unsigned long long a1, void* a2, FString* a3, FString* a4, void* a5, void* a6) const
    { ServerMakeRecipeItem(a0, a1, a2, *a3, *a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer*,FIt
    // endereco: casamento de bytes com a build de referencia
    void ServerMakeRecipeItem_Implementation(void* a0, unsigned long long a1, void* a2, const FString& a3, const FString& a4, void* a5, void* a6) const
    {
        NativeCall<void, void*, unsigned long long, void*, void*, void*, void*, void*>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer*,FItemNetID,TSubclassOf<UPrimalItem>,FString&,FString&,TArray<FColor,TSizedDefaultAllocator<32>>&,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>&)", a0, a1, a2, const_cast<FString*>(&a3), const_cast<FString*>(&a4), a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerMakeRecipeItem_Implementation(void* a0, unsigned long long a1, void* a2, FString* a3, FString* a4, void* a5, void* a6) const
    { ServerMakeRecipeItem_Implementation(a0, a1, a2, *a3, *a4, a5, a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerMergeItemStack_Implementation(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerMergeItemStack_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UPrimalInventoryComponent.ServerMergeItemStack_Implementation(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerRemoveItemFromSlot(FItemNetID)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=3]]
    void ServerRemoveItemFromSlot(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerRemoveItemFromSlot_Implementation(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    void ServerRemoveItemFromSlot_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot_Implementation(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerRepairItem(FItemNetID&,AShooterPlayerController*,bool,float,floa
    // endereco: casamento de bytes com a build de referencia
    void ServerRepairItem(void* a0, void* a1, bool a2, float a3, float a4) const
    {
        NativeCall<void, void*, void*, bool, float, float>(this, "UPrimalInventoryComponent.ServerRepairItem(FItemNetID&,AShooterPlayerController*,bool,float,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerRequestItems(AShooterPlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestItems(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "UPrimalInventoryComponent.ServerRequestItems(AShooterPlayerController*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ServerRequestItems_ClassFilter(AShooterPlayerController*,bool,bool,TAr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestItems_ClassFilter(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "UPrimalInventoryComponent.ServerRequestItems_ClassFilter(AShooterPlayerController*,bool,bool,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerSelectedCustomItemAction(FItemNetID&,FName&,AShooterPlayerContro
    // endereco: casamento de bytes com a build de referencia
    void ServerSelectedCustomItemAction(void* a0, const FName& a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UPrimalInventoryComponent.ServerSelectedCustomItemAction(FItemNetID&,FName&,AShooterPlayerController*)", a0, const_cast<FName*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerSelectedCustomItemAction(void* a0, FName* a1, void* a2) const
    { ServerSelectedCustomItemAction(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerSplitItemStack(FItemNetID,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=6]]
    void ServerSplitItemStack(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack(FItemNetID,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerSplitItemStack_Implementation(FItemNetID,int)
    // endereco: cache_pdb_25090264
    void ServerSplitItemStack_Implementation(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack_Implementation(FItemNetID,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ServerUseInventoryItem(FItemNetID&,AShooterPlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUseInventoryItem(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent.ServerUseInventoryItem(FItemNetID&,AShooterPlayerController*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ServerUseItemRemoteWithItemLocal(UPrimalInventoryComponent*,FItemNetID
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUseItemRemoteWithItemLocal(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UPrimalInventoryComponent.ServerUseItemRemoteWithItemLocal(UPrimalInventoryComponent*,FItemNetID&,FItemNetID&,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.ServerUseItemWithItem(FItemNetID&,FItemNetID&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUseItemWithItem(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalInventoryComponent.ServerUseItemWithItem(FItemNetID&,FItemNetID&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.ServerViewRemoteInventory(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    void ServerViewRemoteInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.ServerViewRemoteInventory(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.SetCraftingEnabled(bool)
    // endereco: cache_pdb_25090264
    void SetCraftingEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalInventoryComponent.SetCraftingEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.SetEquippedItemsOwnerNoSee(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=219]]
    void SetEquippedItemsOwnerNoSee(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.SetEquippedItemsOwnerNoSee(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.SetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)
    // endereco: cache_pdb_25090264
    void SetFirstPersonMasterPoseComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.SetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.SetNextItemConsumptionID(FItemNetID)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro SetNextItemConsumptionID(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.SetNextItemConsumptionID_Implementation(FItemNetID)
    // endereco: cache_pdb_25090264
    void SetNextItemConsumptionID_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID_Implementation(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.SetNextItemSpoilingID(FItemNetID)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetNextItemSpoilingID(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.SetNextItemSpoilingID_Implementation(FItemNetID)
    // endereco: cache_pdb_25090264
    void SetNextItemSpoilingID_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID_Implementation(FItemNetID)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.SetStructureCraftingItemSpeedModifier(float)
    // endereco: casamento de bytes com a build de referencia
    void SetStructureCraftingItemSpeedModifier(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalInventoryComponent.SetStructureCraftingItemSpeedModifier(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.SortItemList(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortItemList(void* a0, signed char a1) const
    {
        return NativeCall<void*, void*, signed char>(this, "UPrimalInventoryComponent.SortItemList(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,signedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.SplitItemStack(FItemNetID,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SplitItemStack(unsigned long long a0, int a1, bool a2) const
    {
        return NativeCall<void*, unsigned long long, int, bool>(this, "UPrimalInventoryComponent.SplitItemStack(FItemNetID,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.StaticDropItem(AActor*,FItemNetInfo&,TSubclassOf<ADroppedItem>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    static ADroppedItem* StaticDropItem(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10, void* a11, void* a12, void* a13, float a14)
    {
        return NativeCall<ADroppedItem*, void*, void*, void*, void*, bool, void*, void*, bool, bool, bool, bool, void*, void*, void*, float>(nullptr, "UPrimalInventoryComponent.StaticDropItem(AActor*,FItemNetInfo&,TSubclassOf<ADroppedItem>,UE::Math::TRotator<double>&,bool,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool,bool,bool,UStaticMesh*,UE::Math::TVector<double>&,UMaterialInterface*,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // jogo_confirmou_dump
    //   UPrimalInventoryComponent.StaticDropNewItem(AActor*,TSubclassOf<UPrimalItem>,float,bool,int,bool
    // endereco: casamento de bytes com a build de referencia
    static ADroppedItem* StaticDropNewItem(void* a0, void* a1, float a2, bool a3, int a4, bool a5, void* a6, void* a7, bool a8, void* a9, void* a10, bool a11, bool a12, bool a13, bool a14, void* a15, void* a16, void* a17, float a18)
    {
        return NativeCall<ADroppedItem*, void*, void*, float, bool, int, bool, void*, void*, bool, void*, void*, bool, bool, bool, bool, void*, void*, void*, float>(nullptr, "UPrimalInventoryComponent.StaticDropNewItem(AActor*,TSubclassOf<UPrimalItem>,float,bool,int,bool,TSubclassOf<ADroppedItem>,UE::Math::TRotator<double>&,bool,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool,bool,bool,UStaticMesh*,UE::Math::TVector<double>,UMaterialInterface*,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.StaticDropNewItemWithInfo(AActor*,FItemNetInfo&,TSubclassOf<ADroppedIt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticDropNewItemWithInfo(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10, void* a11, void* a12, void* a13, float a14) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, void*, void*, bool, bool, bool, bool, void*, void*, void*, float>(this, "UPrimalInventoryComponent.StaticDropNewItemWithInfo(AActor*,FItemNetInfo&,TSubclassOf<ADroppedItem>,UE::Math::TRotator<double>&,bool,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool,bool,bool,UStaticMesh*,UE::Math::TVector<double>,UMaterialInterface*,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.StaticRegisterNativesUPrimalInventoryComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesUPrimalInventoryComponent()
    {
        NativeCall<void>(nullptr, "UPrimalInventoryComponent.StaticRegisterNativesUPrimalInventoryComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.StopAllCraftingRepairing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=99]]
    void StopAllCraftingRepairing() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.StopAllCraftingRepairing()");
    }

    // dump_sobre_sdk_287a0
    //   UPrimalInventoryComponent.SwapCustomFolder(FString,FString,int)
    // endereco: casamento de bytes com a build de referencia
    static void SwapCustomFolder(const FString& a0, const FString& a1, int a2)
    {
        NativeCall<void, void*, void*, int>(nullptr, "UPrimalInventoryComponent.SwapCustomFolder(FString,FString,int)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SwapCustomFolder(FString* a0, FString* a1, int a2)
    { SwapCustomFolder(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.SwapInventoryItems(FItemNetID&,FItemNetID&)
    // endereco: cache_pdb_25090264
    void SwapInventoryItems(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalInventoryComponent.SwapInventoryItems(FItemNetID&,FItemNetID&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    void TickComponent(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "UPrimalInventoryComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.TickCraftQueue(float,AShooterGameState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void TickCraftQueue(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "UPrimalInventoryComponent.TickCraftQueue(float,AShooterGameState*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.TransferAllFromRemoteInventory(AShooterPlayerController*,FString&,FStr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferAllFromRemoteInventory(void* a0, const FString& a1, const FString& a2, const FString& a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "UPrimalInventoryComponent.TransferAllFromRemoteInventory(AShooterPlayerController*,FString&,FString&,FString&,bool)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TransferAllFromRemoteInventory(void* a0, FString* a1, FString* a2, FString* a3, bool a4) const
    { return TransferAllFromRemoteInventory(a0, *a1, *a2, *a3, a4); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.TransferAllItemsOfClassToInventory(UPrimalInventoryComponent*,TSubclas
    // endereco: casamento de bytes com a build de referencia
    void TransferAllItemsOfClassToInventory(void* a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, void*, void*, bool, bool>(this, "UPrimalInventoryComponent.TransferAllItemsOfClassToInventory(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.TransferAllItemsOfClassesToInventory(UPrimalInventoryComponent*,TArray
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferAllItemsOfClassesToInventory(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalInventoryComponent.TransferAllItemsOfClassesToInventory(UPrimalInventoryComponent*,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.TransferAllItemsToInventory(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void TransferAllItemsToInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.TransferAllItemsToInventory(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.TransferAllItemsToInventoryCustomFolder(UPrimalInventoryComponent*,FSt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferAllItemsToInventoryCustomFolder(void* a0, const FString& a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "UPrimalInventoryComponent.TransferAllItemsToInventoryCustomFolder(UPrimalInventoryComponent*,FString&,bool,bool)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TransferAllItemsToInventoryCustomFolder(void* a0, FString* a1, bool a2, bool a3) const
    { return TransferAllItemsToInventoryCustomFolder(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.TransferAllItemsToInventoryWithFilter(UPrimalInventoryComponent*,TArra
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferAllItemsToInventoryWithFilter(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "UPrimalInventoryComponent.TransferAllItemsToInventoryWithFilter(UPrimalInventoryComponent*,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.TransferFromRemoteInventory(AShooterPlayerController*,FItemNetID,int,i
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TransferFromRemoteInventory(void* a0, unsigned long long a1, int a2, int a3, bool a4, float a5) const
    {
        return NativeCall<void*, void*, unsigned long long, int, int, bool, float>(this, "UPrimalInventoryComponent.TransferFromRemoteInventory(AShooterPlayerController*,FItemNetID,int,int,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.TransferItemToInventory(UPrimalInventoryComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    void TransferItemToInventory(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalInventoryComponent.TransferItemToInventory(UPrimalInventoryComponent*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "UPrimalInventoryComponent.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.Unstasised()
    // endereco: cache_pdb_25090264
    void Unstasised() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.Unstasised()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UpdateNetWeaponClipAmmo(UPrimalItem*,int)
    // endereco: casamento de bytes com a build de referencia
    void UpdateNetWeaponClipAmmo(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalInventoryComponent.UpdateNetWeaponClipAmmo(UPrimalItem*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UpdateSlotMagicNumber()
    // endereco: cache_pdb_25090264
    void UpdateSlotMagicNumber() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.UpdateSlotMagicNumber()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UpdateTribeGroupInventoryRank(unsignedchar)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateTribeGroupInventoryRank(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent.UpdateTribeGroupInventoryRank_Implementation(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTribeGroupInventoryRank_Implementation(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank_Implementation(unsignedchar)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalInventoryComponent.UpdateWirelessBlueprintSharingOnInventoryItemChanged(APrimalStructureI
    // endereco: casamento de bytes com a build de referencia
    void UpdateWirelessBlueprintSharingOnInventoryItemChanged(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "UPrimalInventoryComponent.UpdateWirelessBlueprintSharingOnInventoryItemChanged(APrimalStructureItemContainer*,UPrimalItem*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UpdateWirelessResources(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateWirelessResources(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.UpdateWirelessResources(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UpdatedCraftQueue()
    // endereco: casamento de bytes com a build de referencia
    void UpdatedCraftQueue() const
    {
        NativeCall<void>(this, "UPrimalInventoryComponent.UpdatedCraftQueue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UsedItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void UsedItem(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalInventoryComponent.UsedItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalInventoryComponent.UsesWirelessCrafting(UPrimalItem*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool UsesWirelessCrafting(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalInventoryComponent.UsesWirelessCrafting(UPrimalItem*,APlayerController*)", a0, a1);
    }

    int& AbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.AbsoluteMaxInventoryItems"); }
    int& AbsoluteMaxVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.AbsoluteMaxVanityItems"); }
    TObjectPtr<UTexture2D>& AccessInventoryIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UPrimalInventoryComponent.AccessInventoryIcon"); }
    int& ActionWheelAccessInventoryPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ActionWheelAccessInventoryPriority"); }
    float& ActiveInventoryRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.ActiveInventoryRefreshInterval"); }
    TArray<void*>& AdditionalItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.AdditionalItemSets"); }
    TArray<UPrimalItem*>& AllCustomCosmeticItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.AllCustomCosmeticItems"); }
    TArray<UPrimalItem*>& AllDyeColorItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.AllDyeColorItems"); }
    BrzCampoPonteiro AllSortingInputItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.AllSortingInputItems")); }
    TArray<UPrimalItem*>& ArkTributeItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.ArkTributeItems"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WeaponAsEquipmentAttachmentInfos` +16, medido na build 25090264
    //  (offset absoluto medido: 0x478; confianca alta)
    void*& CC_CosmeticControllerField() const
    { return BrzCampoAncorado<void*>(this, "WeaponAsEquipmentAttachmentInfos", 16); }
    TArray<void*>& CheatInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.CheatInventoryItems"); }
    BrzCampoPonteiro CloseInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.CloseInventorySound")); }
    float& CraftingItemSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.CraftingItemSpeed"); }
    TArray<UPrimalItem*>& CraftingItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.CraftingItems"); }
    int& CurrentSlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.CurrentSlotMaxMagicNumber"); }
    TArray<void*>& CustomFolderItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.CustomFolderItems"); }
    BrzCampoPonteiro DataListEntryWidgetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DataListEntryWidgetOverride")); }
    int& DefaultCraftingQuantityMultiplierField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DefaultCraftingQuantityMultiplier"); }
    float& DefaultCraftingRequirementsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.DefaultCraftingRequirementsMultiplier"); }
    TArray<void*>& DefaultEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultEngrams"); }
    TArray<void*>& DefaultEngrams2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultEngrams2"); }
    TArray<void*>& DefaultEngrams3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultEngrams3"); }
    TArray<void*>& DefaultEngrams4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultEngrams4"); }
    TArray<void*>& DefaultEquippedItemSkinsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultEquippedItemSkins"); }
    TArray<void*>& DefaultEquippedItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultEquippedItems"); }
    TArray<void*>& DefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems"); }
    TArray<void*>& DefaultInventoryItems2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems2"); }
    TArray<void*>& DefaultInventoryItems3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems3"); }
    TArray<void*>& DefaultInventoryItems4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultInventoryItems4"); }
    BrzCampoPonteiro DefaultInventoryItemsClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DefaultInventoryItemsClasses")); }
    BrzCampoPonteiro DefaultInventoryItemsClassesNewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DefaultInventoryItemsClassesNew")); }
    //  no cache antigo este campo se chamava DefaultInventoryItemsClasses_DEPRECATED.
    //  nesta build ele e' `DefaultInventoryItemsClasses` — resolve por NOME.
    BrzCampoPonteiro DefaultInventoryItemsClasses_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DefaultInventoryItemsClasses")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStrings")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsWeightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStringsWeights")); }
    TArray<void*>& DefaultInventoryQualitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultInventoryQualities"); }
    BrzCampoPonteiro DefaultInventoryQuantitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DefaultInventoryQuantities")); }
    TArray<void*>& DefaultSlotItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.DefaultSlotItems"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TamedDinoForceConsiderFoodTypes` +16, medido na build 25090264
    //  (offset absoluto medido: 0x5D0; confianca alta)
    TArray<UPrimalItem*>& DinoAutoHealingItemsField() const
    { return BrzCampoAncorado<TArray<UPrimalItem*>>(this, "TamedDinoForceConsiderFoodTypes", 16); }
    BrzCampoPonteiro DisabledItemsTEMPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DisabledItemsTEMP")); }
    int& DisplayDefaultItemInventoryCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DisplayDefaultItemInventoryCount"); }
    BrzCampoPonteiro DropItemRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DropItemRotationOffset")); }
    BrzCampoPonteiro DroppedItemTemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.DroppedItemTemplateOverride")); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.EngramRequirementClassOverride")); }
    TArray<void*>& EquippableItemTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.EquippableItemTypes"); }
    BrzCampoPonteiro EquippableItemTypesHiddenInStatsPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.EquippableItemTypesHiddenInStatsPanel")); }
    TArray<UPrimalItem*>& EquippedItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.EquippedItems"); }
    TArray<void*>& EventItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.EventItems"); }
    BrzCampoPonteiro ExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.ExtraItemDisplay")); }
    float& ExtraMaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.ExtraMaxInventoryWeight"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverrideCraftingFinishedSound` +16, medido na build 25090264
    //  (offset absoluto medido: 0x5F0; confianca alta)
    FString& ForceAddToFolderField() const
    { return BrzCampoAncorado<FString>(this, "OverrideCraftingFinishedSound", 16); }
    BrzCampoPonteiro ForceAllowCraftingForInventoryComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.ForceAllowCraftingForInventoryComponents")); }
    BrzCampoPonteiro ForceAllowItemStackingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.ForceAllowItemStackings")); }
    int& ForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ForceDefaultInventoryRefreshVersion"); }
    int& FreeCraftingModeQuantityValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.FreeCraftingModeQuantityValue"); }
    float& GenerateItemSetsQualityMultiplierMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMax"); }
    float& GenerateItemSetsQualityMultiplierMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMin"); }
    BrzCampoPonteiro GroundDropTraceLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.GroundDropTraceLocationOffset")); }
    BrzCampoPonteiro IgnoreDefaultCraftingQuantityMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.IgnoreDefaultCraftingQuantityMultiplierEngrams")); }
    BrzCampoPonteiro IgnoreDefaultCraftingRequirementsMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.IgnoreDefaultCraftingRequirementsMultiplierEngrams")); }
    int& InvUpdatedFrameField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.InvUpdatedFrame"); }
    TArray<UPrimalItem*>& InventoryItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.InventoryItems"); }
    FString& InventoryNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.InventoryNameOverride"); }
    TArray<void*>& ItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.ItemClassWeightMultipliers"); }
    TArray<void*>& ItemCraftQueueEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.ItemCraftQueueEntries"); }
    TArray<void*>& ItemCraftingConsumptionReplenishmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.ItemCraftingConsumptionReplenishments"); }
    BrzCampoPonteiro ItemCraftingSoundOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.ItemCraftingSoundOverride")); }
    BrzCampoPonteiro ItemRemovedBySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.ItemRemovedBySound")); }
    TArray<void*>& ItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.ItemSets"); }
    BrzCampoPonteiro ItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.ItemSetsOverride")); }
    TArray<UPrimalItem*>& ItemSlotsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent.ItemSlots"); }
    TArray<void*>& ItemSpawnActorClassOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.ItemSpawnActorClassOverrides"); }
    TArray<void*>& ItemSpoilingTimeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.ItemSpoilingTimeMultipliers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverrideCraftingFinishedSound` +8, medido na build 25090264
    //  (offset absoluto medido: 0x5E8; confianca alta)
    double& LastAddToCraftQueueSoundTimeField() const
    { return BrzCampoAncorado<double>(this, "OverrideCraftingFinishedSound", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureCraftingItemSpeedModifier` +4, medido na build 25090264
    //  (offset absoluto medido: 0x7D8; confianca alta)
    void*& LastCachedItemWeightFrameField() const
    { return BrzCampoAncorado<void*>(this, "StructureCraftingItemSpeedModifier", 4); }
    double& LastCraftRequestTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent.LastCraftRequestTime"); }
    double& LastInventoryRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent.LastInventoryRefreshTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraMaxInventoryWeight` +4, medido na build 25090264
    //  (offset absoluto medido: 0x7E8; confianca alta)
    void*& LastLoadedUserCosmeticField() const
    { return BrzCampoAncorado<void*>(this, "ExtraMaxInventoryWeight", 4); }
    double& LastRefreshCheckItemTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent.LastRefreshCheckItemTime"); }
    BrzCampoPonteiro LastWirelessCraftingCheckLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.LastWirelessCraftingCheckLoc")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessExchanges` +104, medido na build 25090264
    //  (offset absoluto medido: 0x780; confianca media)
    int& LastWirelessUpdateFrameField() const
    { return BrzCampoAncorado<int>(this, "WirelessExchanges", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessExchanges` +96, medido na build 25090264
    //  (offset absoluto medido: 0x778; confianca media)
    double& LastWirelessUpdateTimeField() const
    { return BrzCampoAncorado<double>(this, "WirelessExchanges", 96); }
    BrzCampoPonteiro LinkedToStorageInterfacesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.LinkedToStorageInterfaces")); }
    float& MaxInventoryAccessDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryAccessDistance"); }
    int& MaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxInventoryItems"); }
    float& MaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryWeight"); }
    float& MaxItemCooldownTimeClearField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemCooldownTimeClear"); }
    int& MaxItemCraftQueueEntriesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxItemCraftQueueEntries"); }
    float& MaxItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemSets"); }
    TArray<void*>& MaxItemTemplateQuantitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.MaxItemTemplateQuantities"); }
    int& MaxNumberOfSortingInputsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxNumberOfSortingInputs"); }
    float& MaxRemoteInventoryViewingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxRemoteInventoryViewingDistance"); }
    float& MinItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MinItemSets"); }
    BrzCampoPonteiro MultiUseButtonStyleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.MultiUseButtonStyleOverrides")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRefreshCheckItemTime` +20, medido na build 25090264
    //  (offset absoluto medido: 0x4B4; confianca alta)
    FItemNetID& NextItemConsumptionIDField() const
    { return BrzCampoAncorado<FItemNetID>(this, "LastRefreshCheckItemTime", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRefreshCheckItemTime` +12, medido na build 25090264
    //  (offset absoluto medido: 0x4AC; confianca alta)
    FItemNetID& NextItemSpoilingIDField() const
    { return BrzCampoAncorado<FItemNetID>(this, "LastRefreshCheckItemTime", 12); }
    float& NumItemSetsPowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.NumItemSetsPower"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxNumberOfSortingInputs` +8, medido na build 25090264
    //  (offset absoluto medido: 0x7D0; confianca alta)
    void*& NumSharedBlueprintsField() const
    { return BrzCampoAncorado<void*>(this, "MaxNumberOfSortingInputs", 8); }
    int& NumSlotsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumSlots"); }
    int& NumUndroppableVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumUndroppableVanityItems"); }
    int& NumVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumVanityItems"); }
    BrzCampoPonteiro OnInventoryHotbarItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnInventoryHotbarItemUsed")); }
    BrzCampoPonteiro OnInventoryItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnInventoryItemAdded")); }
    BrzCampoPonteiro OnInventoryItemCountQtyIncrementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnInventoryItemCountQtyIncrement")); }
    BrzCampoPonteiro OnInventoryItemFinishedRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnInventoryItemFinishedRepairing")); }
    BrzCampoPonteiro OnInventoryItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnInventoryItemRemoved")); }
    BrzCampoPonteiro OnInventoryItemStartedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnInventoryItemStartedCrafting")); }
    BrzCampoPonteiro OnlyAllowCraftingItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OnlyAllowCraftingItemClasses")); }
    BrzCampoPonteiro OpenInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OpenInventorySound")); }
    BrzCampoPonteiro OverrideCraftingFinishedSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.OverrideCraftingFinishedSound")); }
    int& OverrideInventoryDefaultTabField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.OverrideInventoryDefaultTab"); }
    BrzCampoPonteiro RemoteAddItemOnlyAllowItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.RemoteAddItemOnlyAllowItemClasses")); }
    BrzCampoPonteiro RemoteAddItemPreventItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.RemoteAddItemPreventItemClasses")); }
    FString& RemoteInventoryDescriptionStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.RemoteInventoryDescriptionString"); }
    TArray<AShooterPlayerController*>& RemoteViewingInventoryPlayerControllersField() const
    { return *GetNativePointerField<TArray<AShooterPlayerController*>*>(this, "UPrimalInventoryComponent.RemoteViewingInventoryPlayerControllers"); }
    int& SavedForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.SavedForceDefaultInventoryRefreshVersion"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomFolderItems` +16, medido na build 25090264
    //  (offset absoluto medido: 0x548; confianca alta)
    TArray<void*>& ServerCustomFolderField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "CustomFolderItems", 16); }
    TArray<void*>& SetQuantityValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.SetQuantityValues"); }
    TArray<void*>& SetQuantityWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.SetQuantityWeights"); }
    int& SlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.SlotMaxMagicNumber"); }
    BrzCampoPonteiro SortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.SortingInputAmounts")); }
    BrzCampoPonteiro SortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.SortingInputs")); }
    int& StartingAbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.StartingAbsoluteMaxInventoryItems"); }
    float& StructureCraftingItemSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.StructureCraftingItemSpeedModifier"); }
    BrzCampoPonteiro TamedDinoForceConsiderFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.TamedDinoForceConsiderFoodTypes")); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalInventoryComponent.TribeGroupInventoryRank"); }
    TArray<void*>& TribeInventoryAccessRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.TribeInventoryAccessRankSelectionIcons"); }
    TArray<void*>& WeaponAsEquipmentAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent.WeaponAsEquipmentAttachmentInfos"); }
    BrzCampoPonteiro WirelessExchangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent.WirelessExchanges")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessExchanges` +16, medido na build 25090264
    //  (offset absoluto medido: 0x728; confianca alta)
    void*& WirelessResourceMapField() const
    { return BrzCampoAncorado<void*>(this, "WirelessExchanges", 16); }
    bool& bForceAllowCustomFoldersField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bForceAllowCustomFolders"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisplayDefaultItemInventoryCount` +4, medido na build 25090264
    //  (offset absoluto medido: 0x494; confianca alta)
    void*& bHasBeenRegisteredField() const
    { return BrzCampoAncorado<void*>(this, "DisplayDefaultItemInventoryCount", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRefreshCheckItemTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4A8; confianca alta)
    void*& bLastPreventUseItemSpoilingTimeMultipliersField() const
    { return BrzCampoAncorado<void*>(this, "LastRefreshCheckItemTime", 8); }
    BitFieldValue<bool, unsigned __int32> bInitializedMe()
    { return { (void*)this, "bInitializedMe" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingEquippedItems()
    { return { (void*)this, "bReceivingEquippedItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingInventoryItems()
    { return { (void*)this, "bReceivingInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingArkInventoryItems()
    { return { (void*)this, "bReceivingArkInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bFreeCraftingMode()
    { return { (void*)this, "bFreeCraftingMode" }; }
    BitFieldValue<bool, unsigned __int32> bCanEquipItems()
    { return { (void*)this, "bCanEquipItems" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseWeaponAsEquipment()
    { return { (void*)this, "bCanUseWeaponAsEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bCanInventoryItems()
    { return { (void*)this, "bCanInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeCraftingRepairingRequirementsOnStart()
    { return { (void*)this, "bConsumeCraftingRepairingRequirementsOnStart" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteCrafting()
    { return { (void*)this, "bAllowRemoteCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDeactivatedCrafting()
    { return { (void*)this, "bAllowDeactivatedCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAutoDecreaseDurability()
    { return { (void*)this, "bPreventAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteRepairing()
    { return { (void*)this, "bAllowRemoteRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowItemStacking()
    { return { (void*)this, "bAllowItemStacking" }; }
    BitFieldValue<bool, unsigned __int32> bUseCraftQueue()
    { return { (void*)this, "bUseCraftQueue" }; }
    BitFieldValue<bool, unsigned __int32> bShowHiddenRemoteInventoryItems()
    { return { (void*)this, "bShowHiddenRemoteInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryBlueprints()
    { return { (void*)this, "bForceInventoryBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryNonRemovable()
    { return { (void*)this, "bForceInventoryNonRemovable" }; }
    BitFieldValue<bool, unsigned __int32> bHideDefaultInventoryItemsFromDisplay()
    { return { (void*)this, "bHideDefaultInventoryItemsFromDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bDataListPadMaxInventoryItems()
    { return { (void*)this, "bDataListPadMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bAddMaxInventoryItemsToDefaultItems()
    { return { (void*)this, "bAddMaxInventoryItemsToDefaultItems" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForAutoCraftBlueprints()
    { return { (void*)this, "bCheckForAutoCraftBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bIsTributeInventory()
    { return { (void*)this, "bIsTributeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentMustRequireExplicitOwnerClass()
    { return { (void*)this, "bEquipmentMustRequireExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentPlayerForceRequireExplicitOwnerClass()
    { return { (void*)this, "bEquipmentPlayerForceRequireExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceIgnoreExplicitOwnerClass()
    { return { (void*)this, "bEquipmentForceIgnoreExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryRefresh()
    { return { (void*)this, "bUseBPInventoryRefresh" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeInventory()
    { return { (void*)this, "bUseBPInitializeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowAddInventoryItem()
    { return { (void*)this, "bUseBPAllowAddInventoryItem" }; }
    BitFieldValue<bool, unsigned __int32> bHideSaddleFromInventoryDisplay()
    { return { (void*)this, "bHideSaddleFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingEnabled()
    { return { (void*)this, "bCraftingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bRepairingEnabled()
    { return { (void*)this, "bRepairingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateComponent()
    { return { (void*)this, "bReplicateComponent" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOneCraftQueueItem()
    { return { (void*)this, "bOnlyOneCraftQueueItem" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowTribe()
    { return { (void*)this, "bRemoteInventoryOnlyAllowTribe" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCraftingMinDurabilityRequirement()
    { return { (void*)this, "bOverrideCraftingMinDurabilityRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowRemoveItems()
    { return { (void*)this, "bRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowAddItems()
    { return { (void*)this, "bRemoteInventoryAllowAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteInventory()
    { return { (void*)this, "bAllowRemoteInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseCheatInventory()
    { return { (void*)this, "bUseCheatInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAddingToArkTribute()
    { return { (void*)this, "bAllowAddingToArkTribute" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowSelf()
    { return { (void*)this, "bRemoteInventoryOnlyAllowSelf" }; }
    BitFieldValue<bool, unsigned __int32> bMaxInventoryWeightUseCharacterStatus()
    { return { (void*)this, "bMaxInventoryWeightUseCharacterStatus" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDropInventoryDeposit()
    { return { (void*)this, "bPreventDropInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bShowItemDefaultFolders()
    { return { (void*)this, "bShowItemDefaultFolders" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDropAllItems()
    { return { (void*)this, "bDisableDropAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxInventoryItems()
    { return { (void*)this, "bIgnoreMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsSecondaryInventory()
    { return { (void*)this, "bIsSecondaryInventory" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteOnlyAllowBlueprintsOrItemClasses()
    { return { (void*)this, "bRemoteOnlyAllowBlueprintsOrItemClasses" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSendingData()
    { return { (void*)this, "bPreventSendingData" }; }
    BitFieldValue<bool, unsigned __int32> bSupressInventoryItemNetworking()
    { return { (void*)this, "bSupressInventoryItemNetworking" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryViewTrace()
    { return { (void*)this, "bPreventInventoryViewTrace" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnActorOnTopOfStructure()
    { return { (void*)this, "bSpawnActorOnTopOfStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDropPhysicalInventoryDeposit()
    { return { (void*)this, "bDropPhysicalInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bUseExtendedCharacterCraftingFunctionality()
    { return { (void*)this, "bUseExtendedCharacterCraftingFunctionality" }; }
    BitFieldValue<bool, unsigned __int32> bForceGenerateItemSets()
    { return { (void*)this, "bForceGenerateItemSets" }; }
    BitFieldValue<bool, unsigned __int32> bBPHandleAccessInventory()
    { return { (void*)this, "bBPHandleAccessInventory" }; }
    BitFieldValue<bool, unsigned __int32> bGivesAchievementItems()
    { return { (void*)this, "bGivesAchievementItems" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowUseInInventory()
    { return { (void*)this, "bBPAllowUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPRemoteInventoryAllowRemoveItems()
    { return { (void*)this, "bBPRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryGetMaxVisibleSlots()
    { return { (void*)this, "bUseBPRemoteInventoryGetMaxVisibleSlots" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraItemDisplay()
    { return { (void*)this, "bUseBPGetExtraItemDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemAdded()
    { return { (void*)this, "bBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemRemoved()
    { return { (void*)this, "bBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemQuantityUpdated()
    { return { (void*)this, "bBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideItemMinimumUseInterval()
    { return { (void*)this, "bBPOverrideItemMinimumUseInterval" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowAddItems()
    { return { (void*)this, "bBPForceCustomRemoteInventoryAllowAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowRemoveItems()
    { return { (void*)this, "bBPForceCustomRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryNotifyCraftingFinished()
    { return { (void*)this, "bForceInventoryNotifyCraftingFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWorldSettingsInventoryComponentAppends()
    { return { (void*)this, "bAllowWorldSettingsInventoryComponentAppends" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceConsumption()
    { return { (void*)this, "bPreventCraftingResourceConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryDepositClassDontForceDrop()
    { return { (void*)this, "bOverrideInventoryDepositClassDontForceDrop" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCraftingAllowed()
    { return { (void*)this, "bUseBPIsCraftingAllowed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowCrafting()
    { return { (void*)this, "bUseBPRemoteInventoryAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyAddedOnClientReceive()
    { return { (void*)this, "bNotifyAddedOnClientReceive" }; }
    BitFieldValue<bool, unsigned __int32> bIsTaxidermyBase()
    { return { (void*)this, "bIsTaxidermyBase" }; }
    BitFieldValue<bool, unsigned __int32> bDeferCheckForAutoCraftBlueprintsOnInventoryChange()
    { return { (void*)this, "bDeferCheckForAutoCraftBlueprintsOnInventoryChange" }; }
    BitFieldValue<bool, unsigned __int32> bShowQuickSlotPanel()
    { return { (void*)this, "bShowQuickSlotPanel" }; }
    BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement()
    { return { (void*)this, "bSetsRandomWithoutReplacement" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAllUseInInventory()
    { return { (void*)this, "bForceAllowAllUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidCraftingResource()
    { return { (void*)this, "bUseBPIsValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bUseParentStructureIsValidCraftingResource()
    { return { (void*)this, "bUseParentStructureIsValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bSetCraftingEnabledCheckForAutoCraftBlueprints()
    { return { (void*)this, "bSetCraftingEnabledCheckForAutoCraftBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowViewing()
    { return { (void*)this, "bUseBPRemoteInventoryAllowViewing" }; }
    BitFieldValue<bool, unsigned __int32> bAllDefaultInventoryIsEngrams()
    { return { (void*)this, "bAllDefaultInventoryIsEngrams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanGrindItems()
    { return { (void*)this, "bUseBPCanGrindItems" }; }
    BitFieldValue<bool, unsigned __int32> bGrinderCanGrindAll()
    { return { (void*)this, "bGrinderCanGrindAll" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedDefaultInventory()
    { return { (void*)this, "bInitializedDefaultInventory" }; }
    BitFieldValue<bool, unsigned __int32> bGetDataListEntriesOnlyRootItems()
    { return { (void*)this, "bGetDataListEntriesOnlyRootItems" }; }
    BitFieldValue<bool, unsigned __int32> bConfigOverriden()
    { return { (void*)this, "bConfigOverriden" }; }
    BitFieldValue<bool, unsigned __int32> bHideTributeUploadDinosPanel()
    { return { (void*)this, "bHideTributeUploadDinosPanel" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDLCEquipRestrictions()
    { return { (void*)this, "bIgnoreDLCEquipRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreEngramEquipRestrictions()
    { return { (void*)this, "bIgnoreEngramEquipRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTransferAll()
    { return { (void*)this, "bUseBPOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTransferEquipmentOnTransferAll()
    { return { (void*)this, "bDisableTransferEquipmentOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bShowHiddenDefaultInventoryItemsDuringCrafting()
    { return { (void*)this, "bShowHiddenDefaultInventoryItemsDuringCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemCountInsteadOfInventory()
    { return { (void*)this, "bUseItemCountInsteadOfInventory" }; }
    BitFieldValue<bool, unsigned __int32> bHideSlotCountFromHud()
    { return { (void*)this, "bHideSlotCountFromHud" }; }
    BitFieldValue<bool, unsigned __int32> bNotNearWirelessCrafting()
    { return { (void*)this, "bNotNearWirelessCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDediSortingInputs()
    { return { (void*)this, "bEnableDediSortingInputs" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSorting()
    { return { (void*)this, "bEnableSorting" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSortingInputs()
    { return { (void*)this, "bEnableSortingInputs" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowCustomFolders()
    { return { (void*)this, "bForceAllowCustomFolders" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventDropInventory()
    { return { (void*)this, "bForcePreventDropInventory" }; }
    BitFieldValue<bool, unsigned __int32> bHideEnableSortingButton()
    { return { (void*)this, "bHideEnableSortingButton" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreItemMaxDurabilityForItemRepair()
    { return { (void*)this, "bIgnoreItemMaxDurabilityForItemRepair" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreItemRequiresInventoryForItemRepair()
    { return { (void*)this, "bIgnoreItemRequiresInventoryForItemRepair" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNextItemUseCD()
    { return { (void*)this, "bIgnoreNextItemUseCD" }; }
    BitFieldValue<bool, unsigned __int32> bLastNotifyCraftingState()
    { return { (void*)this, "bLastNotifyCraftingState" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyCraftingStateChanged()
    { return { (void*)this, "bNotifyCraftingStateChanged" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyWirelessTribeGroupInventoryRankChanged()
    { return { (void*)this, "bNotifyWirelessTribeGroupInventoryRankChanged" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSortingInputs()
    { return { (void*)this, "bPreventSortingInputs" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerHotbarItemUsedEvent()
    { return { (void*)this, "bTriggerHotbarItemUsedEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowRepairingItemInInventory()
    { return { (void*)this, "bUseBPAllowRepairingItemInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraItemRepairResourceRequirements()
    { return { (void*)this, "bUseBPGetExtraItemRepairResourceRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyCustomAutoDecreaseDurability()
    { return { (void*)this, "bUseBPModifyCustomAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDropItemTransform()
    { return { (void*)this, "bUseBPOverrideDropItemTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUseCraftQueueForItem()
    { return { (void*)this, "bUseBPUseCraftQueueForItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomSorting()
    { return { (void*)this, "bUseCustomSorting" }; }
    BitFieldValue<bool, unsigned __int32> bUseInventoryBPDrawItemIcon()
    { return { (void*)this, "bUseInventoryBPDrawItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemQuantityUpdateEvents()
    { return { (void*)this, "bUseItemQuantityUpdateEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseSortingInputAmounts()
    { return { (void*)this, "bUseSortingInputAmounts" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_H
