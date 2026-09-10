// ==========================================================================
//  APrimalStructureItemContainer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FPrimalMapMarkerEntryData;
struct UChildActorComponent;
struct UMaterialInterface;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UPrimalInventoryComponent;
struct USoundBase;
struct UTexture2D;

#include "APrimalStructure.h"

struct APrimalStructureItemContainer : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureItemContainer"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.AddPowerJunctionLinkParticle(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void AddPowerJunctionLinkParticle(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.AddPowerJunctionLinkParticle(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.AddToValidatedByPinCodePlayerControllers(AShooterPlayerController*
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro AddToValidatedByPinCodePlayerControllers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.AddToValidatedByPinCodePlayerControllers(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalStructureItemContainer.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.AdjustNetDestructionTime(float)
    // endereco: casamento de bytes com a build de referencia
    bool AdjustNetDestructionTime(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalStructureItemContainer.AdjustNetDestructionTime(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.AllowSetPinCode()
    // endereco: cache_pdb_25090264
    BrzPonteiro AllowSetPinCode() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.AllowSetPinCode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.AllowToggleActivation(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowToggleActivation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer.AllowToggleActivation(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ApplyActivationMaterialsToComponent(UMeshComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyActivationMaterialsToComponent(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureItemContainer.ApplyActivationMaterialsToComponent(UMeshComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.AreThereAnyNearbyDrinkableWaterSourceStructures(UObject*,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AreThereAnyNearbyDrinkableWaterSourceStructures(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalStructureItemContainer.AreThereAnyNearbyDrinkableWaterSourceStructures(UObject*,UE::Math::TVector<double>,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.AttemptRestartContainerActiveHealthDecrease()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AttemptRestartContainerActiveHealthDecrease() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.AttemptRestartContainerActiveHealthDecrease()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.BPApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool BPApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureItemContainer.BPApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPCanAddWirelessExchange(UPrimalWirelessExchangeData*,APrimalStruc
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPCanAddWirelessExchange(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureItemContainer.BPCanAddWirelessExchange(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*,UPrimalWirelessExchangeData*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPCanBeActivated()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPCanBeActivated() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.BPCanBeActivated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPCanBeActivatedByPlayer(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPCanBeActivatedByPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.BPCanBeActivatedByPlayer(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPDisplayWirelessSupplyLinks(FName,TArray<APrimalStructureItemCont
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPDisplayWirelessSupplyLinks(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalStructureItemContainer.BPDisplayWirelessSupplyLinks(FName,TArray<APrimalStructureItemContainer*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPGetCollisionCompInstanceInfo(FHitResult,bool&,bool&,TEnumAsByte<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCollisionCompInstanceInfo(void* a0, void* a1, void* a2, void* a3, const FName& a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "APrimalStructureItemContainer.BPGetCollisionCompInstanceInfo(FHitResult,bool&,bool&,TEnumAsByte<EPrimalEquipmentType::Type>&,FName&)", a0, a1, a2, a3, const_cast<FName*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPGetCollisionCompInstanceInfo(void* a0, void* a1, void* a2, void* a3, FName* a4) const
    { return BPGetCollisionCompInstanceInfo(a0, a1, a2, a3, *a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPGetFuelConsumptionMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetFuelConsumptionMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.BPGetFuelConsumptionMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPGetItemCountQty(TSubclassOf<UPrimalItem>,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BPGetItemCountQty(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureItemContainer.BPGetItemCountQty(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPGetQuantityOfItemWithoutCheckingInventory(TSubclassOf<UPrimalIte
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=124]]
    BrzPonteiro BPGetQuantityOfItemWithoutCheckingInventory(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureItemContainer.BPGetQuantityOfItemWithoutCheckingInventory(TSubclassOf<UPrimalItem>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPGetSortingInvComp()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetSortingInvComp() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.BPGetSortingInvComp()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPIncrementItemCountQty(TSubclassOf<UPrimalItem>,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPIncrementItemCountQty(void* a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "APrimalStructureItemContainer.BPIncrementItemCountQty(TSubclassOf<UPrimalItem>,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPNotifyInventoryItemChange(bool,UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPNotifyInventoryItemChange(bool a0, void* a1, bool a2) const
    {
        return NativeCall<void*, bool, void*, bool>(this, "APrimalStructureItemContainer.BPNotifyInventoryItemChange(bool,UPrimalItem*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPNotifyPowerChanged()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPNotifyPowerChanged() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.BPNotifyPowerChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPNotifyWirelessConsumerAdded(UPrimalWirelessExchangeData*,APrimal
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    BrzPonteiro BPNotifyWirelessConsumerAdded(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureItemContainer.BPNotifyWirelessConsumerAdded(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPNotifyWirelessConsumerRemoved(UPrimalWirelessExchangeData*,APrim
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    BrzPonteiro BPNotifyWirelessConsumerRemoved(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureItemContainer.BPNotifyWirelessConsumerRemoved(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPNotifyWirelessSourceAdded(UPrimalWirelessExchangeData*,APrimalSt
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    BrzPonteiro BPNotifyWirelessSourceAdded(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureItemContainer.BPNotifyWirelessSourceAdded(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPNotifyWirelessSourceRemoved(UPrimalWirelessExchangeData*,APrimal
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPNotifyWirelessSourceRemoved(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureItemContainer.BPNotifyWirelessSourceRemoved(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPOnContainerActiveHealthDecrease()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    BrzPonteiro BPOnContainerActiveHealthDecrease() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.BPOnContainerActiveHealthDecrease()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPPreGetMultiUseEntries(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro BPPreGetMultiUseEntries(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.BPPreGetMultiUseEntries(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BPRename(FString)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=159+grafo=3/3]]
    BrzPonteiro BPRename(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.BPRename(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPRename(FString* a0) const
    { return BPRename(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.BroadcastSkinInventoryChange_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BroadcastSkinInventoryChange_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.BroadcastSkinInventoryChange_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CanBeActivated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=308]]
    bool CanBeActivated() const
    {
        return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CanDrawFuelRemaining()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanDrawFuelRemaining() const
    {
        return NativeCall<bool>(this, "APrimalStructureItemContainer.CanDrawFuelRemaining()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CanOpen(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CanOpen(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer.CanOpen(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CharacterBasedOnUpdate(AActor*,float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=415+grafo=8/8]]
    void CharacterBasedOnUpdate(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate(AActor*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CheckAutoReactivate()
    // endereco: casamento de bytes com a build de referencia
    void CheckAutoReactivate() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CheckForDeathCacheEmitter()
    // endereco: casamento de bytes com a build de referencia
    void CheckForDeathCacheEmitter() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CheckForWirelessWater(APrimalStructureItemContainer*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CheckForWirelessWater(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalStructureItemContainer.CheckForWirelessWater(APrimalStructureItemContainer*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CheckFuelSetActive()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=92]]
    void CheckFuelSetActive() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureItemContainer.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.ClientNotifyInventoryItemChange(bool,UPrimalItem*,bool)
    // endereco: cache_pdb_25090264
    void ClientNotifyInventoryItemChange(bool a0, void* a1, bool a2) const
    {
        NativeCall<void, bool, void*, bool>(this, "APrimalStructureItemContainer.ClientNotifyInventoryItemChange(bool,UPrimalItem*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.ConsumeFuel(bool)
    // endereco: casamento de bytes com a build de referencia
    void ConsumeFuel(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.CopyStructureValuesFrom(APrimalStructureItemContainer*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=520+grafo=3/3]]
    void CopyStructureValuesFrom(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom(APrimalStructureItemContainer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.DeferredNotifyItemAdded()
    // endereco: cache_pdb_25090264
    void DeferredNotifyItemAdded() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.DeferredNotifyItemAdded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.DrawHUD(AShooterHUD*)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureItemContainer herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.DrawStructureTooltip(AShooterHUD*,bool)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureItemContainer herda dela: o `this` e' compativel por construcao
    // endereco: cache_pdb_25090264
    void DrawStructureTooltip(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructure.DrawStructureTooltip(AShooterHUD*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=37]]
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureItemContainer.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetBestWirelessWaterSource(APrimalStructureItemContainer*,APrimalS
    // endereco: casamento de bytes com a build de referencia
    void GetBestWirelessWaterSource(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructureItemContainer.GetBestWirelessWaterSource(APrimalStructureItemContainer*,APrimalStructureItemContainer*&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetBlueprintSpawnActorTransform(UE::Math::TVector<double>&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    void GetBlueprintSpawnActorTransform(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.GetDebugInfoString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.GetDescriptiveName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultA
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2987+grafo=113/113]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.GetMaterialsForActivation(TArray<UMaterialInterface*,TSizedDefault
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetMaterialsForActivation(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalStructureItemContainer.GetMaterialsForActivation(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSized
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureItemContainer.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetNearbyWirelessStructures(UPrimalWirelessExchangeData*)
    // endereco: casamento de bytes com a build de referencia
    void GetNearbyWirelessStructures(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureItemContainer.GetNearbyWirelessStructures(UPrimalWirelessExchangeData*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetOverrideParticleLightColor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=230]]
    void GetOverrideParticleLightColor(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.GetOverrideParticleLightColor()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.GetSkinMaterialsForActivation(APrimalStructureItemContainer*,TArra
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkinMaterialsForActivation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureItemContainer.GetSkinMaterialsForActivation(APrimalStructureItemContainer*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.GetTimeFuelRemaining()
    // endereco: casamento de bytes com a build de referencia
    float GetTimeFuelRemaining() const
    {
        return NativeCall<float>(this, "APrimalStructureItemContainer.GetTimeFuelRemaining()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.IsPlayerControllerInPinCodeValidationList(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=171]]
    BrzPonteiro IsPlayerControllerInPinCodeValidationList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.IsPlayerControllerInPinCodeValidationList(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.IsValidForDinoFeedingContainer(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsValidForDinoFeedingContainer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.IsValidForDinoFeedingContainer(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.IsValidForStorageInterfaceLinking(APrimalStructureItemContainer*,b
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsValidForStorageInterfaceLinking(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureItemContainer.IsValidForStorageInterfaceLinking(APrimalStructureItemContainer*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.IsValidWaterSourceForPipe(APrimalStructureWaterPipe*)
    // endereco: cache_pdb_25090264
    bool IsValidWaterSourceForPipe(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer.IsValidWaterSourceForPipe(APrimalStructureWaterPipe*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.IsValidWirelessWaterSource(APrimalStructureItemContainer*)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidWirelessWaterSource(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer.IsValidWirelessWaterSource(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.IsValidatedPinCodePlayerController(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidatedPinCodePlayerController(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.IsValidatedPinCodePlayerController(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ManuallyAddWirelessConnection(UPrimalWirelessExchangeData*,APrimal
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    BrzPonteiro ManuallyAddWirelessConnection(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureItemContainer.ManuallyAddWirelessConnection(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ManuallyRemoveWirelessConnection(UPrimalWirelessExchangeData*,APri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ManuallyRemoveWirelessConnection(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureItemContainer.ManuallyRemoveWirelessConnection(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.MovePowerJunctionLink()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=173+grafo=3/3]]
    void MovePowerJunctionLink() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.MultiUpdateNearbyDedicatedStoragesToMatchVisuals(TArray<APrimalStr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiUpdateNearbyDedicatedStoragesToMatchVisuals(void* a0, double a1, bool a2) const
    {
        return NativeCall<void*, void*, double, bool>(this, "APrimalStructureItemContainer.MultiUpdateNearbyDedicatedStoragesToMatchVisuals(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,double,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.MultiUpdateNearbyDedicatedStoragesToMatchVisuals_Implementation(TA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiUpdateNearbyDedicatedStoragesToMatchVisuals_Implementation(void* a0, double a1, bool a2) const
    {
        return NativeCall<void*, void*, double, bool>(this, "APrimalStructureItemContainer.MultiUpdateNearbyDedicatedStoragesToMatchVisuals_Implementation(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,double,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NetRefreshActiveEffects_Implementation()
    // endereco: cache_pdb_25090264
    void NetRefreshActiveEffects_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.NetRefreshActiveEffects_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.NetSetContainerActive(bool,TSubclassOf<UPrimalItem>,short)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetSetContainerActive(bool a0, void* a1, short a2) const
    {
        return NativeCall<void*, bool, void*, short>(this, "APrimalStructureItemContainer.NetSetContainerActive(bool,TSubclassOf<UPrimalItem>,short)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NetSetContainerActive_Implementation(bool,TSubclassOf<UPrimalItem>
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=105]]
    void NetSetContainerActive_Implementation(bool a0, void* a1, short a2) const
    {
        NativeCall<void, bool, void*, short>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation(bool,TSubclassOf<UPrimalItem>,short)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NotifyCraftedItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    void NotifyCraftedItem(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.NotifyCraftedItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NotifyInventoryItemsSwapped(UPrimalItem*,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyInventoryItemsSwapped(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureItemContainer.NotifyInventoryItemsSwapped(UPrimalItem*,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NotifyItemAdded(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemAdded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NotifyItemQuantityUpdated(UPrimalItem*,int)
    // endereco: cache_pdb_25090264
    void NotifyItemQuantityUpdated(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated(UPrimalItem*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.NotifyItemRemoved(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.NotifyItemRemoved(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.NotifySkinInventoryChange()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro NotifySkinInventoryChange() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.NotifySkinInventoryChange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.OnContainerRenamed()
    // endereco: casamento de bytes com a build de referencia
    void OnContainerRenamed() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.OnContainerRenamed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDeserializedByGame(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureItemContainer.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.OverrideHasWaterSource()
    // endereco: cache_pdb_25090264
    bool OverrideHasWaterSource() const
    {
        return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.PlacedStructure(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.PlacedStructureLocation()
    // endereco: casamento de bytes com a build de referencia
    void PlacedStructureLocation() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.PlacedStructureLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureItemContainer.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.PreviewClosestWirelessSources(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void PreviewClosestWirelessSources(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.PreviewClosestWirelessSources(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructureItemContainer.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessEditText(void* a0, FString* a1, bool a2) const
    { ProcessEditText(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.RefreshFuelState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void RefreshFuelState() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.RefreshInventoryItemCounts()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void RefreshInventoryItemCounts() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts()");
    }

    // jogo_confirmou_dump
    //   APrimalStructureItemContainer.RefreshPowerJunctionLink()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=656+grafo=11/11]]
    void RefreshPowerJunctionLink() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.RefreshPowered(APrimalStructureItemContainer*)
    // endereco: casamento de bytes com a build de referencia
    void RefreshPowered(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.RefreshPowered(APrimalStructureItemContainer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.RefreshStructureColors(UMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void RefreshStructureColors(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.RefreshStructureColors(UMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.RefreshWatered()
    // endereco: casamento de bytes com a build de referencia
    void RefreshWatered() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.RefreshWatered()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.RefreshWirelessBlueprintSharing(APrimalStructureItemContainer*,boo
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    BrzPonteiro RefreshWirelessBlueprintSharing(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureItemContainer.RefreshWirelessBlueprintSharing(APrimalStructureItemContainer*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.RemoteInventoryAllowViewing(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool RemoteInventoryAllowViewing(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowViewing(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.RemovePowerJunctionLinkParticle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=61]]
    BrzPonteiro RemovePowerJunctionLinkParticle() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.RemovePowerJunctionLinkParticle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.RemoveWirelessConnection(UPrimalWirelessExchangeData*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveWirelessConnection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.RemoveWirelessConnection(UPrimalWirelessExchangeData*)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalStructureItemContainer.RemoveWirelessConnections()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=21]]
    void RemoveWirelessConnections() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.RemoveWirelessConnections()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ServerCloseRemoteInventory(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCloseRemoteInventory(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.ServerCloseRemoteInventory(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ServerOpenRemoteInventory(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerOpenRemoteInventory(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.ServerOpenRemoteInventory(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SetContainerActive(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetContainerActive(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SetDefaultBlacklistedItemCount(int)
    // endereco: casamento de bytes com a build de referencia
    void SetDefaultBlacklistedItemCount(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureItemContainer.SetDefaultBlacklistedItemCount(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SetDelayedActivation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=255+grafo=4/4]]
    void SetDelayedActivation() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SetDisabledTimer(float)
    // endereco: casamento de bytes com a build de referencia
    void SetDisabledTimer(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SetPlayerConstructor(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=51]]
    void SetPlayerConstructor(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.SetPlayerConstructor(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.SetPoweredOverrideCounter(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetPoweredOverrideCounter(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureItemContainer.SetPoweredOverrideCounter(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.SetSaddleRiderInventoryViewer(AShooterPlayerController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    BrzPonteiro SetSaddleRiderInventoryViewer(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureItemContainer.SetSaddleRiderInventoryViewer(AShooterPlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SetWaterState(bool)
    // endereco: cache_pdb_25090264
    void SetWaterState(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetWaterState(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.SimpleGetBestWaterSource(UObject*,UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SimpleGetBestWaterSource(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalStructureItemContainer.SimpleGetBestWaterSource(UObject*,UE::Math::TVector<double>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.Stasis()
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SubtractWaterFromConnections(float,bool)
    // endereco: casamento de bytes com a build de referencia
    float SubtractWaterFromConnections(float a0, bool a1) const
    {
        return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.SubtractWaterFromConnections_IncludingSelf(float,bool&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SubtractWaterFromConnections_IncludingSelf(float a0, void* a1, bool a2) const
    {
        return NativeCall<void*, float, void*, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections_IncludingSelf(float,bool&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SubtractWaterFromPipes(float,bool)
    // endereco: casamento de bytes com a build de referencia
    float SubtractWaterFromPipes(float a0, bool a1) const
    {
        return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromPipes(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.SubtractWaterFromWireless(float,float&,bool)
    // endereco: casamento de bytes com a build de referencia
    void SubtractWaterFromWireless(float a0, void* a1, bool a2) const
    {
        NativeCall<void, float, void*, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromWireless(float,float&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.TargetingTeamChanged()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=292+grafo=5/5]]
    void TargetingTeamChanged() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.TryActivation()
    // endereco: casamento de bytes com a build de referencia
    void TryActivation() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureItemContainer.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.TryUpdateNearbyStorageInterfaces()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=436+grafo=4/4]]
    BrzPonteiro TryUpdateNearbyStorageInterfaces() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.TryUpdateNearbyStorageInterfaces()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis()");
    }

    // jogo_confirmou_dump
    //   APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease()
    // endereco: casamento de bytes com a build de referencia
    void UpdateContainerActiveHealthDecrease() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.UpdateNearbyDedicatedStoragesToMatchVisuals()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateNearbyDedicatedStoragesToMatchVisuals() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.UpdateNearbyDedicatedStoragesToMatchVisuals()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.UpdateSolarPower()
    // endereco: casamento de bytes com a build de referencia
    void UpdateSolarPower() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.UpdateSolarPower()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.UpdateTribeGroupInventoryRank(unsignedchar)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro UpdateTribeGroupInventoryRank(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalStructureItemContainer.UpdateTribeGroupInventoryRank(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.UpdateWirelessExchange(UPrimalWirelessExchangeData*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateWirelessExchange(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer.UpdateWirelessExchange(UPrimalWirelessExchangeData*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.UpdateWirelessExchanges()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=21]]
    void UpdateWirelessExchanges() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.UpdateWirelessExchanges()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers()
    // endereco: cache_pdb_25090264
    bool UseItemSpoilingTimeMultipliers() const
    {
        return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ValidateAndUpdateWirelessExchanges()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=150]]
    BrzPonteiro ValidateAndUpdateWirelessExchanges() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer.ValidateAndUpdateWirelessExchanges()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.ValidateWirelessExchange(UPrimalWirelessExchangeData*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateWirelessExchange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer.ValidateWirelessExchange(UPrimalWirelessExchangeData*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer.VerifyPinCode(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro VerifyPinCode(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureItemContainer.VerifyPinCode(int)", a0);
    }

    TObjectPtr<UTexture2D>& ActivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.ActivateContainerIcon"); }
    FString& ActivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.ActivateContainerString"); }
    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureItemContainer.ActivateMaterials"); }
    BrzCampoPonteiro ActivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.ActivatedIconColor")); }
    float& ActivationCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ActivationCooldownTime"); }
    TArray<void*>& ActiveRequiresFuelItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer.ActiveRequiresFuelItems"); }
    //  no cache antigo este campo se chamava AdjustNetDestructionTimeHandle.
    //  nesta build ele e' `WirelessExchangeRefs` — resolve por NOME.
    BrzCampoPonteiro AdjustNetDestructionTimeHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.WirelessExchangeRefs")); }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.AllowWirelessCraftingIcon"); }
    float& BasedCharacterDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageAmount"); }
    float& BasedCharacterDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageInterval"); }
    BrzCampoPonteiro BasedCharacterDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.BasedCharacterDamageType")); }
    BrzCampoPonteiro BatteryClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.BatteryClassOverride")); }
    int& BlacklistedItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.BlacklistedItemCount"); }
    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxName"); }
    FString& BoxNamePrefaceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxNamePrefaceString"); }
    USoundBase*& ContainerActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerActivatedSound"); }
    float& ContainerActiveDecreaseHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ContainerActiveDecreaseHealthSpeed"); }
    BrzCampoPonteiro ContainerActiveHealthDecreaseDamageTypePassiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.ContainerActiveHealthDecreaseDamageTypePassive")); }
    USoundBase*& ContainerDeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerDeactivatedSound"); }
    float& CurrentFuelQuantityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.CurrentFuelQuantity"); }
    double& CurrentFuelTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.CurrentFuelTimeCache"); }
    int& CurrentItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.CurrentItemCount"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureItemContainer.CurrentPinCode"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DeactivateContainerIcon"); }
    FString& DeactivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DeactivateContainerString"); }
    BrzCampoPonteiro DeactivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.DeactivatedIconColor")); }
    unsigned long long& DeathCacheCharacterIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalStructureItemContainer.DeathCacheCharacterID"); }
    double& DeathCacheCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.DeathCacheCreationTime"); }
    USoundBase*& DefaultAudioTemplateField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.DefaultAudioTemplate"); }
    BrzCampoPonteiro DefaultParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.DefaultParticleLightColor")); }
    BrzCampoPonteiro DefaultParticleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.DefaultParticleTemplate")); }
    BrzCampoPonteiro DemolishInventoryDepositClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.DemolishInventoryDepositClass")); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionName"); }
    float& DrawFuelRemainingOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DrawFuelRemainingOffset"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DrinkWaterIcon"); }
    float& DropInventoryDepositTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryDepositTraceDistance"); }
    float& DropInventoryOnDestructionLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryOnDestructionLifespan"); }
    int& EmitterColorRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.EmitterColorRegionIndex"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.EnableUnpoweredAutoActivationIcon"); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.EngramRequirementClassOverride")); }
    TArray<void*>& FuelConsumeDecreaseDurabilityAmountsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer.FuelConsumeDecreaseDurabilityAmounts"); }
    float& FuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.FuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro FuelItemTrueClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.FuelItemTrueClass")); }
    TArray<void*>& FuelItemsConsumeIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer.FuelItemsConsumeInterval"); }
    TArray<void*>& FuelItemsConsumedGiveItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer.FuelItemsConsumedGiveItems"); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HypoThermiaInsulation"); }
    TArray<UMaterialInterface*>& InActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureItemContainer.InActivateMaterials"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.InsulationRange"); }
    BrzCampoPonteiro ItemsToDisplayInStructureTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.ItemsToDisplayInStructureTooltip")); }
    BrzCampoPonteiro JunctionCableBeamOffsetEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetEnd")); }
    BrzCampoPonteiro JunctionCableBeamOffsetStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetStart")); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureItemContainer.JunctionLinkCableParticle"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureItemContainer.JunctionLinkParticleTemplate"); }
    double& LastActivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.LastActivatedTime"); }
    double& LastActiveStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.LastActiveStateChangeTime"); }
    //  no cache antigo este campo se chamava LastBasedCharacterDamageFrame.
    //  nesta build ele e' `JunctionLinkParticleTemplate` — resolve por NOME.
    int& LastBasedCharacterDamageFrameField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.JunctionLinkParticleTemplate"); }
    //  no cache antigo este campo se chamava LastBasedCharacterDamageTime.
    //  nesta build ele e' `PoweredNearbyStructureRange` — resolve por NOME.
    double& LastBasedCharacterDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureRange"); }
    double& LastCheckedFuelTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.LastCheckedFuelTime"); }
    double& LastDeactivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.LastDeactivatedTime"); }
    //  no cache antigo este campo se chamava LastSignNamingTime.
    //  nesta build ele e' `UISceneTemplate` — resolve por NOME.
    double& LastSignNamingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.UISceneTemplate"); }
    double& LastSolarRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.LastSolarRefreshTime"); }
    AActor*& LinkedBlueprintSpawnActorPointField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureItemContainer.LinkedBlueprintSpawnActorPoint"); }
    TWeakObjectPtr<void>& LinkedPowerJunctionStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructure"); }
    int& LinkedPowerJunctionStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructureID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureItemContainer.LocalCorpseEmitter"); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() const
    { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureItemContainer.MapMarkerLocationInfo"); }
    float& MaxActivationDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.MaxActivationDistance"); }
    int& MaxBoxNameLengthField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxBoxNameLength"); }
    int& MaxItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxItemCount"); }
    UChildActorComponent*& MyChildEmitterSpawnableField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureItemContainer.MyChildEmitterSpawnable"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureItemContainer.MyInventoryComponent"); }
    double& NetDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.NetDestructionTime"); }
    BrzCampoPonteiro NextConsumeFuelGiveItemTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.NextConsumeFuelGiveItemType")); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.OpenSceneActionIcon"); }
    FString& OpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.OpenSceneActionName"); }
    TArray<USoundBase*>& OverrideAudioTemplatesField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalStructureItemContainer.OverrideAudioTemplates"); }
    TArray<void*>& OverrideParticleLightColorField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer.OverrideParticleLightColor"); }
    TArray<void*>& OverrideParticleTemplateItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer.OverrideParticleTemplateItemClasses"); }
    BrzCampoPonteiro OverrideParticleTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.OverrideParticleTemplates")); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& PoweredNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureRange"); }
    BrzCampoPonteiro PoweredNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.PoweredNearbyStructureTemplate")); }
    int& PoweredOverrideCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.PoweredOverrideCounter"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.PreventWirelessCraftingIcon"); }
    float& RandomFuelUpdateTimeMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMax"); }
    float& RandomFuelUpdateTimeMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMin"); }
    BrzCampoPonteiro ReplicatedFuelItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.ReplicatedFuelItemClass")); }
    short& ReplicatedFuelItemColorIndexField() const
    { return *GetNativePointerField<short*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex"); }
    BrzCampoPonteiro RequiresItemForOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.RequiresItemForOpenSceneAction")); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro SkinInventoryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.SkinInventoryData")); }
    double& SkipConsumeFuelUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.SkipConsumeFuelUntilTime"); }
    float& SolarRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshInterval"); }
    float& SolarRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMin"); }
    float& TimeCooldownRequestFuelRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.TimeCooldownRequestFuelRemaining"); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer.TribeGroupInventoryRank"); }
    BrzCampoPonteiro UISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.UISceneTemplate")); }
    //  no cache antigo este campo se chamava UpdateContainerActiveHealthDecreaseHandle.
    //  nesta build ele e' `BlacklistedItemCount` — resolve por NOME.
    BrzCampoPonteiro UpdateContainerActiveHealthDecreaseHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.BlacklistedItemCount")); }
    float& ValidCraftingResourceMaxDurabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ValidCraftingResourceMaxDurability"); }
    TArray<TWeakObjectPtr<void>>& ValidatedByPinCodePlayerControllersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureItemContainer.ValidatedByPinCodePlayerControllers"); }
    BrzCampoPonteiro WirelessExchangeRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer.WirelessExchangeRefs")); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BitFieldValue<bool, unsigned __int32> bAdjustDamageAsPlayerWithEquipment()
    { return { (void*)this, "bAdjustDamageAsPlayerWithEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bUseCollisionCompsForFloatingDPS()
    { return { (void*)this, "bUseCollisionCompsForFloatingDPS" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyConsumeDurabilityOnEquipmentForEnemies()
    { return { (void*)this, "bOnlyConsumeDurabilityOnEquipmentForEnemies" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateContainer()
    { return { (void*)this, "bAutoActivateContainer" }; }
    BitFieldValue<bool, unsigned __int32> bCanToggleActivation()
    { return { (void*)this, "bCanToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenFueled()
    { return { (void*)this, "bAutoActivateWhenFueled" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomName()
    { return { (void*)this, "bAllowCustomName" }; }
    BitFieldValue<bool, unsigned __int32> bContainerActivated()
    { return { (void*)this, "bContainerActivated" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated()
    { return { (void*)this, "bOnlyUseSpoilingMultipliersIfActivated" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingSubstractConnectedWater()
    { return { (void*)this, "bCraftingSubstractConnectedWater" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking()
    { return { (void*)this, "bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges()
    { return { (void*)this, "bServerBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bClientBPNotifyInventoryItemChanges()
    { return { (void*)this, "bClientBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUI()
    { return { (void*)this, "bDisplayActivationOnInventoryUI" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFuelConsumptionMultiplier()
    { return { (void*)this, "bUseBPGetFuelConsumptionMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPreventToggleActivation()
    { return { (void*)this, "bPreventToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bStartedUnderwater()
    { return { (void*)this, "bStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bCheckStartedUnderwater()
    { return { (void*)this, "bCheckStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUISecondary()
    { return { (void*)this, "bDisplayActivationOnInventoryUISecondary" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUITertiary()
    { return { (void*)this, "bDisplayActivationOnInventoryUITertiary" }; }
    BitFieldValue<bool, unsigned __int32> bFuelAllowActivationWhenNoPower()
    { return { (void*)this, "bFuelAllowActivationWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBattery()
    { return { (void*)this, "bPoweredAllowBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBattery()
    { return { (void*)this, "bPoweredUsingBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBattery()
    { return { (void*)this, "bPoweredHasBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowSolar()
    { return { (void*)this, "bPoweredAllowSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingSolar()
    { return { (void*)this, "bPoweredUsingSolar" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorRegionForEmitterColor()
    { return { (void*)this, "bUseColorRegionForEmitterColor" }; }
    BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode()
    { return { (void*)this, "UseBPApplyPinCode" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked()
    { return { (void*)this, "bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked()
    { return { (void*)this, "bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bHasFuel()
    { return { (void*)this, "bHasFuel" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderwater()
    { return { (void*)this, "bIsUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater()
    { return { (void*)this, "bDisableActivationUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAutoActivateWhenConnectedToWater()
    { return { (void*)this, "bForcePreventAutoActivateWhenConnectedToWater" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking()
    { return { (void*)this, "bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking()
    { return { (void*)this, "bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bDropInventoryOnDestruction()
    { return { (void*)this, "bDropInventoryOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemoved()
    { return { (void*)this, "bDestroyWhenAllItemsRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bDrinkingWater()
    { return { (void*)this, "bDrinkingWater" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredWaterSourceWhenActive()
    { return { (void*)this, "bPoweredWaterSourceWhenActive" }; }
    BitFieldValue<bool, unsigned __int32> bActiveRequiresPower()
    { return { (void*)this, "bActiveRequiresPower" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowerJunction()
    { return { (void*)this, "bIsPowerJunction" }; }
    BitFieldValue<bool, unsigned __int32> bHidePowerJunctionConnection()
    { return { (void*)this, "bHidePowerJunctionConnection" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateIfPowered()
    { return { (void*)this, "bAutoActivateIfPowered" }; }
    BitFieldValue<bool, unsigned __int32> bLastToggleActivated()
    { return { (void*)this, "bLastToggleActivated" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinActivation()
    { return { (void*)this, "bSupportsPinActivation" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowered()
    { return { (void*)this, "bIsPowered" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowTeamActivation()
    { return { (void*)this, "bOnlyAllowTeamActivation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateItemFuelClass()
    { return { (void*)this, "bReplicateItemFuelClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseOpenSceneAction()
    { return { (void*)this, "bUseOpenSceneAction" }; }
    BitFieldValue<bool, unsigned __int32> bHandledDestruction()
    { return { (void*)this, "bHandledDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivated()
    { return { (void*)this, "bUseBPCanBeActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivatedByPlayer()
    { return { (void*)this, "bUseBPCanBeActivatedByPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bBPOnContainerActiveHealthDecrease()
    { return { (void*)this, "bBPOnContainerActiveHealthDecrease" }; }
    BitFieldValue<bool, unsigned __int32> bBPIsValidWaterSourceForPipe()
    { return { (void*)this, "bBPIsValidWaterSourceForPipe" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower()
    { return { (void*)this, "bAllowAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenNoPower()
    { return { (void*)this, "bAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUsingAsWirelessCraftingSource()
    { return { (void*)this, "bPreventUsingAsWirelessCraftingSource" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresItemExactClass()
    { return { (void*)this, "bRequiresItemExactClass" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemovedExceptDefaults()
    { return { (void*)this, "bDestroyWhenAllItemsRemovedExceptDefaults" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventRemoteAddItems()
    { return { (void*)this, "bInventoryForcePreventRemoteAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventItemAppends()
    { return { (void*)this, "bInventoryForcePreventItemAppends" }; }
    BitFieldValue<bool, unsigned __int32> bDidSetContainerActive()
    { return { (void*)this, "bDidSetContainerActive" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeathCacheCharacterID()
    { return { (void*)this, "bUseDeathCacheCharacterID" }; }
    BitFieldValue<bool, unsigned __int32> bHideAutoActivateToggle()
    { return { (void*)this, "bHideAutoActivateToggle" }; }
    BitFieldValue<bool, unsigned __int32> bUseCooldownOnTransferAll()
    { return { (void*)this, "bUseCooldownOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoContainerBuff()
    { return { (void*)this, "bUseAmmoContainerBuff" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFuelRemaining()
    { return { (void*)this, "bDrawFuelRemaining" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetQuantityOfItemWithoutCheckingInventory()
    { return { (void*)this, "bUseBPGetQuantityOfItemWithoutCheckingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor()
    { return { (void*)this, "bUseBPSetPlayerConstructor" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime()
    { return { (void*)this, "bReplicateLastActivatedTime" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmmoContainer()
    { return { (void*)this, "bIsAmmoContainer" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseSwapped()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseSwapped" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyRemoteViewerChange()
    { return { (void*)this, "bBPNotifyRemoteViewerChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOriginForInventoryAccessTrace()
    { return { (void*)this, "bUseMeshOriginForInventoryAccessTrace" }; }
    BitFieldValue<bool, unsigned __int32> AllowOverrideParticleLightColor()
    { return { (void*)this, "AllowOverrideParticleLightColor" }; }
    BitFieldValue<bool, unsigned __int32> bApplyNiagaraColorInBP()
    { return { (void*)this, "bApplyNiagaraColorInBP" }; }
    BitFieldValue<bool, unsigned __int32> bForceNeverLock()
    { return { (void*)this, "bForceNeverLock" }; }
    BitFieldValue<bool, unsigned __int32> bHideUnusedParticleTypesOnRefreshActiveEffects()
    { return { (void*)this, "bHideUnusedParticleTypesOnRefreshActiveEffects" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBot()
    { return { (void*)this, "bPoweredAllowBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBot()
    { return { (void*)this, "bPoweredHasBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBot()
    { return { (void*)this, "bPoweredUsingBot" }; }
    BitFieldValue<bool, unsigned __int32> bPreventContainerPingType()
    { return { (void*)this, "bPreventContainerPingType" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLinkingToStorageInterface()
    { return { (void*)this, "bPreventLinkingToStorageInterface" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsStorageInterfaceLinking()
    { return { (void*)this, "bSupportsStorageInterfaceLinking" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAddWirelessExchange()
    { return { (void*)this, "bUseBPCanAddWirelessExchange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessConsumerAdded()
    { return { (void*)this, "bUseBPNotifyWirelessConsumerAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessConsumerRemoved()
    { return { (void*)this, "bUseBPNotifyWirelessConsumerRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessSourceAdded()
    { return { (void*)this, "bUseBPNotifyWirelessSourceAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessSourceRemoved()
    { return { (void*)this, "bUseBPNotifyWirelessSourceRemoved" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_H
