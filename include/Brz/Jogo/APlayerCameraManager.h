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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=86]]
    BrzPonteiro ApplyAudioFade() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ApplyAudioFade()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ApplyCameraModifiers(float,FMinimalViewInfo&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=24]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    BrzPonteiro ClearCachedPPBlends() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ClearCachedPPBlends()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.ClearCameraLensEffects()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=4]]
    BrzPonteiro ClearCameraLensEffects() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ClearCameraLensEffects()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=33]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=106]]
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APlayerCameraManager.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.FindCameraModifierByClass(TSubclassOf<UCameraModifier>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=155]]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCachedPostProcessBlends(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocator<32>>*&,TArray<float,TSizedDefaultAllocator<32>>*&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocat
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCachedPostProcessBlends(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APlayerCameraManager.GetCachedPostProcessBlends(TArray<FPostProcessSettings,TSizedDefaultAllocator<32>>*&,TArray<float,TSizedDefaultAllocator<32>>*&,TArray<EViewTargetBlendOrder,TSizedDefaultAllocator<32>>*&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraCachePOV()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    BrzPonteiro GetCameraCachePOV() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetCameraCachePOV()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetCameraCacheView()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLastFrameCameraCacheView() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetLastFrameCameraCacheView()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetOrthoWidth()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetOrthoWidth() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.GetOrthoWidth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetViewTarget()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AActor* GetViewTarget() const
    {
        return NativeCall<AActor*>(this, "APlayerCameraManager.GetViewTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.GetViewTargetPawn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=136]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=199]]
    BrzPonteiro SetDesiredColorScale(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APlayerCameraManager.SetDesiredColorScale(UE::Math::TVector<double>,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetFOV(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetFOV(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerCameraManager.SetFOV(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetGameCameraCutThisFrame()
    // endereco: cache_pdb_25090264
    BrzPonteiro SetGameCameraCutThisFrame() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.SetGameCameraCutThisFrame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetLastFrameCameraCachePOV(FMinimalViewInfo&)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetLastFrameCameraCachePOV(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APlayerCameraManager.SetLastFrameCameraCachePOV(FMinimalViewInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetManualCameraFade(float,FLinearColor,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    BrzPonteiro SetManualCameraFade(float a0, void* a1, bool a2) const
    {
        return NativeCall<void*, float, void*, bool>(this, "APlayerCameraManager.SetManualCameraFade(float,FLinearColor,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SetOrthoWidth(float)
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldTickIfViewportsOnly() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.ShouldTickIfViewportsOnly()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StartCameraFade(float,float,float,FLinearColor,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=202]]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro StopAllCameraShakes(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerCameraManager.StopAllCameraShakes(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllCameraShakesFromSource(UCameraShakeSourceComponent*,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro StopAllCameraShakesFromSource(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopAllCameraShakesFromSource(UCameraShakeSourceComponent*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopAllInstancesOfCameraAnim(UCameraAnim*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=92]]
    BrzPonteiro StopAudioFade() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.StopAudioFade()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopCameraAnimInst(UCameraAnimInst*,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro StopCameraAnimInst(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopCameraAnimInst(UCameraAnimInst*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopCameraFade()
    // endereco: cache_pdb_25090264
    BrzPonteiro StopCameraFade() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.StopCameraFade()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.StopCameraShake(UCameraShakeBase*,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro StopCameraShake(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APlayerCameraManager.StopCameraShake(UCameraShakeBase*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=64]]
    BrzPonteiro SwapPendingViewTargetWhenUsingClientSideCameraUpdates() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UnlockFOV()
    // endereco: cache_pdb_25090264
    BrzPonteiro UnlockFOV() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.UnlockFOV()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UnlockOrthoWidth()
    // endereco: cache_pdb_25090264
    BrzPonteiro UnlockOrthoWidth() const
    {
        return NativeCall<void*>(this, "APlayerCameraManager.UnlockOrthoWidth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateCamera(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=151]]
    BrzPonteiro UpdateCamera(float a0) const
    {
        return NativeCall<void*, float>(this, "APlayerCameraManager.UpdateCamera(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerCameraManager.UpdateCameraLensEffects(FTViewTarget&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    //  ancorado em `TransformComponent` +8, medido na build 25090264
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
    //  ancorado em `OnAudioFadeChangeEvent` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2BA8; confianca alta)
    void*& FadeAlphaField() const
    { return BrzCampoAncorado<void*>(this, "OnAudioFadeChangeEvent", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAudioFadeChangeEvent` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2BB8; confianca alta)
    void*& FadeTimeField() const
    { return BrzCampoAncorado<void*>(this, "OnAudioFadeChangeEvent", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAudioFadeChangeEvent` +36, medido na build 25090264
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
    //  ancorado em `DefaultFOV` +4, medido na build 25090264
    //  (offset absoluto medido: 0x4AC; confianca alta)
    void*& LockedFOVField() const
    { return BrzCampoAncorado<void*>(this, "DefaultFOV", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultOrthoWidth` +4, medido na build 25090264
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
    //  ancorado em `PostProcessBlendCache` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2C38; confianca alta)
    void*& PostProcessBlendCacheOrdersField() const
    { return BrzCampoAncorado<void*>(this, "PostProcessBlendCache", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostProcessBlendCache` +16, medido na build 25090264
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
    //  ancorado em `ServerUpdateCameraTimeout` +8, medido na build 25090264
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
    //  ancorado em `ViewRollMax` +4, medido na build 25090264
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
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
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
