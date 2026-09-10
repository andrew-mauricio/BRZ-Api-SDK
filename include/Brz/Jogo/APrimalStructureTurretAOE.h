// ==========================================================================
//  APrimalStructureTurretAOE — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETAOE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETAOE_H

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
struct UNiagaraSystem;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;
struct UTexture2D;


struct APrimalStructureTurretAOE
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTurretAOE"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.BPUpdateTrailEffect(UNiagaraComponent*,AActor*,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPUpdateTrailEffect(void* a0, void* a1, void* a2, float a3) const
    {
        return NativeCall<void*, void*, void*, void*, float>(this, "APrimalStructureTurretAOE.BPUpdateTrailEffect(UNiagaraComponent*,AActor*,UE::Math::TVector<double>,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretAOE.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.BounceTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BounceTraceHits(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalStructureTurretAOE.BounceTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.ChangeAttackType(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro ChangeAttackType(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureTurretAOE.ChangeAttackType(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.DealAOEDamage(AActor*,float,UE::Math::TVector<double>&,float,TSubclass
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealAOEDamage(void* a0, float a1, void* a2, float a3, void* a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, float, void*, float, void*, float, bool>(this, "APrimalStructureTurretAOE.DealAOEDamage(AActor*,float,UE::Math::TVector<double>&,float,TSubclassOf<UDamageType>,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.DealBounceDamage(AActor*,AActor*,UE::Math::TVector<double>&,int,TSubcl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealBounceDamage(void* a0, void* a1, void* a2, int a3, void* a4, float a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, float>(this, "APrimalStructureTurretAOE.DealBounceDamage(AActor*,AActor*,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, float>(this, "APrimalStructureTurretAOE.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.DealDirectDamage(AActor*,int,TSubclassOf<UDamageType>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealDirectDamage(void* a0, int a1, void* a2, float a3, bool a4) const
    {
        return NativeCall<void*, void*, int, void*, float, bool>(this, "APrimalStructureTurretAOE.DealDirectDamage(AActor*,int,TSubclassOf<UDamageType>,float,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.DoFire(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoFire(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureTurretAOE.DoFire(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.FindAllPotentialBounceTargets(AActor*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindAllPotentialBounceTargets(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalStructureTurretAOE.FindAllPotentialBounceTargets(AActor*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.GetBounceTargetAimAtLocation(AActor*,AActor*,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBounceTargetAimAtLocation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureTurretAOE.GetBounceTargetAimAtLocation(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.GetBounceTargetFireAtLocation(APrimalCharacter*,AActor*,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBounceTargetFireAtLocation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureTurretAOE.GetBounceTargetFireAtLocation(APrimalCharacter*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.NetMultiUpdateBounceTargets(TArray<AActor*,TSizedDefaultAllocator<32>>
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=168+bytes40+chamadores=2]]
    BrzPonteiro NetMultiUpdateBounceTargets(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurretAOE.NetMultiUpdateBounceTargets(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.NetMultiUpdateBounceTargets_Implementation(TArray<AActor*,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetMultiUpdateBounceTargets_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurretAOE.NetMultiUpdateBounceTargets_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.OnRep_CurrAttackTypeIndex()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=149]]
    BrzPonteiro OnRep_CurrAttackTypeIndex() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretAOE.OnRep_CurrAttackTypeIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.ShouldForceTargetRidingDinoNotRider()
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldForceTargetRidingDinoNotRider() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretAOE.ShouldForceTargetRidingDinoNotRider()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.SpawnBounceTrailEffect(AActor*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnBounceTrailEffect(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTurretAOE.SpawnBounceTrailEffect(AActor*,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.SpawnTrailEffect(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnTrailEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurretAOE.SpawnTrailEffect(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureTurretAOE.Tick(float)", a0);
    }

    unsigned char& AISettingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.AISetting"); }
    TArray<void*>& AISettingIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.AISettingIcons"); }
    TObjectPtr<UTexture2D>& ActivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.ActivateContainerIcon"); }
    FString& ActivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.ActivateContainerString"); }
    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureTurretAOE.ActivateMaterials"); }
    BrzCampoPonteiro ActivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ActivatedIconColor")); }
    float& ActivationCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ActivationCooldownTime"); }
    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ActiveEffectVFX")); }
    TArray<void*>& ActiveRequiresFuelItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.ActiveRequiresFuelItems"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureTurretAOE.ActorUsingQuickAction"); }
    TObjectPtr<UTexture2D>& AddCreatureToExclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.AddCreatureToExclusionListIcon"); }
    TObjectPtr<UTexture2D>& AddCreatureToInclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.AddCreatureToInclusionListIcon"); }
    float& AimSpreadField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.AimSpread"); }
    BrzCampoPonteiro AimTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AimTargetLocOffset")); }
    BitFieldValue<bool, unsigned __int32> AllowOverrideParticleLightColor()
    { return { (void*)this, "AllowOverrideParticleLightColor" }; }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructureTurretAOE.AllowStructureColorSets" }; }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.AllowWirelessCraftingIcon"); }
    float& AlwaysEnableFastTurretTargetingOverVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.AlwaysEnableFastTurretTargetingOverVelocity"); }
    float& AmmoBoxReloadCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.AmmoBoxReloadCooldown"); }
    BrzCampoPonteiro AmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AmmoItemTemplate")); }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructureTurretAOE.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTurretAOE.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AttachmentReplication")); }
    BrzCampoPonteiro AttackTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AttackTypes")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.AutoReceiveInput"); }
    BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures()
    { return { (void*)this, "BPOverrideDestroyedMeshTextures" }; }
    float& BasedCharacterDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.BasedCharacterDamageAmount"); }
    float& BasedCharacterDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.BasedCharacterDamageInterval"); }
    BrzCampoPonteiro BasedCharacterDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.BasedCharacterDamageType")); }
    BrzCampoPonteiro BatteryClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.BatteryClassOverride")); }
    float& BatteryIntervalFromActivationBeforeFiringField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.BatteryIntervalFromActivationBeforeFiring"); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.BedID"); }
    int& BlacklistedItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.BlacklistedItemCount"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.BoneDamageAdjusters"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChangeAttackTypeIcon` +112, medido na build 25090264
    //  (offset absoluto medido: 0x16A8; confianca media)
    void*& BounceTargetsRelativeOffsetField() const
    { return BrzCampoAncorado<void*>(this, "ChangeAttackTypeIcon", 112); }
    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.BoxName"); }
    FString& BoxNamePrefaceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.BoxNamePrefaceString"); }
    BrzCampoPonteiro ChangeAttackTypeIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ChangeAttackTypeIcon")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ClientReplicationSendNowThreshold"); }
    USoundBase*& ContainerActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureTurretAOE.ContainerActivatedSound"); }
    float& ContainerActiveDecreaseHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ContainerActiveDecreaseHealthSpeed"); }
    BrzCampoPonteiro ContainerActiveHealthDecreaseDamageTypePassiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ContainerActiveHealthDecreaseDamageTypePassive")); }
    USoundBase*& ContainerDeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureTurretAOE.ContainerDeactivatedSound"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.ControllingMatineeActors"); }
    TObjectPtr<UTexture2D>& CopySettingsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.CopySettingsIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.CopySettingsInRangeIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeWithPinCodeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.CopySettingsInRangeWithPinCodeIcon"); }
    UStaticMeshComponent*& CopySettingsRangeMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurretAOE.CopySettingsRangeMesh"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurretAOE.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.CreationTime"); }
    int& CurrAttackTypeIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.CurrAttackTypeIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChangeAttackTypeIcon` +88, medido na build 25090264
    //  (offset absoluto medido: 0x1690; confianca media)
    void*& CurrBounceIndexField() const
    { return BrzCampoAncorado<void*>(this, "ChangeAttackTypeIcon", 88); }
    BrzCampoPonteiro CurrentBounceTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.CurrentBounceTargets")); }
    float& CurrentFuelQuantityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.CurrentFuelQuantity"); }
    double& CurrentFuelTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.CurrentFuelTimeCache"); }
    int& CurrentItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.CurrentItemCount"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTurretAOE.CurrentPinCode"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretAOE.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretAOE.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.DamageTypeAdjusters"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.DeactivateContainerIcon"); }
    FString& DeactivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.DeactivateContainerString"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DeactivateTrapIcon")); }
    BrzCampoPonteiro DeactivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DeactivatedIconColor")); }
    unsigned long long& DeathCacheCharacterIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalStructureTurretAOE.DeathCacheCharacterID"); }
    double& DeathCacheCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.DeathCacheCreationTime"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretAOE.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.DecayDestructionPeriodMultiplier"); }
    USoundBase*& DefaultAudioTemplateField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureTurretAOE.DefaultAudioTemplate"); }
    BrzCampoPonteiro DefaultParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DefaultParticleLightColor")); }
    BrzCampoPonteiro DefaultParticleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DefaultParticleTemplate")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.DefaultStasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultTurretAimRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DefaultTurretAimRotOffset")); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.DemolishGiveItemCraftingResourcePercentage"); }
    BrzCampoPonteiro DemolishInventoryDepositClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DemolishInventoryDepositClass")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.DestructionEmitter")); }
    TArray<void*>& DinoTargetListField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.DinoTargetList"); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.DisabledOpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.DisabledOpenSceneActionName"); }
    float& DrawFuelRemainingOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.DrawFuelRemainingOffset"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.DrinkWaterIcon"); }
    float& DropInventoryDepositTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.DropInventoryDepositTraceDistance"); }
    float& DropInventoryOnDestructionLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.DropInventoryOnDestructionLifespan"); }
    int& EmitterColorRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.EmitterColorRegionIndex"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.EnableUnpoweredAutoActivationIcon"); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.EngramRequirementClassOverride")); }
    TObjectPtr<UTexture2D>& ExclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.ExclusionListIcon"); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ExtraStructureSnapTypeFlags")); }
    float& FireDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.FireDamageAmount"); }
    float& FireDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.FireDamageImpulse"); }
    BrzCampoPonteiro FireDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.FireDamageType")); }
    float& FireIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.FireInterval"); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.FloatingHudLocTextOffset")); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurretAOE.FluidSimSplashTemplateOverride"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.ForceMaximumReplicationRateUntilTime"); }
    TArray<void*>& FuelConsumeDecreaseDurabilityAmountsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.FuelConsumeDecreaseDurabilityAmounts"); }
    float& FuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.FuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro FuelItemTrueClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.FuelItemTrueClass")); }
    TArray<void*>& FuelItemsConsumeIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.FuelItemsConsumeInterval"); }
    TArray<void*>& FuelItemsConsumedGiveItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.FuelItemsConsumedGiveItems"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.Health"); }
    TObjectPtr<UTexture2D>& HideCopySettingsVisualIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.HideCopySettingsVisualIcon"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurretAOE.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.HurtFX_Niagara")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.HypoThermiaInsulation"); }
    TArray<UMaterialInterface*>& InActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureTurretAOE.InActivateMaterials"); }
    TObjectPtr<UTexture2D>& InclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.InclusionListIcon"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalStructureTurretAOE.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalStructureTurretAOE.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.InsulationRange"); }
    BrzCampoPonteiro ItemsToDisplayInStructureTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ItemsToDisplayInStructureTooltip")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ItemsUseAlternateActorClassAttachment")); }
    BrzCampoPonteiro JunctionCableBeamOffsetEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.JunctionCableBeamOffsetEnd")); }
    BrzCampoPonteiro JunctionCableBeamOffsetStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.JunctionCableBeamOffsetStart")); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureTurretAOE.JunctionLinkCableParticle"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurretAOE.JunctionLinkParticleTemplate"); }
    double& LastActivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastActivatedTime"); }
    double& LastActiveStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastActiveStateChangeTime"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastActorForceReplicationTime"); }
    double& LastBounceTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastBounceTime"); }
    double& LastCheckedFuelTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastCheckedFuelTime"); }
    double& LastDeactivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastDeactivatedTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastExitStasisTime"); }
    double& LastFindTargetTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastFindTargetTime"); }
    double& LastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastFireTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastInAllyRangeTimeSerialized"); }
    double& LastLongReloadStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastLongReloadStartTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTurretAOE.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastPreReplicationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChangeAttackTypeIcon` +136, medido na build 25090264
    //  (offset absoluto medido: 0x16C0; confianca baixa)
    void*& LastRelativeImpactPointField() const
    { return BrzCampoAncorado<void*>(this, "ChangeAttackTypeIcon", 136); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastSkinAppliedTime"); }
    double& LastSolarRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastSolarRefreshTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChangeAttackTypeIcon` +128, medido na build 25090264
    //  (offset absoluto medido: 0x16B8; confianca media)
    void*& LastSpawnedTrailEffectField() const
    { return BrzCampoAncorado<void*>(this, "ChangeAttackTypeIcon", 128); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastThrottledTickTime"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructureTurretAOE.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.LifeSpanAfterDeath"); }
    AActor*& LinkedBlueprintSpawnActorPointField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureTurretAOE.LinkedBlueprintSpawnActorPoint"); }
    TWeakObjectPtr<void>& LinkedPowerJunctionStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTurretAOE.LinkedPowerJunctionStructure"); }
    int& LinkedPowerJunctionStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.LinkedPowerJunctionStructureID"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureTurretAOE.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.LinkedStructuresID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureTurretAOE.LocalCorpseEmitter"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.LocalOnlySkinCustomPersistentData")); }
    int& LongAmmoReloadCDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.LongAmmoReloadCD"); }
    int& MagazineSizeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.MagazineSize"); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() const
    { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureTurretAOE.MapMarkerLocationInfo"); }
    float& MaxActivationDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.MaxActivationDistance"); }
    float& MaxAmmoContainerReloadPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.MaxAmmoContainerReloadPercent"); }
    int& MaxBoxNameLengthField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.MaxBoxNameLength"); }
    float& MaxFirePitchDeltaField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.MaxFirePitchDelta"); }
    float& MaxFireYawDeltaField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.MaxFireYawDelta"); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.MaxHealth"); }
    int& MaxItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.MaxItemCount"); }
    int& MaxTargetLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.MaxTargetLevel"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.MinNetUpdateFrequency"); }
    int& MinTargetLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.MinTargetLevel"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.MultiSoftDestructionGeoCollectionAssets")); }
    BrzCampoPonteiro MuzzleFlashEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.MuzzleFlashEmitter")); }
    BrzCampoPonteiro MuzzleLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.MuzzleLocOffset")); }
    UChildActorComponent*& MyChildEmitterSpawnableField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureTurretAOE.MyChildEmitterSpawnable"); }
    UChildActorComponent*& MyChildEmitterTargetingEffectField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureTurretAOE.MyChildEmitterTargetingEffect"); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructureTurretAOE.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureTurretAOE.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureTurretAOE.MyHarvestingComponent"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureTurretAOE.MyInventoryComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureTurretAOE.MyRootTransform"); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretAOE.MySkeletalMeshComp"); }
    BrzCampoPonteiro MySkinSkeletalMeshCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.MySkinSkeletalMeshComp")); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurretAOE.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureTurretAOE.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NetCullDistanceSquaredDormant"); }
    double& NetDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.NetDestructionTime"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretAOE.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureTurretAOE.NetworkSpatializationParent"); }
    BrzCampoPonteiro NextConsumeFuelGiveItemTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.NextConsumeFuelGiveItemType")); }
    float& NonTargetingRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.NonTargetingRotationInterpSpeed"); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.NotifyCarriedByDinoChanged")); }
    int& NumBulletsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.NumBullets"); }
    int& NumBulletsPerShotField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.NumBulletsPerShot"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OnTargetingTeamChanged")); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.OpenSceneActionIcon"); }
    FString& OpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.OpenSceneActionName"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.OriginalPlacerPlayerID"); }
    TArray<USoundBase*>& OverrideAudioTemplatesField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalStructureTurretAOE.OverrideAudioTemplates"); }
    TArray<void*>& OverrideParticleLightColorField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.OverrideParticleLightColor"); }
    TArray<void*>& OverrideParticleTemplateItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.OverrideParticleTemplateItemClasses"); }
    BrzCampoPonteiro OverrideParticleTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.OverrideParticleTemplates")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructureTurretAOE.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureTurretAOE.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructureTurretAOE.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretAOE.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructureTurretAOE.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTurretAOE.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructureTurretAOE.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureTurretAOE.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PlacementYawOffsetIncrement"); }
    BrzCampoPonteiro PlayerProneTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PlayerProneTargetOffset")); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& PoweredNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.PoweredNearbyStructureRange"); }
    BrzCampoPonteiro PoweredNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PoweredNearbyStructureTemplate")); }
    int& PoweredOverrideCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.PoweredOverrideCounter"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.PreventWirelessCraftingIcon"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureTurretAOE.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretAOE.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructureTurretAOE.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureTurretAOE.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructureTurretAOE.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalStructureTurretAOE.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureTurretAOE.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureTurretAOE.PrimarySnappedStructureParent"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ProjectileClass")); }
    float& RandomFuelUpdateTimeMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.RandomFuelUpdateTimeMax"); }
    float& RandomFuelUpdateTimeMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.RandomFuelUpdateTimeMin"); }
    unsigned char& RangeSettingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.RangeSetting"); }
    TArray<void*>& RangeSettingIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.RangeSettingIcons"); }
    float& RangeToCheckForAmmoField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.RangeToCheckForAmmo"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.RemoteRole"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromExclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.RemoveCreatureFromExclusionListIcon"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromInclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.RemoveCreatureFromInclusionListIcon"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedFuelItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ReplicatedFuelItemClass")); }
    short& ReplicatedFuelItemColorIndexField() const
    { return *GetNativePointerField<short*>(this, "APrimalStructureTurretAOE.ReplicatedFuelItemColorIndex"); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ReplicationIntervalMultiplier"); }
    BrzCampoPonteiro RequiresItemForOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.RequiresItemForOpenSceneAction")); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalStructureTurretAOE.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTurretAOE.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.SavedStructureMinAllowedVersion"); }
    TObjectPtr<UTexture2D>& ShowCopySettingsVisualIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.ShowCopySettingsVisualIcon"); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinInventoryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.SkinInventoryData")); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.SkinPersistentData")); }
    double& SkipConsumeFuelUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.SkipConsumeFuelUntilTime"); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.SnappedChooseRotationPlacementData")); }
    float& SolarRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.SolarRefreshInterval"); }
    float& SolarRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.SolarRefreshIntervalMin"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.SpawnCollisionHandlingMethod")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ChangeAttackTypeIcon` +96, medido na build 25090264
    //  (offset absoluto medido: 0x1698; confianca media)
    void*& SpawnedBounceTrailEffectsField() const
    { return BrzCampoAncorado<void*>(this, "ChangeAttackTypeIcon", 96); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalStructureTurretAOE.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureTurretAOE.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructureTurretAOE.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTurretAOE.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureTurretAOE.StructuresPlacedOnFloor"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.TargetableDamageFXDefaultPhysMaterial"); }
    BrzCampoPonteiro TargetingLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.TargetingLocOffset")); }
    TObjectPtr<UTexture2D>& TargetingOptionsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurretAOE.TargetingOptionsIcon"); }
    FieldArray<float> TargetingRangesField() const
    { return { (void*)this, "APrimalStructureTurretAOE.TargetingRanges" }; }
    float& TargetingRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.TargetingRotationInterpSpeed"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.TargetingTeam"); }
    BrzCampoPonteiro TargetingTraceOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.TargetingTraceOffset")); }
    float& TimeCooldownRequestFuelRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.TimeCooldownRequestFuelRemaining"); }
    UParticleSystem*& TrailFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurretAOE.TrailFX"); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.TribeGroupStructureRank"); }
    BrzCampoPonteiro TurretAimRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.TurretAimRotOffset")); }
    BrzCampoPonteiro UISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.UISceneTemplate")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.UpdateOverlapsMethodDuringLevelStreaming"); }
    BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode()
    { return { (void*)this, "UseBPApplyPinCode" }; }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation()
    { return { (void*)this, "UseBPOverrideTargetLocation" }; }
    float& ValidCraftingResourceMaxDurabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.ValidCraftingResourceMaxDurability"); }
    TArray<TWeakObjectPtr<void>>& ValidatedByPinCodePlayerControllersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureTurretAOE.ValidatedByPinCodePlayerControllers"); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.Variants"); }
    BrzCampoPonteiro WarningEmitterLongField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.WarningEmitterLong")); }
    BrzCampoPonteiro WarningEmitterShortField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.WarningEmitterShort")); }
    float& WarningExpirationTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretAOE.WarningExpirationTime"); }
    unsigned char& WarningSettingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretAOE.WarningSetting"); }
    TArray<void*>& WarningSettingIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretAOE.WarningSettingIcons"); }
    TWeakObjectPtr<void>& WeakTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTurretAOE.WeakTarget"); }
    BrzCampoPonteiro WirelessExchangeRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.WirelessExchangeRefs")); }
    BitFieldValue<bool, unsigned __int32> bActiveRequiresPower()
    { return { (void*)this, "bActiveRequiresPower" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustDamageAsPlayerWithEquipment()
    { return { (void*)this, "bAdjustDamageAsPlayerWithEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bAimIgnoreSockets()
    { return { (void*)this, "bAimIgnoreSockets" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle()
    { return { (void*)this, "bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower()
    { return { (void*)this, "bAllowAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChooseRotationWhenSnapped()
    { return { (void*)this, "bAllowChooseRotationWhenSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomName()
    { return { (void*)this, "bAllowCustomName" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement()
    { return { (void*)this, "bAllowPickingUpStructureAfterPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapRotation()
    { return { (void*)this, "bAllowSnapRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureSkinsWithoutTeamCheck()
    { return { (void*)this, "bAllowStructureSkinsWithoutTeamCheck" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldRoundRobin()
    { return { (void*)this, "bAllowWeldRoundRobin" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldingToShips()
    { return { (void*)this, "bAllowWeldingToShips" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bApplyNiagaraColorInBP()
    { return { (void*)this, "bApplyNiagaraColorInBP" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateContainer()
    { return { (void*)this, "bAutoActivateContainer" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateIfPowered()
    { return { (void*)this, "bAutoActivateIfPowered" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenFueled()
    { return { (void*)this, "bAutoActivateWhenFueled" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenNoPower()
    { return { (void*)this, "bAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPIsValidWaterSourceForPipe()
    { return { (void*)this, "bBPIsValidWaterSourceForPipe" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyRemoteViewerChange()
    { return { (void*)this, "bBPNotifyRemoteViewerChange" }; }
    BitFieldValue<bool, unsigned __int32> bBPOnContainerActiveHealthDecrease()
    { return { (void*)this, "bBPOnContainerActiveHealthDecrease" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanAttachToExosuit()
    { return { (void*)this, "bCanAttachToExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired()
    { return { (void*)this, "bCanBeRepaired" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeStoredByExosuit()
    { return { (void*)this, "bCanBeStoredByExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanToggleActivation()
    { return { (void*)this, "bCanToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bCarriedByDino()
    { return { (void*)this, "bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bCheckStartedUnderwater()
    { return { (void*)this, "bCheckStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bClientBPNotifyInventoryItemChanges()
    { return { (void*)this, "bClientBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bClientFireProjectile()
    { return { (void*)this, "bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor()
    { return { (void*)this, "bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bContainerActivated()
    { return { (void*)this, "bContainerActivated" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingSubstractConnectedWater()
    { return { (void*)this, "bCraftingSubstractConnectedWater" }; }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy()
    { return { (void*)this, "bDemolishJustDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemoved()
    { return { (void*)this, "bDestroyWhenAllItemsRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemovedExceptDefaults()
    { return { (void*)this, "bDestroyWhenAllItemsRemovedExceptDefaults" }; }
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects()
    { return { (void*)this, "bDidSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater()
    { return { (void*)this, "bDisableActivationUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm()
    { return { (void*)this, "bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUI()
    { return { (void*)this, "bDisplayActivationOnInventoryUI" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUISecondary()
    { return { (void*)this, "bDisplayActivationOnInventoryUISecondary" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUITertiary()
    { return { (void*)this, "bDisplayActivationOnInventoryUITertiary" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetPickupTimer()
    { return { (void*)this, "bDontResetPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters()
    { return { (void*)this, "bDontSetDamageParameters" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFuelRemaining()
    { return { (void*)this, "bDrawFuelRemaining" }; }
    BitFieldValue<bool, unsigned __int32> bDrinkingWater()
    { return { (void*)this, "bDrinkingWater" }; }
    BitFieldValue<bool, unsigned __int32> bDropInventoryOnDestruction()
    { return { (void*)this, "bDropInventoryOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectiles()
    { return { (void*)this, "bFireProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloatingDamageNumbers()
    { return { (void*)this, "bForceFloatingDamageNumbers" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup()
    { return { (void*)this, "bForceFloorCollisionGroup" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNeverLock()
    { return { (void*)this, "bForceNeverLock" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking()
    { return { (void*)this, "bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAutoActivateWhenConnectedToWater()
    { return { (void*)this, "bForcePreventAutoActivateWhenConnectedToWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround()
    { return { (void*)this, "bForceSnappedStructureToGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceZeroDamageProcessing()
    { return { (void*)this, "bForceZeroDamageProcessing" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bFuelAllowActivationWhenNoPower()
    { return { (void*)this, "bFuelAllowActivationWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor()
    { return { (void*)this, "bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasFuel()
    { return { (void*)this, "bHasFuel" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasOmniDirectionalFire()
    { return { (void*)this, "bHasOmniDirectionalFire" }; }
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime()
    { return { (void*)this, "bHasResetDecayTime" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHideAutoActivateToggle()
    { return { (void*)this, "bHideAutoActivateToggle" }; }
    BitFieldValue<bool, unsigned __int32> bHidePowerJunctionConnection()
    { return { (void*)this, "bHidePowerJunctionConnection" }; }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretAOE.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestructionEffects()
    { return { (void*)this, "bIgnoreDestructionEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished()
    { return { (void*)this, "bIgnoreDyingWhenDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSpawnEffects()
    { return { (void*)this, "bIgnoreSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTargeting()
    { return { (void*)this, "bIgnoredByTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bInWaterOnlyTargetWater()
    { return { (void*)this, "bInWaterOnlyTargetWater" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventItemAppends()
    { return { (void*)this, "bInventoryForcePreventItemAppends" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventRemoteAddItems()
    { return { (void*)this, "bInventoryForcePreventRemoteAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmmoContainer()
    { return { (void*)this, "bIsAmmoContainer" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorframe()
    { return { (void*)this, "bIsDoorframe" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlipped()
    { return { (void*)this, "bIsFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bIsFloor()
    { return { (void*)this, "bIsFloor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoundation()
    { return { (void*)this, "bIsFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked()
    { return { (void*)this, "bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked()
    { return { (void*)this, "bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowerJunction()
    { return { (void*)this, "bIsPowerJunction" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowered()
    { return { (void*)this, "bIsPowered" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewStructure()
    { return { (void*)this, "bIsPreviewStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bIsStructureAttachmentBase()
    { return { (void*)this, "bIsStructureAttachmentBase" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargetListInclusion()
    { return { (void*)this, "bIsTargetListInclusion" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargeting()
    { return { (void*)this, "bIsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIsTeleporter()
    { return { (void*)this, "bIsTeleporter" }; }
    BitFieldValue<bool, unsigned __int32> bIsTrapped()
    { return { (void*)this, "bIsTrapped" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderwater()
    { return { (void*)this, "bIsUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLastToggleActivated()
    { return { (void*)this, "bLastToggleActivated" }; }
    BitFieldValue<bool, unsigned __int32> bLinkedStructureRemovalForceClientUpdate()
    { return { (void*)this, "bLinkedStructureRemovalForceClientUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNoCollision()
    { return { (void*)this, "bNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowTeamActivation()
    { return { (void*)this, "bOnlyAllowTeamActivation" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyConsumeDurabilityOnEquipmentForEnemies()
    { return { (void*)this, "bOnlyConsumeDurabilityOnEquipmentForEnemies" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseAmmoOnDamage()
    { return { (void*)this, "bOnlyUseAmmoOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated()
    { return { (void*)this, "bOnlyUseSpoilingMultipliersIfActivated" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance()
    { return { (void*)this, "bOverrideFoundationSupportDistance" }; }
    BitFieldValue<bool, unsigned __int32> bPendingRemoval()
    { return { (void*)this, "bPendingRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementAdjustHeight()
    { return { (void*)this, "bPlacementAdjustHeight" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation()
    { return { (void*)this, "bPlacementChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementIgnoreChooseRotation()
    { return { (void*)this, "bPlacementIgnoreChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementPreventLockingCameraWhileChooseRotation()
    { return { (void*)this, "bPlacementPreventLockingCameraWhileChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBattery()
    { return { (void*)this, "bPoweredAllowBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBot()
    { return { (void*)this, "bPoweredAllowBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowSolar()
    { return { (void*)this, "bPoweredAllowSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBattery()
    { return { (void*)this, "bPoweredHasBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBot()
    { return { (void*)this, "bPoweredHasBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBattery()
    { return { (void*)this, "bPoweredUsingBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBot()
    { return { (void*)this, "bPoweredUsingBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingSolar()
    { return { (void*)this, "bPoweredUsingSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredWaterSourceWhenActive()
    { return { (void*)this, "bPoweredWaterSourceWhenActive" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventContainerPingType()
    { return { (void*)this, "bPreventContainerPingType" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLinkingToStorageInterface()
    { return { (void*)this, "bPreventLinkingToStorageInterface" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventToggleActivation()
    { return { (void*)this, "bPreventToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUsingAsWirelessCraftingSource()
    { return { (void*)this, "bPreventUsingAsWirelessCraftingSource" }; }
    BitFieldValue<bool, unsigned __int32> bPreviewApplyColorToChildComponents()
    { return { (void*)this, "bPreviewApplyColorToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateItemFuelClass()
    { return { (void*)this, "bReplicateItemFuelClass" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime()
    { return { (void*)this, "bReplicateLastActivatedTime" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresItemExactClass()
    { return { (void*)this, "bRequiresItemExactClass" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges()
    { return { (void*)this, "bServerBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseSwapped()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseSwapped" }; }
    BitFieldValue<bool, unsigned __int32> bStartedUnderwater()
    { return { (void*)this, "bStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStationaryStructure()
    { return { (void*)this, "bStationaryStructure" }; }
    BitFieldValue<bool, unsigned __int32> bStructureCosmeticOverrideStructureColorSets()
    { return { (void*)this, "bStructureCosmeticOverrideStructureColorSets" }; }
    BitFieldValue<bool, unsigned __int32> bStructureFiresProjectiles()
    { return { (void*)this, "bStructureFiresProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bStructureIgnoreDying()
    { return { (void*)this, "bStructureIgnoreDying" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking()
    { return { (void*)this, "bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinActivation()
    { return { (void*)this, "bSupportsPinActivation" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking()
    { return { (void*)this, "bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsStorageInterfaceLinking()
    { return { (void*)this, "bSupportsStorageInterfaceLinking" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIgnoreProjectiles()
    { return { (void*)this, "bTurretIgnoreProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIsDisabledTooManyNearbyTurrets()
    { return { (void*)this, "bTurretIsDisabledTooManyNearbyTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoContainerBuff()
    { return { (void*)this, "bUseAmmoContainerBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer()
    { return { (void*)this, "bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAddWirelessExchange()
    { return { (void*)this, "bUseBPCanAddWirelessExchange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivated()
    { return { (void*)this, "bUseBPCanBeActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivatedByPlayer()
    { return { (void*)this, "bUseBPCanBeActivatedByPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFuelConsumptionMultiplier()
    { return { (void*)this, "bUseBPGetFuelConsumptionMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetQuantityOfItemWithoutCheckingInventory()
    { return { (void*)this, "bUseBPGetQuantityOfItemWithoutCheckingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessConsumerAdded()
    { return { (void*)this, "bUseBPNotifyWirelessConsumerAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessConsumerRemoved()
    { return { (void*)this, "bUseBPNotifyWirelessConsumerRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessSourceAdded()
    { return { (void*)this, "bUseBPNotifyWirelessSourceAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessSourceRemoved()
    { return { (void*)this, "bUseBPNotifyWirelessSourceRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnClientUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnClientUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnServerUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnServerUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostPreviewStructureFlipped()
    { return { (void*)this, "bUseBPPostPreviewStructureFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventCharacterBasing()
    { return { (void*)this, "bUseBPPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis()
    { return { (void*)this, "bUseBPPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor()
    { return { (void*)this, "bUseBPSetPlayerConstructor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTurretPreventsTargeting()
    { return { (void*)this, "bUseBPTurretPreventsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCollisionCompsForFloatingDPS()
    { return { (void*)this, "bUseCollisionCompsForFloatingDPS" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorRegionForEmitterColor()
    { return { (void*)this, "bUseColorRegionForEmitterColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCooldownOnTransferAll()
    { return { (void*)this, "bUseCooldownOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeathCacheCharacterID()
    { return { (void*)this, "bUseDeathCacheCharacterID" }; }
    BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent()
    { return { (void*)this, "bUseHarvestingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bUseInclusionListTargeting()
    { return { (void*)this, "bUseInclusionListTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseLevelLimitsForTargeting()
    { return { (void*)this, "bUseLevelLimitsForTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseMaxInventoryForAmmoContainerReload()
    { return { (void*)this, "bUseMaxInventoryForAmmoContainerReload" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOriginForInventoryAccessTrace()
    { return { (void*)this, "bUseMeshOriginForInventoryAccessTrace" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseNoAmmo()
    { return { (void*)this, "bUseNoAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseNoWarning()
    { return { (void*)this, "bUseNoWarning" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseOpenSceneAction()
    { return { (void*)this, "bUseOpenSceneAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUsesHealth()
    { return { (void*)this, "bUsesHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUsingStructureColors()
    { return { (void*)this, "bUsingStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasAttachedToPawn()
    { return { (void*)this, "bWasAttachedToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped()
    { return { (void*)this, "bWasPlacementSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bWithinPreventionVolume()
    { return { (void*)this, "bWithinPreventionVolume" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateTrailEffect()
    { return { (void*)this, "bUseBPUpdateTrailEffect" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETAOE_H
