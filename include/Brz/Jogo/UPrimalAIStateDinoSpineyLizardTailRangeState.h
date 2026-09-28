// ==========================================================================
//  UPrimalAIStateDinoSpineyLizardTailRangeState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPINEYLIZARDTAILRANGESTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPINEYLIZARDTAILRANGESTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoSpineyLizardTailRangeState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoSpineyLizardTailRangeState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpineyLizardTailRangeState.EndAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpineyLizardTailRangeState.SpineyAttack(UE::Math::TVector<double>&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpineyAttack(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.SpineyAttack(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    float& AccuracyWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.AccuracyWeight"); }
    FName& AimSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.AimSocket"); }
    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.AnimationCustomName"); }
    BrzCampoPonteiro CharacterTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.CharacterTargetLocOffset")); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.ChildStates")); }
    float& ClampAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.ClampAngle"); }
    BrzCampoPonteiro IsInAnimationStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.IsInAnimationState")); }
    BrzCampoPonteiro IsInAttackStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.IsInAttackState")); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.Pawn"); }
    BrzCampoPonteiro RangedSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.RangedSockets")); }
    float& SpreadOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.SpreadOffset"); }
    BrzCampoPonteiro WorldGeometryTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.WorldGeometryTargetLocOffset")); }
    BrzCampoPonteiro bBPCanUseStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bBPCanUseState")); }
    BrzCampoPonteiro bGetTargetDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bGetTargetDirection")); }
    BrzCampoPonteiro bLeadTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bLeadTarget")); }
    BrzCampoPonteiro bScaleProjDamageByDinoDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bScaleProjDamageByDinoDamage")); }
    BrzCampoPonteiro bShouldResetInLosingTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bShouldResetInLosingTarget")); }
    BrzCampoPonteiro bUseAimSocketField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseAimSocket")); }
    BrzCampoPonteiro bUseBPCanAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPCanAttack")); }
    BrzCampoPonteiro bUseBPCanInterruptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPCanInterrupt")); }
    BrzCampoPonteiro bUseBPOverrideAttackWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPOverrideAttackWeight")); }
    BrzCampoPonteiro bUseBPRangedAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPRangedAttack")); }
    BrzCampoPonteiro bUseBPRangedAttackOnBeginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPRangedAttackOnBegin")); }
    BrzCampoPonteiro bUseBPSkipIntervalCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPSkipIntervalCheck")); }
    BrzCampoPonteiro bUseBPSkipRangeCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseBPSkipRangeCheck")); }
    BrzCampoPonteiro bUseRangedSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.bUseRangedSockets")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPINEYLIZARDTAILRANGESTATE_H
