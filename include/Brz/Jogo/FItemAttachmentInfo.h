// ==========================================================================
//  FItemAttachmentInfo — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FITEMATTACHMENTINFO_H
#define BRZ_SDK_JOGO_FITEMATTACHMENTINFO_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UActorComponent;


struct FItemAttachmentInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FItemAttachmentInfo"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    FName& AttachedCompNameField() const
    { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.AttachedCompName"); }
    TWeakObjectPtr<void>& AttachedCompReferenceField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "FItemAttachmentInfo.AttachedCompReference"); }
    UActorComponent*& ComponentToAttachField() const
    { return *GetNativePointerField<UActorComponent**>(this, "FItemAttachmentInfo.ComponentToAttach"); }
    BrzCampoPonteiro ExtraItemAttachmentInfosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemAttachmentInfo.ExtraItemAttachmentInfos")); }
    BrzCampoPonteiro IgnoreAttachmentWhenEquipmentOfTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemAttachmentInfo.IgnoreAttachmentWhenEquipmentOfType")); }
    BrzCampoPonteiro OnlyUseAttachmentForActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemAttachmentInfo.OnlyUseAttachmentForActorClass")); }
    BrzCampoPonteiro OverrideUseTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemAttachmentInfo.OverrideUseTag")); }
    FName& SocketToAttachToField() const
    { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.SocketToAttachTo"); }
    BitFieldValue<bool, unsigned __int32> bCanBuildStructuresOn()
    { return { (void*)this, "bCanBuildStructuresOn" }; }
    BitFieldValue<bool, unsigned __int32> bUseParentAnims()
    { return { (void*)this, "bUseParentAnims" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonHands()
    { return { (void*)this, "bAttachToFirstPersonHands" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToThirdPersonWeaponMesh()
    { return { (void*)this, "bAttachToThirdPersonWeaponMesh" }; }
    BitFieldValue<bool, unsigned __int32> bDisabled()
    { return { (void*)this, "bDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemColors()
    { return { (void*)this, "bUseItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseIgnoreAttachmentWhenEquipmentOfType()
    { return { (void*)this, "bUseIgnoreAttachmentWhenEquipmentOfType" }; }
    BitFieldValue<bool, unsigned __int32> bHideCharacterMesh()
    { return { (void*)this, "bHideCharacterMesh" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentRequireWeaponSupportShield()
    { return { (void*)this, "bAttachmentRequireWeaponSupportShield" }; }
    BitFieldValue<bool, unsigned __int32> bForceDediAttachment()
    { return { (void*)this, "bForceDediAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bForceVisibleInFirstPerson()
    { return { (void*)this, "bForceVisibleInFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreEquipmentForceHideFirstPerson()
    { return { (void*)this, "bIgnoreEquipmentForceHideFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonCamera()
    { return { (void*)this, "bAttachToFirstPersonCamera" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonCameraCapsule()
    { return { (void*)this, "bAttachToFirstPersonCameraCapsule" }; }
    BitFieldValue<bool, unsigned __int32> bPersistShieldRefreshOnWeaponEquip()
    { return { (void*)this, "bPersistShieldRefreshOnWeaponEquip" }; }
    BitFieldValue<bool, unsigned __int32> bDisableForTaxidermy()
    { return { (void*)this, "bDisableForTaxidermy" }; }
    BitFieldValue<bool, unsigned __int32> bDontAddAttachedParentBounds()
    { return { (void*)this, "bDontAddAttachedParentBounds" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAttachIfSocketExists()
    { return { (void*)this, "bOnlyAttachIfSocketExists" }; }
    BitFieldValue<bool, unsigned __int32> bSaddleWithNoCollision()
    { return { (void*)this, "bSaddleWithNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostConstructAttachment()
    { return { (void*)this, "bUseBPPostConstructAttachment" }; }

};

#endif  // BRZ_SDK_JOGO_FITEMATTACHMENTINFO_H
