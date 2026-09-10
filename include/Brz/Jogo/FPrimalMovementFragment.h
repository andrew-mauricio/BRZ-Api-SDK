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
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FPrimalMovementFragment.StaticStruct()");
    }

    BrzCampoPonteiro AcceptanceRadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AcceptanceRadius")); }
    BrzCampoPonteiro AttackTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.AttackTime")); }
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
    BrzCampoPonteiro CollisionChannelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CollisionChannel")); }
    BrzCampoPonteiro CollisionProfileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CollisionProfile")); }
    BrzCampoPonteiro CurrentDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CurrentDestination")); }
    BrzCampoPonteiro CurrentFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.CurrentFloor")); }
    BrzCampoPonteiro FrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.Friction")); }
    float& MaxAccelerationField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxAcceleration"); }
    float& MaxStepHeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxStepHeight"); }
    float& MaxSwimSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxSwimSpeed"); }
    float& MaxWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.MaxWalkSpeed"); }
    BrzCampoPonteiro PathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMovementFragment.Path")); }
    BitFieldValue<bool, unsigned __int32> Velocity()
    { return { (void*)this, "Velocity" }; }
    float& WalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "FPrimalMovementFragment.WalkableFloorZ"); }
    BitFieldValue<bool, unsigned __int32> bIsRunning()
    { return { (void*)this, "bIsRunning" }; }
    BitFieldValue<bool, unsigned __int32> bMaintainHorizontalGroundVelocity()
    { return { (void*)this, "bMaintainHorizontalGroundVelocity" }; }
};

#endif  // BRZ_SDK_JOGO_FPRIMALMOVEMENTFRAGMENT_H
