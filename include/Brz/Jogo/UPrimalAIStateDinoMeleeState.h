// ==========================================================================
//  UPrimalAIStateDinoMeleeState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOMELEESTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOMELEESTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoMeleeState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoMeleeState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.BPGetSocketLocation(FName&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetSocketLocation(const FName& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateDinoMeleeState.BPGetSocketLocation(FName&,UE::Math::TVector<double>&)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPGetSocketLocation(FName* a0, void* a1) const
    { return BPGetSocketLocation(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.BPOnHitActor(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnHitActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoMeleeState.BPOnHitActor(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.BPPreventStopActiveStateOnTick()
    // endereco: cache_pdb_25090264
    BrzPonteiro BPPreventStopActiveStateOnTick() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoMeleeState.BPPreventStopActiveStateOnTick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.DoMeleeAttackTrace(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoMeleeAttackTrace(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalAIStateDinoMeleeState.DoMeleeAttackTrace(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.EndAnimationState(FName,ENetRole)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoMeleeState.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.IsChildState()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsChildState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoMeleeState.IsChildState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.OnBegin(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoMeleeState.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.OnEnd()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=147]]
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoMeleeState.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.OnHitActor(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnHitActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoMeleeState.OnHitActor(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.OnTick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateDinoMeleeState.OnTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.StartAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoMeleeState.StartAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoMeleeState.TickAnimationState(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIStateDinoMeleeState.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoMeleeState.AnimationCustomName"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoMeleeState.ChildStates")); }
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoMeleeState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoMeleeState.Pawn"); }
    BrzCampoPonteiro SecondarySwingLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingLocOffset")); }
    float& SecondarySwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingRadius"); }
    BrzCampoPonteiro SecondarySwingRadiusTargetClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingRadiusTargetClasses")); }
    BrzCampoPonteiro SpawnProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileClass")); }
    float& SpawnProjectileIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileInterval"); }
    FName& SpawnProjectileSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileSocket"); }
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
    BitFieldValue<bool, unsigned __int32> bCanAttackWhileFlying()
    { return { (void*)this, "bCanAttackWhileFlying" }; }
    BitFieldValue<bool, unsigned __int32> bClearAttackStateOnEnd()
    { return { (void*)this, "bClearAttackStateOnEnd" }; }
    BitFieldValue<bool, unsigned __int32> bDidAnySweepAttacks()
    { return { (void*)this, "bDidAnySweepAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bDoSecondarySwingTrace()
    { return { (void*)this, "bDoSecondarySwingTrace" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyDealDamage()
    { return { (void*)this, "bDontActuallyDealDamage" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoCachedTrace()
    { return { (void*)this, "bForceNoCachedTrace" }; }
    BitFieldValue<bool, unsigned __int32> bSecondarySwingTraceForCorpsesOnly()
    { return { (void*)this, "bSecondarySwingTraceForCorpsesOnly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetSocketLocation()
    { return { (void*)this, "bUseBPGetSocketLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHitActor()
    { return { (void*)this, "bUseBPOnHitActor" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOMELEESTATE_H
