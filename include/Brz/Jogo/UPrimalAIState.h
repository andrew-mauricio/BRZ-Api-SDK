// ==========================================================================
//  UPrimalAIState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.BPCanAttack(float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCanAttack(float a0, float a1, void* a2) const
    {
        return NativeCall<void*, float, float, void*>(this, "UPrimalAIState.BPCanAttack(float,float,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.BPGetDebugInfoString()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetDebugInfoString() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.BPGetDebugInfoString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.BPOverrideAttackWeight(float,float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideAttackWeight(float a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, float, float, float, void*>(this, "UPrimalAIState.BPOverrideAttackWeight(float,float,float,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.CanInterrupt()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanInterrupt() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.CanInterrupt()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.CanUseState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseState() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.CanUseState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.EndAnimationState(FName,ENetRole)
    // endereco: cache_pdb_25090264
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIState.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDebugInfoString() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.GetDebugInfoString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.OnBegin(UPrimalAIState*)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIState.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.OnCanUseStateEvent()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=61+chamadores=2]]
    BrzPonteiro OnCanUseStateEvent() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.OnCanUseStateEvent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.OnEnd()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.OnTick(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIState.OnTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.OnTickEvent(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnTickEvent(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIState.OnTickEvent(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.SetInAnimationStateActive(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetInAnimationStateActive(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalAIState.SetInAnimationStateActive(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.SetLastAttackTime()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=28]]
    BrzPonteiro SetLastAttackTime() const
    {
        return NativeCall<void*>(this, "UPrimalAIState.SetLastAttackTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.StartAnimationState(FName,ENetRole)
    // endereco: cache_pdb_25090264
    BrzPonteiro StartAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIState.StartAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.TickAnimationState(float,FName,ENetRole)
    // endereco: cache_pdb_25090264
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIState.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIState.TickAnimationStateEvent(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationStateEvent(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIState.TickAnimationStateEvent(float,FName,ENetRole)", a0, a1, a2);
    }

    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIState.AnimationCustomName"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIState.ChildStates")); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIState.Pawn"); }
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
    BitFieldValue<bool, unsigned __int32> bBPCanUseState()
    { return { (void*)this, "bBPCanUseState" }; }
    BitFieldValue<bool, unsigned __int32> bShouldResetInLosingTarget()
    { return { (void*)this, "bShouldResetInLosingTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAttack()
    { return { (void*)this, "bUseBPCanAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanInterrupt()
    { return { (void*)this, "bUseBPCanInterrupt" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAttackWeight()
    { return { (void*)this, "bUseBPOverrideAttackWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipIntervalCheck()
    { return { (void*)this, "bUseBPSkipIntervalCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipRangeCheck()
    { return { (void*)this, "bUseBPSkipRangeCheck" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATE_H
