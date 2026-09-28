// ==========================================================================
//  APrimalStructureMarket — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREMARKET_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREMARKET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct APrimalDinoCharacter;
struct APrimalStructure;
struct FActorTickFunction;
struct FItemNetID;
struct FName;
struct FPrimalMapMarkerEntryData;
struct FPrimalStructureSnapPointOverride;
struct UChildActorComponent;
struct UInputComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;
struct UTexture2D;


struct APrimalStructureMarket
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureMarket"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.AddTradeLogEntry(FMarketTradeLogEntry&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTradeLogEntry(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.AddTradeLogEntry(FMarketTradeLogEntry&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnRelevantMarketChange()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnRelevantMarketChange() const
    {
        return NativeCall<void*>(this, "APrimalStructureMarket.BPOnRelevantMarketChange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnRequestOrderCanceled(TSoftClassPtr<UPrimalItem>&,AShooterPlayerContro
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnRequestOrderCanceled(void* a0, void* a1) const
    {
        return NativeCall<void*, void**, void*>(this, "APrimalStructureMarket.BPOnRequestOrderCanceled(TSoftClassPtr<UPrimalItem>&,AShooterPlayerController*)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnRequestOrderExecuted(AShooterPlayerController*,TSoftClassPtr<UPrimalI
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnRequestOrderExecuted(void* a0, void* a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, void**, int, int>(this, "APrimalStructureMarket.BPOnRequestOrderExecuted(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>&,int,int)", a0, &a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnRequestOrderModified(TSoftClassPtr<UPrimalItem>&,int,int,AShooterPlay
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOnRequestOrderModified(void* a0, int a1, int a2, void* a3) const
    {
        return NativeCall<void*, void**, int, int, void*>(this, "APrimalStructureMarket.BPOnRequestOrderModified(TSoftClassPtr<UPrimalItem>&,int,int,AShooterPlayerController*)", &a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnSellOrderBought(AShooterPlayerController*,FItemNetID&,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnSellOrderBought(void* a0, void* a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, void*, int, int>(this, "APrimalStructureMarket.BPOnSellOrderBought(AShooterPlayerController*,FItemNetID&,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnSellOrderCanceled(FItemNetID&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnSellOrderCanceled(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.BPOnSellOrderCanceled(FItemNetID&,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BPOnSellOrderCreatedByChar(FItemNetID&,int,int,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnSellOrderCreatedByChar(void* a0, int a1, int a2, void* a3) const
    {
        return NativeCall<void*, void*, int, int, void*>(this, "APrimalStructureMarket.BPOnSellOrderCreatedByChar(FItemNetID&,int,int,APrimalCharacter*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalStructureMarket.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CalculateHexagonsToModifyOrCreateOrder(TSoftClassPtr<UPrimalItem>,int,int
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateHexagonsToModifyOrCreateOrder(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalStructureMarket.CalculateHexagonsToModifyOrCreateOrder(TSoftClassPtr<UPrimalItem>,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanCharPlaceRequestOrders(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCharPlaceRequestOrders(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanCharPlaceRequestOrders(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanCharPlaceSellOrders(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCharPlaceSellOrders(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanCharPlaceSellOrders(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanCharUseMarket(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCharUseMarket(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanCharUseMarket(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanControllerPlaceRequestOrders(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanControllerPlaceRequestOrders(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanControllerPlaceRequestOrders(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanControllerPlaceSellOrders(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanControllerPlaceSellOrders(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanControllerPlaceSellOrders(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanControllerUseMarket(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanControllerUseMarket(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanControllerUseMarket(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanItemBeRequested(FAssetData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanItemBeRequested(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CanItemBeRequested(FAssetData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanItemBeRequested(TSoftClassPtr<UPrimalItem>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanItemBeRequested(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureMarket.CanItemBeRequested(TSoftClassPtr<UPrimalItem>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanPlayerBuySellOrder(AShooterPlayerController*,FItemNetID&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerBuySellOrder(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureMarket.CanPlayerBuySellOrder(AShooterPlayerController*,FItemNetID&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanPlayerCancelRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrim
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerCancelRequestOrder(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.CanPlayerCancelRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanPlayerCancelSellOrder(AShooterPlayerController*,FItemNetID&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerCancelSellOrder(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.CanPlayerCancelSellOrder(AShooterPlayerController*,FItemNetID&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CanPlayerExecuteRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlayerExecuteRequestOrder(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureMarket.CanPlayerExecuteRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CancelRequestOrder(TSoftClassPtr<UPrimalItem>,AShooterPlayerController*,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CancelRequestOrder(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalStructureMarket.CancelRequestOrder(TSoftClassPtr<UPrimalItem>,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CancelSellOrder(FItemNetID&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CancelSellOrder(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.CancelSellOrder(FItemNetID&,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CharCreateSellOrder(APrimalCharacter*,FItemNetID,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CharCreateSellOrder(void* a0, unsigned long long a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, unsigned long long, int, int>(this, "APrimalStructureMarket.CharCreateSellOrder(APrimalCharacter*,FItemNetID,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CompactOrderStacks(FMarketSellOrder&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CompactOrderStacks(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.CompactOrderStacks(FMarketSellOrder&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ControllerCreateRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ControllerCreateRequestOrder(void* a0, void* a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, void*, int, int>(this, "APrimalStructureMarket.ControllerCreateRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ControllerCreateSellOrder(AShooterPlayerController*,FItemNetID,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ControllerCreateSellOrder(void* a0, unsigned long long a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, unsigned long long, int, int>(this, "APrimalStructureMarket.ControllerCreateSellOrder(AShooterPlayerController*,FItemNetID,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CreateRequestOrder(TSoftClassPtr<UPrimalItem>,int,int,FName,AShooterPlaye
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateRequestOrder(void* a0, int a1, int a2, unsigned long long a3, void* a4) const
    {
        return NativeCall<void*, void*, int, int, unsigned long long, void*>(this, "APrimalStructureMarket.CreateRequestOrder(TSoftClassPtr<UPrimalItem>,int,int,FName,AShooterPlayerController*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CreateSellOrder(FItemNetID,int,int,FName,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateSellOrder(unsigned long long a0, int a1, int a2, unsigned long long a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, int, int, unsigned long long, void*>(this, "APrimalStructureMarket.CreateSellOrder(FItemNetID,int,int,FName,AShooterPlayerController*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.CreateSellOrdersFromInventory(AShooterPlayerController*,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateSellOrdersFromInventory(void* a0, int a1, int a2, bool a3) const
    {
        return NativeCall<void*, void*, int, int, bool>(this, "APrimalStructureMarket.CreateSellOrdersFromInventory(AShooterPlayerController*,int,int,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.DoesClientRequestOrderExistForClass(UObject*,TSoftClassPtr<UPrimalItem>,i
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesClientRequestOrderExistForClass(void* a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, int, bool>(this, "APrimalStructureMarket.DoesClientRequestOrderExistForClass(UObject*,TSoftClassPtr<UPrimalItem>,int,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.DoesMyRequestOrderExistForClass(TSoftClassPtr<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesMyRequestOrderExistForClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.DoesMyRequestOrderExistForClass(TSoftClassPtr<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.DoesMySellOrderExist(FItemNetID&,TSoftClassPtr<UPrimalItem>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesMySellOrderExist(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalStructureMarket.DoesMySellOrderExist(FItemNetID&,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.DoesMySellOrderExistForItem(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesMySellOrderExistForItem(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureMarket.DoesMySellOrderExistForItem(UPrimalItem*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.DoesPlayerHaveHexagonsToModifyOrCreateOrder(AShooterPlayerController*,TSo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesPlayerHaveHexagonsToModifyOrCreateOrder(void* a0, void* a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, void*, int, int>(this, "APrimalStructureMarket.DoesPlayerHaveHexagonsToModifyOrCreateOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.DoesSellOrderExistForItem_Client(UObject*,FItemNetID,TSoftClassPtr<UPrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesSellOrderExistForItem_Client(void* a0, unsigned long long a1, void* a2, int a3, bool a4, bool a5) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, int, bool, bool>(this, "APrimalStructureMarket.DoesSellOrderExistForItem_Client(UObject*,FItemNetID,TSoftClassPtr<UPrimalItem>,int,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureMarket.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ExecuteRequestOrder(AShooterPlayerController*,FMarketRequestOrder&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteRequestOrder(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureMarket.ExecuteRequestOrder(AShooterPlayerController*,FMarketRequestOrder&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ExecuteSellOrder(AShooterPlayerController*,FMarketSellOrder&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteSellOrder(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureMarket.ExecuteSellOrder(AShooterPlayerController*,FMarketSellOrder&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMarketInfo(UObject*,int,FMarketInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMarketInfo(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "APrimalStructureMarket.GetMarketInfo(UObject*,int,FMarketInfo&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMaxItemsAvailableToSellInSingleOrder(TSoftClassPtr<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxItemsAvailableToSellInSingleOrder(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.GetMaxItemsAvailableToSellInSingleOrder(TSoftClassPtr<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMyMarketInfo()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetMyMarketInfo() const
    {
        return NativeCall<void*>(this, "APrimalStructureMarket.GetMyMarketInfo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMyMarketInfo(FMarketInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMyMarketInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.GetMyMarketInfo(FMarketInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMyRequestOrder(TSoftClassPtr<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMyRequestOrder(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.GetMyRequestOrder(TSoftClassPtr<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMyRequestOrderInfo(TSoftClassPtr<UPrimalItem>,FMarketRequestOrder&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMyRequestOrderInfo(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.GetMyRequestOrderInfo(TSoftClassPtr<UPrimalItem>,FMarketRequestOrder&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMySellOrder(FItemNetID)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetMySellOrder(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalStructureMarket.GetMySellOrder(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMySellOrderIdForItem(FItemNetID,FItemNetID&,TSoftClassPtr<UPrimalItem>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMySellOrderIdForItem(unsigned long long a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, bool>(this, "APrimalStructureMarket.GetMySellOrderIdForItem(FItemNetID,FItemNetID&,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetMySellOrderInfo(FItemNetID,FMarketSellOrder&,TSoftClassPtr<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMySellOrderInfo(unsigned long long a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, bool>(this, "APrimalStructureMarket.GetMySellOrderInfo(FItemNetID,FMarketSellOrder&,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetRequestOrderInfo(UObject*,int,TSoftClassPtr<UPrimalItem>,FMarketReques
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRequestOrderInfo(void* a0, int a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, int, void*, void*>(this, "APrimalStructureMarket.GetRequestOrderInfo(UObject*,int,TSoftClassPtr<UPrimalItem>,FMarketRequestOrder&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetSellOrderIdForItem(UObject*,FItemNetID,FItemNetID&,int,TSoftClassPtr<U
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderIdForItem(void* a0, unsigned long long a1, void* a2, int a3, void* a4, bool a5) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, int, void*, bool>(this, "APrimalStructureMarket.GetSellOrderIdForItem(UObject*,FItemNetID,FItemNetID&,int,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetSellOrderInfo(UObject*,int,FItemNetID,FMarketSellOrder&,TSoftClassPtr<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderInfo(void* a0, int a1, unsigned long long a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, int, unsigned long long, void*, void*>(this, "APrimalStructureMarket.GetSellOrderInfo(UObject*,int,FItemNetID,FMarketSellOrder&,TSoftClassPtr<UPrimalItem>)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.GetSellOrderItemDisplayName(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderItemDisplayName(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.GetSellOrderItemDisplayName(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.MergeReleasedItemIntoInventory(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MergeReleasedItemIntoInventory(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.MergeReleasedItemIntoInventory(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ModifyRequestOrder(TSoftClassPtr<UPrimalItem>,int,int,AShooterPlayerContr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifyRequestOrder(void* a0, int a1, int a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, int, int, void*, bool>(this, "APrimalStructureMarket.ModifyRequestOrder(TSoftClassPtr<UPrimalItem>,int,int,AShooterPlayerController*,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ModifySellOrder(FItemNetID&,int,int,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifySellOrder(void* a0, int a1, int a2, void* a3) const
    {
        return NativeCall<void*, void*, int, int, void*>(this, "APrimalStructureMarket.ModifySellOrder(FItemNetID&,int,int,AShooterPlayerController*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.OnGlobalMarketDataReceived(AShooterPlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGlobalMarketDataReceived(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalStructureMarket.OnGlobalMarketDataReceived(AShooterPlayerController*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.OnRelevantMarketChange()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRelevantMarketChange() const
    {
        return NativeCall<void*>(this, "APrimalStructureMarket.OnRelevantMarketChange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.OnTradeLogDataReceived(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnTradeLogDataReceived(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.OnTradeLogDataReceived(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.OnTradeLogStartReceiving(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnTradeLogStartReceiving(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.OnTradeLogStartReceiving(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.PlacedStructure(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlacedStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.ReconcileMultiSellOrder(FMarketSellOrder&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReconcileMultiSellOrder(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.ReconcileMultiSellOrder(FMarketSellOrder&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.RefundRequestOrderHexagons(FMarketRequestOrder&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefundRequestOrderHexagons(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.RefundRequestOrderHexagons(FMarketRequestOrder&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.RemoveEmptyUIViewers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveEmptyUIViewers() const
    {
        return NativeCall<void*>(this, "APrimalStructureMarket.RemoveEmptyUIViewers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.RemoveUIViewer(APrimalBuff*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveUIViewer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMarket.RemoveUIViewer(APrimalBuff*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.RepopulateTransientTradeData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RepopulateTransientTradeData() const
    {
        return NativeCall<void*>(this, "APrimalStructureMarket.RepopulateTransientTradeData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.RequestTradeData(AShooterPlayerController*,double)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro RequestTradeData(void* a0, double a1) const
    {
        return NativeCall<void*, void*, double>(this, "APrimalStructureMarket.RequestTradeData(AShooterPlayerController*,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.RequestTradeLog(AShooterPlayerController*,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestTradeLog(void* a0, double a1) const
    {
        return NativeCall<void*, void*, double>(this, "APrimalStructureMarket.RequestTradeLog(AShooterPlayerController*,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.TryCancelRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryCancelRequestOrder(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalStructureMarket.TryCancelRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.TryCancelSellOrder(AShooterPlayerController*,FItemNetID&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryCancelSellOrder(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.TryCancelSellOrder(AShooterPlayerController*,FItemNetID&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.TryExecuteRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalIte
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryExecuteRequestOrder(void* a0, void* a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, void*, int, int>(this, "APrimalStructureMarket.TryExecuteRequestOrder(AShooterPlayerController*,TSoftClassPtr<UPrimalItem>,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.TryTransferItemQuantity(UPrimalInventoryComponent*,UPrimalItem*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryTransferItemQuantity(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureMarket.TryTransferItemQuantity(UPrimalInventoryComponent*,UPrimalItem*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.UpdateMarketInfo(AShooterPlayerController*,FMarketInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateMarketInfo(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureMarket.UpdateMarketInfo(AShooterPlayerController*,FMarketInfo&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.VerifyMyRequestOrder(FMarketRequestOrder&,int,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VerifyMyRequestOrder(void* a0, int a1, int a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, int, int, bool, bool>(this, "APrimalStructureMarket.VerifyMyRequestOrder(FMarketRequestOrder&,int,int,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMarket.VerifyMySellOrder(FItemNetID&,int,int,bool,bool,AShooterPlayerController*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VerifyMySellOrder(void* a0, int a1, int a2, bool a3, bool a4, void* a5) const
    {
        return NativeCall<void*, void*, int, int, bool, bool, void*>(this, "APrimalStructureMarket.VerifyMySellOrder(FItemNetID&,int,int,bool,bool,AShooterPlayerController*)", a0, a1, a2, a3, a4, a5);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    APrimalStructureMarket.VerifyMyRequestOrder(TSoftClassPtr<UPrimalItem>&,int,int,bool,bool)
    //      (colide com APrimalStructureMarket.VerifyMyRequestOrder(FMarketRequestOrder&,int,int,bool,bool))
    //    APrimalStructureMarket.VerifyMySellOrder(FMarketSellOrder&,int,int,bool,bool,AShooterPlayerController*)
    //      (colide com APrimalStructureMarket.VerifyMySellOrder(FItemNetID&,int,int,bool,bool,AShooterPlayerController*)

    TObjectPtr<UTexture2D>& ActivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.ActivateContainerIcon"); }
    FString& ActivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.ActivateContainerString"); }
    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureMarket.ActivateMaterials"); }
    BrzCampoPonteiro ActivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ActivatedIconColor")); }
    float& ActivationCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ActivationCooldownTime"); }
    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ActiveEffectVFX")); }
    TArray<void*>& ActiveRequiresFuelItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.ActiveRequiresFuelItems"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureMarket.ActorUsingQuickAction"); }
    BrzCampoPonteiro AllowOverrideParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.AllowOverrideParticleLightColor")); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructureMarket.AllowStructureColorSets" }; }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.AllowWirelessCraftingIcon"); }
    BrzCampoPonteiro AllowedMarketIconsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.AllowedMarketIcons")); }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructureMarket.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureMarket.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.AutoReceiveInput"); }
    BrzCampoPonteiro BPOverrideDestroyedMeshTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.BPOverrideDestroyedMeshTextures")); }
    float& BasedCharacterDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.BasedCharacterDamageAmount"); }
    float& BasedCharacterDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.BasedCharacterDamageInterval"); }
    BrzCampoPonteiro BasedCharacterDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.BasedCharacterDamageType")); }
    BrzCampoPonteiro BatteryClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.BatteryClassOverride")); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.BedID"); }
    int& BlacklistedItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.BlacklistedItemCount"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.BoneDamageAdjusters"); }
    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.BoxName"); }
    FString& BoxNamePrefaceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.BoxNamePrefaceString"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ClientReplicationSendNowThreshold"); }
    USoundBase*& ContainerActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureMarket.ContainerActivatedSound"); }
    float& ContainerActiveDecreaseHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ContainerActiveDecreaseHealthSpeed"); }
    BrzCampoPonteiro ContainerActiveHealthDecreaseDamageTypePassiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ContainerActiveHealthDecreaseDamageTypePassive")); }
    USoundBase*& ContainerDeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureMarket.ContainerDeactivatedSound"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.ControllingMatineeActors"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureMarket.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.CreationTime"); }
    float& CurrentFuelQuantityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.CurrentFuelQuantity"); }
    double& CurrentFuelTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.CurrentFuelTimeCache"); }
    int& CurrentItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.CurrentItemCount"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureMarket.CurrentPinCode"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMarket.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMarket.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.DamageTypeAdjusters"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.DeactivateContainerIcon"); }
    FString& DeactivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.DeactivateContainerString"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DeactivateTrapIcon")); }
    BrzCampoPonteiro DeactivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DeactivatedIconColor")); }
    unsigned long long& DeathCacheCharacterIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalStructureMarket.DeathCacheCharacterID"); }
    double& DeathCacheCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.DeathCacheCreationTime"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureMarket.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.DecayDestructionPeriodMultiplier"); }
    USoundBase*& DefaultAudioTemplateField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureMarket.DefaultAudioTemplate"); }
    BrzCampoPonteiro DefaultMarketInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DefaultMarketInfo")); }
    BrzCampoPonteiro DefaultParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DefaultParticleLightColor")); }
    BrzCampoPonteiro DefaultParticleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DefaultParticleTemplate")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.DemolishGiveItemCraftingResourcePercentage"); }
    BrzCampoPonteiro DemolishInventoryDepositClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DemolishInventoryDepositClass")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.DestructionEmitter")); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.DisabledOpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.DisabledOpenSceneActionName"); }
    float& DrawFuelRemainingOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.DrawFuelRemainingOffset"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.DrinkWaterIcon"); }
    float& DropInventoryDepositTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.DropInventoryDepositTraceDistance"); }
    float& DropInventoryOnDestructionLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.DropInventoryOnDestructionLifespan"); }
    int& EmitterColorRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.EmitterColorRegionIndex"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.EnableUnpoweredAutoActivationIcon"); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.EngramRequirementClassOverride")); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.FloatingHudLocTextOffset")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.ForceMaximumReplicationRateUntilTime"); }
    TArray<void*>& FuelConsumeDecreaseDurabilityAmountsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.FuelConsumeDecreaseDurabilityAmounts"); }
    float& FuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.FuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro FuelItemTrueClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.FuelItemTrueClass")); }
    TArray<void*>& FuelItemsConsumeIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.FuelItemsConsumeInterval"); }
    TArray<void*>& FuelItemsConsumedGiveItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.FuelItemsConsumedGiveItems"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureMarket.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.HurtFX_Niagara")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.HypoThermiaInsulation"); }
    TArray<UMaterialInterface*>& InActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureMarket.InActivateMaterials"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalStructureMarket.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalStructureMarket.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.InsulationRange"); }
    BrzCampoPonteiro ItemsToDisplayInStructureTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ItemsToDisplayInStructureTooltip")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ItemsUseAlternateActorClassAttachment")); }
    BrzCampoPonteiro JunctionCableBeamOffsetEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.JunctionCableBeamOffsetEnd")); }
    BrzCampoPonteiro JunctionCableBeamOffsetStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.JunctionCableBeamOffsetStart")); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureMarket.JunctionLinkCableParticle"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureMarket.JunctionLinkParticleTemplate"); }
    double& LastActivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastActivatedTime"); }
    double& LastActiveStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastActiveStateChangeTime"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastActorForceReplicationTime"); }
    double& LastCheckedFuelTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastCheckedFuelTime"); }
    double& LastDeactivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastDeactivatedTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastExitStasisTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastInAllyRangeTimeSerialized"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMarket.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastSkinAppliedTime"); }
    double& LastSolarRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastSolarRefreshTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastThrottledTickTime"); }
    double& LastTimeModifiedTradeLogField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastTimeModifiedTradeLog"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructureMarket.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.LifeSpanAfterDeath"); }
    AActor*& LinkedBlueprintSpawnActorPointField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureMarket.LinkedBlueprintSpawnActorPoint"); }
    TWeakObjectPtr<void>& LinkedPowerJunctionStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMarket.LinkedPowerJunctionStructure"); }
    int& LinkedPowerJunctionStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.LinkedPowerJunctionStructureID"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureMarket.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.LinkedStructuresID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureMarket.LocalCorpseEmitter"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.LocalOnlySkinCustomPersistentData")); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() const
    { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureMarket.MapMarkerLocationInfo"); }
    float& MaxActivationDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.MaxActivationDistance"); }
    int& MaxBoxNameLengthField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxBoxNameLength"); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.MaxHealth"); }
    int& MaxItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxItemCount"); }
    int& MaxOrderTotalPriceField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxOrderTotalPrice"); }
    int& MaxPricePerUnitField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxPricePerUnit"); }
    int& MaxPricePerUnit_RequestsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxPricePerUnit_Requests"); }
    int& MaxRequestQuantityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxRequestQuantity"); }
    int& MaxSellOrderQuantityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxSellOrderQuantity"); }
    int& MaxTradeLogEntriesField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxTradeLogEntries"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.MultiSoftDestructionGeoCollectionAssets")); }
    UChildActorComponent*& MyChildEmitterSpawnableField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureMarket.MyChildEmitterSpawnable"); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructureMarket.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureMarket.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureMarket.MyHarvestingComponent"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureMarket.MyInventoryComponent"); }
    BrzCampoPonteiro MyMarketInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.MyMarketInfo")); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureMarket.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureMarket.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureMarket.MyStructureHarvestingComponent"); }
    BrzCampoPonteiro MyTradeDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.MyTradeData")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.NetCullDistanceSquaredDormant"); }
    double& NetDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.NetDestructionTime"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMarket.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureMarket.NetworkSpatializationParent"); }
    BrzCampoPonteiro NextConsumeFuelGiveItemTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.NextConsumeFuelGiveItemType")); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.NotifyCarriedByDinoChanged")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OnTargetingTeamChanged")); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.OpenSceneActionIcon"); }
    FString& OpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.OpenSceneActionName"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.OriginalPlacerPlayerID"); }
    TArray<USoundBase*>& OverrideAudioTemplatesField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalStructureMarket.OverrideAudioTemplates"); }
    TArray<void*>& OverrideParticleLightColorField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.OverrideParticleLightColor"); }
    TArray<void*>& OverrideParticleTemplateItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.OverrideParticleTemplateItemClasses"); }
    BrzCampoPonteiro OverrideParticleTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.OverrideParticleTemplates")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructureMarket.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureMarket.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructureMarket.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMarket.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructureMarket.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMarket.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructureMarket.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureMarket.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PlacementYawOffsetIncrement"); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& PoweredNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.PoweredNearbyStructureRange"); }
    BrzCampoPonteiro PoweredNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PoweredNearbyStructureTemplate")); }
    int& PoweredOverrideCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.PoweredOverrideCounter"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureMarket.PreventWirelessCraftingIcon"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureMarket.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMarket.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructureMarket.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureMarket.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructureMarket.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalStructureMarket.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureMarket.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureMarket.PrimarySnappedStructureParent"); }
    float& RandomFuelUpdateTimeMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.RandomFuelUpdateTimeMax"); }
    float& RandomFuelUpdateTimeMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.RandomFuelUpdateTimeMin"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.RemoteRole"); }
    BrzCampoPonteiro RemoteViewingMarketUIControllersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.RemoteViewingMarketUIControllers")); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedFuelItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ReplicatedFuelItemClass")); }
    short& ReplicatedFuelItemColorIndexField() const
    { return *GetNativePointerField<short*>(this, "APrimalStructureMarket.ReplicatedFuelItemColorIndex"); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ReplicationIntervalMultiplier"); }
    BrzCampoPonteiro RequestExclusionDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.RequestExclusionData")); }
    BrzCampoPonteiro RequiresItemForOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.RequiresItemForOpenSceneAction")); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalStructureMarket.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMarket.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.SavedStructureMinAllowedVersion"); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinInventoryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.SkinInventoryData")); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.SkinPersistentData")); }
    double& SkipConsumeFuelUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.SkipConsumeFuelUntilTime"); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.SnappedChooseRotationPlacementData")); }
    float& SolarRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.SolarRefreshInterval"); }
    float& SolarRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.SolarRefreshIntervalMin"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalStructureMarket.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureMarket.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructureMarket.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureMarket.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureMarket.StructuresPlacedOnFloor"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.TargetingTeam"); }
    float& TimeCooldownRequestFuelRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.TimeCooldownRequestFuelRemaining"); }
    BrzCampoPonteiro TradeLogField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.TradeLog")); }
    BrzCampoPonteiro TradeLog_ClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.TradeLog_Client")); }
    unsigned char& TradingRequiresDLCField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.TradingRequiresDLC"); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMarket.TribeGroupStructureRank"); }
    BrzCampoPonteiro UISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.UISceneTemplate")); }
    BrzCampoPonteiro UIViewerBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.UIViewerBuffs")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPApplyPinCodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.UseBPApplyPinCode")); }
    BrzCampoPonteiro UseBPOverrideTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.UseBPOverrideTargetLocation")); }
    float& ValidCraftingResourceMaxDurabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMarket.ValidCraftingResourceMaxDurability"); }
    TArray<TWeakObjectPtr<void>>& ValidatedByPinCodePlayerControllersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureMarket.ValidatedByPinCodePlayerControllers"); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMarket.Variants"); }
    BrzCampoPonteiro WirelessExchangeRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.WirelessExchangeRefs")); }
    BrzCampoPonteiro bActiveRequiresPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bActiveRequiresPower")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAdjustDamageAsPlayerWithEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAdjustDamageAsPlayerWithEquipment")); }
    BrzCampoPonteiro bAllowAttachToSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowAttachToSaddle")); }
    BrzCampoPonteiro bAllowAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAllowChooseRotationWhenSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowChooseRotationWhenSnapped")); }
    BrzCampoPonteiro bAllowCustomNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowCustomName")); }
    BrzCampoPonteiro bAllowPickingUpStructureAfterPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowPickingUpStructureAfterPlacement")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowSnapRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowSnapRotation")); }
    BrzCampoPonteiro bAllowStructureSkinsWithoutTeamCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowStructureSkinsWithoutTeamCheck")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowWeldRoundRobinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowWeldRoundRobin")); }
    BrzCampoPonteiro bAllowWeldingToShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAllowWeldingToShips")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bApplyNiagaraColorInBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bApplyNiagaraColorInBP")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoActivateContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAutoActivateContainer")); }
    BrzCampoPonteiro bAutoActivateIfPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAutoActivateIfPowered")); }
    BrzCampoPonteiro bAutoActivateWhenFueledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAutoActivateWhenFueled")); }
    BrzCampoPonteiro bAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPIsValidWaterSourceForPipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBPIsValidWaterSourceForPipe")); }
    BrzCampoPonteiro bBPNotifyRemoteViewerChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBPNotifyRemoteViewerChange")); }
    BrzCampoPonteiro bBPOnContainerActiveHealthDecreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBPOnContainerActiveHealthDecrease")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAttachToExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCanAttachToExosuit")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeRepairedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCanBeRepaired")); }
    BrzCampoPonteiro bCanBeStoredByExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCanBeStoredByExosuit")); }
    BrzCampoPonteiro bCanToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCanToggleActivation")); }
    BrzCampoPonteiro bCarriedByDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCarriedByDino")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheckStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCheckStartedUnderwater")); }
    BrzCampoPonteiro bClientBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bClientBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bClientReceivedStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bClientReceivedStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCollideWhenPlacing")); }
    BrzCampoPonteiro bContainerActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bContainerActivated")); }
    BrzCampoPonteiro bCraftingSubstractConnectedWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bCraftingSubstractConnectedWater")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDebug")); }
    BrzCampoPonteiro bDemolishJustDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDemolishJustDestroy")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDestroyWhenAllItemsRemoved")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedExceptDefaultsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDestroyWhenAllItemsRemovedExceptDefaults")); }
    BrzCampoPonteiro bDidSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDidSpawnEffects")); }
    BrzCampoPonteiro bDisableActivationUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDisableActivationUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableStructureOnElectricStormField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDisableStructureOnElectricStorm")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDisplayActivationOnInventoryUI")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUISecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDisplayActivationOnInventoryUISecondary")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUITertiaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDisplayActivationOnInventoryUITertiary")); }
    BrzCampoPonteiro bDontResetPickupTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDontResetPickupTimer")); }
    BrzCampoPonteiro bDontSetDamageParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDontSetDamageParameters")); }
    BrzCampoPonteiro bDrawFuelRemainingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDrawFuelRemaining")); }
    BrzCampoPonteiro bDrinkingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDrinkingWater")); }
    BrzCampoPonteiro bDropInventoryOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bDropInventoryOnDestruction")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceFloatingDamageNumbersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceFloatingDamageNumbers")); }
    BrzCampoPonteiro bForceFloorCollisionGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceFloorCollisionGroup")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNeverLockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceNeverLock")); }
    BrzCampoPonteiro bForceNoPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceNoPinLocking")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventAutoActivateWhenConnectedToWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForcePreventAutoActivateWhenConnectedToWater")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSnappedStructureToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceSnappedStructureToGround")); }
    BrzCampoPonteiro bForceZeroDamageProcessingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForceZeroDamageProcessing")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFuelAllowActivationWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bFuelAllowActivationWhenNoPower")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasAnyStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHasAnyStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bHasFuelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHasFuel")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasResetDecayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHasResetDecayTime")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHidden")); }
    BrzCampoPonteiro bHideAutoActivateToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHideAutoActivateToggle")); }
    BrzCampoPonteiro bHidePowerJunctionConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bHidePowerJunctionConnection")); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureMarket.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BrzCampoPonteiro bIgnoreDestructionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoreDestructionEffects")); }
    BrzCampoPonteiro bIgnoreDyingWhenDemolishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoreDyingWhenDemolished")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoreSpawnEffects")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoredByTargeting")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bInventoryForcePreventItemAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bInventoryForcePreventItemAppends")); }
    BrzCampoPonteiro bInventoryForcePreventRemoteAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bInventoryForcePreventRemoteAddItems")); }
    BrzCampoPonteiro bIsAmmoContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsAmmoContainer")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsBed")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDoorframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsDoorframe")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsFlipped")); }
    BrzCampoPonteiro bIsFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsFloor")); }
    BrzCampoPonteiro bIsFoundationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsFoundation")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsInvincible")); }
    BrzCampoPonteiro bIsLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsLocked")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsMapActor")); }
    BrzCampoPonteiro bIsNonPlayerMarketField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsNonPlayerMarket")); }
    BrzCampoPonteiro bIsPinLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsPinLocked")); }
    BrzCampoPonteiro bIsPowerJunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsPowerJunction")); }
    BrzCampoPonteiro bIsPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsPowered")); }
    BrzCampoPonteiro bIsPreviewStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsPreviewStructure")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsRepairing")); }
    BrzCampoPonteiro bIsStructureAttachmentBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsStructureAttachmentBase")); }
    BrzCampoPonteiro bIsTeleporterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsTeleporter")); }
    BrzCampoPonteiro bIsTrappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsTrapped")); }
    BrzCampoPonteiro bIsUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsUnderwater")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLastToggleActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bLastToggleActivated")); }
    BrzCampoPonteiro bLinkedStructureRemovalForceClientUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bLinkedStructureRemovalForceClientUpdate")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bNoCollision")); }
    BrzCampoPonteiro bOnlyAllowTeamActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOnlyAllowTeamActivation")); }
    BrzCampoPonteiro bOnlyConsumeDurabilityOnEquipmentForEnemiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOnlyConsumeDurabilityOnEquipmentForEnemies")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseSpoilingMultipliersIfActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOnlyUseSpoilingMultipliersIfActivated")); }
    BrzCampoPonteiro bOverrideFoundationSupportDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bOverrideFoundationSupportDistance")); }
    BrzCampoPonteiro bPendingRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPendingRemoval")); }
    BrzCampoPonteiro bPlacementAdjustHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPlacementAdjustHeight")); }
    BrzCampoPonteiro bPlacementChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPlacementChooseRotation")); }
    BrzCampoPonteiro bPlacementIgnoreChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPlacementIgnoreChooseRotation")); }
    BrzCampoPonteiro bPlacementPreventLockingCameraWhileChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPlacementPreventLockingCameraWhileChooseRotation")); }
    BrzCampoPonteiro bPoweredAllowBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredAllowBattery")); }
    BrzCampoPonteiro bPoweredAllowBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredAllowBot")); }
    BrzCampoPonteiro bPoweredAllowSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredAllowSolar")); }
    BrzCampoPonteiro bPoweredHasBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredHasBattery")); }
    BrzCampoPonteiro bPoweredHasBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredHasBot")); }
    BrzCampoPonteiro bPoweredUsingBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredUsingBattery")); }
    BrzCampoPonteiro bPoweredUsingBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredUsingBot")); }
    BrzCampoPonteiro bPoweredUsingSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredUsingSolar")); }
    BrzCampoPonteiro bPoweredWaterSourceWhenActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPoweredWaterSourceWhenActive")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventContainerPingTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventContainerPingType")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLinkingToStorageInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventLinkingToStorageInterface")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventStasis")); }
    BrzCampoPonteiro bPreventStructureHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventStructureHibernation")); }
    BrzCampoPonteiro bPreventToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventToggleActivation")); }
    BrzCampoPonteiro bPreventUsingAsWirelessCraftingSourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreventUsingAsWirelessCraftingSource")); }
    BrzCampoPonteiro bPreviewApplyColorToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bPreviewApplyColorToChildComponents")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bReceivingMarketLogField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReceivingMarketLog")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateItemFuelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplicateItemFuelClass")); }
    BrzCampoPonteiro bReplicateLastActivatedTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplicateLastActivatedTime")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bReplicates")); }
    BrzCampoPonteiro bRequiresItemExactClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bRequiresItemExactClass")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bSavedWhenStasised")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bServerBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseQuantityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bServerBPNotifyInventoryItemChangesUseQuantity")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseSwappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bServerBPNotifyInventoryItemChangesUseSwapped")); }
    BrzCampoPonteiro bStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStartedUnderwater")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStasised")); }
    BrzCampoPonteiro bStationaryStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStationaryStructure")); }
    BrzCampoPonteiro bStructureCosmeticOverrideStructureColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStructureCosmeticOverrideStructureColorSets")); }
    BrzCampoPonteiro bStructureFiresProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStructureFiresProjectiles")); }
    BrzCampoPonteiro bStructureIgnoreDyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bStructureIgnoreDying")); }
    BrzCampoPonteiro bSupportsLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bSupportsLocking")); }
    BrzCampoPonteiro bSupportsPinActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bSupportsPinActivation")); }
    BrzCampoPonteiro bSupportsPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bSupportsPinLocking")); }
    BrzCampoPonteiro bSupportsStorageInterfaceLinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bSupportsStorageInterfaceLinking")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAmmoContainerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseAmmoContainerBuff")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowUseMarketField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPAllowUseMarket")); }
    BrzCampoPonteiro bUseBPCanAddWirelessExchangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPCanAddWirelessExchange")); }
    BrzCampoPonteiro bUseBPCanBeActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPCanBeActivated")); }
    BrzCampoPonteiro bUseBPCanBeActivatedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPCanBeActivatedByPlayer")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFuelConsumptionMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetFuelConsumptionMultiplier")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetQuantityOfItemWithoutCheckingInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetQuantityOfItemWithoutCheckingInventory")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPNotifyWirelessConsumerAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPNotifyWirelessConsumerRemoved")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPNotifyWirelessSourceAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPNotifyWirelessSourceRemoved")); }
    BrzCampoPonteiro bUseBPOnClientUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPOnClientUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOnServerUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPOnServerUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostPreviewStructureFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPPostPreviewStructureFlipped")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPPreventCharacterBasing")); }
    BrzCampoPonteiro bUseBPPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPPreventStasis")); }
    BrzCampoPonteiro bUseBPSetPlayerConstructorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseBPSetPlayerConstructor")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCollisionCompsForFloatingDPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseCollisionCompsForFloatingDPS")); }
    BrzCampoPonteiro bUseColorRegionForEmitterColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseColorRegionForEmitterColor")); }
    BrzCampoPonteiro bUseCooldownOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseCooldownOnTransferAll")); }
    BrzCampoPonteiro bUseDeathCacheCharacterIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseDeathCacheCharacterID")); }
    BrzCampoPonteiro bUseHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseHarvestingComponent")); }
    BrzCampoPonteiro bUseMeshOriginForInventoryAccessTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseMeshOriginForInventoryAccessTrace")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseOpenSceneAction")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUseStasisGrid")); }
    BrzCampoPonteiro bUsesHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUsesHealth")); }
    BrzCampoPonteiro bUsingStructureColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bUsingStructureColors")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasAttachedToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bWasAttachedToPawn")); }
    BrzCampoPonteiro bWasPlacementSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bWasPlacementSnapped")); }
    BrzCampoPonteiro bWithinPreventionVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMarket.bWithinPreventionVolume")); }
    BitFieldValue<bool, unsigned __int32> bReceivingMarketLog()
    { return { (void*)this, "bReceivingMarketLog" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowUseMarket()
    { return { (void*)this, "bUseBPAllowUseMarket" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREMARKET_H
