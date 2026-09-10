// ==========================================================================
//  UPrimalCharacterMovement — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALCHARACTERMOVEMENT_H
#define BRZ_SDK_JOGO_UPRIMALCHARACTERMOVEMENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct ACharacter;
struct APawn;
struct FActorComponentTickFunction;
struct FName;
struct UDeferredMovementContext;
struct UPrimitiveComponent;
struct USceneComponent;


struct UPrimalCharacterMovement
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalCharacterMovement"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.AddImpulse(UE::Math::TVector<double>,bool,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddImpulse(void* a0, bool a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, float, bool>(this, "UPrimalCharacterMovement.AddImpulse(UE::Math::TVector<double>,bool,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.AddImpulseCode(UE::Math::TVector<double>,bool,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddImpulseCode(void* a0, bool a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, float, bool>(this, "UPrimalCharacterMovement.AddImpulseCode(UE::Math::TVector<double>,bool,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.AddImpulse_WithLocationOfImpulse(UE::Math::TVector<double>,bool,float,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddImpulse_WithLocationOfImpulse(void* a0, bool a1, float a2, bool a3, void* a4) const
    {
        return NativeCall<void*, void*, bool, float, bool, void*>(this, "UPrimalCharacterMovement.AddImpulse_WithLocationOfImpulse(UE::Math::TVector<double>,bool,float,bool,UE::Math::TVector<double>)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.AdjustFloorHeight()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustFloorHeight() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.AdjustFloorHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.AdjustToWaterFloor(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustToWaterFloor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.AdjustToWaterFloor(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.AdjustToWaterSurface(UE::Math::TVector<double>&,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustToWaterSurface(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalCharacterMovement.AdjustToWaterSurface(UE::Math::TVector<double>&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ApplyAccumulatedForces(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyAccumulatedForces(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.ApplyAccumulatedForces(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ApplyRequestedMove(float,float,float,float,float,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyRequestedMove(float a0, float a1, float a2, float a3, float a4, void* a5, void* a6) const
    {
        return NativeCall<void*, float, float, float, float, float, void*, void*>(this, "UPrimalCharacterMovement.ApplyRequestedMove(float,float,float,float,float,UE::Math::TVector<double>&,float&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.BeginPlay()
    // endereco: cache_pdb_25090264
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.CalcVelocity(float,float,bool,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcVelocity(float a0, float a1, bool a2, float a3) const
    {
        return NativeCall<void*, float, float, bool, float>(this, "UPrimalCharacterMovement.CalcVelocity(float,float,bool,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.CanAttemptJump()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanAttemptJump() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.CanAttemptJump()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.CheckNetworkUpdate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckNetworkUpdate() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.CheckNetworkUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.CheckWaterStandRequest()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckWaterStandRequest() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.CheckWaterStandRequest()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ClearBase(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClearBase(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalCharacterMovement.ClearBase(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ClientUpdatePositionAfterServerUpdate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientUpdatePositionAfterServerUpdate() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.ClientUpdatePositionAfterServerUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ComputeSlideVector(UE::Math::TVector<double>&,float,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeSlideVector(void* a0, float a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, float, void*, void*>(this, "UPrimalCharacterMovement.ComputeSlideVector(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ConditionalPushEncroachedPawns(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConditionalPushEncroachedPawns(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.ConditionalPushEncroachedPawns(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ConstrainInputAcceleration(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConstrainInputAcceleration(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.ConstrainInputAcceleration(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ConsumeInputVector()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConsumeInputVector() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.ConsumeInputVector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.DetermineRequestedMoveAcceleration(UE::Math::TVector<double>&,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DetermineRequestedMoveAcceleration(void* a0, void* a1, float a2, float a3, float a4, float a5, float a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, float, float, float, float, float, void*>(this, "UPrimalCharacterMovement.DetermineRequestedMoveAcceleration(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,float,float,float,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.DisableMaxSpeedOverride()
    // endereco: cache_pdb_25090264
    BrzPonteiro DisableMaxSpeedOverride() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.DisableMaxSpeedOverride()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.FindFloor(UE::Math::TVector<double>&,FFindFloorResult&,bool,FHitResult*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindFloor(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "UPrimalCharacterMovement.FindFloor(UE::Math::TVector<double>&,FFindFloorResult&,bool,FHitResult*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.FindFloorWalking(UE::Math::TVector<double>&,FFindFloorResult&,bool,FHit
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindFloorWalking(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "UPrimalCharacterMovement.FindFloorWalking(UE::Math::TVector<double>&,FFindFloorResult&,bool,FHitResult*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.FindGoodSpot(FCollisionShape&,UE::Math::TVector<double>&,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindGoodSpot(void* a0, void* a1, void* a2, int a3, int a4, void* a5, bool a6, int a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, void*, int, int, void*, bool, int, bool>(this, "UPrimalCharacterMovement.FindGoodSpot(FCollisionShape&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,int,ECollisionChannel,UE::Math::TVector<double>&,bool,ECollisionChannel,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.FloorSweepTest(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FloorSweepTest(void* a0, void* a1, void* a2, int a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, void*, void*>(this, "UPrimalCharacterMovement.FloorSweepTest(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetClientNetSendDeltaTime(APlayerController*,FNetworkPredictionData_Cli
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetClientNetSendDeltaTime(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalCharacterMovement.GetClientNetSendDeltaTime(APlayerController*,FNetworkPredictionData_Client_Character*,TSharedPtr<FSavedMove_Character,1>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetControllerPhysicsRotation(UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetControllerPhysicsRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.GetControllerPhysicsRotation(UE::Math::TRotator<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetDeltaRotation(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDeltaRotation(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.GetDeltaRotation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetMaxBrakingDeceleration()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxBrakingDeceleration() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.GetMaxBrakingDeceleration()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetMaxSpeed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxSpeed() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.GetMaxSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetMaxSpeed_Internal()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxSpeed_Internal() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.GetMaxSpeed_Internal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetPredictionData_Client()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPredictionData_Client() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.GetPredictionData_Client()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.GetPreviousActorLocation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetPreviousActorLocation() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.GetPreviousActorLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    BrzPonteiro HandleImpact(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UPrimalCharacterMovement.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.HandlePendingLaunch()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePendingLaunch() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.HandlePendingLaunch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.HandlePostMovementExitWater(UPrimitiveComponent*,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandlePostMovementExitWater(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "UPrimalCharacterMovement.HandlePostMovementExitWater(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>,FFindFloorResult,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ImmersionDepth(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ImmersionDepth(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalCharacterMovement.ImmersionDepth(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsInWater()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInWater() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.IsInWater()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsMeshed(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsMeshed(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.IsMeshed(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsMovingBackwards()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsMovingBackwards() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.IsMovingBackwards()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsOnWalkableFloor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsOnWalkableFloor() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.IsOnWalkableFloor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsProne()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsProne() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.IsProne()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsRiddenAndWithAWaterFin()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsRiddenAndWithAWaterFin() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.IsRiddenAndWithAWaterFin()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.IsWalkable(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWalkable(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalCharacterMovement.IsWalkable(FHitResult&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.LimitRequestedMoveVelocity(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LimitRequestedMoveVelocity(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalCharacterMovement.LimitRequestedMoveVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.MoveAutonomous(float,float,unsignedchar,UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    BrzPonteiro MoveAutonomous(float a0, float a1, unsigned char a2, void* a3) const
    {
        return NativeCall<void*, float, float, unsigned char, void*>(this, "UPrimalCharacterMovement.MoveAutonomous(float,float,unsignedchar,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.MoveUpdatedComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MoveUpdatedComponentImpl(void* a0, void* a1, bool a2, void* a3, int a4) const
    {
        return NativeCall<void*, void*, void*, bool, void*, int>(this, "UPrimalCharacterMovement.MoveUpdatedComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.NewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,f
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NewFallVelocity(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "UPrimalCharacterMovement.NewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.NotifyBumpedPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyBumpedPawn(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.NotifyBumpedPawn(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.OnClientCorrectionReceived(FNetworkPredictionData_Client_Character&,flo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnClientCorrectionReceived(void* a0, float a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6, bool a7, unsigned char a8, void* a9) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, unsigned long long, bool, bool, unsigned char, void*>(this, "UPrimalCharacterMovement.OnClientCorrectionReceived(FNetworkPredictionData_Client_Character&,float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar,UE::Math::TVector<double>)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnMovementModeChanged(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "UPrimalCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.OverlapTest(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollis
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverlapTest(void* a0, void* a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, void*>(this, "UPrimalCharacterMovement.OverlapTest(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PerformMovement(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PerformMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.PerformMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PerformStaggeredMovement(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PerformStaggeredMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.PerformStaggeredMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PhysFalling(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysFalling(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "UPrimalCharacterMovement.PhysFalling(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PhysFlying(float,int,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysFlying(float a0, int a1, float a2, float a3) const
    {
        return NativeCall<void*, float, int, float, float>(this, "UPrimalCharacterMovement.PhysFlying(float,int,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PhysRotationCheckDesiredRotation(UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysRotationCheckDesiredRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.PhysRotationCheckDesiredRotation(UE::Math::TRotator<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PhysSwimming(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysSwimming(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "UPrimalCharacterMovement.PhysSwimming(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PhysWalking(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysWalking(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "UPrimalCharacterMovement.PhysWalking(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PostCalcVelocity(float,float,bool,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostCalcVelocity(float a0, float a1, bool a2, float a3) const
    {
        return NativeCall<void*, float, float, bool, float>(this, "UPrimalCharacterMovement.PostCalcVelocity(float,float,bool,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PostPhysicsRotation(UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostPhysicsRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.PostPhysicsRotation(UE::Math::TRotator<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.PreventSlidingWhileFalling()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro PreventSlidingWhileFalling() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.PreventSlidingWhileFalling()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.Primal_MoveSmoothAdjustDeltaMovement(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Primal_MoveSmoothAdjustDeltaMovement(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.Primal_MoveSmoothAdjustDeltaMovement(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.Prone(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Prone(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalCharacterMovement.Prone(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolvePenetrationImpl(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalCharacterMovement.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math::TQuat<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ServerCheckClientError(float,float,UE::Math::TVector<double>&,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerCheckClientError(float a0, float a1, void* a2, void* a3, void* a4, void* a5, unsigned long long a6, unsigned char a7) const
    {
        return NativeCall<void*, float, float, void*, void*, void*, void*, unsigned long long, unsigned char>(this, "UPrimalCharacterMovement.ServerCheckClientError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ServerExceedsAllowablePositionError(float,float,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerExceedsAllowablePositionError(float a0, float a1, void* a2, void* a3, void* a4, void* a5, unsigned long long a6, unsigned char a7) const
    {
        return NativeCall<void*, float, float, void*, void*, void*, void*, unsigned long long, unsigned char>(this, "UPrimalCharacterMovement.ServerExceedsAllowablePositionError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ServerMove_PerformMovement(FCharacterNetworkMoveData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerMove_PerformMovement(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.ServerMove_PerformMovement(FCharacterNetworkMoveData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ServerShouldUseAuthoritativePosition(float,float,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerShouldUseAuthoritativePosition(float a0, float a1, void* a2, void* a3, void* a4, void* a5, unsigned long long a6, unsigned char a7) const
    {
        return NativeCall<void*, float, float, void*, void*, void*, void*, unsigned long long, unsigned char>(this, "UPrimalCharacterMovement.ServerShouldUseAuthoritativePosition(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SetAcceleration(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetAcceleration(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.SetAcceleration(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SetBase(UPrimitiveComponent*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetBase(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned long long, bool>(this, "UPrimalCharacterMovement.SetBase(UPrimitiveComponent*,FName,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SetDefaultMovementMode()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDefaultMovementMode() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.SetDefaultMovementMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SetMovementMode(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "UPrimalCharacterMovement.SetMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SetPendingLaunchSettings(bool,bool,TEnumAsByte<EMovementMode>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro SetPendingLaunchSettings(bool a0, bool a1, unsigned char a2) const
    {
        return NativeCall<void*, bool, bool, unsigned char>(this, "UPrimalCharacterMovement.SetPendingLaunchSettings(bool,bool,TEnumAsByte<EMovementMode>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SetPostLandedPhysics(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPostLandedPhysics(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.SetPostLandedPhysics(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ShouldCorrectRotation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ShouldCorrectRotation() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.ShouldCorrectRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ShouldPreventWaterHopCorrection()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldPreventWaterHopCorrection() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.ShouldPreventWaterHopCorrection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ShouldTreadWater(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldTreadWater(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterMovement.ShouldTreadWater(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ShouldUseAutonomousCorrectionOffset()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldUseAutonomousCorrectionOffset() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterMovement.ShouldUseAutonomousCorrectionOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.ShouldUseWaveLocking(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldUseWaveLocking(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalCharacterMovement.ShouldUseWaveLocking(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SimulateMovement(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SimulateMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.SimulateMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SimulatedTick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SimulatedTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.SimulatedTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<do
    // endereco: cache_pdb_25090264
    BrzPonteiro SlideAlongSurface(void* a0, float a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, bool>(this, "UPrimalCharacterMovement.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.StartNewPhysics(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartNewPhysics(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "UPrimalCharacterMovement.StartNewPhysics(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.StartSwimming(UE::Math::TVector<double>,UE::Math::TVector<double>,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartSwimming(void* a0, void* a1, float a2, float a3, int a4) const
    {
        return NativeCall<void*, void*, void*, float, float, int>(this, "UPrimalCharacterMovement.StartSwimming(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.StepUp(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StepUp(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UPrimalCharacterMovement.StepUp(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,FStepDownResult*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.Swim(UE::Math::TVector<double>,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Swim(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalCharacterMovement.Swim(UE::Math::TVector<double>,FHitResult&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: cache_pdb_25090264
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UPrimalCharacterMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.TryDeferEndScopedMovementUpdate(USceneComponent*,FScopedMovementUpdate*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryDeferEndScopedMovementUpdate(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalCharacterMovement.TryDeferEndScopedMovementUpdate(USceneComponent*,FScopedMovementUpdate*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UnCrouch(bool,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro UnCrouch(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "UPrimalCharacterMovement.UnCrouch(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UnProne(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnProne(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "UPrimalCharacterMovement.UnProne(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UpdateCharacterStateAfterMovement(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCharacterStateAfterMovement(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalCharacterMovement.UpdateCharacterStateAfterMovement(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UpdateCharacterStateBeforeMovement(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCharacterStateBeforeMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterMovement.UpdateCharacterStateBeforeMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UpdateFromCompressedFlags(unsignedchar)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateFromCompressedFlags(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "UPrimalCharacterMovement.UpdateFromCompressedFlags(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UpdateNewPitchRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateNewPitchRotation(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float>(this, "UPrimalCharacterMovement.UpdateNewPitchRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterMovement.UpdateNewYawRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateNewYawRotation(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float>(this, "UPrimalCharacterMovement.UpdateNewYawRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", a0, a1, a2, a3, a4);
    }

    BrzCampoPonteiro AccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.Acceleration")); }
    float& AccelerationFollowsRotationMinDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AccelerationFollowsRotationMinDot"); }
    float& AccelerationFollowsRotationStopDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AccelerationFollowsRotationStopDistance"); }
    float& AirControlField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AirControl"); }
    float& AirControlBoostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AirControlBoostMultiplier"); }
    float& AirControlBoostVelocityThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AirControlBoostVelocityThreshold"); }
    float& AnalogInputModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AnalogInputModifier"); }
    float& AngleToStartRotationBrakingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AngleToStartRotationBraking"); }
    BrzCampoPonteiro AnimRootMotionVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.AnimRootMotionVelocity")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCharacterMovement.AssetUserData"); }
    float& AvoidanceConsiderationRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AvoidanceConsiderationRadius"); }
    BrzCampoPonteiro AvoidanceGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.AvoidanceGroup")); }
    int& AvoidanceUIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.AvoidanceUID"); }
    float& AvoidanceWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.AvoidanceWeight"); }
    float& BackwardsMaxSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BackwardsMaxSpeedMultiplier"); }
    float& BackwardsMovementDotThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BackwardsMovementDotThreshold"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +60, medido na build 25090264
    //  (offset absoluto medido: 0x11B8; confianca media)
    void*& BadFloorPenetrationCountField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 60); }
    float& BrakingDecelerationFallingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingDecelerationFalling"); }
    float& BrakingDecelerationFlyingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingDecelerationFlying"); }
    float& BrakingDecelerationSwimmingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingDecelerationSwimming"); }
    float& BrakingDecelerationWalkingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingDecelerationWalking"); }
    float& BrakingFrictionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingFriction"); }
    float& BrakingFrictionFactorField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingFrictionFactor"); }
    float& BrakingSubStepTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.BrakingSubStepTime"); }
    float& BuoyancyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.Buoyancy"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastForcedNetVelocity` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1080; confianca alta)
    void*& CharacterInterpolationAndStopsUseHighPrecisionVelocityUntilTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastForcedNetVelocity", 24); }
    TObjectPtr<ACharacter>& CharacterOwnerField() const
    { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "UPrimalCharacterMovement.CharacterOwner"); }
    float& ClientRunningPositionErrorToleranceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.ClientRunningPositionErrorTolerance"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCharacterMovement.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.CreationMethod"); }
    float& CrouchedHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.CrouchedHalfHeight"); }
    BrzCampoPonteiro CurrentFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.CurrentFloor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaveLockingMaxZOffset` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1128; confianca alta)
    void*& CurrentLedgeSlipPushVelocityField() const
    { return BrzCampoAncorado<void*>(this, "WaveLockingMaxZOffset", 20); }
    BrzCampoPonteiro CurrentRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.CurrentRootMotion")); }
    BrzCampoPonteiro CurrentRotationSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.CurrentRotationSpeed")); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.CustomData"); }
    unsigned char& CustomMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterMovement.CustomMovementMode"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCharacterMovement.CustomTag"); }
    unsigned char& DefaultLandMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterMovement.DefaultLandMovementMode"); }
    unsigned char& DefaultWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterMovement.DefaultWaterMovementMode"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +28, medido na build 25090264
    //  (offset absoluto medido: 0x1198; confianca alta)
    UDeferredMovementContext*& DeferredMovementField() const
    { return BrzCampoAncorado<UDeferredMovementContext*>(this, "SlopeJumpAirControl", 28); }
    TObjectPtr<USceneComponent>& DeferredUpdatedMoveComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UPrimalCharacterMovement.DeferredUpdatedMoveComponent"); }
    float& DinoClientPositionErrorToleranceMovingFlyingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.DinoClientPositionErrorToleranceMovingFlying"); }
    float& DinoClientPositionErrorToleranceStoppedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.DinoClientPositionErrorToleranceStopped"); }
    double& DisableMovementPhysicsUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.DisableMovementPhysicsUntilTime"); }
    float& FallingLateralFrictionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.FallingLateralFriction"); }
    float& FixedPathBrakingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.FixedPathBrakingDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaveLockingMaxZOffset` +28, medido na build 25090264
    //  (offset absoluto medido: 0x1130; confianca alta)
    void*& ForceBigPushingTimeField() const
    { return BrzCampoAncorado<void*>(this, "WaveLockingMaxZOffset", 28); }
    float& FormerBaseVelocityDecayHalfLifeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.FormerBaseVelocityDecayHalfLife"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1188; confianca alta)
    void*& FreebieJumpFallingStartTimeField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +16, medido na build 25090264
    //  (offset absoluto medido: 0x118C; confianca alta)
    void*& FreebieJumpFallingStartZField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 16); }
    BrzCampoPonteiro GravityDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.GravityDirection")); }
    float& GravityScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.GravityScale"); }
    BrzCampoPonteiro GravityToWorldTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.GravityToWorldTransform")); }
    float& GroundFrictionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.GroundFriction"); }
    unsigned char& GroundMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterMovement.GroundMovementMode"); }
    BrzCampoPonteiro GroupsToAvoidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.GroupsToAvoid")); }
    BrzCampoPonteiro GroupsToIgnoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.GroupsToIgnore")); }
    float& InitialPushForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.InitialPushForceFactor"); }
    float& JumpOffJumpZFactorField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.JumpOffJumpZFactor"); }
    float& JumpOutOfWaterPitchField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.JumpOutOfWaterPitch"); }
    float& JumpZVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.JumpZVelocity"); }
    float& LandedPreventRequestedMoveIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LandedPreventRequestedMoveInterval"); }
    float& LandedPreventRequestedMoveMinVelocityMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LandedPreventRequestedMoveMinVelocityMagnitude"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +32, medido na build 25090264
    //  (offset absoluto medido: 0x11E8; confianca media)
    void*& LastBigPushingMaxDistanceField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +36, medido na build 25090264
    //  (offset absoluto medido: 0x11A0; confianca media)
    void*& LastCheckedFloorAtRelativeLocField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +64, medido na build 25090264
    //  (offset absoluto medido: 0x11BC; confianca media)
    void*& LastClientRelevantFrameField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +68, medido na build 25090264
    //  (offset absoluto medido: 0x11C0; confianca media)
    void*& LastClosestPlayerDistanceField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 68); }
    BrzCampoPonteiro LastForcedNetVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.LastForcedNetVelocity")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaveLockingMaxZOffset` +24, medido na build 25090264
    //  (offset absoluto medido: 0x112C; confianca alta)
    void*& LastFrameDisabledFloorBasingField() const
    { return BrzCampoAncorado<void*>(this, "WaveLockingMaxZOffset", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LandedPreventRequestedMoveMinVelocityMagnitude` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1168; confianca alta)
    void*& LastLandedTimeField() const
    { return BrzCampoAncorado<void*>(this, "LandedPreventRequestedMoveMinVelocityMagnitude", 8); }
    float& LastLostDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LastLostDeltaTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x11D8; confianca media)
    void*& LastPushEncroachedPawnsTimeField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +240, medido na build 25090264
    //  (offset absoluto medido: 0x12B8; confianca baixa)
    void*& LastSimulationPositionField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 240); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaveLockingMaxZOffset` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1118; confianca alta)
    void*& LastSkippedMoveTimeField() const
    { return BrzCampoAncorado<void*>(this, "WaveLockingMaxZOffset", 4); }
    double& LastSwimTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.LastSwimTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x11D0; confianca media)
    void*& LastTeleportedFrameField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaveLockingMaxZOffset` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1120; confianca alta)
    void*& LastTimeTouchedOtherPawnField() const
    { return BrzCampoAncorado<void*>(this, "WaveLockingMaxZOffset", 12); }
    BrzCampoPonteiro LastUpdateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.LastUpdateLocation")); }
    BrzCampoPonteiro LastUpdateRequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.LastUpdateRequestedVelocity")); }
    BrzCampoPonteiro LastUpdateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.LastUpdateRotation")); }
    BrzCampoPonteiro LastUpdateVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.LastUpdateVelocity")); }
    float& LedgeCheckThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeCheckThreshold"); }
    float& LedgeSlipCapsuleRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeSlipCapsuleRadiusMultiplier"); }
    float& LedgeSlipPushVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeSlipPushVelocity"); }
    float& LedgeSlipVelocityBuildUpMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LedgeSlipVelocityBuildUpMultiplier"); }
    float& ListenServerNetworkSimulatedSmoothLocationTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.ListenServerNetworkSimulatedSmoothLocationTime"); }
    float& ListenServerNetworkSimulatedSmoothRotationTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.ListenServerNetworkSimulatedSmoothRotationTime"); }
    float& LostDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.LostDeltaTime"); }
    float& MassField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.Mass"); }
    float& MaxAccelerationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxAcceleration"); }
    float& MaxCustomMovementSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxCustomMovementSpeed"); }
    float& MaxDepenetrationWithGeometryField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxDepenetrationWithGeometry"); }
    float& MaxDepenetrationWithGeometryAsProxyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxDepenetrationWithGeometryAsProxy"); }
    float& MaxDepenetrationWithPawnField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxDepenetrationWithPawn"); }
    float& MaxDepenetrationWithPawnAsProxyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxDepenetrationWithPawnAsProxy"); }
    float& MaxFlySpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxFlySpeed"); }
    float& MaxImpulseVelocityMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxImpulseVelocityMagnitude"); }
    float& MaxImpulseVelocityZField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxImpulseVelocityZ"); }
    int& MaxJumpApexAttemptsPerSimulationField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.MaxJumpApexAttemptsPerSimulation"); }
    float& MaxOutOfWaterStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxOutOfWaterStepHeight"); }
    int& MaxSimulationIterationsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.MaxSimulationIterations"); }
    float& MaxSimulationTimeStepField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxSimulationTimeStep"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +36, medido na build 25090264
    //  (offset absoluto medido: 0x11EC; confianca media)
    void*& MaxSpeedOverrideField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 36); }
    float& MaxStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxStepHeight"); }
    float& MaxSwimSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxSwimSpeed"); }
    float& MaxTouchForceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxTouchForce"); }
    float& MaxWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxWalkSpeed"); }
    float& MaxWalkSpeedCrouchedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxWalkSpeedCrouched"); }
    float& MaxWalkSpeedProneField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MaxWalkSpeedProne"); }
    float& MinAnalogWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MinAnalogWalkSpeed"); }
    float& MinTimeBetweenTimeStampResetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MinTimeBetweenTimeStampResets"); }
    float& MinTouchForceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MinTouchForce"); }
    float& MinimumImpulseToApplyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.MinimumImpulseToApply"); }
    unsigned char& MovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterMovement.MovementMode"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +28, medido na build 25090264
    //  (offset absoluto medido: 0x11E4; confianca media)
    void*& MovementModulusField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 28); }
    BrzCampoPonteiro MovementStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.MovementState")); }
    BrzCampoPonteiro NavAgentPropsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.NavAgentProps")); }
    float& NavMeshProjectionHeightScaleDownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NavMeshProjectionHeightScaleDown"); }
    float& NavMeshProjectionHeightScaleUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NavMeshProjectionHeightScaleUp"); }
    float& NavMeshProjectionInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NavMeshProjectionInterpSpeed"); }
    float& NavMeshProjectionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NavMeshProjectionInterval"); }
    float& NavMeshProjectionTimerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NavMeshProjectionTimer"); }
    BrzCampoPonteiro NavMovementPropertiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.NavMovementProperties")); }
    float& NavWalkingFloorDistToleranceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NavWalkingFloorDistTolerance"); }
    float& NetProxyShrinkHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetProxyShrinkHalfHeight"); }
    float& NetProxyShrinkRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetProxyShrinkRadius"); }
    float& NetworkLargeClientCorrectionDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkLargeClientCorrectionDistance"); }
    float& NetworkMaxSmoothUpdateDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkMaxSmoothUpdateDistance"); }
    float& NetworkMinTimeBetweenClientAckGoodMovesField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkMinTimeBetweenClientAckGoodMoves"); }
    float& NetworkMinTimeBetweenClientAdjustmentsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkMinTimeBetweenClientAdjustments"); }
    float& NetworkMinTimeBetweenClientAdjustmentsLargeCorrectionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkMinTimeBetweenClientAdjustmentsLargeCorrection"); }
    float& NetworkNoSmoothUpdateDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkNoSmoothUpdateDistance"); }
    float& NetworkSimulatedSmoothLocationTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkSimulatedSmoothLocationTime"); }
    float& NetworkSimulatedSmoothRotationTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.NetworkSimulatedSmoothRotationTime"); }
    int& NetworkSmoothingModeField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.NetworkSmoothingMode"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.OnComponentDeactivated")); }
    float& OutofWaterZField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.OutofWaterZ"); }
    BrzCampoPonteiro PathFollowingCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PathFollowingComp")); }
    TObjectPtr<APawn>& PawnOwnerField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalCharacterMovement.PawnOwner"); }
    BrzCampoPonteiro PendingForceToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PendingForceToApply")); }
    BrzCampoPonteiro PendingImpulseToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PendingImpulseToApply")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +235, medido na build 25090264
    //  (offset absoluto medido: 0x12B3; confianca baixa)
    void*& PendingLaunchSetMovementModeField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 235); }
    BrzCampoPonteiro PendingLaunchVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PendingLaunchVelocity")); }
    float& PerchAdditionalHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PerchAdditionalHeight"); }
    float& PerchRadiusThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PerchRadiusThreshold"); }
    int& PlaneConstraintAxisSettingField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.PlaneConstraintAxisSetting"); }
    BrzCampoPonteiro PlaneConstraintNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PlaneConstraintNormal")); }
    BrzCampoPonteiro PlaneConstraintOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PlaneConstraintOrigin")); }
    float& PlayerClientPositionErrorToleranceOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PlayerClientPositionErrorToleranceOverride"); }
    BrzCampoPonteiro PostPhysicsTickFunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.PostPhysicsTickFunction")); }
    float& PreventWaterHoppingPlaneOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PreventWaterHoppingPlaneOffset"); }
    double& PreventWaterHopping_LastTimeAtSurfaceField() const
    { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.PreventWaterHopping_LastTimeAtSurface"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +112, medido na build 25090264
    //  (offset absoluto medido: 0x1238; confianca media)
    void*& PreviousActorLocationField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WaveLockingMaxZOffset` +36, medido na build 25090264
    //  (offset absoluto medido: 0x1138; confianca media)
    void*& PreviousCharacterMovementLocationField() const
    { return BrzCampoAncorado<void*>(this, "WaveLockingMaxZOffset", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +136, medido na build 25090264
    //  (offset absoluto medido: 0x1250; confianca baixa)
    void*& PreviousFloorTransformField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +80, medido na build 25090264
    //  (offset absoluto medido: 0x1218; confianca media)
    void*& PreviousSimulatedVelocityField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 80); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalCharacterMovement.PrimaryComponentTick"); }
    float& ProneHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.ProneHalfHeight"); }
    float& PushForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PushForceFactor"); }
    float& PushForcePointZOffsetFactorField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.PushForcePointZOffsetFactor"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x11E0; confianca media)
    void*& RandomStaggerField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 24); }
    float& RepulsionForceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.RepulsionForce"); }
    BrzCampoPonteiro RequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.RequestedVelocity")); }
    BrzCampoPonteiro RootMotionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.RootMotionParams")); }
    float& RotationAccelerationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.RotationAcceleration"); }
    float& RotationBrakingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.RotationBraking"); }
    BrzCampoPonteiro RotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.RotationRate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1184; confianca alta)
    void*& SavedAirControlForSlopeJumpField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 8); }
    BrzCampoPonteiro ServerCorrectionRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.ServerCorrectionRootMotion")); }
    double& ServerLastClientAdjustmentTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.ServerLastClientAdjustmentTime"); }
    double& ServerLastClientGoodMoveAckTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.ServerLastClientGoodMoveAckTime"); }
    double& ServerLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<double*>(this, "UPrimalCharacterMovement.ServerLastTransformUpdateTimeStamp"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +48, medido na build 25090264
    //  (offset absoluto medido: 0x11F8; confianca media)
    void*& ServerMoveExtendedDataField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 48); }
    float& SimulatedTickSkipDistanceSQField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SimulatedTickSkipDistanceSQ"); }
    float& SlopeJumpAirControlField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpAirControl"); }
    float& SlopeJumpMinNormalZField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpMinNormalZ"); }
    float& SlopeJumpTraceExtraDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpTraceExtraDistance"); }
    float& SlopeJumpZVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SlopeJumpZVelocity"); }
    float& StandingDownwardForceScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.StandingDownwardForceScale"); }
    float& StayBasedInAirHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.StayBasedInAirHeight"); }
    float& SwimmingAccelZMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.SwimmingAccelZMultiplier"); }
    float& TamedSwimmingAccelZMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.TamedSwimmingAccelZMultiplier"); }
    float& TimeLeftToForceTickEveryFrameField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.TimeLeftToForceTickEveryFrame"); }
    float& TouchForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.TouchForceFactor"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterMovement.UCSSerializationIndex"); }
    TObjectPtr<USceneComponent>& UpdatedComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UPrimalCharacterMovement.UpdatedComponent"); }
    TObjectPtr<UPrimitiveComponent>& UpdatedPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimalCharacterMovement.UpdatedPrimitive"); }
    BitFieldValue<bool, unsigned __int32> Velocity()
    { return { (void*)this, "Velocity" }; }
    float& WalkableFloorAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WalkableFloorAngle"); }
    float& WalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WalkableFloorZ"); }
    BrzCampoPonteiro WantsToDodgeVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.WantsToDodgeVelocity")); }
    float& WaterDinoSurfacePitchClampCapsuleDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WaterDinoSurfacePitchClampCapsuleDistanceMultiplier"); }
    float& WaterDinoSurfacePitchClampMaxPitchField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WaterDinoSurfacePitchClampMaxPitch"); }
    float& WaveLockingMaxZOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterMovement.WaveLockingMaxZOffset"); }
    BrzCampoPonteiro WorldToGravityTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterMovement.WorldToGravityTransform")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +104, medido na build 25090264
    //  (offset absoluto medido: 0x1230; confianca media)
    void*& bAllowFallingField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 104); }
    BitFieldValue<bool, unsigned __int32> bAllowPhysicsRotationDuringAnimRootMotion()
    { return { (void*)this, "bAllowPhysicsRotationDuringAnimRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckFloor()
    { return { (void*)this, "bAlwaysCheckFloor" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckForInvallidFloor()
    { return { (void*)this, "bAlwaysCheckForInvallidFloor" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bApplyGravityWhileJumping()
    { return { (void*)this, "bApplyGravityWhileJumping" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterPhysicsVolumeUpdates()
    { return { (void*)this, "bAutoRegisterPhysicsVolumeUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterUpdatedComponent()
    { return { (void*)this, "bAutoRegisterUpdatedComponent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUpdateTickRegistration()
    { return { (void*)this, "bAutoUpdateTickRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bBaseOnAttachmentRoot()
    { return { (void*)this, "bBaseOnAttachmentRoot" }; }
    BitFieldValue<bool, unsigned __int32> bBasedMovementIgnorePhysicsBase()
    { return { (void*)this, "bBasedMovementIgnorePhysicsBase" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCanWalkOffLedges()
    { return { (void*)this, "bCanWalkOffLedges" }; }
    BitFieldValue<bool, unsigned __int32> bCanWalkOffLedgesWhenCrouching()
    { return { (void*)this, "bCanWalkOffLedgesWhenCrouching" }; }
    BitFieldValue<bool, unsigned __int32> bCheatFlying()
    { return { (void*)this, "bCheatFlying" }; }
    BitFieldValue<bool, unsigned __int32> bComponentShouldUpdatePhysicsVolume()
    { return { (void*)this, "bComponentShouldUpdatePhysicsVolume" }; }
    BitFieldValue<bool, unsigned __int32> bConstrainToPlane()
    { return { (void*)this, "bConstrainToPlane" }; }
    BitFieldValue<bool, unsigned __int32> bCrouchMaintainsBaseLocation()
    { return { (void*)this, "bCrouchMaintainsBaseLocation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDeferUpdateMoveComponent()
    { return { (void*)this, "bDeferUpdateMoveComponent" }; }
    BitFieldValue<bool, unsigned __int32> bDontClearRequestedVelocity()
    { return { (void*)this, "bDontClearRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bDontFallBelowJumpZVelocityDuringJump()
    { return { (void*)this, "bDontFallBelowJumpZVelocityDuringJump" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePhysicsInteraction()
    { return { (void*)this, "bEnablePhysicsInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bEnableScopedMovementUpdates()
    { return { (void*)this, "bEnableScopedMovementUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bEnableServerDualMoveScopedMovementUpdates()
    { return { (void*)this, "bEnableServerDualMoveScopedMovementUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSwimmingOutsideOfWater()
    { return { (void*)this, "bEnableSwimmingOutsideOfWater" }; }
    BitFieldValue<bool, unsigned __int32> bFastAttachedMove()
    { return { (void*)this, "bFastAttachedMove" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +232, medido na build 25090264
    //  (offset absoluto medido: 0x12B0; confianca baixa)
    void*& bForceDoPhysWalkingOnThisTickField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 232); }
    BitFieldValue<bool, unsigned __int32> bForceMaxAccel()
    { return { (void*)this, "bForceMaxAccel" }; }
    BitFieldValue<bool, unsigned __int32> bForceModifyDesiredRotation()
    { return { (void*)this, "bForceModifyDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceNextFloorCheck()
    { return { (void*)this, "bForceNextFloorCheck" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +21, medido na build 25090264
    //  (offset absoluto medido: 0x1191; confianca alta)
    void*& bFreebieJumpGrantedField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1190; confianca alta)
    void*& bFreebieJumpReadyField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +22, medido na build 25090264
    //  (offset absoluto medido: 0x1192; confianca alta)
    void*& bFreebieJumpWasFallingField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 22); }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHasRequestedVelocity()
    { return { (void*)this, "bHasRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreBaseRotation()
    { return { (void*)this, "bIgnoreBaseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreClientMovementErrorChecksAndCorrection()
    { return { (void*)this, "bIgnoreClientMovementErrorChecksAndCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseAngularVelocity()
    { return { (void*)this, "bImpartBaseAngularVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityX()
    { return { (void*)this, "bImpartBaseVelocityX" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityY()
    { return { (void*)this, "bImpartBaseVelocityY" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityZ()
    { return { (void*)this, "bImpartBaseVelocityZ" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bJustTeleported()
    { return { (void*)this, "bJustTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bMaintainHorizontalGroundVelocity()
    { return { (void*)this, "bMaintainHorizontalGroundVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bMovementInProgress()
    { return { (void*)this, "bMovementInProgress" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkAlwaysReplicateTransformUpdateTimestamp()
    { return { (void*)this, "bNetworkAlwaysReplicateTransformUpdateTimestamp" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkGravityDirectionChanged()
    { return { (void*)this, "bNetworkGravityDirectionChanged" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkMovementModeChanged()
    { return { (void*)this, "bNetworkMovementModeChanged" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSkipProxyPredictionOnNetUpdate()
    { return { (void*)this, "bNetworkSkipProxyPredictionOnNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkUpdateReceived()
    { return { (void*)this, "bNetworkUpdateReceived" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyApex()
    { return { (void*)this, "bNotifyApex" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOrientRotationToMovement()
    { return { (void*)this, "bOrientRotationToMovement" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +40, medido na build 25090264
    //  (offset absoluto medido: 0x11F0; confianca media)
    void*& bOverrideMaxSpeedField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +233, medido na build 25090264
    //  (offset absoluto medido: 0x12B1; confianca baixa)
    void*& bPendingLaunchNoLowerVelocityField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 233); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +234, medido na build 25090264
    //  (offset absoluto medido: 0x12B2; confianca baixa)
    void*& bPendingLaunchOverrideMovementModeField() const
    { return BrzCampoAncorado<void*>(this, "DisableMovementPhysicsUntilTime", 234); }
    BitFieldValue<bool, unsigned __int32> bPerformingJumpOff()
    { return { (void*)this, "bPerformingJumpOff" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableMovementPhysicsUntilTime` +236, medido na build 25090264
    //  (offset absoluto medido: 0x12B4; confianca baixa)
    bool& bPreventExitingWaterForceExtraOverlapField() const
    { return BrzCampoAncorado<bool>(this, "DisableMovementPhysicsUntilTime", 236); }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bProjectNavMeshOnBothWorldChannels()
    { return { (void*)this, "bProjectNavMeshOnBothWorldChannels" }; }
    BitFieldValue<bool, unsigned __int32> bProjectNavMeshWalking()
    { return { (void*)this, "bProjectNavMeshWalking" }; }
    BitFieldValue<bool, unsigned __int32> bPushForceScaledToMass()
    { return { (void*)this, "bPushForceScaledToMass" }; }
    BitFieldValue<bool, unsigned __int32> bPushForceUsingZOffset()
    { return { (void*)this, "bPushForceUsingZOffset" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedMoveUseAcceleration()
    { return { (void*)this, "bRequestedMoveUseAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedMoveWithMaxSpeed()
    { return { (void*)this, "bRequestedMoveWithMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bRunPhysicsWithNoController()
    { return { (void*)this, "bRunPhysicsWithNoController" }; }
    BitFieldValue<bool, unsigned __int32> bSaveNonLocallyControlledRootMotion()
    { return { (void*)this, "bSaveNonLocallyControlledRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bScalePushForceToVelocity()
    { return { (void*)this, "bScalePushForceToVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bServerAcceptClientAuthoritativePosition()
    { return { (void*)this, "bServerAcceptClientAuthoritativePosition" }; }
    BitFieldValue<bool, unsigned __int32> bShrinkProxyCapsule()
    { return { (void*)this, "bShrinkProxyCapsule" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +5, medido na build 25090264
    //  (offset absoluto medido: 0x1181; confianca alta)
    void*& bSlopeJumpAirControlActiveField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 5); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1180; confianca alta)
    void*& bSlopeJumpGrantedField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SlopeJumpAirControl` +6, medido na build 25090264
    //  (offset absoluto medido: 0x1182; confianca alta)
    void*& bSlopeJumpPrevPressedJumpField() const
    { return BrzCampoAncorado<void*>(this, "SlopeJumpAirControl", 6); }
    BitFieldValue<bool, unsigned __int32> bSnapToPlaneAtStart()
    { return { (void*)this, "bSnapToPlaneAtStart" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bStayBasedInAir()
    { return { (void*)this, "bStayBasedInAir" }; }
    BitFieldValue<bool, unsigned __int32> bSweepWhileNavWalking()
    { return { (void*)this, "bSweepWhileNavWalking" }; }
    BitFieldValue<bool, unsigned __int32> bTickBeforeOwner()
    { return { (void*)this, "bTickBeforeOwner" }; }
    BitFieldValue<bool, unsigned __int32> bTouchForceScaledToMass()
    { return { (void*)this, "bTouchForceScaledToMass" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateNavAgentWithOwnersCollision()
    { return { (void*)this, "bUpdateNavAgentWithOwnersCollision" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateOnlyIfRendered()
    { return { (void*)this, "bUpdateOnlyIfRendered" }; }
    BitFieldValue<bool, unsigned __int32> bUseAccelerationForPaths()
    { return { (void*)this, "bUseAccelerationForPaths" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAcknowledgeServerCorrection()
    { return { (void*)this, "bUseBPAcknowledgeServerCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustServerMoveDeltaTime()
    { return { (void*)this, "bUseBPAdjustServerMoveDeltaTime" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerDesiredRotation()
    { return { (void*)this, "bUseControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedBrakingDistanceForPaths()
    { return { (void*)this, "bUseFixedBrakingDistanceForPaths" }; }
    BitFieldValue<bool, unsigned __int32> bUseFlatBaseForFloorChecks()
    { return { (void*)this, "bUseFlatBaseForFloorChecks" }; }
    BitFieldValue<bool, unsigned __int32> bUseRVOAvoidance()
    { return { (void*)this, "bUseRVOAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUseSeparateBrakingFriction()
    { return { (void*)this, "bUseSeparateBrakingFriction" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToCrouch()
    { return { (void*)this, "bWantsToCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToLeaveNavWalking()
    { return { (void*)this, "bWantsToLeaveNavWalking" }; }
    BitFieldValue<bool, unsigned __int32> bWasAvoidanceUpdated()
    { return { (void*)this, "bWasAvoidanceUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bWasSimulatingRootMotion()
    { return { (void*)this, "bWasSimulatingRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bAccelerationFollowsRotation()
    { return { (void*)this, "bAccelerationFollowsRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowImpactDeflection()
    { return { (void*)this, "bAllowImpactDeflection" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSimulatedTickDistanceSkip()
    { return { (void*)this, "bAllowSimulatedTickDistanceSkip" }; }
    BitFieldValue<bool, unsigned __int32> bAssumeSymmetricalRotation()
    { return { (void*)this, "bAssumeSymmetricalRotation" }; }
    BitFieldValue<bool, unsigned __int32> bCanSlide()
    { return { (void*)this, "bCanSlide" }; }
    BitFieldValue<bool, unsigned __int32> bCheckFallingAITempIgnoreDinoRiderMesh()
    { return { (void*)this, "bCheckFallingAITempIgnoreDinoRiderMesh" }; }
    BitFieldValue<bool, unsigned __int32> bClippedToWaterSurface()
    { return { (void*)this, "bClippedToWaterSurface" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSimulatedMovement()
    { return { (void*)this, "bDisableSimulatedMovement" }; }
    BitFieldValue<bool, unsigned __int32> bFallVelocityRecursionGuard()
    { return { (void*)this, "bFallVelocityRecursionGuard" }; }
    BitFieldValue<bool, unsigned __int32> bForceAccelerationFollowsRotationInSwimming()
    { return { (void*)this, "bForceAccelerationFollowsRotationInSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bForceDontAllowDesiredRotationWhenFalling()
    { return { (void*)this, "bForceDontAllowDesiredRotationWhenFalling" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater()
    { return { (void*)this, "bForcePreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreRotationAccelerationWhenSwimming()
    { return { (void*)this, "bIgnoreRotationAccelerationWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bLastHasRequestedVelocity()
    { return { (void*)this, "bLastHasRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyForwardsInputAcceleration()
    { return { (void*)this, "bOnlyForwardsInputAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyForwardsInputAccelerationWalking()
    { return { (void*)this, "bOnlyForwardsInputAccelerationWalking" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseRotationAccelerationWhenNoLinearAcceleration()
    { return { (void*)this, "bOnlyUseRotationAccelerationWhenNoLinearAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAddingImpulse()
    { return { (void*)this, "bPreventAddingImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEnteringWater()
    { return { (void*)this, "bPreventEnteringWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventExitingWater()
    { return { (void*)this, "bPreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPhysicsModeChange()
    { return { (void*)this, "bPreventPhysicsModeChange" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSlidingWhileFalling()
    { return { (void*)this, "bPreventSlidingWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWaterSurfaceHopping()
    { return { (void*)this, "bPreventWaterSurfaceHopping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventZeroPitchAndRollWhileFalling()
    { return { (void*)this, "bPreventZeroPitchAndRollWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bReduceBackwardsMovement()
    { return { (void*)this, "bReduceBackwardsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bRequireAccelerationForUseControllerDesiredRotation()
    { return { (void*)this, "bRequireAccelerationForUseControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bServerCorrectForMovementModeChanges()
    { return { (void*)this, "bServerCorrectForMovementModeChanges" }; }
    BitFieldValue<bool, unsigned __int32> bSlipOffLedges()
    { return { (void*)this, "bSlipOffLedges" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsyncWalking()
    { return { (void*)this, "bUseAsyncWalking" }; }
    BitFieldValue<bool, unsigned __int32> bUseCharacterInterpolationAndStops()
    { return { (void*)this, "bUseCharacterInterpolationAndStops" }; }
    BitFieldValue<bool, unsigned __int32> bUseRotationAcceleration()
    { return { (void*)this, "bUseRotationAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bUseWaveLocking()
    { return { (void*)this, "bUseWaveLocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseWeaponSpeedMultiplierByDirection()
    { return { (void*)this, "bUseWeaponSpeedMultiplierByDirection" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToDodge()
    { return { (void*)this, "bWantsToDodge" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToProne()
    { return { (void*)this, "bWantsToProne" }; }
    BitFieldValue<bool, unsigned __int32> bZeroPitchWhenNoAcceleration()
    { return { (void*)this, "bZeroPitchWhenNoAcceleration" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALCHARACTERMOVEMENT_H
