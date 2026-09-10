// ==========================================================================
//  UGameplayAbility_Montage — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYABILITY_MONTAGE_H
#define BRZ_SDK_JOGO_UGAMEPLAYABILITY_MONTAGE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayAbility_Montage
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayAbility_Montage"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility_Montage.GetGameplayEffectsWhileAnimating(TArray<UGameplayEffect*,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameplayEffectsWhileAnimating(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility_Montage.GetGameplayEffectsWhileAnimating(TArray<UGameplayEffect*,TSizedDefaultAllocator<32>>&)", a0);
    }

    BrzCampoPonteiro AbilityTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.AbilityTags")); }
    BrzCampoPonteiro AbilityTriggersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.AbilityTriggers")); }
    BrzCampoPonteiro ActivationBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.ActivationBlockedTags")); }
    BrzCampoPonteiro ActivationOwnedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.ActivationOwnedTags")); }
    BrzCampoPonteiro ActivationRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.ActivationRequiredTags")); }
    BrzCampoPonteiro ActiveTasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.ActiveTasks")); }
    BrzCampoPonteiro BlockAbilitiesWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.BlockAbilitiesWithTag")); }
    BrzCampoPonteiro CancelAbilitiesWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.CancelAbilitiesWithTag")); }
    BrzCampoPonteiro CooldownGameplayEffectClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.CooldownGameplayEffectClass")); }
    BrzCampoPonteiro CostGameplayEffectClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.CostGameplayEffectClass")); }
    BrzCampoPonteiro CurrentActivationInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.CurrentActivationInfo")); }
    BrzCampoPonteiro CurrentEventDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.CurrentEventData")); }
    BrzCampoPonteiro CurrentMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.CurrentMontage")); }
    BrzCampoPonteiro GameplayEffectClassesWhileAnimatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.GameplayEffectClassesWhileAnimating")); }
    BrzCampoPonteiro GameplayEffectsWhileAnimatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.GameplayEffectsWhileAnimating")); }
    unsigned char& InstancingPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_Montage.InstancingPolicy"); }
    BrzCampoPonteiro MontageToPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.MontageToPlay")); }
    unsigned char& NetExecutionPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_Montage.NetExecutionPolicy"); }
    unsigned char& NetSecurityPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_Montage.NetSecurityPolicy"); }
    float& PlayRateField() const
    { return *GetNativePointerField<float*>(this, "UGameplayAbility_Montage.PlayRate"); }
    BitFieldValue<bool, unsigned __int32> RemoteInstanceEnded()
    { return { (void*)this, "RemoteInstanceEnded" }; }
    unsigned char& ReplicationPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility_Montage.ReplicationPolicy"); }
    FName& SectionNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayAbility_Montage.SectionName"); }
    BrzCampoPonteiro SourceBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.SourceBlockedTags")); }
    BrzCampoPonteiro SourceRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.SourceRequiredTags")); }
    BrzCampoPonteiro TargetBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.TargetBlockedTags")); }
    BrzCampoPonteiro TargetRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility_Montage.TargetRequiredTags")); }
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

#endif  // BRZ_SDK_JOGO_UGAMEPLAYABILITY_MONTAGE_H
