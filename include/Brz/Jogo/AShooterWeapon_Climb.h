// ==========================================================================
//  AShooterWeapon_Climb — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_CLIMB_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_CLIMB_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FName;
struct FVector_NetQuantizeNormal;
struct UAnimSequence;
struct UAudioComponent;
struct UPrimalClimbingSettings;
struct USoundCue;
struct UStaticMeshComponent;

#include "AShooterWeapon_Melee.h"

struct AShooterWeapon_Climb : public AShooterWeapon_Melee
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Climb"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.AllowStatusRecovery()
    // endereco: cache_pdb_25090264
    bool AllowStatusRecovery() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.AllowStatusRecovery()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.AllowUnequip_Implementation()
    // endereco: cache_pdb_25090264
    bool AllowUnequip_Implementation() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.AllowUnequip_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAni
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon_Climb.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ApplyPrimalItemSettingsToWeapon(bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyPrimalItemSettingsToWeapon(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.ApplyPrimalItemSettingsToWeapon(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.AttachOtherMeshes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    void AttachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.AttachOtherMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.AttemptForceTPV()
    // endereco: casamento de bytes com a build de referencia
    void AttemptForceTPV() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.AttemptForceTPV()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Climb.BPUpdateClimbTarget(float,bool,UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    void BPUpdateClimbTarget(float a0, bool a1, void* a2, void* a3, bool a4, bool a5, void* a6, void* a7, bool a8) const
    {
        NativeCall<void, float, bool, void*, void*, bool, bool, void*, void*, bool>(this, "AShooterWeapon_Climb.BPUpdateClimbTarget(float,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=80+grafo=3/3]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.CalculateClimbDirections(UE::Math::TVector<double>,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    void CalculateClimbDirections(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterWeapon_Climb.CalculateClimbDirections(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.CanClimbOnSurface(FHitResult&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=829+grafo=12/12]]
    bool CanClimbOnSurface(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon_Climb.CanClimbOnSurface(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.CanLandOnSurface(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool CanLandOnSurface(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon_Climb.CanLandOnSurface(FHitResult&)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AShooterWeapon_Climb.CanMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    bool CanMeleeAttack() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.CanMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ClearImpactEffects()
    // endereco: casamento de bytes com a build de referencia
    void ClearImpactEffects() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.ClearImpactEffects()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Climb.ClientNotifyNoClimbSurface()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientNotifyNoClimbSurface() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.ClientNotifyNoClimbSurface()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ClientNotifyNoClimbSurface_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ClientNotifyNoClimbSurface_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.ClientNotifyNoClimbSurface_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ClimbTrace(FHitResult&,unsignedchar,UE::Math::TVector<double>,ECollisionCha
    // endereco: casamento de bytes com a build de referencia
    bool ClimbTrace(void* a0, unsigned char a1, void* a2, int a3) const
    {
        return NativeCall<bool, void*, unsigned char, void*, int>(this, "AShooterWeapon_Climb.ClimbTrace(FHitResult&,unsignedchar,UE::Math::TVector<double>,ECollisionChannel)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ClimbingPositionTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    bool ClimbingPositionTrace(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "AShooterWeapon_Climb.ClimbingPositionTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>*,float*)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   AShooterWeapon_Climb.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=110]]
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.DetachOtherMeshes()
    // endereco: casamento de bytes com a build de referencia
    void DetachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.DetachOtherMeshes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Climb.DrawDebugCapsuleTrace(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawDebugCapsuleTrace(void* a0, void* a1, void* a2, float a3, void* a4, bool a5, float a6, unsigned char a7) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*, bool, float, unsigned char>(this, "AShooterWeapon_Climb.DrawDebugCapsuleTrace(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,FColor&,bool,float,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVec
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    bool GetAimOffsets(float a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, void* a7, void* a8) const
    {
        return NativeCall<bool, float, void*, void*, float, void*, void*, void*, void*, void*>(this, "AShooterWeapon_Climb.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Climb.GetClimbingMovementType()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetClimbingMovementType() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Climb.GetClimbingMovementType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Climb.GetClimbingSettingsFast()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UPrimalClimbingSettings* GetClimbingSettingsFast() const
    {
        return NativeCall<UPrimalClimbingSettings*>(this, "AShooterWeapon_Climb.GetClimbingSettingsFast()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Climb.GetOpenInventoryAnim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOpenInventoryAnim() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Climb.GetOpenInventoryAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Climb.GetPitchMinMax(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPitchMinMax(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon_Climb.GetPitchMinMax(float&,float&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.GetStandingAnimation_Implementation(float&,float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UAnimSequence* GetStandingAnimation_Implementation(void* a0, void* a1) const
    {
        return NativeCall<UAnimSequence*, void*, void*>(this, "AShooterWeapon_Climb.GetStandingAnimation_Implementation(float&,float&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Climb.GetViewDirection()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    BrzPonteiro GetViewDirection() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Climb.GetViewDirection()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Climb.GetViewLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=44]]
    BrzPonteiro GetViewLocation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Climb.GetViewLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.IsClimbing()
    // endereco: cache_pdb_25090264
    bool IsClimbing() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.IsClimbingHanging()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsClimbingHanging() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbingHanging()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Climb.IsClimbingUp()
    // endereco: casamento de bytes com a build de referencia
    bool IsClimbingUp() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbingUp()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.IsHitInvisibleWall(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool IsHitInvisibleWall(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon_Climb.IsHitInvisibleWall(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.MustForceFPV()
    // endereco: casamento de bytes com a build de referencia
    bool MustForceFPV() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.MustForceFPV()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.PlayClimbAnim(unsignedchar,unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void PlayClimbAnim(unsigned char a0, unsigned char a1) const
    {
        NativeCall<void, unsigned char, unsigned char>(this, "AShooterWeapon_Climb.PlayClimbAnim(unsignedchar,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    void PreApplyAccumulatedForces(float a0, void* a1, void* a2) const
    {
        NativeCall<void, float, void*, void*>(this, "AShooterWeapon_Climb.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ReleaseClimbingAnchor(bool,UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void ReleaseClimbingAnchor(bool a0, void* a1, bool a2) const
    {
        NativeCall<void, bool, void*, bool>(this, "AShooterWeapon_Climb.ReleaseClimbingAnchor(bool,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Climb.SelectMeleeAttackAnim(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=87]]
    BrzPonteiro SelectMeleeAttackAnim(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon_Climb.SelectMeleeAttackAnim(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Climb.ServerPerformTurn(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerPerformTurn(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerPerformTurn(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ServerPerformTurn_Implementation(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void ServerPerformTurn_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerPerformTurn_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ServerReleaseClimbingAnchor_Implementation(bool,FVector_NetQuantizeNormal,b
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerReleaseClimbingAnchor_Implementation(bool a0, void* a1, bool a2) const
    {
        NativeCall<void, bool, void*, bool>(this, "AShooterWeapon_Climb.ServerReleaseClimbingAnchor_Implementation(bool,FVector_NetQuantizeNormal,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ServerRequestClimbMove(unsignedchar,UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestClimbMove(unsigned char a0, void* a1, bool a2) const
    {
        NativeCall<void, unsigned char, void*, bool>(this, "AShooterWeapon_Climb.ServerRequestClimbMove(unsignedchar,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ServerRequestClimbMove_Implementation(unsignedchar,UE::Math::TVector<double
    // endereco: cache_pdb_25090264
    void ServerRequestClimbMove_Implementation(unsigned char a0, void* a1, bool a2) const
    {
        NativeCall<void, unsigned char, void*, bool>(this, "AShooterWeapon_Climb.ServerRequestClimbMove_Implementation(unsignedchar,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Climb.ServerSetClimbingLeftArm(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetClimbingLeftArm(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerSetClimbingLeftArm(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ServerSetClimbingLeftArm_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ServerSetClimbingLeftArm_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerSetClimbingLeftArm_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.SetClimbingAnchorPoint(unsignedchar,unsignedchar,FVector_NetQuantize100,FVe
    // endereco: casamento de bytes com a build de referencia
    void SetClimbingAnchorPoint(unsigned char a0, unsigned char a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, unsigned char, unsigned char, void*, void*, void*>(this, "AShooterWeapon_Climb.SetClimbingAnchorPoint(unsignedchar,unsignedchar,FVector_NetQuantize100,FVector_NetQuantize100,FVector_NetQuantizeNormal)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.SetClimbingAnchorPoint_Implementation(unsignedchar,unsignedchar,FVector_Net
    // endereco: casamento de bytes com a build de referencia
    void SetClimbingAnchorPoint_Implementation(unsigned char a0, unsigned char a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, unsigned char, unsigned char, void*, void*, void*>(this, "AShooterWeapon_Climb.SetClimbingAnchorPoint_Implementation(unsignedchar,unsignedchar,FVector_NetQuantize100,FVector_NetQuantize100,FVector_NetQuantizeNormal)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ShouldOverrideOpenInventory()
    // endereco: cache_pdb_25090264
    bool ShouldOverrideOpenInventory() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.ShouldOverrideOpenInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.ShouldShowTargetingArray()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool ShouldShowTargetingArray() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Climb.ShouldShowTargetingArray()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.StartAltFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=121]]
    void StartAltFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.StartAltFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.StartFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=79]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.StopAltFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=108]]
    void StopAltFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_Climb.StopAltFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Climb.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.TryClimbMove(EClimbingType::Type,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void TryClimbMove(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "AShooterWeapon_Climb.TryClimbMove(EClimbingType::Type,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.UpdateClimbDirection(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateClimbDirection(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Climb.UpdateClimbDirection(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.UpdateClimbing(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateClimbing(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Climb.UpdateClimbing(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Climb.UpdateFirstPersonMeshes(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115]]
    void UpdateFirstPersonMeshes(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Climb.UpdateFirstPersonMeshes(bool)", a0);
    }

    BrzCampoPonteiro ActiveCameraModiferField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ActiveCameraModifer")); }
    TArray<AActor*>& ActiveImpactEffectsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "AShooterWeapon_Climb.ActiveImpactEffects"); }
    BrzCampoPonteiro ClimbAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ClimbAnims")); }
    UAudioComponent*& ClimbLowStaminaLoopACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_Climb.ClimbLowStaminaLoopAC"); }
    USoundCue*& ClimbLowStaminaLoopSCField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Climb.ClimbLowStaminaLoopSC"); }
    float& ClimbLowStaminaPercentagePlaySoundField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbLowStaminaPercentagePlaySound"); }
    BrzCampoPonteiro ClimbPickHitCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ClimbPickHitCameraShake")); }
    BrzCampoPonteiro ClimbingAnchorDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ClimbingAnchorDirection")); }
    FVector_NetQuantizeNormal& ClimbingAnchorNormalField() const
    { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "AShooterWeapon_Climb.ClimbingAnchorNormal"); }
    BrzCampoPonteiro ClimbingAnchorPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ClimbingAnchorPosition")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClimbingAnchorNormal` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1178; confianca alta)
    TWeakObjectPtr<void>& ClimbingAttachedActorField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "ClimbingAnchorNormal", 24); }
    BrzCampoPonteiro ClimbingDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ClimbingDirection")); }
    double& ClimbingLastAttachedStartedTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_Climb.ClimbingLastAttachedStartedTime"); }
    float& ClimbingLookingToSideField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingLookingToSide"); }
    float& ClimbingMinAttachedDurationBeforeAllowingDetachField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingMinAttachedDurationBeforeAllowingDetach"); }
    unsigned char& ClimbingModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.ClimbingMode"); }
    float& ClimbingOvershootTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingOvershootTime"); }
    BrzCampoPonteiro ClimbingSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ClimbingSettingsClass")); }
    unsigned char& ClimbingTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.ClimbingType"); }
    unsigned char& CurrentClimbingMovementTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.CurrentClimbingMovementType"); }
    FName& ImpactSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.ImpactSocketName"); }
    UAnimSequence*& InventoryLeftClimbAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryLeftClimbAnimation"); }
    UAnimSequence*& InventoryLeftClimbHangAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryLeftClimbHangAnimation"); }
    UAnimSequence*& InventoryRightClimbAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryRightClimbAnimation"); }
    UAnimSequence*& InventoryRightClimbHangAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryRightClimbHangAnimation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClimbingLastAttachedStartedTime` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1854; confianca alta)
    float& LastDistanceField() const
    { return BrzCampoAncorado<float>(this, "ClimbingLastAttachedStartedTime", 12); }
    BrzCampoPonteiro LeftClimbImpactEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.LeftClimbImpactEffects")); }
    UAnimSequence*& LeftClimbingAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.LeftClimbingAnimation"); }
    UAnimSequence*& LeftClimbingHangAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.LeftClimbingHangAnimation"); }
    UStaticMeshComponent*& LeftMesh1PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.LeftMesh1P"); }
    FName& LeftMesh1PComponentNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftMesh1PComponentName"); }
    UStaticMeshComponent*& LeftMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.LeftMesh3P"); }
    FName& LeftMesh3PComponentNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftMesh3PComponentName"); }
    FName& LeftPickAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftPickAttachPoint3P"); }
    int& MaxSpawnedImpactEffectsField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_Climb.MaxSpawnedImpactEffects"); }
    float& MinStaminaToClimbField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.MinStaminaToClimb"); }
    BrzCampoPonteiro PreviousClimbingAnchorNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.PreviousClimbingAnchorNormal")); }
    BrzCampoPonteiro PreviousClimbingAnchorPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.PreviousClimbingAnchorPosition")); }
    unsigned char& PreviousClimbingModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.PreviousClimbingMode"); }
    BrzCampoPonteiro RightClimbImpactEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.RightClimbImpactEffects")); }
    UAnimSequence*& RightClimbingAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.RightClimbingAnimation"); }
    UAnimSequence*& RightClimbingHangAnimationField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.RightClimbingHangAnimation"); }
    UStaticMeshComponent*& RightMesh1PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.RightMesh1P"); }
    FName& RightMesh1PComponentNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.RightMesh1PComponentName"); }
    UStaticMeshComponent*& RightMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.RightMesh3P"); }
    FName& RightMesh3PComponentNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.RightMesh3PComponentName"); }
    BrzCampoPonteiro ServerCurrentClimbingDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.ServerCurrentClimbingDirection")); }
    unsigned char& ServerCurrentClimbingTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.ServerCurrentClimbingType"); }
    BrzCampoPonteiro SlideDownLeftAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.SlideDownLeftAnim")); }
    BrzCampoPonteiro SlideDownRightAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.SlideDownRightAnim")); }
    BrzCampoPonteiro TurnLeftAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.TurnLeftAnim")); }
    BrzCampoPonteiro TurnLeftAnimHangingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.TurnLeftAnimHanging")); }
    BrzCampoPonteiro TurnRightAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.TurnRightAnim")); }
    BrzCampoPonteiro TurnRightAnimHangingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Climb.TurnRightAnimHanging")); }
    float& UpdatingDirectionTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.UpdatingDirectionTime"); }
    BitFieldValue<bool, unsigned __int32> bClimbingLeftArm()
    { return { (void*)this, "bClimbingLeftArm" }; }
    BitFieldValue<bool, unsigned __int32> bInitialAttach()
    { return { (void*)this, "bInitialAttach" }; }
    BitFieldValue<bool, unsigned __int32> bEarthquakeLocked()
    { return { (void*)this, "bEarthquakeLocked" }; }
    BitFieldValue<bool, unsigned __int32> bHasAValidClimbingTarget()
    { return { (void*)this, "bHasAValidClimbingTarget" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJumpingRotationChangeOnSmallDelta()
    { return { (void*)this, "bPreventJumpingRotationChangeOnSmallDelta" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_CLIMB_H
