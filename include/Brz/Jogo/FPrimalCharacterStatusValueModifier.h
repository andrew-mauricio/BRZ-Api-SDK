// ==========================================================================
//  FPrimalCharacterStatusValueModifier — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSVALUEMODIFIER_H
#define BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSVALUEMODIFIER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalCharacterStatusValueModifier
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCharacterStatusValueModifier"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    float& AmountToAddField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.AmountToAdd"); }
    float& BaseAmountToAddField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.BaseAmountToAdd"); }
    TWeakObjectPtr<void>& InstigatorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "FPrimalCharacterStatusValueModifier.Instigator"); }
    float& SpeedToAddField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.SpeedToAdd"); }
    int& StatusValueModifierDescriptionIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }
    FieldArray<char> StopOnValueNearMaxField() const
    { return { (void*)this, "FPrimalCharacterStatusValueModifier.StopOnValueNearMax" }; }
    FieldArray<char> ValueTypeField() const
    { return { (void*)this, "FPrimalCharacterStatusValueModifier.ValueType" }; }
    BrzCampoPonteiro bContinueOnUnchangedValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterStatusValueModifier.bContinueOnUnchangedValue")); }
    BrzCampoPonteiro bForceImmediateTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterStatusValueModifier.bForceImmediateTick")); }
    bool& bMakeUntameableField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bMakeUntameable"); }
    BrzCampoPonteiro bSetAdditionalValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterStatusValueModifier.bSetAdditionalValue")); }
    bool& bSetValueField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bSetValue"); }
};

#endif  // BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSVALUEMODIFIER_H
