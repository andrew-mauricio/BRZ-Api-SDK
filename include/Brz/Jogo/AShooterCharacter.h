// ==========================================================================
//  AShooterCharacter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERCHARACTER_H
#define BRZ_SDK_JOGO_ASHOOTERCHARACTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct APrimalProjectileBoomerang;
struct APrimalProjectileGrapplingHook;
struct APrimalStructureTurretBallista;
struct AShooterWeapon;
struct FItemNetID;
struct FName;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimationAsset;
struct UAudioComponent;
struct UMaterialInterface;
struct UObject;
struct UParticleSystemComponent;
struct UPrimalCableComponent;
struct UPrimalItem;
struct UPrimalPlayerData;
struct UPrimaryDataAsset;
struct USceneComponent;
struct USkeletalMeshComponent;
struct UTexture2D;

#include "APrimalCharacter.h"

struct AShooterCharacter : public APrimalCharacter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterCharacter"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ActorTracking_SetFCustomTrackedActorInfoMembersByPlayerRef(bool,bool,bool,bool
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ActorTracking_SetFCustomTrackedActorInfoMembersByPlayerRef(bool a0, bool a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<void*, bool, bool, bool, bool, bool>(this, "AShooterCharacter.ActorTracking_SetFCustomTrackedActorInfoMembersByPlayerRef(bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.AddHostileStacks(int,bool,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AddHostileStacks(int a0, bool a1, bool a2) const
    {
        return NativeCall<void*, int, bool, bool>(this, "AShooterCharacter.AddHostileStacks(int,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.AddSkillCooldown(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void AddSkillCooldown(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "AShooterCharacter.AddSkillCooldown(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.AddStoredCounter(FString&,double,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddStoredCounter(const FString& a0, double a1, int a2) const
    {
        return NativeCall<void*, void*, double, int>(this, "AShooterCharacter.AddStoredCounter(FString&,double,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddStoredCounter(FString* a0, double a1, int a2) const
    { return AddStoredCounter(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowDinoTargetingRange(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "AShooterCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AllowFirstPerson()
    // endereco: casamento de bytes com a build de referencia
    bool AllowFirstPerson() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.AllowFirstPerson()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AllowGrappling_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool AllowGrappling_Implementation() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.AllowGrappling_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AllowParallelAnimations(USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowParallelAnimations(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.AllowParallelAnimations(USkeletalMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.AllowTreadWater()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AllowTreadWater() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.AllowTreadWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNo
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAn
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.AnimUseAimOffset()
    // endereco: casamento de bytes com a build de referencia
    bool AnimUseAimOffset() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.AnimUseAimOffset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ApplyBodyColors()
    // endereco: casamento de bytes com a build de referencia
    void ApplyBodyColors() const
    {
        NativeCall<void>(this, "AShooterCharacter.ApplyBodyColors()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ApplyBodyColors(USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void ApplyBodyColors(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ApplyBodyColors(USkeletalMeshComponent*)", a0);
    }

    // jogo_confirmou_dump
    //   AShooterCharacter.ApplyBoneModifiers()
    // endereco: casamento de bytes com a build de referencia
    void ApplyBoneModifiers() const
    {
        NativeCall<void>(this, "AShooterCharacter.ApplyBoneModifiers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshot(void* a0, void* a1, void* a2, float a3, int a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, float, int, bool, void*>(this, "AShooterCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool,FPrimalSnapshotPose*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshotEquipment(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterCharacter.ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshotEquipmentForItem(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterCharacter.ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ApplyDamageMomentum(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "AShooterCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.AttachToLadder(USceneComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void AttachToLadder(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.AttachToLadder(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AttachToLadder_Implementation(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    void AttachToLadder_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.AttachToLadder_Implementation(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.AuthPostSpawnInit()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void AuthPostSpawnInit() const
    {
        NativeCall<void>(this, "AShooterCharacter.AuthPostSpawnInit()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPAddSkillCooldown(FName,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPAddSkillCooldown(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "AShooterCharacter.BPAddSkillCooldown(FName,float)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.BPApplyBodyColors(USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void BPApplyBodyColors(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.BPApplyBodyColors(USkeletalMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.BPCanImplantSuicide()
    // endereco: casamento de bytes com a build de referencia
    bool BPCanImplantSuicide() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.BPCanImplantSuicide()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPGetHealthBarColor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetHealthBarColor() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.BPGetHealthBarColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPOverrideHealthBarOffset(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideHealthBarOffset(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterCharacter.BPOverrideHealthBarOffset(APlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.BPSetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void BPSetFirstPersonMasterPoseComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.BPSetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPSetPlayerHexagonCount(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPSetPlayerHexagonCount(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterCharacter.BPSetPlayerHexagonCount(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPSetupFirstPersonHandsMesh()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPSetupFirstPersonHandsMesh() const
    {
        NativeCall<void>(this, "AShooterCharacter.BPSetupFirstPersonHandsMesh()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPSpawnWeapon(TSubclassOf<AShooterWeapon>)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPSpawnWeapon(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "AShooterCharacter.BPSpawnWeapon(TSubclassOf<AShooterWeapon>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.BPSuicide_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPSuicide_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.BPSuicide_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.BPUnlockedAllBTTExplorerNotes(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=4]]
    void BPUnlockedAllBTTExplorerNotes(int a0) const
    {
        NativeCall<void, int>(this, "AShooterCharacter.BPUnlockedAllBTTExplorerNotes(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BPUnlockedAllExplorerNotes()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPUnlockedAllExplorerNotes() const
    {
        NativeCall<void>(this, "AShooterCharacter.BPUnlockedAllExplorerNotes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterCharacter.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.BreakGrapple()
    // endereco: casamento de bytes com a build de referencia
    void BreakGrapple() const
    {
        NativeCall<void>(this, "AShooterCharacter.BreakGrapple()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.BuffsPreventFirstPerson()
    // endereco: casamento de bytes com a build de referencia
    bool BuffsPreventFirstPerson() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.BuffsPreventFirstPerson()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.CalculateForwarBendingAngle()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateForwarBendingAngle() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.CalculateForwarBendingAngle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.CalculateLookAtHeadLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateLookAtHeadLocation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.CalculateLookAtHeadLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CalculateTetheringForSplitScreen()
    // endereco: casamento de bytes com a build de referencia
    void CalculateTetheringForSplitScreen() const
    {
        NativeCall<void>(this, "AShooterCharacter.CalculateTetheringForSplitScreen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.CallGameStateHandleEvent(FName,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CallGameStateHandleEvent(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterCharacter.CallGameStateHandleEvent(FName,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanBeCarried(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool CanBeCarried(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.CanBeCarried(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.CanBeTetheredByPlayer()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool CanBeTetheredByPlayer() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanBeTetheredByPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanCrouch()
    // endereco: casamento de bytes com a build de referencia
    bool CanCrouch() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanCrouch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.CanDestroyByMeshing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanDestroyByMeshing() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.CanDestroyByMeshing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.CanDoUsableHarvesting()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanDoUsableHarvesting() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.CanDoUsableHarvesting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanDragCharacter(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanDragCharacter(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "AShooterCharacter.CanDragCharacter(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.CanEquipWeapons()
    // endereco: casamento de bytes com a build de referencia
    bool CanEquipWeapons() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanEquipWeapons()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanFire()
    // endereco: casamento de bytes com a build de referencia
    bool CanFire() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanJumpInternal_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool CanJumpInternal_Implementation() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanJumpInternal_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanProne()
    // endereco: casamento de bytes com a build de referencia
    bool CanProne() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanProne()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterCharacter.CanProneInternal()
    // endereco: casamento de bytes com a build de referencia
    bool CanProneInternal() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.CanProneInternal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CanStartWeaponSwitch(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool CanStartWeaponSwitch(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.CanStartWeaponSwitch(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.CancelWeaponHideForEmote()
    // endereco: casamento de bytes com a build de referencia
    void CancelWeaponHideForEmote() const
    {
        NativeCall<void>(this, "AShooterCharacter.CancelWeaponHideForEmote()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CaptureCharacterSnapshot(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void CaptureCharacterSnapshot(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.CaptureCharacterSnapshot(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ChangeActorTeam(int)
    // endereco: casamento de bytes com a build de referencia
    void ChangeActorTeam(int a0) const
    {
        NativeCall<void, int>(this, "AShooterCharacter.ChangeActorTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()
    // endereco: casamento de bytes com a build de referencia
    void CheckAndHandleBasedPlayersBeingPushedThroughWalls() const
    {
        NativeCall<void>(this, "AShooterCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.CheckGenderOverrideRefreshComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckGenderOverrideRefreshComponents() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.CheckGenderOverrideRefreshComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClearCarryingDino(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearCarryingDino(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.ClearCarryingDino(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClearRidingDino(bool,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearRidingDino(bool a0, int a1, bool a2) const
    {
        NativeCall<void, bool, int, bool>(this, "AShooterCharacter.ClearRidingDino(bool,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClearRidingDinoAsPassenger(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearRidingDinoAsPassenger(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ClearRidingDinoAsPassenger(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClearSpawnAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClearSpawnAnim() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClearSpawnAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientClearTribeRequest_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientClearTribeRequest_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientClearTribeRequest_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ClientInviteToAlliance(int,unsignedint,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientInviteToAlliance(int a0, unsigned int a1, const FString& a2, const FString& a3) const
    {
        return NativeCall<void*, int, unsigned int, void*, void*>(this, "AShooterCharacter.ClientInviteToAlliance(int,unsignedint,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClientInviteToAlliance(int a0, unsigned int a1, FString* a2, FString* a3) const
    { return ClientInviteToAlliance(a0, a1, *a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientInviteToAlliance_Implementation(int,unsignedint,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void ClientInviteToAlliance_Implementation(int a0, unsigned int a1, const FString& a2, const FString& a3) const
    {
        NativeCall<void, int, unsigned int, void*, void*>(this, "AShooterCharacter.ClientInviteToAlliance_Implementation(int,unsignedint,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientInviteToAlliance_Implementation(int a0, unsigned int a1, FString* a2, FString* a3) const
    { ClientInviteToAlliance_Implementation(a0, a1, *a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "AShooterCharacter.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientNetEndClimbingLadder()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientNetEndClimbingLadder() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientNetEndClimbingLadder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientNetEndClimbingLadder_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientNetEndClimbingLadder_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientNetEndClimbingLadder_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ClientNotifyLevelUp_AllLevels_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientNotifyLevelUp_AllLevels_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.ClientNotifyLevelUp_AllLevels_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ClientNotifyTribeRequest(FString&,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyTribeRequest(const FString& a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.ClientNotifyTribeRequest(FString&,AShooterCharacter*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientNotifyTribeRequest(FString* a0, void* a1) const
    { ClientNotifyTribeRequest(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientNotifyTribeRequest_Implementation(FString&,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyTribeRequest_Implementation(const FString& a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.ClientNotifyTribeRequest_Implementation(FString&,AShooterCharacter*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ClientNotifyTribeRequest_Implementation(FString* a0, void* a1) const
    { ClientNotifyTribeRequest_Implementation(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ClientPlayHarvestAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientPlayHarvestAnim() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientPlayHarvestAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientPlayHarvestAnim_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientPlayHarvestAnim_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientPlayHarvestAnim_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ClientReceiveSkillCooldowns(TArray<FSkillCooldown,TSizedDefaultAllocator<32>>&
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientReceiveSkillCooldowns(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.ClientReceiveSkillCooldowns(TArray<FSkillCooldown,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientSetExpectedBase_Implementation(unsignedint)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetExpectedBase_Implementation(unsigned int a0) const
    {
        NativeCall<void, unsigned int>(this, "AShooterCharacter.ClientSetExpectedBase_Implementation(unsignedint)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ClientUpdatedInventory_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdatedInventory_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientUpdatedInventory_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ClientWasPushed()
    // endereco: casamento de bytes com a build de referencia
    void ClientWasPushed() const
    {
        NativeCall<void>(this, "AShooterCharacter.ClientWasPushed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ClientsSpawnHexagonVFX(int,float,UE::Math::TVector<double>,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientsSpawnHexagonVFX(int a0, float a1, void* a2, int a3, bool a4) const
    {
        return NativeCall<void*, int, float, void*, int, bool>(this, "AShooterCharacter.ClientsSpawnHexagonVFX(int,float,UE::Math::TVector<double>,int,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ClosedInventoryUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClosedInventoryUI() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.ClosedInventoryUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.CycleFastInventory(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void CycleFastInventory(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.CycleFastInventory(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.CycleFastInventoryNext(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void CycleFastInventoryNext(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.CycleFastInventoryNext(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DedicatedServerBoneFixup()
    // endereco: casamento de bytes com a build de referencia
    void DedicatedServerBoneFixup() const
    {
        NativeCall<void>(this, "AShooterCharacter.DedicatedServerBoneFixup()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DelayGiveDefaultWeapon(float)
    // endereco: casamento de bytes com a build de referencia
    void DelayGiveDefaultWeapon(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.DelayGiveDefaultWeapon(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterCharacter.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DetachFromLadder()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void DetachFromLadder() const
    {
        NativeCall<void>(this, "AShooterCharacter.DetachFromLadder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DetachFromLadder_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void DetachFromLadder_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.DetachFromLadder_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DetachGrapHookCable()
    // endereco: casamento de bytes com a build de referencia
    void DetachGrapHookCable() const
    {
        NativeCall<void>(this, "AShooterCharacter.DetachGrapHookCable()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DetachGrapHookCable_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void DetachGrapHookCable_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.DetachGrapHookCable_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "AShooterCharacter.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DoCharacterDetachment(bool,bool,APrimalBuff*)
    // endereco: casamento de bytes com a build de referencia
    void DoCharacterDetachment(bool a0, bool a1, void* a2) const
    {
        NativeCall<void, bool, bool, void*>(this, "AShooterCharacter.DoCharacterDetachment(bool,bool,APrimalBuff*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DoForceStreamComponents(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void DoForceStreamComponents(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.DoForceStreamComponents(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.DoLevelFixup(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoLevelFixup(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "AShooterCharacter.DoLevelFixup(bool,bool)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   AShooterCharacter.DoSetActorLocation(UE::Math::TVector<double>&,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    void DoSetActorLocation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "AShooterCharacter.DoSetActorLocation(UE::Math::TVector<double>&,ETeleportType)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.DrawFloatingHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawFloatingHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.DrawFloatingHUD(AShooterHUD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.FellOutOfWorld(UDamageType&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FellOutOfWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.FellOutOfWorld(UDamageType&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.FinalLoadedFromSaveGame()
    // endereco: casamento de bytes com a build de referencia
    void FinalLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "AShooterCharacter.FinalLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.FindForPlayerController(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindForPlayerController(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "AShooterCharacter.FindForPlayerController(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.FinishSpawnIntro()
    // endereco: casamento de bytes com a build de referencia
    void FinishSpawnIntro() const
    {
        NativeCall<void>(this, "AShooterCharacter.FinishSpawnIntro()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.FinishWeaponSwitch()
    // endereco: casamento de bytes com a build de referencia
    void FinishWeaponSwitch() const
    {
        NativeCall<void>(this, "AShooterCharacter.FinishWeaponSwitch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.FiredWeapon()
    // endereco: casamento de bytes com a build de referencia
    void FiredWeapon() const
    {
        NativeCall<void>(this, "AShooterCharacter.FiredWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ForceCrosshair()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool ForceCrosshair() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.ForceCrosshair()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ForceGiveDefaultWeapon()
    // endereco: casamento de bytes com a build de referencia
    void ForceGiveDefaultWeapon() const
    {
        NativeCall<void>(this, "AShooterCharacter.ForceGiveDefaultWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ForceSleep()
    // endereco: casamento de bytes com a build de referencia
    void ForceSleep() const
    {
        NativeCall<void>(this, "AShooterCharacter.ForceSleep()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ForceStreamComponents()
    // endereco: casamento de bytes com a build de referencia
    void ForceStreamComponents() const
    {
        NativeCall<void>(this, "AShooterCharacter.ForceStreamComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GameStateHandleEvent_Implementation(FName,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void GameStateHandleEvent_Implementation(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AShooterCharacter.GameStateHandleEvent_Implementation(FName,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetActiveMission()
    // endereco: casamento de bytes com a build de referencia
    AMissionType* GetActiveMission() const
    {
        return NativeCall<AMissionType*>(this, "AShooterCharacter.GetActiveMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetActorEyesViewPoint(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetActorSoundAttachmentComponentOverride(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    USceneComponent* GetActorSoundAttachmentComponentOverride(void* a0) const
    {
        return NativeCall<USceneComponent*, void*>(this, "AShooterCharacter.GetActorSoundAttachmentComponentOverride(USceneComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetActualTargetingFOV(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetActualTargetingFOV(float a0) const
    {
        return NativeCall<float, float>(this, "AShooterCharacter.GetActualTargetingFOV(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetAdditiveStandingAnim(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    UAnimSequence* GetAdditiveStandingAnim(void* a0, void* a1) const
    {
        return NativeCall<UAnimSequence*, void*, void*>(this, "AShooterCharacter.GetAdditiveStandingAnim(float&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAimOffsets(float a0, void* a1, void* a2, float a3, void* a4, bool a5) const
    {
        return NativeCall<void*, float, void*, void*, float, void*, bool>(this, "AShooterCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalChar
    // endereco: casamento de bytes com a build de referencia
    bool GetAllAttachedCharsInternal(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, bool>(this, "AShooterCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalCharacter*,0>,FDefaultSetAllocator>&,APrimalCharacter*,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetAllBoneModifierValues(TArray<TEnumAsByte<EBoneModifierType::Type>,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllBoneModifierValues(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterCharacter.GetAllBoneModifierValues(TArray<TEnumAsByte<EBoneModifierType::Type>,TSizedDefaultAllocator<32>>&,TArray<FBoneModifierRangeArray,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetAlternateStandingAnim(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAlternateStandingAnim(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterCharacter.GetAlternateStandingAnim(float&,float&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void GetAttackerDamageImpactFXAttachSocket(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.GetAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetBaseTargetingDesire(ITargetableInterface*)
    // endereco: casamento de bytes com a build de referencia
    float GetBaseTargetingDesire(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterCharacter.GetBaseTargetingDesire(ITargetableInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetBasedOnDino(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* GetBasedOnDino(bool a0, bool a1) const
    {
        return NativeCall<APrimalDinoCharacter*, bool, bool>(this, "AShooterCharacter.GetBasedOnDino(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetBasedOnDinoConst()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetBasedOnDinoConst() const
    {
        return NativeCall<UObject*>(this, "AShooterCharacter.GetBasedOnDinoConst()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetBasedOnRaft(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBasedOnRaft(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "AShooterCharacter.GetBasedOnRaft(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetBlockingShieldOffsets(UE::Math::TVector<double>&,UE::Math::TRotator<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBlockingShieldOffsets(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterCharacter.GetBlockingShieldOffsets(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetBoneModifierValue(TEnumAsByte<EBoneModifierType::Type>,FBoneModifierRangeAr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBoneModifierValue(unsigned char a0, void* a1) const
    {
        return NativeCall<void*, unsigned char, void*>(this, "AShooterCharacter.GetBoneModifierValue(TEnumAsByte<EBoneModifierType::Type>,FBoneModifierRangeArray&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetCarryingSocketYaw(bool)
    // endereco: casamento de bytes com a build de referencia
    float GetCarryingSocketYaw(bool a0) const
    {
        return NativeCall<float, bool>(this, "AShooterCharacter.GetCarryingSocketYaw(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetCharacterAdditionalHyperthermiaInsulationValue()
    // endereco: casamento de bytes com a build de referencia
    float GetCharacterAdditionalHyperthermiaInsulationValue() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetCharacterAdditionalHyperthermiaInsulationValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetCharacterAdditionalHypothermiaInsulationValue()
    // endereco: casamento de bytes com a build de referencia
    float GetCharacterAdditionalHypothermiaInsulationValue() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetCharacterAdditionalHypothermiaInsulationValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetCharacterAdditionalInsulationValueFromStructure(UWorld*,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    float GetCharacterAdditionalInsulationValueFromStructure(void* a0, void* a1, int a2) const
    {
        return NativeCall<float, void*, void*, int>(this, "AShooterCharacter.GetCharacterAdditionalInsulationValueFromStructure(UWorld*,UE::Math::TVector<double>&,EPrimalItemStat::Type)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetControlledStandingMountedTurret()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetControlledStandingMountedTurret() const
    {
        return NativeCall<UObject*>(this, "AShooterCharacter.GetControlledStandingMountedTurret()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetControlledTurretBallista()
    // endereco: casamento de bytes com a build de referencia
    APrimalStructureTurretBallista* GetControlledTurretBallista() const
    {
        return NativeCall<APrimalStructureTurretBallista*>(this, "AShooterCharacter.GetControlledTurretBallista()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetCrossplayPlatform()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCrossplayPlatform() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetCrossplayPlatform()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetCurrentSkillCooldownDuration(FName)
    // endereco: casamento de bytes com a build de referencia
    float GetCurrentSkillCooldownDuration(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "AShooterCharacter.GetCurrentSkillCooldownDuration(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetCurrentWeapon()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    AShooterWeapon* GetCurrentWeapon() const
    {
        return NativeCall<AShooterWeapon*>(this, "AShooterCharacter.GetCurrentWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    UAnimationAsset* GetDeathAnim_Implementation(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<UAnimationAsset*, float, void*, void*, void*>(this, "AShooterCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.GetDebugInfoString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.GetDescriptiveName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetDinoRidingAnimation()
    // endereco: casamento de bytes com a build de referencia
    UAnimSequence* GetDinoRidingAnimation() const
    {
        return NativeCall<UAnimSequence*>(this, "AShooterCharacter.GetDinoRidingAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetDinoRidingMoveAnimation()
    // endereco: casamento de bytes com a build de referencia
    UAnimSequence* GetDinoRidingMoveAnimation() const
    {
        return NativeCall<UAnimSequence*>(this, "AShooterCharacter.GetDinoRidingMoveAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetDistanceBetweenBones(USkeletalMeshComponent*,FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDistanceBetweenBones(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, unsigned long long, unsigned long long>(this, "AShooterCharacter.GetDistanceBetweenBones(USkeletalMeshComponent*,FName,FName)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetDynamicFaceIndex()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDynamicFaceIndex() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetDynamicFaceIndex()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetDynamicFaceMaterialBytes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDynamicFaceMaterialBytes() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetDynamicFaceMaterialBytes()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetDynamicMaterialBytesFloatValueByIndex(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetDynamicMaterialBytesFloatValueByIndex(int a0) const
    {
        return NativeCall<float, int>(this, "AShooterCharacter.GetDynamicMaterialBytesFloatValueByIndex(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetEyebrowCosmeticModID()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    long long GetEyebrowCosmeticModID() const
    {
        return NativeCall<long long>(this, "AShooterCharacter.GetEyebrowCosmeticModID()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetEyebrowIndex()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetEyebrowIndex() const
    {
        return NativeCall<int>(this, "AShooterCharacter.GetEyebrowIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetFPVShadowMeshOffset(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFPVShadowMeshOffset(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.GetFPVShadowMeshOffset(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetFacialHairColor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetFacialHairColor() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetFacialHairColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetFacialHairCosmeticModID()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    long long GetFacialHairCosmeticModID() const
    {
        return NativeCall<long long>(this, "AShooterCharacter.GetFacialHairCosmeticModID()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetFacialHairIndex()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetFacialHairIndex() const
    {
        return NativeCall<int>(this, "AShooterCharacter.GetFacialHairIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetFacialHairMorphTargetValue()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFacialHairMorphTargetValue() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetFacialHairMorphTargetValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetFirstPersonHandsMesh()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    USkeletalMeshComponent* GetFirstPersonHandsMesh() const
    {
        return NativeCall<USkeletalMeshComponent*>(this, "AShooterCharacter.GetFirstPersonHandsMesh()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetHeadHairColor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetHeadHairColor() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetHeadHairColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetHeadHairCosmeticModID()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    long long GetHeadHairCosmeticModID() const
    {
        return NativeCall<long long>(this, "AShooterCharacter.GetHeadHairCosmeticModID()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetHeadHairIndex()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetHeadHairIndex() const
    {
        return NativeCall<int>(this, "AShooterCharacter.GetHeadHairIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetHeadHairMorphTargetValue()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHeadHairMorphTargetValue() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetHeadHairMorphTargetValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetHostileStacks()
    // endereco: casamento de bytes com a build de referencia
    int GetHostileStacks() const
    {
        return NativeCall<int>(this, "AShooterCharacter.GetHostileStacks()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetHotbarSkillItemForSkill(FName)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetHotbarSkillItemForSkill(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "AShooterCharacter.GetHotbarSkillItemForSkill(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetInsulationFromItem(FHitResult&,EPrimalItemStat::Type)
    // endereco: casamento de bytes com a build de referencia
    float GetInsulationFromItem(void* a0, int a1) const
    {
        return NativeCall<float, void*, int>(this, "AShooterCharacter.GetInsulationFromItem(FHitResult&,EPrimalItemStat::Type)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetInventoryComponent(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInventoryComponent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.GetInventoryComponent(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetLastAttackTime()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    double GetLastAttackTime() const
    {
        return NativeCall<double>(this, "AShooterCharacter.GetLastAttackTime()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetLastSkillUsedTime(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    double GetLastSkillUsedTime(unsigned long long a0) const
    {
        return NativeCall<double, unsigned long long>(this, "AShooterCharacter.GetLastSkillUsedTime(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetLastSweepLocation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetLastSweepLocation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetLastSweepLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetLinkedPlayerDataID()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    unsigned long long GetLinkedPlayerDataID() const
    {
        return NativeCall<unsigned long long>(this, "AShooterCharacter.GetLinkedPlayerDataID()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetMaxSpeedModifier(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxSpeedModifier(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.GetMaxSpeedModifier(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetMultiUseEntriesFromBuffs(APlayerController*,TArray<FMultiUseEntry,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntriesFromBuffs(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.GetMultiUseEntriesFromBuffs(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetOrbitCamTargetLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrbitCamTargetLocation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetOrbitCamTargetLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetOverridenAnimBlueprint(TSubclassOf<UAnimInstance>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOverridenAnimBlueprint(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.GetOverridenAnimBlueprint(TSubclassOf<UAnimInstance>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetPassengerAttachedRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPassengerAttachedRotation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetPassengerAttachedRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetPawnViewLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPawnViewLocation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetPawnViewLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetPercentageOfFacialHairGrowth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetPercentageOfFacialHairGrowth() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetPercentageOfFacialHairGrowth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetPercentageOfHeadHairGrowth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetPercentageOfHeadHairGrowth() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetPercentageOfHeadHairGrowth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetPlatformIcon()
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetPlatformIcon() const
    {
        return NativeCall<UTexture2D*>(this, "AShooterCharacter.GetPlatformIcon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetPlayerData()
    // endereco: casamento de bytes com a build de referencia
    UPrimalPlayerData* GetPlayerData() const
    {
        return NativeCall<UPrimalPlayerData*>(this, "AShooterCharacter.GetPlayerData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetPlayerHexagonCount()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetPlayerHexagonCount() const
    {
        return NativeCall<int>(this, "AShooterCharacter.GetPlayerHexagonCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredArmLength(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "AShooterCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetRecoilMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float GetRecoilMultiplier() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetRecoilMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetRiddenStasisRangeMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float GetRiddenStasisRangeMultiplier() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetRiddenStasisRangeMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetRidingDinoAnimSpeedRatio()
    // endereco: casamento de bytes com a build de referencia
    float GetRidingDinoAnimSpeedRatio() const
    {
        return NativeCall<float>(this, "AShooterCharacter.GetRidingDinoAnimSpeedRatio()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetSeatingAnimation()
    // endereco: casamento de bytes com a build de referencia
    UAnimSequence* GetSeatingAnimation() const
    {
        return NativeCall<UAnimSequence*>(this, "AShooterCharacter.GetSeatingAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetSeatingStructure()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSeatingStructure() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetSeatingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetShoulderDinoWheelEntries()
    // endereco: casamento de bytes com a build de referencia
    void GetShoulderDinoWheelEntries(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.GetShoulderDinoWheelEntries()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetSkillCooldown(FName,FSkillCooldown&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSkillCooldown(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterCharacter.GetSkillCooldown(FName,FSkillCooldown&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetSkillCooldownTimeRemaining(FName)
    // endereco: casamento de bytes com a build de referencia
    float GetSkillCooldownTimeRemaining(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "AShooterCharacter.GetSkillCooldownTimeRemaining(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetSpawnedForController()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetSpawnedForController() const
    {
        return NativeCall<UObject*>(this, "AShooterCharacter.GetSpawnedForController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetSpecifcPawnMesh(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSpecifcPawnMesh(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.GetSpecifcPawnMesh(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetStoredCooldownPerClass(FName,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStoredCooldownPerClass(unsigned long long a0, double a1) const
    {
        return NativeCall<void*, unsigned long long, double>(this, "AShooterCharacter.GetStoredCooldownPerClass(FName,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetStoredCounter(FString&,FStoredCounter&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStoredCounter(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterCharacter.GetStoredCounter(FString&,FStoredCounter&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetStoredCounter(FString* a0, void* a1) const
    { return GetStoredCounter(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetTPVCameraOffset(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTPVCameraOffset(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.GetTPVCameraOffset(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetTalkerCharacter()
    // endereco: casamento de bytes com a build de referencia
    APrimalCharacter* GetTalkerCharacter() const
    {
        return NativeCall<APrimalCharacter*>(this, "AShooterCharacter.GetTalkerCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetTalkerLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTalkerLocation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetTalkerLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetTargetingDesirability(ITargetableInterface*)
    // endereco: casamento de bytes com a build de referencia
    float GetTargetingDesirability(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterCharacter.GetTargetingDesirability(ITargetableInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetTargetingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.GetTargetingLocation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetTertiaryMountedActor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetTertiaryMountedActor() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetTertiaryMountedActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetTimeLeftSuicideCooldown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTimeLeftSuicideCooldown() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetTimeLeftSuicideCooldown()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.GetTimeSinceLastUsedSkill(FName)
    // endereco: casamento de bytes com a build de referencia
    float GetTimeSinceLastUsedSkill(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "AShooterCharacter.GetTimeSinceLastUsedSkill(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetUniqueNetIdAsString()
    // endereco: casamento de bytes com a build de referencia
    void GetUniqueNetIdAsString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.GetUniqueNetIdAsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetUniqueNetIdTypeHash()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    unsigned int GetUniqueNetIdTypeHash() const
    {
        return NativeCall<unsigned int>(this, "AShooterCharacter.GetUniqueNetIdTypeHash()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetUnstasisViewerSiblingActor()
    // endereco: casamento de bytes com a build de referencia
    AActor* GetUnstasisViewerSiblingActor() const
    {
        return NativeCall<AActor*>(this, "AShooterCharacter.GetUnstasisViewerSiblingActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetUsedDefaultWeapon()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUsedDefaultWeapon() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetUsedDefaultWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetUsedMaxCursorHUDDistance(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUsedMaxCursorHUDDistance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.GetUsedMaxCursorHUDDistance(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetUsedWeaponAttachPoint()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUsedWeaponAttachPoint() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetUsedWeaponAttachPoint()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.GetVisualVelocity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVisualVelocity() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.GetVisualVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GetWeaponAmmoWheelEntries()
    // endereco: casamento de bytes com a build de referencia
    void GetWeaponAmmoWheelEntries(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.GetWeaponAmmoWheelEntries()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GiveDefaultWeapon(bool)
    // endereco: casamento de bytes com a build de referencia
    void GiveDefaultWeapon(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.GiveDefaultWeapon(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GiveHexagons(int,int,float,int,float,UE::Math::TVector<double>,int,bool)
    // endereco: casamento de bytes com a build de referencia
    long long GiveHexagons(int a0, int a1, float a2, int a3, float a4, void* a5, int a6, bool a7) const
    {
        return NativeCall<long long, int, int, float, int, float, void*, int, bool>(this, "AShooterCharacter.GiveHexagons(int,int,float,int,float,UE::Math::TVector<double>,int,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GiveMapWeapon()
    // endereco: casamento de bytes com a build de referencia
    void GiveMapWeapon() const
    {
        NativeCall<void>(this, "AShooterCharacter.GiveMapWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GivePrimalItemWeapon(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void GivePrimalItemWeapon(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.GivePrimalItemWeapon(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.GivePrimalItemWeaponForMission(UPrimalItem*,AMissionType*)
    // endereco: casamento de bytes com a build de referencia
    AShooterWeapon* GivePrimalItemWeaponForMission(void* a0, void* a1) const
    {
        return NativeCall<AShooterWeapon*, void*, void*>(this, "AShooterCharacter.GivePrimalItemWeaponForMission(UPrimalItem*,AMissionType*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.HandleNearLedgeImpulse(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleNearLedgeImpulse(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "AShooterCharacter.HandleNearLedgeImpulse(float,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.HasAnyOtherBuffsUsingConsolidatedMultiUse(APrimalBuff*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool HasAnyOtherBuffsUsingConsolidatedMultiUse(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.HasAnyOtherBuffsUsingConsolidatedMultiUse(APrimalBuff*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.HasEnoughWeightToDragCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool HasEnoughWeightToDragCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.HasEnoughWeightToDragCharacter(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.HideWeapon()
    // endereco: casamento de bytes com a build de referencia
    void HideWeapon() const
    {
        NativeCall<void>(this, "AShooterCharacter.HideWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.HideWeaponForEmote(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideWeaponForEmote(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "AShooterCharacter.HideWeaponForEmote(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.HideWeaponForEmote_Implementation(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideWeaponForEmote_Implementation(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "AShooterCharacter.HideWeaponForEmote_Implementation(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.InterceptUseAction()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InterceptUseAction() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.InterceptUseAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.InviteToAlliance(int,unsignedint,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    void InviteToAlliance(int a0, unsigned int a1, const FString& a2, const FString& a3) const
    {
        NativeCall<void, int, unsigned int, void*, void*>(this, "AShooterCharacter.InviteToAlliance(int,unsignedint,FString,FString)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InviteToAlliance(int a0, unsigned int a1, FString* a2, FString* a3) const
    { InviteToAlliance(a0, a1, *a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsBlockedByShield(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "AShooterCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsBlockingWithShield()
    // endereco: casamento de bytes com a build de referencia
    bool IsBlockingWithShield() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsBlockingWithShield()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsCarryingSomething(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsCarryingSomething(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterCharacter.IsCarryingSomething(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsCharacterHardAttached(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsCharacterHardAttached(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "AShooterCharacter.IsCharacterHardAttached(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsControllingBallistaTurret()
    // endereco: casamento de bytes com a build de referencia
    bool IsControllingBallistaTurret() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsControllingBallistaTurret()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsControllingStandingMountedTurret()
    // endereco: casamento de bytes com a build de referencia
    bool IsControllingStandingMountedTurret() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsControllingStandingMountedTurret()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsCrafting()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsCrafting() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsCrafting()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsCurrentPassengerLimitCameraYaw()
    // endereco: casamento de bytes com a build de referencia
    bool IsCurrentPassengerLimitCameraYaw() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsCurrentPassengerLimitCameraYaw()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.IsFemale()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsFemale() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.IsFemale()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsFirstPerson()
    // endereco: casamento de bytes com a build de referencia
    bool IsFirstPerson() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsFirstPerson()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsGameInputAllowed()
    // endereco: casamento de bytes com a build de referencia
    bool IsGameInputAllowed() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsGameInputAllowed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsGrapplingAttachedToMe()
    // endereco: casamento de bytes com a build de referencia
    bool IsGrapplingAttachedToMe() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsGrapplingAttachedToMe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsGrapplingHardAttached()
    // endereco: casamento de bytes com a build de referencia
    bool IsGrapplingHardAttached() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsGrapplingHardAttached()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsInMission()
    // endereco: casamento de bytes com a build de referencia
    bool IsInMission() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsInMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsInSingletonMission()
    // endereco: casamento de bytes com a build de referencia
    bool IsInSingletonMission() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsInSingletonMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsIndoorsAtLoc(UWorld*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static bool IsIndoorsAtLoc(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "AShooterCharacter.IsIndoorsAtLoc(UWorld*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsNearTopOfLadder()
    // endereco: casamento de bytes com a build de referencia
    bool IsNearTopOfLadder() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsNearTopOfLadder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsOnSeatingStructure()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsOnSeatingStructure() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsOnSeatingStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsOutside()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsOutside() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsOutside()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsPlayingInitialSpawnAnim()
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayingInitialSpawnAnim() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsPlayingInitialSpawnAnim()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsPlayingRepawnAnim()
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayingRepawnAnim() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsPlayingRepawnAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsPlayingUpperBodyCallAnimation()
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayingUpperBodyCallAnimation() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsPlayingUpperBodyCallAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsPlayingUpperBodyCallAnimation_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayingUpperBodyCallAnimation_Implementation() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsPlayingUpperBodyCallAnimation_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsPreInventoryItem(UPrimalItem*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsPreInventoryItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.IsPreInventoryItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsProjectileInCache(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsProjectileInCache(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterCharacter.IsProjectileInCache(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsReadyToUpload(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool IsReadyToUpload(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.IsReadyToUpload(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsRider()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsRider() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsRider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsRunning()
    // endereco: casamento de bytes com a build de referencia
    bool IsRunning() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsRunning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsSitting(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsSitting(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterCharacter.IsSitting(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsSkillReadyToUse(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsSkillReadyToUse(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AShooterCharacter.IsSkillReadyToUse(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsSplitPlayer(int*)
    // endereco: casamento de bytes com a build de referencia
    bool IsSplitPlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.IsSplitPlayer(int*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsSubmerged(bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsSubmerged(bool a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<bool, bool, bool, bool, bool>(this, "AShooterCharacter.IsSubmerged(bool,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsTurningTooFastToRun(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsTurningTooFastToRun(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterCharacter.IsTurningTooFastToRun(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsUsingClimbingPick()
    // endereco: casamento de bytes com a build de referencia
    bool IsUsingClimbingPick() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsUsingClimbingPick()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsUsingShield()
    // endereco: casamento de bytes com a build de referencia
    bool IsUsingShield() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsUsingShield()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsValidUnStasisCaster()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidUnStasisCaster() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsValidUnStasisCaster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsVoiceSilent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsVoiceSilent() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsVoiceSilent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsVoiceTalking()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsVoiceTalking() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsVoiceTalking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsVoiceWhispering()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsVoiceWhispering() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsVoiceWhispering()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsVoiceYelling()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsVoiceYelling() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsVoiceYelling()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.IsWatchingExplorerNote()
    // endereco: casamento de bytes com a build de referencia
    bool IsWatchingExplorerNote() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsWatchingExplorerNote()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.IsWatered()
    // endereco: casamento de bytes com a build de referencia
    bool IsWatered() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.IsWatered()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.LaunchMountedDino(bool)
    // endereco: casamento de bytes com a build de referencia
    void LaunchMountedDino(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.LaunchMountedDino(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.LinkedPlayerIDString()
    // endereco: casamento de bytes com a build de referencia
    void LinkedPlayerIDString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.LinkedPlayerIDString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.LocalPossessedBy(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void LocalPossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.LocalPossessedBy(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.LocalRefreshRidingRotation()
    // endereco: casamento de bytes com a build de referencia
    void LocalRefreshRidingRotation() const
    {
        NativeCall<void>(this, "AShooterCharacter.LocalRefreshRidingRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ModifyAirControl(float)
    // endereco: casamento de bytes com a build de referencia
    float ModifyAirControl(float a0) const
    {
        return NativeCall<float, float>(this, "AShooterCharacter.ModifyAirControl(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void ModifyFirstPersonCameraLocation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.NetFinishWeaponSwitch(FItemNetID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetFinishWeaponSwitch(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterCharacter.NetFinishWeaponSwitch(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.NetFinishWeaponSwitch_Implementation(FItemNetID)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro NetFinishWeaponSwitch_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AShooterCharacter.NetFinishWeaponSwitch_Implementation(FItemNetID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.NetForceCallEmoteFinished_Implementation(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro NetForceCallEmoteFinished_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.NetForceCallEmoteFinished_Implementation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.NetSimulatedForceUpdateAimedActors(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NetSimulatedForceUpdateAimedActors(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.NetSimulatedForceUpdateAimedActors(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.NetSimulatedForceUpdateAimedActors_Implementation(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void NetSimulatedForceUpdateAimedActors_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.NetSimulatedForceUpdateAimedActors_Implementation(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.NetUpdateCharacterConfig()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void NetUpdateCharacterConfig() const
    {
        NativeCall<void>(this, "AShooterCharacter.NetUpdateCharacterConfig()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.NetUpdateCharacterConfig_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro NetUpdateCharacterConfig_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.NetUpdateCharacterConfig_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.NotifyBumpedPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyBumpedPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.NotifyBumpedPawn(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.NotifyControllerChanged()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyControllerChanged() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.NotifyControllerChanged()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.OnAquariumLedgeJumpEnded()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnAquariumLedgeJumpEnded() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnAquariumLedgeJumpEnded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OnAttachedToSeatingStructure()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAttachedToSeatingStructure() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.OnAttachedToSeatingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnBeginDrag_Implementation(APrimalCharacter*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnBeginDrag_Implementation(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "AShooterCharacter.OnBeginDrag_Implementation(APrimalCharacter*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void OnCameraUpdate(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnDetachedFromSeatingStructure(APrimalStructureSeating*)
    // endereco: casamento de bytes com a build de referencia
    void OnDetachedFromSeatingStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.OnDetachedFromSeatingStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnDraggingStarted()
    // endereco: casamento de bytes com a build de referencia
    void OnDraggingStarted() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnDraggingStarted()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.OnEmoteFinished()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnEmoteFinished() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnEmoteFinished()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnEndCrouch(float,float)
    // endereco: casamento de bytes com a build de referencia
    void OnEndCrouch(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterCharacter.OnEndCrouch(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnEndDrag_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void OnEndDrag_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnEndDrag_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnEndDragged(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnEndDragged(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.OnEndDragged(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnFailedJumped()
    // endereco: casamento de bytes com a build de referencia
    void OnFailedJumped() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnFailedJumped()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OnHairCosmeticDownloadComplete(bool,FInstalledMod&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnHairCosmeticDownloadComplete(bool a0, void* a1, bool a2) const
    {
        return NativeCall<void*, bool, void*, bool>(this, "AShooterCharacter.OnHairCosmeticDownloadComplete(bool,FInstalledMod&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OnHairCosmeticDownloadCompleteSnapshot(bool,FInstalledMod&,UPrimalItem*,AActor
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnHairCosmeticDownloadCompleteSnapshot(bool a0, void* a1, void* a2, void* a3, void* a4, float a5, int a6, bool a7) const
    {
        return NativeCall<void*, bool, void*, void*, void*, void*, float, int, bool>(this, "AShooterCharacter.OnHairCosmeticDownloadCompleteSnapshot(bool,FInstalledMod&,UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnHoldingReload()
    // endereco: casamento de bytes com a build de referencia
    void OnHoldingReload() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnHoldingReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void OnMovementModeChanged(int a0, unsigned char a1) const
    {
        NativeCall<void, int, unsigned char>(this, "AShooterCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId,1>,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnPlayerTalkingStateChanged(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterCharacter.OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId,1>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnPressCrouch()
    // endereco: casamento de bytes com a build de referencia
    void OnPressCrouch() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnPressCrouch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnPressCrouchProneToggle()
    // endereco: casamento de bytes com a build de referencia
    void OnPressCrouchProneToggle() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnPressCrouchProneToggle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnPressProne()
    // endereco: casamento de bytes com a build de referencia
    void OnPressProne() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnPressProne()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnPressReload()
    // endereco: casamento de bytes com a build de referencia
    void OnPressReload() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnPressReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnPrimalCharacterSleeped()
    // endereco: casamento de bytes com a build de referencia
    void OnPrimalCharacterSleeped() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnPrimalCharacterSleeped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnReleaseCrouchProneToggle()
    // endereco: casamento de bytes com a build de referencia
    void OnReleaseCrouchProneToggle() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnReleaseCrouchProneToggle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnReleaseReload()
    // endereco: casamento de bytes com a build de referencia
    void OnReleaseReload() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnReleaseReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnReload()
    // endereco: casamento de bytes com a build de referencia
    void OnReload() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OnRep_AttachmentReplication()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_AttachmentReplication() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.OnRep_AttachmentReplication()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.OnRep_CurrentWeapon(AShooterWeapon*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnRep_CurrentWeapon(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.OnRep_CurrentWeapon(AShooterWeapon*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.OnRep_DiscordUserID()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_DiscordUserID() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnRep_DiscordUserID()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnRep_HatHidden()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_HatHidden() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnRep_HatHidden()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.OnRep_LastPushedDirection()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_LastPushedDirection() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnRep_LastPushedDirection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnRep_RawBoneModifiers()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_RawBoneModifiers() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnRep_RawBoneModifiers()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.OnRep_bIsClimbing()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_bIsClimbing() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnRep_bIsClimbing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnStartAltFire()
    // endereco: casamento de bytes com a build de referencia
    void OnStartAltFire() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnStartAltFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnStartCrouch(float,float)
    // endereco: casamento de bytes com a build de referencia
    void OnStartCrouch(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterCharacter.OnStartCrouch(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnStartFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnStartFire() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnStartFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OnStartFire_Code(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnStartFire_Code(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.OnStartFire_Code(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnStartTargeting()
    // endereco: casamento de bytes com a build de referencia
    void OnStartTargeting() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnStartTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnStopAltFire()
    // endereco: casamento de bytes com a build de referencia
    void OnStopAltFire() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnStopAltFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OnStopFire_Code(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnStopFire_Code(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.OnStopFire_Code(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnStopTargeting()
    // endereco: casamento de bytes com a build de referencia
    void OnStopTargeting() const
    {
        NativeCall<void>(this, "AShooterCharacter.OnStopTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OnVoiceTalkingStateChanged(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnVoiceTalkingStateChanged(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.OnVoiceTalkingStateChanged(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.OpenedInventoryUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OpenedInventoryUI() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.OpenedInventoryUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OrbitCamOn()
    // endereco: casamento de bytes com a build de referencia
    void OrbitCamOn() const
    {
        NativeCall<void>(this, "AShooterCharacter.OrbitCamOn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.OrbitCamToggle()
    // endereco: casamento de bytes com a build de referencia
    void OrbitCamToggle() const
    {
        NativeCall<void>(this, "AShooterCharacter.OrbitCamToggle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)
    // endereco: casamento de bytes com a build de referencia
    float PlayAnimMontage(void* a0, float a1, unsigned long long a2, bool a3, bool a4, float a5, float a6) const
    {
        return NativeCall<float, void*, float, unsigned long long, bool, bool, float, float>(this, "AShooterCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.PlayAnimMontage_ByAngle(UAnimMontage*,float,FName,bool,bool,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayAnimMontage_ByAngle(void* a0, float a1, unsigned long long a2, bool a3, bool a4, float a5, float a6) const
    {
        return NativeCall<void*, void*, float, unsigned long long, bool, bool, float, float>(this, "AShooterCharacter.PlayAnimMontage_ByAngle(UAnimMontage*,float,FName,bool,bool,float,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.PlayDrinkingAnimation()
    // endereco: casamento de bytes com a build de referencia
    void PlayDrinkingAnimation() const
    {
        NativeCall<void>(this, "AShooterCharacter.PlayDrinkingAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PlayEmoteAnimation_Implementation(unsignedchar,bool)
    // endereco: casamento de bytes com a build de referencia
    void PlayEmoteAnimation_Implementation(unsigned char a0, bool a1) const
    {
        NativeCall<void, unsigned char, bool>(this, "AShooterCharacter.PlayEmoteAnimation_Implementation(unsignedchar,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PlayFootstep()
    // endereco: casamento de bytes com a build de referencia
    UAudioComponent* PlayFootstep() const
    {
        return NativeCall<UAudioComponent*>(this, "AShooterCharacter.PlayFootstep()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PlayHatHiddenAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlayHatHiddenAnim() const
    {
        NativeCall<void>(this, "AShooterCharacter.PlayHatHiddenAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PlaySpawnAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlaySpawnAnim() const
    {
        NativeCall<void>(this, "AShooterCharacter.PlaySpawnAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PlaySpawnIntro()
    // endereco: casamento de bytes com a build de referencia
    void PlaySpawnIntro() const
    {
        NativeCall<void>(this, "AShooterCharacter.PlaySpawnIntro()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.PlayTalkingAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayTalkingAnimation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.PlayTalkingAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.PlayeReloadBallistaAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayeReloadBallistaAnimation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.PlayeReloadBallistaAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.Poop(bool)
    // endereco: casamento de bytes com a build de referencia
    bool Poop(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterCharacter.Poop(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PossessedBy(AController*)
    // endereco: casamento de bytes com a build de referencia
    void PossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.PossessedBy(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AShooterCharacter.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    void PreApplyAccumulatedForces(float a0, void* a1, void* a2) const
    {
        NativeCall<void, float, void*, void*>(this, "AShooterCharacter.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PreInitializeComponents()
    // classe: a funcao mora em APawn, e AShooterCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APawn.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.PreventArmorSuitHUD()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool PreventArmorSuitHUD() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.PreventArmorSuitHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RefreshAttachmentsAndBody()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void RefreshAttachmentsAndBody() const
    {
        NativeCall<void>(this, "AShooterCharacter.RefreshAttachmentsAndBody()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RefreshDefaultAttachments(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshDefaultAttachments(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterCharacter.RefreshDefaultAttachments(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RefreshRiderSocket()
    // endereco: casamento de bytes com a build de referencia
    void RefreshRiderSocket() const
    {
        NativeCall<void>(this, "AShooterCharacter.RefreshRiderSocket()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RefreshTribeName()
    // endereco: casamento de bytes com a build de referencia
    void RefreshTribeName() const
    {
        NativeCall<void>(this, "AShooterCharacter.RefreshTribeName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RegisterActorTickFunctions(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterActorTickFunctions(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.RegisterActorTickFunctions(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.RegisterFiredProjectile(AShooterProjectile*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterFiredProjectile(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.RegisterFiredProjectile(AShooterProjectile*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ReleaseSeatingStructure(APrimalStructureSeating*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void ReleaseSeatingStructure(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.ReleaseSeatingStructure(APrimalStructureSeating*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RemoveAttachments(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void RemoveAttachments(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterCharacter.RemoveAttachments(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RemoveCharacterSnapshot(UPrimalItem*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveCharacterSnapshot(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.RemoveCharacterSnapshot(UPrimalItem*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCharacterSnapshotEquipmentForItem(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterCharacter.RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.RemoveCurrentWeaponItem()
    // endereco: casamento de bytes com a build de referencia
    void RemoveCurrentWeaponItem() const
    {
        NativeCall<void>(this, "AShooterCharacter.RemoveCurrentWeaponItem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RemoveProjectileFromCache(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void RemoveProjectileFromCache(int a0) const
    {
        NativeCall<void, int>(this, "AShooterCharacter.RemoveProjectileFromCache(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RenamePlayer(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=167+bytes40+chamadores=3]]
    void RenamePlayer(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.RenamePlayer(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void RenamePlayer(FString* a0) const
    { RenamePlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ReplicateDurabilityForEquippedItem(FItemNetID)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ReplicateDurabilityForEquippedItem(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterCharacter.ReplicateDurabilityForEquippedItem(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.RequestFastInventory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void RequestFastInventory() const
    {
        NativeCall<void>(this, "AShooterCharacter.RequestFastInventory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ResetRootAimRotation()
    // endereco: casamento de bytes com a build de referencia
    void ResetRootAimRotation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ResetRootAimRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallAttackTarget_Implementation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallAttackTarget_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerCallAttackTarget_Implementation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallFollowDistanceCycleOne_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallFollowOne_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallLandFlyerOne_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallMoveTo_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallStayOne_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallStayOne_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerCallStayOne_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCallStay_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerCallStay_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerCallStay_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ServerCheckDrinkingWater()
    // endereco: casamento de bytes com a build de referencia
    void ServerCheckDrinkingWater() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerCheckDrinkingWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerCheckDrinkingWater_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerCheckDrinkingWater_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerCheckDrinkingWater_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerClearSwitchingWeapon_Implementation(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerClearSwitchingWeapon_Implementation(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.ServerClearSwitchingWeapon_Implementation(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerDetachGrapHookCable(bool,float)
    // endereco: casamento de bytes com a build de referencia
    void ServerDetachGrapHookCable(bool a0, float a1) const
    {
        NativeCall<void, bool, float>(this, "AShooterCharacter.ServerDetachGrapHookCable(bool,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerDetachGrapHookCable_Implementation(bool,float)
    // endereco: casamento de bytes com a build de referencia
    void ServerDetachGrapHookCable_Implementation(bool a0, float a1) const
    {
        NativeCall<void, bool, float>(this, "AShooterCharacter.ServerDetachGrapHookCable_Implementation(bool,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerFireBallistaProjectile_Implementation(UE::Math::TVector<double>,FVector_
    // endereco: casamento de bytes com a build de referencia
    void ServerFireBallistaProjectile_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.ServerFireBallistaProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerForceUpdatedAimedActors(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerForceUpdatedAimedActors(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "AShooterCharacter.ServerForceUpdatedAimedActors(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerGiveDefaultWeapon_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerGiveDefaultWeapon_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerGiveDefaultWeapon_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerLaunchMountedDino(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerLaunchMountedDino(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ServerLaunchMountedDino(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ServerLaunchMountedDino_Implementation(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerLaunchMountedDino_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.ServerLaunchMountedDino_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ServerNetEndClimbingLadder(bool,UE::Math::TVector<double>,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerNetEndClimbingLadder(bool a0, void* a1, void* a2) const
    {
        return NativeCall<void*, bool, void*, void*>(this, "AShooterCharacter.ServerNetEndClimbingLadder(bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerNetEndClimbingLadder_Implementation(bool,UE::Math::TVector<double>,UE::M
    // endereco: casamento de bytes com a build de referencia
    void ServerNetEndClimbingLadder_Implementation(bool a0, void* a1, void* a2) const
    {
        NativeCall<void, bool, void*, void*>(this, "AShooterCharacter.ServerNetEndClimbingLadder_Implementation(bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerNotifyBallistaShot_Implementation(FHitResult,FVector_NetQuantizeNormal)
    // endereco: casamento de bytes com a build de referencia
    void ServerNotifyBallistaShot_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.ServerNotifyBallistaShot_Implementation(FHitResult,FVector_NetQuantizeNormal)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerNotifyProjectileImpact(FHitResult&,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerNotifyProjectileImpact(void* a0, bool a1, int a2) const
    {
        NativeCall<void, void*, bool, int>(this, "AShooterCharacter.ServerNotifyProjectileImpact(FHitResult&,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerNotifyProjectileImpact_Implementation(FHitResult&,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerNotifyProjectileImpact_Implementation(void* a0, bool a1, int a2) const
    {
        NativeCall<void, void*, bool, int>(this, "AShooterCharacter.ServerNotifyProjectileImpact_Implementation(FHitResult&,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerPlayFireBallistaAnimation()
    // endereco: casamento de bytes com a build de referencia
    void ServerPlayFireBallistaAnimation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerPlayFireBallistaAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerPlayFireBallistaAnimation_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerPlayFireBallistaAnimation_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerPlayFireBallistaAnimation_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ServerPrepareMountedDinoForLaunch(UE::Math::TVector<double>,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerPrepareMountedDinoForLaunch(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterCharacter.ServerPrepareMountedDinoForLaunch(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ServerPrepareMountedDinoForLaunch_Implementation(UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerPrepareMountedDinoForLaunch_Implementation(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterCharacter.ServerPrepareMountedDinoForLaunch_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerReceiveTribeInvite(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerReceiveTribeInvite(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerReceiveTribeInvite(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerReceiveTribeInvite_Implementation(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ServerReceiveTribeInvite_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.ServerReceiveTribeInvite_Implementation(AShooterPlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerReleaseGrapHookCable(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerReleaseGrapHookCable(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ServerReleaseGrapHookCable(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerReleaseGrapHookCable_Implementation(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerReleaseGrapHookCable_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ServerReleaseGrapHookCable_Implementation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerRequestHexagonTrade(int,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestHexagonTrade(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterCharacter.ServerRequestHexagonTrade(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ServerRequestSkillCooldowns()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerRequestSkillCooldowns() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerRequestSkillCooldowns()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSeatingStructureAction_Implementation(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void ServerSeatingStructureAction_Implementation(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "AShooterCharacter.ServerSeatingStructureAction_Implementation(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSetBallistaNewRotation(float,float)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetBallistaNewRotation(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterCharacter.ServerSetBallistaNewRotation(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSetBallistaNewRotation_Implementation(float,float)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetBallistaNewRotation_Implementation(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterCharacter.ServerSetBallistaNewRotation_Implementation(float,float)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerSetBallistaTargeting(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void ServerSetBallistaTargeting(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ServerSetBallistaTargeting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSetBallistaTargeting_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetBallistaTargeting_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ServerSetBallistaTargeting_Implementation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.ServerSetTargeting(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=3]]
    void ServerSetTargeting(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.ServerSetTargeting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSetViewingInventory_Implementation(bool,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerSetViewingInventory_Implementation(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.ServerSetViewingInventory_Implementation(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerStartSurfaceCameraForPassenger(float,float,float,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerStartSurfaceCameraForPassenger(float a0, float a1, float a2, bool a3) const
    {
        NativeCall<void, float, float, float, bool>(this, "AShooterCharacter.ServerStartSurfaceCameraForPassenger(float,float,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerStopFireBallista()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStopFireBallista() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerStopFireBallista()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerStopFireBallista_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerStopFireBallista_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerStopFireBallista_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ServerSwitchBallistaAmmo()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerSwitchBallistaAmmo() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerSwitchBallistaAmmo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSwitchBallistaAmmo_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerSwitchBallistaAmmo_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerSwitchBallistaAmmo_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ServerSwitchMap()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerSwitchMap() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerSwitchMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerSwitchMap_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerSwitchMap_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerSwitchMap_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ServerToClientsPlayFireBallistaAnimation_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerToClientsPlayFireBallistaAnimation_Implementation() const
    {
        NativeCall<void>(this, "AShooterCharacter.ServerToClientsPlayFireBallistaAnimation_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetActorHiddenInGame(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetActorHiddenInGame(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.SetActorHiddenInGame(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.SetBoneModifiersOverride(TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetBoneModifiersOverride(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.SetBoneModifiersOverride(TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.SetBoneModifiersOverride_UtilizingPlayerProportions(TArray<FBoneModifierNamed,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetBoneModifiersOverride_UtilizingPlayerProportions(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "AShooterCharacter.SetBoneModifiersOverride_UtilizingPlayerProportions(TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>&,TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetCameraMode(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCameraMode(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetCameraMode(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.SetCarriedPitchYaw(float,float)
    // endereco: casamento de bytes com a build de referencia
    void SetCarriedPitchYaw(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterCharacter.SetCarriedPitchYaw(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetCarriedPitchYaw_Implementation(float,float)
    // endereco: casamento de bytes com a build de referencia
    void SetCarriedPitchYaw_Implementation(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "AShooterCharacter.SetCarriedPitchYaw_Implementation(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetCarryingDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetCarryingDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.SetCarryingDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void SetCharacterMeshesMaterialScalarParamValue(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "AShooterCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetCurrentWeapon(AShooterWeapon*,AShooterWeapon*)
    // endereco: casamento de bytes com a build de referencia
    void SetCurrentWeapon(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.SetCurrentWeapon(AShooterWeapon*,AShooterWeapon*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.SetEnableHandIK(bool,bool,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetEnableHandIK(bool a0, bool a1, bool a2) const
    {
        return NativeCall<void*, bool, bool, bool>(this, "AShooterCharacter.SetEnableHandIK(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetEquippedItemDurabilityPercent(FItemNetID,float)
    // endereco: casamento de bytes com a build de referencia
    void SetEquippedItemDurabilityPercent(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "AShooterCharacter.SetEquippedItemDurabilityPercent(FItemNetID,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.SetExpectedBase(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void SetExpectedBase(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.SetExpectedBase(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetFastInventoryMode(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetFastInventoryMode(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.SetFastInventoryMode(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetImplantSuicideCooldownStartTime(double)
    // endereco: casamento de bytes com a build de referencia
    void SetImplantSuicideCooldownStartTime(double a0) const
    {
        NativeCall<void, double>(this, "AShooterCharacter.SetImplantSuicideCooldownStartTime(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetPlayerHexagonCount(int)
    // endereco: casamento de bytes com a build de referencia
    bool SetPlayerHexagonCount(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterCharacter.SetPlayerHexagonCount(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.SetPreventEquipAllWeapons(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetPreventEquipAllWeapons(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.SetPreventEquipAllWeapons(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetRagdollPhysics(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetRagdollPhysics(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetRagdollPhysics(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetRidingDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetRidingDino(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.SetRidingDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefinition&
    // endereco: casamento de bytes com a build de referencia
    void SetRidingDinoAsPassenger(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefinition&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetSleeping(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSleeping(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetSleeping(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.SetStoredCooldownPerClass(FName,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetStoredCooldownPerClass(unsigned long long a0, double a1) const
    {
        return NativeCall<void*, unsigned long long, double>(this, "AShooterCharacter.SetStoredCooldownPerClass(FName,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetTargeting(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetTargeting(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.SetTargeting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SetupPlayerInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterCharacter.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ShouldASACameraSwitchToOld(bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldASACameraSwitchToOld(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterCharacter.ShouldASACameraSwitchToOld(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ShouldBlockCrouch()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldBlockCrouch() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.ShouldBlockCrouch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.ShouldEvaluatePostProcessAnimBP(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldEvaluatePostProcessAnimBP(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "AShooterCharacter.ShouldEvaluatePostProcessAnimBP(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ShouldHideNonWeaponHUD()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldHideNonWeaponHUD() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.ShouldHideNonWeaponHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ShouldSkipPhysicsUpdateOnAttachmentReplication()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldSkipPhysicsUpdateOnAttachmentReplication() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.ShouldSkipPhysicsUpdateOnAttachmentReplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ShouldUseSlowInterpToOldCamera()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseSlowInterpToOldCamera() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.ShouldUseSlowInterpToOldCamera()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.ShowWeapon()
    // endereco: casamento de bytes com a build de referencia
    void ShowWeapon() const
    {
        NativeCall<void>(this, "AShooterCharacter.ShowWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.StandingMountedTurret_ServerFireAtTarget(AActor*,UE::Math::TVector<double>,int
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StandingMountedTurret_ServerFireAtTarget(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AShooterCharacter.StandingMountedTurret_ServerFireAtTarget(AActor*,UE::Math::TVector<double>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.StandingMountedTurret_ServerFireAtTarget_Implementation(AActor*,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StandingMountedTurret_ServerFireAtTarget_Implementation(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AShooterCharacter.StandingMountedTurret_ServerFireAtTarget_Implementation(AActor*,UE::Math::TVector<double>,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.StartCameraTransition(float)
    // endereco: casamento de bytes com a build de referencia
    void StartCameraTransition(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.StartCameraTransition(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.StartWeaponSwitch(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartWeaponSwitch(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterCharacter.StartWeaponSwitch(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.StartedFiringWeapon(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartedFiringWeapon(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.StartedFiringWeapon(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.StasisingCharacter()
    // endereco: casamento de bytes com a build de referencia
    void StasisingCharacter() const
    {
        NativeCall<void>(this, "AShooterCharacter.StasisingCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.StaticRegisterNativesAShooterCharacter()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    static void StaticRegisterNativesAShooterCharacter()
    {
        NativeCall<void>(nullptr, "AShooterCharacter.StaticRegisterNativesAShooterCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.StoreAppliedCosmetics(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StoreAppliedCosmetics(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterCharacter.StoreAppliedCosmetics(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.StructurePlacementUseAlternateOriginActor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    AActor* StructurePlacementUseAlternateOriginActor() const
    {
        return NativeCall<AActor*>(this, "AShooterCharacter.StructurePlacementUseAlternateOriginActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SwitchMap()
    // endereco: casamento de bytes com a build de referencia
    void SwitchMap() const
    {
        NativeCall<void>(this, "AShooterCharacter.SwitchMap()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterCharacter.SyncGrapHookDistance(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SyncGrapHookDistance(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.SyncGrapHookDistance(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.SyncGrapHookDistance_Implementation(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SyncGrapHookDistance_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.SyncGrapHookDistance_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TakeSeatingStructure(APrimalStructureSeating*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void TakeSeatingStructure(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "AShooterCharacter.TakeSeatingStructure(APrimalStructureSeating*,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.TakeSeatingStructureHandIK()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TakeSeatingStructureHandIK() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.TakeSeatingStructureHandIK()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool TeleportTo(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, bool, bool>(this, "AShooterCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TempDampenInputAcceleration()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void TempDampenInputAcceleration() const
    {
        NativeCall<void>(this, "AShooterCharacter.TempDampenInputAcceleration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<
    // endereco: casamento de bytes com a build de referencia
    bool TemplateAllowActorSpawn(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "AShooterCharacter.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TickBeingDragged(float)
    // endereco: casamento de bytes com a build de referencia
    void TickBeingDragged(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.TickBeingDragged(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.TickUpdateHandIK(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickUpdateHandIK(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterCharacter.TickUpdateHandIK(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ToggleWeapon()
    // endereco: casamento de bytes com a build de referencia
    void ToggleWeapon() const
    {
        NativeCall<void>(this, "AShooterCharacter.ToggleWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TryAccessInventory()
    // endereco: casamento de bytes com a build de referencia
    bool TryAccessInventory() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.TryAccessInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TryCutEnemyGrapplingCable()
    // endereco: casamento de bytes com a build de referencia
    void TryCutEnemyGrapplingCable() const
    {
        NativeCall<void>(this, "AShooterCharacter.TryCutEnemyGrapplingCable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.TryGiveGenesisSeasonPassItems(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryGiveGenesisSeasonPassItems(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterCharacter.TryGiveGenesisSeasonPassItems(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TryLaunchMountedDino(bool)
    // endereco: casamento de bytes com a build de referencia
    void TryLaunchMountedDino(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.TryLaunchMountedDino(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "AShooterCharacter.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.TrySwitchFastInventory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void TrySwitchFastInventory() const
    {
        NativeCall<void>(this, "AShooterCharacter.TrySwitchFastInventory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UnequipCapes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnequipCapes() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.UnequipCapes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "AShooterCharacter.Unstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UpdateAllyRadarDatas_Implementation(TArray<FAllyRadarDatas,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAllyRadarDatas_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.UpdateAllyRadarDatas_Implementation(TArray<FAllyRadarDatas,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateAutoFire()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAutoFire() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateAutoFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateAutoJump()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAutoJump() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateAutoJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateAutoMove()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAutoMove() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateAutoMove()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateAutoPlayer()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAutoPlayer() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateAutoPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateAutoTurn()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAutoTurn() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateAutoTurn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateCarriedLocationAndRotation(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateCarriedLocationAndRotation(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.UpdateCarriedLocationAndRotation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UpdateCharacterSnapshotMaterialData(UPrimalInventoryComponent*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCharacterSnapshotMaterialData(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterCharacter.UpdateCharacterSnapshotMaterialData(UPrimalInventoryComponent*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UpdateDiscordRichPresence()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateDiscordRichPresence() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.UpdateDiscordRichPresence()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateGrapHook(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateGrapHook(float a0) const
    {
        NativeCall<void, float>(this, "AShooterCharacter.UpdateGrapHook(float)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AShooterCharacter.UpdateHair(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateHair(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterCharacter.UpdateHair(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UpdateLocallyInterpolatedViewLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateLocallyInterpolatedViewLocation() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateLocallyInterpolatedViewLocationX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void UpdateLocallyInterpolatedViewLocationX() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocationX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateLocallyInterpolatedViewLocationY()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void UpdateLocallyInterpolatedViewLocationY() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocationY()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateLocallyInterpolatedViewLocationZ()
    // endereco: casamento de bytes com a build de referencia
    void UpdateLocallyInterpolatedViewLocationZ() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocationZ()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdatePawnMeshes(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdatePawnMeshes(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "AShooterCharacter.UpdatePawnMeshes(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateProjectileCache()
    // endereco: casamento de bytes com a build de referencia
    void UpdateProjectileCache() const
    {
        NativeCall<void>(this, "AShooterCharacter.UpdateProjectileCache()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UpdateSeatingStructureHandIK()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSeatingStructureHandIK() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.UpdateSeatingStructureHandIK()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.UpdateSwimmingState()
    // classe: a funcao mora em APrimalCharacter, e AShooterCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void UpdateSwimmingState() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateSwimmingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.UpdateWeaponHandIK()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateWeaponHandIK() const
    {
        return NativeCall<void*>(this, "AShooterCharacter.UpdateWeaponHandIK()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterCharacter.UseAlternateStandingAnim()
    // endereco: casamento de bytes com a build de referencia
    bool UseAlternateStandingAnim() const
    {
        return NativeCall<bool>(this, "AShooterCharacter.UseAlternateStandingAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ValidToRestoreForPC(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool ValidToRestoreForPC(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterCharacter.ValidToRestoreForPC(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void WasPushed(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.WeaponEquipped(AShooterWeapon*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WeaponEquipped(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.WeaponEquipped(AShooterWeapon*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterCharacter.WeaponUnequipped(AShooterWeapon*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WeaponUnequipped(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterCharacter.WeaponUnequipped(AShooterWeapon*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterCharacter.ZoomOut()
    // endereco: casamento de bytes com a build de referencia
    void ZoomOut() const
    {
        NativeCall<void>(this, "AShooterCharacter.ZoomOut()");
    }

    // ── SEM ENDERECO NESTA BUILD: o ajudante abaixo responde por elas ──
    //    AShooterCharacter.GetRidingDino()

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SplitscreenMainPlayerUniqueNetIdTypeHash` +4, medido na build 25535041
    //  (offset absoluto medido: 0x2560; confianca alta)
    void*& AllianceInviteIDField() const
    { return BrzCampoAncorado<void*>(this, "SplitscreenMainPlayerUniqueNetIdTypeHash", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomFolderFastInventory` +16, medido na build 25535041
    //  (offset absoluto medido: 0x1E50; confianca alta)
    FString& AllianceInviteNameField() const
    { return BrzCampoAncorado<FString>(this, "CustomFolderFastInventory", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +12, medido na build 25535041
    //  (offset absoluto medido: 0x2540; confianca alta)
    int& AllianceInviteRequestingTeamField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +128, medido na build 25535041
    //  (offset absoluto medido: 0x2298; confianca media)
    double& AllianceInviteTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 128); }
    TArray<void*>& AnimOverrideToField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.AnimOverrideTo"); }
    TArray<void*>& AnimSequenceOverrideToField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.AnimSequenceOverrideTo"); }
    TArray<void*>& AnimSequencesOverrideFromField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.AnimSequencesOverrideFrom"); }
    TArray<void*>& AnimsOverrideFromField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.AnimsOverrideFrom"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +52, medido na build 25535041
    //  (offset absoluto medido: 0x24E0; confianca media)
    float& AppliedBobField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +64, medido na build 25535041
    //  (offset absoluto medido: 0x23A8; confianca media)
    void*& AppliedCustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoAncorado<void*>(this, "LastTimeStartedCrouchOrProneTransition", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SplitscreenMainPlayerUniqueNetIdTypeHash` +16, medido na build 25535041
    //  (offset absoluto medido: 0x256C; confianca alta)
    unsigned char& BestInstantShotResultField() const
    { return BrzCampoAncorado<unsigned char>(this, "SplitscreenMainPlayerUniqueNetIdTypeHash", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +56, medido na build 25535041
    //  (offset absoluto medido: 0x24E4; confianca media)
    float& BobTimeField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 56); }
    FieldArray<unsigned char> BodyColorsField() const
    { return { (void*)this, "AShooterCharacter.BodyColors" }; }
    BrzCampoPonteiro BodyMasksToApplyWhenAccessoryUnequippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.BodyMasksToApplyWhenAccessoryUnequipped")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CachedAttachmentMaterials` +24, medido na build 25535041
    //  (offset absoluto medido: 0x1AC0; confianca alta)
    TArray<void*>& BoneModifiers_FemaleField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "CachedAttachmentMaterials", 24); }
    float& BuffExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.BuffExtraDamageMultiplier"); }
    TArray<UMaterialInterface*>& CachedAttachmentMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "AShooterCharacter.CachedAttachmentMaterials"); }
    TArray<UMaterialInterface*>& CachedPlayerMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "AShooterCharacter.CachedPlayerMaterials"); }
    UAudioComponent*& CharacterStatusStateSoundComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.CharacterStatusStateSoundComponent"); }
    BrzCampoPonteiro CharacterStatusStateSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.CharacterStatusStateSounds")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +20, medido na build 25535041
    //  (offset absoluto medido: 0x24C0; confianca alta)
    float& ClientSeatedViewRotationPitchField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +24, medido na build 25535041
    //  (offset absoluto medido: 0x24C4; confianca alta)
    float& ClientSeatedViewRotationYawField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedRidingDino` +8, medido na build 25535041
    //  (offset absoluto medido: 0x207C; confianca alta)
    TWeakObjectPtr<void>& ClimbingLadderField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "SavedRidingDino", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WeaponBobSpeedBaseFalling` +12, medido na build 25535041
    //  (offset absoluto medido: 0x2508; confianca alta)
    float& CurrentAimBlendingField() const
    { return BrzCampoAncorado<float>(this, "WeaponBobSpeedBaseFalling", 12); }
    float& CurrentControlledBallistaPitchField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentControlledBallistaPitch"); }
    float& CurrentControlledBallistaYawField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentControlledBallistaYaw"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +40, medido na build 25535041
    //  (offset absoluto medido: 0x24D4; confianca media)
    void*& CurrentForwardBindingAlphaField() const
    { return BrzCampoAncorado<void*>(this, "ForwardBindingAlpha", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedRidingDino` +32, medido na build 25535041
    //  (offset absoluto medido: 0x2094; confianca alta)
    TWeakObjectPtr<void>& CurrentGrappledToCharacterField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "SavedRidingDino", 32); }
    TWeakObjectPtr<void>& CurrentItemBalloonField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.CurrentItemBalloon"); }
    BrzCampoPonteiro CurrentPassengerSeatDefinitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.CurrentPassengerSeatDefinition")); }
    TWeakObjectPtr<void>& CurrentPrimalShipField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.CurrentPrimalShip"); }
    double& CurrentShadowOpactiyField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.CurrentShadowOpactiy"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +4, medido na build 25535041
    //  (offset absoluto medido: 0x2538; confianca alta)
    int& CurrentVoiceModeField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 4); }
    AShooterWeapon*& CurrentWeaponField() const
    { return *GetNativePointerField<AShooterWeapon**>(this, "AShooterCharacter.CurrentWeapon"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +44, medido na build 25535041
    //  (offset absoluto medido: 0x24D8; confianca media)
    float& CurrentWeaponBobSpeedField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 44); }
    FItemNetID& CurrentWeaponItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.CurrentWeaponItemID"); }
    FString& CustomFolderFastInventoryField() const
    { return *GetNativePointerField<FString*>(this, "AShooterCharacter.CustomFolderFastInventory"); }
    BrzCampoPonteiro DataChannelVFXComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.DataChannelVFXComponent")); }
    TArray<void*>& DefaultAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.DefaultAttachmentInfos"); }
    int& DefaultFacialHairIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultFacialHairIndex"); }
    int& DefaultHeadHairIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultHeadHairIndex"); }
    int& DefaultHexagonAmountEarnedOnMissionCompletionField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultHexagonAmountEarnedOnMissionCompletion"); }
    float& DefaultPercentOfFullFacialHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.DefaultPercentOfFullFacialHairGrowth"); }
    float& DefaultPercentOfFullHeadHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.DefaultPercentOfFullHeadHairGrowth"); }
    BrzCampoPonteiro DefaultTPVAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.DefaultTPVAnimBlueprint")); }
    UAudioComponent*& DialogueSoundComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.DialogueSoundComponent"); }
    BrzCampoPonteiro DiscordUserIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.DiscordUserID")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2220; confianca media)
    double& DontTargetUntilTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 8); }
    UAnimMontage*& DraggingCharacterAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.DraggingCharacterAnim"); }
    UAnimMontage*& DrinkingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.DrinkingAnimation"); }
    BrzCampoPonteiro DynamicFaceIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.DynamicFaceIndex")); }
    BrzCampoPonteiro DynamicFaceMaterialBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.DynamicFaceMaterialBytes")); }
    FieldArray<unsigned char> DynamicMaterialBytesField() const
    { return { (void*)this, "AShooterCharacter.DynamicMaterialBytes" }; }
    FieldArray<unsigned char> DynamicOverrideHairDyeBytesField() const
    { return { (void*)this, "AShooterCharacter.DynamicOverrideHairDyeBytes" }; }
    TArray<void*>& EmoteAnimsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.EmoteAnims"); }
    BrzCampoPonteiro EmoteAnimsGenderOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.EmoteAnimsGenderOverride")); }
    float& EquippedArmorDurabilityPercent3Field() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent3"); }
    float& EquippedArmorDurabilityPercent4Field() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent4"); }
    float& EquippedArmorDurabilityPercent5Field() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent5"); }
    float& EquippedArmorDurabilityPercent6Field() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent6"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SplitscreenMainPlayerUniqueNetIdTypeHash` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2564; confianca alta)
    void*& ExpectedBaseIDField() const
    { return BrzCampoAncorado<void*>(this, "SplitscreenMainPlayerUniqueNetIdTypeHash", 8); }
    BrzCampoPonteiro ExtraExtraVectorVarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.ExtraExtraVectorVar")); }
    float& ExtraFloatVarField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.ExtraFloatVar"); }
    FName& ExtraNameVarField() const
    { return *GetNativePointerField<FName*>(this, "AShooterCharacter.ExtraNameVar"); }
    BrzCampoPonteiro ExtraVectorVarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.ExtraVectorVar")); }
    long& EyebrowCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "AShooterCharacter.EyebrowCustomCosmeticModID"); }
    unsigned char& EyebrowIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterCharacter.EyebrowIndex"); }
    USkeletalMeshComponent*& EyebrowsComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.EyebrowsComponent"); }
    USkeletalMeshComponent*& EyelashesComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.EyelashesComponent"); }
    double& FPVShadowFadeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.FPVShadowFade"); }
    double& FPVShadowThresholdField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.FPVShadowThreshold"); }
    USkeletalMeshComponent*& FacialHairComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.FacialHairComponent"); }
    long& FacialHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "AShooterCharacter.FacialHairCustomCosmeticModID"); }
    unsigned char& FacialHairIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterCharacter.FacialHairIndex"); }
    int& FastInventoryLastIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.FastInventoryLastIndex"); }
    int& FastInventoryLastMaxRowField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.FastInventoryLastMaxRow"); }
    int& FastInventoryQuantitySlotsField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.FastInventoryQuantitySlots"); }
    UAnimMontage*& FireBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.FireBallistaAnimation"); }
    BrzCampoPonteiro FiredProjectilesCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.FiredProjectilesCache")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +48, medido na build 25535041
    //  (offset absoluto medido: 0x2398; confianca media)
    double& ForceSleepRagdollUntilTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 48); }
    float& ForwardBindingAlphaField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.ForwardBindingAlpha"); }
    float& GrapHookPulledRopeDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookPulledRopeDistance"); }
    float& GrapHookSyncTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookSyncTime"); }
    UPrimalCableComponent*& GrapplingHookCableField() const
    { return *GetNativePointerField<UPrimalCableComponent**>(this, "AShooterCharacter.GrapplingHookCable"); }
    USkeletalMeshComponent*& HeadHairComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.HeadHairComponent"); }
    long& HeadHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "AShooterCharacter.HeadHairCustomCosmeticModID"); }
    unsigned char& HeadHairIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterCharacter.HeadHairIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2544; confianca alta)
    int& IgnoreCollisionSweepUntilFrameNumberField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 16); }
    float& IndoorCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.IndoorCheckInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +56, medido na build 25535041
    //  (offset absoluto medido: 0x23A0; confianca media)
    double& InterpLastCrouchProneStateChangeTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 56); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterCharacter.JunctionLinkCableParticle"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +32, medido na build 25535041
    //  (offset absoluto medido: 0x24CC; confianca alta)
    float& LastAdditionalHyperThermalInsulationField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +28, medido na build 25535041
    //  (offset absoluto medido: 0x24C8; confianca alta)
    float& LastAdditionalHypoThermalInsulationField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DiscordUserID` +8, medido na build 25535041
    //  (offset absoluto medido: 0x1DE8; confianca alta)
    void*& LastAimRotOffsetField() const
    { return BrzCampoAncorado<void*>(this, "DiscordUserID", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +80, medido na build 25535041
    //  (offset absoluto medido: 0x2268; confianca media)
    double& LastAttackTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +32, medido na build 25535041
    //  (offset absoluto medido: 0x2554; confianca alta)
    int& LastCameraAttachmentChangedIncrementField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +24, medido na build 25535041
    //  (offset absoluto medido: 0x254C; confianca alta)
    int& LastCapsuleAttachmentChangedIncrementField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2228; confianca media)
    double& LastCheckSevenField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +24, medido na build 25535041
    //  (offset absoluto medido: 0x2230; confianca media)
    double& LastCheckSevenHitField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraExtraVectorVar` +24, medido na build 25535041
    //  (offset absoluto medido: 0x1CA0; confianca media)
    void*& LastCheckSevenLocationField() const
    { return BrzCampoAncorado<void*>(this, "ExtraExtraVectorVar", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +48, medido na build 25535041
    //  (offset absoluto medido: 0x2248; confianca media)
    double& LastCheckSevenTeleportField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +32, medido na build 25535041
    //  (offset absoluto medido: 0x2238; confianca media)
    double& LastCheckSevenTransmissionField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +200, medido na build 25535041
    //  (offset absoluto medido: 0x22E0; confianca baixa)
    double& LastCollisionStuckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedRidingDino` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2084; confianca alta)
    TWeakObjectPtr<void>& LastControllerField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "SavedRidingDino", 16); }
    BrzCampoPonteiro LastDinoAimRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.LastDinoAimRotationOffset")); }
    double& LastDismountedByOtherNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastDismountedByOtherNetworkTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +168, medido na build 25535041
    //  (offset absoluto medido: 0x22C0; confianca baixa)
    double& LastEmotePlayTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +176, medido na build 25535041
    //  (offset absoluto medido: 0x22C8; confianca baixa)
    double& LastEmoteTryPlayTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +208, medido na build 25535041
    //  (offset absoluto medido: 0x22E8; confianca baixa)
    double& LastExpectedBaseTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 208); }
    APrimalProjectileBoomerang*& LastFiredBoomerangField() const
    { return *GetNativePointerField<APrimalProjectileBoomerang**>(this, "AShooterCharacter.LastFiredBoomerang"); }
    APrimalProjectileGrapplingHook*& LastFiredGrapHookField() const
    { return *GetNativePointerField<APrimalProjectileGrapplingHook**>(this, "AShooterCharacter.LastFiredGrapHook"); }
    UAudioComponent*& LastGrapHookACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.LastGrapHookAC"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedRidingDino` +24, medido na build 25535041
    //  (offset absoluto medido: 0x208C; confianca alta)
    TWeakObjectPtr<void>& LastGrappledToCharacterField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "SavedRidingDino", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +40, medido na build 25535041
    //  (offset absoluto medido: 0x2390; confianca media)
    double& LastIndoorCheckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +304, medido na build 25535041
    //  (offset absoluto medido: 0x2348; confianca baixa)
    void*& LastLocalUpdateCharsInRangeTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastTimeHadMountedWeaponAnim", 304); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +28, medido na build 25535041
    //  (offset absoluto medido: 0x2550; confianca alta)
    int& LastMeshAttachmentChangedIncrementField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +112, medido na build 25535041
    //  (offset absoluto medido: 0x2288; confianca media)
    void*& LastNetSoundPlayedTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastTimeHadMountedWeaponAnim", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +192, medido na build 25535041
    //  (offset absoluto medido: 0x22D8; confianca baixa)
    double& LastNotStuckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +184, medido na build 25535041
    //  (offset absoluto medido: 0x22D0; confianca baixa)
    double& LastPoopTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2370; confianca alta)
    double& LastPressReloadTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 8); }
    int& LastPushedDirectionField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastPushedDirection"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +288, medido na build 25535041
    //  (offset absoluto medido: 0x2338; confianca baixa)
    double& LastPushedTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 288); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2378; confianca alta)
    double& LastReleaseReloadTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +120, medido na build 25535041
    //  (offset absoluto medido: 0x2290; confianca media)
    double& LastReleaseSeatingStructureTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +24, medido na build 25535041
    //  (offset absoluto medido: 0x2380; confianca alta)
    double& LastReloadToggledAccessoryTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +312, medido na build 25535041
    //  (offset absoluto medido: 0x2350; confianca baixa)
    void*& LastRequestBallistaActionTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastTimeHadMountedWeaponAnim", 312); }
    int& LastRequestedTribeIDField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastRequestedTribeID"); }
    FString& LastRequestedTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterCharacter.LastRequestedTribeName"); }
    TWeakObjectPtr<void>& LastRequestedTribePlayerCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.LastRequestedTribePlayerCharacter"); }
    double& LastRequestedTribeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastRequestedTribeTime"); }
    TWeakObjectPtr<void>& LastSponsoredStructureStoreField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.LastSponsoredStructureStore"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraExtraVectorVar` +48, medido na build 25535041
    //  (offset absoluto medido: 0x1CB8; confianca media)
    void*& LastStasisCastPositionField() const
    { return BrzCampoAncorado<void*>(this, "ExtraExtraVectorVar", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +12, medido na build 25535041
    //  (offset absoluto medido: 0x24B8; confianca alta)
    float& LastSweepCapsuleHeightField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +16, medido na build 25535041
    //  (offset absoluto medido: 0x24BC; confianca alta)
    float& LastSweepCapsuleRadiusField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 16); }
    float& LastTaggedTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastTaggedTime"); }
    float& LastTaggedTimeExtraField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastTaggedTimeExtra"); }
    float& LastTaggedTimeThirdField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastTaggedTimeThird"); }
    double& LastTimeDestroyedWeaponField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastTimeDestroyedWeapon"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +272, medido na build 25535041
    //  (offset absoluto medido: 0x2328; confianca baixa)
    double& LastTimeDetectedSleepingAnimWhileAwakeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 272); }
    double& LastTimeHadControllerField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastTimeHadController"); }
    double& LastTimeHadMountedWeaponAnimField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastTimeHadMountedWeaponAnim"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +280, medido na build 25535041
    //  (offset absoluto medido: 0x2330; confianca baixa)
    double& LastTimeHadPreviousInterpolatedRootLocField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 280); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +56, medido na build 25535041
    //  (offset absoluto medido: 0x2250; confianca media)
    double& LastTimeInFallingField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +264, medido na build 25535041
    //  (offset absoluto medido: 0x2320; confianca baixa)
    double& LastTimeInThirdPersonField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 264); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +296, medido na build 25535041
    //  (offset absoluto medido: 0x2340; confianca baixa)
    double& LastTimeMulticastedAttachmentReplicationField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 296); }
    double& LastTimePushedField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastTimePushed"); }
    double& LastTimeStartedCrouchOrProneTransitionField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastTimeStartedCrouchOrProneTransition"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +160, medido na build 25535041
    //  (offset absoluto medido: 0x22B8; confianca baixa)
    double& LastTryAccessInventoryFailTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 160); }
    double& LastUncrouchTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastUncrouchTime"); }
    double& LastUnproneTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastUnproneTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +136, medido na build 25535041
    //  (offset absoluto medido: 0x22A0; confianca baixa)
    double& LastUpdatedAimActorsTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +216, medido na build 25535041
    //  (offset absoluto medido: 0x22F0; confianca baixa)
    double& LastUpdatedLocallyInterpolatedViewLocationXField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +232, medido na build 25535041
    //  (offset absoluto medido: 0x2300; confianca baixa)
    double& LastUpdatedLocallyInterpolatedViewLocationYField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 232); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +248, medido na build 25535041
    //  (offset absoluto medido: 0x2310; confianca baixa)
    double& LastUpdatedLocallyInterpolatedViewLocationZField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 248); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +88, medido na build 25535041
    //  (offset absoluto medido: 0x2270; confianca media)
    double& LastUseHarvestTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 88); }
    int& LastValidCharacterVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastValidCharacterVersion"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +40, medido na build 25535041
    //  (offset absoluto medido: 0x2240; confianca media)
    double& LastValidCheckSevenField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 40); }
    TWeakObjectPtr<void>& LastValidPlayerControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.LastValidPlayerController"); }
    BrzCampoPonteiro LeftHandIkTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.LeftHandIkTarget")); }
    unsigned long long& LinkedPlayerDataIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "AShooterCharacter.LinkedPlayerDataID"); }
    UParticleSystemComponent*& ListenServerBoundsPSCField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterCharacter.ListenServerBoundsPSC"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterCharacter.LocalCorpseEmitter"); }
    double& LocalDiedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.LocalDiedAtTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +104, medido na build 25535041
    //  (offset absoluto medido: 0x2280; confianca media)
    double& LocalLastViewingInventoryTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 104); }
    float& LocalUpdateCharsInRangeIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.LocalUpdateCharsInRangeInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +224, medido na build 25535041
    //  (offset absoluto medido: 0x22F8; confianca baixa)
    double& LocallyInterpolatedViewLocationXField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +240, medido na build 25535041
    //  (offset absoluto medido: 0x2308; confianca baixa)
    double& LocallyInterpolatedViewLocationYField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 240); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +256, medido na build 25535041
    //  (offset absoluto medido: 0x2318; confianca baixa)
    double& LocallyInterpolatedViewLocationZField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 256); }
    UAudioComponent*& LowHealthWarningPlayerField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.LowHealthWarningPlayer"); }
    USkeletalMeshComponent*& Mesh1PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.Mesh1P"); }
    float& MeshHeightAdjustmentField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.MeshHeightAdjustment"); }
    BrzCampoPonteiro MyMotionWarpingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.MyMotionWarpingComponent")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +8, medido na build 25535041
    //  (offset absoluto medido: 0x253C; confianca alta)
    void*& NetSoundSpamCountField() const
    { return BrzCampoAncorado<void*>(this, "LastPushedDirection", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +144, medido na build 25535041
    //  (offset absoluto medido: 0x22A8; confianca baixa)
    double& NextUpdateHyperThermalInsulationTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +152, medido na build 25535041
    //  (offset absoluto medido: 0x22B0; confianca baixa)
    double& NextUpdateHypoThermalInsulationTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 152); }
    //  no cache antigo este campo se chamava NextWeaponItemID.
    //  nesta build ele e' `PreInventoryWeaponItemNetID` — resolve por NOME.
    FItemNetID& NextWeaponItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreInventoryWeaponItemNetID"); }
    BrzCampoPonteiro NotifyOnWeaponEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.NotifyOnWeaponEquip")); }
    BrzCampoPonteiro NotifyWeaponEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.NotifyWeaponEquipped")); }
    BrzCampoPonteiro NotifyWeaponFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.NotifyWeaponFired")); }
    BrzCampoPonteiro NotifyWeaponUnequippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.NotifyWeaponUnequipped")); }
    TArray<UPrimalItem*>& OldItemSlotsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "AShooterCharacter.OldItemSlots"); }
    BrzCampoPonteiro OnFirstPersonCameraViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.OnFirstPersonCameraView")); }
    BrzCampoPonteiro OnThirdPersonCameraViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.OnThirdPersonCameraView")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +4, medido na build 25535041
    //  (offset absoluto medido: 0x24B0; confianca alta)
    float& OriginalCollisionHeightField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 4); }
    BrzCampoPonteiro OriginalHairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.OriginalHairColor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraExtraVectorVar` +120, medido na build 25535041
    //  (offset absoluto medido: 0x1D00; confianca media)
    void*& OriginalLastHitWallSweepCheckLocationField() const
    { return BrzCampoAncorado<void*>(this, "ExtraExtraVectorVar", 120); }
    TArray<void*>& OverrideAnimBlueprintsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterCharacter.OverrideAnimBlueprints"); }
    BrzCampoPonteiro OverrideDefaultWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.OverrideDefaultWeapon")); }
    BrzCampoPonteiro OverrideHandsSkeletalMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.OverrideHandsSkeletalMesh")); }
    float& PercentOfFullFacialHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.PercentOfFullFacialHairGrowth"); }
    float& PercentOfFullHeadHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.PercentOfFullHeadHairGrowth"); }
    BrzCampoPonteiro PlatformProfileIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.PlatformProfileID")); }
    FString& PlatformProfileNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlatformProfileName"); }
    int& PlayerBadgeGroupField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.PlayerBadgeGroup"); }
    int& PlayerHexagonCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.PlayerHexagonCount"); }
    FString& PlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlayerName"); }
    FString& PlayerTitleField() const
    { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlayerTitle"); }
    UPrimaryDataAsset*& Player_Voice_CollectionField() const
    { return *GetNativePointerField<UPrimaryDataAsset**>(this, "AShooterCharacter.Player_Voice_Collection"); }
    FItemNetID& PreInventoryWeaponItemNetIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreInventoryWeaponItemNetID"); }
    FItemNetID& PreMapWeaponItemNetIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreMapWeaponItemNetID"); }
    FItemNetID& PreRidingWeaponItemNetIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreRidingWeaponItemNetID"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraExtraVectorVar` +144, medido na build 25535041
    //  (offset absoluto medido: 0x1D18; confianca baixa)
    void*& PreviousInterpolatedRootLocField() const
    { return BrzCampoAncorado<void*>(this, "ExtraExtraVectorVar", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +8, medido na build 25535041
    //  (offset absoluto medido: 0x24B4; confianca alta)
    float& PreviousRootYawSpeedField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RightHandIkTarget` +112, medido na build 25535041
    //  (offset absoluto medido: 0x1C50; confianca media)
    void*& PreviousValidLocationsField() const
    { return BrzCampoAncorado<void*>(this, "RightHandIkTarget", 112); }
    UAnimMontage*& ProneInAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.ProneInAnim"); }
    UAnimMontage*& ProneOutAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.ProneOutAnim"); }
    FieldArray<float> RawBoneModifiersField() const
    { return { (void*)this, "AShooterCharacter.RawBoneModifiers" }; }
    UAnimMontage*& ReloadBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.ReloadBallistaAnimation"); }
    unsigned long long& RepDiscordUserIdField() const
    { return *GetNativePointerField<unsigned long long*>(this, "AShooterCharacter.RepDiscordUserId"); }
    UAnimationAsset*& ReplicatedSleepAnimField() const
    { return *GetNativePointerField<UAnimationAsset**>(this, "AShooterCharacter.ReplicatedSleepAnim"); }
    float& ReplicatedWeightField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.ReplicatedWeight"); }
    UAnimMontage*& RespawnIntroAnim1PField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.RespawnIntroAnim1P"); }
    TWeakObjectPtr<void>& RidingDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.RidingDino"); }
    BrzCampoPonteiro RightHandIkTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.RightHandIkTarget")); }
    double& SavedLastTimeHadControllerField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.SavedLastTimeHadController"); }
    int& SavedLastValidCharacterVersionField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.SavedLastValidCharacterVersion"); }
    TWeakObjectPtr<void>& SavedRidingDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.SavedRidingDino"); }
    BrzCampoPonteiro SavedSleepAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.SavedSleepAnim")); }
    TWeakObjectPtr<void>& SeatingStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.SeatingStructure"); }
    int& SeatingStructureSeatNumberField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter.SeatingStructureSeatNumber"); }
    float& ServerSeatedViewRotationPitchField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.ServerSeatedViewRotationPitch"); }
    float& ServerSeatedViewRotationYawField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.ServerSeatedViewRotationYaw"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPushedDirection` +20, medido na build 25535041
    //  (offset absoluto medido: 0x2548; confianca alta)
    int& SimulatedLastFrameProcessedForceUpdateAimedActorsField() const
    { return BrzCampoAncorado<int>(this, "LastPushedDirection", 20); }
    BrzCampoPonteiro SkillCooldownsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.SkillCooldowns")); }
    UAnimMontage*& SpawnIntroAnim1PField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.SpawnIntroAnim1P"); }
    TWeakObjectPtr<void>& SpawnedForControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterCharacter.SpawnedForController"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraNameVar` +8, medido na build 25535041
    //  (offset absoluto medido: 0x1E68; confianca alta)
    FName& SplitScreenCameraStyleOverrideField() const
    { return BrzCampoAncorado<FName>(this, "ExtraNameVar", 8); }
    unsigned int& SplitscreenMainPlayerUniqueNetIdTypeHashField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.SplitscreenMainPlayerUniqueNetIdTypeHash"); }
    UAnimMontage*& StartRidingAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.StartRidingAnim"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +64, medido na build 25535041
    //  (offset absoluto medido: 0x2258; confianca media)
    double& StartedRidingTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 64); }
    UAnimMontage*& StopRidingAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.StopRidingAnim"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +96, medido na build 25535041
    //  (offset absoluto medido: 0x2278; confianca media)
    double& StopRidingTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicOverrideHairDyeBytes` +109, medido na build 25535041
    //  (offset absoluto medido: 0x2628; confianca media)
    void*& StoredCooldownPerClassField() const
    { return BrzCampoAncorado<void*>(this, "DynamicOverrideHairDyeBytes", 109); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicOverrideHairDyeBytes` +29, medido na build 25535041
    //  (offset absoluto medido: 0x25D8; confianca media)
    void*& StoredCounterMapField() const
    { return BrzCampoAncorado<void*>(this, "DynamicOverrideHairDyeBytes", 29); }
    USkeletalMeshComponent*& SurvivorProfilePreviewMeshField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.SurvivorProfilePreviewMesh"); }
    float& TPVCameraExtraCollisionZOffsetField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.TPVCameraExtraCollisionZOffset"); }
    UAnimMontage*& TalkingAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.TalkingAnim"); }
    float& TargetingTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.TargetingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeHadMountedWeaponAnim` +72, medido na build 25535041
    //  (offset absoluto medido: 0x2260; confianca media)
    double& TimeSinceLastControllerField() const
    { return BrzCampoAncorado<double>(this, "LastTimeHadMountedWeaponAnim", 72); }
    BrzCampoPonteiro UnderwearOverrideMasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.UnderwearOverrideMasks")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicOverrideHairDyeBytes` +17, medido na build 25535041
    //  (offset absoluto medido: 0x25CC; confianca media)
    void*& UnderwearOverrideTagField() const
    { return BrzCampoAncorado<void*>(this, "DynamicOverrideHairDyeBytes", 17); }
    unsigned int& UniqueNetIdTypeHashField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.UniqueNetIdTypeHash"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraExtraVectorVar` +72, medido na build 25535041
    //  (offset absoluto medido: 0x1CD0; confianca media)
    void*& UpdateHyperThermalInsulationPositionField() const
    { return BrzCampoAncorado<void*>(this, "ExtraExtraVectorVar", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraExtraVectorVar` +96, medido na build 25535041
    //  (offset absoluto medido: 0x1CE8; confianca media)
    void*& UpdateHypoThermalInsulationPositionField() const
    { return BrzCampoAncorado<void*>(this, "ExtraExtraVectorVar", 96); }
    double& UploadEarliestValidTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterCharacter.UploadEarliestValidTime"); }
    float& VisualVelocitySizeWhenPushedField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.VisualVelocitySizeWhenPushed"); }
    UAnimMontage*& VoiceTalkingAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.VoiceTalkingAnim"); }
    float& WalkBobInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobInterpSpeed"); }
    float& WalkBobMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobMagnitude"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +48, medido na build 25535041
    //  (offset absoluto medido: 0x24DC; confianca media)
    float& WalkBobOldSpeedField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +36, medido na build 25535041
    //  (offset absoluto medido: 0x24D0; confianca media)
    float& WaterLossRateMultiplierField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 36); }
    BrzCampoPonteiro WeaponBobMagnitudesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.WeaponBobMagnitudes")); }
    BrzCampoPonteiro WeaponBobMagnitudes_TargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.WeaponBobMagnitudes_Targeting")); }
    float& WeaponBobMinimumSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobMinimumSpeed"); }
    BrzCampoPonteiro WeaponBobOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.WeaponBobOffsets")); }
    BrzCampoPonteiro WeaponBobOffsets_TargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.WeaponBobOffsets_Targeting")); }
    BrzCampoPonteiro WeaponBobPeriodsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.WeaponBobPeriods")); }
    BrzCampoPonteiro WeaponBobPeriods_TargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.WeaponBobPeriods_Targeting")); }
    float& WeaponBobSpeedBaseField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobSpeedBase"); }
    float& WeaponBobSpeedBaseFallingField() const
    { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobSpeedBaseFalling"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WeaponBobSpeedBaseFalling` +4, medido na build 25535041
    //  (offset absoluto medido: 0x2500; confianca alta)
    float& WeaponBobTargetingBlendField() const
    { return BrzCampoAncorado<float>(this, "WeaponBobSpeedBaseFalling", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WeaponBobSpeedBaseFalling` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2504; confianca alta)
    float& WeaponBobTimeField() const
    { return BrzCampoAncorado<float>(this, "WeaponBobSpeedBaseFalling", 8); }
    int& _GrapHookCableObjectCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterCharacter._GrapHookCableObjectCount"); }
    BrzCampoPonteiro bAllowDPCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bAllowDPC")); }
    BrzCampoPonteiro bDisableLookYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bDisableLookYaw")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastDismountedByOtherNetworkTime` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2040; confianca alta)
    void*& bDismountFromInputField() const
    { return BrzCampoAncorado<void*>(this, "LastDismountedByOtherNetworkTime", 8); }
    BrzCampoPonteiro bDrawHealthBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bDrawHealthBar")); }
    BrzCampoPonteiro bForceBuffAimOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bForceBuffAimOverride")); }
    BrzCampoPonteiro bForceDrawHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bForceDrawHUD")); }
    BrzCampoPonteiro bForceSeatingAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bForceSeatingAnim")); }
    BrzCampoPonteiro bGaveInitialItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bGaveInitialItems")); }
    BrzCampoPonteiro bHasBoneModifiersOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bHasBoneModifiersOverride")); }
    BrzCampoPonteiro bHasBoneModifiersOverride_UsingPlayerProportionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bHasBoneModifiersOverride_UsingPlayerProportions")); }
    BrzCampoPonteiro bHatHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bHatHidden")); }
    BrzCampoPonteiro bHideFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bHideFloatingHUD")); }
    BrzCampoPonteiro bIsAlternateShooterCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsAlternateShooterCharacter")); }
    BrzCampoPonteiro bIsClimbingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsClimbing")); }
    BrzCampoPonteiro bIsConnectedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsConnected")); }
    BrzCampoPonteiro bIsControllingBallistaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsControllingBallista")); }
    BrzCampoPonteiro bIsCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsCrafting")); }
    BrzCampoPonteiro bIsFastInventoryActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsFastInventoryActivated")); }
    BrzCampoPonteiro bIsHidingFPVMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsHidingFPVMesh")); }
    BrzCampoPonteiro bIsIndoorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsIndoors")); }
    BrzCampoPonteiro bIsOnSeatingStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsOnSeatingStructure")); }
    BrzCampoPonteiro bIsPilotingShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsPilotingShip")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicOverrideHairDyeBytes` +4, medido na build 25535041
    //  (offset absoluto medido: 0x25BF; confianca media)
    unsigned char& bIsPlayingSleepAnimField() const
    { return BrzCampoAncorado<unsigned char>(this, "DynamicOverrideHairDyeBytes", 4); }
    BrzCampoPonteiro bIsPressingRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsPressingRunning")); }
    BrzCampoPonteiro bIsPreviewCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsPreviewCharacter")); }
    BrzCampoPonteiro bIsRainWateredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsRainWatered")); }
    BrzCampoPonteiro bIsRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsRiding")); }
    BrzCampoPonteiro bIsServerAdminField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsServerAdmin")); }
    BrzCampoPonteiro bIsTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsTargeting")); }
    BrzCampoPonteiro bIsViewingInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bIsViewingInventory")); }
    BrzCampoPonteiro bLockedToSeatingStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bLockedToSeatingStructure")); }
    BrzCampoPonteiro bNeedsHairOrBodyUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bNeedsHairOrBodyUpdate")); }
    BrzCampoPonteiro bNoPhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bNoPhysics")); }
    BrzCampoPonteiro bNormalizeHeadPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bNormalizeHeadPosition")); }
    BrzCampoPonteiro bPlayFirstSpawnAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPlayFirstSpawnAnim")); }
    BrzCampoPonteiro bPlaySpawnAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPlaySpawnAnim")); }
    BrzCampoPonteiro bPlayingShieldCoverAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPlayingShieldCoverAnimation")); }
    BrzCampoPonteiro bPlayingShieldCoverAnimationForCrouchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPlayingShieldCoverAnimationForCrouch")); }
    BrzCampoPonteiro bPreventAllWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPreventAllWeapons")); }
    BrzCampoPonteiro bPreventLaunchMountedDinoWhileRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPreventLaunchMountedDinoWhileRiding")); }
    BrzCampoPonteiro bPreventShowHUDOnSpawnIntroCompletionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPreventShowHUDOnSpawnIntroCompletion")); }
    BrzCampoPonteiro bPreventWeaponMovementAnimsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bPreventWeaponMovementAnims")); }
    BrzCampoPonteiro bReceivedGenesisSeasonPassItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bReceivedGenesisSeasonPassItems")); }
    BrzCampoPonteiro bReleasingGrapHookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bReleasingGrapHook")); }
    BrzCampoPonteiro bSKDynamicMatsHaveBeenRecentlyChangedAndNeedUpdatingOnTheAnimbpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bSKDynamicMatsHaveBeenRecentlyChangedAndNeedUpdatingOnTheAnimbp")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SplitscreenMainPlayerUniqueNetIdTypeHash` +12, medido na build 25535041
    //  (offset absoluto medido: 0x2568; confianca alta)
    void*& bSetInitialControlPitchField() const
    { return BrzCampoAncorado<void*>(this, "SplitscreenMainPlayerUniqueNetIdTypeHash", 12); }
    BrzCampoPonteiro bShouldInvertTurnInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bShouldInvertTurnInput")); }
    BrzCampoPonteiro bStartedBossFightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bStartedBossFight")); }
    BrzCampoPonteiro bUseAlternateFallBlendspaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bUseAlternateFallBlendspace")); }
    BrzCampoPonteiro bUseBallistaAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bUseBallistaAimOffset")); }
    BrzCampoPonteiro bUseBallistaAimOffset_StandingTurretField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bUseBallistaAimOffset_StandingTurret")); }
    BrzCampoPonteiro bUseDefaultWeaponWhenOpeningInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bUseDefaultWeaponWhenOpeningInventory")); }
    BrzCampoPonteiro bWasProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterCharacter.bWasProne")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +60, medido na build 25535041
    //  (offset absoluto medido: 0x24E8; confianca media)
    float& fAutoMoveField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +64, medido na build 25535041
    //  (offset absoluto medido: 0x24EC; confianca media)
    float& fAutoStrafeField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForwardBindingAlpha` +68, medido na build 25535041
    //  (offset absoluto medido: 0x24F0; confianca media)
    float& fAutoTurnField() const
    { return BrzCampoAncorado<float>(this, "ForwardBindingAlpha", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastTimeStartedCrouchOrProneTransition` +32, medido na build 25535041
    //  (offset absoluto medido: 0x2388; confianca alta)
    double& lastSubmergedTimeField() const
    { return BrzCampoAncorado<double>(this, "LastTimeStartedCrouchOrProneTransition", 32); }
    BitFieldValue<bool, unsigned __int32> bIsTargeting()
    { return { (void*)this, "bIsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIsCrafting()
    { return { (void*)this, "bIsCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bIsRiding()
    { return { (void*)this, "bIsRiding" }; }
    BitFieldValue<bool, unsigned __int32> bIsIndoors()
    { return { (void*)this, "bIsIndoors" }; }
    BitFieldValue<bool, unsigned __int32> bIsClimbing()
    { return { (void*)this, "bIsClimbing" }; }
    BitFieldValue<bool, unsigned __int32> bIsViewingInventory()
    { return { (void*)this, "bIsViewingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseAlternateFallBlendspace()
    { return { (void*)this, "bUseAlternateFallBlendspace" }; }
    BitFieldValue<bool, unsigned __int32> bIsFemale()
    { return { (void*)this, "bIsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bPlaySpawnAnim()
    { return { (void*)this, "bPlaySpawnAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPlayFirstSpawnAnim()
    { return { (void*)this, "bPlayFirstSpawnAnim" }; }
    BitFieldValue<bool, unsigned __int32> bNoPhysics()
    { return { (void*)this, "bNoPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bPossessionDontUnsleep()
    { return { (void*)this, "bPossessionDontUnsleep" }; }
    BitFieldValue<bool, unsigned __int32> bLastViewingInventory()
    { return { (void*)this, "bLastViewingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bPlayedSpawnIntro()
    { return { (void*)this, "bPlayedSpawnIntro" }; }
    BitFieldValue<bool, unsigned __int32> bCheckPushedThroughWallsWasSeatingStructure()
    { return { (void*)this, "bCheckPushedThroughWallsWasSeatingStructure" }; }
    BitFieldValue<bool, unsigned __int32> bGaveInitialItems()
    { return { (void*)this, "bGaveInitialItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivedGenesisSeasonPassItems()
    { return { (void*)this, "bReceivedGenesisSeasonPassItems" }; }
    BitFieldValue<bool, unsigned __int32> bHadGrapHookAttachActor()
    { return { (void*)this, "bHadGrapHookAttachActor" }; }
    BitFieldValue<bool, unsigned __int32> bAddedToActivePlayerList()
    { return { (void*)this, "bAddedToActivePlayerList" }; }
    BitFieldValue<bool, unsigned __int32> bDrawHealthBar()
    { return { (void*)this, "bDrawHealthBar" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideHealthBarOffset()
    { return { (void*)this, "bBPOverrideHealthBarOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomHealthBarColor()
    { return { (void*)this, "bUseCustomHealthBarColor" }; }
    BitFieldValue<bool, unsigned __int32> bDisableLookYaw()
    { return { (void*)this, "bDisableLookYaw" }; }
    BitFieldValue<bool, unsigned __int32> bPlayingShieldCoverAnimation()
    { return { (void*)this, "bPlayingShieldCoverAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bPlayingShieldCoverAnimationForCrouch()
    { return { (void*)this, "bPlayingShieldCoverAnimationForCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bWasFirstPerson()
    { return { (void*)this, "bWasFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bLastLocInterpProne()
    { return { (void*)this, "bLastLocInterpProne" }; }
    BitFieldValue<bool, unsigned __int32> bLastLocInterpCrouched()
    { return { (void*)this, "bLastLocInterpCrouched" }; }
    BitFieldValue<bool, unsigned __int32> bHatHidden()
    { return { (void*)this, "bHatHidden" }; }
    BitFieldValue<bool, unsigned __int32> bBeganPlay()
    { return { (void*)this, "bBeganPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDPC()
    { return { (void*)this, "bAllowDPC" }; }
    BitFieldValue<bool, unsigned __int32> bHadWeaponWhenStartedClimbingLadder()
    { return { (void*)this, "bHadWeaponWhenStartedClimbingLadder" }; }
    BitFieldValue<bool, unsigned __int32> bIsConnected()
    { return { (void*)this, "bIsConnected" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshDefaultAttachmentsHadEquippedItems()
    { return { (void*)this, "bRefreshDefaultAttachmentsHadEquippedItems" }; }
    BitFieldValue<bool, unsigned __int32> bHasShooterCharacterTicked()
    { return { (void*)this, "bHasShooterCharacterTicked" }; }
    BitFieldValue<bool, unsigned __int32> bLockedToSeatingStructure()
    { return { (void*)this, "bLockedToSeatingStructure" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllWeapons()
    { return { (void*)this, "bPreventAllWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bForceBuffAimOverride()
    { return { (void*)this, "bForceBuffAimOverride" }; }
    BitFieldValue<bool, unsigned __int32> bIsHidingFPVMesh()
    { return { (void*)this, "bIsHidingFPVMesh" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingHUD()
    { return { (void*)this, "bHideFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUD()
    { return { (void*)this, "bForceDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceSeatingAnim()
    { return { (void*)this, "bForceSeatingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bIsPressingRunning()
    { return { (void*)this, "bIsPressingRunning" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyPlayerWeapons()
    { return { (void*)this, "bAutoDestroyPlayerWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bDebugCheckDinoPawnsOctree()
    { return { (void*)this, "bDebugCheckDinoPawnsOctree" }; }
    BitFieldValue<bool, unsigned __int32> bUseDefaultWeaponWhenOpeningInventory()
    { return { (void*)this, "bUseDefaultWeaponWhenOpeningInventory" }; }
    BitFieldValue<bool, unsigned __int32> bNeedsHairOrBodyUpdate()
    { return { (void*)this, "bNeedsHairOrBodyUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bSKDynamicMatsHaveBeenRecentlyChangedAndNeedUpdatingOnTheAnimbp()
    { return { (void*)this, "bSKDynamicMatsHaveBeenRecentlyChangedAndNeedUpdatingOnTheAnimbp" }; }
    BitFieldValue<bool, unsigned __int32> bHasBoneModifiersOverride()
    { return { (void*)this, "bHasBoneModifiersOverride" }; }
    BitFieldValue<bool, unsigned __int32> bHasBoneModifiersOverride_UsingPlayerProportions()
    { return { (void*)this, "bHasBoneModifiersOverride_UsingPlayerProportions" }; }
    BitFieldValue<bool, unsigned __int32> bIsAlternateShooterCharacter()
    { return { (void*)this, "bIsAlternateShooterCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsControllingBallista()
    { return { (void*)this, "bIsControllingBallista" }; }
    BitFieldValue<bool, unsigned __int32> bIsFastInventoryActivated()
    { return { (void*)this, "bIsFastInventoryActivated" }; }
    BitFieldValue<bool, unsigned __int32> bIsOnSeatingStructure()
    { return { (void*)this, "bIsOnSeatingStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIsPilotingShip()
    { return { (void*)this, "bIsPilotingShip" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewCharacter()
    { return { (void*)this, "bIsPreviewCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsRainWatered()
    { return { (void*)this, "bIsRainWatered" }; }
    BitFieldValue<bool, unsigned __int32> bIsServerAdmin()
    { return { (void*)this, "bIsServerAdmin" }; }
    BitFieldValue<bool, unsigned __int32> bNormalizeHeadPosition()
    { return { (void*)this, "bNormalizeHeadPosition" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLaunchMountedDinoWhileRiding()
    { return { (void*)this, "bPreventLaunchMountedDinoWhileRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventShowHUDOnSpawnIntroCompletion()
    { return { (void*)this, "bPreventShowHUDOnSpawnIntroCompletion" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWeaponMovementAnims()
    { return { (void*)this, "bPreventWeaponMovementAnims" }; }
    BitFieldValue<bool, unsigned __int32> bReleasingGrapHook()
    { return { (void*)this, "bReleasingGrapHook" }; }
    BitFieldValue<bool, unsigned __int32> bShouldInvertTurnInput()
    { return { (void*)this, "bShouldInvertTurnInput" }; }
    BitFieldValue<bool, unsigned __int32> bStartedBossFight()
    { return { (void*)this, "bStartedBossFight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffset()
    { return { (void*)this, "bUseBallistaAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffset_StandingTurret()
    { return { (void*)this, "bUseBallistaAimOffset_StandingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bWasProne()
    { return { (void*)this, "bWasProne" }; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    APrimalDinoCharacter* GetRidingDino() const
    { return (APrimalDinoCharacter*)GetNativeField<TWeakObjectPtr<void>>(this, "RidingDino").Get(); }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERCHARACTER_H
