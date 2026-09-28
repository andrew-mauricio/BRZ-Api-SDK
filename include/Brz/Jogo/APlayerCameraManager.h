// ==========================================================================
//  APlayerCameraManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APLAYERCAMERAMANAGER_H
#define BRZ_SDK_JOGO_APLAYERCAMERAMANAGER_H

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


struct APlayerCameraManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APlayerCameraManager"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.AddCachedPPBlend(FPostProcessSettings&,float,EViewTargetBlendOrder)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddCachedPPBlend(void* a0, float a1, int a2) const
    {
        return NativeCall<void*, void*, float, int>(this, "APlayerCameraManager.AddCachedPPBlend(FPostProcessSettings&,float,EViewTargetBlendOrder)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.AddCameraModifierToList(UCameraModifier*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddCameraModifierToList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.AddCameraModifierToList(UCameraModifier*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.AddGenericCameraLensEffect(TSubclassOf<AActor>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddGenericCameraLensEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.AddGenericCameraLensEffect(TSubclassOf<AActor>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.AddNewCameraModifier(TSubclassOf<UCameraModifier>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNewCameraModifier(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.AddNewCameraModifier(TSubclassOf<UCameraModifier>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ApplyAudioFade()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyAudioFade() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ApplyAudioFade()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCameraModifiers(float a0, void* a1, bool a2) const
    {
        return NativeCall<void*, float, void*, bool>(this, "APlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ApplyWorldOffset(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyWorldOffset(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.AssignViewTarget(AActor*,FTViewTarget&,FViewTargetTransitionParams)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AssignViewTarget(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APlayerCameraManager.AssignViewTarget(AActor*,FTViewTarget&,FViewTargetTransitionParams)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.BlueprintUpdateCamera(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BlueprintUpdateCamera(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APlayerCameraManager.BlueprintUpdateCamera(AActor*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.CleanUpAnimCamera(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanUpAnimCamera(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerCameraManager.CleanUpAnimCamera(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ClearCachedPPBlends()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearCachedPPBlends() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ClearCachedPPBlends()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ClearCameraLensEffects()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearCameraLensEffects() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ClearCameraLensEffects()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APlayerCameraManager.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.DoUpdateCamera(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoUpdateCamera(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerCameraManager.DoUpdateCamera(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APlayerCameraManager.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.FindCameraModifierByClass(TSubclassOf<UCameraModifier>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindCameraModifierByClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.FindCameraModifierByClass(TSubclassOf<UCameraModifier>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.FindGenericCameraLensEffect(TSubclassOf<AActor>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindGenericCameraLensEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.FindGenericCameraLensEffect(TSubclassOf<AActor>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocat
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCachedPostProcessBlends(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocator<32>>*&,TArray<float,TSizedDefaultAllocator<32>>*&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocat
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCachedPostProcessBlends(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocator<32>>*&,TArray<float,TSizedDefaultAllocator<32>>*&,TArray<EViewTargetBlendOrder,TSizedDefaultAllocator<32>>*&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraCachePOV()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraCachePOV() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetCameraCachePOV()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraCacheView()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCameraCacheView() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetCameraCacheView()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraLocation() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetCameraLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraRotation() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetCameraRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraViewPoint(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerCameraManager.GetCameraViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCustomScaleFromPawn(TSubclassOf<UCameraShakeBase>,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCustomScaleFromPawn(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APlayerCameraManager.GetCustomScaleFromPawn(TSubclassOf<UCameraShakeBase>,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetFOVAngle()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFOVAngle() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetFOVAngle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetLastFrameCameraCacheView()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetLastFrameCameraCacheView() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetLastFrameCameraCacheView()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetOrthoWidth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetOrthoWidth() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetOrthoWidth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetViewTarget()
    // endereco: casamento de bytes com a build de referencia
    AActor* GetViewTarget() const
    {
        return NativeCall<AActor*>(this, "APlayerCameraManager.GetViewTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetViewTargetPawn()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetViewTargetPawn() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetViewTargetPawn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.InitializeFor(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeFor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.InitializeFor(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.IsOrthographic()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsOrthographic() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.IsOrthographic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.LimitViewPitch(UE::Math::TRotator<double>&,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LimitViewPitch(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "APlayerCameraManager.LimitViewPitch(UE::Math::TRotator<double>&,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.PhotographyCameraModify_Implementation(UE::Math::TVector<double>,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhotographyCameraModify_Implementation(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APlayerCameraManager.PhotographyCameraModify_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.PlayCameraAnim(UCameraAnim*,float,float,float,float,bool,bool,float,ECamera
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayCameraAnim(void* a0, float a1, float a2, float a3, float a4, bool a5, bool a6, float a7, int a8, void* a9) const
    {
        return NativeCall<void*, void*, float, float, float, float, bool, bool, float, int, void*>(this, "APlayerCameraManager.PlayCameraAnim(UCameraAnim*,float,float,float,float,bool,bool,float,ECameraShakePlaySpace,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.PlayWorldCameraShake(UWorld*,TSubclassOf<UCameraShakeBase>,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayWorldCameraShake(void* a0, void* a1, void* a2, float a3, float a4, float a5, bool a6, float a7) const
    {
        return NativeCall<void*, void*, void*, void*, float, float, float, bool, float>(this, "APlayerCameraManager.PlayWorldCameraShake(UWorld*,TSubclassOf<UCameraShakeBase>,UE::Math::TVector<double>,float,float,float,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ProcessViewRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotator<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessViewRotation(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "APlayerCameraManager.ProcessViewRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.RemoveCameraLensEffect(AEmitterCameraLensEffectBase*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCameraLensEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.RemoveCameraLensEffect(AEmitterCameraLensEffectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.RemoveCameraModifier(UCameraModifier*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCameraModifier(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.RemoveCameraModifier(UCameraModifier*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetDesiredColorScale(UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDesiredColorScale(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APlayerCameraManager.SetDesiredColorScale(UE::Math::TVector<double>,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetFOV(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetFOV(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerCameraManager.SetFOV(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetGameCameraCutThisFrame()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetGameCameraCutThisFrame() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.SetGameCameraCutThisFrame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetLastFrameCameraCachePOV(FMinimalViewInfo&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetLastFrameCameraCachePOV(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.SetLastFrameCameraCachePOV(FMinimalViewInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetManualCameraFade(float,FLinearColor,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetManualCameraFade(float a0, void* a1, bool a2) const
    {
        return NativeCall<void*, float, void*, bool>(this, "APlayerCameraManager.SetManualCameraFade(float,FLinearColor,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetOrthoWidth(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetOrthoWidth(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerCameraManager.SetOrthoWidth(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetViewTarget(AActor*,FViewTargetTransitionParams)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetViewTarget(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerCameraManager.SetViewTarget(AActor*,FViewTargetTransitionParams)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ShouldTickIfViewportsOnly()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShouldTickIfViewportsOnly() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ShouldTickIfViewportsOnly()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartCameraFade(float,float,float,FLinearColor,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCameraFade(float a0, float a1, float a2, void* a3, bool a4, bool a5) const
    {
        return NativeCall<void*, float, float, float, void*, bool, bool>(this, "APlayerCameraManager.StartCameraFade(float,float,float,FLinearColor,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartCameraShake(TSubclassOf<UCameraShakeBase>,FAddCameraShakeParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCameraShake(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerCameraManager.StartCameraShake(TSubclassOf<UCameraShakeBase>,FAddCameraShakeParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCameraShake(void* a0, float a1, int a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<void*, void*, float, int, void*, float, bool>(this, "APlayerCameraManager.StartCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,UE::Math::TRotator<double>,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartCameraShakeFromSource(TSubclassOf<UCameraShakeBase>,UCameraShakeSource
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCameraShakeFromSource(void* a0, void* a1, float a2, int a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, float, int, void*>(this, "APlayerCameraManager.StartCameraShakeFromSource(TSubclassOf<UCameraShakeBase>,UCameraShakeSourceComponent*,float,ECameraShakePlaySpace,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartMatineeCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePla
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartMatineeCameraShake(void* a0, float a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, float, int, void*, float>(this, "APlayerCameraManager.StartMatineeCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,UE::Math::TRotator<double>,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartMatineeCameraShakeFromSource(TSubclassOf<UCameraShakeBase>,UCameraShak
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartMatineeCameraShakeFromSource(void* a0, void* a1, float a2, int a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, float, int, void*>(this, "APlayerCameraManager.StartMatineeCameraShakeFromSource(TSubclassOf<UCameraShakeBase>,UCameraShakeSourceComponent*,float,ECameraShakePlaySpace,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllCameraShakes(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopAllCameraShakes(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerCameraManager.StopAllCameraShakes(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllCameraShakesFromSource(UCameraShakeSourceComponent*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopAllCameraShakesFromSource(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopAllCameraShakesFromSource(UCameraShakeSourceComponent*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllInstancesOfCameraAnim(UCameraAnim*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopAllInstancesOfCameraAnim(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopAllInstancesOfCameraAnim(UCameraAnim*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllInstancesOfCameraShake(TSubclassOf<UCameraShakeBase>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopAllInstancesOfCameraShake(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopAllInstancesOfCameraShake(TSubclassOf<UCameraShakeBase>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllInstancesOfCameraShakeFromSource(TSubclassOf<UCameraShakeBase>,UCame
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopAllInstancesOfCameraShakeFromSource(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APlayerCameraManager.StopAllInstancesOfCameraShakeFromSource(TSubclassOf<UCameraShakeBase>,UCameraShakeSourceComponent*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAudioFade()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopAudioFade() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.StopAudioFade()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopCameraAnimInst(UCameraAnimInst*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopCameraAnimInst(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopCameraAnimInst(UCameraAnimInst*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopCameraFade()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopCameraFade() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.StopCameraFade()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopCameraShake(UCameraShakeBase*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopCameraShake(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopCameraShake(UCameraShakeBase*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SwapPendingViewTargetWhenUsingClientSideCameraUpdates() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UnlockFOV()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UnlockFOV() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.UnlockFOV()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UnlockOrthoWidth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UnlockOrthoWidth() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.UnlockOrthoWidth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateCamera(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCamera(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerCameraManager.UpdateCamera(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateCameraLensEffects(FTViewTarget&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCameraLensEffects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.UpdateCameraLensEffects(FTViewTarget&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateCameraPhotographyOnly()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCameraPhotographyOnly() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.UpdateCameraPhotographyOnly()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdatePhotographyCamera(FMinimalViewInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdatePhotographyCamera(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.UpdatePhotographyCamera(FMinimalViewInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateViewTarget(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateViewTargetInternal(FTViewTarget&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateViewTargetInternal(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APlayerCameraManager.UpdateViewTargetInternal(FTViewTarget&,float)", a0, a1);
    }

    BrzCampoPonteiro ActiveAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.ActiveAnims")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerCameraManager.ActorUsingQuickAction"); }
    BrzCampoPonteiro AnimCameraActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.AnimCameraActor")); }
    BrzCampoPonteiro AnimInstPoolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.AnimInstPool")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.AttachmentReplication")); }
    float& AutoPlaneShiftField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.AutoPlaneShift"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerCameraManager.AutoReceiveInput"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.BlueprintCreatedComponents"); }
    BrzCampoPonteiro CachedCameraShakeModField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.CachedCameraShakeMod")); }
    BrzCampoPonteiro CameraCachePrivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.CameraCachePrivate")); }
    BrzCampoPonteiro CameraLensEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.CameraLensEffects")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TransformComponent` +8, medido na build 25535041
    //  (offset absoluto medido: 0x4A0; confianca alta)
    void*& CameraStyleField() const
    { return BrzCampoAncorado<void*>(this, "TransformComponent", 8); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APlayerCameraManager.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.CustomTimeDilation"); }
    float& DefaultAspectRatioField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultAspectRatio"); }
    float& DefaultFOVField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultFOV"); }
    BrzCampoPonteiro DefaultModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.DefaultModifiers")); }
    float& DefaultOrthoWidthField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultOrthoWidth"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerCameraManager.DesiredRepGraphBehavior"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAudioFadeChangeEvent` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2BA8; confianca alta)
    void*& FadeAlphaField() const
    { return BrzCampoAncorado<void*>(this, "OnAudioFadeChangeEvent", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAudioFadeChangeEvent` +32, medido na build 25535041
    //  (offset absoluto medido: 0x2BB8; confianca alta)
    void*& FadeTimeField() const
    { return BrzCampoAncorado<void*>(this, "OnAudioFadeChangeEvent", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAudioFadeChangeEvent` +36, medido na build 25535041
    //  (offset absoluto medido: 0x2BBC; confianca media)
    void*& FadeTimeRemainingField() const
    { return BrzCampoAncorado<void*>(this, "OnAudioFadeChangeEvent", 36); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro FreeAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.FreeAnims")); }
    float& FreeCamDistanceField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FreeCamDistance"); }
    BrzCampoPonteiro FreeCamOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.FreeCamOffset")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APlayerCameraManager.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerCameraManager.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.LastExitStasisTime"); }
    BrzCampoPonteiro LastFrameCameraCachePrivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.LastFrameCameraCachePrivate")); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APlayerCameraManager.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APlayerCameraManager.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.Layers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultFOV` +4, medido na build 25535041
    //  (offset absoluto medido: 0x4AC; confianca alta)
    void*& LockedFOVField() const
    { return BrzCampoAncorado<void*>(this, "DefaultFOV", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultOrthoWidth` +4, medido na build 25535041
    //  (offset absoluto medido: 0x4B4; confianca alta)
    void*& LockedOrthoWidthField() const
    { return BrzCampoAncorado<void*>(this, "DefaultOrthoWidth", 4); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.MinNetUpdateFrequency"); }
    BrzCampoPonteiro ModifierListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.ModifierList")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerCameraManager.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APlayerCameraManager.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerCameraManager.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnActorHit")); }
    BrzCampoPonteiro OnAudioFadeChangeEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnAudioFadeChangeEvent")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerCameraManager.Owner"); }
    BrzCampoPonteiro PCOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.PCOwner")); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APlayerCameraManager.ParentComponent"); }
    BrzCampoPonteiro PendingViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.PendingViewTarget")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.PhysicsReplicationMode")); }
    BrzCampoPonteiro PostProcessBlendCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.PostProcessBlendCache")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostProcessBlendCache` +32, medido na build 25535041
    //  (offset absoluto medido: 0x2C38; confianca alta)
    void*& PostProcessBlendCacheOrdersField() const
    { return BrzCampoAncorado<void*>(this, "PostProcessBlendCache", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostProcessBlendCache` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2C28; confianca alta)
    void*& PostProcessBlendCacheWeightsField() const
    { return BrzCampoAncorado<void*>(this, "PostProcessBlendCache", 16); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APlayerCameraManager.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerCameraManager.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerCameraManager.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APlayerCameraManager.RootComponent"); }
    float& ServerUpdateCameraTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ServerUpdateCameraTimeout"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APlayerCameraManager.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APlayerCameraManager.StasisUnRegisteredComponents"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ServerUpdateCameraTimeout` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2CA0; confianca alta)
    void*& SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "ServerUpdateCameraTimeout", 8); }
    float& TPVCameraCollisionHeightScalerField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.TPVCameraCollisionHeightScaler"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.TPVCameraOffset")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APlayerCameraManager.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.TargetingTeam"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ViewRollMax` +4, medido na build 25535041
    //  (offset absoluto medido: 0x2C94; confianca alta)
    void*& TimeSinceLastServerUpdateCameraField() const
    { return BrzCampoAncorado<void*>(this, "ViewRollMax", 4); }
    TObjectPtr<USceneComponent>& TransformComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APlayerCameraManager.TransformComponent"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APlayerCameraManager.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APlayerCameraManager.UpdateOverlapsMethodDuringLevelStreaming"); }
    float& ViewPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewPitchMax"); }
    float& ViewPitchMinField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewPitchMin"); }
    float& ViewRollMaxField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewRollMax"); }
    float& ViewRollMinField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewRollMin"); }
    TObjectPtr<AActor>& ViewTargetField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APlayerCameraManager.ViewTarget"); }
    BrzCampoPonteiro ViewTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.ViewTargetOffset")); }
    float& ViewYawMaxField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewYawMax"); }
    float& ViewYawMinField() const
    { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewYawMin"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoCalculateOrthoPlanesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAutoCalculateOrthoPlanes")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bCanBeInCluster")); }
    BrzCampoPonteiro bClientSimulatingViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bClientSimulatingViewTarget")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDefaultConstrainAspectRatioField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bDefaultConstrainAspectRatio")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGameCameraCutThisFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bGameCameraCutThisFrame")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsMapActor")); }
    BrzCampoPonteiro bIsOrthographicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsOrthographic")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bSavedWhenStasised")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bStasised")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUpdateOrthoPlanesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUpdateOrthoPlanes")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCameraHeightAsViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseCameraHeightAsViewTarget")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseClientSideCameraUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseClientSideCameraUpdates")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerCameraManager.bWantsServerThrottledTick")); }
    BitFieldValue<bool, unsigned __int32> bAutoCalculateOrthoPlanes()
    { return { (void*)this, "bAutoCalculateOrthoPlanes" }; }
    BitFieldValue<bool, unsigned __int32> bClientSimulatingViewTarget()
    { return { (void*)this, "bClientSimulatingViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bDefaultConstrainAspectRatio()
    { return { (void*)this, "bDefaultConstrainAspectRatio" }; }
    BitFieldValue<bool, unsigned __int32> bGameCameraCutThisFrame()
    { return { (void*)this, "bGameCameraCutThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bIsOrthographic()
    { return { (void*)this, "bIsOrthographic" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateOrthoPlanes()
    { return { (void*)this, "bUpdateOrthoPlanes" }; }
    BitFieldValue<bool, unsigned __int32> bUseCameraHeightAsViewTarget()
    { return { (void*)this, "bUseCameraHeightAsViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseClientSideCameraUpdates()
    { return { (void*)this, "bUseClientSideCameraUpdates" }; }

};

#endif  // BRZ_SDK_JOGO_APLAYERCAMERAMANAGER_H
