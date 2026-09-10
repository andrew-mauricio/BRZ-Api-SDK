// ==========================================================================
//  UCharacterMovementComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UCHARACTERMOVEMENTCOMPONENT_H
#define BRZ_SDK_JOGO_UCHARACTERMOVEMENTCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct ACharacter;
struct FHitResult;
struct FName;
struct UPrimitiveComponent;
struct USceneComponent;

#include "UPawnMovementComponent.h"

struct UCharacterMovementComponent : public UPawnMovementComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UCharacterMovementComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.AddForce(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void AddForce(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.AddForce(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.AddRadialForce(UE::Math::TVector<double>&,float,float,ERadialImpulse
    // endereco: casamento de bytes com a build de referencia
    void AddRadialForce(void* a0, float a1, float a2, int a3) const
    {
        NativeCall<void, void*, float, float, int>(this, "UCharacterMovementComponent.AddRadialForce(UE::Math::TVector<double>&,float,float,ERadialImpulseFalloff)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.AddRadialImpulse(UE::Math::TVector<double>&,float,float,ERadialImpul
    // endereco: casamento de bytes com a build de referencia
    void AddRadialImpulse(void* a0, float a1, float a2, int a3, bool a4) const
    {
        NativeCall<void, void*, float, float, int, bool>(this, "UCharacterMovementComponent.AddRadialImpulse(UE::Math::TVector<double>&,float,float,ERadialImpulseFalloff,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UCharacterMovementComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.AdjustFloorHeight()
    // endereco: casamento de bytes com a build de referencia
    void AdjustFloorHeight() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.AdjustFloorHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.AdjustProxyCapsuleSize()
    // endereco: casamento de bytes com a build de referencia
    void AdjustProxyCapsuleSize() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.AdjustProxyCapsuleSize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyAccumulatedForces(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyAccumulatedForces(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.ApplyAccumulatedForces(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyDownwardForce(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyDownwardForce(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.ApplyDownwardForce(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyImpactPhysicsForces(FHitResult&,UE::Math::TVector<double>&,UE::
    // endereco: casamento de bytes com a build de referencia
    void ApplyImpactPhysicsForces(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UCharacterMovementComponent.ApplyImpactPhysicsForces(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyNetworkMovementMode(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void ApplyNetworkMovementMode(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "UCharacterMovementComponent.ApplyNetworkMovementMode(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyRepulsionForce(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyRepulsionForce(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.ApplyRepulsionForce(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyRequestedMove(float,float,float,float,float,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    bool ApplyRequestedMove(float a0, float a1, float a2, float a3, float a4, void* a5, void* a6) const
    {
        return NativeCall<bool, float, float, float, float, float, void*, void*>(this, "UCharacterMovementComponent.ApplyRequestedMove(float,float,float,float,float,UE::Math::TVector<double>&,float&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyRootMotionToVelocity(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyRootMotionToVelocity(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.ApplyRootMotionToVelocity(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyWorldOffset(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UCharacterMovementComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.BeginPlay()
    // classe: a funcao mora em UActorComponent, e UCharacterMovementComponent herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "UActorComponent.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.BoostAirControl(float,float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    float BoostAirControl(float a0, float a1, void* a2) const
    {
        return NativeCall<float, float, float, void*>(this, "UCharacterMovementComponent.BoostAirControl(float,float,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.BuildAsyncInput()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=49]]
    void BuildAsyncInput() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.BuildAsyncInput()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CalcAnimRootMotionVelocity(UE::Math::TVector<double>&,float,UE::Math
    // endereco: cache_pdb_25090264
    void CalcAnimRootMotionVelocity(void* retorno, void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, void*, float, void*>(this, "UCharacterMovementComponent.CalcAnimRootMotionVelocity(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CalcAvoidanceVelocity(float)
    // endereco: casamento de bytes com a build de referencia
    void CalcAvoidanceVelocity(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.CalcAvoidanceVelocity(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CanAttemptJump()
    // endereco: casamento de bytes com a build de referencia
    bool CanAttemptJump() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.CanAttemptJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CanCrouchInCurrentState()
    // endereco: casamento de bytes com a build de referencia
    bool CanCrouchInCurrentState() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.CanCrouchInCurrentState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CanStartPathFollowing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=95]]
    bool CanStartPathFollowing() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.CanStartPathFollowing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CanStepUp(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool CanStepUp(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UCharacterMovementComponent.CanStepUp(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CanStopPathFollowing()
    // endereco: casamento de bytes com a build de referencia
    bool CanStopPathFollowing() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.CanStopPathFollowing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CanWalkOffLedges()
    // endereco: casamento de bytes com a build de referencia
    bool CanWalkOffLedges() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.CanWalkOffLedges()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CapsuleTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int
    // endereco: casamento de bytes com a build de referencia
    void CapsuleTouched(void* a0, void* a1, void* a2, int a3, bool a4, void* a5) const
    {
        NativeCall<void, void*, void*, void*, int, bool, void*>(this, "UCharacterMovementComponent.CapsuleTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.CheckWaterJump(UE::Math::TVector<double>,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool CheckWaterJump(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UCharacterMovementComponent.CheckWaterJump(UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ClientAckGoodMove_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void ClientAckGoodMove_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.ClientAckGoodMove_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ClientAdjustPosition(float,UE::Math::TVector<double>,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    void ClientAdjustPosition(float a0, void* a1, void* a2, void* a3, unsigned long long a4, bool a5, bool a6, unsigned char a7) const
    {
        NativeCall<void, float, void*, void*, void*, unsigned long long, bool, bool, unsigned char>(this, "UCharacterMovementComponent.ClientAdjustPosition(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ClientAdjustPosition_Implementation(float,UE::Math::TVector<double>,
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientAdjustPosition_Implementation(float a0, void* a1, void* a2, void* a3, unsigned long long a4, bool a5, bool a6, unsigned char a7, void* a8) const
    {
        NativeCall<void, float, void*, void*, void*, unsigned long long, bool, bool, unsigned char, void*>(this, "UCharacterMovementComponent.ClientAdjustPosition_Implementation(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar,TOptional<UE::Math::TRotator<double>>)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ClientUpdatePositionAfterServerUpdate()
    // endereco: casamento de bytes com a build de referencia
    bool ClientUpdatePositionAfterServerUpdate() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.ClientUpdatePositionAfterServerUpdate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ClientVeryShortAdjustPosition(float,UE::Math::TVector<double>,UPrimi
    // endereco: casamento de bytes com a build de referencia
    void ClientVeryShortAdjustPosition(float a0, void* a1, void* a2, unsigned long long a3, bool a4, bool a5, unsigned char a6) const
    {
        NativeCall<void, float, void*, void*, unsigned long long, bool, bool, unsigned char>(this, "UCharacterMovementComponent.ClientVeryShortAdjustPosition(float,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ClientVeryShortAdjustPosition_Implementation(float,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    void ClientVeryShortAdjustPosition_Implementation(float a0, void* a1, void* a2, unsigned long long a3, bool a4, bool a5, unsigned char a6) const
    {
        NativeCall<void, float, void*, void*, unsigned long long, bool, bool, unsigned char>(this, "UCharacterMovementComponent.ClientVeryShortAdjustPosition_Implementation(float,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ComputeAnalogInputModifier()
    // endereco: casamento de bytes com a build de referencia
    float ComputeAnalogInputModifier() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.ComputeAnalogInputModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ComputeGroundMovementDelta(UE::Math::TVector<double>&,FHitResult&,bo
    // endereco: casamento de bytes com a build de referencia
    void ComputeGroundMovementDelta(void* retorno, void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, void*, bool>(this, "UCharacterMovementComponent.ComputeGroundMovementDelta(UE::Math::TVector<double>&,FHitResult&,bool)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ComputeOrientToMovementRotation(UE::Math::TRotator<double>&,float,UE
    // endereco: casamento de bytes com a build de referencia
    void ComputeOrientToMovementRotation(void* retorno, void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, void*, float, void*>(this, "UCharacterMovementComponent.ComputeOrientToMovementRotation(UE::Math::TRotator<double>&,float,UE::Math::TRotator<double>&)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ComputeSlideVector(UE::Math::TVector<double>&,float,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    void ComputeSlideVector(void* retorno, void* a0, float a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, float, void*, void*>(this, "UCharacterMovementComponent.ComputeSlideVector(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ConstrainInputAcceleration(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void ConstrainInputAcceleration(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UCharacterMovementComponent.ConstrainInputAcceleration(UE::Math::TVector<double>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ControlledCharacterMove(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void ControlledCharacterMove(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "UCharacterMovementComponent.ControlledCharacterMove(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ConvertLocalRootMotionToWorld(UE::Math::TTransform<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void ConvertLocalRootMotionToWorld(void* retorno, void* a0, float a1) const
    {
        NativeCall<void, void*, void*, float>(this, "UCharacterMovementComponent.ConvertLocalRootMotionToWorld(UE::Math::TTransform<double>&,float)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ConvertRootMotionServerIDsToLocalIDs(FRootMotionSourceGroup&,FRootMo
    // endereco: casamento de bytes com a build de referencia
    void ConvertRootMotionServerIDsToLocalIDs(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "UCharacterMovementComponent.ConvertRootMotionServerIDsToLocalIDs(FRootMotionSourceGroup&,FRootMotionSourceGroup&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.Crouch(bool)
    // endereco: casamento de bytes com a build de referencia
    void Crouch(bool a0) const
    {
        NativeCall<void, bool>(this, "UCharacterMovementComponent.Crouch(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.Deactivate()
    // endereco: casamento de bytes com a build de referencia
    void Deactivate() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.Deactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.DetermineRequestedMoveAcceleration(UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    void DetermineRequestedMoveAcceleration(void* a0, void* a1, float a2, float a3, float a4, float a5, float a6, void* a7) const
    {
        NativeCall<void, void*, void*, float, float, float, float, float, void*>(this, "UCharacterMovementComponent.DetermineRequestedMoveAcceleration(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,float,float,float,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.DisableMovement()
    // endereco: cache_pdb_25090264
    void DisableMovement() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.DisableMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.DoJump(bool)
    // endereco: cache_pdb_25090264
    bool DoJump(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UCharacterMovementComponent.DoJump(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.FindBestNavMeshLocation(UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    void FindBestNavMeshLocation(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "UCharacterMovementComponent.FindBestNavMeshLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.FlushServerMoves()
    // endereco: casamento de bytes com a build de referencia
    void FlushServerMoves() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.FlushServerMoves()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ForcePositionUpdate(float)
    // endereco: casamento de bytes com a build de referencia
    bool ForcePositionUpdate(float a0) const
    {
        return NativeCall<bool, float>(this, "UCharacterMovementComponent.ForcePositionUpdate(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ForceReplicationUpdate()
    // endereco: casamento de bytes com a build de referencia
    void ForceReplicationUpdate() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.ForceReplicationUpdate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetAirControl(float,float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetAirControl(void* retorno, float a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, float, void*>(this, "UCharacterMovementComponent.GetAirControl(float,float,UE::Math::TVector<double>&)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetAvoidanceGroupMask()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetAvoidanceGroupMask() const
    {
        return NativeCall<int>(this, "UCharacterMovementComponent.GetAvoidanceGroupMask()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetBestDirectionOffActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void GetBestDirectionOffActor(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UCharacterMovementComponent.GetBestDirectionOffActor(AActor*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetControllerPhysicsRotation(UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetControllerPhysicsRotation(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UCharacterMovementComponent.GetControllerPhysicsRotation(UE::Math::TRotator<double>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetCurrentAcceleration()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetCurrentAcceleration(void* retorno) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.GetCurrentAcceleration()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetDeltaRotation(float)
    // endereco: casamento de bytes com a build de referencia
    void GetDeltaRotation(void* retorno, float a0) const
    {
        NativeCall<void, void*, float>(this, "UCharacterMovementComponent.GetDeltaRotation(float)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetFallingLateralAcceleration(float)
    // endereco: casamento de bytes com a build de referencia
    void GetFallingLateralAcceleration(void* retorno, float a0) const
    {
        NativeCall<void, void*, float>(this, "UCharacterMovementComponent.GetFallingLateralAcceleration(float)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetGravityZ()
    // endereco: casamento de bytes com a build de referencia
    float GetGravityZ() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetGravityZ()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetImpartedMovementBaseVelocity()
    // endereco: casamento de bytes com a build de referencia
    void GetImpartedMovementBaseVelocity(void* retorno) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.GetImpartedMovementBaseVelocity()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetLedgeMove(UE::Math::TVector<double>&,UE::Math::TVector<double>&,F
    // endereco: casamento de bytes com a build de referencia
    void GetLedgeMove(void* retorno, void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "UCharacterMovementComponent.GetLedgeMove(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FFindFloorResult&)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetMaxJumpHeight()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=83]]
    float GetMaxJumpHeight() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetMaxJumpHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetMaxJumpHeightWithJumpTime()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    float GetMaxJumpHeightWithJumpTime() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetMaxJumpHeightWithJumpTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetMaxSpeed()
    // endereco: casamento de bytes com a build de referencia
    float GetMaxSpeed() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetMaxSpeed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetMinAnalogSpeed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    float GetMinAnalogSpeed() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetMinAnalogSpeed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetMovementBase()
    // endereco: cache_pdb_25090264
    UPrimitiveComponent* GetMovementBase() const
    {
        return NativeCall<UPrimitiveComponent*>(this, "UCharacterMovementComponent.GetMovementBase()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetNetworkSafeRandomAngleDegrees()
    // endereco: casamento de bytes com a build de referencia
    float GetNetworkSafeRandomAngleDegrees() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetNetworkSafeRandomAngleDegrees()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetPathFollowingBrakingDistance(float)
    // endereco: casamento de bytes com a build de referencia
    float GetPathFollowingBrakingDistance(float a0) const
    {
        return NativeCall<float, float>(this, "UCharacterMovementComponent.GetPathFollowingBrakingDistance(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetPredictionData_Client()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPredictionData_Client() const
    {
        return NativeCall<void*>(this, "UCharacterMovementComponent.GetPredictionData_Client()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetPredictionData_Client_Character()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPredictionData_Client_Character() const
    {
        return NativeCall<void*>(this, "UCharacterMovementComponent.GetPredictionData_Client_Character()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetPredictionData_Server()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPredictionData_Server() const
    {
        return NativeCall<void*>(this, "UCharacterMovementComponent.GetPredictionData_Server()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetPredictionData_Server_Character()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPredictionData_Server_Character() const
    {
        return NativeCall<void*>(this, "UCharacterMovementComponent.GetPredictionData_Server_Character()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetRVOAvoidanceConsiderationRadius()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetRVOAvoidanceConsiderationRadius() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetRVOAvoidanceConsiderationRadius()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetRVOAvoidanceHeight()
    // endereco: casamento de bytes com a build de referencia
    float GetRVOAvoidanceHeight() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetRVOAvoidanceHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetRVOAvoidanceOrigin()
    // endereco: casamento de bytes com a build de referencia
    void GetRVOAvoidanceOrigin(void* retorno) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.GetRVOAvoidanceOrigin()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetRVOAvoidanceRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetRVOAvoidanceRadius() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetRVOAvoidanceRadius()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetRVOAvoidanceUID()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    int GetRVOAvoidanceUID() const
    {
        return NativeCall<int>(this, "UCharacterMovementComponent.GetRVOAvoidanceUID()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetRVOAvoidanceWeight()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    float GetRVOAvoidanceWeight() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetRVOAvoidanceWeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetValidPerchRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetValidPerchRadius() const
    {
        return NativeCall<float>(this, "UCharacterMovementComponent.GetValidPerchRadius()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.GetVelocityForRVOConsideration()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void GetVelocityForRVOConsideration(void* retorno) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.GetVelocityForRVOConsideration()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void HandleImpact(void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, void*>(this, "UCharacterMovementComponent.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HandlePendingLaunch()
    // endereco: casamento de bytes com a build de referencia
    bool HandlePendingLaunch() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.HandlePendingLaunch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HandleSlopeBoosting(UE::Math::TVector<double>&,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    void HandleSlopeBoosting(void* retorno, void* a0, void* a1, float a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, float, void*, void*>(this, "UCharacterMovementComponent.HandleSlopeBoosting(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HasPredictionData_Client()
    // endereco: casamento de bytes com a build de referencia
    bool HasPredictionData_Client() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.HasPredictionData_Client()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HasPredictionData_Server()
    // endereco: casamento de bytes com a build de referencia
    bool HasPredictionData_Server() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.HasPredictionData_Server()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HasRootMotionSources()
    // endereco: casamento de bytes com a build de referencia
    bool HasRootMotionSources() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.HasRootMotionSources()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.HasValidData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool HasValidData() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.HasValidData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ImmersionDepth(bool)
    // endereco: casamento de bytes com a build de referencia
    float ImmersionDepth(bool a0) const
    {
        return NativeCall<float, bool>(this, "UCharacterMovementComponent.ImmersionDepth(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsAsyncCallbackRegistered()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsAsyncCallbackRegistered() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.IsAsyncCallbackRegistered()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsCrouching()
    // endereco: cache_pdb_25090264
    bool IsCrouching() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.IsCrouching()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsFalling()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsFalling() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.IsFalling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsFlying()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsFlying() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.IsFlying()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsMovingOnGround()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsMovingOnGround() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.IsMovingOnGround()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsSwimming()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsSwimming() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.IsSwimming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsValidLandingSpot(UE::Math::TVector<double>&,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidLandingSpot(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UCharacterMovementComponent.IsValidLandingSpot(UE::Math::TVector<double>&,FHitResult&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsWalkable(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsWalkable(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UCharacterMovementComponent.IsWalkable(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.IsWithinEdgeTolerance(UE::Math::TVector<double>&,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    bool IsWithinEdgeTolerance(void* a0, void* a1, float a2) const
    {
        return NativeCall<bool, void*, void*, float>(this, "UCharacterMovementComponent.IsWithinEdgeTolerance(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.JumpOff(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void JumpOff(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.JumpOff(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.Launch(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void Launch(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.Launch(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.LimitAirControl(float,UE::Math::TVector<double>&,FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void LimitAirControl(void* retorno, float a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, void*, float, void*, void*, bool>(this, "UCharacterMovementComponent.LimitAirControl(float,UE::Math::TVector<double>&,FHitResult&,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.MaintainHorizontalGroundVelocity()
    // endereco: casamento de bytes com a build de referencia
    void MaintainHorizontalGroundVelocity() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.MaintainHorizontalGroundVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.MaybeSaveBaseLocation()
    // endereco: cache_pdb_25090264
    void MaybeSaveBaseLocation() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.MaybeSaveBaseLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.MaybeUpdateBasedMovement(float)
    // endereco: casamento de bytes com a build de referencia
    void MaybeUpdateBasedMovement(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.MaybeUpdateBasedMovement(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.MoveAutonomous(float,float,unsignedchar,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void MoveAutonomous(float a0, float a1, unsigned char a2, void* a3) const
    {
        NativeCall<void, float, float, unsigned char, void*>(this, "UCharacterMovementComponent.MoveAutonomous(float,float,unsignedchar,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.NewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    void NewFallVelocity(void* retorno, void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, void*, float>(this, "UCharacterMovementComponent.NewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.NotifyBumpedPawn(APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NotifyBumpedPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.NotifyBumpedPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.OnCharacterStuckInGeometry(FHitResult*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    void OnCharacterStuckInGeometry(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.OnCharacterStuckInGeometry(FHitResult*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void OnMovementModeChanged(int a0, unsigned char a1) const
    {
        NativeCall<void, int, unsigned char>(this, "UCharacterMovementComponent.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.OnRegister()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void OnRegister() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.OnRegister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.OnTeleported()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    void OnTeleported() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.OnTeleported()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PackNetworkMovementMode()
    // endereco: cache_pdb_25090264
    unsigned char PackNetworkMovementMode() const
    {
        return NativeCall<unsigned char>(this, "UCharacterMovementComponent.PackNetworkMovementMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PerformAirControlForPathFollowing(UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    void PerformAirControlForPathFollowing(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "UCharacterMovementComponent.PerformAirControlForPathFollowing(UE::Math::TVector<double>,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PerformMovement(float)
    // endereco: casamento de bytes com a build de referencia
    void PerformMovement(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.PerformMovement(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysCustom(float,int)
    // endereco: cache_pdb_25090264
    void PhysCustom(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysCustom(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysFalling(float,int)
    // endereco: casamento de bytes com a build de referencia
    void PhysFalling(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysFalling(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysNavWalking(float,int)
    // endereco: casamento de bytes com a build de referencia
    void PhysNavWalking(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysNavWalking(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysSwimming(float,int)
    // endereco: casamento de bytes com a build de referencia
    void PhysSwimming(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysSwimming(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysWalking(float,int)
    // endereco: casamento de bytes com a build de referencia
    void PhysWalking(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysWalking(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysicsRotation(float)
    // endereco: casamento de bytes com a build de referencia
    void PhysicsRotation(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.PhysicsRotation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PhysicsVolumeChanged(APhysicsVolume*)
    // endereco: casamento de bytes com a build de referencia
    void PhysicsVolumeChanged(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.PhysicsVolumeChanged(APhysicsVolume*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PostBuildAsyncInput()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void PostBuildAsyncInput() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.PostBuildAsyncInput()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ProcessAsyncOutput()
    // endereco: casamento de bytes com a build de referencia
    void ProcessAsyncOutput() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.ProcessAsyncOutput()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ProcessClientTimeStampForTimeDiscrepancy(float,FNetworkPredictionDat
    // endereco: casamento de bytes com a build de referencia
    void ProcessClientTimeStampForTimeDiscrepancy(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "UCharacterMovementComponent.ProcessClientTimeStampForTimeDiscrepancy(float,FNetworkPredictionData_Server_Character&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ProcessLanded(FHitResult&,float,int)
    // endereco: casamento de bytes com a build de referencia
    void ProcessLanded(void* a0, float a1, int a2) const
    {
        NativeCall<void, void*, float, int>(this, "UCharacterMovementComponent.ProcessLanded(FHitResult&,float,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.RegisterAsyncCallback()
    // endereco: casamento de bytes com a build de referencia
    void RegisterAsyncCallback() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.RegisterAsyncCallback()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ReplicateMoveToServer(float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void ReplicateMoveToServer(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "UCharacterMovementComponent.ReplicateMoveToServer(float,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.RequestDirectMove(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void RequestDirectMove(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UCharacterMovementComponent.RequestDirectMove(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.RequestPathMove(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void RequestPathMove(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.RequestPathMove(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ResetPredictionData_Client()
    // endereco: casamento de bytes com a build de referencia
    void ResetPredictionData_Client() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.ResetPredictionData_Client()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ResetPredictionData_Server()
    // endereco: casamento de bytes com a build de referencia
    void ResetPredictionData_Server() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.ResetPredictionData_Server()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    bool ResolvePenetrationImpl(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UCharacterMovementComponent.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math::TQuat<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.RoundAcceleration(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void RoundAcceleration(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UCharacterMovementComponent.RoundAcceleration(UE::Math::TVector<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SaveBaseLocation()
    // endereco: casamento de bytes com a build de referencia
    void SaveBaseLocation() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.SaveBaseLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ScaleInputAcceleration(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void ScaleInputAcceleration(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UCharacterMovementComponent.ScaleInputAcceleration(UE::Math::TVector<double>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SendClientAdjustment()
    // endereco: casamento de bytes com a build de referencia
    void SendClientAdjustment() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.SendClientAdjustment()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ServerCheckClientError(float,float,UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    bool ServerCheckClientError(float a0, float a1, void* a2, void* a3, void* a4, void* a5, unsigned long long a6, unsigned char a7) const
    {
        return NativeCall<bool, float, float, void*, void*, void*, void*, unsigned long long, unsigned char>(this, "UCharacterMovementComponent.ServerCheckClientError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ServerExceedsAllowablePositionError(float,float,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    bool ServerExceedsAllowablePositionError(float a0, float a1, void* a2, void* a3, void* a4, void* a5, unsigned long long a6, unsigned char a7) const
    {
        return NativeCall<bool, float, float, void*, void*, void*, void*, unsigned long long, unsigned char>(this, "UCharacterMovementComponent.ServerExceedsAllowablePositionError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ServerMoveHandleClientError(float,float,UE::Math::TVector<double>&,U
    // endereco: casamento de bytes com a build de referencia
    void ServerMoveHandleClientError(float a0, float a1, void* a2, void* a3, void* a4, unsigned long long a5, unsigned char a6, void* a7) const
    {
        NativeCall<void, float, float, void*, void*, void*, unsigned long long, unsigned char, void*>(this, "UCharacterMovementComponent.ServerMoveHandleClientError(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar,bool*)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ServerShouldUseAuthoritativePosition(float,float,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    bool ServerShouldUseAuthoritativePosition(float a0, float a1, void* a2, void* a3, void* a4, void* a5, unsigned long long a6, unsigned char a7) const
    {
        return NativeCall<bool, float, float, void*, void*, void*, void*, unsigned long long, unsigned char>(this, "UCharacterMovementComponent.ServerShouldUseAuthoritativePosition(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPrimitiveComponent*,FName,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetAvoidanceGroupMask(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetAvoidanceGroupMask(int a0) const
    {
        NativeCall<void, int>(this, "UCharacterMovementComponent.SetAvoidanceGroupMask(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetBase(UPrimitiveComponent*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetBase(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "UCharacterMovementComponent.SetBase(UPrimitiveComponent*,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetDefaultMovementMode()
    // endereco: casamento de bytes com a build de referencia
    void SetDefaultMovementMode() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.SetDefaultMovementMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetGroupsToAvoidMask(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetGroupsToAvoidMask(int a0) const
    {
        NativeCall<void, int>(this, "UCharacterMovementComponent.SetGroupsToAvoidMask(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetGroupsToIgnoreMask(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void SetGroupsToIgnoreMask(int a0) const
    {
        NativeCall<void, int>(this, "UCharacterMovementComponent.SetGroupsToIgnoreMask(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetMovementMode(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void SetMovementMode(int a0, unsigned char a1) const
    {
        NativeCall<void, int, unsigned char>(this, "UCharacterMovementComponent.SetMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetNavWalkingPhysics(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetNavWalkingPhysics(bool a0) const
    {
        NativeCall<void, bool>(this, "UCharacterMovementComponent.SetNavWalkingPhysics(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetPostLandedPhysics(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void SetPostLandedPhysics(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.SetPostLandedPhysics(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetRVOAvoidanceUID(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetRVOAvoidanceUID(int a0) const
    {
        NativeCall<void, int>(this, "UCharacterMovementComponent.SetRVOAvoidanceUID(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetRVOAvoidanceWeight(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetRVOAvoidanceWeight(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.SetRVOAvoidanceWeight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetUpdatedComponent(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetUpdatedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UCharacterMovementComponent.SetUpdatedComponent(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SetWalkableFloorZ(float)
    // endereco: casamento de bytes com a build de referencia
    void SetWalkableFloorZ(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.SetWalkableFloorZ(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldCancelAdaptiveReplication()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldCancelAdaptiveReplication() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.ShouldCancelAdaptiveReplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldCheckForValidLandingSpot(float,UE::Math::TVector<double>&,FHit
    // endereco: casamento de bytes com a build de referencia
    bool ShouldCheckForValidLandingSpot(float a0, void* a1, void* a2) const
    {
        return NativeCall<bool, float, void*, void*>(this, "UCharacterMovementComponent.ShouldCheckForValidLandingSpot(float,UE::Math::TVector<double>&,FHitResult&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldComputeAccelerationToReachRequestedVelocity(float)
    // endereco: cache_pdb_25090264
    bool ShouldComputeAccelerationToReachRequestedVelocity(float a0) const
    {
        return NativeCall<bool, float>(this, "UCharacterMovementComponent.ShouldComputeAccelerationToReachRequestedVelocity(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldComputePerchResult(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldComputePerchResult(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UCharacterMovementComponent.ShouldComputePerchResult(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldJumpOutOfWater(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldJumpOutOfWater(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UCharacterMovementComponent.ShouldJumpOutOfWater(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldLimitAirControl(float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldLimitAirControl(float a0, void* a1) const
    {
        return NativeCall<bool, float, void*>(this, "UCharacterMovementComponent.ShouldLimitAirControl(float,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.ShouldRemainVertical()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldRemainVertical() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.ShouldRemainVertical()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SimulateMovement(float)
    // endereco: casamento de bytes com a build de referencia
    void SimulateMovement(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.SimulateMovement(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SimulateRootMotion(float,UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    void SimulateRootMotion(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "UCharacterMovementComponent.SimulateRootMotion(float,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SimulatedTick(float)
    // endereco: casamento de bytes com a build de referencia
    void SimulatedTick(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.SimulatedTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    float SlideAlongSurface(void* a0, float a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<float, void*, float, void*, void*, bool>(this, "UCharacterMovementComponent.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SmoothClientPosition(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    void SmoothClientPosition(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.SmoothClientPosition(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SmoothClientPosition_Interpolate(float)
    // endereco: casamento de bytes com a build de referencia
    void SmoothClientPosition_Interpolate(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.SmoothClientPosition_Interpolate(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.SmoothClientPosition_UpdateVisuals()
    // endereco: casamento de bytes com a build de referencia
    void SmoothClientPosition_UpdateVisuals() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.SmoothClientPosition_UpdateVisuals()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.StartNewPhysics(float,int)
    // endereco: casamento de bytes com a build de referencia
    void StartNewPhysics(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UCharacterMovementComponent.StartNewPhysics(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.StartSwimming(UE::Math::TVector<double>,UE::Math::TVector<double>,fl
    // endereco: casamento de bytes com a build de referencia
    void StartSwimming(void* a0, void* a1, float a2, float a3, int a4) const
    {
        NativeCall<void, void*, void*, float, float, int>(this, "UCharacterMovementComponent.StartSwimming(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.StopActiveMovement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    void StopActiveMovement() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.StopActiveMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.Swim(UE::Math::TVector<double>,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    float Swim(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "UCharacterMovementComponent.Swim(UE::Math::TVector<double>,FHitResult&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.TickCharacterPose(float)
    // endereco: casamento de bytes com a build de referencia
    void TickCharacterPose(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.TickCharacterPose(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    void TickComponent(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "UCharacterMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.TryToLeaveNavWalking()
    // endereco: casamento de bytes com a build de referencia
    bool TryToLeaveNavWalking() const
    {
        return NativeCall<bool>(this, "UCharacterMovementComponent.TryToLeaveNavWalking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    void TwoWallAdjust(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UCharacterMovementComponent.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UnCrouch(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UnCrouch(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UCharacterMovementComponent.UnCrouch(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateBasedMovement(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateBasedMovement(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.UpdateBasedMovement(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateBasedRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<d
    // endereco: casamento de bytes com a build de referencia
    void UpdateBasedRotation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UCharacterMovementComponent.UpdateBasedRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateCharacterStateAfterMovement(float,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    void UpdateCharacterStateAfterMovement(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UCharacterMovementComponent.UpdateCharacterStateAfterMovement(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateCharacterStateBeforeMovement(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateCharacterStateBeforeMovement(float a0) const
    {
        NativeCall<void, float>(this, "UCharacterMovementComponent.UpdateCharacterStateBeforeMovement(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateFloorFromAdjustment()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    void UpdateFloorFromAdjustment() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.UpdateFloorFromAdjustment()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateFromCompressedFlags(unsignedchar)
    // endereco: cache_pdb_25090264
    void UpdateFromCompressedFlags(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "UCharacterMovementComponent.UpdateFromCompressedFlags(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateNewPitchRotation(UE::Math::TRotator<double>&,UE::Math::TRotato
    // endereco: casamento de bytes com a build de referencia
    void UpdateNewPitchRotation(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, void*, float>(this, "UCharacterMovementComponent.UpdateNewPitchRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateNewYawRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<
    // endereco: casamento de bytes com a build de referencia
    void UpdateNewYawRotation(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, void*, float>(this, "UCharacterMovementComponent.UpdateNewYawRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.UpdateProxyAcceleration()
    // endereco: casamento de bytes com a build de referencia
    void UpdateProxyAcceleration() const
    {
        NativeCall<void>(this, "UCharacterMovementComponent.UpdateProxyAcceleration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCharacterMovementComponent.VerifyClientTimeStamp(float,FNetworkPredictionData_Server_Character&
    // endereco: casamento de bytes com a build de referencia
    bool VerifyClientTimeStamp(float a0, void* a1) const
    {
        return NativeCall<bool, float, void*>(this, "UCharacterMovementComponent.VerifyClientTimeStamp(float,FNetworkPredictionData_Server_Character&)", a0, a1);
    }

    BrzCampoPonteiro AccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.Acceleration")); }
    float& AirControlField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AirControl"); }
    float& AirControlBoostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AirControlBoostMultiplier"); }
    float& AirControlBoostVelocityThresholdField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AirControlBoostVelocityThreshold"); }
    float& AnalogInputModifierField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AnalogInputModifier"); }
    BrzCampoPonteiro AnimRootMotionVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.AnimRootMotionVelocity")); }
    float& AvoidanceConsiderationRadiusField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AvoidanceConsiderationRadius"); }
    BrzCampoPonteiro AvoidanceGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.AvoidanceGroup")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FormerBaseVelocityDecayHalfLife` +40, medido na build 25090264
    //  (offset absoluto medido: 0x5B8; confianca media)
    float& AvoidanceLockTimerField() const
    { return BrzCampoAncorado<float>(this, "FormerBaseVelocityDecayHalfLife", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FormerBaseVelocityDecayHalfLife` +16, medido na build 25090264
    //  (offset absoluto medido: 0x5A0; confianca alta)
    void*& AvoidanceLockVelocityField() const
    { return BrzCampoAncorado<void*>(this, "FormerBaseVelocityDecayHalfLife", 16); }
    int& AvoidanceUIDField() const
    { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.AvoidanceUID"); }
    float& AvoidanceWeightField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AvoidanceWeight"); }
    float& BrakingDecelerationFallingField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationFalling"); }
    float& BrakingDecelerationFlyingField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationFlying"); }
    float& BrakingDecelerationSwimmingField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationSwimming"); }
    float& BrakingDecelerationWalkingField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationWalking"); }
    float& BrakingFrictionField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingFriction"); }
    float& BrakingFrictionFactorField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingFrictionFactor"); }
    float& BrakingSubStepTimeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingSubStepTime"); }
    float& BuoyancyField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.Buoyancy"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +56, medido na build 25090264
    //  (offset absoluto medido: 0x640; confianca media)
    FHitResult& CachedProjectedNavMeshHitResultField() const
    { return BrzCampoAncorado<FHitResult>(this, "PendingLaunchVelocity", 56); }
    TObjectPtr<ACharacter>& CharacterOwnerField() const
    { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "UCharacterMovementComponent.CharacterOwner"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostPhysicsTickFunction` +56, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca media)
    void*& ClientPredictionDataField() const
    { return BrzCampoAncorado<void*>(this, "PostPhysicsTickFunction", 56); }
    float& CrouchedHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.CrouchedHalfHeight"); }
    BrzCampoPonteiro CurrentFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.CurrentFloor")); }
    BrzCampoPonteiro CurrentRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.CurrentRootMotion")); }
    BrzCampoPonteiro CustomMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.CustomMovementMode")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +344, medido na build 25090264
    //  (offset absoluto medido: 0x760; confianca baixa)
    void*& DecayingFormerBaseVelocityField() const
    { return BrzCampoAncorado<void*>(this, "PendingLaunchVelocity", 344); }
    unsigned char& DefaultLandMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCharacterMovementComponent.DefaultLandMovementMode"); }
    unsigned char& DefaultWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCharacterMovementComponent.DefaultWaterMovementMode"); }
    TObjectPtr<USceneComponent>& DeferredUpdatedMoveComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UCharacterMovementComponent.DeferredUpdatedMoveComponent"); }
    float& FallingLateralFrictionField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.FallingLateralFriction"); }
    float& FormerBaseVelocityDecayHalfLifeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.FormerBaseVelocityDecayHalfLife"); }
    BrzCampoPonteiro GravityDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.GravityDirection")); }
    float& GravityScaleField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.GravityScale"); }
    BrzCampoPonteiro GravityToWorldTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.GravityToWorldTransform")); }
    float& GroundFrictionField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.GroundFriction"); }
    unsigned char& GroundMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCharacterMovementComponent.GroundMovementMode"); }
    BrzCampoPonteiro GroupsToAvoidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.GroupsToAvoid")); }
    BrzCampoPonteiro GroupsToIgnoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.GroupsToIgnore")); }
    float& InitialPushForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.InitialPushForceFactor"); }
    float& JumpOffJumpZFactorField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.JumpOffJumpZFactor"); }
    float& JumpOutOfWaterPitchField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.JumpOutOfWaterPitch"); }
    float& JumpZVelocityField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.JumpZVelocity"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +320, medido na build 25090264
    //  (offset absoluto medido: 0x748; confianca baixa)
    FName& LastServerMovementBaseBoneNameField() const
    { return BrzCampoAncorado<FName>(this, "PendingLaunchVelocity", 320); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogInputModifier` +8, medido na build 25090264
    //  (offset absoluto medido: 0x400; confianca alta)
    double& LastStuckWarningTimeField() const
    { return BrzCampoAncorado<double>(this, "AnalogInputModifier", 8); }
    BrzCampoPonteiro LastUpdateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.LastUpdateLocation")); }
    BrzCampoPonteiro LastUpdateRequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.LastUpdateRequestedVelocity")); }
    BrzCampoPonteiro LastUpdateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.LastUpdateRotation")); }
    BrzCampoPonteiro LastUpdateVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.LastUpdateVelocity")); }
    float& LedgeCheckThresholdField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LedgeCheckThreshold"); }
    float& ListenServerNetworkSimulatedSmoothLocationTimeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.ListenServerNetworkSimulatedSmoothLocationTime"); }
    float& ListenServerNetworkSimulatedSmoothRotationTimeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.ListenServerNetworkSimulatedSmoothRotationTime"); }
    float& MassField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.Mass"); }
    float& MaxAccelerationField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxAcceleration"); }
    float& MaxCustomMovementSpeedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxCustomMovementSpeed"); }
    float& MaxDepenetrationWithGeometryField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxDepenetrationWithGeometry"); }
    float& MaxDepenetrationWithGeometryAsProxyField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxDepenetrationWithGeometryAsProxy"); }
    float& MaxDepenetrationWithPawnField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxDepenetrationWithPawn"); }
    float& MaxDepenetrationWithPawnAsProxyField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxDepenetrationWithPawnAsProxy"); }
    float& MaxFlySpeedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxFlySpeed"); }
    float& MaxImpulseVelocityMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxImpulseVelocityMagnitude"); }
    float& MaxImpulseVelocityZField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxImpulseVelocityZ"); }
    int& MaxJumpApexAttemptsPerSimulationField() const
    { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.MaxJumpApexAttemptsPerSimulation"); }
    float& MaxOutOfWaterStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxOutOfWaterStepHeight"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +336, medido na build 25090264
    //  (offset absoluto medido: 0x758; confianca baixa)
    float& MaxServerClientErrorWhileFallingField() const
    { return BrzCampoAncorado<float>(this, "PendingLaunchVelocity", 336); }
    int& MaxSimulationIterationsField() const
    { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.MaxSimulationIterations"); }
    float& MaxSimulationTimeStepField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxSimulationTimeStep"); }
    float& MaxStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxStepHeight"); }
    float& MaxSwimSpeedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxSwimSpeed"); }
    float& MaxTouchForceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxTouchForce"); }
    float& MaxWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxWalkSpeed"); }
    float& MaxWalkSpeedCrouchedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxWalkSpeedCrouched"); }
    float& MinAnalogWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinAnalogWalkSpeed"); }
    float& MinTimeBetweenTimeStampResetsField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinTimeBetweenTimeStampResets"); }
    float& MinTouchForceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinTouchForce"); }
    float& MinimumImpulseToApplyField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinimumImpulseToApply"); }
    unsigned char& MovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCharacterMovementComponent.MovementMode"); }
    float& NavMeshProjectionHeightScaleDownField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NavMeshProjectionHeightScaleDown"); }
    float& NavMeshProjectionHeightScaleUpField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NavMeshProjectionHeightScaleUp"); }
    float& NavMeshProjectionInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NavMeshProjectionInterpSpeed"); }
    float& NavMeshProjectionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NavMeshProjectionInterval"); }
    float& NavMeshProjectionTimerField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NavMeshProjectionTimer"); }
    float& NavWalkingFloorDistToleranceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NavWalkingFloorDistTolerance"); }
    float& NetProxyShrinkHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetProxyShrinkHalfHeight"); }
    float& NetProxyShrinkRadiusField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetProxyShrinkRadius"); }
    float& NetworkLargeClientCorrectionDistanceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkLargeClientCorrectionDistance"); }
    float& NetworkMaxSmoothUpdateDistanceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkMaxSmoothUpdateDistance"); }
    float& NetworkMinTimeBetweenClientAckGoodMovesField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkMinTimeBetweenClientAckGoodMoves"); }
    float& NetworkMinTimeBetweenClientAdjustmentsField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkMinTimeBetweenClientAdjustments"); }
    float& NetworkMinTimeBetweenClientAdjustmentsLargeCorrectionField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkMinTimeBetweenClientAdjustmentsLargeCorrection"); }
    float& NetworkNoSmoothUpdateDistanceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkNoSmoothUpdateDistance"); }
    float& NetworkSimulatedSmoothLocationTimeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkSimulatedSmoothLocationTime"); }
    float& NetworkSimulatedSmoothRotationTimeField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.NetworkSimulatedSmoothRotationTime"); }
    int& NetworkSmoothingModeField() const
    { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.NetworkSmoothingMode"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogInputModifier` +20, medido na build 25090264
    //  (offset absoluto medido: 0x40C; confianca alta)
    int& NumJumpApexAttemptsField() const
    { return BrzCampoAncorado<int>(this, "AnalogInputModifier", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GroundFriction` +44, medido na build 25090264
    //  (offset absoluto medido: 0x280; confianca media)
    void*& OldBaseLocationField() const
    { return BrzCampoAncorado<void*>(this, "GroundFriction", 44); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GroundFriction` +12, medido na build 25090264
    //  (offset absoluto medido: 0x260; confianca alta)
    void*& OldBaseQuatField() const
    { return BrzCampoAncorado<void*>(this, "GroundFriction", 12); }
    float& OutofWaterZField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.OutofWaterZ"); }
    BrzCampoPonteiro PendingForceToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.PendingForceToApply")); }
    BrzCampoPonteiro PendingImpulseToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.PendingImpulseToApply")); }
    BrzCampoPonteiro PendingLaunchVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.PendingLaunchVelocity")); }
    float& PerchAdditionalHeightField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PerchAdditionalHeight"); }
    float& PerchRadiusThresholdField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PerchRadiusThreshold"); }
    BrzCampoPonteiro PostPhysicsTickFunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.PostPhysicsTickFunction")); }
    float& PushForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PushForceFactor"); }
    float& PushForcePointZOffsetFactorField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PushForcePointZOffsetFactor"); }
    float& RepulsionForceField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.RepulsionForce"); }
    BrzCampoPonteiro RequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.RequestedVelocity")); }
    BrzCampoPonteiro RootMotionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.RootMotionParams")); }
    BrzCampoPonteiro RotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.RotationRate")); }
    BrzCampoPonteiro ServerCorrectionRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.ServerCorrectionRootMotion")); }
    double& ServerLastClientAdjustmentTimeField() const
    { return *GetNativePointerField<double*>(this, "UCharacterMovementComponent.ServerLastClientAdjustmentTime"); }
    double& ServerLastClientGoodMoveAckTimeField() const
    { return *GetNativePointerField<double*>(this, "UCharacterMovementComponent.ServerLastClientGoodMoveAckTime"); }
    double& ServerLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<double*>(this, "UCharacterMovementComponent.ServerLastTransformUpdateTimeStamp"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostPhysicsTickFunction` +64, medido na build 25090264
    //  (offset absoluto medido: 0x810; confianca media)
    void*& ServerPredictionDataField() const
    { return BrzCampoAncorado<void*>(this, "PostPhysicsTickFunction", 64); }
    float& StandingDownwardForceScaleField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.StandingDownwardForceScale"); }
    BrzCampoPonteiro StayBasedInAirHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.StayBasedInAirHeight")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogInputModifier` +16, medido na build 25090264
    //  (offset absoluto medido: 0x408; confianca alta)
    void*& StuckWarningCountSinceNotifyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogInputModifier", 16); }
    float& TouchForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.TouchForceFactor"); }
    float& WalkableFloorAngleField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.WalkableFloorAngle"); }
    float& WalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.WalkableFloorZ"); }
    BrzCampoPonteiro WorldToGravityTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCharacterMovementComponent.WorldToGravityTransform")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +332, medido na build 25090264
    //  (offset absoluto medido: 0x754; confianca baixa)
    bool& bCanTrustClientOnLandingField() const
    { return BrzCampoAncorado<bool>(this, "PendingLaunchVelocity", 332); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +328, medido na build 25090264
    //  (offset absoluto medido: 0x750; confianca baixa)
    bool& bLastClientIsFallingField() const
    { return BrzCampoAncorado<bool>(this, "PendingLaunchVelocity", 328); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +329, medido na build 25090264
    //  (offset absoluto medido: 0x751; confianca baixa)
    bool& bLastServerIsFallingField() const
    { return BrzCampoAncorado<bool>(this, "PendingLaunchVelocity", 329); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +330, medido na build 25090264
    //  (offset absoluto medido: 0x752; confianca baixa)
    bool& bLastServerIsWalkingField() const
    { return BrzCampoAncorado<bool>(this, "PendingLaunchVelocity", 330); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `JumpOffJumpZFactor` +28, medido na build 25090264
    //  (offset absoluto medido: 0x1E0; confianca alta)
    bool& bMovementModeDirtyField() const
    { return BrzCampoAncorado<bool>(this, "JumpOffJumpZFactor", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +333, medido na build 25090264
    //  (offset absoluto medido: 0x755; confianca baixa)
    bool& bSimulatedClientWalkingHasFoundValidBaseField() const
    { return BrzCampoAncorado<bool>(this, "PendingLaunchVelocity", 333); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingLaunchVelocity` +331, medido na build 25090264
    //  (offset absoluto medido: 0x753; confianca baixa)
    bool& bTeleportedSinceLastUpdateField() const
    { return BrzCampoAncorado<bool>(this, "PendingLaunchVelocity", 331); }
    BitFieldValue<bool, unsigned __int32> bUseSeparateBrakingFriction()
    { return { (void*)this, "bUseSeparateBrakingFriction" }; }
    BitFieldValue<bool, unsigned __int32> bApplyGravityWhileJumping()
    { return { (void*)this, "bApplyGravityWhileJumping" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerDesiredRotation()
    { return { (void*)this, "bUseControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bOrientRotationToMovement()
    { return { (void*)this, "bOrientRotationToMovement" }; }
    BitFieldValue<bool, unsigned __int32> bSweepWhileNavWalking()
    { return { (void*)this, "bSweepWhileNavWalking" }; }
    BitFieldValue<bool, unsigned __int32> bNeedsSweepWhileWalkingUpdate()
    { return { (void*)this, "bNeedsSweepWhileWalkingUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bMovementInProgress()
    { return { (void*)this, "bMovementInProgress" }; }
    BitFieldValue<bool, unsigned __int32> bEnableScopedMovementUpdates()
    { return { (void*)this, "bEnableScopedMovementUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bEnableServerDualMoveScopedMovementUpdates()
    { return { (void*)this, "bEnableServerDualMoveScopedMovementUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bForceMaxAccel()
    { return { (void*)this, "bForceMaxAccel" }; }
    BitFieldValue<bool, unsigned __int32> bRunPhysicsWithNoController()
    { return { (void*)this, "bRunPhysicsWithNoController" }; }
    BitFieldValue<bool, unsigned __int32> bForceNextFloorCheck()
    { return { (void*)this, "bForceNextFloorCheck" }; }
    BitFieldValue<bool, unsigned __int32> bShrinkProxyCapsule()
    { return { (void*)this, "bShrinkProxyCapsule" }; }
    BitFieldValue<bool, unsigned __int32> bCanWalkOffLedges()
    { return { (void*)this, "bCanWalkOffLedges" }; }
    BitFieldValue<bool, unsigned __int32> bCanWalkOffLedgesWhenCrouching()
    { return { (void*)this, "bCanWalkOffLedgesWhenCrouching" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSmoothingComplete()
    { return { (void*)this, "bNetworkSmoothingComplete" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkLargeClientCorrection()
    { return { (void*)this, "bNetworkLargeClientCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSkipProxyPredictionOnNetUpdate()
    { return { (void*)this, "bNetworkSkipProxyPredictionOnNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkAlwaysReplicateTransformUpdateTimestamp()
    { return { (void*)this, "bNetworkAlwaysReplicateTransformUpdateTimestamp" }; }
    BitFieldValue<bool, unsigned __int32> bDeferUpdateMoveComponent()
    { return { (void*)this, "bDeferUpdateMoveComponent" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePhysicsInteraction()
    { return { (void*)this, "bEnablePhysicsInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bTouchForceScaledToMass()
    { return { (void*)this, "bTouchForceScaledToMass" }; }
    BitFieldValue<bool, unsigned __int32> bPushForceScaledToMass()
    { return { (void*)this, "bPushForceScaledToMass" }; }
    BitFieldValue<bool, unsigned __int32> bPushForceUsingZOffset()
    { return { (void*)this, "bPushForceUsingZOffset" }; }
    BitFieldValue<bool, unsigned __int32> bScalePushForceToVelocity()
    { return { (void*)this, "bScalePushForceToVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bMaintainHorizontalGroundVelocity()
    { return { (void*)this, "bMaintainHorizontalGroundVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityX()
    { return { (void*)this, "bImpartBaseVelocityX" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityY()
    { return { (void*)this, "bImpartBaseVelocityY" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityZ()
    { return { (void*)this, "bImpartBaseVelocityZ" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseAngularVelocity()
    { return { (void*)this, "bImpartBaseAngularVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bJustTeleported()
    { return { (void*)this, "bJustTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkUpdateReceived()
    { return { (void*)this, "bNetworkUpdateReceived" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkMovementModeChanged()
    { return { (void*)this, "bNetworkMovementModeChanged" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreClientMovementErrorChecksAndCorrection()
    { return { (void*)this, "bIgnoreClientMovementErrorChecksAndCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bServerAcceptClientAuthoritativePosition()
    { return { (void*)this, "bServerAcceptClientAuthoritativePosition" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyApex()
    { return { (void*)this, "bNotifyApex" }; }
    BitFieldValue<bool, unsigned __int32> bCheatFlying()
    { return { (void*)this, "bCheatFlying" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToCrouch()
    { return { (void*)this, "bWantsToCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bCrouchMaintainsBaseLocation()
    { return { (void*)this, "bCrouchMaintainsBaseLocation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreBaseRotation()
    { return { (void*)this, "bIgnoreBaseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bFastAttachedMove()
    { return { (void*)this, "bFastAttachedMove" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckFloor()
    { return { (void*)this, "bAlwaysCheckFloor" }; }
    BitFieldValue<bool, unsigned __int32> bUseFlatBaseForFloorChecks()
    { return { (void*)this, "bUseFlatBaseForFloorChecks" }; }
    BitFieldValue<bool, unsigned __int32> bPerformingJumpOff()
    { return { (void*)this, "bPerformingJumpOff" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToLeaveNavWalking()
    { return { (void*)this, "bWantsToLeaveNavWalking" }; }
    BitFieldValue<bool, unsigned __int32> bUseRVOAvoidance()
    { return { (void*)this, "bUseRVOAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedMoveUseAcceleration()
    { return { (void*)this, "bRequestedMoveUseAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bIsNavWalkingOnServer()
    { return { (void*)this, "bIsNavWalkingOnServer" }; }
    BitFieldValue<bool, unsigned __int32> bWasSimulatingRootMotion()
    { return { (void*)this, "bWasSimulatingRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPhysicsRotationDuringAnimRootMotion()
    { return { (void*)this, "bAllowPhysicsRotationDuringAnimRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bHasRequestedVelocity()
    { return { (void*)this, "bHasRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedMoveWithMaxSpeed()
    { return { (void*)this, "bRequestedMoveWithMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bForceModifyDesiredRotation()
    { return { (void*)this, "bForceModifyDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bWasAvoidanceUpdated()
    { return { (void*)this, "bWasAvoidanceUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bUseRVOPostProcess()
    { return { (void*)this, "bUseRVOPostProcess" }; }
    BitFieldValue<bool, unsigned __int32> bDeferUpdateBasedMovement()
    { return { (void*)this, "bDeferUpdateBasedMovement" }; }
    BitFieldValue<bool, unsigned __int32> bProjectNavMeshWalking()
    { return { (void*)this, "bProjectNavMeshWalking" }; }
    BitFieldValue<bool, unsigned __int32> bProjectNavMeshOnBothWorldChannels()
    { return { (void*)this, "bProjectNavMeshOnBothWorldChannels" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAcknowledgeServerCorrection()
    { return { (void*)this, "bUseBPAcknowledgeServerCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSwimmingOutsideOfWater()
    { return { (void*)this, "bEnableSwimmingOutsideOfWater" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckForInvallidFloor()
    { return { (void*)this, "bAlwaysCheckForInvallidFloor" }; }
    BitFieldValue<bool, unsigned __int32> bSkipInitialFloorUpdate()
    { return { (void*)this, "bSkipInitialFloorUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bBaseOnAttachmentRoot()
    { return { (void*)this, "bBaseOnAttachmentRoot" }; }
    BitFieldValue<bool, unsigned __int32> bBasedMovementIgnorePhysicsBase()
    { return { (void*)this, "bBasedMovementIgnorePhysicsBase" }; }
    BitFieldValue<bool, unsigned __int32> bDontClearRequestedVelocity()
    { return { (void*)this, "bDontClearRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bDontFallBelowJumpZVelocityDuringJump()
    { return { (void*)this, "bDontFallBelowJumpZVelocityDuringJump" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkGravityDirectionChanged()
    { return { (void*)this, "bNetworkGravityDirectionChanged" }; }
    BitFieldValue<bool, unsigned __int32> bSaveNonLocallyControlledRootMotion()
    { return { (void*)this, "bSaveNonLocallyControlledRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bStayBasedInAir()
    { return { (void*)this, "bStayBasedInAir" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustServerMoveDeltaTime()
    { return { (void*)this, "bUseBPAdjustServerMoveDeltaTime" }; }

};

#endif  // BRZ_SDK_JOGO_UCHARACTERMOVEMENTCOMPONENT_H
