// ==========================================================================
//  UPrimalAIStateDinoRangedState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINORANGEDSTATE_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINORANGEDSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoRangedState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoRangedState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.AimedShoot(UE::Math::TVector<double>&,FName&,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AimedShoot(void* a0, const FName& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalAIStateDinoRangedState.AimedShoot(UE::Math::TVector<double>&,FName&,UE::Math::TVector<double>&)", a0, const_cast<FName*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AimedShoot(void* a0, FName* a1, void* a2) const
    { return AimedShoot(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.BPRangedAttack(UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=88]]
    BrzPonteiro BPRangedAttack(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateDinoRangedState.BPRangedAttack(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.BPRangedAttackOnBegin(UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPRangedAttackOnBegin(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateDinoRangedState.BPRangedAttackOnBegin(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.ClampEndLocationByAngle(UE::Math::TVector<double>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClampEndLocationByAngle(void* a0, void* a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, float, void*>(this, "UPrimalAIStateDinoRangedState.ClampEndLocationByAngle(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.ClampProjectileVectorInForwardDirection(UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClampProjectileVectorInForwardDirection(void* a0, const FName& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateDinoRangedState.ClampProjectileVectorInForwardDirection(UE::Math::TVector<double>&,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClampProjectileVectorInForwardDirection(void* a0, FName* a1) const
    { return ClampProjectileVectorInForwardDirection(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.EndAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoRangedState.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.FindDirectionToLeadTarget(UE::Math::TVector<double>&,float,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindDirectionToLeadTarget(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UPrimalAIStateDinoRangedState.FindDirectionToLeadTarget(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.GetZGravityOffset(UE::Math::TVector<double>&,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetZGravityOffset(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalAIStateDinoRangedState.GetZGravityOffset(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.IsChildState()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsChildState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoRangedState.IsChildState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.OffsetVectorRandomlyReturnsAltered(UE::Math::TVector<double>&,floa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OffsetVectorRandomlyReturnsAltered(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "UPrimalAIStateDinoRangedState.OffsetVectorRandomlyReturnsAltered(UE::Math::TVector<double>&,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.OnBegin(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBegin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAIStateDinoRangedState.OnBegin(UPrimalAIState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.OnEnd()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoRangedState.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.OnTick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateDinoRangedState.OnTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.PreventAttackForTime(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreventAttackForTime(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAIStateDinoRangedState.PreventAttackForTime(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.SimpleShoot(FName&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SimpleShoot(const FName& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalAIStateDinoRangedState.SimpleShoot(FName&,UE::Math::TVector<double>&)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SimpleShoot(FName* a0, void* a1) const
    { return SimpleShoot(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.StartAnimationState(FName,ENetRole)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro StartAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoRangedState.StartAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoRangedState.TickAnimationState(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIStateDinoRangedState.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    float& AccuracyWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.AccuracyWeight"); }
    FName& AimSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoRangedState.AimSocket"); }
    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoRangedState.AnimationCustomName"); }
    BrzCampoPonteiro CharacterTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoRangedState.CharacterTargetLocOffset")); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoRangedState.ChildStates")); }
    float& ClampAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.ClampAngle"); }
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoRangedState.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoRangedState.Pawn"); }
    BrzCampoPonteiro RangedSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoRangedState.RangedSockets")); }
    float& SpreadOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.SpreadOffset"); }
    BrzCampoPonteiro WorldGeometryTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoRangedState.WorldGeometryTargetLocOffset")); }
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
    BitFieldValue<bool, unsigned __int32> bGetTargetDirection()
    { return { (void*)this, "bGetTargetDirection" }; }
    BitFieldValue<bool, unsigned __int32> bLeadTarget()
    { return { (void*)this, "bLeadTarget" }; }
    BitFieldValue<bool, unsigned __int32> bScaleProjDamageByDinoDamage()
    { return { (void*)this, "bScaleProjDamageByDinoDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseAimSocket()
    { return { (void*)this, "bUseAimSocket" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRangedAttack()
    { return { (void*)this, "bUseBPRangedAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRangedAttackOnBegin()
    { return { (void*)this, "bUseBPRangedAttackOnBegin" }; }
    BitFieldValue<bool, unsigned __int32> bUseRangedSockets()
    { return { (void*)this, "bUseRangedSockets" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINORANGEDSTATE_H
