// ==========================================================================
//  AShooterPlayerCameraManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPLAYERCAMERAMANAGER_H
#define BRZ_SDK_JOGO_ASHOOTERPLAYERCAMERAMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APawn;
struct FActorTickFunction;
struct FName;
struct UInputComponent;
struct UPrimitiveComponent;
struct USceneComponent;


struct AShooterPlayerCameraManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterPlayerCameraManager"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCameraModifiers(float a0, void* a1, bool a2) const
    {
        return NativeCall<void*, float, void*, bool>(this, "AShooterPlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.BPUpdateViewTarget(FTViewTarget&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPUpdateViewTarget(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "AShooterPlayerCameraManager.BPUpdateViewTarget(FTViewTarget&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.CameraGetRotationForPawnMovementInput(APrimalCharacter*,UE::Math::TR
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CameraGetRotationForPawnMovementInput(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerCameraManager.CameraGetRotationForPawnMovementInput(APrimalCharacter*,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.CheckForCameraStyleChanged(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForCameraStyleChanged(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.CheckForCameraStyleChanged(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CheckForCameraStyleChanged(FName* a0) const
    { return CheckForCameraStyleChanged(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ClearPrimalCameraMode()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearPrimalCameraMode() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.ClearPrimalCameraMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.DisableSurfaceCameraInterpolation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DisableSurfaceCameraInterpolation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.DisableSurfaceCameraInterpolation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.EndSurfaceCamera()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro EndSurfaceCamera() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.EndSurfaceCamera()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetActivePrimalCameraMode(FPrimalCameraMode&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActivePrimalCameraMode(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.GetActivePrimalCameraMode(FPrimalCameraMode&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetBlendableFromMIC(UMaterialInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBlendableFromMIC(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.GetBlendableFromMIC(UMaterialInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCahcedCameraStyle()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCahcedCameraStyle() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.GetCahcedCameraStyle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCameraAimViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraAimViewPoint(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerCameraManager.GetCameraAimViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCameraAimViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraAimViewPointNoModifiers(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterPlayerCameraManager.GetCameraAimViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCameraLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraLocation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.GetCameraLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCameraStyle()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraStyle() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.GetCameraStyle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCameraViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::T
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCameraViewPointNoModifiers(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerCameraManager.GetCameraViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetColorCodedStencil(EStencilAlliance::Type,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetColorCodedStencil(int a0, float a1) const
    {
        return NativeCall<void*, int, float>(this, "AShooterPlayerCameraManager.GetColorCodedStencil(EStencilAlliance::Type,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCurrentMaxZoomLevel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentMaxZoomLevel() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.GetCurrentMaxZoomLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCurrentZoomLevel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentZoomLevel() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.GetCurrentZoomLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetLastCameraTransitionPointLocation(APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLastCameraTransitionPointLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.GetLastCameraTransitionPointLocation(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocation(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraCurrentPivotLocation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocation(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocationOffset(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraCurrentPivotLocationOffset(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocationOffset(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetPrimalCameraState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetPrimalCameraState() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.GetPrimalCameraState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetTPVCollisionHeight(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTPVCollisionHeight(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerCameraManager.GetTPVCollisionHeight(AActor*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetWorldCameraShakeScale(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldCameraShakeScale(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterPlayerCameraManager.GetWorldCameraShakeScale(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.HandleLook(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HandleLook(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerCameraManager.HandleLook(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.HandleTurn(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HandleTurn(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerCameraManager.HandleTurn(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.HandleWheeledVehicle(AActor*,UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleWheeledVehicle(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "AShooterPlayerCameraManager.HandleWheeledVehicle(AActor*,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.InitializeFor(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeFor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.InitializeFor(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.IsFirstPerson()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsFirstPerson() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.IsFirstPerson()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.IsFreeAimActive()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsFreeAimActive() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.IsFreeAimActive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.IsInFrustum(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInFrustum(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerCameraManager.IsInFrustum(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.LimitViewPitch(UE::Math::TRotator<double>&,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LimitViewPitch(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "AShooterPlayerCameraManager.LimitViewPitch(UE::Math::TRotator<double>&,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.LimitViewYaw(UE::Math::TRotator<double>&,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LimitViewYaw(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "AShooterPlayerCameraManager.LimitViewYaw(UE::Math::TRotator<double>&,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.OnCameraStateChanged(APrimalCharacter*,EPrimalCameraState)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCameraStateChanged(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterPlayerCameraManager.OnCameraStateChanged(APrimalCharacter*,EPrimalCameraState)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.PrimalCameraFloatSpringInterp(float,float,FFloatSpringState&,float,f
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalCameraFloatSpringInterp(float a0, float a1, void* a2, float a3, float a4, float a5, float a6, float a7, bool a8, float a9, float a10, bool a11) const
    {
        return NativeCall<void*, float, float, void*, float, float, float, float, float, bool, float, float, bool>(this, "AShooterPlayerCameraManager.PrimalCameraFloatSpringInterp(float,float,FFloatSpringState&,float,float,float,float,float,bool,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.PrimalCameraQuaternionSpringInterp(UE::Math::TQuat<double>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalCameraQuaternionSpringInterp(void* a0, void* a1, void* a2, float a3, float a4, float a5, float a6, float a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, void*, float, float, float, float, float, bool>(this, "AShooterPlayerCameraManager.PrimalCameraQuaternionSpringInterp(UE::Math::TQuat<double>,UE::Math::TQuat<double>,FQuaternionSpringState&,float,float,float,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ProcessCurrentCameraState(APrimalCharacter*,float,UE::Math::TVector<
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ProcessCurrentCameraState(void* a0, float a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, void*, void*, void*, void*, void*>(this, "AShooterPlayerCameraManager.ProcessCurrentCameraState(APrimalCharacter*,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FHitResult&,FHitResult&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ResetThirdPersonLerp()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetThirdPersonLerp() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.ResetThirdPersonLerp()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.SetGameCameraCutThisFrame()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetGameCameraCutThisFrame() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.SetGameCameraCutThisFrame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.SetLastCameraTransitionPointLocation(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLastCameraTransitionPointLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.SetLastCameraTransitionPointLocation(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.SetLastTargetLocationLoc(UE::Math::TVector<double>)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetLastTargetLocationLoc(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.SetLastTargetLocationLoc(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.SetPrimalCameraMode(int,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPrimalCameraMode(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "AShooterPlayerCameraManager.SetPrimalCameraMode(int,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ShouldUseASACamera(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldUseASACamera(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerCameraManager.ShouldUseASACamera(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ShouldUseSlowInterpToOldCamera(APrimalCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShouldUseSlowInterpToOldCamera(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.ShouldUseSlowInterpToOldCamera(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.StartCameraTransition(float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCameraTransition(float a0, bool a1, bool a2) const
    {
        return NativeCall<void*, float, bool, bool>(this, "AShooterPlayerCameraManager.StartCameraTransition(float,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.StartSurfaceCamera(float,float,float,float,bool,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartSurfaceCamera(float a0, float a1, float a2, float a3, bool a4, void* a5, bool a6) const
    {
        return NativeCall<void*, float, float, float, float, bool, void*, bool>(this, "AShooterPlayerCameraManager.StartSurfaceCamera(float,float,float,float,bool,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.StartSurfaceCameraForPassenger(float,UE::Math::TRotator<double>&,flo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartSurfaceCameraForPassenger(float a0, void* a1, float a2, float a3) const
    {
        return NativeCall<void*, float, void*, float, float>(this, "AShooterPlayerCameraManager.StartSurfaceCameraForPassenger(float,UE::Math::TRotator<double>&,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.UpdateCamera(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCamera(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerCameraManager.UpdateCamera(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.UpdateCameraState(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCameraState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.UpdateCameraState(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.UpdateSurfaceCamera(UE::Math::TQuat<double>&,FMinimalViewInfo&,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSurfaceCamera(void* a0, void* a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, float, bool>(this, "AShooterPlayerCameraManager.UpdateSurfaceCamera(UE::Math::TQuat<double>&,FMinimalViewInfo&,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateViewTarget(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "AShooterPlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)", a0, a1);
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +8, medido na build 25535041
    //  (offset absoluto medido: 0x52D4; confianca alta)
    void*& ASALastCameraArmLengthField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 8); }
    BrzCampoPonteiro ActiveAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.ActiveAnims")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerCameraManager.ActorUsingQuickAction"); }
    BrzCampoPonteiro AnimCameraActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.AnimCameraActor")); }
    BrzCampoPonteiro AnimInstPoolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.AnimInstPool")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.AttachmentReplication")); }
    float& AutoPlaneShiftField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.AutoPlaneShift"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerCameraManager.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.BlueprintCreatedComponents"); }
    BrzCampoPonteiro CachedCameraShakeModField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CachedCameraShakeMod")); }
    BrzCampoPonteiro CameraArmLengthSpringStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraArmLengthSpringState")); }
    BrzCampoPonteiro CameraCachePrivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraCachePrivate")); }
    BrzCampoPonteiro CameraLensEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraLensEffects")); }
    BrzCampoPonteiro CameraPivotLocationSpringStateXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraPivotLocationSpringStateX")); }
    BrzCampoPonteiro CameraPivotLocationSpringStateYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraPivotLocationSpringStateY")); }
    BrzCampoPonteiro CameraPivotLocationSpringStateZField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraPivotLocationSpringStateZ")); }
    BrzCampoPonteiro CameraPivotRotationSpringStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.CameraPivotRotationSpringState")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.CreationTime"); }
    float& CurrentPrimalCameraModeDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CurrentPrimalCameraModeDistance"); }
    int& CurrentPrimalCameraModeIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.CurrentPrimalCameraModeIndex"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CustomTimeDilation"); }
    float& DefaultAspectRatioField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.DefaultAspectRatio"); }
    float& DefaultFOVField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.DefaultFOV"); }
    BrzCampoPonteiro DefaultModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.DefaultModifiers")); }
    float& DefaultOrthoWidthField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.DefaultOrthoWidth"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerCameraManager.DesiredRepGraphBehavior"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro FreeAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.FreeAnims")); }
    float& FreeCamDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.FreeCamDistance"); }
    BrzCampoPonteiro FreeCamOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.FreeCamOffset")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterPlayerCameraManager.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterPlayerCameraManager.Instigator"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCompleteCustomDepthStencilOverride` +2, medido na build 25535041
    //  (offset absoluto medido: 0x3EC0; confianca alta)
    void*& InterpTPVCameraOffsetField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 2); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastActorForceReplicationTime"); }
    FName& LastActualCameraStyleField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.LastActualCameraStyle"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +52, medido na build 25535041
    //  (offset absoluto medido: 0x5300; confianca media)
    void*& LastCameraArmLengthInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCompleteCustomDepthStencilOverride` +10, medido na build 25535041
    //  (offset absoluto medido: 0x3EC8; confianca alta)
    void*& LastCameraStyleField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 10); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastExitStasisTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCompleteCustomDepthStencilOverride` +6, medido na build 25535041
    //  (offset absoluto medido: 0x3EC4; confianca alta)
    void*& LastFOVScaleMatParamFOVField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 6); }
    BrzCampoPonteiro LastFrameCameraCachePrivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.LastFrameCameraCachePrivate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +16, medido na build 25535041
    //  (offset absoluto medido: 0x52DC; confianca alta)
    void*& LastPivotXInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +28, medido na build 25535041
    //  (offset absoluto medido: 0x52E8; confianca alta)
    void*& LastPivotYInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +40, medido na build 25535041
    //  (offset absoluto medido: 0x52F4; confianca media)
    void*& LastPivotZInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 40); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerCameraManager.LastPostProcessVolumeSound"); }
    BrzCampoPonteiro LastPreModifierCameraCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.LastPreModifierCameraCache")); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterPlayerCameraManager.LastSelectedWindSourceComponentName"); }
    BrzCampoPonteiro LastTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.LastTPVCameraOffset")); }
    float& LastTPVCollisionHeightField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.LastTPVCollisionHeight"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCompleteCustomDepthStencilOverride` +18, medido na build 25535041
    //  (offset absoluto medido: 0x3ED0; confianca alta)
    void*& LastTargetField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 18); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.Layers"); }
    BrzCampoPonteiro MatFadeDownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.MatFadeDown")); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.MinNetUpdateFrequency"); }
    BrzCampoPonteiro ModifierListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.ModifierList")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerCameraManager.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerCameraManager.NetworkSpatializationParent"); }
    float& NormalFOVField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NormalFOV"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +12, medido na build 25535041
    //  (offset absoluto medido: 0x52D8; confianca alta)
    void*& OldCameraLastCameraArmLengthField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 12); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnActorHit")); }
    BrzCampoPonteiro OnAudioFadeChangeEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnAudioFadeChangeEvent")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerCameraManager.Owner"); }
    BrzCampoPonteiro PCOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.PCOwner")); }
    BrzCampoPonteiro PPMaterialsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.PPMaterials")); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerCameraManager.ParentComponent"); }
    BrzCampoPonteiro PendingViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.PendingViewTarget")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.PhysicsReplicationMode")); }
    BrzCampoPonteiro PostProcessBlendCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.PostProcessBlendCache")); }
    TWeakObjectPtr<void>& PrimalCameraModeSourceField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterPlayerCameraManager.PrimalCameraModeSource"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterPlayerCameraManager.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerCameraManager.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterPlayerCameraManager.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterPlayerCameraManager.RootComponent"); }
    float& ServerUpdateCameraTimeoutField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ServerUpdateCameraTimeout"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterPlayerCameraManager.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterPlayerCameraManager.StasisUnRegisteredComponents"); }
    float& TPVCameraCollisionHeightScalerField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVCameraCollisionHeightScaler"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.TPVCameraOffset")); }
    float& TPVCollisionHeightInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVCollisionHeightInterpSpeed"); }
    float& TPVZOffsetInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVZOffsetInterpSpeed"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterPlayerCameraManager.Tags"); }
    float& TargetingFOVField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TargetingFOV"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.TargetingTeam"); }
    TObjectPtr<USceneComponent>& TransformComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterPlayerCameraManager.TransformComponent"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.UpdateOverlapsMethodDuringLevelStreaming"); }
    float& ViewPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ViewPitchMax"); }
    float& ViewPitchMinField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ViewPitchMin"); }
    float& ViewRollMaxField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ViewRollMax"); }
    float& ViewRollMinField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ViewRollMin"); }
    TObjectPtr<AActor>& ViewTargetField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterPlayerCameraManager.ViewTarget"); }
    BrzCampoPonteiro ViewTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.ViewTargetOffset")); }
    float& ViewYawMaxField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ViewYawMax"); }
    float& ViewYawMinField() const
    { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.ViewYawMin"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoCalculateOrthoPlanesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAutoCalculateOrthoPlanes")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCanBeInCluster")); }
    BrzCampoPonteiro bClientSimulatingViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bClientSimulatingViewTarget")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCollideWhenPlacing")); }
    BrzCampoPonteiro bCompleteCustomDepthStencilOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCompleteCustomDepthStencilOverride")); }
    BrzCampoPonteiro bCustomDepthStencilIgnoreHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bCustomDepthStencilIgnoreHealth")); }
    BrzCampoPonteiro bDefaultConstrainAspectRatioField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bDefaultConstrainAspectRatio")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGameCameraCutThisFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bGameCameraCutThisFrame")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasCustomDepthStencilField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bHasCustomDepthStencil")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsMapActor")); }
    BrzCampoPonteiro bIsOrthographicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsOrthographic")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bSavedWhenStasised")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bStasised")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUpdateOrthoPlanesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUpdateOrthoPlanes")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCameraHeightAsViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseCameraHeightAsViewTarget")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseClientSideCameraUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseClientSideCameraUpdates")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.bWantsServerThrottledTick")); }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride()
    { return { (void*)this, "bCompleteCustomDepthStencilOverride" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth()
    { return { (void*)this, "bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bHasCustomDepthStencil()
    { return { (void*)this, "bHasCustomDepthStencil" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPLAYERCAMERAMANAGER_H
