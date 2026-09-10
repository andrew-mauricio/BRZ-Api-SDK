// ==========================================================================
//  UGameplayAbilitiesDeveloperSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYABILITIESDEVELOPERSETTINGS_H
#define BRZ_SDK_JOGO_UGAMEPLAYABILITIESDEVELOPERSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayAbilitiesDeveloperSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayAbilitiesDeveloperSettings"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro AbilitySystemGlobalsClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.AbilitySystemGlobalsClassName")); }
    BrzCampoPonteiro ActivateFailCanActivateAbilityTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.ActivateFailCanActivateAbilityTag")); }
    BrzCampoPonteiro ActivateFailCooldownTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.ActivateFailCooldownTag")); }
    BrzCampoPonteiro ActivateFailCostTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.ActivateFailCostTag")); }
    BrzCampoPonteiro ActivateFailNetworkingTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.ActivateFailNetworkingTag")); }
    BrzCampoPonteiro ActivateFailTagsBlockedTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.ActivateFailTagsBlockedTag")); }
    BrzCampoPonteiro ActivateFailTagsMissingTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.ActivateFailTagsMissingTag")); }
    BrzCampoPonteiro DefaultGameplayModEvaluationChannelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.DefaultGameplayModEvaluationChannel")); }
    BrzCampoPonteiro GameplayCueNotifyPathsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GameplayCueNotifyPaths")); }
    BrzCampoPonteiro GameplayModEvaluationChannelAliasesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GameplayModEvaluationChannelAliases")); }
    BrzCampoPonteiro GameplayTagResponseTableNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GameplayTagResponseTableName")); }
    BrzCampoPonteiro GlobalAttributeMetaDataTableNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GlobalAttributeMetaDataTableName")); }
    BrzCampoPonteiro GlobalAttributeSetDefaultsTableNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GlobalAttributeSetDefaultsTableNames")); }
    BrzCampoPonteiro GlobalCurveTableNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GlobalCurveTableName")); }
    BrzCampoPonteiro GlobalGameplayCueManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GlobalGameplayCueManagerClass")); }
    BrzCampoPonteiro GlobalGameplayCueManagerNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbilitiesDeveloperSettings.GlobalGameplayCueManagerName")); }
    int& MinimalReplicationTagCountBitsField() const
    { return *GetNativePointerField<int*>(this, "UGameplayAbilitiesDeveloperSettings.MinimalReplicationTagCountBits"); }
    BitFieldValue<bool, unsigned __int32> PredictTargetGameplayEffects()
    { return { (void*)this, "PredictTargetGameplayEffects" }; }
    BitFieldValue<bool, unsigned __int32> ReplicateActivationOwnedTags()
    { return { (void*)this, "ReplicateActivationOwnedTags" }; }
    BitFieldValue<bool, unsigned __int32> bAllowGameplayModEvaluationChannels()
    { return { (void*)this, "bAllowGameplayModEvaluationChannels" }; }
    BitFieldValue<bool, unsigned __int32> bUseDebugTargetFromHud()
    { return { (void*)this, "bUseDebugTargetFromHud" }; }

};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYABILITIESDEVELOPERSETTINGS_H
