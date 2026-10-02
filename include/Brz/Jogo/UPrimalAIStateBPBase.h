// ==========================================================================
//  UPrimalAIStateBPBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEBPBASE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEBPBASE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateBPBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateBPBase"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.BPOnAttackTick(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOnAttackTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateBPBase.BPOnAttackTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.BPOnClearAttackState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPOnClearAttackState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.BPOnClearAttackState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.BPShouldEndAttack()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPShouldEndAttack() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.BPShouldEndAttack()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.CanUseState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.CanUseState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.DealMeleeDamage(AActor*,FHitResult&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro DealMeleeDamage(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateBPBase.DealMeleeDamage(AActor*,FHitResult&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.DealMeleeDamageDirect(AActor*,UE::Math::TVector<double>,float,float,TSubcla
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro DealMeleeDamageDirect(void* a0, void* a1, float a2, float a3, void* a4, bool a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, float, float, void*, bool, bool>(this, "UPrimalAIStateBPBase.DealMeleeDamageDirect(AActor*,UE::Math::TVector<double>,float,float,TSubclassOf<UDamageType>,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.EndAnimationState(FName,ENetRole)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateBPBase.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.FinishState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro FinishState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.FinishState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.GetLastAttackTimeAndInterval(double&,float&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetLastAttackTimeAndInterval(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateBPBase.GetLastAttackTimeAndInterval(double&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.GetStateBeginTime()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetStateBeginTime() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.GetStateBeginTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.GetTimeSinceStateBegin()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTimeSinceStateBegin() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.GetTimeSinceStateBegin()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.IsChildState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsChildState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.IsChildState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.IsTimeSinceStateBegin(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsTimeSinceStateBegin(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalAIStateBPBase.IsTimeSinceStateBegin(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.OnAnimNotifyCustomEvent(FName,UAnimSequenceBase*,ENetRole)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnAnimNotifyCustomEvent(unsigned long long a0, void* a1, int a2) const
    {
        return NativeCall<void*, unsigned long long, void*, int>(this, "UPrimalAIStateBPBase.OnAnimNotifyCustomEvent(FName,UAnimSequenceBase*,ENetRole)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.OnBegin(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateBPBase.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.OnEnd()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.OnTick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateBPBase.OnTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.SetLastAttackTime()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetLastAttackTime() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateBPBase.SetLastAttackTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.SetLastAttackTimeToNow(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLastAttackTimeToNow(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateBPBase.SetLastAttackTimeToNow(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.SpawnAndFireProjectile(TSubclassOf<AShooterProjectile>,FName,float,bool,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnAndFireProjectile(void* a0, unsigned long long a1, float a2, bool a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, unsigned long long, float, bool, void*, void*>(this, "UPrimalAIStateBPBase.SpawnAndFireProjectile(TSubclassOf<AShooterProjectile>,FName,float,bool,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.StartAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateBPBase.StartAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateBPBase.TickAnimationState(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIStateBPBase.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateBPBase.AnimationCustomName"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.ChildStates")); }
    BrzCampoPonteiro IsInAnimationStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.IsInAnimationState")); }
    BrzCampoPonteiro IsInAttackStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.IsInAttackState")); }
    float& MaxAttackTickTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MaxAttackTickTime"); }
    float& MaxTickEventTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MaxTickEventTime"); }
    float& MinAttackTickTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MinAttackTickTime"); }
    float& MinTickEventTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MinTickEventTime"); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateBPBase.Pawn"); }
    BrzCampoPonteiro bBPCanUseStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bBPCanUseState")); }
    BrzCampoPonteiro bCanAttackWhileFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bCanAttackWhileFlying")); }
    BrzCampoPonteiro bClearAttackStateOnEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bClearAttackStateOnEnd")); }
    BrzCampoPonteiro bEndStateWhenAttackAnimCompletesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bEndStateWhenAttackAnimCompletes")); }
    BrzCampoPonteiro bIsMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bIsMeleeAttack")); }
    BrzCampoPonteiro bShouldResetInLosingTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bShouldResetInLosingTarget")); }
    BrzCampoPonteiro bUseBPCanAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPCanAttack")); }
    BrzCampoPonteiro bUseBPCanInterruptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPCanInterrupt")); }
    BrzCampoPonteiro bUseBPOnAnimNotifyCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPOnAnimNotifyCustomEvent")); }
    BrzCampoPonteiro bUseBPOnAttackEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPOnAttackEnd")); }
    BrzCampoPonteiro bUseBPOnAttackStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPOnAttackStart")); }
    BrzCampoPonteiro bUseBPOnAttackTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPOnAttackTick")); }
    BrzCampoPonteiro bUseBPOnClearAttackStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPOnClearAttackState")); }
    BrzCampoPonteiro bUseBPOverrideAttackWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPOverrideAttackWeight")); }
    BrzCampoPonteiro bUseBPShouldEndAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPShouldEndAttack")); }
    BrzCampoPonteiro bUseBPSkipIntervalCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPSkipIntervalCheck")); }
    BrzCampoPonteiro bUseBPSkipRangeCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseBPSkipRangeCheck")); }
    BrzCampoPonteiro bUseTickAnimationStateEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseTickAnimationStateEvent")); }
    BrzCampoPonteiro bUseTickEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateBPBase.bUseTickEvent")); }
    BitFieldValue<bool, unsigned __int32> bCanAttackWhileFlying()
    { return { (void*)this, "bCanAttackWhileFlying" }; }
    BitFieldValue<bool, unsigned __int32> bClearAttackStateOnEnd()
    { return { (void*)this, "bClearAttackStateOnEnd" }; }
    BitFieldValue<bool, unsigned __int32> bEndStateWhenAttackAnimCompletes()
    { return { (void*)this, "bEndStateWhenAttackAnimCompletes" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeleeAttack()
    { return { (void*)this, "bIsMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAnimNotifyCustomEvent()
    { return { (void*)this, "bUseBPOnAnimNotifyCustomEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAttackEnd()
    { return { (void*)this, "bUseBPOnAttackEnd" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAttackStart()
    { return { (void*)this, "bUseBPOnAttackStart" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAttackTick()
    { return { (void*)this, "bUseBPOnAttackTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnClearAttackState()
    { return { (void*)this, "bUseBPOnClearAttackState" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldEndAttack()
    { return { (void*)this, "bUseBPShouldEndAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickAnimationStateEvent()
    { return { (void*)this, "bUseTickAnimationStateEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickEvent()
    { return { (void*)this, "bUseTickEvent" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEBPBASE_H
