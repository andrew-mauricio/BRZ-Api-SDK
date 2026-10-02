// ==========================================================================
//  UPrimalHarvestingComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALHARVESTINGCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALHARVESTINGCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalHarvestingComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalHarvestingComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.AllocateAttachment(UActorComponent*,FAttachedInstancedHelper&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllocateAttachment(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalHarvestingComponent.AllocateAttachment(UActorComponent*,FAttachedInstancedHelper&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.BPCustomHarvestResource(UPrimalInventoryComponent*,int,TSubclassOf<UD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCustomHarvestResource(void* a0, int a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, int, void*, void*>(this, "UPrimalHarvestingComponent.BPCustomHarvestResource(UPrimalInventoryComponent*,int,TSubclassOf<UDamageType>,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.BPRecieveComponentDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPRecieveComponentDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "UPrimalHarvestingComponent.BPRecieveComponentDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.DealDirectHarvestPointDamage(APlayerController*,float,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealDirectHarvestPointDamage(void* a0, float a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, void*>(this, "UPrimalHarvestingComponent.DealDirectHarvestPointDamage(APlayerController*,float,UE::Math::TVector<double>,TSubclassOf<UDamageType>,FHitResult,APawn*)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.DealDirectHarvestPointDamage_Controller(AController*,float,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealDirectHarvestPointDamage_Controller(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UPrimalHarvestingComponent.DealDirectHarvestPointDamage_Controller(AController*,float,UE::Math::TVector<double>,TSubclassOf<UDamageType>,FHitResult)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.GetCurrentHarvestHealth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCurrentHarvestHealth() const
    {
        return NativeCall<void*>(this, "UPrimalHarvestingComponent.GetCurrentHarvestHealth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.GetInstanceCurrentHarvestHealth(UInstancedStaticMeshComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstanceCurrentHarvestHealth(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalHarvestingComponent.GetInstanceCurrentHarvestHealth(UInstancedStaticMeshComponent*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalHarvestingComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.GetNumOfCustomDataValues()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetNumOfCustomDataValues() const
    {
        return NativeCall<void*>(this, "UPrimalHarvestingComponent.GetNumOfCustomDataValues()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.GiveHarvestResource(UPrimalInventoryComponent*,float,TSubclassOf<UDam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GiveHarvestResource(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UPrimalHarvestingComponent.GiveHarvestResource(UPrimalInventoryComponent*,float,TSubclassOf<UDamageType>,AActor*,TArray<FHarvestResourceEntry,TSizedDefaultAllocator<32>>*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.HandleHarvestingMilestones(AShooterPlayerController*,UPrimalItem*,int
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleHarvestingMilestones(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalHarvestingComponent.HandleHarvestingMilestones(AShooterPlayerController*,UPrimalItem*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.IsValidHarvestingDamageType(TSubclassOf<UDamageType>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidHarvestingDamageType(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalHarvestingComponent.IsValidHarvestingDamageType(TSubclassOf<UDamageType>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.ShouldAddToActorComponents()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShouldAddToActorComponents() const
    {
        return NativeCall<void*>(this, "UPrimalHarvestingComponent.ShouldAddToActorComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.ShouldInstantHarvest()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShouldInstantHarvest() const
    {
        return NativeCall<void*>(this, "UPrimalHarvestingComponent.ShouldInstantHarvest()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UPrimalHarvestingComponent.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalHarvestingComponent.WantsInstanceRotation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro WantsInstanceRotation() const
    {
        return NativeCall<void*>(this, "UPrimalHarvestingComponent.WantsInstanceRotation()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NumOfPerInstanceCustomDataValues` +4 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x1E0; confianca alta)
    void*& ActiveInstancedElementField() const
    { return BrzCampoAncorado<void*>(this, "NumOfPerInstanceCustomDataValues", 4); }
    BrzCampoPonteiro AdditionalComponentAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.AdditionalComponentAttachments")); }
    BrzCampoPonteiro AdditionalComponentAttachmentsDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.AdditionalComponentAttachmentsDedicated")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalHarvestingComponent.AssetUserData"); }
    int& AssignedToTribeIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.AssignedToTribeID"); }
    float& AutoReplenishIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.AutoReplenishInterval"); }
    float& AutoReplenishPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.AutoReplenishPercent"); }
    BrzCampoPonteiro BaseHarvestResourceEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.BaseHarvestResourceEntries")); }
    float& BaseMaxTimeAfterDepletionReplenishingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.BaseMaxTimeAfterDepletionReplenishing"); }
    float& BaseMinTimeAfterDepletionReplenishingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.BaseMinTimeAfterDepletionReplenishing"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalHarvestingComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.CreationMethod"); }
    float& CurrentHarvestHealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.CurrentHarvestHealth"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalHarvestingComponent.CustomTag"); }
    float& DamageInstigatorAmountField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DamageInstigatorAmount"); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.DescriptiveName"); }
    float& DinoHarvestGiveHealthAmountField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthAmount"); }
    int& DinoHarvestGiveHealthDescriptionIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthDescriptionIndex"); }
    float& DinoHarvestGiveHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthSpeed"); }
    float& ExhaustedDepletionEffectScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionEffectScale"); }
    float& ExhaustedDepletionPowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionPower"); }
    float& ExhaustedDepletionTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionTimeInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxHarvestHealth` +4 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x114; confianca alta)
    void*& ExtraHarvestingXPMultiplierField() const
    { return BrzCampoAncorado<void*>(this, "MaxHarvestHealth", 4); }
    BrzCampoPonteiro ForceAllowMeleeHarvestingOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.ForceAllowMeleeHarvestingOverrides")); }
    int& GiveItemEntriesMaxField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.GiveItemEntriesMax"); }
    int& GiveItemEntriesMinField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.GiveItemEntriesMin"); }
    BrzCampoPonteiro HarvestDamageTypeEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.HarvestDamageTypeEntries")); }
    BrzCampoPonteiro HarvestDestructionSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.HarvestDestructionSound")); }
    float& HarvestHealthGiveResourceIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.HarvestHealthGiveResourceInterval"); }
    BrzCampoPonteiro HarvestResourceEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.HarvestResourceEntries")); }
    float& HarvestingPriorityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.HarvestingPriority"); }
    TWeakObjectPtr<void>& LastHarvesterPCField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalHarvestingComponent.LastHarvesterPC"); }
    float& MaxHarvestHealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MaxHarvestHealth"); }
    float& MinNonCoreStructureDistanceReplenishingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinNonCoreStructureDistanceReplenishing"); }
    float& MinPlayerDistanceReplenishingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinPlayerDistanceReplenishing"); }
    float& MinStructureDistanceReplenishingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinStructureDistanceReplenishing"); }
    int& NumOfPerInstanceCustomDataValuesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.NumOfPerInstanceCustomDataValues"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.OnComponentDeactivated")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TamedDinoHarvestGiveHealthMultiplier` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x1B0; confianca alta)
    void*& OnHarvestingDepletedField() const
    { return BrzCampoAncorado<void*>(this, "TamedDinoHarvestGiveHealthMultiplier", 8); }
    BrzCampoPonteiro OnItemHarvestedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.OnItemHarvested")); }
    BrzCampoPonteiro PendingMilestoneUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.PendingMilestoneUpdates")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalHarvestingComponent.PrimaryComponentTick"); }
    float& ReduceExhaustedDepletionSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ReduceExhaustedDepletionSpeed"); }
    BrzCampoPonteiro ShouldReplenishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.ShouldReplenish")); }
    float& TamedDinoHarvestGiveHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.TamedDinoHarvestGiveHealthMultiplier"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.UCSSerializationIndex"); }
    float& UsableHarvestSphereRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.UsableHarvestSphereRadius"); }
    float& UseHarvestDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.UseHarvestDamageAmount"); }
    BrzCampoPonteiro UseHarvestDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.UseHarvestDamageType")); }
    FString& UseHarvestStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UseHarvestString"); }
    BrzCampoPonteiro bAllowForcedRepopulationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bAllowForcedRepopulation")); }
    BrzCampoPonteiro bAllowHarvestHealthScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bAllowHarvestHealthScaling")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAssignedToTribeHarvestOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bAssignedToTribeHarvestOnly")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bCanEverAffectNavigation")); }
    bool& bClampResourceHarvestDamageField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalHarvestingComponent.bClampResourceHarvestDamage"); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bEnforceSingleInstantHarvestField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bEnforceSingleInstantHarvest")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bIsActive")); }
    BrzCampoPonteiro bIsDefaultHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bIsDefaultHarvestingComponent")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsSingleUnitHarvestField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bIsSingleUnitHarvest")); }
    BrzCampoPonteiro bIsUnharvestableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bIsUnharvestable")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bNetAddressable")); }
    BrzCampoPonteiro bNonBlockingUsableHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bNonBlockingUsableHarvesting")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bReplicates")); }
    BrzCampoPonteiro bSetOwnerHealthToHarvestHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bSetOwnerHealthToHarvestHealth")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUsableAllowHarvestHealthScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bUsableAllowHarvestHealthScaling")); }
    BrzCampoPonteiro bUsableHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bUsableHarvesting")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseBPRecieveComponentDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalHarvestingComponent.bUseBPRecieveComponentDamage")); }
    BitFieldValue<bool, unsigned __int32> ShouldReplenish()
    { return { (void*)this, "ShouldReplenish" }; }
    BitFieldValue<bool, unsigned __int32> bAllowForcedRepopulation()
    { return { (void*)this, "bAllowForcedRepopulation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowHarvestHealthScaling()
    { return { (void*)this, "bAllowHarvestHealthScaling" }; }
    BitFieldValue<bool, unsigned __int32> bAssignedToTribeHarvestOnly()
    { return { (void*)this, "bAssignedToTribeHarvestOnly" }; }
    BitFieldValue<bool, unsigned __int32> bClampResourceHarvestDamage()
    { return { (void*)this, "bClampResourceHarvestDamage" }; }
    BitFieldValue<bool, unsigned __int32> bEnforceSingleInstantHarvest()
    { return { (void*)this, "bEnforceSingleInstantHarvest" }; }
    BitFieldValue<bool, unsigned __int32> bIsDefaultHarvestingComponent()
    { return { (void*)this, "bIsDefaultHarvestingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsSingleUnitHarvest()
    { return { (void*)this, "bIsSingleUnitHarvest" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnharvestable()
    { return { (void*)this, "bIsUnharvestable" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingUsableHarvesting()
    { return { (void*)this, "bNonBlockingUsableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bSetOwnerHealthToHarvestHealth()
    { return { (void*)this, "bSetOwnerHealthToHarvestHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUsableAllowHarvestHealthScaling()
    { return { (void*)this, "bUsableAllowHarvestHealthScaling" }; }
    BitFieldValue<bool, unsigned __int32> bUsableHarvesting()
    { return { (void*)this, "bUsableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRecieveComponentDamage()
    { return { (void*)this, "bUseBPRecieveComponentDamage" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALHARVESTINGCOMPONENT_H
