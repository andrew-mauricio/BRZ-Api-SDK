// ==========================================================================
//  FPrimalMovementFragment — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALMOVEMENTFRAGMENT_H
#define BRZ_SDK_JOGO_FPRIMALMOVEMENTFRAGMENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FPrimalMovementFragment
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalMovementFragment"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalMovementFragment.StaticStruct()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UScriptStruct* StaticStruct() const
    {
        return NativeCall<UScriptStruct*>(this, "FPrimalMovementFragment.StaticStruct()");
    }

    BrzCampoPonteiro AcceptanceRadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AcceptanceRadius")); }
    BrzCampoPonteiro AttackTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AttackTime")); }
    BrzCampoPonteiro AttackTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AttackTimer")); }
    BrzCampoPonteiro AvoidanceDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AvoidanceData")); }
    float& AvoidanceLockTimerField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.AvoidanceLockTimer"); }
    BrzCampoPonteiro AvoidanceLockVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AvoidanceLockVelocity")); }
    int& AvoidanceUIDField() const
    { return *GetNativePointerField<int*>(this, "FPrimalMovementFragment.AvoidanceUID"); }
    float& AvoidanceWeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.AvoidanceWeight"); }
    float& BrakingDecelerationWalkingField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.BrakingDecelerationWalking"); }
    float& BrakingFrictionField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.BrakingFriction"); }
    BrzCampoPonteiro CapsuleCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CapsuleCollision")); }
    BrzCampoPonteiro CollisionChannelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CollisionChannel")); }
    BrzCampoPonteiro CollisionProfileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CollisionProfile")); }
    BrzCampoPonteiro CurrentDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CurrentDestination")); }
    BrzCampoPonteiro CurrentFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CurrentFloor")); }
    BrzCampoPonteiro DesiredAnimationStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.DesiredAnimationState")); }
    BrzCampoPonteiro FindFloorRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.FindFloorRate")); }
    BrzCampoPonteiro FindFloorTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.FindFloorTimer")); }
    BrzCampoPonteiro FrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.Friction")); }
    float& MaxAccelerationField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxAcceleration"); }
    BrzCampoPonteiro MaxRunSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.MaxRunSpeed")); }
    BrzCampoPonteiro MaxSprintSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.MaxSprintSpeed")); }
    float& MaxStepHeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxStepHeight"); }
    float& MaxSwimSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxSwimSpeed"); }
    float& MaxWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxWalkSpeed"); }
    BrzCampoPonteiro MoveSegmentEndIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.MoveSegmentEndIndex")); }
    BrzCampoPonteiro MoveSegmentStartIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.MoveSegmentStartIndex")); }
    BrzCampoPonteiro NotifyHitResultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.NotifyHitResult")); }
    BrzCampoPonteiro PathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.Path")); }
    BrzCampoPonteiro VelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.Velocity")); }
    float& WalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.WalkableFloorZ"); }
    BrzCampoPonteiro bAnimationPreventsInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.bAnimationPreventsInput")); }
    BrzCampoPonteiro bIsRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.bIsRunning")); }
    BrzCampoPonteiro bIsSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.bIsSubmerged")); }
    BrzCampoPonteiro bMaintainHorizontalGroundVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.bMaintainHorizontalGroundVelocity")); }
    BrzCampoPonteiro bSkipSweepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.bSkipSweep")); }
    BrzCampoPonteiro bUsesRVOField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.bUsesRVO")); }
};

#endif  // BRZ_SDK_JOGO_FPRIMALMOVEMENTFRAGMENT_H
