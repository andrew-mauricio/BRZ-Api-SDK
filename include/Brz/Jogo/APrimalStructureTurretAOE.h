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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_CurrAttackTypeIndex() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretAOE.OnRep_CurrAttackTypeIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretAOE.ShouldForceTargetRidingDinoNotRider()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    BrzCampoPonteiro AllowOverrideParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.AllowOverrideParticleLightColor")); }
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
    BrzCampoPonteiro BPOverrideDestroyedMeshTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.BPOverrideDestroyedMeshTextures")); }
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
    //  ancorado em `ChangeAttackTypeIcon` +112, medido na build 25535041
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
    //  ancorado em `ChangeAttackTypeIcon` +88, medido na build 25535041
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
    //  ancorado em `ChangeAttackTypeIcon` +136, medido na build 25535041
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
    //  ancorado em `ChangeAttackTypeIcon` +128, medido na build 25535041
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
    //  ancorado em `ChangeAttackTypeIcon` +96, medido na build 25535041
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
    BrzCampoPonteiro UseBPApplyPinCodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.UseBPApplyPinCode")); }
    BrzCampoPonteiro UseBPOverrideTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.UseBPOverrideTargetLocation")); }
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
    BrzCampoPonteiro bActiveRequiresPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bActiveRequiresPower")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAdjustDamageAsPlayerWithEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAdjustDamageAsPlayerWithEquipment")); }
    BrzCampoPonteiro bAimIgnoreSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAimIgnoreSockets")); }
    BrzCampoPonteiro bAllowAttachToSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowAttachToSaddle")); }
    BrzCampoPonteiro bAllowAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAllowChooseRotationWhenSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowChooseRotationWhenSnapped")); }
    BrzCampoPonteiro bAllowCustomNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowCustomName")); }
    BrzCampoPonteiro bAllowPickingUpStructureAfterPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowPickingUpStructureAfterPlacement")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowSnapRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowSnapRotation")); }
    BrzCampoPonteiro bAllowStructureSkinsWithoutTeamCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowStructureSkinsWithoutTeamCheck")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowWeldRoundRobinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowWeldRoundRobin")); }
    BrzCampoPonteiro bAllowWeldingToShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAllowWeldingToShips")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bApplyNiagaraColorInBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bApplyNiagaraColorInBP")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoActivateContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAutoActivateContainer")); }
    BrzCampoPonteiro bAutoActivateIfPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAutoActivateIfPowered")); }
    BrzCampoPonteiro bAutoActivateWhenFueledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAutoActivateWhenFueled")); }
    BrzCampoPonteiro bAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPIsValidWaterSourceForPipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBPIsValidWaterSourceForPipe")); }
    BrzCampoPonteiro bBPNotifyRemoteViewerChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBPNotifyRemoteViewerChange")); }
    BrzCampoPonteiro bBPOnContainerActiveHealthDecreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBPOnContainerActiveHealthDecrease")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAttachToExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCanAttachToExosuit")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeRepairedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCanBeRepaired")); }
    BrzCampoPonteiro bCanBeStoredByExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCanBeStoredByExosuit")); }
    BrzCampoPonteiro bCanToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCanToggleActivation")); }
    BrzCampoPonteiro bCarriedByDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCarriedByDino")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheckStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCheckStartedUnderwater")); }
    BrzCampoPonteiro bClientBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bClientBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bClientFireProjectileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bClientFireProjectile")); }
    BrzCampoPonteiro bClientReceivedStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bClientReceivedStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCollideWhenPlacing")); }
    BrzCampoPonteiro bContainerActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bContainerActivated")); }
    BrzCampoPonteiro bCraftingSubstractConnectedWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bCraftingSubstractConnectedWater")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDebug")); }
    BrzCampoPonteiro bDemolishJustDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDemolishJustDestroy")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDestroyWhenAllItemsRemoved")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedExceptDefaultsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDestroyWhenAllItemsRemovedExceptDefaults")); }
    BrzCampoPonteiro bDidSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDidSpawnEffects")); }
    BrzCampoPonteiro bDisableActivationUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDisableActivationUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableStructureOnElectricStormField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDisableStructureOnElectricStorm")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDisplayActivationOnInventoryUI")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUISecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDisplayActivationOnInventoryUISecondary")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUITertiaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDisplayActivationOnInventoryUITertiary")); }
    BrzCampoPonteiro bDontResetPickupTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDontResetPickupTimer")); }
    BrzCampoPonteiro bDontSetDamageParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDontSetDamageParameters")); }
    BrzCampoPonteiro bDrawFuelRemainingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDrawFuelRemaining")); }
    BrzCampoPonteiro bDrinkingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDrinkingWater")); }
    BrzCampoPonteiro bDropInventoryOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bDropInventoryOnDestruction")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFireProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bFireProjectiles")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceFloatingDamageNumbersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceFloatingDamageNumbers")); }
    BrzCampoPonteiro bForceFloorCollisionGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceFloorCollisionGroup")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNeverLockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceNeverLock")); }
    BrzCampoPonteiro bForceNoPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceNoPinLocking")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventAutoActivateWhenConnectedToWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForcePreventAutoActivateWhenConnectedToWater")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSnappedStructureToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceSnappedStructureToGround")); }
    BrzCampoPonteiro bForceZeroDamageProcessingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForceZeroDamageProcessing")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFuelAllowActivationWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bFuelAllowActivationWhenNoPower")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasAnyStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHasAnyStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bHasFuelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHasFuel")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasOmniDirectionalFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHasOmniDirectionalFire")); }
    BrzCampoPonteiro bHasResetDecayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHasResetDecayTime")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHidden")); }
    BrzCampoPonteiro bHideAutoActivateToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHideAutoActivateToggle")); }
    BrzCampoPonteiro bHidePowerJunctionConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bHidePowerJunctionConnection")); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretAOE.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BrzCampoPonteiro bIgnoreDestructionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoreDestructionEffects")); }
    BrzCampoPonteiro bIgnoreDyingWhenDemolishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoreDyingWhenDemolished")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoreSpawnEffects")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoredByTargeting")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bInWaterOnlyTargetWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bInWaterOnlyTargetWater")); }
    BrzCampoPonteiro bInventoryForcePreventItemAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bInventoryForcePreventItemAppends")); }
    BrzCampoPonteiro bInventoryForcePreventRemoteAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bInventoryForcePreventRemoteAddItems")); }
    BrzCampoPonteiro bIsAmmoContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsAmmoContainer")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsBed")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDoorframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsDoorframe")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsFlipped")); }
    BrzCampoPonteiro bIsFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsFloor")); }
    BrzCampoPonteiro bIsFoundationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsFoundation")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsInvincible")); }
    BrzCampoPonteiro bIsLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsLocked")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsMapActor")); }
    BrzCampoPonteiro bIsPinLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsPinLocked")); }
    BrzCampoPonteiro bIsPowerJunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsPowerJunction")); }
    BrzCampoPonteiro bIsPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsPowered")); }
    BrzCampoPonteiro bIsPreviewStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsPreviewStructure")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsRepairing")); }
    BrzCampoPonteiro bIsStructureAttachmentBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsStructureAttachmentBase")); }
    BrzCampoPonteiro bIsTargetListInclusionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsTargetListInclusion")); }
    BrzCampoPonteiro bIsTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsTargeting")); }
    BrzCampoPonteiro bIsTeleporterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsTeleporter")); }
    BrzCampoPonteiro bIsTrappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsTrapped")); }
    BrzCampoPonteiro bIsUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsUnderwater")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLastToggleActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bLastToggleActivated")); }
    BrzCampoPonteiro bLinkedStructureRemovalForceClientUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bLinkedStructureRemovalForceClientUpdate")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bNoCollision")); }
    BrzCampoPonteiro bOnlyAllowTeamActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyAllowTeamActivation")); }
    BrzCampoPonteiro bOnlyConsumeDurabilityOnEquipmentForEnemiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyConsumeDurabilityOnEquipmentForEnemies")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseAmmoOnDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyUseAmmoOnDamage")); }
    BrzCampoPonteiro bOnlyUseSpoilingMultipliersIfActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOnlyUseSpoilingMultipliersIfActivated")); }
    BrzCampoPonteiro bOverrideFoundationSupportDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bOverrideFoundationSupportDistance")); }
    BrzCampoPonteiro bPendingRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPendingRemoval")); }
    BrzCampoPonteiro bPlacementAdjustHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPlacementAdjustHeight")); }
    BrzCampoPonteiro bPlacementChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPlacementChooseRotation")); }
    BrzCampoPonteiro bPlacementIgnoreChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPlacementIgnoreChooseRotation")); }
    BrzCampoPonteiro bPlacementPreventLockingCameraWhileChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPlacementPreventLockingCameraWhileChooseRotation")); }
    BrzCampoPonteiro bPoweredAllowBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredAllowBattery")); }
    BrzCampoPonteiro bPoweredAllowBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredAllowBot")); }
    BrzCampoPonteiro bPoweredAllowSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredAllowSolar")); }
    BrzCampoPonteiro bPoweredHasBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredHasBattery")); }
    BrzCampoPonteiro bPoweredHasBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredHasBot")); }
    BrzCampoPonteiro bPoweredUsingBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredUsingBattery")); }
    BrzCampoPonteiro bPoweredUsingBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredUsingBot")); }
    BrzCampoPonteiro bPoweredUsingSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredUsingSolar")); }
    BrzCampoPonteiro bPoweredWaterSourceWhenActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPoweredWaterSourceWhenActive")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventContainerPingTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventContainerPingType")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLinkingToStorageInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventLinkingToStorageInterface")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventStasis")); }
    BrzCampoPonteiro bPreventStructureHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventStructureHibernation")); }
    BrzCampoPonteiro bPreventToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventToggleActivation")); }
    BrzCampoPonteiro bPreventUsingAsWirelessCraftingSourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreventUsingAsWirelessCraftingSource")); }
    BrzCampoPonteiro bPreviewApplyColorToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bPreviewApplyColorToChildComponents")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateItemFuelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplicateItemFuelClass")); }
    BrzCampoPonteiro bReplicateLastActivatedTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplicateLastActivatedTime")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bReplicates")); }
    BrzCampoPonteiro bRequiresItemExactClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bRequiresItemExactClass")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bSavedWhenStasised")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bServerBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseQuantityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bServerBPNotifyInventoryItemChangesUseQuantity")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseSwappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bServerBPNotifyInventoryItemChangesUseSwapped")); }
    BrzCampoPonteiro bStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStartedUnderwater")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStasised")); }
    BrzCampoPonteiro bStationaryStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStationaryStructure")); }
    BrzCampoPonteiro bStructureCosmeticOverrideStructureColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStructureCosmeticOverrideStructureColorSets")); }
    BrzCampoPonteiro bStructureFiresProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStructureFiresProjectiles")); }
    BrzCampoPonteiro bStructureIgnoreDyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bStructureIgnoreDying")); }
    BrzCampoPonteiro bSupportsLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bSupportsLocking")); }
    BrzCampoPonteiro bSupportsPinActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bSupportsPinActivation")); }
    BrzCampoPonteiro bSupportsPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bSupportsPinLocking")); }
    BrzCampoPonteiro bSupportsStorageInterfaceLinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bSupportsStorageInterfaceLinking")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bTearOff")); }
    BrzCampoPonteiro bTurretIgnoreProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bTurretIgnoreProjectiles")); }
    BrzCampoPonteiro bTurretIsDisabledTooManyNearbyTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bTurretIsDisabledTooManyNearbyTurrets")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAmmoContainerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseAmmoContainerBuff")); }
    BrzCampoPonteiro bUseAmmoFromNearbyContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseAmmoFromNearbyContainer")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPCanAddWirelessExchangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPCanAddWirelessExchange")); }
    BrzCampoPonteiro bUseBPCanBeActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPCanBeActivated")); }
    BrzCampoPonteiro bUseBPCanBeActivatedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPCanBeActivatedByPlayer")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFuelConsumptionMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetFuelConsumptionMultiplier")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetQuantityOfItemWithoutCheckingInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetQuantityOfItemWithoutCheckingInventory")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPNotifyWirelessConsumerAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPNotifyWirelessConsumerRemoved")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPNotifyWirelessSourceAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPNotifyWirelessSourceRemoved")); }
    BrzCampoPonteiro bUseBPOnClientUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPOnClientUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOnServerUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPOnServerUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostPreviewStructureFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPPostPreviewStructureFlipped")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPPreventCharacterBasing")); }
    BrzCampoPonteiro bUseBPPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPPreventStasis")); }
    BrzCampoPonteiro bUseBPSetPlayerConstructorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPSetPlayerConstructor")); }
    BrzCampoPonteiro bUseBPTurretPreventsTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPTurretPreventsTargeting")); }
    BrzCampoPonteiro bUseBPUpdateTrailEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseBPUpdateTrailEffect")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCollisionCompsForFloatingDPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseCollisionCompsForFloatingDPS")); }
    BrzCampoPonteiro bUseColorRegionForEmitterColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseColorRegionForEmitterColor")); }
    BrzCampoPonteiro bUseCooldownOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseCooldownOnTransferAll")); }
    BrzCampoPonteiro bUseDeathCacheCharacterIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseDeathCacheCharacterID")); }
    BrzCampoPonteiro bUseHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseHarvestingComponent")); }
    BrzCampoPonteiro bUseInclusionListTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseInclusionListTargeting")); }
    BrzCampoPonteiro bUseLevelLimitsForTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseLevelLimitsForTargeting")); }
    BrzCampoPonteiro bUseMaxInventoryForAmmoContainerReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseMaxInventoryForAmmoContainerReload")); }
    BrzCampoPonteiro bUseMeshOriginForInventoryAccessTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseMeshOriginForInventoryAccessTrace")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseNoAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseNoAmmo")); }
    BrzCampoPonteiro bUseNoWarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseNoWarning")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseOpenSceneAction")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUseStasisGrid")); }
    BrzCampoPonteiro bUsesHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUsesHealth")); }
    BrzCampoPonteiro bUsingStructureColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bUsingStructureColors")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasAttachedToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bWasAttachedToPawn")); }
    BrzCampoPonteiro bWasPlacementSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bWasPlacementSnapped")); }
    BrzCampoPonteiro bWithinPreventionVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretAOE.bWithinPreventionVolume")); }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateTrailEffect()
    { return { (void*)this, "bUseBPUpdateTrailEffect" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETAOE_H
