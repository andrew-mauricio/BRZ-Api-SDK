// ==========================================================================
//  UPrimalAIStateDinoFlyerGrab — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOFLYERGRAB_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOFLYERGRAB_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoFlyerGrab
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoFlyerGrab"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoFlyerGrab.OnBegin(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoFlyerGrab.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoFlyerGrab.OnHitActor(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnHitActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoFlyerGrab.OnHitActor(FHitResult&)", a0);
    }

    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoFlyerGrab.AnimationCustomName"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.ChildStates")); }
    BrzCampoPonteiro FirstHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.FirstHit")); }
    BrzCampoPonteiro IsInAnimationStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.IsInAnimationState")); }
    BrzCampoPonteiro IsInAttackStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.IsInAttackState")); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoFlyerGrab.Pawn"); }
    BrzCampoPonteiro SecondarySwingLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.SecondarySwingLocOffset")); }
    float& SecondarySwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoFlyerGrab.SecondarySwingRadius"); }
    BrzCampoPonteiro SecondarySwingRadiusTargetClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.SecondarySwingRadiusTargetClasses")); }
    BrzCampoPonteiro SpawnProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.SpawnProjectileClass")); }
    float& SpawnProjectileIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoFlyerGrab.SpawnProjectileInterval"); }
    FName& SpawnProjectileSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoFlyerGrab.SpawnProjectileSocket"); }
    BrzCampoPonteiro bBPCanUseStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bBPCanUseState")); }
    BrzCampoPonteiro bCanAttackWhileFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bCanAttackWhileFlying")); }
    BrzCampoPonteiro bClearAttackStateOnEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bClearAttackStateOnEnd")); }
    BrzCampoPonteiro bDidAnySweepAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bDidAnySweepAttacks")); }
    BrzCampoPonteiro bDoSecondarySwingTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bDoSecondarySwingTrace")); }
    BrzCampoPonteiro bDontActuallyDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bDontActuallyDealDamage")); }
    BrzCampoPonteiro bForceNoCachedTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bForceNoCachedTrace")); }
    BrzCampoPonteiro bSecondarySwingTraceForCorpsesOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bSecondarySwingTraceForCorpsesOnly")); }
    BrzCampoPonteiro bShouldResetInLosingTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bShouldResetInLosingTarget")); }
    BrzCampoPonteiro bUseBPAdjustProjectileSpawnTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPAdjustProjectileSpawnTransform")); }
    BrzCampoPonteiro bUseBPCanAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPCanAttack")); }
    BrzCampoPonteiro bUseBPCanInterruptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPCanInterrupt")); }
    BrzCampoPonteiro bUseBPGetSocketLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPGetSocketLocation")); }
    BrzCampoPonteiro bUseBPOnHitActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPOnHitActor")); }
    BrzCampoPonteiro bUseBPOverrideAttackWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPOverrideAttackWeight")); }
    BrzCampoPonteiro bUseBPSkipIntervalCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPSkipIntervalCheck")); }
    BrzCampoPonteiro bUseBPSkipRangeCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoFlyerGrab.bUseBPSkipRangeCheck")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOFLYERGRAB_H
