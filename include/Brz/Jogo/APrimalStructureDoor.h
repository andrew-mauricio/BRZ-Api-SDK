// ==========================================================================
//  APrimalStructureDoor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREDOOR_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREDOOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USceneComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UTexture2D;

#include "APrimalStructure.h"

struct APrimalStructureDoor : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureDoor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.AllowPickupForItem(AShooterPlayerController*)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureDoor herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool AllowPickupForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowPickupForItem(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.AllowStructureAccess(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=99]]
    bool AllowStructureAccess(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureDoor.AllowStructureAccess(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=513+grafo=8/8]]
    bool ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureDoor.BPGotoDoorState(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGotoDoorState(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureDoor.BPGotoDoorState(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureDoor.BPOverrideChangeDoorState(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideChangeDoorState(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureDoor.BPOverrideChangeDoorState(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureDoor.BPSetDoorState(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPSetDoorState(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureDoor.BPSetDoorState(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=152]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureDoor.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.CanOpen(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=397+grafo=6/6]]
    bool CanOpen(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureDoor.CanOpen(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureDoor.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.DelayedGotoDoorState(signedchar,float)
    // endereco: casamento de bytes com a build de referencia
    void DelayedGotoDoorState(char a0, float a1) const
    {
        NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState(signedchar,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.DelayedGotoDoorStateTimer()
    // endereco: cache_pdb_25090264
    void DelayedGotoDoorStateTimer() const
    {
        NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureDoor.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureDoor.GetDescriptiveName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=531+grafo=17/17]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureDoor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.GotoDoorState(signedchar)
    // endereco: casamento de bytes com a build de referencia
    void GotoDoorState(char a0) const
    {
        NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState(signedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureDoor.NetGotoDoorState(signedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetGotoDoorState(signed char a0) const
    {
        return NativeCall<void*, signed char>(this, "APrimalStructureDoor.NetGotoDoorState(signedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    bool PreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructureDoor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureDoor.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)
    // endereco: casamento de bytes com a build de referencia
    void UpdateCosmeticMeshComp(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureDoor.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureDoor.UpdateStructureMesh()
    // endereco: casamento de bytes com a build de referencia
    void UpdateStructureMesh() const
    {
        NativeCall<void>(this, "APrimalStructureDoor.UpdateStructureMesh()");
    }

    TObjectPtr<UTexture2D>& CloseIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.CloseIcon"); }
    float& CurrentDoorAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.CurrentDoorAngle"); }
    int& CurrentOpenModeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureDoor.CurrentOpenMode"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureDoor.CurrentPinCode"); }
    USoundCue*& DoorCloseSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorCloseSound"); }
    USoundCue*& DoorOpenSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorOpenSound"); }
    signed char& DoorOpenStateField() const
    { return *GetNativePointerField<signed char*>(this, "APrimalStructureDoor.DoorOpenState"); }
    float& DoorStateChangeIgnoreEncroachmentIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval"); }
    //  no cache antigo este campo se chamava LastDoorStateChangeTime.
    //  nesta build ele e' `MaxOpenRotDeg` — resolve por NOME.
    double& LastDoorStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureDoor.MaxOpenRotDeg"); }
    double& LastPinOpenSuccessTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureDoor.LastPinOpenSuccessTime"); }
    USoundBase*& LockDoorSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockDoorSound"); }
    USoundBase*& LockedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockedSound"); }
    float& MaxOpenRotDegField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.MaxOpenRotDeg"); }
    USceneComponent*& MyDoorTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureDoor.MyDoorTransform"); }
    TObjectPtr<UTexture2D>& OpenIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenIcon"); }
    TObjectPtr<UTexture2D>& OpenModeAlwaysInIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeAlwaysInIcon"); }
    TObjectPtr<UTexture2D>& OpenModeAlwaysOutIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeAlwaysOutIcon"); }
    TObjectPtr<UTexture2D>& OpenModeInAndOutIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeInAndOutIcon"); }
    float& RotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.RotationSpeed"); }
    UStaticMeshComponent*& SecondDoorCosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureDoor.SecondDoorCosmeticVariantStaticMesh"); }
    BrzCampoPonteiro SecondDoorDefaultRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureDoor.SecondDoorDefaultRot")); }
    UStaticMeshComponent*& SecondDoorMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureDoor.SecondDoorMesh"); }
    USoundBase*& UnlockDoorSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.UnlockDoorSound"); }
    BitFieldValue<bool, unsigned __int32> bInvertOpenCloseDirection()
    { return { (void*)this, "bInvertOpenCloseDirection" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking()
    { return { (void*)this, "bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseSecondDoor()
    { return { (void*)this, "bUseSecondDoor" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking()
    { return { (void*)this, "bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked()
    { return { (void*)this, "bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked()
    { return { (void*)this, "bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess()
    { return { (void*)this, "bAdminOnlyAccess" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeForcedOpenByDino()
    { return { (void*)this, "bCanBeForcedOpenByDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBasingWhileMoving()
    { return { (void*)this, "bPreventBasingWhileMoving" }; }
    BitFieldValue<bool, unsigned __int32> bForceDoorOpenIn()
    { return { (void*)this, "bForceDoorOpenIn" }; }
    BitFieldValue<bool, unsigned __int32> bForceDoorOpenOut()
    { return { (void*)this, "bForceDoorOpenOut" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorMoving()
    { return { (void*)this, "bIsDoorMoving" }; }
    BitFieldValue<bool, unsigned __int32> bForceStaticMobility()
    { return { (void*)this, "bForceStaticMobility" }; }
    BitFieldValue<bool, unsigned __int32> bRotatePitch()
    { return { (void*)this, "bRotatePitch" }; }
    BitFieldValue<bool, unsigned __int32> bRotateRoll()
    { return { (void*)this, "bRotateRoll" }; }
    BitFieldValue<bool, unsigned __int32> bRotateYaw()
    { return { (void*)this, "bRotateYaw" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedRotation()
    { return { (void*)this, "bInitializedRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDoorInterpolation()
    { return { (void*)this, "bPreventDoorInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGotoDoorState()
    { return { (void*)this, "bUseBPGotoDoorState" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideChangeDoorState()
    { return { (void*)this, "bUseBPOverrideChangeDoorState" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking()
    { return { (void*)this, "bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntAffectDinoNavigationWhileOpen()
    { return { (void*)this, "bDoesntAffectDinoNavigationWhileOpen" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntUseOpenMode()
    { return { (void*)this, "bDoesntUseOpenMode" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREDOOR_H
