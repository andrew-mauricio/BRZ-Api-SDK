// ==========================================================================
//  UPrimalAIStateDinoSpiderRangedWebState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDWEBSTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDWEBSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoSpiderRangedWebState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoSpiderRangedWebState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedWebState.OnBegin(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoSpiderRangedWebState.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedWebState.OnEnd()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoSpiderRangedWebState.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedWebState.StartAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderRangedWebState.StartAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedWebState.TickAnimationState(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderRangedWebState.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    float& AccuracyWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.AccuracyWeight"); }
    FName& AimSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.AimSocket"); }
    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.AnimationCustomName"); }
    BrzCampoPonteiro CharacterTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.CharacterTargetLocOffset")); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.ChildStates")); }
    float& ClampAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.ClampAngle"); }
    BrzCampoPonteiro IsInAnimationStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.IsInAnimationState")); }
    BrzCampoPonteiro IsInAttackStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.IsInAttackState")); }
    float& LeadTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.LeadTime"); }
    double& NextSprayTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalAIStateDinoSpiderRangedWebState.NextSprayTime"); }
    int& NumberOfProjectilesMultiplierField() const
    { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderRangedWebState.NumberOfProjectilesMultiplier"); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoSpiderRangedWebState.Pawn"); }
    BrzCampoPonteiro RangedSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.RangedSockets")); }
    FName& SprayEndSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SprayEndSocket"); }
    FName& SprayStartSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SprayStartSocket"); }
    float& SpreadOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SpreadOffset"); }
    float& SpreadOffsetPitchField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SpreadOffsetPitch"); }
    float& TimeBetweenProjectileField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.TimeBetweenProjectile"); }
    BrzCampoPonteiro WorldGeometryTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.WorldGeometryTargetLocOffset")); }
    BrzCampoPonteiro bBPCanUseStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bBPCanUseState")); }
    BrzCampoPonteiro bClampDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bClampDirection")); }
    BrzCampoPonteiro bGetTargetDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bGetTargetDirection")); }
    BrzCampoPonteiro bLeadTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bLeadTarget")); }
    BrzCampoPonteiro bScaleProjDamageByDinoDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bScaleProjDamageByDinoDamage")); }
    BrzCampoPonteiro bShouldResetInLosingTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bShouldResetInLosingTarget")); }
    BrzCampoPonteiro bUseAimSocketField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseAimSocket")); }
    BrzCampoPonteiro bUseBPCanAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPCanAttack")); }
    BrzCampoPonteiro bUseBPCanInterruptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPCanInterrupt")); }
    BrzCampoPonteiro bUseBPOverrideAttackWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPOverrideAttackWeight")); }
    BrzCampoPonteiro bUseBPRangedAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPRangedAttack")); }
    BrzCampoPonteiro bUseBPRangedAttackOnBeginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPRangedAttackOnBegin")); }
    BrzCampoPonteiro bUseBPSkipIntervalCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPSkipIntervalCheck")); }
    BrzCampoPonteiro bUseBPSkipRangeCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseBPSkipRangeCheck")); }
    BrzCampoPonteiro bUseRangedSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedWebState.bUseRangedSockets")); }
    BitFieldValue<bool, unsigned __int32> bClampDirection()
    { return { (void*)this, "bClampDirection" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDWEBSTATE_H
