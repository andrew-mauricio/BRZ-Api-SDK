// ==========================================================================
//  UPrimalAIStateDinoSpiderRangedAcidState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDACIDSTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDACIDSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoSpiderRangedAcidState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoSpiderRangedAcidState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedAcidState.EndAnimationState(FName,ENetRole)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderRangedAcidState.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedAcidState.OnBegin(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedAcidState.OnEnd()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedAcidState.OnTick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedAcidState.StartAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderRangedAcidState.StartAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderRangedAcidState.TickAnimationState(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderRangedAcidState.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.AnimationCustomName"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.ChildStates")); }
    BrzCampoPonteiro IsInAnimationStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.IsInAnimationState")); }
    BrzCampoPonteiro IsInAttackStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.IsInAttackState")); }
    double& NextSprayTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.NextSprayTime"); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.Pawn"); }
    FName& SprayStartSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.SprayStartSocket"); }
    float& TimeBetweenProjectileField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.TimeBetweenProjectile"); }
    BrzCampoPonteiro bAimAtTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bAimAtTarget")); }
    BrzCampoPonteiro bBPCanUseStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bBPCanUseState")); }
    BrzCampoPonteiro bScaleProjDamageByDinoDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bScaleProjDamageByDinoDamage")); }
    BrzCampoPonteiro bShouldResetInLosingTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bShouldResetInLosingTarget")); }
    BrzCampoPonteiro bUseBPCanAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bUseBPCanAttack")); }
    BrzCampoPonteiro bUseBPCanInterruptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bUseBPCanInterrupt")); }
    BrzCampoPonteiro bUseBPOverrideAttackWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bUseBPOverrideAttackWeight")); }
    BrzCampoPonteiro bUseBPSkipIntervalCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bUseBPSkipIntervalCheck")); }
    BrzCampoPonteiro bUseBPSkipRangeCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bUseBPSkipRangeCheck")); }
    BitFieldValue<bool, unsigned __int32> bAimAtTarget()
    { return { (void*)this, "bAimAtTarget" }; }
    BitFieldValue<bool, unsigned __int32> bScaleProjDamageByDinoDamage()
    { return { (void*)this, "bScaleProjDamageByDinoDamage" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERRANGEDACIDSTATE_H
