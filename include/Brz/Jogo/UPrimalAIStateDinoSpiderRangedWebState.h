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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=237]]
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
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
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
    BitFieldValue<bool, unsigned __int32> bBPCanUseState()
    { return { (void*)this, "bBPCanUseState" }; }
    BitFieldValue<bool, unsigned __int32> bGetTargetDirection()
    { return { (void*)this, "bGetTargetDirection" }; }
    BitFieldValue<bool, unsigned __int32> bLeadTarget()
    { return { (void*)this, "bLeadTarget" }; }
    BitFieldValue<bool, unsigned __int32> bScaleProjDamageByDinoDamage()
    { return { (void*)this, "bScaleProjDamageByDinoDamage" }; }
    BitFieldValue<bool, unsigned __int32> bShouldResetInLosingTarget()
    { return { (void*)this, "bShouldResetInLosingTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseAimSocket()
    { return { (void*)this, "bUseAimSocket" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAttack()
    { return { (void*)this, "bUseBPCanAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanInterrupt()
    { return { (void*)this, "bUseBPCanInterrupt" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAttackWeight()
    { return { (void*)this, "bUseBPOverrideAttackWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRangedAttack()
    { return { (void*)this, "bUseBPRangedAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRangedAttackOnBegin()
    { return { (void*)this, "bUseBPRangedAttackOnBegin" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipIntervalCheck()
    { return { (void*)this, "bUseBPSkipIntervalCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipRangeCheck()
    { return { (void*)this, "bUseBPSkipRangeCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseRangedSockets()
    { return { (void*)this, "bUseRangedSockets" }; }
    BitFieldValue<bool, unsigned __int32> bClampDirection()
    { return { (void*)this, "bClampDirection" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDWEBSTATE_H
