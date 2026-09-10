// ==========================================================================
//  UGameplayAbility_CharacterJump — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYABILITY_CHARACTERJUMP_H
#define BRZ_SDK_JOGO_UGAMEPLAYABILITY_CHARACTERJUMP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayAbility_CharacterJump
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayAbility_CharacterJump"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro AbilityTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.AbilityTags")); }
    BrzCampoPonteiro AbilityTriggersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.AbilityTriggers")); }
    BrzCampoPonteiro ActivationBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.ActivationBlockedTags")); }
    BrzCampoPonteiro ActivationOwnedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.ActivationOwnedTags")); }
    BrzCampoPonteiro ActivationRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.ActivationRequiredTags")); }
    BrzCampoPonteiro ActiveTasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.ActiveTasks")); }
    BrzCampoPonteiro BlockAbilitiesWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.BlockAbilitiesWithTag")); }
    BrzCampoPonteiro CancelAbilitiesWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.CancelAbilitiesWithTag")); }
    BrzCampoPonteiro CooldownGameplayEffectClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.CooldownGameplayEffectClass")); }
    BrzCampoPonteiro CostGameplayEffectClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.CostGameplayEffectClass")); }
    BrzCampoPonteiro CurrentActivationInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.CurrentActivationInfo")); }
    BrzCampoPonteiro CurrentEventDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.CurrentEventData")); }
    BrzCampoPonteiro CurrentMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.CurrentMontage")); }
    unsigned char& InstancingPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_CharacterJump.InstancingPolicy"); }
    unsigned char& NetExecutionPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_CharacterJump.NetExecutionPolicy"); }
    unsigned char& NetSecurityPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_CharacterJump.NetSecurityPolicy"); }
    BitFieldValue<bool, unsigned __int32> RemoteInstanceEnded()
    { return { (void*)this, "RemoteInstanceEnded" }; }
    unsigned char& ReplicationPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_CharacterJump.ReplicationPolicy"); }
    BrzCampoPonteiro SourceBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.SourceBlockedTags")); }
    BrzCampoPonteiro SourceRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.SourceRequiredTags")); }
    BrzCampoPonteiro TargetBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.TargetBlockedTags")); }
    BrzCampoPonteiro TargetRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_CharacterJump.TargetRequiredTags")); }
    BitFieldValue<bool, unsigned __int32> bIsAbilityEnding()
    { return { (void*)this, "bIsAbilityEnding" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlockingOtherAbilities()
    { return { (void*)this, "bIsBlockingOtherAbilities" }; }
    BitFieldValue<bool, unsigned __int32> bIsCancelable()
    { return { (void*)this, "bIsCancelable" }; }
    BitFieldValue<bool, unsigned __int32> bMarkPendingKillOnAbilityEnd()
    { return { (void*)this, "bMarkPendingKillOnAbilityEnd" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateInputDirectly()
    { return { (void*)this, "bReplicateInputDirectly" }; }
    BitFieldValue<bool, unsigned __int32> bRetriggerInstancedAbility()
    { return { (void*)this, "bRetriggerInstancedAbility" }; }
    BitFieldValue<bool, unsigned __int32> bServerRespectsRemoteAbilityCancellation()
    { return { (void*)this, "bServerRespectsRemoteAbilityCancellation" }; }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYABILITY_CHARACTERJUMP_H
