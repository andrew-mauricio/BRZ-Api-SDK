// ==========================================================================
//  UGameplayEffect — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYEFFECT_H
#define BRZ_SDK_JOGO_UGAMEPLAYEFFECT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayEffect
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayEffect"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayEffect.CanApply(FActiveGameplayEffectsContainer&,FGameplayEffectSpec&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanApply(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayEffect.CanApply(FActiveGameplayEffectsContainer&,FGameplayEffectSpec&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayEffect.GetOwnedGameplayTags(FGameplayTagContainer&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetOwnedGameplayTags(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayEffect.GetOwnedGameplayTags(FGameplayTagContainer&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayEffect.GetStackLimitCount()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetStackLimitCount() const
    {
        return NativeCall<void*>(this, "UGameplayEffect.GetStackLimitCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayEffect.OnApplied(FActiveGameplayEffectsContainer&,FGameplayEffectSpec&,FPredictionKey&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnApplied(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UGameplayEffect.OnApplied(FActiveGameplayEffectsContainer&,FGameplayEffectSpec&,FPredictionKey&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayEffect.OnGameplayEffectChanged()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGameplayEffectChanged() const
    {
        return NativeCall<void*>(this, "UGameplayEffect.OnGameplayEffectChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayEffect.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UGameplayEffect.PostLoad()");
    }

    BrzCampoPonteiro ApplicationRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.ApplicationRequirements")); }
    //  no cache antigo este campo se chamava ApplicationRequirements_DEPRECATED.
    //  nesta build ele e' `ApplicationRequirements` — resolve por NOME.
    BrzCampoPonteiro ApplicationRequirements_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.ApplicationRequirements")); }
    BrzCampoPonteiro ApplicationTagRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.ApplicationTagRequirements")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GrantedAbilities` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA00; confianca alta)
    void*& CachedAssetTagsField() const
    { return BrzCampoAncorado<void*>(this, "GrantedAbilities", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GrantedAbilities` +80, medido na build 25090264
    //  (offset absoluto medido: 0xA40; confianca media)
    void*& CachedBlockedAbilityTagsField() const
    { return BrzCampoAncorado<void*>(this, "GrantedAbilities", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GrantedAbilities` +48, medido na build 25090264
    //  (offset absoluto medido: 0xA20; confianca media)
    void*& CachedGrantedTagsField() const
    { return BrzCampoAncorado<void*>(this, "GrantedAbilities", 48); }
    BrzCampoPonteiro ChanceToApplyToTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.ChanceToApplyToTarget")); }
    //  no cache antigo este campo se chamava ChanceToApplyToTarget_DEPRECATED.
    //  nesta build ele e' `ChanceToApplyToTarget` — resolve por NOME.
    BrzCampoPonteiro ChanceToApplyToTarget_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.ChanceToApplyToTarget")); }
    BrzCampoPonteiro ConditionalGameplayEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.ConditionalGameplayEffects")); }
    BrzCampoPonteiro DurationMagnitudeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.DurationMagnitude")); }
    BrzCampoPonteiro DurationPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.DurationPolicy")); }
    BrzCampoPonteiro ExecutionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.Executions")); }
    BrzCampoPonteiro GEComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.GEComponents")); }
    BrzCampoPonteiro GameplayCuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.GameplayCues")); }
    BrzCampoPonteiro GrantedAbilitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.GrantedAbilities")); }
    BrzCampoPonteiro GrantedApplicationImmunityQueryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.GrantedApplicationImmunityQuery")); }
    BrzCampoPonteiro GrantedApplicationImmunityTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.GrantedApplicationImmunityTags")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GrantedApplicationImmunityQuery` +408, medido na build 25090264
    //  (offset absoluto medido: 0x840; confianca baixa)
    void*& HasGrantedApplicationImmunityQueryField() const
    { return BrzCampoAncorado<void*>(this, "GrantedApplicationImmunityQuery", 408); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoveGameplayEffectQuery` +408, medido na build 25090264
    //  (offset absoluto medido: 0x9E0; confianca baixa)
    void*& HasRemoveGameplayEffectsQueryField() const
    { return BrzCampoAncorado<void*>(this, "RemoveGameplayEffectQuery", 408); }
    BrzCampoPonteiro InheritableBlockedAbilityTagsContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.InheritableBlockedAbilityTagsContainer")); }
    BrzCampoPonteiro InheritableGameplayEffectTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.InheritableGameplayEffectTags")); }
    BrzCampoPonteiro InheritableOwnedTagsContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.InheritableOwnedTagsContainer")); }
    BrzCampoPonteiro ModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.Modifiers")); }
    BrzCampoPonteiro OngoingTagRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.OngoingTagRequirements")); }
    BrzCampoPonteiro OverflowEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.OverflowEffects")); }
    BrzCampoPonteiro PeriodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.Period")); }
    BrzCampoPonteiro PeriodicInhibitionPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.PeriodicInhibitionPolicy")); }
    BrzCampoPonteiro PrematureExpirationEffectClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.PrematureExpirationEffectClasses")); }
    BrzCampoPonteiro RemovalTagRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.RemovalTagRequirements")); }
    BrzCampoPonteiro RemoveGameplayEffectQueryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.RemoveGameplayEffectQuery")); }
    BrzCampoPonteiro RemoveGameplayEffectsWithTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.RemoveGameplayEffectsWithTags")); }
    BrzCampoPonteiro RoutineExpirationEffectClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.RoutineExpirationEffectClasses")); }
    BrzCampoPonteiro StackDurationRefreshPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.StackDurationRefreshPolicy")); }
    BrzCampoPonteiro StackExpirationPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.StackExpirationPolicy")); }
    int& StackLimitCountField() const
    { return *GetNativePointerField<int*>(this, "UGameplayEffect.StackLimitCount"); }
    BrzCampoPonteiro StackPeriodResetPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.StackPeriodResetPolicy")); }
    BrzCampoPonteiro StackingTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.StackingType")); }
    BrzCampoPonteiro UIDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayEffect.UIData")); }
    BitFieldValue<bool, unsigned __int32> bClearStackOnOverflow()
    { return { (void*)this, "bClearStackOnOverflow" }; }
    BitFieldValue<bool, unsigned __int32> bDenyOverflowApplication()
    { return { (void*)this, "bDenyOverflowApplication" }; }
    BitFieldValue<bool, unsigned __int32> bExecutePeriodicEffectOnApplication()
    { return { (void*)this, "bExecutePeriodicEffectOnApplication" }; }
    BitFieldValue<bool, unsigned __int32> bRequireModifierSuccessToTriggerCues()
    { return { (void*)this, "bRequireModifierSuccessToTriggerCues" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressStackingCues()
    { return { (void*)this, "bSuppressStackingCues" }; }

};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYEFFECT_H
