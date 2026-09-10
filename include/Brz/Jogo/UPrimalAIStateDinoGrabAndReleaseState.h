// ==========================================================================
//  UPrimalAIStateDinoGrabAndReleaseState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOGRABANDRELEASESTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOGRABANDRELEASESTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoGrabAndReleaseState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoGrabAndReleaseState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoGrabAndReleaseState.OnBegin(UPrimalAIState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoGrabAndReleaseState.OnEnd()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoGrabAndReleaseState.OnHitActor(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnHitActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnHitActor(FHitResult&)", a0);
    }

    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoGrabAndReleaseState.AnimationCustomName"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoGrabAndReleaseState.ChildStates")); }
    BrzCampoPonteiro FirstHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoGrabAndReleaseState.FirstHit")); }
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoGrabAndReleaseState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoGrabAndReleaseState.Pawn"); }
    BrzCampoPonteiro SecondarySwingLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoGrabAndReleaseState.SecondarySwingLocOffset")); }
    float& SecondarySwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoGrabAndReleaseState.SecondarySwingRadius"); }
    BrzCampoPonteiro SecondarySwingRadiusTargetClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoGrabAndReleaseState.SecondarySwingRadiusTargetClasses")); }
    BrzCampoPonteiro SpawnProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoGrabAndReleaseState.SpawnProjectileClass")); }
    float& SpawnProjectileIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoGrabAndReleaseState.SpawnProjectileInterval"); }
    FName& SpawnProjectileSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoGrabAndReleaseState.SpawnProjectileSocket"); }
    BitFieldValue<bool, unsigned __int32> bBPCanUseState()
    { return { (void*)this, "bBPCanUseState" }; }
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
    BitFieldValue<bool, unsigned __int32> bShouldResetInLosingTarget()
    { return { (void*)this, "bShouldResetInLosingTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAttack()
    { return { (void*)this, "bUseBPCanAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanInterrupt()
    { return { (void*)this, "bUseBPCanInterrupt" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetSocketLocation()
    { return { (void*)this, "bUseBPGetSocketLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHitActor()
    { return { (void*)this, "bUseBPOnHitActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAttackWeight()
    { return { (void*)this, "bUseBPOverrideAttackWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipIntervalCheck()
    { return { (void*)this, "bUseBPSkipIntervalCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipRangeCheck()
    { return { (void*)this, "bUseBPSkipRangeCheck" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOGRABANDRELEASESTATE_H
