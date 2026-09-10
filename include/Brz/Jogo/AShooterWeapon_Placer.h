// ==========================================================================
//  AShooterWeapon_Placer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_PLACER_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_PLACER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct USkeletalMeshComponent;

#include "AShooterWeapon.h"

struct AShooterWeapon_Placer : public AShooterWeapon
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Placer"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAn
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=345+grafo=4/4]]
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon_Placer.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.AttachOtherMeshes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    void AttachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.AttachOtherMeshes()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Placer.BPPrefireAction()
    // endereco: cache_pdb_25090264
    void BPPrefireAction() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.BPPrefireAction()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Placer.BPSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=61]]
    bool BPSecondaryAction() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Placer.BPSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.CanFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=114]]
    bool CanFire(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterWeapon_Placer.CanFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.ConfirmStructurePlacement(bool)
    // endereco: cache_pdb_25090264
    void ConfirmStructurePlacement(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Placer.ConfirmStructurePlacement(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.DetachOtherMeshes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void DetachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.DetachOtherMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.DetonateExplosives()
    // endereco: casamento de bytes com a build de referencia
    void DetonateExplosives() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.DetonateExplosives()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.FireWeapon()
    // endereco: cache_pdb_25090264
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.FireWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.GetPlacementOrigin(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: cache_pdb_25090264
    void GetPlacementOrigin(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Placer.GetPlacementOrigin(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.OnEquip()
    // classe: a funcao mora em AShooterWeapon, e AShooterWeapon_Placer herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void OnEquip() const
    {
        NativeCall<void>(this, "AShooterWeapon.OnEquip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.PlaceStructure()
    // endereco: cache_pdb_25090264
    static void PlaceStructure()
    {
        NativeCall<void>(nullptr, "AShooterWeapon_Placer.PlaceStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Placer.PlaceStructureWithSecondaryAction()
    // endereco: cache_pdb_25090264
    void PlaceStructureWithSecondaryAction() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.PlaceStructureWithSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.RefreshLeftArmVisibility()
    // endereco: cache_pdb_25090264
    void RefreshLeftArmVisibility() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.RefreshLeftArmVisibility()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Placer.ServerDetonateExplosives()
    // endereco: cache_pdb_25090264
    void ServerDetonateExplosives() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.ServerDetonateExplosives()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.ServerDetonateExplosives_Implementation()
    // endereco: cache_pdb_25090264
    void ServerDetonateExplosives_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.ServerDetonateExplosives_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.SetItemVisibility(bool)
    // endereco: cache_pdb_25090264
    void SetItemVisibility(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Placer.SetItemVisibility(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.StartFire(bool)
    // classe: a funcao mora em AShooterWeapon, e AShooterWeapon_Placer herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.StartReload(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartReload(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Placer.StartReload(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.StartSecondaryAction()
    // endereco: casamento de bytes com a build de referencia
    void StartSecondaryAction() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Placer.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.UnHideLeftArm()
    // endereco: cache_pdb_25090264
    void UnHideLeftArm() const
    {
        NativeCall<void>(this, "AShooterWeapon_Placer.UnHideLeftArm()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.UpdateFirstPersonMeshes(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=80]]
    void UpdateFirstPersonMeshes(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Placer.UpdateFirstPersonMeshes(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Placer.UseAmmo(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=406+grafo=7/7]]
    void UseAmmo(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon_Placer.UseAmmo(int)", a0);
    }

    float& DetonateExplosivesMaxRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.DetonateExplosivesMaxRadius"); }
    BrzCampoPonteiro EquipItemAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Placer.EquipItemAnim")); }
    FName& ExplosiveBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Placer.ExplosiveBoneName"); }
    FName& ItemAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Placer.ItemAttachPoint3P"); }
    USkeletalMeshComponent*& ItemToPlace3PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterWeapon_Placer.ItemToPlace3P"); }
    float& MinimumTimeBetweenPlacementsField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.MinimumTimeBetweenPlacements"); }
    BrzCampoPonteiro PlaceOnSelfAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Placer.PlaceOnSelfAnim")); }
    float& PlacementWaitTimeFromEquipField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.PlacementWaitTimeFromEquip"); }
    BrzCampoPonteiro SecondaryActionAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Placer.SecondaryActionAnim")); }
    BrzCampoPonteiro StructureToPlaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Placer.StructureToPlace")); }
    float& TimeToHideLeftArmFPVField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.TimeToHideLeftArmFPV"); }
    BrzCampoPonteiro UnableToPlaceAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Placer.UnableToPlaceAnim")); }
    bool& bHiddenExplosiveField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bHiddenExplosive"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bWaitingForPlacement` +1, medido na build 25090264
    //  (offset absoluto medido: 0x119F; confianca alta)
    bool& bStructureCanBePlacedField() const
    { return BrzCampoAncorado<bool>(this, "bWaitingForPlacement", 1); }
    BitFieldValue<bool, unsigned __int32> bCanDetonateExplosives()
    { return { (void*)this, "bCanDetonateExplosives" }; }
    BitFieldValue<bool, unsigned __int32> bHideLeftArmFPVWhenNoAmmo()
    { return { (void*)this, "bHideLeftArmFPVWhenNoAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bPlaySecondaryActionAnim()
    { return { (void*)this, "bPlaySecondaryActionAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseAnimNotifyToPlaceStructure()
    { return { (void*)this, "bUseAnimNotifyToPlaceStructure" }; }
    BitFieldValue<bool, unsigned __int32> bModifyDetonatorMaterial()
    { return { (void*)this, "bModifyDetonatorMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bPlacingStructureConsumeItemAmmo()
    { return { (void*)this, "bPlacingStructureConsumeItemAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlaceStructureOnFire()
    { return { (void*)this, "bDontPlaceStructureOnFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSecondaryAction()
    { return { (void*)this, "bUseBPSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreFireAction()
    { return { (void*)this, "bUseBPPreFireAction" }; }
    BitFieldValue<bool, unsigned __int32> bSkipStartPlacingCheatCheck()
    { return { (void*)this, "bSkipStartPlacingCheatCheck" }; }
    BitFieldValue<bool, unsigned __int32> ChangeMaterialDiffrentBehaviour()
    { return { (void*)this, "ChangeMaterialDiffrentBehaviour" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenExplosive()
    { return { (void*)this, "bHiddenExplosive" }; }
    BitFieldValue<bool, unsigned __int32> bWaitingForPlacement()
    { return { (void*)this, "bWaitingForPlacement" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_PLACER_H
