// ==========================================================================
//  FWorldBuffDefinition — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDBUFFDEFINITION_H
#define BRZ_SDK_JOGO_FWORLDBUFFDEFINITION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldBuffDefinition
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldBuffDefinition"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldBuffDefinition.operator=(FWorldBuffDefinition&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FWorldBuffDefinition.operator=(FWorldBuffDefinition&)", a0);
    }

    BrzCampoPonteiro BuffDifficultyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.BuffDifficulty")); }
    BrzCampoPonteiro DifficultyDisplayTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.DifficultyDisplayText")); }
    BrzCampoPonteiro PropertyModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.PropertyModifiers")); }
    BrzCampoPonteiro StackLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.StackLimit")); }
    BrzCampoPonteiro TimeFromEndToAllowReplacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.TimeFromEndToAllowReplacement")); }
    BrzCampoPonteiro WorldBuffCustomImplementationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffCustomImplementation")); }
    BrzCampoPonteiro WorldBuffDisplayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffDisplayIcon")); }
    BrzCampoPonteiro WorldBuffDisplayTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffDisplayText")); }
    BrzCampoPonteiro WorldBuffDisplayTitleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffDisplayTitle")); }
    BrzCampoPonteiro WorldBuffDisplayTitleColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffDisplayTitleColor")); }
    BrzCampoPonteiro WorldBuffDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffDuration")); }
    BrzCampoPonteiro WorldBuffIdentifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffIdentifier")); }
    BrzCampoPonteiro WorldBuffServerNotificationIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffServerNotificationIcon")); }
    BrzCampoPonteiro WorldBuffServerNotificationSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffServerNotificationSound")); }
    BrzCampoPonteiro WorldBuffServerNotificationTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffServerNotificationText")); }
    BrzCampoPonteiro WorldBuffServerNotificationTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffServerNotificationTextColor")); }
    BrzCampoPonteiro WorldBuffSetNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffSetName")); }
    BrzCampoPonteiro WorldBuffsToPreventWhileActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffsToPreventWhileActive")); }
    BrzCampoPonteiro WorldBuffsToRemoveOnStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldBuffDefinition.WorldBuffsToRemoveOnStart")); }
    BitFieldValue<bool, unsigned __int32> bForceDisableServerNotifications()
    { return { (void*)this, "bForceDisableServerNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAddingAnyOtherWorldBuffs()
    { return { (void*)this, "bPreventAddingAnyOtherWorldBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshTimerAtFullStacks()
    { return { (void*)this, "bRefreshTimerAtFullStacks" }; }
    BitFieldValue<bool, unsigned __int32> bRemoveAllOtherWorldBuffsOnStart()
    { return { (void*)this, "bRemoveAllOtherWorldBuffsOnStart" }; }
    BitFieldValue<bool, unsigned __int32> bStacksExtendDuration()
    { return { (void*)this, "bStacksExtendDuration" }; }
    BitFieldValue<bool, unsigned __int32> bStacksIncreaseEffect()
    { return { (void*)this, "bStacksIncreaseEffect" }; }

};

#endif  // BRZ_SDK_JOGO_FWORLDBUFFDEFINITION_H
