// ==========================================================================
//  APrimalCharacter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALCHARACTER_H
#define BRZ_SDK_JOGO_APRIMALCHARACTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ABiomeZoneVolume;
struct APhysicsVolume;
struct APrimalBuff;
struct APrimalDinoCharacter;
struct APrimalProjectileGrapplingHook;
struct APrimalStructureExplosive;
struct AShooterCharacter;
struct FName;
struct UActorComponent;
struct UAnimMontage;
struct UAnimationAsset;
struct UAudioComponent;
struct UClass;
struct UMeshComponent;
struct UObject;
struct UPaintingTexture;
struct UParticleSystem;
struct UPrimalCharacterStatusComponent;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimitiveComponent;
struct USoundBase;
struct UStructurePaintingComponent;
struct UTexture2D;
struct UToolTipWidget;

#include "ACharacter.h"

struct APrimalCharacter : public ACharacter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalCharacter"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AddAdditionalDefaultBuffs(UWorld*,TArray<TSoftClassPtr<APrimalBuff>,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    void AddAdditionalDefaultBuffs(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.AddAdditionalDefaultBuffs(UWorld*,TArray<TSoftClassPtr<APrimalBuff>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.AddToCharactersGrappledToMe(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool AddToCharactersGrappledToMe(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.AddToCharactersGrappledToMe(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.AddTribeThreat(int)
    // endereco: casamento de bytes com a build de referencia
    int AddTribeThreat(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalCharacter.AddTribeThreat(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowColoringBy(APlayerController*,UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowColoringBy(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalCharacter.AllowColoringBy(APlayerController*,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowDinoTargetingRange(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.AllowDynamicMusic(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=32]]
    BrzPonteiro AllowDynamicMusic(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.AllowDynamicMusic(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowFallDamage(FHitResult&,float,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowFallDamage(void* a0, float a1, bool a2) const
    {
        return NativeCall<bool, void*, float, bool>(this, "APrimalCharacter.AllowFallDamage(FHitResult&,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowHurtAnimation()
    // endereco: casamento de bytes com a build de referencia
    bool AllowHurtAnimation() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowHurtAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowMovementMode(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    bool AllowMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<bool, int, unsigned char>(this, "APrimalCharacter.AllowMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowOverrideFlyingVelocity()
    // endereco: casamento de bytes com a build de referencia
    bool AllowOverrideFlyingVelocity() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideFlyingVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowOverrideNewFallVelocity()
    // endereco: cache_pdb_25090264
    bool AllowOverrideNewFallVelocity() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideNewFallVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowOverrideSwimmingAcceleration()
    // endereco: cache_pdb_25090264
    bool AllowOverrideSwimmingAcceleration() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideSwimmingAcceleration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowOverrideSwimmingVelocity()
    // endereco: cache_pdb_25090264
    bool AllowOverrideSwimmingVelocity() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideSwimmingVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowOverrideWalkingVelocity()
    // endereco: cache_pdb_25090264
    bool AllowOverrideWalkingVelocity() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideWalkingVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowParallelAnimations(USkeletalMeshComponent*)
    // endereco: cache_pdb_25090264
    bool AllowParallelAnimations(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.AllowParallelAnimations(USkeletalMeshComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.AllowPlayMontage(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool AllowPlayMontage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.AllowPlayMontage(UAnimMontage*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AllowSaving()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=99]]
    bool AllowSaving() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AllowSaving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNot
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,fl
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "APrimalCharacter.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAni
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AnimationPreventsInput()
    // endereco: casamento de bytes com a build de referencia
    bool AnimationPreventsInput() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.AnimationPreventsInput()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ApplyBiomeZoneBuff()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ApplyBiomeZoneBuff() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.ApplyBiomeZoneBuff()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshot(void* a0, void* a1, void* a2, float a3, int a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, float, int, bool, void*>(this, "APrimalCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool,FPrimalSnapshotPose*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshotEquipment(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshotEquipmentForItem(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalCharacter.ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ApplyCustomFallDamage(UE::Math::TVector<double>&,UE::Math::TVector<double>&,flo
    // endereco: casamento de bytes com a build de referencia
    void ApplyCustomFallDamage(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalCharacter.ApplyCustomFallDamage(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ApplyDamageMomentum(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ApplyHealthDamageOverlayToEquipment(EPrimalEquipmentType::Type,float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyHealthDamageOverlayToEquipment(int a0, float a1, int a2) const
    {
        return NativeCall<void*, int, float, int>(this, "APrimalCharacter.ApplyHealthDamageOverlayToEquipment(EPrimalEquipmentType::Type,float,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ApplyMaterailDamageEffect(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyMaterailDamageEffect(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalCharacter.ApplyMaterailDamageEffect(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AttachToOtherCharacter(APrimalCharacter*,FName,bool,EAttachLocation::Type)
    // endereco: thunk
    void AttachToOtherCharacter(void* a0, unsigned long long a1, bool a2, int a3) const
    {
        NativeCall<void, void*, unsigned long long, bool, int>(this, "APrimalCharacter.AttachToOtherCharacter(APrimalCharacter*,FName,bool,EAttachLocation::Type)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.AttachedToOtherCharacterUpdateWorldLocation(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void AttachedToOtherCharacterUpdateWorldLocation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.AttachedToOtherCharacterUpdateWorldLocation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPAddedAttachmentsForItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void BPAddedAttachmentsForItem(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPAddedAttachmentsForItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPAdjustCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAdjustCharacterMovementImpulse(void* a0, bool a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, float, bool>(this, "APrimalCharacter.BPAdjustCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPAdjustDamage(float,FDamageEvent,AController*,AActor*,bool,FHitResult)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=378+bytes40+chamadores=3]]
    float BPAdjustDamage(float a0, void* a1, void* a2, void* a3, bool a4, void* a5) const
    {
        return NativeCall<float, float, void*, void*, void*, bool, void*>(this, "APrimalCharacter.BPAdjustDamage(float,FDamageEvent,AController*,AActor*,bool,FHitResult)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPAdjustImpulseFromDamage(UE::Math::TVector<double>,float,FDamageEvent,APawn*,A
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAdjustImpulseFromDamage(void* a0, float a1, void* a2, void* a3, void* a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, bool, void*>(this, "APrimalCharacter.BPAdjustImpulseFromDamage(UE::Math::TVector<double>,float,FDamageEvent,APawn*,AActor*,bool,FHitResult)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPAdjustTorpidityDamage(float,float,TSubclassOf<UDamageType>)
    // endereco: casamento de bytes com a build de referencia
    float BPAdjustTorpidityDamage(float a0, float a1, void* a2) const
    {
        return NativeCall<float, float, float, void*>(this, "APrimalCharacter.BPAdjustTorpidityDamage(float,float,TSubclassOf<UDamageType>)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPAllowEncroachment(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    bool BPAllowEncroachment(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPAllowEncroachment(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPAllowMovementModeNoneFixes()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPAllowMovementModeNoneFixes() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPAllowMovementModeNoneFixes()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPAllowRunningWhileFalling()
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowRunningWhileFalling() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPAllowRunningWhileFalling()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=91+chamadores=2]]
    void BPAnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "APrimalCharacter.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UA
    // endereco: casamento de bytes com a build de referencia
    void BPAnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalCharacter.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,i
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPApplyCharacterSnapshot(void* a0, void* a1, void* a2, float a3, int a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, void*, float, int, bool>(this, "APrimalCharacter.BPApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPApplyPreviewData(USkeletalMeshComponent*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=2]]
    void BPApplyPreviewData(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPApplyPreviewData(USkeletalMeshComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPCameraBaseOrientation(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPCameraBaseOrientation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPCameraBaseOrientation(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPCameraRotationFinal(APrimalCharacter*,UE::Math::TRotator<double>&,float,FName
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCameraRotationFinal(void* a0, void* a1, float a2, unsigned long long a3) const
    {
        return NativeCall<void*, void*, void*, float, unsigned long long>(this, "APrimalCharacter.BPCameraRotationFinal(APrimalCharacter*,UE::Math::TRotator<double>&,float,FName)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPCanBaseOnCharacter(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPCanBaseOnCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPCanBaseOnCharacter(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPCanBeBaseForCharacter(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPCanBeBaseForCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPCanBeBaseForCharacter(APawn*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPCheckJumpInput(bool&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void BPCheckJumpInput(void* a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.BPCheckJumpInput(bool&,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPCheckJumpInput(void* a0, FString* a1) const
    { BPCheckJumpInput(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPCustomRequest(FName,int&,int,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCustomRequest(unsigned long long a0, void* a1, int a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, int, void*>(this, "APrimalCharacter.BPCustomRequest(FName,int&,int,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPDidTeleport()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPDidTeleport() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPDidTeleport()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPForceCameraStyle(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    unsigned char BPForceCameraStyle(void* a0) const
    {
        return NativeCall<unsigned char, void*>(this, "APrimalCharacter.BPForceCameraStyle(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetAddForwardVelocityOnJump()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    float BPGetAddForwardVelocityOnJump() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetAddForwardVelocityOnJump()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetApproachRadius()
    // endereco: cache_pdb_25090264
    float BPGetApproachRadius() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetApproachRadius()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetArmorDurabilityDecreaseMultiplier()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetArmorDurabilityDecreaseMultiplier() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetArmorDurabilityDecreaseMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetDebugInfoString()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPGetDebugInfoString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetExtraMeleeDamageModifier()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float BPGetExtraMeleeDamageModifier() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetExtraMeleeDamageModifier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetFPVViewLocation(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetFPVViewLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPGetFPVViewLocation(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetFinalMaxSpeed(float,float)
    // endereco: casamento de bytes com a build de referencia
    float BPGetFinalMaxSpeed(float a0, float a1) const
    {
        return NativeCall<float, float, float>(this, "APrimalCharacter.BPGetFinalMaxSpeed(float,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetGravityZScale()
    // endereco: casamento de bytes com a build de referencia
    float BPGetGravityZScale() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetGravityZScale()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent()
    // endereco: casamento de bytes com a build de referencia
    float BPGetHUDOverrideBuffProgressBarPercent() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPGetOverrideCameraInterpSpeed(float,float,float&,float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGetOverrideCameraInterpSpeed(float a0, float a1, void* a2, void* a3) const
    {
        NativeCall<void, float, float, void*, void*>(this, "APrimalCharacter.BPGetOverrideCameraInterpSpeed(float,float,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPGetSignificanceBasedAnimationBlend()
    // endereco: cache_pdb_25090264
    float BPGetSignificanceBasedAnimationBlend() const
    {
        return NativeCall<float>(this, "APrimalCharacter.BPGetSignificanceBasedAnimationBlend()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPHandleLeftShoulderButton()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPHandleLeftShoulderButton() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPHandleLeftShoulderButton()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPHandlePoop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPHandlePoop() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPHandlePoop()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPHandleRightShoulderButton()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPHandleRightShoulderButton() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPHandleRightShoulderButton()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPHasPlayerController()
    // endereco: cache_pdb_25090264
    bool BPHasPlayerController() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPHasPlayerController()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPInterceptAttemptedCarriedBy(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool BPInterceptAttemptedCarriedBy(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPInterceptAttemptedCarriedBy(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPIsBasedOnDynamicActor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=55]]
    bool BPIsBasedOnDynamicActor() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPIsBasedOnDynamicActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPIsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPIsBlockedByShield(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalCharacter.BPIsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPLimitPlayerRotation(APrimalCharacter*,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPLimitPlayerRotation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.BPLimitPlayerRotation(APrimalCharacter*,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPLocalPossessedBy(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPLocalPossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPLocalPossessedBy(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPModifyFOV(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPModifyFOV(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOV(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPModifyFOVInterpSpeed(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    float BPModifyFOVInterpSpeed(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOVInterpSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPModifyFOV_Implementation(float)
    // endereco: cache_pdb_25090264
    float BPModifyFOV_Implementation(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOV_Implementation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPModifyForwardDirectionInput(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=179]]
    BrzPonteiro BPModifyForwardDirectionInput(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPModifyForwardDirectionInput(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPModifyRightDirectionInput(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=179]]
    BrzPonteiro BPModifyRightDirectionInput(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPModifyRightDirectionInput(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPModifyRightDirectionInput_Implementation(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPModifyRightDirectionInput_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPModifyRightDirectionInput_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPModifyViewHitDir(APrimalCharacter*,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPModifyViewHitDir(void* a0, float a1) const
    {
        return NativeCall<float, void*, float>(this, "APrimalCharacter.BPModifyViewHitDir(APrimalCharacter*,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPModifyXPMultiplier(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPModifyXPMultiplier(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalCharacter.BPModifyXPMultiplier(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPNetAddCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool,EMov
    // endereco: thunk
    void BPNetAddCharacterMovementImpulse(void* a0, bool a1, float a2, bool a3, int a4, bool a5, bool a6) const
    {
        NativeCall<void, void*, bool, float, bool, int, bool, bool>(this, "APrimalCharacter.BPNetAddCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool,EMovementMode,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPNetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovement
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    void BPNetSetCharacterMovementVelocity(bool a0, void* a1, bool a2, int a3) const
    {
        NativeCall<void, bool, void*, bool, int>(this, "APrimalCharacter.BPNetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMode)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool a0, void* a1, bool a2, int a3, void* a4) const
    {
        return NativeCall<void*, bool, void*, bool, int, void*>(this, "APrimalCharacter.BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool,UE::Math::TVector<double>,bool,EMovementMode,UE::Math::TVector<double>)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPNetSetMovementMode(EMovementMode)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPNetSetMovementMode(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalCharacter.BPNetSetMovementMode(EMovementMode)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyBPNotifyIsDamageCauserOfAddedBuff(APrimalBuff*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyBPNotifyIsDamageCauserOfAddedBuff(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPNotifyBPNotifyIsDamageCauserOfAddedBuff(APrimalBuff*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyBumpedByPawn(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyBumpedByPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPNotifyBumpedByPawn(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyBumpedPawn(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyBumpedPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPNotifyBumpedPawn(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyDroppedItemPickedUp(ADroppedItem*,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyDroppedItemPickedUp(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.BPNotifyDroppedItemPickedUp(ADroppedItem*,APrimalCharacter*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyInventoryItemChange(bool,UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyInventoryItemChange(bool a0, void* a1, bool a2) const
    {
        NativeCall<void, bool, void*, bool>(this, "APrimalCharacter.BPNotifyInventoryItemChange(bool,UPrimalItem*,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyLevelUp(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyLevelUp(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.BPNotifyLevelUp(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyOnBuffAdded(APrimalBuff*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyOnBuffAdded(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPNotifyOnBuffAdded(APrimalBuff*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPNotifyToggleHUD(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyToggleHUD(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.BPNotifyToggleHUD(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnAnimPlayedNotify(UAnimMontage*,float,FName,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void BPOnAnimPlayedNotify(void* a0, float a1, unsigned long long a2, bool a3, bool a4, bool a5, bool a6) const
    {
        NativeCall<void, void*, float, unsigned long long, bool, bool, bool, bool>(this, "APrimalCharacter.BPOnAnimPlayedNotify(UAnimMontage*,float,FName,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOnAttachmentReplication()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPOnAttachmentReplication() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPOnAttachmentReplication()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOnGrapHookStartPullingMe()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPOnGrapHookStartPullingMe() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPOnGrapHookStartPullingMe()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOnGrapHookStopPullingMe()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnGrapHookStopPullingMe() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPOnGrapHookStopPullingMe()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnImmobilize(bool,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnImmobilize(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "APrimalCharacter.BPOnImmobilize(bool,AActor*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnLethalDamage(float,FDamageEvent&,AController*,AActor*,bool&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnLethalDamage(float a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, float, void*, void*, void*, void*>(this, "APrimalCharacter.BPOnLethalDamage(float,FDamageEvent&,AController*,AActor*,bool&)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnMassTeleportEvent(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalCharacter.BPOnMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOnMovementModeChangedNotify(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnMovementModeChangedNotify(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "APrimalCharacter.BPOnMovementModeChangedNotify(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnNearbyCharacterDied(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, float, void*, void*, void*>(this, "APrimalCharacter.BPOnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnPoopItemEmitted(ADroppedItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnPoopItemEmitted(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPOnPoopItemEmitted(ADroppedItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOnSimulatedTick(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnSimulatedTick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.BPOnSimulatedTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPOnStaminaDrained()
    // endereco: casamento de bytes com a build de referencia
    void BPOnStaminaDrained() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPOnStaminaDrained()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCameraArmLength(FPrimalCameraParams&,float,float&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=256+bytes40+grafo=6/6]]
    BrzPonteiro BPOverrideCameraArmLength(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalCharacter.BPOverrideCameraArmLength(FPrimalCameraParams&,float,float&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPOverrideCameraArmLengthInterpParams(FPrimalCameraParams&,FPrimalCameraInterpP
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideCameraArmLengthInterpParams(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalCharacter.BPOverrideCameraArmLengthInterpParams(FPrimalCameraParams&,FPrimalCameraInterpParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>,UE::Math::TVecto
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCameraDesiredPivotLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCameraDesiredPivotOffset(FPrimalCameraParams&,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideCameraDesiredPivotOffset(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.BPOverrideCameraDesiredPivotOffset(FPrimalCameraParams&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCameraPivotLocationInterpParams(FPrimalCameraParams&,FPrimalCameraPiv
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideCameraPivotLocationInterpParams(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalCharacter.BPOverrideCameraPivotLocationInterpParams(FPrimalCameraParams&,FPrimalCameraPivotZInterpOverrides&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCharacterNewFallVelocity(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalCharacter.BPOverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCharacterNewSwimVelocity(UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCharacterNewSwimVelocity(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float>(this, "APrimalCharacter.BPOverrideCharacterNewSwimVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPOverrideCharacterParticle_Implementation(UParticleSystem*)
    // endereco: casamento de bytes com a build de referencia
    UParticleSystem* BPOverrideCharacterParticle_Implementation(void* a0) const
    {
        return NativeCall<UParticleSystem*, void*>(this, "APrimalCharacter.BPOverrideCharacterParticle_Implementation(UParticleSystem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOverrideCharacterSound(USoundBase*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPOverrideCharacterSound(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalCharacter.BPOverrideCharacterSound(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPOverrideCharacterSound_Implementation(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    USoundBase* BPOverrideCharacterSound_Implementation(void* a0) const
    {
        return NativeCall<USoundBase*, void*>(this, "APrimalCharacter.BPOverrideCharacterSound_Implementation(USoundBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCurrentCameraProfile(FPrimalCameraProfile&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideCurrentCameraProfile(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPOverrideCurrentCameraProfile(FPrimalCameraProfile&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideCurrentCameraProfileId(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideCurrentCameraProfileId(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPOverrideCurrentCameraProfileId(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPOverrideCurrentCameraProfileId(FName* a0) const
    { return BPOverrideCurrentCameraProfileId(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideDamageCauserHitMarker(AShooterPlayerController*,bool,float,float,FDam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideDamageCauserHitMarker(void* a0, bool a1, float a2, float a3, void* a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, bool, float, float, void*, bool, void*>(this, "APrimalCharacter.BPOverrideDamageCauserHitMarker(AShooterPlayerController*,bool,float,float,FDamageEvent&,bool,FHitResult&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOverrideFPVViewLocation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideFPVViewLocation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPOverrideFPVViewLocation(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOverrideHeldItemSlot(int)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideHeldItemSlot(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.BPOverrideHeldItemSlot(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverrideHurtAnim(float,FDamageEvent&,APawn*,AActor*,bool,bool,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideHurtAnim(float a0, void* a1, void* a2, void* a3, bool a4, bool a5, void* a6, void* a7) const
    {
        return NativeCall<void*, float, void*, void*, void*, bool, bool, void*, void*>(this, "APrimalCharacter.BPOverrideHurtAnim(float,FDamageEvent&,APawn*,AActor*,bool,bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOverrideInventoryAccessInput()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPOverrideInventoryAccessInput() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPOverrideInventoryAccessInput()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOverridePhysicsImpulses(float,UPrimalCharacterMovement*)
    // endereco: casamento de bytes com a build de referencia
    void BPOverridePhysicsImpulses(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "APrimalCharacter.BPOverridePhysicsImpulses(float,UPrimalCharacterMovement*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPOverridePlayAnimExMontage(UAnimMontage*,bool)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPOverridePlayAnimExMontage(void* a0, bool a1) const
    {
        return NativeCall<UObject*, void*, bool>(this, "APrimalCharacter.BPOverridePlayAnimExMontage(UAnimMontage*,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPOverridePrimalCameraInterpMultiplier(float,int,float&)
    // endereco: casamento de bytes com a build de referencia
    void BPOverridePrimalCameraInterpMultiplier(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "APrimalCharacter.BPOverridePrimalCameraInterpMultiplier(float,int,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPOverridePrimalCameraParams(FPrimalCameraParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverridePrimalCameraParams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.BPOverridePrimalCameraParams(FPrimalCameraParams&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPOverrideReleaseItemSlot(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOverrideReleaseItemSlot(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.BPOverrideReleaseItemSlot(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BPOverrideUseItemSlot(int)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideUseItemSlot(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.BPOverrideUseItemSlot(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPPlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalCharacter.BPPlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPPlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,FHitResult)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPPlayHitEffect(float a0, void* a1, void* a2, void* a3, bool a4, void* a5) const
    {
        return NativeCall<void*, float, void*, void*, void*, bool, void*>(this, "APrimalCharacter.BPPlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,FHitResult)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreSerializeSaveGame()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPPreSerializeSaveGame() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPPreSerializeSaveGame()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventCombatMusic()
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventCombatMusic() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPPreventCombatMusic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPPreventFallDamage(FHitResult&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPPreventFallDamage(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalCharacter.BPPreventFallDamage(FHitResult&,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventFirstPerson()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPPreventFirstPerson() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPPreventFirstPerson()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventForceTriggerIgnoredTrapClass(TSubclassOf<APrimalStructure>)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventForceTriggerIgnoredTrapClass(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPPreventForceTriggerIgnoredTrapClass(TSubclassOf<APrimalStructure>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BPPreventInputType(EPrimalCharacterInputType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BPPreventInputType(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalCharacter.BPPreventInputType(EPrimalCharacterInputType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventNotifySound(USoundBase*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPPreventNotifySound(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BPPreventNotifySound(USoundBase*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventPinging(bool,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventPinging(bool a0, void* a1) const
    {
        return NativeCall<bool, bool, void*>(this, "APrimalCharacter.BPPreventPinging(bool,APlayerController*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventRunning()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPPreventRunning() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPPreventRunning()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventStasis()
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventStasis() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPPreventStasis()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPPreventStructurePlacement(APlayerController*,APrimalStructure*,FName)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventStructurePlacement(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<bool, void*, void*, unsigned long long>(this, "APrimalCharacter.BPPreventStructurePlacement(APlayerController*,APrimalStructure*,FName)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPRemovedAsPassenger(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPRemovedAsPassenger(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPRemovedAsPassenger(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPRemovedAttachmentsForItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void BPRemovedAttachmentsForItem(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPRemovedAttachmentsForItem(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BPSetCharacterMeshesMaterialScalarParamValue(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void BPSetCharacterMeshesMaterialScalarParamValue(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "APrimalCharacter.BPSetCharacterMeshesMaterialScalarParamValue(FName,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPSetLastDamageEventInstigator(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=64]]
    void BPSetLastDamageEventInstigator(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BPSetLastDamageEventInstigator(AController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPShouldLimitForwardDirection()
    // endereco: cache_pdb_25090264
    bool BPShouldLimitForwardDirection() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitForwardDirection()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPShouldLimitRightDirection()
    // endereco: cache_pdb_25090264
    bool BPShouldLimitRightDirection() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitRightDirection()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPSkipMovementOptimization()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPSkipMovementOptimization() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BPSkipMovementOptimization()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPSuicide()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void BPSuicide() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPSuicide()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPTimerNonDedicated()
    // endereco: cache_pdb_25090264
    void BPTimerNonDedicated() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPTimerNonDedicated()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPTimerServer()
    // endereco: cache_pdb_25090264
    void BPTimerServer() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPTimerServer()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BPTriggerStasisEvent()
    // endereco: casamento de bytes com a build de referencia
    void BPTriggerStasisEvent() const
    {
        NativeCall<void>(this, "APrimalCharacter.BPTriggerStasisEvent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BP_Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro BP_Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalCharacter.BP_Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_ForceAllowAddBuff(TSubclassOf<APrimalBuff>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BP_ForceAllowAddBuff(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.BP_ForceAllowAddBuff(TSubclassOf<APrimalBuff>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_IsCharacterHardAttached(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BP_IsCharacterHardAttached(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "APrimalCharacter.BP_IsCharacterHardAttached(bool,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BP_ModifyInputAcceleration(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BP_ModifyInputAcceleration(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.BP_ModifyInputAcceleration(UE::Math::TVector<double>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BP_OnCameraStyleChangedNotify(FName&,FName&)
    // endereco: casamento de bytes com a build de referencia
    void BP_OnCameraStyleChangedNotify(const FName& a0, const FName& a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.BP_OnCameraStyleChangedNotify(FName&,FName&)", const_cast<FName*>(&a0), const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BP_OnCameraStyleChangedNotify(FName* a0, FName* a1) const
    { BP_OnCameraStyleChangedNotify(*a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_OnJumpPressed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BP_OnJumpPressed() const
    {
        NativeCall<void>(this, "APrimalCharacter.BP_OnJumpPressed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_OnJumpReleased()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BP_OnJumpReleased() const
    {
        NativeCall<void>(this, "APrimalCharacter.BP_OnJumpReleased()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_OnSetDeath()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BP_OnSetDeath() const
    {
        NativeCall<void>(this, "APrimalCharacter.BP_OnSetDeath()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_OnZoomInOrbitCam()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BP_OnZoomInOrbitCam() const
    {
        NativeCall<void>(this, "APrimalCharacter.BP_OnZoomInOrbitCam()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BP_OverrideCameraTargetOriginLocation(UE::Math::TVector<double>&,FName)
    // endereco: casamento de bytes com a build de referencia
    void BP_OverrideCameraTargetOriginLocation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalCharacter.BP_OverrideCameraTargetOriginLocation(UE::Math::TVector<double>&,FName)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BP_ShouldDisableCameraInterpolation()
    // endereco: casamento de bytes com a build de referencia
    bool BP_ShouldDisableCameraInterpolation() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BP_ShouldDisableCameraInterpolation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalCharacter.BeginPlay()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.BlueprintAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*
    // endereco: casamento de bytes com a build de referencia
    void BlueprintAnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalCharacter.BlueprintAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.BuffsInterceptItemSlotUse(int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BuffsInterceptItemSlotUse(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "APrimalCharacter.BuffsInterceptItemSlotUse(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.BuffsPreventImmobilization()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=116]]
    bool BuffsPreventImmobilization() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BuffsPreventImmobilization()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.BuffsPreventInventoryAccess()
    // endereco: cache_pdb_25090264
    bool BuffsPreventInventoryAccess() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.BuffsPreventInventoryAccess()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CacheDynamicBaseValues()
    // endereco: casamento de bytes com a build de referencia
    void CacheDynamicBaseValues() const
    {
        NativeCall<void>(this, "APrimalCharacter.CacheDynamicBaseValues()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.CallDrawFloatingHUD(AShooterHUD*)
    // endereco: cache_pdb_25090264
    void CallDrawFloatingHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.CallDrawFloatingHUD(AShooterHUD*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.CallDrawHUD(AShooterHUD*)
    // endereco: cache_pdb_25090264
    void CallDrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.CallDrawHUD(AShooterHUD*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.CameraCheckIsMoving(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    bool CameraCheckIsMoving(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.CameraCheckIsMoving(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.CameraCheckIsRunning(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool CameraCheckIsRunning(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.CameraCheckIsRunning(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CameraProbeModeNext()
    // endereco: casamento de bytes com a build de referencia
    void CameraProbeModeNext() const
    {
        NativeCall<void>(this, "APrimalCharacter.CameraProbeModeNext()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanBeBaseForCharacter(APawn*)
    // endereco: casamento de bytes com a build de referencia
    bool CanBeBaseForCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.CanBeBaseForCharacter(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanBeCarried(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanBeCarried(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.CanBeCarried(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanBeDragged()
    // endereco: casamento de bytes com a build de referencia
    bool CanBeDragged() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CanBeDragged()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.CanBeImmobilized()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanBeImmobilized() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CanBeImmobilized()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanBePainted()
    // endereco: casamento de bytes com a build de referencia
    bool CanBePainted() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CanBePainted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanBeTargetedBy(ITargetableInterface*)
    // endereco: cache_pdb_25090264
    bool CanBeTargetedBy(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.CanBeTargetedBy(ITargetableInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanDie(float,FDamageEvent&,AController*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=109+grafo=3/3]]
    bool CanDie(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalCharacter.CanDie(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanDragCharacter(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanDragCharacter(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalCharacter.CanDragCharacter(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure>,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool CanIgnoreImmobilizationTrap(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalCharacter.CanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure>,bool&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanJumpInternal_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool CanJumpInternal_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CanJumpInternal_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanMountOnMe(APrimalDinoCharacter*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanMountOnMe(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalCharacter.CanMountOnMe(APrimalDinoCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanMoveThroughActor_Implementation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool CanMoveThroughActor_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.CanMoveThroughActor_Implementation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.CanPlayFootstepInMovementMode(EMovementMode)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanPlayFootstepInMovementMode(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalCharacter.CanPlayFootstepInMovementMode(EMovementMode)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CanProne()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanProne() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CanProne()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.CanUseCameraSettings(FPrimalCameraSettingsConditions&,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseCameraSettings(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.CanUseCameraSettings(FPrimalCameraSettingsConditions&,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CaptureCharacterSnapshot(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void CaptureCharacterSnapshot(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.CaptureCharacterSnapshot(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ChangeActorTeam(int)
    // endereco: casamento de bytes com a build de referencia
    void ChangeActorTeam(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.ChangeActorTeam(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.CharacterIsCarriedAsPassenger()
    // endereco: casamento de bytes com a build de referencia
    bool CharacterIsCarriedAsPassenger() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CharacterIsCarriedAsPassenger()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CheckBasedOnDino()
    // endereco: casamento de bytes com a build de referencia
    void CheckBasedOnDino() const
    {
        NativeCall<void>(this, "APrimalCharacter.CheckBasedOnDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CheckJumpInput(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=853+grafo=14/14]]
    void CheckJumpInput(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.CheckJumpInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CheckJumpOutOfWater()
    // endereco: casamento de bytes com a build de referencia
    bool CheckJumpOutOfWater() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.CheckJumpOutOfWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CheckRagdollPenetration()
    // endereco: casamento de bytes com a build de referencia
    void CheckRagdollPenetration() const
    {
        NativeCall<void>(this, "APrimalCharacter.CheckRagdollPenetration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CheckRegisterCharacterMesh()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=802+grafo=6/6]]
    void CheckRegisterCharacterMesh() const
    {
        NativeCall<void>(this, "APrimalCharacter.CheckRegisterCharacterMesh()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ClearBasedCharacters()
    // endereco: casamento de bytes com a build de referencia
    void ClearBasedCharacters() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClearBasedCharacters()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClearBiomeZoneVolume(ABiomeZoneVolume*)
    // endereco: casamento de bytes com a build de referencia
    void ClearBiomeZoneVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ClearBiomeZoneVolume(ABiomeZoneVolume*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClearCachedIkTraceResults()
    // endereco: casamento de bytes com a build de referencia
    void ClearCachedIkTraceResults() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClearCachedIkTraceResults()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClearMountedDino(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearMountedDino(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalCharacter.ClearMountedDino(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClearMovementTether()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=63+chamadores=3]]
    void ClearMovementTether() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClearMovementTether()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClearRagdollPhysics()
    // endereco: casamento de bytes com a build de referencia
    void ClearRagdollPhysics() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClearRagdollPhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientCheatFly_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientCheatFly_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientCheatFly_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientCheatWalk_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientCheatWalk_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientCheatWalk_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ClientDidPoop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientDidPoop() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientDidPoop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientDidPoop_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientDidPoop_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientDidPoop_Implementation()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalCharacter.ClientEndRagdollUpdate_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=159]]
    void ClientEndRagdollUpdate_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientEndRagdollUpdate_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ClientFailedPoop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ClientFailedPoop() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientFailedPoop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientFailedPoop_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ClientFailedPoop_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientFailedPoop_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientHandleNetDestroy()
    // endereco: casamento de bytes com a build de referencia
    void ClientHandleNetDestroy() const
    {
        NativeCall<void>(this, "APrimalCharacter.ClientHandleNetDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalCharacter.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientOrderedAttackTarget_Implementation(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ClientOrderedAttackTarget_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ClientOrderedAttackTarget_Implementation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientOrderedMoveTo_Implementation(UE::Math::TVector<double>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=380+grafo=3/3]]
    void ClientOrderedMoveTo_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ClientOrderedMoveTo_Implementation(UE::Math::TVector<double>)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.ClientPlayAnimation(UAnimMontage*,float,FName,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientPlayAnimation(void* a0, float a1, unsigned long long a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, float, unsigned long long, bool, bool, bool>(this, "APrimalCharacter.ClientPlayAnimation(UAnimMontage*,float,FName,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // dump_sobre_sdk_287a0
    //   APrimalCharacter.ClientPlayAnimation_Implementation(UAnimMontage*,float,FName,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientPlayAnimation_Implementation(void* a0, float a1, unsigned long long a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, float, unsigned long long, bool, bool, bool>(this, "APrimalCharacter.ClientPlayAnimation_Implementation(UAnimMontage*,float,FName,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.ClientSetNextAnimMontageSection(UAnimMontage*,FName,FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetNextAnimMontageSection(void* a0, unsigned long long a1, unsigned long long a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long, bool, bool>(this, "APrimalCharacter.ClientSetNextAnimMontageSection(UAnimMontage*,FName,FName,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ClientSetNextAnimMontageSection_Implementation(UAnimMontage*,FName,FName,bool,b
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    BrzPonteiro ClientSetNextAnimMontageSection_Implementation(void* a0, unsigned long long a1, unsigned long long a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, unsigned long long, unsigned long long, bool, bool>(this, "APrimalCharacter.ClientSetNextAnimMontageSection_Implementation(UAnimMontage*,FName,FName,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.ClientStopAnimation(UAnimMontage*,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void ClientStopAnimation(void* a0, bool a1, float a2) const
    {
        NativeCall<void, void*, bool, float>(this, "APrimalCharacter.ClientStopAnimation(UAnimMontage*,bool,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ClientStopAnimation_Implementation(UAnimMontage*,bool,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    void ClientStopAnimation_Implementation(void* a0, bool a1, float a2) const
    {
        NativeCall<void, void*, bool, float>(this, "APrimalCharacter.ClientStopAnimation_Implementation(UAnimMontage*,bool,float)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.ClientSyncAnimation(UAnimMontage*,float,float,bool,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientSyncAnimation(void* a0, float a1, float a2, bool a3, float a4, float a5, bool a6) const
    {
        NativeCall<void, void*, float, float, bool, float, float, bool>(this, "APrimalCharacter.ClientSyncAnimation(UAnimMontage*,float,float,bool,float,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // dump_sobre_sdk_287a0
    //   APrimalCharacter.ClientSyncAnimation_Implementation(UAnimMontage*,float,float,bool,float,float,b
    // endereco: casamento de bytes com a build de referencia
    void ClientSyncAnimation_Implementation(void* a0, float a1, float a2, bool a3, float a4, float a5, bool a6) const
    {
        NativeCall<void, void*, float, float, bool, float, float, bool>(this, "APrimalCharacter.ClientSyncAnimation_Implementation(UAnimMontage*,float,float,bool,float,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ConditionallySetRunningIfAuthority(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ConditionallySetRunningIfAuthority(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.ConditionallySetRunningIfAuthority(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ConsumeProjectileImpact(AShooterProjectile*,FHitResult&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=174]]
    bool ConsumeProjectileImpact(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalCharacter.ConsumeProjectileImpact(AShooterProjectile*,FHitResult&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void ControlRigNotify(unsigned long long a0, unsigned long long a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, unsigned long long, void*, void*>(this, "APrimalCharacter.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ControllerLeavingGame(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ControllerLeavingGame(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ControllerLeavingGame(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.CreateSnapshotComponent(AActor*,UObject*,FName,FName)
    // endereco: casamento de bytes com a build de referencia
    static UActorComponent* CreateSnapshotComponent(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
    {
        return NativeCall<UActorComponent*, void*, void*, unsigned long long, unsigned long long>(nullptr, "APrimalCharacter.CreateSnapshotComponent(AActor*,UObject*,FName,FName)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Crouch(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void Crouch(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.Crouch(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DeactivateBuffs(TSubclassOf<APrimalBuff>,UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void DeactivateBuffs(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void**, void*, bool>(this, "APrimalCharacter.DeactivateBuffs(TSubclassOf<APrimalBuff>,UPrimalItem*,bool)", &a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DeathHarvestingFadeOut_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void DeathHarvestingFadeOut_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.DeathHarvestingFadeOut_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.Destroy(bool,bool)
    // classe: a funcao mora em AActor, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Destroy(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "AActor.Destroy(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DestroyByMeshing()
    // endereco: casamento de bytes com a build de referencia
    void DestroyByMeshing() const
    {
        NativeCall<void>(this, "APrimalCharacter.DestroyByMeshing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.DestroyOutsideWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DestroyOutsideWorld() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.DestroyOutsideWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalCharacter.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DetachFromOtherCharacter(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    void DetachFromOtherCharacter(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.DetachFromOtherCharacter(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DidLand()
    // endereco: casamento de bytes com a build de referencia
    void DidLand() const
    {
        NativeCall<void>(this, "APrimalCharacter.DidLand()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.DidTeleport(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FLinearCo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DidTeleport(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "APrimalCharacter.DidTeleport(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FLinearColor)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DidTeleport_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>
    // endereco: casamento de bytes com a build de referencia
    void DidTeleport_Implementation(void* a0, void* a1, bool a2, void* a3) const
    {
        NativeCall<void, void*, void*, bool, void*>(this, "APrimalCharacter.DidTeleport_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FLinearColor)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalCharacter.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DinoMountOnMe(APrimalDinoCharacter*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=698+grafo=11/11]]
    bool DinoMountOnMe(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalCharacter.DinoMountOnMe(APrimalDinoCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DoCharacterDetachment(bool,bool,APrimalBuff*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=373]]
    void DoCharacterDetachment(bool a0, bool a1, void* a2) const
    {
        NativeCall<void, bool, bool, void*>(this, "APrimalCharacter.DoCharacterDetachment(bool,bool,APrimalBuff*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DoFindGoodSpot(UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void DoFindGoodSpot(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalCharacter.DoFindGoodSpot(UE::Math::TVector<double>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.DoOutsideWorldCheck()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DoOutsideWorldCheck() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.DoOutsideWorldCheck()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DownCallOne()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DownCallOne() const
    {
        NativeCall<void>(this, "APrimalCharacter.DownCallOne()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.DrawFloatingChatMessage(AShooterHUD*,FString,double,APrimalCharacter*,UE::Math:
    // endereco: thunk
    BrzPonteiro DrawFloatingChatMessage(void* a0, const FString& a1, double a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, double, void*, void*>(this, "APrimalCharacter.DrawFloatingChatMessage(AShooterHUD*,FString,double,APrimalCharacter*,UE::Math::TVector<double>)", a0, const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DrawFloatingChatMessage(void* a0, FString* a1, double a2, void* a3, void* a4) const
    { return DrawFloatingChatMessage(a0, *a1, a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.DrawLocalPlayerHUD(AShooterHUD*)
    // endereco: cache_pdb_25090264
    void DrawLocalPlayerHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.DrawLocalPlayerHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.EmitPoop()
    // endereco: casamento de bytes com a build de referencia
    void EmitPoop() const
    {
        NativeCall<void>(this, "APrimalCharacter.EmitPoop()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.EnableBPTimerNonDedicated(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    void EnableBPTimerNonDedicated(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.EnableBPTimerNonDedicated(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.EnableBPTimerServer(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=66]]
    void EnableBPTimerServer(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.EnableBPTimerServer(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.EnableBodiesGravity()
    // endereco: casamento de bytes com a build de referencia
    void EnableBodiesGravity() const
    {
        NativeCall<void>(this, "APrimalCharacter.EnableBodiesGravity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.EnableIK(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableIK(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalCharacter.EnableIK(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.EnableTurnToFaceRotation()
    // endereco: cache_pdb_25090264
    bool EnableTurnToFaceRotation() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.EnableTurnToFaceRotation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.EndDragCharacter()
    // endereco: cache_pdb_25090264
    void EndDragCharacter() const
    {
        NativeCall<void>(this, "APrimalCharacter.EndDragCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.EndForceSkelUpdate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=51]]
    void EndForceSkelUpdate() const
    {
        NativeCall<void>(this, "APrimalCharacter.EndForceSkelUpdate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ExcludePostProcessBlendableMaterial(UMaterialInterface*)
    // endereco: casamento de bytes com a build de referencia
    bool ExcludePostProcessBlendableMaterial(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.ExcludePostProcessBlendableMaterial(UMaterialInterface*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ExecSetPawnSleeping(bool)
    // endereco: cache_pdb_25090264
    void ExecSetPawnSleeping(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.ExecSetPawnSleeping(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ExecSetSleeping(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void ExecSetSleeping(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.ExecSetSleeping(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.FellOutOfWorld(UDamageType&)
    // endereco: casamento de bytes com a build de referencia
    void FellOutOfWorld(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.FellOutOfWorld(UDamageType&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.FilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAll
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=348+grafo=3/3]]
    void FilterMultiUseEntries(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.FilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.FinalLoadedFromSaveGame()
    // endereco: casamento de bytes com a build de referencia
    void FinalLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "APrimalCharacter.FinalLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.FindAndApplyWeaponCameraParamsOverride(FPrimalCameraParams&,APrimalCharacter*,F
    // endereco: casamento de bytes com a build de referencia
    void FindAndApplyWeaponCameraParamsOverride(void* a0, void* a1, unsigned long long a2) const
    {
        NativeCall<void, void*, void*, unsigned long long>(this, "APrimalCharacter.FindAndApplyWeaponCameraParamsOverride(FPrimalCameraParams&,APrimalCharacter*,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ForceAddUnderwaterCharacterStatusValues()
    // endereco: cache_pdb_25090264
    bool ForceAddUnderwaterCharacterStatusValues() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.ForceAddUnderwaterCharacterStatusValues()");
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.ForceRefreshBones()
    // endereco: casamento de bytes com a build de referencia
    void ForceRefreshBones() const
    {
        NativeCall<void>(this, "APrimalCharacter.ForceRefreshBones()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ForceRefreshBonesThreadSafe()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ForceRefreshBonesThreadSafe() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.ForceRefreshBonesThreadSafe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ForceSleepRagdoll()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ForceSleepRagdoll() const
    {
        NativeCall<void>(this, "APrimalCharacter.ForceSleepRagdoll()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ForceSleepRagdollEx()
    // endereco: casamento de bytes com a build de referencia
    void ForceSleepRagdollEx() const
    {
        NativeCall<void>(this, "APrimalCharacter.ForceSleepRagdollEx()");
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.ForceTickPoseDelta()
    // endereco: cache_pdb_25090264
    void ForceTickPoseDelta() const
    {
        NativeCall<void>(this, "APrimalCharacter.ForceTickPoseDelta()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ForceUpdateAimedCharacters(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    static void ForceUpdateAimedCharacters(void* a0, void* a1, void* a2, void* a3, bool a4, float a5, bool a6)
    {
        NativeCall<void, void*, void*, void*, void*, bool, float, bool>(nullptr, "APrimalCharacter.ForceUpdateAimedCharacters(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ForceUpdateAimedCharacters_Single(UWorld*,UE::Math::TVector<double>&,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceUpdateAimedCharacters_Single(void* a0, void* a1, void* a2, void* a3, bool a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, float, bool>(this, "APrimalCharacter.ForceUpdateAimedCharacters_Single(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ForceUpdateCharacter(UWorld*,APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void ForceUpdateCharacter(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.ForceUpdateCharacter(UWorld*,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GenerateDeathAnim(float,UE::Math::TVector<double>&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void GenerateDeathAnim(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalCharacter.GenerateDeathAnim(float,UE::Math::TVector<double>&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetActiveRootMotionMontage()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    UObject* GetActiveRootMotionMontage() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetActiveRootMotionMontage()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetActiveSkillBuff(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UObject* GetActiveSkillBuff(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "APrimalCharacter.GetActiveSkillBuff(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetActorAttachedSoundOverride(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorAttachedSoundOverride(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetActorAttachedSoundOverride(USoundBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAimOffsets(float a0, void* a1, void* a2, float a3, void* a4, bool a5) const
    {
        return NativeCall<void*, float, void*, void*, float, void*, bool>(this, "APrimalCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetAimedActor(ECollisionChannel,UActorComponent**,float,float,int*,FHitResult*,
    // endereco: casamento de bytes com a build de referencia
    AActor* GetAimedActor(int a0, void* a1, float a2, float a3, void* a4, void* a5, bool a6, bool a7, bool a8, void* a9) const
    {
        return NativeCall<AActor*, int, void*, float, float, void*, void*, bool, bool, bool, void*>(this, "APrimalCharacter.GetAimedActor(ECollisionChannel,UActorComponent**,float,float,int*,FHitResult*,bool,bool,bool,bool*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetAimedActor(FHitResult&,ECollisionChannel,float,float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* GetAimedActor(void* a0, int a1, float a2, float a3, bool a4, bool a5) const
    {
        return NativeCall<AActor*, void*, int, float, float, bool, bool>(this, "APrimalCharacter.GetAimedActor(FHitResult&,ECollisionChannel,float,float,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetAllAttachedChars(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&,bool,
    // endereco: casamento de bytes com a build de referencia
    bool GetAllAttachedChars(void* a0, bool a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, bool, bool, bool, bool>(this, "APrimalCharacter.GetAllAttachedChars(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalChara
    // endereco: casamento de bytes com a build de referencia
    bool GetAllAttachedCharsInternal(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, bool>(this, "APrimalCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalCharacter*,0>,FDefaultSetAllocator>&,APrimalCharacter*,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetAllBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllBuffs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetAllBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetAllPrimalCameraModes(TArray<FPrimalCameraMode,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllPrimalCameraModes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetAllPrimalCameraModes(TArray<FPrimalCameraMode,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetApproximateLocationPhysicsVolume(bool,UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetApproximateLocationPhysicsVolume(bool a0, void* a1, bool a2) const
    {
        return NativeCall<APhysicsVolume*, bool, void*, bool>(this, "APrimalCharacter.GetApproximateLocationPhysicsVolume(bool,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetAttachedExplosive()
    // endereco: cache_pdb_25090264
    APrimalStructureExplosive* GetAttachedExplosive() const
    {
        return NativeCall<APrimalStructureExplosive*>(this, "APrimalCharacter.GetAttachedExplosive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetBaseAimRotation()
    // classe: a funcao mora em APawn, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    BrzPonteiro GetBaseAimRotation() const
    {
        return NativeCall<void*>(this, "APawn.GetBaseAimRotation()");
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.GetBaseDragWeight(bool)
    // endereco: cache_pdb_25090264
    float GetBaseDragWeight(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalCharacter.GetBaseDragWeight(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetBaseStatusValue(TEnumAsByte<EPrimalCharacterStatusValue::Type>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=155]]
    BrzPonteiro GetBaseStatusValue(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalCharacter.GetBaseStatusValue(TEnumAsByte<EPrimalCharacterStatusValue::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetBasedMovementComponent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UObject* GetBasedMovementComponent() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetBasedMovementComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetBasedOnDino(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* GetBasedOnDino(bool a0, bool a1) const
    {
        return NativeCall<APrimalDinoCharacter*, bool, bool>(this, "APrimalCharacter.GetBasedOnDino(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetBasedOnDinoAsActor(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* GetBasedOnDinoAsActor(bool a0, bool a1) const
    {
        return NativeCall<AActor*, bool, bool>(this, "APrimalCharacter.GetBasedOnDinoAsActor(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetBasedOnDinoConst()
    // endereco: cache_pdb_25090264
    UObject* GetBasedOnDinoConst() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetBasedOnDinoConst()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetBasedOnRaft(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBasedOnRaft(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "APrimalCharacter.GetBasedOnRaft(bool,bool)", a0, a1);
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.GetBasedOrSeatingOnDino()
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* GetBasedOrSeatingOnDino() const
    {
        return NativeCall<APrimalDinoCharacter*>(this, "APrimalCharacter.GetBasedOrSeatingOnDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetBuff(TSubclassOf<APrimalBuff>)
    // endereco: casamento de bytes com a build de referencia
    APrimalBuff* GetBuff(void* a0) const
    {
        return NativeCall<APrimalBuff*, void**>(this, "APrimalCharacter.GetBuff(TSubclassOf<APrimalBuff>)", &a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetBuffForPostEffect(UMaterialInterface*)
    // endereco: casamento de bytes com a build de referencia
    APrimalBuff* GetBuffForPostEffect(void* a0) const
    {
        return NativeCall<APrimalBuff*, void*>(this, "APrimalCharacter.GetBuffForPostEffect(UMaterialInterface*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetBuffHarvestQuantityMultiplier()
    // endereco: cache_pdb_25090264
    float GetBuffHarvestQuantityMultiplier() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetBuffHarvestQuantityMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetBuffStackCount(TSubclassOf<APrimalBuff>,bool)
    // endereco: casamento de bytes com a build de referencia
    int GetBuffStackCount(void* a0, bool a1) const
    {
        return NativeCall<int, void*, bool>(this, "APrimalCharacter.GetBuffStackCount(TSubclassOf<APrimalBuff>,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetBuffWithCustomTag(FName)
    // endereco: cache_pdb_25090264
    UObject* GetBuffWithCustomTag(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "APrimalCharacter.GetBuffWithCustomTag(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=25+chamadores=20]]
    void GetBuffs(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCameraProfileForId(FName,FPrimalCameraProfile&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraProfileForId(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalCharacter.GetCameraProfileForId(FName,FPrimalCameraProfile&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCameraShakeScalar(TSubclassOf<UCameraShakeBase>,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraShakeScalar(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalCharacter.GetCameraShakeScalar(TSubclassOf<UCameraShakeBase>,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetCapsuleBottomLocation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=49+chamadores=5]]
    BrzPonteiro GetCapsuleBottomLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetCapsuleBottomLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetCapsuleHalfHeight(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    float GetCapsuleHalfHeight(bool a0, bool a1) const
    {
        return NativeCall<float, bool, bool>(this, "APrimalCharacter.GetCapsuleHalfHeight(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetCapsuleTopLocation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCapsuleTopLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetCapsuleTopLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetCharacterViewLocationAndDirection(UE::Math::TVector<double>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    void GetCharacterViewLocationAndDirection(void* a0, void* a1, void* a2, float a3) const
    {
        NativeCall<void, void*, void*, void*, float>(this, "APrimalCharacter.GetCharacterViewLocationAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool&,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCharactersGrappledToMe(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCharactersGrappledToMe(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetCharactersGrappledToMe(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetClientPositionErrorToleranceSquared()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetClientPositionErrorToleranceSquared() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetClientPositionErrorToleranceSquared()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetClientRotationInterpSpeed(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    float GetClientRotationInterpSpeed(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalCharacter.GetClientRotationInterpSpeed(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCompassRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=104]]
    BrzPonteiro GetCompassRotation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetCompassRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetControlRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=233]]
    BrzPonteiro GetControlRotation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetControlRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetCorpseDecayRate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    float GetCorpseDecayRate() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetCorpseDecayRate()");
    }

    // ── NAO EXISTE COMO FUNCAO: e' `inline` na Unreal ──────────────
    //
    //   APrimalCharacter.GetCorpseLifespan() nao tem endereco nesta build e nao vai ter:
    //   o compilador dissolve o getter dentro de quem chama.
    //   Ate' 09/09/2026 esta chamada devolvia o ZERO do tipo.
    //
    //   Agora le' o campo, pela reflexao viva, como o resto do SDK.
    float GetCorpseLifespan() const { return CorpseLifespanField(); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCurrentCameraProfile(FPrimalCameraProfile&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentCameraProfile(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetCurrentCameraProfile(FPrimalCameraProfile&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetCurrentCameraProfileId()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=178]]
    void GetCurrentCameraProfileId(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetCurrentCameraProfileId()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCurrentPrimalCameraSettings(FPrimalCameraSettings&,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentPrimalCameraSettings(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.GetCurrentPrimalCameraSettings(FPrimalCameraSettings&,APrimalCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCurrentReverseVacuumCompartmentWaterLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetCurrentReverseVacuumCompartmentWaterLevel() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetCurrentReverseVacuumCompartmentWaterLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetCurrentStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: cache_pdb_25090264
    float GetCurrentStatusValue(int a0) const
    {
        return NativeCall<float, int>(this, "APrimalCharacter.GetCurrentStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetCustomCosmeticModID(TEnumAsByte<EPrimalEquipmentType::Type>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCustomCosmeticModID(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalCharacter.GetCustomCosmeticModID(TEnumAsByte<EPrimalEquipmentType::Type>)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.GetCustomTooltip(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Ma
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void** GetCustomTooltip(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void**, void*, void*, void*>(this, "APrimalCharacter.GetCustomTooltip(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   APrimalCharacter.GetCustomTooltip_Implementation(UE::Math::TVector2<double>&,UE::Math::TVector2<
    // endereco: casamento de bytes com a build de referencia
    void** GetCustomTooltip_Implementation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void**, void*, void*, void*>(this, "APrimalCharacter.GetCustomTooltip_Implementation(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetDeathAnim(float,UE::Math::TVector<double>&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDeathAnim(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalCharacter.GetDeathAnim(float,UE::Math::TVector<double>&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=4214+chamadores=2+grafo=62/62]]
    UAnimationAsset* GetDeathAnim_Implementation(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<UAnimationAsset*, float, void*, void*, void*>(this, "APrimalCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDeathHarvestMaxHealth()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=93]]
    float GetDeathHarvestMaxHealth() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetDeathHarvestMaxHealth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetDebugInfoString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetDefaultMovementSpeed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    float GetDefaultMovementSpeed() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetDefaultMovementSpeed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDefaultPrimalChar()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetDefaultPrimalChar() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetDefaultPrimalChar()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetDescriptiveName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDesiredOverrideAttenuationForAllAssociatedSounds(USoundBase*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=142+chamadores=8]]
    UObject* GetDesiredOverrideAttenuationForAllAssociatedSounds(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalCharacter.GetDesiredOverrideAttenuationForAllAssociatedSounds(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetDetailedDescription(FString&)
    // endereco: casamento de bytes com a build de referencia
    void GetDetailedDescription(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.GetDetailedDescription(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetDetailedDescription(void* retorno, FString* a0) const
    { GetDetailedDescription(retorno, *a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetDoBuffsIntersectItemSlotUse()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetDoBuffsIntersectItemSlotUse() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetDoBuffsIntersectItemSlotUse()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetDragWeight(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    float GetDragWeight(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalCharacter.GetDragWeight(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDraggedLocation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDraggedLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetDraggedLocation(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDraggedRelativeLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=114]]
    BrzPonteiro GetDraggedRelativeLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetDraggedRelativeLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDraggedRelativeRotation(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetDraggedRelativeRotation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetDraggedRelativeRotation(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetDraggedRotation(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=66]]
    BrzPonteiro GetDraggedRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetDraggedRotation(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetExtraPaintingMeshCount()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=3]]
    int GetExtraPaintingMeshCount() const
    {
        return NativeCall<int>(this, "APrimalCharacter.GetExtraPaintingMeshCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetExtraSaveMovedData(FSavedMove_Character*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetExtraSaveMovedData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetExtraSaveMovedData(FSavedMove_Character*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetFPVShadowMeshOffset(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetFPVShadowMeshOffset(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetFPVShadowMeshOffset(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetFallAcceleration()
    // endereco: cache_pdb_25090264
    float GetFallAcceleration() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetFallAcceleration()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetFinalDeathAnim(FName)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetFinalDeathAnim(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "APrimalCharacter.GetFinalDeathAnim(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetFootPhysicalSurfaceType(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    int GetFootPhysicalSurfaceType(bool a0, bool a1) const
    {
        return NativeCall<int, bool, bool>(this, "APrimalCharacter.GetFootPhysicalSurfaceType(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetFrictionAdditionalValue()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetFrictionAdditionalValue() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetFrictionAdditionalValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetGrappledBuffClassOverride()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UClass* GetGrappledBuffClassOverride() const
    {
        return NativeCall<UClass*>(this, "APrimalCharacter.GetGrappledBuffClassOverride()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetGravityZScale()
    // endereco: casamento de bytes com a build de referencia
    float GetGravityZScale() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetGravityZScale()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetGroundLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    static bool GetGroundLocation(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "APrimalCharacter.GetGroundLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    void GetHUDElements(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetHarvestingDestinationInventory()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* GetHarvestingDestinationInventory() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetHarvestingDestinationInventory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetHarvestingDestinationInventory_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetHarvestingDestinationInventory_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetHarvestingDestinationInventory_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetHasBPOverrideFallVelocityBuff(APrimalBuff*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GetHasBPOverrideFallVelocityBuff(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalCharacter.GetHasBPOverrideFallVelocityBuff(APrimalBuff*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetHealthPercentage()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=614+grafo=9/9]]
    float GetHealthPercentage() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetHealthPercentage()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetHurtFX(bool)
    // endereco: cache_pdb_25090264
    UObject* GetHurtFX(bool a0) const
    {
        return NativeCall<UObject*, bool>(this, "APrimalCharacter.GetHurtFX(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetHurtFXNew(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=218]]
    UObject* GetHurtFXNew(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalCharacter.GetHurtFXNew(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetHurtFXNew_Niagara(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=218]]
    UObject* GetHurtFXNew_Niagara(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalCharacter.GetHurtFXNew_Niagara(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetHurtFX_Niagara(bool)
    // endereco: cache_pdb_25090264
    UObject* GetHurtFX_Niagara(bool a0) const
    {
        return NativeCall<UObject*, bool>(this, "APrimalCharacter.GetHurtFX_Niagara(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetImmersionDepth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetImmersionDepth() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetImmersionDepth()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetInputDirectionVector(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInputDirectionVector(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetInputDirectionVector(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetInputSpeedModifier(float&)
    // endereco: cache_pdb_25090264
    void GetInputSpeedModifier(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetInputSpeedModifier(float&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetInterpolatedLocation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetInterpolatedLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetInterpolatedLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetInterpolatedRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=307]]
    BrzPonteiro GetInterpolatedRotation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetInterpolatedRotation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetInterpolatedRotation_NonFlattened()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=302]]
    BrzPonteiro GetInterpolatedRotation_NonFlattened() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetInterpolatedRotation_NonFlattened()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetItemDeathAnimOverride(FName)
    // endereco: cache_pdb_25090264
    UObject* GetItemDeathAnimOverride(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "APrimalCharacter.GetItemDeathAnimOverride(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetItemSoundOverrides(USoundBase*,USoundBase*&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetItemSoundOverrides(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.GetItemSoundOverrides(USoundBase*,USoundBase*&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetItemTrait(FName)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetItemTrait(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "APrimalCharacter.GetItemTrait(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetItemTraitModifierTotal(FName,float&,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemTraitModifierTotal(unsigned long long a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<void*, unsigned long long, void*, int, bool>(this, "APrimalCharacter.GetItemTraitModifierTotal(FName,float&,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetJumpZModifier()
    // endereco: casamento de bytes com a build de referencia
    float GetJumpZModifier() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetJumpZModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetKillXP()
    // endereco: casamento de bytes com a build de referencia
    float GetKillXP() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetKillXP()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetLandedSoundsPhysMat()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLandedSoundsPhysMat() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetLandedSoundsPhysMat()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetLastCausedDamageTime()
    // endereco: cache_pdb_25090264
    double GetLastCausedDamageTime() const
    {
        return NativeCall<double>(this, "APrimalCharacter.GetLastCausedDamageTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetLastGameplayRelevantTime()
    // classe: a funcao mora em UPrimalActor, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    double GetLastGameplayRelevantTime() const
    {
        return NativeCall<double>(this, "UPrimalActor.GetLastGameplayRelevantTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetLastStartedTalkingTime()
    // endereco: cache_pdb_25090264
    double GetLastStartedTalkingTime() const
    {
        return NativeCall<double>(this, "APrimalCharacter.GetLastStartedTalkingTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetLocalPlayerIndex()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=139]]
    int GetLocalPlayerIndex() const
    {
        return NativeCall<int>(this, "APrimalCharacter.GetLocalPlayerIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetLowHealthPercentage()
    // endereco: cache_pdb_25090264
    float GetLowHealthPercentage() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetLowHealthPercentage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetMaxHealth()
    // endereco: cache_pdb_25090264
    float GetMaxHealth() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetMaxHealth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetMaxSpeedModifier(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxSpeedModifier(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetMaxSpeedModifier(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetMaxStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxStatusValue(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalCharacter.GetMaxStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetMaxTribeThreat()
    // endereco: cache_pdb_25090264
    int GetMaxTribeThreat() const
    {
        return NativeCall<int>(this, "APrimalCharacter.GetMaxTribeThreat()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetMoveAnimRate()
    // endereco: casamento de bytes com a build de referencia
    float GetMoveAnimRate() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetMoveAnimRate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetMyBiomeZoneVolume()
    // endereco: cache_pdb_25090264
    UObject* GetMyBiomeZoneVolume() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetMyBiomeZoneVolume()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetNavAgentLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNavAgentLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetNavAgentLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetNearestBoneIndexForDrag(APrimalCharacter*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    long long GetNearestBoneIndexForDrag(void* a0, void* a1) const
    {
        return NativeCall<long long, void*, void*>(this, "APrimalCharacter.GetNearestBoneIndexForDrag(APrimalCharacter*,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetNetRelevancyBiomeId()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNetRelevancyBiomeId() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetNetRelevancyBiomeId()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetNextCombatMusic(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetNextCombatMusic(void* a0, bool a1) const
    {
        return NativeCall<UObject*, void*, bool>(this, "APrimalCharacter.GetNextCombatMusic(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetNextCombatMusic_Implementation(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextCombatMusic_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalCharacter.GetNextCombatMusic_Implementation(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetNumTamedDinosRangeMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNumTamedDinosRangeMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetNumTamedDinosRangeMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetOrbitCamZoomParams(float&,float&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrbitCamZoomParams(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalCharacter.GetOrbitCamZoomParams(float&,float&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetOverrideDefaultCharacterParamTexture(FName,UTexture2D*)
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetOverrideDefaultCharacterParamTexture(unsigned long long a0, void* a1) const
    {
        return NativeCall<UTexture2D*, unsigned long long, void*>(this, "APrimalCharacter.GetOverrideDefaultCharacterParamTexture(FName,UTexture2D*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetOverrideSocket(FName)
    // endereco: casamento de bytes com a build de referencia
    void GetOverrideSocket(void* retorno, unsigned long long a0) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalCharacter.GetOverrideSocket(FName)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetOverrideWaterJumpVelocity(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    float GetOverrideWaterJumpVelocity(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalCharacter.GetOverrideWaterJumpVelocity(float)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.GetPaintingMesh(int)
    // endereco: casamento de bytes com a build de referencia
    UMeshComponent* GetPaintingMesh(int a0) const
    {
        return NativeCall<UMeshComponent*, int>(this, "APrimalCharacter.GetPaintingMesh(int)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.GetPaintingTexture(int)
    // endereco: casamento de bytes com a build de referencia
    UPaintingTexture* GetPaintingTexture(int a0) const
    {
        return NativeCall<UPaintingTexture*, int>(this, "APrimalCharacter.GetPaintingTexture(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPercentStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=839+chamadores=6+grafo=16/16]]
    BrzPonteiro GetPercentStatusValue(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalCharacter.GetPercentStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPhysMatTypeFromHit(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPhysMatTypeFromHit(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetPhysMatTypeFromHit(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPhysMatTypeFromHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    int GetPhysMatTypeFromHits(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalCharacter.GetPhysMatTypeFromHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPoopAnimation(bool)
    // endereco: cache_pdb_25090264
    UAnimMontage* GetPoopAnimation(bool a0) const
    {
        return NativeCall<UAnimMontage*, bool>(this, "APrimalCharacter.GetPoopAnimation(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetPreviousLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPreviousLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetPreviousLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraArmLengthInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraArmLengthInterpParams(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalCharacter.GetPrimalCameraArmLengthInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)
    // endereco: casamento de bytes com a build de referencia
    float GetPrimalCameraDesiredArmLength(void* a0, float a1, float a2) const
    {
        return NativeCall<float, void*, float, float>(this, "APrimalCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPrimalCameraDesiredArmLength(float,float)
    // endereco: casamento de bytes com a build de referencia
    float GetPrimalCameraDesiredArmLength(float a0, float a1) const
    {
        return NativeCall<float, float, float>(this, "APrimalCharacter.GetPrimalCameraDesiredArmLength(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraDesiredPivotLocation(FPrimalCameraParams*,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredPivotLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotLocation(FPrimalCameraParams*,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraDesiredPivotLocation(UE::Math::TVector<double>,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredPivotLocation(void* a0, bool a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, bool, unsigned long long>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotLocation(UE::Math::TVector<double>,bool,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraDesiredPivotOffset(FPrimalCameraParams*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredPivotOffset(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotOffset(FPrimalCameraParams*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetPrimalCameraDesiredPivotOffset(bool,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredPivotOffset(bool a0, unsigned long long a1) const
    {
        return NativeCall<void*, bool, unsigned long long>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotOffset(bool,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraDesiredPivotRotation(FPrimalCameraParams*,UE::Math::TRotator<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredPivotRotation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotRotation(FPrimalCameraParams*,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraDesiredPivotRotation(UE::Math::TRotator<double>,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraDesiredPivotRotation(void* a0, bool a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, bool, unsigned long long>(this, "APrimalCharacter.GetPrimalCameraDesiredPivotRotation(UE::Math::TRotator<double>,bool,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraInterpMultiplier(FCameraInterpMovementBasedMultipliers&,TEnumAsB
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraInterpMultiplier(void* a0, unsigned char a1) const
    {
        return NativeCall<void*, void*, unsigned char>(this, "APrimalCharacter.GetPrimalCameraInterpMultiplier(FCameraInterpMovementBasedMultipliers&,TEnumAsByte<EAxis::Type>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPrimalCameraParams(FPrimalCameraParams&,APrimalCharacter*,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    void GetPrimalCameraParams(void* a0, void* a1, bool a2, unsigned long long a3) const
    {
        NativeCall<void, void*, void*, bool, unsigned long long>(this, "APrimalCharacter.GetPrimalCameraParams(FPrimalCameraParams&,APrimalCharacter*,bool,FName)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraParams(FPrimalCameraParams&,FPrimalCameraProfile&,APrimalCharact
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraParams(void* a0, void* a1, void* a2, bool a3, unsigned long long a4) const
    {
        return NativeCall<void*, void*, void*, void*, bool, unsigned long long>(this, "APrimalCharacter.GetPrimalCameraParams(FPrimalCameraParams&,FPrimalCameraProfile&,APrimalCharacter*,bool,FName)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraParamsFromSettings(FPrimalCameraParams&,FPrimalCameraSettings&,A
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraParamsFromSettings(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalCharacter.GetPrimalCameraParamsFromSettings(FPrimalCameraParams&,FPrimalCameraSettings&,APrimalCharacter*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraPivotInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*,FPr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraPivotInterpParams(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalCharacter.GetPrimalCameraPivotInterpParams(FPrimalCameraProfile*,FPrimalCameraParams*,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetPrimalCameraSettings(FPrimalCameraProfile&,FPrimalCameraSettings&,APrimalCha
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalCameraSettings(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalCharacter.GetPrimalCameraSettings(FPrimalCameraProfile&,FPrimalCameraSettings&,APrimalCharacter*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPrimalCharMovementMode()
    // endereco: cache_pdb_25090264
    int GetPrimalCharMovementMode() const
    {
        return NativeCall<int>(this, "APrimalCharacter.GetPrimalCharMovementMode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPrimalCharacterSparseClassData(EGetSparseClassDataMethod)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetPrimalCharacterSparseClassData(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalCharacter.GetPrimalCharacterSparseClassData(EGetSparseClassDataMethod)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetPrimaryHitComponent()
    // endereco: cache_pdb_25090264
    UPrimitiveComponent* GetPrimaryHitComponent() const
    {
        return NativeCall<UPrimitiveComponent*>(this, "APrimalCharacter.GetPrimaryHitComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetRole()
    // endereco: cache_pdb_25090264
    int GetRole() const
    {
        return NativeCall<int>(this, "APrimalCharacter.GetRole()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetRootBodyBoneLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRootBodyBoneLocation() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetRootBodyBoneLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetRotationRateModifier()
    // endereco: cache_pdb_25090264
    float GetRotationRateModifier() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetRotationRateModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetRunningSpeedModifier(bool)
    // endereco: cache_pdb_25090264
    float GetRunningSpeedModifier(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalCharacter.GetRunningSpeedModifier(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetSeatingStructure()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSeatingStructure() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetSeatingStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetShip()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetShip() const
    {
        return NativeCall<UObject*>(this, "APrimalCharacter.GetShip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetShortName()
    // endereco: casamento de bytes com a build de referencia
    void GetShortName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetShortName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetSnapshotComponent(AActor*,FName)
    // endereco: casamento de bytes com a build de referencia
    static UActorComponent* GetSnapshotComponent(void* a0, unsigned long long a1)
    {
        return NativeCall<UActorComponent*, void*, unsigned long long>(nullptr, "APrimalCharacter.GetSnapshotComponent(AActor*,FName)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetSocketLocation(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSocketLocation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalCharacter.GetSocketLocation(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetStasisConsumerRangeMultiplier()
    // endereco: cache_pdb_25090264
    float GetStasisConsumerRangeMultiplier() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetStasisConsumerRangeMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTPVCameraOffset(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTPVCameraOffset(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetTPVCameraOffset(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTPVCameraOffsetMultiplier()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTPVCameraOffsetMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetTPVCameraOffsetMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetTPVHorizontalCameraOffset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetTPVHorizontalCameraOffset() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetTPVHorizontalCameraOffset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetTPVHorizontalCameraOffsetFromSlider()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=99]]
    float GetTPVHorizontalCameraOffsetFromSlider() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetTPVHorizontalCameraOffsetFromSlider()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTPVWeaponCameraOffset()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTPVWeaponCameraOffset() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetTPVWeaponCameraOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetTargetPathfindingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetPathfindingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetTargetPathfindingLocation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetTargetableDamageFXDefaultPhysMaterial()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTargetableDamageFXDefaultPhysMaterial() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetTargetableDamageFXDefaultPhysMaterial()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetTargetingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetTargetingLocation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetTetheredDestination(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTetheredDestination(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalCharacter.GetTetheredDestination(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetTetheredVelocity(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTetheredVelocity(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalCharacter.GetTetheredVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetThrallAttackDecision()
    // endereco: cache_pdb_25090264
    unsigned char GetThrallAttackDecision() const
    {
        return NativeCall<unsigned char>(this, "APrimalCharacter.GetThrallAttackDecision()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTooltipCharacterInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipCharacterInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetTooltipCharacterInfo(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTooltipCharacterInfoBP(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetTooltipCharacterInfoBP(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetTooltipCharacterInfoBP(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetTransitionToCameraStateInterpTime(EPrimalCameraState)
    // endereco: cache_pdb_25090264
    float GetTransitionToCameraStateInterpTime(unsigned char a0) const
    {
        return NativeCall<float, unsigned char>(this, "APrimalCharacter.GetTransitionToCameraStateInterpTime(EPrimalCameraState)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTransitionToTargetingCameraInterpSpeed()
    // endereco: cache_pdb_25090264
    float GetTransitionToTargetingCameraInterpSpeed() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetTransitionToTargetingCameraInterpSpeed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTribeThreat()
    // endereco: casamento de bytes com a build de referencia
    int GetTribeThreat() const
    {
        return NativeCall<int>(this, "APrimalCharacter.GetTribeThreat()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetTribeThreatPercentage()
    // endereco: casamento de bytes com a build de referencia
    float GetTribeThreatPercentage() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetTribeThreatPercentage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetTrueBasedPawns()
    // endereco: casamento de bytes com a build de referencia
    void GetTrueBasedPawns(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.GetTrueBasedPawns()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetTrueBasedPrimalCharacters(TArray<APrimalCharacter*,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTrueBasedPrimalCharacters(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.GetTrueBasedPrimalCharacters(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetVelocity(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVelocity(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetVelocity(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.GetVelocityBasedSoundIndex(FVelocityBasedCharacterSoundInfo,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVelocityBasedSoundIndex(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.GetVelocityBasedSoundIndex(FVelocityBasedCharacterSoundInfo,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetVisualVelocity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVisualVelocity() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetVisualVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetWaterSubmergedDepthThreshold()
    // endereco: cache_pdb_25090264
    float GetWaterSubmergedDepthThreshold() const
    {
        return NativeCall<float>(this, "APrimalCharacter.GetWaterSubmergedDepthThreshold()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GetWeightedBoneNames(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWeightedBoneNames(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.GetWeightedBoneNames(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,in
    // endereco: casamento de bytes com a build de referencia
    void GetWindSourceComponents(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalCharacter.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,int,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.GiveKillExperience()
    // endereco: casamento de bytes com a build de referencia
    bool GiveKillExperience() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.GiveKillExperience()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.HasAnyBuffWithDisabledWeaponTag(FName&,APrimalBuff*&)
    // endereco: thunk
    BrzPonteiro HasAnyBuffWithDisabledWeaponTag(const FName& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.HasAnyBuffWithDisabledWeaponTag(FName&,APrimalBuff*&)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HasAnyBuffWithDisabledWeaponTag(FName* a0, void* a1) const
    { return HasAnyBuffWithDisabledWeaponTag(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.HasAnyBuffWithTag(FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasAnyBuffWithTag(unsigned long long a0, bool a1, bool a2) const
    {
        return NativeCall<bool, unsigned long long, bool, bool>(this, "APrimalCharacter.HasAnyBuffWithTag(FName,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.HasBuff(TSubclassOf<APrimalBuff>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasBuff(void* a0, bool a1) const
    {
        return NativeCall<bool, void**, bool>(this, "APrimalCharacter.HasBuff(TSubclassOf<APrimalBuff>,bool)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.HasBuffPreventTargetting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro HasBuffPreventTargetting() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.HasBuffPreventTargetting()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.HasBuffWithCustomTagConst(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasBuffWithCustomTagConst(unsigned long long a0, bool a1) const
    {
        return NativeCall<bool, unsigned long long, bool>(this, "APrimalCharacter.HasBuffWithCustomTagConst(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.HasBuffWithCustomTags(TArray<FName,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    bool HasBuffWithCustomTags(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.HasBuffWithCustomTags(TArray<FName,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.HasDynamicBase()
    // endereco: cache_pdb_25090264
    bool HasDynamicBase() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.HasDynamicBase()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.HasEnoughWeightToDragCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool HasEnoughWeightToDragCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.HasEnoughWeightToDragCharacter(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.HasItemTrait(FName)
    // endereco: casamento de bytes com a build de referencia
    bool HasItemTrait(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "APrimalCharacter.HasItemTrait(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.HasValidASACameraConfig()
    // endereco: cache_pdb_25090264
    bool HasValidASACameraConfig() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.HasValidASACameraConfig()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.HurtMe(int)
    // endereco: casamento de bytes com a build de referencia
    void HurtMe(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.HurtMe(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IKFootTrace(int a0, void* a1, void* a2, void* a3, void* a4, float a5) const
    {
        return NativeCall<void*, int, void*, void*, void*, void*, float>(this, "APrimalCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Immobilize(bool,AActor*,bool,bool)
    // endereco: thunk
    void Immobilize(bool a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, bool, void*, bool, bool>(this, "APrimalCharacter.Immobilize(bool,AActor*,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.InitRagdollRepConstraints()
    // endereco: casamento de bytes com a build de referencia
    void InitRagdollRepConstraints() const
    {
        NativeCall<void>(this, "APrimalCharacter.InitRagdollRepConstraints()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalCharacter.InitRagdollReplication()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InitRagdollReplication() const
    {
        NativeCall<void>(this, "APrimalCharacter.InitRagdollReplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.InitializedAnimScriptInstance()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    void InitializedAnimScriptInstance() const
    {
        NativeCall<void>(this, "APrimalCharacter.InitializedAnimScriptInstance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.InventoryItemUsed(UObject*)
    // classe: a funcao mora em UPrimalActor, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void InventoryItemUsed(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.InventoryItemUsed(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsASACameraEnabled()
    // endereco: cache_pdb_25090264
    bool IsASACameraEnabled() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsASACameraEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsAlive()
    // endereco: casamento de bytes com a build de referencia
    bool IsAlive() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsAlive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsAlliedWithOtherTeam(int)
    // endereco: casamento de bytes com a build de referencia
    bool IsAlliedWithOtherTeam(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalCharacter.IsAlliedWithOtherTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsAttachedToSomething()
    // endereco: cache_pdb_25090264
    bool IsAttachedToSomething() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsAttachedToSomething()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsBaseUnresolved(bool)
    // endereco: cache_pdb_25090264
    bool IsBaseUnresolved(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalCharacter.IsBaseUnresolved(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsBasedOnShip(APrimalShip*)
    // endereco: casamento de bytes com a build de referencia
    bool IsBasedOnShip(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.IsBasedOnShip(APrimalShip*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsBasedOrInsideShip()
    // endereco: casamento de bytes com a build de referencia
    bool IsBasedOrInsideShip() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsBasedOrInsideShip()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsBasedOrInsideTargetShip(APrimalShip*)
    // endereco: casamento de bytes com a build de referencia
    bool IsBasedOrInsideTargetShip(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.IsBasedOrInsideTargetShip(APrimalShip*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsBeingDestroyed()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsBeingDestroyed() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsBeingDestroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)
    // endereco: cache_pdb_25090264
    bool IsBlockedByShield(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "APrimalCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsCharacterHardAttached(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsCharacterHardAttached(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "APrimalCharacter.IsCharacterHardAttached(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsCustomCosmeticOwned(TEnumAsByte<EPrimalEquipmentType::Type>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=64]]
    BrzPonteiro IsCustomCosmeticOwned(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalCharacter.IsCustomCosmeticOwned(TEnumAsByte<EPrimalEquipmentType::Type>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsDeadOrDying()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    bool IsDeadOrDying() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsDeadOrDying()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsDraggingCharacter()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsDraggingCharacter() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.IsDraggingCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsEncumbered()
    // endereco: casamento de bytes com a build de referencia
    bool IsEncumbered() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsEncumbered()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsFollowingFinalPathSegment()
    // endereco: casamento de bytes com a build de referencia
    bool IsFollowingFinalPathSegment() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsFollowingFinalPathSegment()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsGamePlayRelevant()
    // endereco: cache_pdb_25090264
    bool IsGamePlayRelevant() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsGamePlayRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsGamepadActive()
    // endereco: casamento de bytes com a build de referencia
    bool IsGamepadActive() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsGamepadActive()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsHostileOrAggressiveTo(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsHostileOrAggressiveTo(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.IsHostileOrAggressiveTo(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsHostileTo(APrimalCharacter*,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=186+grafo=4/4]]
    bool IsHostileTo(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalCharacter.IsHostileTo(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsInCombat(APrimalCharacter*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInCombat(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.IsInCombat(APrimalCharacter*&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsInReverseVacuumSealedSpace()
    // endereco: casamento de bytes com a build de referencia
    bool IsInReverseVacuumSealedSpace() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsInReverseVacuumSealedSpace()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsInReverseVacuumSealedSpace(UE::Math::TVector<double>&,bool*,bool*,bool*,bool*
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsInReverseVacuumSealedSpace(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "APrimalCharacter.IsInReverseVacuumSealedSpace(UE::Math::TVector<double>&,bool*,bool*,bool*,bool*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsInSingletonMission()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    bool IsInSingletonMission() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsInSingletonMission()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsInStatusState(EPrimalCharacterStatusState::Type)
    // endereco: casamento de bytes com a build de referencia
    bool IsInStatusState(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalCharacter.IsInStatusState(EPrimalCharacterStatusState::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsInVacuumSealedSpace()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=192+chamadores=2]]
    bool IsInVacuumSealedSpace() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsInVacuumSealedSpace()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsInVacuumSealedSpace(UE::Math::TVector<double>&,bool*,bool*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInVacuumSealedSpace(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalCharacter.IsInVacuumSealedSpace(UE::Math::TVector<double>&,bool*,bool*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsInputAllowed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsInputAllowed() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsInputAllowed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsInvincible()
    // endereco: casamento de bytes com a build de referencia
    bool IsInvincible() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsInvincible()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsMeshGameplayRelevant()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsMeshGameplayRelevant() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsMeshGameplayRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsMontagePlaying(UAnimMontage*,float)
    // endereco: casamento de bytes com a build de referencia
    bool IsMontagePlaying(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "APrimalCharacter.IsMontagePlaying(UAnimMontage*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsMovementTethered()
    // endereco: casamento de bytes com a build de referencia
    bool IsMovementTethered() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsMovementTethered()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsMoving()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=131]]
    bool IsMoving() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsMoving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsOfTribe(int)
    // endereco: cache_pdb_25090264
    bool IsOfTribe(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalCharacter.IsOfTribe(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsOverridingClientPositionErrorTolerance()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsOverridingClientPositionErrorTolerance() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.IsOverridingClientPositionErrorTolerance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsOwningClient()
    // endereco: casamento de bytes com a build de referencia
    bool IsOwningClient() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsOwningClient()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsPassengerTreatedAsCarriedCharacterForDamage()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsPassengerTreatedAsCarriedCharacterForDamage() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsPassengerTreatedAsCarriedCharacterForDamage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsPointOverOrInsideShip(UE::Math::TVector<double>,bool)
    // endereco: thunk
    BrzPonteiro IsPointOverOrInsideShip(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalCharacter.IsPointOverOrInsideShip(UE::Math::TVector<double>,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsPrimalCharFalling()
    // endereco: cache_pdb_25090264
    bool IsPrimalCharFalling() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharFalling()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsPrimalCharFlying()
    // endereco: cache_pdb_25090264
    bool IsPrimalCharFlying() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharFlying()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsPrimalCharFriendly(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsPrimalCharFriendly(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.IsPrimalCharFriendly(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsPrimalCharSwimming()
    // endereco: cache_pdb_25090264
    bool IsPrimalCharSwimming() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharSwimming()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsPrimalCharWalking()
    // endereco: cache_pdb_25090264
    bool IsPrimalCharWalking() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharWalking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsProneOrSitting(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsProneOrSitting(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalCharacter.IsProneOrSitting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsRagdolled()
    // endereco: cache_pdb_25090264
    bool IsRagdolled() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsRagdolled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsReadyForDynamicBasing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsReadyForDynamicBasing() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsReadyForDynamicBasing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsRunning()
    // endereco: cache_pdb_25090264
    bool IsRunning() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsRunning()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsSimulated()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsSimulated() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.IsSimulated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsSubmerged(bool,bool,bool,bool)
    // endereco: cache_pdb_25090264
    bool IsSubmerged(bool a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<bool, bool, bool, bool, bool>(this, "APrimalCharacter.IsSubmerged(bool,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsSwimmingOnWaterSurface()
    // endereco: casamento de bytes com a build de referencia
    bool IsSwimmingOnWaterSurface() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsSwimmingOnWaterSurface()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsTargetWithinTether(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    bool IsTargetWithinTether(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "APrimalCharacter.IsTargetWithinTether(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsTargetableDead()
    // endereco: cache_pdb_25090264
    bool IsTargetableDead() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsTargetableDead()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsTurningTooFastToRun(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=191]]
    bool IsTurningTooFastToRun(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalCharacter.IsTurningTooFastToRun(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsUsingHandIK()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=130]]
    bool IsUsingHandIK() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsUsingHandIK()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsValidForCombatMusic()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidForCombatMusic() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsValidForCombatMusic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsValidForStatusRecovery()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidForStatusRecovery() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsValidForStatusRecovery()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsVoiceTalking()
    // endereco: cache_pdb_25090264
    bool IsVoiceTalking() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsVoiceTalking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsWalkRunTransitioning()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsWalkRunTransitioning() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.IsWalkRunTransitioning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsWatered()
    // endereco: casamento de bytes com a build de referencia
    bool IsWatered() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsWatered()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.IsWearingCustomCosmetic(TEnumAsByte<EPrimalEquipmentType::Type>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWearingCustomCosmetic(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalCharacter.IsWearingCustomCosmetic(TEnumAsByte<EPrimalEquipmentType::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.IsWildSlow()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsWildSlow() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsWildSlow()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.IsWithinTether()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsWithinTether() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsWithinTether()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Landed(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void Landed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.Landed(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void LaunchCharacter(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalCharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>,bool,bool,UE::M
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LaunchCharacter_WithLocationOfImpulse(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "APrimalCharacter.LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>,bool,bool,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.LevelUpPlayerAddedStat(TEnumAsByte<EPrimalCharacterStatusValue::Type>,int,AShoo
    // endereco: casamento de bytes com a build de referencia
    int LevelUpPlayerAddedStat(unsigned char a0, int a1, void* a2, bool a3) const
    {
        return NativeCall<int, unsigned char, int, void*, bool>(this, "APrimalCharacter.LevelUpPlayerAddedStat(TEnumAsByte<EPrimalCharacterStatusValue::Type>,int,AShooterPlayerController*,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.LevelUpWildStat(TEnumAsByte<EPrimalCharacterStatusValue::Type>,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro LevelUpWildStat(unsigned char a0, int a1) const
    {
        return NativeCall<void*, unsigned char, int>(this, "APrimalCharacter.LevelUpWildStat(TEnumAsByte<EPrimalCharacterStatusValue::Type>,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.LivesInWater()
    // endereco: cache_pdb_25090264
    bool LivesInWater() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.LivesInWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.LocalPossessedBy(APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1112+grafo=13/13]]
    void LocalPossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.LocalPossessedBy(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.LocalUnpossessed_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void LocalUnpossessed_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.LocalUnpossessed_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.LookInput(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=194]]
    void LookInput(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.LookInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ModifyInputAcceleration(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool ModifyInputAcceleration(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.ModifyInputAcceleration(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ModifyRootMotion(FRootMotionMovementParams&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=259]]
    BrzPonteiro ModifyRootMotion(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalCharacter.ModifyRootMotion(FRootMotionMovementParams&,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ModifyRootMotionScale(float,UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    float ModifyRootMotionScale(float a0, void* a1) const
    {
        return NativeCall<float, float, void*>(this, "APrimalCharacter.ModifyRootMotionScale(float,UAnimMontage*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ModifyStasisComponentRadius(float)
    // endereco: casamento de bytes com a build de referencia
    void ModifyStasisComponentRadius(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.ModifyStasisComponentRadius(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.MoveForward(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MoveForward(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.MoveForward(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.MoveRight(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MoveRight(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.MoveRight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.MoveUp(float)
    // endereco: casamento de bytes com a build de referencia
    void MoveUp(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.MoveUp(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NativeOnLanded(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void NativeOnLanded(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.NativeOnLanded(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NativeSimulateHair(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    void NativeSimulateHair(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, void* a21, float a22, void* a23, float a24, void* a25, float a26, void* a27, float a28, float a29, void* a30, bool a31, bool a32, bool a33) const
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*, float, float, float, float, float, float, float, float, float, float, float, float, void*, float, void*, float, void*, float, void*, float, float, void*, bool, bool, bool>(this, "APrimalCharacter.NativeSimulateHair(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,float,float,float,float,float,float,float,float,float,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,UE::Math::TTransform<double>,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.NetAddCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool,EMovem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetAddCharacterMovementImpulse(void* a0, bool a1, float a2, bool a3, int a4, bool a5) const
    {
        return NativeCall<void*, void*, bool, float, bool, int, bool>(this, "APrimalCharacter.NetAddCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool,EMovementMode,bool)", a0, a1, a2, a3, a4, a5);
    }

    // dump_sobre_sdk_287a0
    //   APrimalCharacter.NetAddCharacterMovementImpulse_Implementation(UE::Math::TVector<double>,bool,fl
    // endereco: casamento de bytes com a build de referencia
    void NetAddCharacterMovementImpulse_Implementation(void* a0, bool a1, float a2, bool a3, int a4, bool a5) const
    {
        NativeCall<void, void*, bool, float, bool, int, bool>(this, "APrimalCharacter.NetAddCharacterMovementImpulse_Implementation(UE::Math::TVector<double>,bool,float,bool,EMovementMode,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.NetDidLand()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void NetDidLand() const
    {
        NativeCall<void>(this, "APrimalCharacter.NetDidLand()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetForceUpdateAimedCharacters_Implementation(UE::Math::TVector<double>,UE::Math
    // endereco: casamento de bytes com a build de referencia
    void NetForceUpdateAimedCharacters_Implementation(void* a0, void* a1, void* a2, bool a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, bool, float>(this, "APrimalCharacter.NetForceUpdateAimedCharacters_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,AActor*,bool,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.NetJumpToMontageSection_Implementation(FName,UAnimMontage*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    BrzPonteiro NetJumpToMontageSection_Implementation(unsigned long long a0, void* a1, bool a2) const
    {
        return NativeCall<void*, unsigned long long, void*, bool>(this, "APrimalCharacter.NetJumpToMontageSection_Implementation(FName,UAnimMontage*,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.NetOnJumped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void NetOnJumped() const
    {
        NativeCall<void>(this, "APrimalCharacter.NetOnJumped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetOnJumped_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=102]]
    void NetOnJumped_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.NetOnJumped_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetPlayDeathAnimIfNeeded_Implementation(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    void NetPlayDeathAnimIfNeeded_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.NetPlayDeathAnimIfNeeded_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetPlaySoundOnCharacter(USoundBase*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NetPlaySoundOnCharacter(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalCharacter.NetPlaySoundOnCharacter(USoundBase*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.NetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetSetCharacterMovementVelocity(bool a0, void* a1, bool a2, int a3) const
    {
        return NativeCall<void*, bool, void*, bool, int>(this, "APrimalCharacter.NetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMode)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetSetCharacterMovementVelocity_Implementation(bool,UE::Math::TVector<double>,b
    // endereco: cache_pdb_25090264
    void NetSetCharacterMovementVelocity_Implementation(bool a0, void* a1, bool a2, int a3) const
    {
        NativeCall<void, bool, void*, bool, int>(this, "APrimalCharacter.NetSetCharacterMovementVelocity_Implementation(bool,UE::Math::TVector<double>,bool,EMovementMode)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetSetMovementModeSimulatedInternal_Implementation(EMovementMode)
    // endereco: cache_pdb_25090264
    void NetSetMovementModeSimulatedInternal_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.NetSetMovementModeSimulatedInternal_Implementation(EMovementMode)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetSetReplicatedDeathAnim_Implementation(UAnimationAsset*)
    // endereco: cache_pdb_25090264
    void NetSetReplicatedDeathAnim_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.NetSetReplicatedDeathAnim_Implementation(UAnimationAsset*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.NetStopAllAnimMontage()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NetStopAllAnimMontage() const
    {
        NativeCall<void>(this, "APrimalCharacter.NetStopAllAnimMontage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetStopAllAnimMontage_Implementation()
    // endereco: cache_pdb_25090264
    void NetStopAllAnimMontage_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.NetStopAllAnimMontage_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NetUpdateTribeName(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NetUpdateTribeName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.NetUpdateTribeName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateTribeName(FString* a0) const
    { NetUpdateTribeName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NotifyBumpedByPawn(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyBumpedByPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.NotifyBumpedByPawn(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NotifyBumpedPawn(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void NotifyBumpedPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.NotifyBumpedPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NotifyEquippedItems()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    void NotifyEquippedItems() const
    {
        NativeCall<void>(this, "APrimalCharacter.NotifyEquippedItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NotifyItemAdded(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemAdded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalCharacter.NotifyItemAdded(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NotifyItemQuantityUpdated(UPrimalItem*,int)
    // endereco: cache_pdb_25090264
    void NotifyItemQuantityUpdated(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalCharacter.NotifyItemQuantityUpdated(UPrimalItem*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.NotifyItemRemoved(UPrimalItem*)
    // endereco: cache_pdb_25090264
    void NotifyItemRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.NotifyItemRemoved(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnAltFirePressed()
    // endereco: cache_pdb_25090264
    void OnAltFirePressed() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnAltFirePressed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnAttachedToCharacter()
    // endereco: cache_pdb_25090264
    void OnAttachedToCharacter() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnAttachedToCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnBeginDrag_Implementation(APrimalCharacter*,int,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=637+grafo=9/9]]
    void OnBeginDrag_Implementation(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalCharacter.OnBeginDrag_Implementation(APrimalCharacter*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnBeginDragged(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void OnBeginDragged(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.OnBeginDragged(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.OnCharacterStepped(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCharacterStepped(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.OnCharacterStepped(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnCharacterStepped_Implementation(UE::Math::TVector<double>,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    void OnCharacterStepped_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.OnCharacterStepped_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnConstruction(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    void OnConstruction(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.OnConstruction(UE::Math::TTransform<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "APrimalCharacter.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnDetachedFromCharacter(APrimalCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    void OnDetachedFromCharacter(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalCharacter.OnDetachedFromCharacter(APrimalCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnDraggedInterpEnded()
    // endereco: casamento de bytes com a build de referencia
    void OnDraggedInterpEnded() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnDraggedInterpEnded()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnDraggedStarted()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnDraggedStarted() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnDraggedStarted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnEndDrag_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void OnEndDrag_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnEndDrag_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnEndDragged(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnEndDragged(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.OnEndDragged(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.OnItemTraitEffectActivated(FName,float,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnItemTraitEffectActivated(unsigned long long a0, float a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, float, void*>(this, "APrimalCharacter.OnItemTraitEffectActivated(FName,float,FBPNetExecParams&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnJumped_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=136]]
    void OnJumped_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnJumped_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnMassTeleportEvent(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalCharacter.OnMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void OnMovementModeChanged(int a0, unsigned char a1) const
    {
        NativeCall<void, int, unsigned char>(this, "APrimalCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.OnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnNearbyCharacterDied(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "APrimalCharacter.OnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnPrimalCharacterSleeped()
    // endereco: cache_pdb_25090264
    void OnPrimalCharacterSleeped() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnPrimalCharacterSleeped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnPrimalCharacterUnsleeped()
    // endereco: cache_pdb_25090264
    void OnPrimalCharacterUnsleeped() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnPrimalCharacterUnsleeped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnRep_AttachmentReplication()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_AttachmentReplication() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_AttachmentReplication()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_BoardedUnderWaterCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void OnRep_BoardedUnderWaterCharacter() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_BoardedUnderWaterCharacter()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_DraggedCharacter()
    // endereco: cache_pdb_25090264
    void OnRep_DraggedCharacter() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_DraggedCharacter()");
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.OnRep_IsProne()
    // endereco: thunk
    void OnRep_IsProne() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_IsProne()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_IsSleeping()
    // endereco: cache_pdb_25090264
    void OnRep_IsSleeping() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_IsSleeping()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_MountedDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=89]]
    void OnRep_MountedDino() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_MountedDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_PaintingComponent()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_PaintingComponent() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_PaintingComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnRep_RagdollPositions()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_RagdollPositions() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_RagdollPositions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnRep_ReplicateMovement()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ReplicateMovement() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_ReplicateMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnRep_ReplicatedBasedMovement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    void OnRep_ReplicatedBasedMovement() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_ReplicatedBasedMovement()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_ReplicatedIsSubmerged()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    void OnRep_ReplicatedIsSubmerged() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_ReplicatedIsSubmerged()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRep_SecondaryMountedDino()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_SecondaryMountedDino() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRep_SecondaryMountedDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.OnRunToggle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void OnRunToggle() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRunToggle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnRunTogglePressed()
    // endereco: casamento de bytes com a build de referencia
    void OnRunTogglePressed() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRunTogglePressed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnRunToggleReleased()
    // endereco: casamento de bytes com a build de referencia
    void OnRunToggleReleased() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnRunToggleReleased()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStartAltFire()
    // endereco: casamento de bytes com a build de referencia
    void OnStartAltFire() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStartAltFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.OnStartFire_Code(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnStartFire_Code(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.OnStartFire_Code(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStartJump()
    // endereco: casamento de bytes com a build de referencia
    void OnStartJump() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStartJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStartRunning()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=194+grafo=3/3]]
    void OnStartRunning() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStartRunning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStartTargeting()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=158+grafo=3/3]]
    void OnStartTargeting() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStartTargeting()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.OnStartedAllyTargetLooking(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnStartedAllyTargetLooking(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.OnStartedAllyTargetLooking(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStopAltFire()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=607+grafo=7/7]]
    void OnStopAltFire() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStopAltFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.OnStopFire_Code(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnStopFire_Code(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.OnStopFire_Code(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStopJump()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+grafo=3/3]]
    void OnStopJump() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStopJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnStopRunning()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=161+grafo=3/3]]
    void OnStopRunning() const
    {
        NativeCall<void>(this, "APrimalCharacter.OnStopRunning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnUROPostInterpolation(float,USkeletalMeshComponent*,TArray<UE::Math::TTransfor
    // endereco: casamento de bytes com a build de referencia
    void OnUROPostInterpolation(float a0, void* a1, void* a2) const
    {
        NativeCall<void, float, void*, void*>(this, "APrimalCharacter.OnUROPostInterpolation(float,USkeletalMeshComponent*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnUpdateSimulatedPosition(UE::Math::TVector<double>&,UE::Math::TQuat<double>&)
    // endereco: casamento de bytes com a build de referencia
    void OnUpdateSimulatedPosition(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.OnUpdateSimulatedPosition(UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OnVoiceTalkingStateChanged(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnVoiceTalkingStateChanged(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalCharacter.OnVoiceTalkingStateChanged(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OrbitCamOff()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=366]]
    void OrbitCamOff() const
    {
        NativeCall<void>(this, "APrimalCharacter.OrbitCamOff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OrbitCamOn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=440+grafo=4/4]]
    void OrbitCamOn() const
    {
        NativeCall<void>(this, "APrimalCharacter.OrbitCamOn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OrbitCamToggle()
    // endereco: cache_pdb_25090264
    void OrbitCamToggle() const
    {
        NativeCall<void>(this, "APrimalCharacter.OrbitCamToggle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideCameraInterpSpeed(float,float,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void OverrideCameraInterpSpeed(float a0, float a1, void* a2, void* a3) const
    {
        NativeCall<void, float, float, void*, void*>(this, "APrimalCharacter.OverrideCameraInterpSpeed(float,float,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideCameraTargetOriginLocation(UE::Math::TVector<double>&,FName)
    // endereco: casamento de bytes com a build de referencia
    void OverrideCameraTargetOriginLocation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalCharacter.OverrideCameraTargetOriginLocation(UE::Math::TVector<double>&,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideCharacterSound(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    USoundBase* OverrideCharacterSound(void* a0) const
    {
        return NativeCall<USoundBase*, void*>(this, "APrimalCharacter.OverrideCharacterSound(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,fl
    // endereco: cache_pdb_25090264
    void OverrideFlyingVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalCharacter.OverrideFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,f
    // endereco: cache_pdb_25090264
    void OverrideNewFallVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalCharacter.OverrideNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,
    // endereco: cache_pdb_25090264
    void OverrideSwimmingVelocity(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, void*, float>(this, "APrimalCharacter.OverrideSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideTerminalVelocity()
    // endereco: cache_pdb_25090264
    float OverrideTerminalVelocity() const
    {
        return NativeCall<float>(this, "APrimalCharacter.OverrideTerminalVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.OverrideWalkingVelocity(UE::Math::TVector<double>&,float&,float)
    // endereco: cache_pdb_25090264
    void OverrideWalkingVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalCharacter.OverrideWalkingVelocity(UE::Math::TVector<double>&,float&,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.PausedAnimSharingLeaderComponent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PausedAnimSharingLeaderComponent() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.PausedAnimSharingLeaderComponent()");
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.PlayAnimEx(UAnimMontage*,float,FName,bool,bool,bool,bool,bool,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    float PlayAnimEx(void* a0, float a1, unsigned long long a2, bool a3, bool a4, bool a5, bool a6, bool a7, float a8, float a9, bool a10) const
    {
        return NativeCall<float, void*, float, unsigned long long, bool, bool, bool, bool, bool, float, float, bool>(this, "APrimalCharacter.PlayAnimEx(UAnimMontage*,float,FName,bool,bool,bool,bool,bool,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)
    // endereco: casamento de bytes com a build de referencia
    float PlayAnimMontage(void* a0, float a1, unsigned long long a2, bool a3, bool a4, float a5, float a6) const
    {
        return NativeCall<float, void*, float, unsigned long long, bool, bool, float, float>(this, "APrimalCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayDeathAnimIfNeeded(bool)
    // endereco: casamento de bytes com a build de referencia
    void PlayDeathAnimIfNeeded(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.PlayDeathAnimIfNeeded(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.PlayDyingGeneric(float,FDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDyingGeneric(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalCharacter.PlayDyingGeneric(float,FDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.PlayDyingPoint(float,FPointDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDyingPoint(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalCharacter.PlayDyingPoint(float,FPointDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.PlayDyingRadial(float,FRadialDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDyingRadial(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalCharacter.PlayDyingRadial(float,FRadialDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayFootstep()
    // endereco: casamento de bytes com a build de referencia
    UAudioComponent* PlayFootstep() const
    {
        return NativeCall<UAudioComponent*>(this, "APrimalCharacter.PlayFootstep()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void PlayHitEffect(float a0, void* a1, void* a2, void* a3, bool a4, bool a5) const
    {
        NativeCall<void, float, void*, void*, void*, bool, bool>(this, "APrimalCharacter.PlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayHitEffectPoint(float,FPointDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    void PlayHitEffectPoint(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalCharacter.PlayHitEffectPoint(float,FPointDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayHitEffectRadial(float,FRadialDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    void PlayHitEffectRadial(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalCharacter.PlayHitEffectRadial(float,FRadialDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayHurtAnim(float,FDamageEvent&,APawn*,AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void PlayHurtAnim(float a0, void* a1, void* a2, void* a3, bool a4) const
    {
        NativeCall<void, float, void*, void*, void*, bool>(this, "APrimalCharacter.PlayHurtAnim(float,FDamageEvent&,APawn*,AActor*,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayJumpAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlayJumpAnim() const
    {
        NativeCall<void>(this, "APrimalCharacter.PlayJumpAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PlayLandedAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlayLandedAnim() const
    {
        NativeCall<void>(this, "APrimalCharacter.PlayLandedAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Poop(bool)
    // endereco: casamento de bytes com a build de referencia
    bool Poop(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalCharacter.Poop(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PossessedBy(AController*)
    // endereco: casamento de bytes com a build de referencia
    void PossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.PossessedBy(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalCharacter.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic
    // endereco: casamento de bytes com a build de referencia
    void PostProcessModifyBlendableMaterial(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalCharacter.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PrepareForSaving()
    // endereco: casamento de bytes com a build de referencia
    void PrepareForSaving() const
    {
        NativeCall<void>(this, "APrimalCharacter.PrepareForSaving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreventInputDoesOffset()
    // endereco: cache_pdb_25090264
    bool PreventInputDoesOffset() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.PreventInputDoesOffset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreventInputType(EPrimalCharacterInputType::Type)
    // endereco: casamento de bytes com a build de referencia
    bool PreventInputType(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalCharacter.PreventInputType(EPrimalCharacterInputType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreventLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    char PreventLanding(void* a0, void* a1, void* a2) const
    {
        return NativeCall<char, void*, void*, void*>(this, "APrimalCharacter.PreventLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreventNotifySound(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    bool PreventNotifySound(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.PreventNotifySound(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreventsTargeting(AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=141]]
    bool PreventsTargeting(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.PreventsTargeting(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.PreventsTargeting_Implementation(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool PreventsTargeting_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.PreventsTargeting_Implementation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ProcessUndergoundCheck()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessUndergoundCheck() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.ProcessUndergoundCheck()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Prone(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    void Prone(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.Prone(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RecalculateBaseEyeHeight()
    // classe: a funcao mora em APawn, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void RecalculateBaseEyeHeight() const
    {
        NativeCall<void>(this, "APawn.RecalculateBaseEyeHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RefreshBiomeZoneVolumes()
    // endereco: casamento de bytes com a build de referencia
    void RefreshBiomeZoneVolumes() const
    {
        NativeCall<void>(this, "APrimalCharacter.RefreshBiomeZoneVolumes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RegisterAllComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    void RegisterAllComponents() const
    {
        NativeCall<void>(this, "APrimalCharacter.RegisterAllComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.RegisterWithAnimSharing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWithAnimSharing() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.RegisterWithAnimSharing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.RegisterWithManagers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWithManagers() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.RegisterWithManagers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.RegisterWithMassMoving()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWithMassMoving() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.RegisterWithMassMoving()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ReinitAnims()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReinitAnims() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.ReinitAnims()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RemoveAllJumpDeactivatedBuffs(APrimalBuff*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveAllJumpDeactivatedBuffs(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.RemoveAllJumpDeactivatedBuffs(APrimalBuff*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RemoveBasedPawns(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveBasedPawns(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.RemoveBasedPawns(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RemoveCharacterSnapshot(UPrimalItem*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveCharacterSnapshot(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalCharacter.RemoveCharacterSnapshot(UPrimalItem*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCharacterSnapshotEquipmentForItem(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalCharacter.RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.RemoveFromCharactersGrappledToMe(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveFromCharactersGrappledToMe(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.RemoveFromCharactersGrappledToMe(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ReplicateRagdoll()
    // endereco: casamento de bytes com a build de referencia
    void ReplicateRagdoll() const
    {
        NativeCall<void>(this, "APrimalCharacter.ReplicateRagdoll()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.RequestPoop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=708]]
    void RequestPoop() const
    {
        NativeCall<void>(this, "APrimalCharacter.RequestPoop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ResetCollisionSweepLocation(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ResetCollisionSweepLocation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalCharacter.ResetCollisionSweepLocation(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ResetMeshTransformToDefaults()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ResetMeshTransformToDefaults() const
    {
        NativeCall<void>(this, "APrimalCharacter.ResetMeshTransformToDefaults()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ResetStencilValues()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetStencilValues() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.ResetStencilValues()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerCallAttackTarget(AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void ServerCallAttackTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ServerCallAttackTarget(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalCharacter.ServerCallFollowOne(APrimalDinoCharacter*)
    // endereco: cache_pdb_25090264
    void ServerCallFollowOne(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ServerCallFollowOne(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerCaptureDermis(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCaptureDermis(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ServerCaptureDermis(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerCaptureDermis_Implementation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void ServerCaptureDermis_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ServerCaptureDermis_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerDinoOrder(APrimalDinoCharacter*,EDinoTamedOrder::Type,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ServerDinoOrder(void* a0, int a1, void* a2) const
    {
        NativeCall<void, void*, int, void*>(this, "APrimalCharacter.ServerDinoOrder(APrimalDinoCharacter*,EDinoTamedOrder::Type,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerDinoOrder_Implementation(APrimalDinoCharacter*,EDinoTamedOrder::Type,AAct
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void ServerDinoOrder_Implementation(void* a0, int a1, void* a2) const
    {
        NativeCall<void, void*, int, void*>(this, "APrimalCharacter.ServerDinoOrder_Implementation(APrimalDinoCharacter*,EDinoTamedOrder::Type,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ServerGiveDefaultWeapon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerGiveDefaultWeapon() const
    {
        NativeCall<void>(this, "APrimalCharacter.ServerGiveDefaultWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ServerRequestDragTarget(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void ServerRequestDragTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ServerRequestDragTarget(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerRequestDrag_Implementation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerRequestDrag_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ServerRequestDrag_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerSetRunning_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ServerSetRunning_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.ServerSetRunning_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerTryPoop_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    void ServerTryPoop_Implementation() const
    {
        NativeCall<void>(this, "APrimalCharacter.ServerTryPoop_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ServerUploadCharacter(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ServerUploadCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ServerUploadCharacter(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetBase(UPrimitiveComponent*,FName,bool)
    // classe: a funcao mora em ACharacter, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void SetBase(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "ACharacter.SetBase(UPrimitiveComponent*,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetBiomeZoneVolume(ABiomeZoneVolume*)
    // endereco: casamento de bytes com a build de referencia
    void SetBiomeZoneVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetBiomeZoneVolume(ABiomeZoneVolume*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetBoardedUnderWaterCharacter(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void SetBoardedUnderWaterCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetBoardedUnderWaterCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetCameraProfile_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    void SetCameraProfile_Implementation(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalCharacter.SetCameraProfile_Implementation(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetCarryingDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetCarryingDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetCarryingDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetCharacterAndRagdollLocation(UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetCharacterAndRagdollLocation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetCharacterAndRagdollLocation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetCharacterMeshesMaterialScalarParamValue(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "APrimalCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetDeath(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetDeath(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalCharacter.SetDeath(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetDefaultCameraStyleForController(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    void SetDefaultCameraStyleForController(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetDefaultCameraStyleForController(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetDynamicMusic(USoundBase*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void SetDynamicMusic(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetDynamicMusic(USoundBase*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetEnableIK(bool)
    // endereco: cache_pdb_25090264
    void SetEnableIK(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.SetEnableIK(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetHealth(float)
    // endereco: casamento de bytes com a build de referencia
    float SetHealth(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalCharacter.SetHealth(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetLastCausedDamageTime(double)
    // endereco: cache_pdb_25090264
    void SetLastCausedDamageTime(double a0) const
    {
        NativeCall<void, double>(this, "APrimalCharacter.SetLastCausedDamageTime(double)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetMovementTether(AActor*,float,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetMovementTether(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APrimalCharacter.SetMovementTether(AActor*,float,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetMyInventoryComponent(UPrimalInventoryComponent*)
    // endereco: cache_pdb_25090264
    void SetMyInventoryComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetMyInventoryComponent(UPrimalInventoryComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetNextAnimMontageSectionEx(UAnimMontage*,FName,FName,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetNextAnimMontageSectionEx(void* a0, unsigned long long a1, unsigned long long a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, unsigned long long, unsigned long long, bool, bool, bool>(this, "APrimalCharacter.SetNextAnimMontageSectionEx(UAnimMontage*,FName,FName,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetRagdollPhysics(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetRagdollPhysics(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "APrimalCharacter.SetRagdollPhysics(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetRagdollReplication(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetRagdollReplication(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.SetRagdollReplication(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetReplicateMovement(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetReplicateMovement(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.SetReplicateMovement(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetRunning(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetRunning(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.SetRunning(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetSleeping(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSleeping(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "APrimalCharacter.SetSleeping(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.SetThrallAttackDecision(EThrallAttackDecision::Type,float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetThrallAttackDecision(int a0, float a1) const
    {
        return NativeCall<void*, int, float>(this, "APrimalCharacter.SetThrallAttackDecision(EThrallAttackDecision::Type,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetTribeThreat(int)
    // endereco: casamento de bytes com a build de referencia
    int SetTribeThreat(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalCharacter.SetTribeThreat(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.SetUseOptimizedPhysWalkingChecks(bool)
    // endereco: cache_pdb_25090264
    void SetUseOptimizedPhysWalkingChecks(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.SetUseOptimizedPhysWalkingChecks(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.SetupAttackerDamageImpactFX(APrimalCharacter*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupAttackerDamageImpactFX(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.SetupAttackerDamageImpactFX(APrimalCharacter*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.SetupPlayerInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ShouldASACameraSwitchToOld(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=139]]
    bool ShouldASACameraSwitchToOld(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalCharacter.ShouldASACameraSwitchToOld(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ShouldAttackStopMoveCollapsing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldAttackStopMoveCollapsing() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.ShouldAttackStopMoveCollapsing()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ShouldBuffsInterceptInputEventOverwriteUsualFunctionality(FString)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldBuffsInterceptInputEventOverwriteUsualFunctionality(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.ShouldBuffsInterceptInputEventOverwriteUsualFunctionality(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool ShouldBuffsInterceptInputEventOverwriteUsualFunctionality(FString* a0) const
    { return ShouldBuffsInterceptInputEventOverwriteUsualFunctionality(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ShouldDealDamageTo(APrimalCharacter*,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDealDamageTo(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, bool, bool, bool>(this, "APrimalCharacter.ShouldDealDamageTo(APrimalCharacter*,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ShouldDisableCameraInterpolation()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDisableCameraInterpolation() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.ShouldDisableCameraInterpolation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ShouldForceCameraStyle(APrimalCharacter*,ECameraStyle::Type&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldForceCameraStyle(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalCharacter.ShouldForceCameraStyle(APrimalCharacter*,ECameraStyle::Type&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldIgnoreHitResult(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalCharacter.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ShouldPreventCharacterBasing(APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ShouldPreventCharacterBasing(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.ShouldPreventCharacterBasing(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ShouldUseASACamera(bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseASACamera(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalCharacter.ShouldUseASACamera(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ShouldUseArmorDurabilityVFX()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseArmorDurabilityVFX() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.ShouldUseArmorDurabilityVFX()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.ShouldUseAutonomousCorrectionOffset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool ShouldUseAutonomousCorrectionOffset() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.ShouldUseAutonomousCorrectionOffset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ShouldUseLongFallCameraPivotZValues()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseLongFallCameraPivotZValues() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.ShouldUseLongFallCameraPivotZValues()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ShouldUseWaveLocking(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=486]]
    BrzPonteiro ShouldUseWaveLocking(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.ShouldUseWaveLocking(bool)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalCharacter.StartForceSkelUpdate(float,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartForceSkelUpdate(float a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, float, bool, bool, bool>(this, "APrimalCharacter.StartForceSkelUpdate(float,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.StartForceSkelUpdateForMesh(USkeletalMeshComponent*,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartForceSkelUpdateForMesh(void* a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "APrimalCharacter.StartForceSkelUpdateForMesh(USkeletalMeshComponent*,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Stasis()
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalCharacter.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StaticApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,flo
    // endereco: casamento de bytes com a build de referencia
    static void StaticApplyCharacterSnapshot(void* a0, void* a1, void* a2, float a3, int a4, bool a5)
    {
        NativeCall<void, void*, void*, void*, float, int, bool>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StaticApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=569+grafo=13/13]]
    static void StaticApplyCharacterSnapshotEquipment(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.StaticApplyCustomSnapshotOverride(UPrimalItem*,AActor*,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticApplyCustomSnapshotOverride(void* a0, void* a1, void* a2, float a3, void* a4, int a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*, int, bool>(this, "APrimalCharacter.StaticApplyCustomSnapshotOverride(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,FPrimalSnapshotPose,int,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StaticGetSnapshotPose(UPrimalItem*,int)
    // endereco: casamento de bytes com a build de referencia
    static void StaticGetSnapshotPose(void* retorno, void* a0, int a1)
    {
        NativeCall<void, void*, void*, int>(nullptr, "APrimalCharacter.StaticGetSnapshotPose(UPrimalItem*,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StaticGetSnapshotPoseCount(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    static int StaticGetSnapshotPoseCount(void* a0)
    {
        return NativeCall<int, void*>(nullptr, "APrimalCharacter.StaticGetSnapshotPoseCount(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StaticRegisterNativesAPrimalCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAPrimalCharacter()
    {
        NativeCall<void>(nullptr, "APrimalCharacter.StaticRegisterNativesAPrimalCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StaticRemoveCharacterSnapshot(UPrimalItem*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void StaticRemoveCharacterSnapshot(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "APrimalCharacter.StaticRemoveCharacterSnapshot(UPrimalItem*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.StopAllAnimMontages(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro StopAllAnimMontages(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalCharacter.StopAllAnimMontages(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StopAnimEx(UAnimMontage*,bool,bool,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=146]]
    void StopAnimEx(void* a0, bool a1, bool a2, float a3) const
    {
        NativeCall<void, void*, bool, bool, float>(this, "APrimalCharacter.StopAnimEx(UAnimMontage*,bool,bool,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.StopAnimMontage(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=16]]
    void StopAnimMontage(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.StopAnimMontage(UAnimMontage*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.StopJumpAnim()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void StopJumpAnim() const
    {
        NativeCall<void>(this, "APrimalCharacter.StopJumpAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.StopSkinOverrideMontage(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    BrzPonteiro StopSkinOverrideMontage(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.StopSkinOverrideMontage(UAnimMontage*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Suicide()
    // endereco: casamento de bytes com a build de referencia
    void Suicide() const
    {
        NativeCall<void>(this, "APrimalCharacter.Suicide()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TagFriendlyStructures()
    // endereco: casamento de bytes com a build de referencia
    void TagFriendlyStructures() const
    {
        NativeCall<void>(this, "APrimalCharacter.TagFriendlyStructures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APrimalCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TakeFallingDamage(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void TakeFallingDamage(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.TakeFallingDamage(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TeleportSucceeded(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void TeleportSucceeded(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalCharacter.TeleportSucceeded(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=137]]
    bool TeleportTo(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, bool, bool>(this, "APrimalCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TermRagdollRepConstraints()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    void TermRagdollRepConstraints() const
    {
        NativeCall<void>(this, "APrimalCharacter.TermRagdollRepConstraints()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Tick(float)
    // classe: a funcao mora em AActor, e APrimalCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AActor.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TickBeingDragged(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void TickBeingDragged(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.TickBeingDragged(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.TickMovementComponent(float)
    // endereco: casamento de bytes com a build de referencia
    void TickMovementComponent(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.TickMovementComponent(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.ToggleCameraProbeModePressed(FKey)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleCameraProbeModePressed(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalCharacter.ToggleCameraProbeModePressed(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ToggleCameraProbeModePressed1(FKey)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void ToggleCameraProbeModePressed1(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ToggleCameraProbeModePressed1(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ToggleCameraProbeModePressed2(FKey)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void ToggleCameraProbeModePressed2(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ToggleCameraProbeModePressed2(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ToggleCameraProbeModeReleased1(FKey)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ToggleCameraProbeModeReleased1(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ToggleCameraProbeModeReleased1(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ToggleCameraProbeModeReleased2(FKey)
    // endereco: casamento de bytes com a build de referencia
    void ToggleCameraProbeModeReleased2(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.ToggleCameraProbeModeReleased2(FKey)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryAccessInventory()
    // endereco: casamento de bytes com a build de referencia
    bool TryAccessInventory() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.TryAccessInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryAccessInventoryReleased()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void TryAccessInventoryReleased() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryAccessInventoryReleased()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryCallAttackTarget()
    // endereco: casamento de bytes com a build de referencia
    void TryCallAttackTarget() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryCallAttackTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryCallFollowOne()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TryCallFollowOne() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryCallFollowOne()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryCallMoveTo()
    // endereco: casamento de bytes com a build de referencia
    void TryCallMoveTo() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryCallMoveTo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryCallMoveToEx(bool)
    // endereco: casamento de bytes com a build de referencia
    void TryCallMoveToEx(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.TryCallMoveToEx(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryDragCharacter()
    // endereco: casamento de bytes com a build de referencia
    void TryDragCharacter() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryDragCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryDragCharacterTarget(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool TryDragCharacterTarget(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalCharacter.TryDragCharacterTarget(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryGiveDefaultWeapon()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=640+grafo=7/7]]
    void TryGiveDefaultWeapon() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryGiveDefaultWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryGiveDefaultWeaponReleased()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TryGiveDefaultWeaponReleased() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryGiveDefaultWeaponReleased()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalCharacter.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryPlayDeathAnim()
    // endereco: casamento de bytes com a build de referencia
    void TryPlayDeathAnim() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryPlayDeathAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryPlaySleepingAnim(bool)
    // endereco: casamento de bytes com a build de referencia
    void TryPlaySleepingAnim(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.TryPlaySleepingAnim(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TryPoop()
    // endereco: casamento de bytes com a build de referencia
    void TryPoop() const
    {
        NativeCall<void>(this, "APrimalCharacter.TryPoop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TurnAtRate(float)
    // endereco: casamento de bytes com a build de referencia
    void TurnAtRate(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.TurnAtRate(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.TurnInput(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void TurnInput(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.TurnInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UnPossessed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=6]]
    void UnPossessed() const
    {
        NativeCall<void>(this, "APrimalCharacter.UnPossessed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UnProne(bool)
    // endereco: cache_pdb_25090264
    void UnProne(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalCharacter.UnProne(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UnpauseAnimSharing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=13]]
    BrzPonteiro UnpauseAnimSharing() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UnpauseAnimSharing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UnregisterWithAnimSharing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78+grafo=3/3]]
    BrzPonteiro UnregisterWithAnimSharing() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UnregisterWithAnimSharing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UnregisterWithManagers()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UnregisterWithManagers() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UnregisterWithManagers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UnregisterWithMassMoving()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterWithMassMoving() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UnregisterWithMassMoving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalCharacter.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateAllEquippedItemsDurabilityMaterials()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAllEquippedItemsDurabilityMaterials() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateAllEquippedItemsDurabilityMaterials()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateAllEquippedItemsDurabilityVariables()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    void UpdateAllEquippedItemsDurabilityVariables() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateAllEquippedItemsDurabilityVariables()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UpdateBasedOnDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=25/25]]
    BrzPonteiro UpdateBasedOnDino() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UpdateBasedOnDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateDragging()
    // endereco: casamento de bytes com a build de referencia
    void UpdateDragging() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateDragging()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateEquippedItemDurabilityMaterials(FItemNetID,float)
    // endereco: cache_pdb_25090264
    void UpdateEquippedItemDurabilityMaterials(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "APrimalCharacter.UpdateEquippedItemDurabilityMaterials(FItemNetID,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateEquippedItemDurabilityVariable(FItemNetID,float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=75]]
    void UpdateEquippedItemDurabilityVariable(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "APrimalCharacter.UpdateEquippedItemDurabilityVariable(FItemNetID,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalCharacter.UpdateHasBuffPreSerialize()
    // endereco: cache_pdb_25090264
    bool UpdateHasBuffPreSerialize() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.UpdateHasBuffPreSerialize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateIK()
    // endereco: casamento de bytes com a build de referencia
    void UpdateIK() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateIK()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateNetDynamicMusic()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=9/9]]
    void UpdateNetDynamicMusic() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateNetDynamicMusic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateRagdollReplicationOnClient()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateRagdollReplicationOnClient() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateRagdollReplicationOnClient()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateReplicatedBasedMovement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=99]]
    void UpdateReplicatedBasedMovement() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateReplicatedBasedMovement()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UpdateRunSounds(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=83]]
    BrzPonteiro UpdateRunSounds(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalCharacter.UpdateRunSounds(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateStatusComponent(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateStatusComponent(float a0) const
    {
        NativeCall<void, float>(this, "APrimalCharacter.UpdateStatusComponent(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateStencilValues()
    // endereco: casamento de bytes com a build de referencia
    void UpdateStencilValues() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateStencilValues()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateSwimmingState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=140]]
    void UpdateSwimmingState() const
    {
        NativeCall<void>(this, "APrimalCharacter.UpdateSwimmingState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UpdateTribeName(FString)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=153+chamadores=9]]
    void UpdateTribeName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalCharacter.UpdateTribeName(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UpdateTribeName(FString* a0) const
    { UpdateTribeName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UseASACamaraPivotLocationForOldCamera()
    // endereco: cache_pdb_25090264
    BrzPonteiro UseASACamaraPivotLocationForOldCamera() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UseASACamaraPivotLocationForOldCamera()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UseCenteredTPVCamera()
    // endereco: cache_pdb_25090264
    bool UseCenteredTPVCamera() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.UseCenteredTPVCamera()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UseClearOnConsumeInput()
    // endereco: cache_pdb_25090264
    bool UseClearOnConsumeInput() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.UseClearOnConsumeInput()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UseFastTurretTargeting()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UseFastTurretTargeting() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UseFastTurretTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.UseOverrideWaterJumpVelocity()
    // endereco: cache_pdb_25090264
    bool UseOverrideWaterJumpVelocity() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.UseOverrideWaterJumpVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalCharacter.UsesFlyerSpeedLeveling()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UsesFlyerSpeedLeveling() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.UsesFlyerSpeedLeveling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ValidatePaintingComponentOctree()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ValidatePaintingComponentOctree() const
    {
        NativeCall<void>(this, "APrimalCharacter.ValidatePaintingComponentOctree()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.WantsToUseRagdollForDeath()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool WantsToUseRagdollForDeath() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.WantsToUseRagdollForDeath()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.WantsToUseRagdollForSleeping()
    // endereco: casamento de bytes com a build de referencia
    bool WantsToUseRagdollForSleeping() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.WantsToUseRagdollForSleeping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ZoomIn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void ZoomIn() const
    {
        NativeCall<void>(this, "APrimalCharacter.ZoomIn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalCharacter.ZoomOut()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ZoomOut() const
    {
        NativeCall<void>(this, "APrimalCharacter.ZoomOut()");
    }

    // ── SEM ENDERECO NESTA BUILD: o ajudante abaixo responde por elas ──
    //    APrimalCharacter.GetCharacterStatusComponent()
    //    APrimalCharacter.GetHealth()
    //    APrimalCharacter.HasCryoSickness()
    //    APrimalCharacter.IsConscious()
    //    APrimalCharacter.IsDead()

    BrzCampoPonteiro ASACameraConfigClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.ASACameraConfigClass")); }
    float& AccurateOceanVolumeOverlapsCapsuleHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.AccurateOceanVolumeOverlapsCapsuleHeightMultiplier"); }
    float& AddForwardVelocityOnJumpField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.AddForwardVelocityOnJump"); }
    float& AddForwardVelocityOnJumpMaxSpeedMultiplierClampField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.AddForwardVelocityOnJumpMaxSpeedMultiplierClamp"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +68, medido na build 25090264
    //  (offset absoluto medido: 0x16C0; confianca media)
    void*& AnimSharingOverrideTimerField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 68); }
    BrzCampoPonteiro AnimSharingStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.AnimSharingState")); }
    TArray<void*>& AnimationsPreventInputField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.AnimationsPreventInput"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +120, medido na build 25090264
    //  (offset absoluto medido: 0x1110; confianca media)
    void*& ApplyBiomeZoneBuffHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +240, medido na build 25090264
    //  (offset absoluto medido: 0xF18; confianca baixa)
    void*& AutonomousCorrectionOffsetField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 240); }
    float& BPTimerNonDedicatedMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerNonDedicatedMax"); }
    float& BPTimerNonDedicatedMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerNonDedicatedMin"); }
    float& BPTimerServerMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerServerMax"); }
    float& BPTimerServerMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerServerMin"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1688; confianca alta)
    float& BaseLookUpRateField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 12); }
    float& BaseTargetingDesirabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseTargetingDesirability"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1684; confianca alta)
    float& BaseTurnRateField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NiagaraSystemsToActivateAfterDragged` +80, medido na build 25090264
    //  (offset absoluto medido: 0xBA8; confianca media)
    void*& BasedCharacterSetField() const
    { return BrzCampoAncorado<void*>(this, "NiagaraSystemsToActivateAfterDragged", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +24, medido na build 25090264
    //  (offset absoluto medido: 0x11B0; confianca alta)
    TWeakObjectPtr<void>& BasedElevatorField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "TetherActor", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +112, medido na build 25090264
    //  (offset absoluto medido: 0xAC0; confianca media)
    TArray<ABiomeZoneVolume*>& BiomeZoneVolumesField() const
    { return BrzCampoAncorado<TArray<ABiomeZoneVolume*>>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 112); }
    float& BlinkDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BlinkDuration"); }
    TWeakObjectPtr<void>& BoardedUnderWaterCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.BoardedUnderWaterCharacter"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.BoneDamageAdjusters"); }
    BrzCampoPonteiro BoneIndexArrayForDataChannelVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.BoneIndexArrayForDataChannelVFX")); }
    BrzCampoPonteiro BoneScaleArrayForDataChannelVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.BoneScaleArrayForDataChannelVFX")); }
    TArray<void*>& BonesToIngoreWhileDraggedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.BonesToIngoreWhileDragged"); }
    float& BuffedDamageMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BuffedDamageMult"); }
    float& BuffedResistanceMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.BuffedResistanceMult"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA60; confianca media)
    TArray<APrimalBuff*>& BuffsField() const
    { return BrzCampoAncorado<TArray<APrimalBuff*>>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +20, medido na build 25090264
    //  (offset absoluto medido: 0x16EC; confianca alta)
    int& CachedNumberOfClientRagdollCorrectionAttemptsField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 20); }
    BrzCampoPonteiro Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReductionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction")); }
    BrzCampoPonteiro Cached_GeneTraitWeightReductionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.Cached_GeneTraitWeightReductions")); }
    FName& CameraProfileIdOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalCharacter.CameraProfileIdOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CharacterSavedDynamicBaseBoneName` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1020; confianca alta)
    FName& CapsulePreRagdollCollisionProfileNameField() const
    { return BrzCampoAncorado<FName>(this, "CharacterSavedDynamicBaseBoneName", 16); }
    TWeakObjectPtr<void>& CarryingDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.CarryingDino"); }
    float& CharacterLocalControlZInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.CharacterLocalControlZInterpSpeed"); }
    AActor*& CharacterSavedDynamicBaseField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalCharacter.CharacterSavedDynamicBase"); }
    FName& CharacterSavedDynamicBaseBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalCharacter.CharacterSavedDynamicBaseBoneName"); }
    BrzCampoPonteiro CharacterSavedDynamicBaseRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.CharacterSavedDynamicBaseRelativeLocation")); }
    BrzCampoPonteiro CharacterSavedDynamicBaseRelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.CharacterSavedDynamicBaseRelativeRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +128, medido na build 25090264
    //  (offset absoluto medido: 0xAD0; confianca media)
    TArray<TWeakObjectPtr<void>>& CharactersGrappledToMeField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +40, medido na build 25090264
    //  (offset absoluto medido: 0x16A4; confianca media)
    float& ClientForceSleepRagdollIntervalField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 40); }
    float& ClientLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientLocationInterpSpeed"); }
    float& ClientPositionErrorToleranceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientPositionErrorToleranceSquared"); }
    float& ClientRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientRotationInterpSpeed"); }
    BrzCampoPonteiro CombatIdleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.CombatIdle")); }
    double& CorpseDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.CorpseDestructionTime"); }
    float& CorpseDestructionTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseDestructionTimer"); }
    float& CorpseFadeAwayTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseFadeAwayTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +52, medido na build 25090264
    //  (offset absoluto medido: 0x16B0; confianca media)
    float& CorpseHarvestFadeTimeField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 52); }
    float& CorpseLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseLifespan"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetableDamageFXDefaultPhysMaterial` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1707; confianca alta)
    void*& CostumeEquipmentSlotTypeField() const
    { return BrzCampoAncorado<void*>(this, "TargetableDamageFXDefaultPhysMaterial", 4); }
    BrzCampoPonteiro CurrentAimRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.CurrentAimRot")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1690; confianca alta)
    float& CurrentCarriedYawField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPrimalCameraConfig` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1360; confianca alta)
    void*& CurrentDamageEventField() const
    { return BrzCampoAncorado<void*>(this, "CurrentPrimalCameraConfig", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +4, medido na build 25090264
    //  (offset absoluto medido: 0x16DC; confianca alta)
    int& CurrentFrameAnimPreventInputField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +216, medido na build 25090264
    //  (offset absoluto medido: 0xF00; confianca baixa)
    void*& CurrentLocalRootLocField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 216); }
    BrzCampoPonteiro CurrentPrimalCameraConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.CurrentPrimalCameraConfig")); }
    BrzCampoPonteiro CurrentRootLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.CurrentRootLoc")); }
    UToolTipWidget*& CustomTooltipWidgetField() const
    { return *GetNativePointerField<UToolTipWidget**>(this, "APrimalCharacter.CustomTooltipWidget"); }
    float& DamageNotifyTeamAggroRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DamageNotifyTeamAggroRange"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.DamageTypeAdjusters"); }
    BrzCampoPonteiro DataChannelForSkeletonVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.DataChannelForSkeletonVFX")); }
    float& DeadBaseTargetingDesirabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeadBaseTargetingDesirability"); }
    UAnimMontage*& DeathAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.DeathAnim"); }
    BrzCampoPonteiro DeathAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.DeathAnimations")); }
    float& DeathCapsuleHalfHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathCapsuleHalfHeightMultiplier"); }
    float& DeathCapsuleRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathCapsuleRadiusMultiplier"); }
    BrzCampoPonteiro DeathDestructionDepositInventoryClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.DeathDestructionDepositInventoryClass")); }
    float& DeathHarvestFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathHarvestFadeOutDuration"); }
    BrzCampoPonteiro DeathHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.DeathHarvestingComponent")); }
    float& DeathMeshRelativeZOffsetAsCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeathMeshRelativeZOffsetAsCapsulePercent"); }
    USoundBase*& DeathSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.DeathSound"); }
    TArray<void*>& DefaultBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.DefaultBuffs"); }
    BrzCampoPonteiro DefaultNoItemTextureParamOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.DefaultNoItemTextureParamOverrides")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalCharacter.DescriptiveName"); }
    FName& DragBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DragBoneName"); }
    BrzCampoPonteiro DragOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.DragOffset")); }
    FName& DragSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DragSocketName"); }
    float& DragSocketVerticalOffsetAsCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DragSocketVerticalOffsetAsCapsulePercent"); }
    float& DragWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.DragWeight"); }
    int& DraggedBoneIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalCharacter.DraggedBoneIndex"); }
    APrimalCharacter*& DraggedCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalCharacter.DraggedCharacter"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +8, medido na build 25090264
    //  (offset absoluto medido: 0x16E0; confianca alta)
    int& DraggingBodyIndexField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 8); }
    APrimalCharacter*& DraggingCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalCharacter.DraggingCharacter"); }
    float& EffectorInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.EffectorInterpSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ASACameraConfigClass` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1220; confianca alta)
    void*& EntityHandleField() const
    { return BrzCampoAncorado<void*>(this, "ASACameraConfigClass", 8); }
    float& EnvironmentInteractionPlasticityExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.EnvironmentInteractionPlasticityExponent"); }
    float& EnvironmentInteractionPlasticityMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.EnvironmentInteractionPlasticityMult"); }
    float& EquippedArmorDurabilityPercent1Field() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.EquippedArmorDurabilityPercent1"); }
    float& EquippedArmorDurabilityPercent2Field() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.EquippedArmorDurabilityPercent2"); }
    float& EquippedArmorDurabilityPercent3Field() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.EquippedArmorDurabilityPercent3"); }
    float& ExtraFrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraFrictionModifier"); }
    float& ExtraMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMaxAccelerationModifier"); }
    float& ExtraMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMaxSpeedModifier"); }
    float& ExtraMeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMeleeDamageMultiplier"); }
    float& ExtraReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraReceiveDamageMultiplier"); }
    float& ExtraRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraRotationRateModifier"); }
    float& FallDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.FallDamageMultiplier"); }
    float& FluidInteractionScalarField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.FluidInteractionScalar"); }
    TArray<USoundBase*>& FootStepSoundsPhysMatField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalCharacter.FootStepSoundsPhysMat"); }
    float& FootstepsMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.FootstepsMaxRange"); }
    double& ForcePreventCharZInterpUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.ForcePreventCharZInterpUntilTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +48, medido na build 25090264
    //  (offset absoluto medido: 0x10C8; confianca media)
    void*& ForceSleepRagdollExHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +40, medido na build 25090264
    //  (offset absoluto medido: 0x10C0; confianca media)
    void*& ForceSleepRagdollHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 40); }
    double& ForceUnfreezeSkeletalDynamicsUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.ForceUnfreezeSkeletalDynamicsUntilTime"); }
    float& FullIKDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.FullIKDistance"); }
    float& GlideGravityScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.GlideGravityScaleMultiplier"); }
    float& GlideMaxCarriedWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.GlideMaxCarriedWeight"); }
    float& GrabWeightThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.GrabWeightThreshold"); }
    BrzCampoPonteiro GroundCheckExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.GroundCheckExtent")); }
    float& HalfLegLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.HalfLegLength"); }
    UAnimMontage*& HurtAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.HurtAnim"); }
    UAnimMontage*& HurtAnim_FlyingField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.HurtAnim_Flying"); }
    UAnimMontage*& HurtAnim_SleepingField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.HurtAnim_Sleeping"); }
    BrzCampoPonteiro HurtDecalDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.HurtDecalData")); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalCharacter.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.HurtFX_Niagara")); }
    USoundBase*& HurtSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.HurtSound"); }
    float& IKAfterFallingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.IKAfterFallingTime"); }
    AActor*& ImmobilizationActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalCharacter.ImmobilizationActor"); }
    TArray<void*>& ImmobilizationTrapsToIgnoreField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.ImmobilizationTrapsToIgnore"); }
    UAnimMontage*& JumpAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.JumpAnim"); }
    float& KillXPBaseField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.KillXPBase"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +32, medido na build 25090264
    //  (offset absoluto medido: 0x11B8; confianca alta)
    TWeakObjectPtr<void>& KinematicActorField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "TetherActor", 32); }
    UAnimMontage*& LandedAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.LandedAnim"); }
    float& LandedSoundMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.LandedSoundMaxRange"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +24, medido na build 25090264
    //  (offset absoluto medido: 0xE40; confianca media)
    void*& LastApproximatePhysVolumeLocationField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +72, medido na build 25090264
    //  (offset absoluto medido: 0x11E0; confianca media)
    TWeakObjectPtr<void>& LastApproximatePhysicsVolumeField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "TetherActor", 72); }
    TWeakObjectPtr<void>& LastAttackedNearbyPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.LastAttackedNearbyPlayer"); }
    double& LastAttackedNearbyPlayerTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastAttackedNearbyPlayerTime"); }
    TWeakObjectPtr<void>& LastBasedMovementActorRefField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.LastBasedMovementActorRef"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +8, medido na build 25090264
    //  (offset absoluto medido: 0x11A0; confianca alta)
    void*& LastBasedOnDinoField() const
    { return BrzCampoAncorado<void*>(this, "TetherActor", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +16, medido na build 25090264
    //  (offset absoluto medido: 0x11A8; confianca alta)
    void*& LastBasedOnDinoComponentField() const
    { return BrzCampoAncorado<void*>(this, "TetherActor", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OrbitCamRot` +96, medido na build 25090264
    //  (offset absoluto medido: 0xFC0; confianca media)
    void*& LastCachedPlayerControlRotationField() const
    { return BrzCampoAncorado<void*>(this, "OrbitCamRot", 96); }
    double& LastCausedDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastCausedDamageTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +60, medido na build 25090264
    //  (offset absoluto medido: 0x16B8; confianca media)
    float& LastDamageAmountMaterialValueField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 60); }
    AActor*& LastDamageCauserField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalCharacter.LastDamageCauser"); }
    TWeakObjectPtr<void>& LastDamageEventInstigatorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.LastDamageEventInstigator"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetableDamageFXDefaultPhysMaterial` +3, medido na build 25090264
    //  (offset absoluto medido: 0x1706; confianca alta)
    void*& LastDeathAnimMovementModeField() const
    { return BrzCampoAncorado<void*>(this, "TargetableDamageFXDefaultPhysMaterial", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +64, medido na build 25090264
    //  (offset absoluto medido: 0x16BC; confianca media)
    float& LastFallingZField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +76, medido na build 25090264
    //  (offset absoluto medido: 0x16C8; confianca media)
    int& LastFootPhysicalSurfaceTypeField() const
    { return BrzCampoAncorado<int>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 76); }
    double& LastForceAimedCharactersTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastForceAimedCharactersTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +48, medido na build 25090264
    //  (offset absoluto medido: 0xE58; confianca media)
    void*& LastForceFallCheckBaseLocationField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 48); }
    APrimalProjectileGrapplingHook*& LastGrapHookPullingMeField() const
    { return *GetNativePointerField<APrimalProjectileGrapplingHook**>(this, "APrimalCharacter.LastGrapHookPullingMe"); }
    AShooterCharacter*& LastGrapHookPullingOwnerField() const
    { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalCharacter.LastGrapHookPullingOwner"); }
    double& LastHitDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastHitDamageTime"); }
    BrzCampoPonteiro LastHitWallSweepCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.LastHitWallSweepCheckLocation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +64, medido na build 25090264
    //  (offset absoluto medido: 0x11D8; confianca media)
    TWeakObjectPtr<void>& LastHurtByNearbyPlayerField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "TetherActor", 64); }
    double& LastIkUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastIkUpdateTime"); }
    float& LastIncomingDamagePreArmorField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastIncomingDamagePreArmor"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +32, medido na build 25090264
    //  (offset absoluto medido: 0xA70; confianca media)
    void*& LastReplicatedRagdollPositionsField() const
    { return BrzCampoAncorado<void*>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +48, medido na build 25090264
    //  (offset absoluto medido: 0xA80; confianca media)
    void*& LastReplicatedRagdollRotationsField() const
    { return BrzCampoAncorado<void*>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 48); }
    BrzCampoPonteiro LastReverseVacuumCompartmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.LastReverseVacuumCompartment")); }
    double& LastRunningTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastRunningTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +16, medido na build 25090264
    //  (offset absoluto medido: 0x168C; confianca alta)
    float& LastSimulatedFallingVelocityZField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 16); }
    double& LastSkinnedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastSkinnedTime"); }
    double& LastStartedSleepingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastStartedSleepingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +120, medido na build 25090264
    //  (offset absoluto medido: 0xEA0; confianca media)
    void*& LastSubmergedCheckLocField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +28, medido na build 25090264
    //  (offset absoluto medido: 0x1698; confianca alta)
    float& LastTickStaminaValueField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 28); }
    double& LastTimeInSwimmingField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeInSwimming"); }
    double& LastTimeNotInFallingField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeNotInFalling"); }
    double& LastTimeSubmergedField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeSubmerged"); }
    double& LastTimeUpdatedCharacterStatusComponentField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeUpdatedCharacterStatusComponent"); }
    double& LastTimeUpdatedCorpseDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTimeUpdatedCorpseDestructionTime"); }
    double& LastTookDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTookDamageTime"); }
    double& LastTookDamageTimeDifferentTeamField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastTookDamageTimeDifferentTeam"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +264, medido na build 25090264
    //  (offset absoluto medido: 0xF30; confianca baixa)
    void*& LastTrueGetAimOffsetsLocationCSField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 264); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OrbitCamRot` +72, medido na build 25090264
    //  (offset absoluto medido: 0xFA8; confianca media)
    void*& LastTrueGetAimOffsetsRotationCSField() const
    { return BrzCampoAncorado<void*>(this, "OrbitCamRot", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +40, medido na build 25090264
    //  (offset absoluto medido: 0x11C0; confianca media)
    TWeakObjectPtr<void>& LastVoiceAudioComponentField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "TetherActor", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +192, medido na build 25090264
    //  (offset absoluto medido: 0xEE8; confianca baixa)
    void*& LastWalkingLocField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 192); }
    double& LastWalkingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.LastWalkingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +16, medido na build 25090264
    //  (offset absoluto medido: 0x16E8; confianca alta)
    int& LastYawSpeedWorldFrameCounterField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +112, medido na build 25090264
    //  (offset absoluto medido: 0x1108; confianca media)
    void*& LifespanExpiredHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VelocityBasedLandedSounds` +56, medido na build 25090264
    //  (offset absoluto medido: 0xCD0; confianca media)
    void*& LocalDraggedCharacterTransformField() const
    { return BrzCampoAncorado<void*>(this, "VelocityBasedLandedSounds", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1680; confianca alta)
    float& LowHealthPercentageField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 4); }
    float& MaxDragDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragDistance"); }
    float& MaxDragDistanceTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragDistanceTimeout"); }
    float& MaxDragMovementSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragMovementSpeed"); }
    float& MaxFallSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxFallSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CharacterSavedDynamicBaseBoneName` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1018; confianca alta)
    FName& MeshPreRagdollCollisionProfileNameField() const
    { return BrzCampoAncorado<FName>(this, "CharacterSavedDynamicBaseBoneName", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +72, medido na build 25090264
    //  (offset absoluto medido: 0xE70; confianca media)
    void*& MeshPreRagdollRelativeLocationField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OrbitCamRot` +24, medido na build 25090264
    //  (offset absoluto medido: 0xF78; confianca alta)
    void*& MeshPreRagdollRelativeRotationField() const
    { return BrzCampoAncorado<void*>(this, "OrbitCamRot", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +80, medido na build 25090264
    //  (offset absoluto medido: 0x10E8; confianca media)
    void*& MeshTeleportInterpBaseRelativeLocationField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +56, medido na build 25090264
    //  (offset absoluto medido: 0x10D0; confianca media)
    void*& MeshTeleportInterpOffsetField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +104, medido na build 25090264
    //  (offset absoluto medido: 0x1100; confianca media)
    void*& MeshTeleportInterpTimeRemainingField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +108, medido na build 25090264
    //  (offset absoluto medido: 0x1104; confianca media)
    void*& MeshTeleportInterpTotalTimeField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 108); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +36, medido na build 25090264
    //  (offset absoluto medido: 0x16FC; confianca media)
    int& MeshedCounterField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 36); }
    int& MeshingTickCounterMultiplierField() const
    { return *GetNativePointerField<int*>(this, "APrimalCharacter.MeshingTickCounterMultiplier"); }
    BrzCampoPonteiro MirroredUPaintingIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.MirroredUPaintingIndices")); }
    TWeakObjectPtr<void>& MountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.MountedDino"); }
    double& MountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.MountedDinoTime"); }
    BrzCampoPonteiro MouthFlapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.MouthFlapAnim")); }
    BrzCampoPonteiro MouthFlapSoundClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.MouthFlapSoundClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentPrimalCameraConfig` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1358; confianca alta)
    ABiomeZoneVolume*& MyBiomeZoneVolumeField() const
    { return BrzCampoAncorado<ABiomeZoneVolume*>(this, "CurrentPrimalCameraConfig", 8); }
    UPrimalCharacterStatusComponent*& MyCharacterStatusComponentField() const
    { return *GetNativePointerField<UPrimalCharacterStatusComponent**>(this, "APrimalCharacter.MyCharacterStatusComponent"); }
    UPrimalHarvestingComponent*& MyDeathHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalCharacter.MyDeathHarvestingComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedDeathAnim` +40, medido na build 25090264
    //  (offset absoluto medido: 0x1150; confianca media)
    void*& MyDeathHarvestingElementField() const
    { return BrzCampoAncorado<void*>(this, "SavedDeathAnim", 40); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalCharacter.MyInventoryComponent"); }
    USoundBase*& NetDynamicMusicSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.NetDynamicMusicSound"); }
    double& NextBPTimerNonDedicatedField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.NextBPTimerNonDedicated"); }
    double& NextBPTimerServerField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.NextBPTimerServer"); }
    BrzCampoPonteiro NiagaraSystemsToActivateAfterDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.NiagaraSystemsToActivateAfterDragged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +44, medido na build 25090264
    //  (offset absoluto medido: 0x16A8; confianca media)
    float& NonRelevantServerForceSleepRagdollIntervalField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 44); }
    BrzCampoPonteiro NotifyInputEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.NotifyInputEvent")); }
    BrzCampoPonteiro NotifyLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.NotifyLevelUp")); }
    BrzCampoPonteiro NotifyStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.NotifyStasis")); }
    BrzCampoPonteiro NotifyUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.NotifyUnstasis")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +32, medido na build 25090264
    //  (offset absoluto medido: 0x16F8; confianca alta)
    int& NumFallZFailsField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +24, medido na build 25090264
    //  (offset absoluto medido: 0x16F0; confianca alta)
    int& NumberOfClientRagdollCorrectionAttemptsField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 24); }
    BrzCampoPonteiro OldLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.OldLocation")); }
    float& OnDeathNotifyNearbyCharactersRadiusOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.OnDeathNotifyNearbyCharactersRadiusOverride"); }
    BrzCampoPonteiro OnDiedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.OnDied")); }
    BrzCampoPonteiro OnNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.OnNotifyDamage")); }
    BrzCampoPonteiro OnOrbitCameraViewChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.OnOrbitCameraViewChange")); }
    BrzCampoPonteiro OnSleepStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.OnSleepStateChanged")); }
    BrzCampoPonteiro OrbitCamRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.OrbitCamRot")); }
    float& OrbitCamZoomField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.OrbitCamZoom"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +48, medido na build 25090264
    //  (offset absoluto medido: 0x16AC; confianca media)
    float& OriginalCorpseLifespanField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 48); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalCharacter.PaintingComponent"); }
    BrzCampoPonteiro ParticleSystemsToActivateAfterDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.ParticleSystemsToActivateAfterDragged")); }
    UAnimMontage*& PinnedAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.PinnedAnim"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +12, medido na build 25090264
    //  (offset absoluto medido: 0x16E4; confianca alta)
    int& PlayerNumUnderGroundFailField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 12); }
    BrzCampoPonteiro PoopAltItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.PoopAltItemClass")); }
    UAnimMontage*& PoopAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.PoopAnimation"); }
    BrzCampoPonteiro PoopItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.PoopItemClass")); }
    USoundBase*& PoopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.PoopSound"); }
    double& PossessedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.PossessedAtTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HurtDecalData` +32, medido na build 25090264
    //  (offset absoluto medido: 0x910; confianca alta)
    void*& PreDragCollisionSetField() const
    { return BrzCampoAncorado<void*>(this, "HurtDecalData", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +40, medido na build 25090264
    //  (offset absoluto medido: 0x1700; confianca media)
    void*& PreDragComponentUpdateFlagField() const
    { return BrzCampoAncorado<void*>(this, "PreventSavingCharOnlyDamageTargetingTeam", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetableDamageFXDefaultPhysMaterial` +1, medido na build 25090264
    //  (offset absoluto medido: 0x1704; confianca alta)
    void*& PreDraggedMovementTickGroupField() const
    { return BrzCampoAncorado<void*>(this, "TargetableDamageFXDefaultPhysMaterial", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetableDamageFXDefaultPhysMaterial` +2, medido na build 25090264
    //  (offset absoluto medido: 0x1705; confianca alta)
    unsigned char& PreDraggingMovementTickGroupField() const
    { return BrzCampoAncorado<unsigned char>(this, "TargetableDamageFXDefaultPhysMaterial", 2); }
    TArray<void*>& PreventBuffClassesWithTagField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.PreventBuffClassesWithTag"); }
    int& PreventSavingCharOnlyDamageTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalCharacter.PreventSavingCharOnlyDamageTargetingTeam"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +48, medido na build 25090264
    //  (offset absoluto medido: 0x11C8; confianca media)
    TWeakObjectPtr<void>& PreviousMountedDinoField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "TetherActor", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +168, medido na build 25090264
    //  (offset absoluto medido: 0xED0; confianca baixa)
    void*& PreviousRagdollLocationField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TetherActor` +56, medido na build 25090264
    //  (offset absoluto medido: 0x11D0; confianca media)
    void*& PreviousSecondaryMountedDinoField() const
    { return BrzCampoAncorado<void*>(this, "TetherActor", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +96, medido na build 25090264
    //  (offset absoluto medido: 0xE88; confianca media)
    void*& PreviousUnderCheckLocationField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastReverseVacuumCompartment` +28, medido na build 25090264
    //  (offset absoluto medido: 0x173C; confianca alta)
    void*& PrimalAnimRootMotionTranslationScaleField() const
    { return BrzCampoAncorado<void*>(this, "LastReverseVacuumCompartment", 28); }
    float& ProneEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ProneEyeHeight"); }
    float& ProneWaterSubmergedDepthThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ProneWaterSubmergedDepthThreshold"); }
    BrzCampoPonteiro PropertyBagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.PropertyBag")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraOffsetMultiplier` +144, medido na build 25090264
    //  (offset absoluto medido: 0xEB8; confianca baixa)
    void*& RagdollLastFrameLinearVelocityField() const
    { return BrzCampoAncorado<void*>(this, "TPVCameraOffsetMultiplier", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventSavingCharOnlyDamageTargetingTeam` +28, medido na build 25090264
    //  (offset absoluto medido: 0x16F4; confianca alta)
    int& RagdollPenetrationFailuresField() const
    { return BrzCampoAncorado<int>(this, "PreventSavingCharOnlyDamageTargetingTeam", 28); }
    float& RagdollReplicationIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.RagdollReplicationInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +32, medido na build 25090264
    //  (offset absoluto medido: 0x10B8; confianca media)
    void*& ReplicateRagdollHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +96, medido na build 25090264
    //  (offset absoluto medido: 0xAB0; confianca media)
    TArray<void*>& ReplicatedBonesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +64, medido na build 25090264
    //  (offset absoluto medido: 0xA90; confianca media)
    void*& ReplicatedBonesConstraintsField() const
    { return BrzCampoAncorado<void*>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction` +80, medido na build 25090264
    //  (offset absoluto medido: 0xAA0; confianca media)
    TArray<void*>& ReplicatedBonesIndiciesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction", 80); }
    float& ReplicatedCurrentHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedCurrentHealth"); }
    float& ReplicatedCurrentTorporField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedCurrentTorpor"); }
    UAnimationAsset*& ReplicatedDeathAnimField() const
    { return *GetNativePointerField<UAnimationAsset**>(this, "APrimalCharacter.ReplicatedDeathAnim"); }
    float& ReplicatedMaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedMaxHealth"); }
    float& ReplicatedMaxTorporField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedMaxTorpor"); }
    BrzCampoPonteiro ReplicatedRagdollPositionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.ReplicatedRagdollPositions")); }
    BrzCampoPonteiro ReplicatedRagdollRotationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.ReplicatedRagdollRotations")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OrbitCamRot` +48, medido na build 25090264
    //  (offset absoluto medido: 0xF90; confianca media)
    void*& ReplicatedRootRotationField() const
    { return BrzCampoAncorado<void*>(this, "OrbitCamRot", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +56, medido na build 25090264
    //  (offset absoluto medido: 0x16B4; confianca media)
    float& RootYawField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 56); }
    UAudioComponent*& RunLoopACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalCharacter.RunLoopAC"); }
    USoundBase*& RunLoopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.RunLoopSound"); }
    float& RunMinVelocityRotDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunMinVelocityRotDot"); }
    float& RunMinVelocityRotDotAutonomousClientSlackField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunMinVelocityRotDotAutonomousClientSlack"); }
    USoundBase*& RunStopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalCharacter.RunStopSound"); }
    float& RunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunningSpeedModifier"); }
    BrzCampoPonteiro SavedBaseWorldLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.SavedBaseWorldLocation")); }
    TArray<TWeakObjectPtr<void>>& SavedBasedCharactersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalCharacter.SavedBasedCharacters"); }
    BrzCampoPonteiro SavedDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.SavedDeathAnim")); }
    TWeakObjectPtr<void>& SecondaryMountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.SecondaryMountedDino"); }
    double& SecondaryMountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalCharacter.SecondaryMountedDinoTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +36, medido na build 25090264
    //  (offset absoluto medido: 0x16A0; confianca media)
    float& ServerForceSleepRagdollIntervalField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 36); }
    float& ServerTargetCarriedYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.ServerTargetCarriedYaw"); }
    float& SimpleIkRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.SimpleIkRate"); }
    BrzCampoPonteiro SnapshotAnimInstanceClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.SnapshotAnimInstanceClass")); }
    TArray<void*>& SnapshotPosesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalCharacter.SnapshotPoses"); }
    float& SnapshotScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.SnapshotScale"); }
    float& StartWaveLockingThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.StartWaveLockingThreshold"); }
    float& StasisConsumerRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.StasisConsumerRangeMultiplier"); }
    unsigned char& SubmergedWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalCharacter.SubmergedWaterMovementMode"); }
    UAnimMontage*& SyncedMontageField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalCharacter.SyncedMontage"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +32, medido na build 25090264
    //  (offset absoluto medido: 0x169C; confianca alta)
    float& SyncedMontageDurationField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 32); }
    float& TPVCameraHorizontalOffsetFactorMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.TPVCameraHorizontalOffsetFactorMax"); }
    float& TPVCameraHorizontalOffsetFactorMaxClampField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.TPVCameraHorizontalOffsetFactorMaxClamp"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.TPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro TPVCameraOrgOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.TPVCameraOrgOffset")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1694; confianca alta)
    float& TargetCarriedYawField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 24); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalCharacter.TargetableDamageFXDefaultPhysMaterial"); }
    BrzCampoPonteiro TaxidermySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.TaxidermySkinClass")); }
    TWeakObjectPtr<void>& TetherActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalCharacter.TetherActor"); }
    float& TetherHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.TetherHeight"); }
    float& TetherRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.TetherRadius"); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalCharacter.TribeGroupInventoryRank"); }
    FString& TribeNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalCharacter.TribeName"); }
    float& TwoLeggedVirtualPointDistFactorField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.TwoLeggedVirtualPointDistFactor"); }
    unsigned char& UnSubmergedWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalCharacter.UnSubmergedWaterMovementMode"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +136, medido na build 25090264
    //  (offset absoluto medido: 0x1120; confianca baixa)
    void*& UnpauseAnimSharingHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +16, medido na build 25090264
    //  (offset absoluto medido: 0x10A8; confianca media)
    void*& UpdateDraggingHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +24, medido na build 25090264
    //  (offset absoluto medido: 0x10B0; confianca media)
    void*& UpdateRagdollReplicationOnClientHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnOrbitCameraViewChange` +128, medido na build 25090264
    //  (offset absoluto medido: 0x1118; confianca media)
    void*& UseFastInventoryHandleField() const
    { return BrzCampoAncorado<void*>(this, "OnOrbitCameraViewChange", 128); }
    BrzCampoPonteiro VelocityBasedEnteredSwimmingSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.VelocityBasedEnteredSwimmingSounds")); }
    BrzCampoPonteiro VelocityBasedLandedSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalCharacter.VelocityBasedLandedSounds")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TPVCameraHorizontalOffsetFactorMaxClamp` +72, medido na build 25090264
    //  (offset absoluto medido: 0x16C4; confianca media)
    float& WalkRunTransitionCooldownField() const
    { return BrzCampoAncorado<float>(this, "TPVCameraHorizontalOffsetFactorMaxClamp", 72); }
    float& WaterSubmergedDepthThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalCharacter.WaterSubmergedDepthThreshold"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsMassMoving` +1, medido na build 25090264
    //  (offset absoluto medido: 0x170B; confianca alta)
    void*& bExpensiveClientPredictionField() const
    { return BrzCampoAncorado<void*>(this, "bIsMassMoving", 1); }
    int& customBitFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalCharacter.customBitFlags"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CombatIdle` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1280; confianca alta)
    UAnimMontage*& lastPlayedMountAnimField() const
    { return BrzCampoAncorado<UAnimMontage*>(this, "CombatIdle", 8); }
    BitFieldValue<bool, unsigned __int32> bIsVoiceTalking()
    { return { (void*)this, "bIsVoiceTalking" }; }
    BitFieldValue<bool, unsigned __int32> bIsProne()
    { return { (void*)this, "bIsProne" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverProne()
    { return { (void*)this, "bCanEverProne" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintJumpInputEvents()
    { return { (void*)this, "bUseBlueprintJumpInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeferredMovement()
    { return { (void*)this, "bUseDeferredMovement" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAccessInventoryInput()
    { return { (void*)this, "bUseBPOverrideAccessInventoryInput" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCameraShakeOnNotifyHit()
    { return { (void*)this, "bDisableCameraShakeOnNotifyHit" }; }
    BitFieldValue<bool, unsigned __int32> bHasBuffPreSerializeForInstigator()
    { return { (void*)this, "bHasBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bIsSleeping()
    { return { (void*)this, "bIsSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToRun()
    { return { (void*)this, "bWantsToRun" }; }
    BitFieldValue<bool, unsigned __int32> bActiveRunToggle()
    { return { (void*)this, "bActiveRunToggle" }; }
    BitFieldValue<bool, unsigned __int32> bLocalIsDragging()
    { return { (void*)this, "bLocalIsDragging" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingDragged()
    { return { (void*)this, "bIsBeingDragged" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSpawnDefaultController()
    { return { (void*)this, "bDisableSpawnDefaultController" }; }
    BitFieldValue<bool, unsigned __int32> bIsDragging()
    { return { (void*)this, "bIsDragging" }; }
    BitFieldValue<bool, unsigned __int32> bIsDraggingWithGrapHook()
    { return { (void*)this, "bIsDraggingWithGrapHook" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteRunning()
    { return { (void*)this, "bRemoteRunning" }; }
    BitFieldValue<bool, unsigned __int32> bCanRun()
    { return { (void*)this, "bCanRun" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlinking()
    { return { (void*)this, "bIsBlinking" }; }
    BitFieldValue<bool, unsigned __int32> bSleepedWaterRagdoll()
    { return { (void*)this, "bSleepedWaterRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeTorpid()
    { return { (void*)this, "bCanBeTorpid" }; }
    BitFieldValue<bool, unsigned __int32> bDebugIK()
    { return { (void*)this, "bDebugIK" }; }
    BitFieldValue<bool, unsigned __int32> bDebugIK_ShowTraceNames()
    { return { (void*)this, "bDebugIK_ShowTraceNames" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysUpdateMesh()
    { return { (void*)this, "bForceAlwaysUpdateMesh" }; }
    BitFieldValue<bool, unsigned __int32> bRagdollIgnoresPawnCapsules()
    { return { (void*)this, "bRagdollIgnoresPawnCapsules" }; }
    BitFieldValue<bool, unsigned __int32> bUsePoopAnimationNotify()
    { return { (void*)this, "bUsePoopAnimationNotify" }; }
    BitFieldValue<bool, unsigned __int32> bDeathUseRagdoll()
    { return { (void*)this, "bDeathUseRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeCarried()
    { return { (void*)this, "bCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI()
    { return { (void*)this, "bDamageNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOverrideCameraInterpSpeed()
    { return { (void*)this, "bUseBPGetOverrideCameraInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bRecentlyUpdateIk()
    { return { (void*)this, "bRecentlyUpdateIk" }; }
    BitFieldValue<bool, unsigned __int32> bIKEnabled()
    { return { (void*)this, "bIKEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarried()
    { return { (void*)this, "bIsCarried" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarriedAsPassenger()
    { return { (void*)this, "bIsCarriedAsPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bForceIKOnDedicatedServer()
    { return { (void*)this, "bForceIKOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bIsImmobilized()
    { return { (void*)this, "bIsImmobilized" }; }
    BitFieldValue<bool, unsigned __int32> bCanIgnoreWater()
    { return { (void*)this, "bCanIgnoreWater" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> ReplicateAllBones()
    { return { (void*)this, "ReplicateAllBones" }; }
    BitFieldValue<bool, unsigned __int32> AutoStopReplicationWhenSleeping()
    { return { (void*)this, "AutoStopReplicationWhenSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bCanDrag()
    { return { (void*)this, "bCanDrag" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDragged()
    { return { (void*)this, "bCanBeDragged" }; }
    BitFieldValue<bool, unsigned __int32> bUsesRunningAnimation()
    { return { (void*)this, "bUsesRunningAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bOrbitCamera()
    { return { (void*)this, "bOrbitCamera" }; }
    BitFieldValue<bool, unsigned __int32> bDraggedFromExtremitiesOnly()
    { return { (void*)this, "bDraggedFromExtremitiesOnly" }; }
    BitFieldValue<bool, unsigned __int32> bEnableIK()
    { return { (void*)this, "bEnableIK" }; }
    BitFieldValue<bool, unsigned __int32> bNoDamageImpulse()
    { return { (void*)this, "bNoDamageImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bReadyToPoop()
    { return { (void*)this, "bReadyToPoop" }; }
    BitFieldValue<bool, unsigned __int32> bHasDynamicBase()
    { return { (void*)this, "bHasDynamicBase" }; }
    BitFieldValue<bool, unsigned __int32> bDieIfLeftWater()
    { return { (void*)this, "bDieIfLeftWater" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmphibious()
    { return { (void*)this, "bIsAmphibious" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmphibiousTargeting()
    { return { (void*)this, "bUseAmphibiousTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingLowHealthAnim()
    { return { (void*)this, "bIsPlayingLowHealthAnim" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyEmitPoop()
    { return { (void*)this, "bDontActuallyEmitPoop" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileSwimming()
    { return { (void*)this, "bAllowRunningWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage()
    { return { (void*)this, "bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTimerServer()
    { return { (void*)this, "bUseBPTimerServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTimerNonDedicated()
    { return { (void*)this, "bUseBPTimerNonDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetCharacterMeshseMaterialScalarParamValue()
    { return { (void*)this, "bUseBPSetCharacterMeshseMaterialScalarParamValue" }; }
    BitFieldValue<bool, unsigned __int32> bIsMounted()
    { return { (void*)this, "bIsMounted" }; }
    BitFieldValue<bool, unsigned __int32> bCanPlayLandingAnim()
    { return { (void*)this, "bCanPlayLandingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTargetingAndMovement()
    { return { (void*)this, "bPreventTargetingAndMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMovement()
    { return { (void*)this, "bPreventMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWaterHopCorrectionVelChange()
    { return { (void*)this, "bPreventWaterHopCorrectionVelChange" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAllInput()
    { return { (void*)this, "bForcePreventAllInput" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllBuffs()
    { return { (void*)this, "bPreventAllBuffs" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCube()
    { return { (void*)this, "LastIsInsideVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis()
    { return { (void*)this, "bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAllowedViewHitDir()
    { return { (void*)this, "bBPModifyAllowedViewHitDir" }; }
    BitFieldValue<bool, unsigned __int32> bBPLimitPlayerRotation()
    { return { (void*)this, "bBPLimitPlayerRotation" }; }
    BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocation()
    { return { (void*)this, "bBPManagedFPVViewLocation" }; }
    BitFieldValue<bool, unsigned __int32> bBPCameraRotationFinal()
    { return { (void*)this, "bBPCameraRotationFinal" }; }
    BitFieldValue<bool, unsigned __int32> bIsAtMaxInventoryItems()
    { return { (void*)this, "bIsAtMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsAttachedOtherCharacter()
    { return { (void*)this, "bIsAttachedOtherCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLethalDamage()
    { return { (void*)this, "bUseBPOnLethalDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFPV()
    { return { (void*)this, "bDisableFPV" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeZoomInput()
    { return { (void*)this, "bConsumeZoomInput" }; }
    BitFieldValue<bool, unsigned __int32> bInRagdoll()
    { return { (void*)this, "bInRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffed()
    { return { (void*)this, "bIsBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bUseBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewSwimVelocity()
    { return { (void*)this, "bUseBPOverrideCharacterNewSwimVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bSleepingDisableRagdoll()
    { return { (void*)this, "bSleepingDisableRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant()
    { return { (void*)this, "bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLiveBlinking()
    { return { (void*)this, "bPreventLiveBlinking" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterSound()
    { return { (void*)this, "bUseBPOverrideCharacterSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterParticle()
    { return { (void*)this, "bUseBPOverrideCharacterParticle" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHurtAnim()
    { return { (void*)this, "bPreventHurtAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ForceAllowBuffClasses()
    { return { (void*)this, "bUseBP_ForceAllowBuffClasses" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageCauserHitMarker()
    { return { (void*)this, "bUseBPOverrideDamageCauserHitMarker" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkinned()
    { return { (void*)this, "bIsSkinned" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPerPixelPainting()
    { return { (void*)this, "bPreventPerPixelPainting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPItemSlotOverrides()
    { return { (void*)this, "bUseBPItemSlotOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMoveUp()
    { return { (void*)this, "bPreventMoveUp" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowDediServerGroundConformInterpolate()
    { return { (void*)this, "bForceAllowDediServerGroundConformInterpolate" }; }
    BitFieldValue<bool, unsigned __int32> bIsHost()
    { return { (void*)this, "bIsHost" }; }
    BitFieldValue<bool, unsigned __int32> bCanBePushed()
    { return { (void*)this, "bCanBePushed" }; }
    BitFieldValue<bool, unsigned __int32> bCanPushOthers()
    { return { (void*)this, "bCanPushOthers" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverCrouch()
    { return { (void*)this, "bCanEverCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeInGodMode()
    { return { (void*)this, "bShouldBeInGodMode" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreLowGravityDisorientation()
    { return { (void*)this, "bIgnoreLowGravityDisorientation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventIKWhenNotWalking()
    { return { (void*)this, "bPreventIKWhenNotWalking" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreCorpseDecompositionMultipliers()
    { return { (void*)this, "bIgnoreCorpseDecompositionMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bInterpHealthDamageMaterialOverlayAlpha()
    { return { (void*)this, "bInterpHealthDamageMaterialOverlayAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressPlayerKillNotification()
    { return { (void*)this, "bSuppressPlayerKillNotification" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCorpseDestructionWithPreventSaving()
    { return { (void*)this, "bAllowCorpseDestructionWithPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryAccess()
    { return { (void*)this, "bPreventInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetOverrideSocket()
    { return { (void*)this, "bUseGetOverrideSocket" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBPNewDoorInteractionDrawHUD()
    { return { (void*)this, "bAllowBPNewDoorInteractionDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnRelease()
    { return { (void*)this, "bJumpOnRelease" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseByRemoteDino()
    { return { (void*)this, "bAllowMultiUseByRemoteDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideJumpZModifier()
    { return { (void*)this, "bUseBPOverrideJumpZModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseZeroGravityWander()
    { return { (void*)this, "bUseZeroGravityWander" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ModifyInputAcceleration()
    { return { (void*)this, "bUseBP_ModifyInputAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bForceSimpleTeleportFade()
    { return { (void*)this, "bForceSimpleTeleportFade" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetArmorDurabilityDecreaseMultiplier()
    { return { (void*)this, "bUseBPGetArmorDurabilityDecreaseMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShieldBlock()
    { return { (void*)this, "bUseBPShieldBlock" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromScans()
    { return { (void*)this, "bHideFromScans" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideWalkingVelocity()
    { return { (void*)this, "bOverrideWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideSwimmingVelocity()
    { return { (void*)this, "bOverrideSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideSwimmingAcceleration()
    { return { (void*)this, "bOverrideSwimmingAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideNewFallVelocity()
    { return { (void*)this, "bOverrideNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFlyingVelocity()
    { return { (void*)this, "bOverrideFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAnimationGroundConforming()
    { return { (void*)this, "bEnableAnimationGroundConforming" }; }
    BitFieldValue<bool, unsigned __int32> bWasBeingDragged()
    { return { (void*)this, "bWasBeingDragged" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePhysicsImpulses()
    { return { (void*)this, "bUseBPOverridePhysicsImpulses" }; }
    BitFieldValue<bool, unsigned __int32> bAllowASACamera()
    { return { (void*)this, "bAllowASACamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldUseLongFallCameraPivotZValues()
    { return { (void*)this, "bUseBPShouldUseLongFallCameraPivotZValues" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCharacterSteppedNotify()
    { return { (void*)this, "bUseOnCharacterSteppedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoingDraggedInterp()
    { return { (void*)this, "bIsDoingDraggedInterp" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideBlendSpaceSmoothType()
    { return { (void*)this, "bOverrideBlendSpaceSmoothType" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSimulatedTick()
    { return { (void*)this, "bUseBPOnSimulatedTick" }; }
    BitFieldValue<bool, unsigned __int32> bVehicleUpdatePPBlends()
    { return { (void*)this, "bVehicleUpdatePPBlends" }; }
    BitFieldValue<bool, unsigned __int32> bIsOverridingClientPositionErrorTolerance()
    { return { (void*)this, "bIsOverridingClientPositionErrorTolerance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAdded()
    { return { (void*)this, "bUseBPNotifyOnBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnStartedAllyTargetLooking()
    { return { (void*)this, "bUseOnStartedAllyTargetLooking" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPlayHitEffect()
    { return { (void*)this, "bUseBPPlayHitEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowRunningWhileFalling()
    { return { (void*)this, "bUseBPAllowRunningWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyXPMultiplier()
    { return { (void*)this, "bUseBPModifyXPMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFinalMaxSpeed()
    { return { (void*)this, "bUseBPGetFinalMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> Hotfix_AreGeneTraitsEnabled()
    { return { (void*)this, "Hotfix_AreGeneTraitsEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreOnDeathNotifyNearbyCharacters()
    { return { (void*)this, "bIgnoreOnDeathNotifyNearbyCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllImmobilizationTraps()
    { return { (void*)this, "bIgnoreAllImmobilizationTraps" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnImmobilize()
    { return { (void*)this, "bUseBPOnImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePlayAnimExMontage()
    { return { (void*)this, "bUseBPOverridePlayAnimExMontage" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildEncumberBasedOnTamedDino()
    { return { (void*)this, "bForceWildEncumberBasedOnTamedDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsMuted()
    { return { (void*)this, "bIsMuted" }; }
    BitFieldValue<bool, unsigned __int32> bClientSetCurrentAimRot()
    { return { (void*)this, "bClientSetCurrentAimRot" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePawnTick()
    { return { (void*)this, "bDisablePawnTick" }; }
    BitFieldValue<bool, unsigned __int32> bSetDeath()
    { return { (void*)this, "bSetDeath" }; }
    BitFieldValue<bool, unsigned __int32> bTicksOnClient()
    { return { (void*)this, "bTicksOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPlayingRunSound()
    { return { (void*)this, "bPlayingRunSound" }; }
    BitFieldValue<bool, unsigned __int32> bIsRespawn()
    { return { (void*)this, "bIsRespawn" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials()
    { return { (void*)this, "bCreatedDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bCurrentFrameAnimPreventInput()
    { return { (void*)this, "bCurrentFrameAnimPreventInput" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAirJump()
    { return { (void*)this, "bAllowAirJump" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingDraggedByDino()
    { return { (void*)this, "bIsBeingDraggedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsDraggingDinoStopped()
    { return { (void*)this, "bIsDraggingDinoStopped" }; }
    BitFieldValue<bool, unsigned __int32> bMissingDynamicBase()
    { return { (void*)this, "bMissingDynamicBase" }; }
    BitFieldValue<bool, unsigned __int32> bClientRagdollUpdateTimerEnabled()
    { return { (void*)this, "bClientRagdollUpdateTimerEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAimGettingCharacterMeshRotation()
    { return { (void*)this, "bAimGettingCharacterMeshRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIsRunningCheckIgnoreVelocity()
    { return { (void*)this, "bIsRunningCheckIgnoreVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateDamageMomentum()
    { return { (void*)this, "bReplicateDamageMomentum" }; }
    BitFieldValue<bool, unsigned __int32> bIsReflectingDamage()
    { return { (void*)this, "bIsReflectingDamage" }; }
    BitFieldValue<bool, unsigned __int32> bIsWhistleTargetingDown()
    { return { (void*)this, "bIsWhistleTargetingDown" }; }
    BitFieldValue<bool, unsigned __int32> bMarkForDestruction()
    { return { (void*)this, "bMarkForDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRun()
    { return { (void*)this, "bAllowRun" }; }
    BitFieldValue<bool, unsigned __int32> bStaminaIsGreaterThanZero()
    { return { (void*)this, "bStaminaIsGreaterThanZero" }; }
    BitFieldValue<bool, unsigned __int32> bDisabledIKFromDeath()
    { return { (void*)this, "bDisabledIKFromDeath" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUnregisterMeshUntilForceUpdateEnd()
    { return { (void*)this, "bPreventUnregisterMeshUntilForceUpdateEnd" }; }
    BitFieldValue<bool, unsigned __int32> bIsReplicatedRagdoll()
    { return { (void*)this, "bIsReplicatedRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bWasAllBodiesSleeping()
    { return { (void*)this, "bWasAllBodiesSleeping" }; }
    BitFieldValue<bool, unsigned __int32> LastCheckedSubmergedFull()
    { return { (void*)this, "LastCheckedSubmergedFull" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFullSubmergedCheck()
    { return { (void*)this, "bAllowFullSubmergedCheck" }; }
    BitFieldValue<bool, unsigned __int32> bRagdollWasInWaterVolume()
    { return { (void*)this, "bRagdollWasInWaterVolume" }; }
    BitFieldValue<bool, unsigned __int32> bIsDraggedWithOffset()
    { return { (void*)this, "bIsDraggedWithOffset" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSeatingDetachment()
    { return { (void*)this, "bIgnoreSeatingDetachment" }; }
    BitFieldValue<bool, unsigned __int32> AccessSpawn1Pressed()
    { return { (void*)this, "AccessSpawn1Pressed" }; }
    BitFieldValue<bool, unsigned __int32> AccessSpawn2Pressed()
    { return { (void*)this, "AccessSpawn2Pressed" }; }
    BitFieldValue<bool, unsigned __int32> bIsForceUpdatingChildMeshes()
    { return { (void*)this, "bIsForceUpdatingChildMeshes" }; }
    BitFieldValue<bool, unsigned __int32> bUseOptimizedPhysWalkingChecks()
    { return { (void*)this, "bUseOptimizedPhysWalkingChecks" }; }
    BitFieldValue<bool, unsigned __int32> bForceRefreshBonesRecursionGuard()
    { return { (void*)this, "bForceRefreshBonesRecursionGuard" }; }
    BitFieldValue<bool, unsigned __int32> bWasUsingOldCameraOnDinoBase()
    { return { (void*)this, "bWasUsingOldCameraOnDinoBase" }; }
    BitFieldValue<bool, unsigned __int32> bHasAppliedDraggedSettings()
    { return { (void*)this, "bHasAppliedDraggedSettings" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToRestoreSavedBase()
    { return { (void*)this, "bWantsToRestoreSavedBase" }; }
    BitFieldValue<bool, unsigned __int32> bUnregisteredMeshDueToVisibilityTickOption()
    { return { (void*)this, "bUnregisteredMeshDueToVisibilityTickOption" }; }
    BitFieldValue<bool, unsigned __int32> bHasAutoUnregisteredExtraSkeletalComponents()
    { return { (void*)this, "bHasAutoUnregisteredExtraSkeletalComponents" }; }
    BitFieldValue<bool, unsigned __int32> bDraggedFlip180()
    { return { (void*)this, "bDraggedFlip180" }; }
    BitFieldValue<bool, unsigned __int32> bSetAnimationTickPrerequisite()
    { return { (void*)this, "bSetAnimationTickPrerequisite" }; }
    BitFieldValue<bool, unsigned __int32> bIsProcessingBuffsForAdjustedDamage()
    { return { (void*)this, "bIsProcessingBuffsForAdjustedDamage" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatedIsSubmerged()
    { return { (void*)this, "bReplicatedIsSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideInActiveReverseVaccumSealedCube()
    { return { (void*)this, "LastIsInsideInActiveReverseVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideInActiveReverseVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideInActiveReverseVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideReverseVaccumSealedCube()
    { return { (void*)this, "LastIsInsideReverseVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideReverseVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideReverseVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bAccurateOceanVolumeOverlaps()
    { return { (void*)this, "bAccurateOceanVolumeOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMouthFlapAnimations()
    { return { (void*)this, "bEnableMouthFlapAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bIfAmphibiousCountAsLandDinoForNPCVolumes()
    { return { (void*)this, "bIfAmphibiousCountAsLandDinoForNPCVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIsAnimSharing()
    { return { (void*)this, "bIsAnimSharing" }; }
    BitFieldValue<bool, unsigned __int32> bIsMassMoving()
    { return { (void*)this, "bIsMassMoving" }; }
    BitFieldValue<bool, unsigned __int32> bIsSecondaryMounted()
    { return { (void*)this, "bIsSecondaryMounted" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAnimationUpdateRateOptimizations()
    { return { (void*)this, "bPreventAnimationUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDynamicMusic()
    { return { (void*)this, "bPreventDynamicMusic" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceKeepBasedOnDino()
    { return { (void*)this, "bUseBPForceKeepBasedOnDino" }; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    bool IsDead() const
    { return GetNativeBitField<bool, unsigned int>(const_cast<APrimalCharacter*>(this), "APrimalCharacter.bIsDead"); }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    bool IsConscious() const
    { return !GetNativeBitField<bool, unsigned int>(const_cast<APrimalCharacter*>(this), "APrimalCharacter.bIsSleeping"); }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    float GetHealth() const
    { void* st = GetNativeField<void*>(this, "MyCharacterStatusComponent"); if (!st) return 0.f; const float* v = (const float*)GetAddress(st, "UPrimalCharacterStatusComponent.CurrentStatusValues"); return v ? v[0] : 0.f; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    UPrimalCharacterStatusComponent* GetCharacterStatusComponent() const
    { return (UPrimalCharacterStatusComponent*)GetNativeField<void*>(this, "MyCharacterStatusComponent"); }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    bool HasCryoSickness() const
    { TArray<APrimalBuff*> b; GetBuffs(&b); for (int i = 0; i < b.Num(); ++i) if (b[i] && GetNativeBitField<bool, unsigned int>(b[i], "APrimalBuff.bCausesCryoSickness")) return true; return false; }

};

#endif  // BRZ_SDK_JOGO_APRIMALCHARACTER_H
