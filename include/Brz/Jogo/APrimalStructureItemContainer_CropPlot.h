// ==========================================================================
//  APrimalStructureItemContainer_CropPlot — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_CROPPLOT_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_CROPPLOT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalStructure;
struct UObject;
struct UStaticMeshComponent;
struct UTexture2D;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureItemContainer_CropPlot : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureItemContainer_CropPlot"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.AddWater(float,bool)
    // endereco: casamento de bytes com a build de referencia
    float AddWater(float a0, bool a1) const
    {
        return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer_CropPlot.AddWater(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem>
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=368]]
    bool AllowCraftingResourceConsumption(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "APrimalStructureItemContainer_CropPlot.AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem>,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.AllowRemoteAddItemToInventory(UPrimalInventoryComponent*,
    // endereco: casamento de bytes com a build de referencia
    bool AllowRemoteAddItemToInventory(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructureItemContainer_CropPlot.AllowRemoteAddItemToInventory(UPrimalInventoryComponent*,UPrimalItem*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.BPAdjustCropYield_Max(int)
    // endereco: casamento de bytes com a build de referencia
    int BPAdjustCropYield_Max(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalStructureItemContainer_CropPlot.BPAdjustCropYield_Max(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.BPAdjustCropYield_SingleRefresh(int)
    // endereco: casamento de bytes com a build de referencia
    int BPAdjustCropYield_SingleRefresh(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalStructureItemContainer_CropPlot.BPAdjustCropYield_SingleRefresh(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.BPGetAdditionalGrowthMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float BPGetAdditionalGrowthMultiplier() const
    {
        return NativeCall<float>(this, "APrimalStructureItemContainer_CropPlot.BPGetAdditionalGrowthMultiplier()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureItemContainer_CropPlot.BPOnCropPhaseDecrease(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnCropPhaseDecrease(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureItemContainer_CropPlot.BPOnCropPhaseDecrease(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureItemContainer_CropPlot.BPOnCropPhaseIncrease(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnCropPhaseIncrease(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureItemContainer_CropPlot.BPOnCropPhaseIncrease(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.BPOnFertilizerItemUsedUp()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnFertilizerItemUsedUp() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPOnFertilizerItemUsedUp()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.BPOnHarvestItemsCreated(TArray<UPrimalItem*,TSizedDefault
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOnHarvestItemsCreated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer_CropPlot.BPOnHarvestItemsCreated(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureItemContainer_CropPlot.BPOnRefreshCrop(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnRefreshCrop(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureItemContainer_CropPlot.BPOnRefreshCrop(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.BPOnRemovedCrop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPOnRemovedCrop() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPOnRemovedCrop()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.BPOnUpdateCropVisuals()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnUpdateCropVisuals() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPOnUpdateCropVisuals()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=171+grafo=5/5]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.CanTendCrop(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanTendCrop(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer_CropPlot.CanTendCrop(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.CopyCreatureDataFromSeed(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=146]]
    void CopyCreatureDataFromSeed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.CopyCreatureDataFromSeed(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.Demolish(APlayerController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void Demolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureItemContainer_CropPlot.Demolish(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.DoRefreshCrop()
    // endereco: casamento de bytes com a build de referencia
    void DoRefreshCrop() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.DoRefreshCrop()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=50]]
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureItemContainer_CropPlot.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.ForceAllowsInventoryUse(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool ForceAllowsInventoryUse(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer_CropPlot.ForceAllowsInventoryUse(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.GetCropName()
    // endereco: casamento de bytes com a build de referencia
    void GetCropName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.GetCropName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.GetGreenHouseCropGrowthMultiplier()
    // endereco: cache_pdb_25090264
    float GetGreenHouseCropGrowthMultiplier() const
    {
        return NativeCall<float>(this, "APrimalStructureItemContainer_CropPlot.GetGreenHouseCropGrowthMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSize
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEnt
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureItemContainer_CropPlot.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.GetPhaseInventoryItemCount(ESeedCropPhase::Type)
    // endereco: casamento de bytes com a build de referencia
    int GetPhaseInventoryItemCount(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalStructureItemContainer_CropPlot.GetPhaseInventoryItemCount(ESeedCropPhase::Type)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureItemContainer_CropPlot.GetRandomItemToGive(ESeedCropPhase::Type)
    // endereco: casamento de bytes com a build de referencia
    void** GetRandomItemToGive(int a0) const
    {
        return NativeCall<void**, int>(this, "APrimalStructureItemContainer_CropPlot.GetRandomItemToGive(ESeedCropPhase::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.GetRandomTendingResourceIndex()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    unsigned char GetRandomTendingResourceIndex() const
    {
        return NativeCall<unsigned char>(this, "APrimalStructureItemContainer_CropPlot.GetRandomTendingResourceIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.GetRandomTendingResourceIndex_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRandomTendingResourceIndex_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer_CropPlot.GetRandomTendingResourceIndex_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.GetTendingResourceFromIndex(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTendingResourceFromIndex(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalStructureItemContainer_CropPlot.GetTendingResourceFromIndex(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.GetTendingResourceFromIndex_Implementation(unsignedchar)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=298+grafo=3/3]]
    BrzPonteiro GetTendingResourceFromIndex_Implementation(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalStructureItemContainer_CropPlot.GetTendingResourceFromIndex_Implementation(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer_CropPlot.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.InventoryItemUsed(UObject*)
    // endereco: casamento de bytes com a build de referencia
    void InventoryItemUsed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.InventoryItemUsed(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.IsAllowedToBuild(APlayerController*,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAllowedToBuild(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, bool a6, bool a7, void* a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, void*, bool, bool, void*>(this, "APrimalStructureItemContainer_CropPlot.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.NetExecCommand(FName,FNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool NetExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalStructureItemContainer_CropPlot.NetExecCommand(FName,FNetExecParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.NotifyCraftedItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
    BrzPonteiro NotifyCraftedItem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureItemContainer_CropPlot.NotifyCraftedItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.NotifyItemAdded(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemAdded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemAdded(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.NotifyItemRemoved(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemRemoved(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase(ESeedCropPhase::Type)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnRep_CurrentCropPhase(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase(ESeedCropPhase::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems(bool)
    // endereco: cache_pdb_25090264
    void OnRep_HasFruitItems(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.OnRep_PlantedCrop(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    void OnRep_PlantedCrop(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.OnRep_PlantedCrop(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.OnRep_WaterAmount()
    // endereco: cache_pdb_25090264
    void OnRep_WaterAmount() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.OnRep_WaterAmount()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.OverrideHasWaterSource()
    // endereco: cache_pdb_25090264
    bool OverrideHasWaterSource() const
    {
        return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.OverrideHasWaterSource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.PlacedStructure(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=51]]
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_CropPlot.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.RefreshCrop(float)
    // endereco: casamento de bytes com a build de referencia
    bool RefreshCrop(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalStructureItemContainer_CropPlot.RefreshCrop(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.RefreshFertilized()
    // endereco: casamento de bytes com a build de referencia
    void RefreshFertilized() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshFertilized()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureItemContainer_CropPlot.RefreshOpenToSky()
    // endereco: casamento de bytes com a build de referencia
    void RefreshOpenToSky() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshOpenToSky()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.RefreshWatered()
    // endereco: casamento de bytes com a build de referencia
    void RefreshWatered() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshWatered()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.RemovePlantedCrop()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1392+grafo=24/24]]
    void RemovePlantedCrop() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RemovePlantedCrop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.RequeueAutoWaterRefreshCrop(bool)
    // endereco: casamento de bytes com a build de referencia
    void RequeueAutoWaterRefreshCrop(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.RequeueAutoWaterRefreshCrop(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.SetWaterState(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void SetWaterState(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.SetWaterState(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.SpawnCreatureFromPlant()
    // endereco: casamento de bytes com a build de referencia
    UObject* SpawnCreatureFromPlant() const
    {
        return NativeCall<UObject*>(this, "APrimalStructureItemContainer_CropPlot.SpawnCreatureFromPlant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_CropPlot.Stasis()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Stasis() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer_CropPlot.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.SubtractWaterFromPipes(bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void SubtractWaterFromPipes(bool a0, bool a1, float a2) const
    {
        NativeCall<void, bool, bool, float>(this, "APrimalStructureItemContainer_CropPlot.SubtractWaterFromPipes(bool,bool,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.SubtractWaterFromWireless(bool,float)
    // endereco: casamento de bytes com a build de referencia
    void SubtractWaterFromWireless(bool a0, float a1) const
    {
        NativeCall<void, bool, float>(this, "APrimalStructureItemContainer_CropPlot.SubtractWaterFromWireless(bool,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_CropPlot.TendPlantWithResource(UPrimalItem*,UPrimalInventoryCompon
    // endereco: casamento de bytes com a build de referencia
    bool TendPlantWithResource(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructureItemContainer_CropPlot.TendPlantWithResource(UPrimalItem*,UPrimalInventoryComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.Tick(float)
    // classe: a funcao mora em AActor, e APrimalStructureItemContainer_CropPlot herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AActor.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureItemContainer_CropPlot.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.UpdateCropVisuals()
    // endereco: casamento de bytes com a build de referencia
    void UpdateCropVisuals() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.UpdateCropVisuals()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_CropPlot.UseItemSpoilingTimeMultipliers()
    // endereco: cache_pdb_25090264
    bool UseItemSpoilingTimeMultipliers() const
    {
        return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.UseItemSpoilingTimeMultipliers()");
    }

    float& ActiveRainWaterIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ActiveRainWaterIncreaseSpeed"); }
    float& AverageRainWaterIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.AverageRainWaterIncreaseMultiplier"); }
    float& CreatureTamingEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CreatureTamingEffectiveness"); }
    float& CropFruitFertilizerCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropFruitFertilizerCache"); }
    float& CropMaxFruitsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropMaxFruitsMultiplier"); }
    float& CropPhaseFertilizerCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropPhaseFertilizerCache"); }
    float& CropRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshInterval"); }
    float& CropRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMax"); }
    float& CropRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMin"); }
    double& CropRefreshTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshTimeCache"); }
    unsigned char& CurrentCropPhaseField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer_CropPlot.CurrentCropPhase"); }
    TObjectPtr<UTexture2D>& DestroyPlantedCropIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.DestroyPlantedCropIcon"); }
    BrzCampoPonteiro ExtraCropMeshScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.ExtraCropMeshScale")); }
    int& FertilizerAmountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerAmount"); }
    BrzCampoPonteiro FertilizerBaseItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.FertilizerBaseItemTemplate")); }
    float& FertilizerConsumptionRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerConsumptionRateMultiplier"); }
    TObjectPtr<UTexture2D>& FertilizerOffIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerOffIcon"); }
    TObjectPtr<UTexture2D>& FertilizerOnIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerOnIcon"); }
    //  no cache antigo este campo se chamava FrameCounter.
    //  nesta build ele e' `CropRefreshTimeCache` — resolve por NOME.
    unsigned long long& FrameCounterField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshTimeCache"); }
    float& GainWaterRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.GainWaterRate"); }
    float& GeneralGrowthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.GeneralGrowthMultiplier"); }
    TWeakObjectPtr<void>& IrrigationWaterTapField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureItemContainer_CropPlot.IrrigationWaterTap"); }
    double& LastCropRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_CropPlot.LastCropRefreshTime"); }
    //  no cache antigo este campo se chamava LastReplicatedFertilizerAmount.
    //  nesta build ele e' `LastCropRefreshTime` — resolve por NOME.
    int& LastReplicatedFertilizerAmountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.LastCropRefreshTime"); }
    float& MaxGreenHouseCropGrowthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseCropGrowthMultiplier"); }
    int& MaxGreenHouseStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseStructures"); }
    float& MaxWaterAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxWaterAmount"); }
    float& MinWateredOverridesCraftingField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MinWateredOverridesCrafting"); }
    TArray<UStaticMeshComponent*>& MyCropMeshesField() const
    { return *GetNativePointerField<TArray<UStaticMeshComponent*>*>(this, "APrimalStructureItemContainer_CropPlot.MyCropMeshes"); }
    APrimalStructure*& MyCropStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureItemContainer_CropPlot.MyCropStructure"); }
    //  no cache antigo este campo se chamava NextAllowedCropRefreshTime.
    //  nesta build ele e' `WaterNearbyStructureRange` — resolve por NOME.
    double& NextAllowedCropRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureRange"); }
    unsigned char& NumGreenHouseStructuresField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer_CropPlot.NumGreenHouseStructures"); }
    BrzCampoPonteiro PlantedCropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.PlantedCrop")); }
    float& ReplicatedCropPhaseFertilizerCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ReplicatedCropPhaseFertilizerCache"); }
    float& ReplicatedGamemodeCropGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ReplicatedGamemodeCropGrowthSpeedMultiplier"); }
    unsigned char& RequiredTendingItemIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer_CropPlot.RequiredTendingItemIndex"); }
    BrzCampoPonteiro SeedBaseItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.SeedBaseItemTemplate")); }
    BrzCampoPonteiro StoredCreatureDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.StoredCreatureData")); }
    int& TendingPhaseCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.TendingPhaseCounter"); }
    BrzCampoPonteiro TendingRequiredIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.TendingRequiredIcon")); }
    double& TendingWindowOpenedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_CropPlot.TendingWindowOpenedTime"); }
    float& WaterAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterAmount"); }
    float& WaterItemAmountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterItemAmountMultiplier"); }
    float& WaterNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureRange"); }
    BrzCampoPonteiro WaterNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureTemplate")); }
    BrzCampoPonteiro WateredOverridesCraftingItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.WateredOverridesCraftingItemTemplate")); }
    TArray<void*>& WateringItemTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer_CropPlot.WateringItemTemplates"); }
    //  no cache antigo este campo se chamava bDelayCropRefresh.
    //  nesta build ele e' `CropRefreshIntervalMin` — resolve por NOME.
    BrzCampoPonteiro bDelayCropRefreshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMin")); }
    BitFieldValue<bool, unsigned __int32> bUsesCrop()
    { return { (void*)this, "bUsesCrop" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterTank()
    { return { (void*)this, "bIsWaterTank" }; }
    BitFieldValue<bool, unsigned __int32> bGainWaterOverTime()
    { return { (void*)this, "bGainWaterOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bAutoFill()
    { return { (void*)this, "bAutoFill" }; }
    BitFieldValue<bool, unsigned __int32> bDontAddWaterOnInventoryItemUsed()
    { return { (void*)this, "bDontAddWaterOnInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOpenToSky()
    { return { (void*)this, "bAllowOpenToSky" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAdditionalGrowthMultiplier()
    { return { (void*)this, "bUseBPGetAdditionalGrowthMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bIsFertilized()
    { return { (void*)this, "bIsFertilized" }; }
    BitFieldValue<bool, unsigned __int32> bIsWatered()
    { return { (void*)this, "bIsWatered" }; }
    BitFieldValue<bool, unsigned __int32> bIsSeeded()
    { return { (void*)this, "bIsSeeded" }; }
    BitFieldValue<bool, unsigned __int32> bHasFruitItems()
    { return { (void*)this, "bHasFruitItems" }; }
    BitFieldValue<bool, unsigned __int32> bCropUsesGreenhouse()
    { return { (void*)this, "bCropUsesGreenhouse" }; }
    BitFieldValue<bool, unsigned __int32> bShowWaterAmount()
    { return { (void*)this, "bShowWaterAmount" }; }
    BitFieldValue<bool, unsigned __int32> bAutoMaxGreenhouseEffect()
    { return { (void*)this, "bAutoMaxGreenhouseEffect" }; }
    BitFieldValue<bool, unsigned __int32> bAutoMaxWaterAndFertilize()
    { return { (void*)this, "bAutoMaxWaterAndFertilize" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCropYield_Max()
    { return { (void*)this, "bUseBPAdjustCropYield_Max" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCropYield_SingleRefresh()
    { return { (void*)this, "bUseBPAdjustCropYield_SingleRefresh" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCropPhaseDecrease()
    { return { (void*)this, "bUseBPOnCropPhaseDecrease" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCropPhaseIncrease()
    { return { (void*)this, "bUseBPOnCropPhaseIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnFertilizerItemUsedUp()
    { return { (void*)this, "bUseBPOnFertilizerItemUsedUp" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHarvestItemsCreated()
    { return { (void*)this, "bUseBPOnHarvestItemsCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnNotifyCraftedItem()
    { return { (void*)this, "bUseBPOnNotifyCraftedItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRefreshCrop()
    { return { (void*)this, "bUseBPOnRefreshCrop" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRemovedCrop()
    { return { (void*)this, "bUseBPOnRemovedCrop" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnUpdateCropVisuals()
    { return { (void*)this, "bUseBPOnUpdateCropVisuals" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_CROPPLOT_H
