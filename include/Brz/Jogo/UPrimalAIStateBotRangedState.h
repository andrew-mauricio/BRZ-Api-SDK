// ==========================================================================
//  UPrimalAIStateBotRangedState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEBOTRANGEDSTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEBOTRANGEDSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateBotRangedState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateBotRangedState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBotRangedState.BPGetSocketLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetSocketLocation() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBotRangedState.BPGetSocketLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBotRangedState.EndAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateBotRangedState.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    float& AccuracyWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.AccuracyWeight"); }
    FName& AimSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateBotRangedState.AimSocket"); }
    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateBotRangedState.AnimationCustomName"); }
    float& ChanceBotWillAimDirectlyAtDinoField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillAimDirectlyAtDino"); }
    float& ChanceBotWillAimDirectlyAtPlayerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillAimDirectlyAtPlayer"); }
    float& ChanceBotWillCompletelyMissDinoField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillCompletelyMissDino"); }
    float& ChanceBotWillCompletelyMissPlayerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillCompletelyMissPlayer"); }
    BrzCampoPonteiro CharacterTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBotRangedState.CharacterTargetLocOffset")); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBotRangedState.ChildStates")); }
    float& ClampAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ClampAngle"); }
    float& ConeHalfAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ConeHalfAngle"); }
    float& ConeHalfAngleRandRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ConeHalfAngleRandRange"); }
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBotRangedState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateBotRangedState.Pawn"); }
    BrzCampoPonteiro RangedSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBotRangedState.RangedSockets")); }
    float& SpreadOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.SpreadOffset"); }
    BrzCampoPonteiro WorldGeometryTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBotRangedState.WorldGeometryTargetLocOffset")); }
    BitFieldValue<bool, unsigned __int32> bBPCanUseState()
    { return { (void*)this, "bBPCanUseState" }; }
    bool& bDrawDebugField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBotRangedState.bDrawDebug"); }
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
    BitFieldValue<bool, unsigned __int32> bDrawDebug()
    { return { (void*)this, "bDrawDebug" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetSocketLocation()
    { return { (void*)this, "bUseBPGetSocketLocation" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEBOTRANGEDSTATE_H
