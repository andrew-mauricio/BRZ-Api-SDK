// ==========================================================================
//  APrimalStructureItemContainer_SupplyCrate — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_SUPPLYCRATE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_SUPPLYCRATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalEmitterSpawnable;
struct UMaterialInterface;
struct UMeshComponent;
struct UPrimalWindSourceComponent;
struct UTexture2D;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureItemContainer_SupplyCrate : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureItemContainer_SupplyCrate"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.CanOpen(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CanOpen(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureItemContainer_SupplyCrate.CanOpen(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=211]]
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.GenerateCrateItems()
    // endereco: casamento de bytes com a build de referencia
    void GenerateCrateItems() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.GenerateCrateItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureItemContainer_SupplyCrate.GetInterpolatedLocation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetInterpolatedLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureItemContainer_SupplyCrate.GetInterpolatedLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TS
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=664+grafo=23/23]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_SupplyCrate.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.GetMultiUseEntries(APlayerController*,TArray<FMultiUse
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureItemContainer_SupplyCrate.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.LoseHealth()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void LoseHealth() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.LoseHealth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.NotifyItemRemoved(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureItemContainer_SupplyCrate.NotifyItemRemoved(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=96]]
    void OnRep_FinishedCrateMovement() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void OnRep_FinishedCrateMovement_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureItemContainer_SupplyCrate.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_SupplyCrate.SetAppliedBuff(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void SetAppliedBuff(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer_SupplyCrate.SetAppliedBuff(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.SetContainerActive(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetContainerActive(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureItemContainer_SupplyCrate.SetContainerActive(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.StartLosingHealth()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=407+grafo=6/6]]
    void StartLosingHealth() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.StartLosingHealth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureItemContainer_SupplyCrate.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_SupplyCrate.TickFadeOut()
    // endereco: casamento de bytes com a build de referencia
    void TickFadeOut() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.TickFadeOut()");
    }

    float& AboveOneExtraQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.AboveOneExtraQualityMultiplier"); }
    TArray<void*>& AdditionalItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer_SupplyCrate.AdditionalItemSets"); }
    BrzCampoPonteiro AdditionalItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.AdditionalItemSetsOverride")); }
    BrzCampoPonteiro ClientCrateMovementUpdateRateMinMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.ClientCrateMovementUpdateRateMinMax")); }
    BrzCampoPonteiro CrateColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateColorParameter")); }
    BrzCampoPonteiro CrateDissolveCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateDissolveCurve")); }
    BrzCampoPonteiro CrateLocationCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateLocationCurve")); }
    float& CrateMovementDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateMovementDuration"); }
    BrzCampoPonteiro CrateMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateMovementMode")); }
    BrzCampoPonteiro CrateRotationCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateRotationCurve")); }
    BrzCampoPonteiro CrateSpawnInLocationEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateSpawnInLocationEffect")); }
    APrimalEmitterSpawnable*& CrateSpawnInLocationEffectRefField() const
    { return *GetNativePointerField<APrimalEmitterSpawnable**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateSpawnInLocationEffectRef"); }
    float& CrateStartHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateStartHeight"); }
    float& CurrentCrateCurveTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateCurveTime"); }
    BrzCampoPonteiro CurrentCrateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateLocation")); }
    BrzCampoPonteiro CurrentCrateRelLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateRelLocation")); }
    BrzCampoPonteiro CurrentCrateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateRotation")); }
    float& CurrentFadeOutTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentFadeOutTime"); }
    BrzCampoPonteiro FinalCrateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.FinalCrateLocation")); }
    BrzCampoPonteiro FinalCrateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.FinalCrateRotation")); }
    BrzCampoPonteiro HUDWorldOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.HUDWorldOffset")); }
    float& InitialTimeToLoseHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.InitialTimeToLoseHealth"); }
    float& IntervalPercentHealthToLoseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.IntervalPercentHealthToLose"); }
    float& IntervalTimeToLoseHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.IntervalTimeToLoseHealth"); }
    TObjectPtr<UMaterialInterface>& InvisibleMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "APrimalStructureItemContainer_SupplyCrate.InvisibleMaterial"); }
    TArray<void*>& ItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer_SupplyCrate.ItemSets"); }
    BrzCampoPonteiro ItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.ItemSetsOverride")); }
    TArray<TWeakObjectPtr<void>>& LinkedNPCsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureItemContainer_SupplyCrate.LinkedNPCs"); }
    TWeakObjectPtr<void>& LinkedToCrateSpawnVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureItemContainer_SupplyCrate.LinkedToCrateSpawnVolume"); }
    float& MaxItemSetsField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxItemSets"); }
    int& MaxLevelToAccessField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxLevelToAccess"); }
    float& MaxQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxQualityMultiplier"); }
    float& MinItemSetsField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MinItemSets"); }
    float& MinQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MinQualityMultiplier"); }
    double& NextCheckHideSupplyCratesTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_SupplyCrate.NextCheckHideSupplyCratesTime"); }
    double& NextCrateMovementUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_SupplyCrate.NextCrateMovementUpdateTime"); }
    float& NumItemSetsPowerField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.NumItemSetsPower"); }
    TArray<UMaterialInterface*>& OriginalMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureItemContainer_SupplyCrate.OriginalMaterials"); }
    UMeshComponent*& RenderedCrateMeshComponentField() const
    { return *GetNativePointerField<UMeshComponent**>(this, "APrimalStructureItemContainer_SupplyCrate.RenderedCrateMeshComponent"); }
    int& RequiredLevelToAccessField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_SupplyCrate.RequiredLevelToAccess"); }
    BrzCampoPonteiro ServerCrateMovementUpdateRateMinMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.ServerCrateMovementUpdateRateMinMax")); }
    BrzCampoPonteiro SpawnInInDamageCollisionBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureItemContainer_SupplyCrate.SpawnInInDamageCollisionBoxExtent")); }
    double& StartedCrateMovementTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_SupplyCrate.StartedCrateMovementTime"); }
    TObjectPtr<UTexture2D>& SurvivorLevelUpIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_SupplyCrate.SurvivorLevelUpIcon"); }
    UPrimalWindSourceComponent*& WindSourceComponentRefField() const
    { return *GetNativePointerField<UPrimalWindSourceComponent**>(this, "APrimalStructureItemContainer_SupplyCrate.WindSourceComponentRef"); }
    BitFieldValue<bool, unsigned __int32> bGeneratedCrateItems()
    { return { (void*)this, "bGeneratedCrateItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsBonusCrate()
    { return { (void*)this, "bIsBonusCrate" }; }
    BitFieldValue<bool, unsigned __int32> bIsQuestCrate()
    { return { (void*)this, "bIsQuestCrate" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnCrateOnTopOfStructures()
    { return { (void*)this, "bSpawnCrateOnTopOfStructures" }; }
    BitFieldValue<bool, unsigned __int32> bAppliedBuff()
    { return { (void*)this, "bAppliedBuff" }; }
    BitFieldValue<bool, unsigned __int32> bEnableHideSupplyCratesCheck()
    { return { (void*)this, "bEnableHideSupplyCratesCheck" }; }
    BitFieldValue<bool, unsigned __int32> bFinishedCrateMovement()
    { return { (void*)this, "bFinishedCrateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bWantsOriginalMats()
    { return { (void*)this, "bWantsOriginalMats" }; }
    BitFieldValue<bool, unsigned __int32> bIsCrateRendered()
    { return { (void*)this, "bIsCrateRendered" }; }
    BitFieldValue<bool, unsigned __int32> bSupplyCrateHidden()
    { return { (void*)this, "bSupplyCrateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWindSourceComponentOnLand()
    { return { (void*)this, "bDestroyWindSourceComponentOnLand" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysAllowTributeInventory()
    { return { (void*)this, "bAlwaysAllowTributeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bDontGenerateCrateItems()
    { return { (void*)this, "bDontGenerateCrateItems" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryAccessOnlyActivated()
    { return { (void*)this, "bInventoryAccessOnlyActivated" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderWaterCrate()
    { return { (void*)this, "bIsUnderWaterCrate" }; }
    BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement()
    { return { (void*)this, "bSetsRandomWithoutReplacement" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_SUPPLYCRATE_H
