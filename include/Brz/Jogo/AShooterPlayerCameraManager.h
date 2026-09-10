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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClearPrimalCameraMode() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.ClearPrimalCameraMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.DisableSurfaceCameraInterpolation()
    // endereco: cache_pdb_25090264
    BrzPonteiro DisableSurfaceCameraInterpolation() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.DisableSurfaceCameraInterpolation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.EndSurfaceCamera()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=286]]
    BrzPonteiro GetBlendableFromMIC(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.GetBlendableFromMIC(UMaterialInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetCahcedCameraStyle()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCameraViewPointNoModifiers(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterPlayerCameraManager.GetCameraViewPointNoModifiers(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetColorCodedStencil(EStencilAlliance::Type,float)
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=131]]
    BrzPonteiro GetLastCameraTransitionPointLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.GetLastCameraTransitionPointLocation(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocation(APrimalCharacter*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=187]]
    BrzPonteiro GetPrimalCameraCurrentPivotLocation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocation(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocationOffset(APrimalCharacter*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=195]]
    BrzPonteiro GetPrimalCameraCurrentPivotLocationOffset(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterPlayerCameraManager.GetPrimalCameraCurrentPivotLocationOffset(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.GetPrimalCameraState()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=139]]
    BrzPonteiro HandleLook(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterPlayerCameraManager.HandleLook(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.HandleTurn(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=139]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=104]]
    BrzPonteiro InitializeFor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.InitializeFor(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.IsFirstPerson()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=297+grafo=6/6]]
    BrzPonteiro IsFirstPerson() const
    {
        return NativeCall<void*>(this, "AShooterPlayerCameraManager.IsFirstPerson()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.IsFreeAimActive()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=155]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    BrzPonteiro ProcessCurrentCameraState(void* a0, float a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, void*, void*, void*, void*, void*>(this, "AShooterPlayerCameraManager.ProcessCurrentCameraState(APrimalCharacter*,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FHitResult&,FHitResult&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.ResetThirdPersonLerp()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=86]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldUseSlowInterpToOldCamera(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterPlayerCameraManager.ShouldUseSlowInterpToOldCamera(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.StartCameraTransition(float,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro StartCameraTransition(float a0, bool a1, bool a2) const
    {
        return NativeCall<void*, float, bool, bool>(this, "AShooterPlayerCameraManager.StartCameraTransition(float,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterPlayerCameraManager.StartSurfaceCamera(float,float,float,float,bool,UE::Math::TVector<do
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    //  ancorado em `PrimalCameraModeSource` +8, medido na build 25090264
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
    //  ancorado em `bCompleteCustomDepthStencilOverride` +2, medido na build 25090264
    //  (offset absoluto medido: 0x3EC0; confianca alta)
    void*& InterpTPVCameraOffsetField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 2); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastActorForceReplicationTime"); }
    FName& LastActualCameraStyleField() const
    { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.LastActualCameraStyle"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +52, medido na build 25090264
    //  (offset absoluto medido: 0x5300; confianca media)
    void*& LastCameraArmLengthInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCompleteCustomDepthStencilOverride` +10, medido na build 25090264
    //  (offset absoluto medido: 0x3EC8; confianca alta)
    void*& LastCameraStyleField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 10); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterPlayerCameraManager.LastExitStasisTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCompleteCustomDepthStencilOverride` +6, medido na build 25090264
    //  (offset absoluto medido: 0x3EC4; confianca alta)
    void*& LastFOVScaleMatParamFOVField() const
    { return BrzCampoAncorado<void*>(this, "bCompleteCustomDepthStencilOverride", 6); }
    BrzCampoPonteiro LastFrameCameraCachePrivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterPlayerCameraManager.LastFrameCameraCachePrivate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +16, medido na build 25090264
    //  (offset absoluto medido: 0x52DC; confianca alta)
    void*& LastPivotXInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +28, medido na build 25090264
    //  (offset absoluto medido: 0x52E8; confianca alta)
    void*& LastPivotYInterpParamsField() const
    { return BrzCampoAncorado<void*>(this, "PrimalCameraModeSource", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalCameraModeSource` +40, medido na build 25090264
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
    //  ancorado em `bCompleteCustomDepthStencilOverride` +18, medido na build 25090264
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
    //  ancorado em `PrimalCameraModeSource` +12, medido na build 25090264
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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCalculateOrthoPlanes()
    { return { (void*)this, "bAutoCalculateOrthoPlanes" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bClientSimulatingViewTarget()
    { return { (void*)this, "bClientSimulatingViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDefaultConstrainAspectRatio()
    { return { (void*)this, "bDefaultConstrainAspectRatio" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGameCameraCutThisFrame()
    { return { (void*)this, "bGameCameraCutThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsOrthographic()
    { return { (void*)this, "bIsOrthographic" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateOrthoPlanes()
    { return { (void*)this, "bUpdateOrthoPlanes" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseCameraHeightAsViewTarget()
    { return { (void*)this, "bUseCameraHeightAsViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseClientSideCameraUpdates()
    { return { (void*)this, "bUseClientSideCameraUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride()
    { return { (void*)this, "bCompleteCustomDepthStencilOverride" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth()
    { return { (void*)this, "bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bHasCustomDepthStencil()
    { return { (void*)this, "bHasCustomDepthStencil" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPLAYERCAMERAMANAGER_H
