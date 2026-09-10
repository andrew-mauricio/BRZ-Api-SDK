// ==========================================================================
//  APrimalDinoCharacter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALDINOCHARACTER_H
#define BRZ_SDK_JOGO_APRIMALDINOCHARACTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ADroppedItem;
struct AMissionType;
struct ANPCZoneManager;
struct ANPCZoneVolume;
struct APrimalCharacter;
struct APrimalStructure;
struct AShooterCharacter;
struct AShooterPlayerController;
struct FDinoSaddleStruct;
struct FName;
struct UAnimMontage;
struct UAnimSequence;
struct UMaterialInterface;
struct UMeshComponent;
struct UObject;
struct UPrimalAIState;
struct UPrimalDinoSettings;
struct UPrimalInventoryComponent;
struct UPrimalItem;
struct UPrimalNavigationInvokerComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundBase;
struct UStaticMeshComponent;
struct UTexture;
struct UTexture2D;

#include "APrimalCharacter.h"

struct APrimalDinoCharacter : public APrimalCharacter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalDinoCharacter"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.AbortCurrentMoveTo()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    void AbortCurrentMoveTo() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.AbortCurrentMoveTo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.AddDinoReferenceInLatchingStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void AddDinoReferenceInLatchingStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.AddDinoReferenceInLatchingStructure(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AddFlyerTakeOffImpulse()
    // endereco: cache_pdb_25090264
    void AddFlyerTakeOffImpulse() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.AddFlyerTakeOffImpulse()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AddHostileStacks(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddHostileStacks(int a0, bool a1, bool a2) const
    {
        return NativeCall<void*, int, bool, bool>(this, "APrimalDinoCharacter.AddHostileStacks(int,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AddPassenger(APrimalCharacter*,int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AddPassenger(void* a0, int a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, int, bool, bool, bool>(this, "APrimalDinoCharacter.AddPassenger(APrimalCharacter*,int,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AddStructure(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotator
    // endereco: casamento de bytes com a build de referencia
    void AddStructure(void* a0, void* a1, void* a2, unsigned long long a3) const
    {
        NativeCall<void, void*, void*, void*, unsigned long long>(this, "APrimalDinoCharacter.AddStructure(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FName)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AddToMeleeSwingHurtList(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool AddToMeleeSwingHurtList(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AddToMeleeSwingHurtList(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AddWildGeneTraits(bool)
    // endereco: casamento de bytes com a build de referencia
    bool AddWildGeneTraits(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.AddWildGeneTraits(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.AddedImprintingQuality(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54]]
    void AddedImprintingQuality(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.AddedImprintingQuality(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AddedImprintingQuality_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void AddedImprintingQuality_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.AddedImprintingQuality_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalDinoCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowCarryCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowCarryCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowCarryCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowClaiming(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=5/5]]
    bool AllowClaiming(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowClaiming(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharact
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowDinoTargetingRange(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalDinoCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowEquippingItemType(EPrimalEquipmentType::Type)
    // endereco: cache_pdb_25090264
    bool AllowEquippingItemType(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.AllowEquippingItemType(EPrimalEquipmentType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowExtendedCraftingFunctionality()
    // endereco: cache_pdb_25090264
    bool AllowExtendedCraftingFunctionality() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.AllowExtendedCraftingFunctionality()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowFallDamage(FHitResult&,float,bool)
    // classe: a funcao mora em APrimalCharacter, e APrimalDinoCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool AllowFallDamage(void* a0, float a1, bool a2) const
    {
        return NativeCall<bool, void*, float, bool>(this, "APrimalCharacter.AllowFallDamage(FHitResult&,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowIKFreeze()
    // endereco: casamento de bytes com a build de referencia
    bool AllowIKFreeze() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.AllowIKFreeze()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowMountedWeaponry(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowMountedWeaponry(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "APrimalDinoCharacter.AllowMountedWeaponry(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AllowMountedWeaponryForTemplate(TSoftClassPtr<AShooterWeapon>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowMountedWeaponryForTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.AllowMountedWeaponryForTemplate(TSoftClassPtr<AShooterWeapon>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowMovementMode(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    bool AllowMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<bool, int, unsigned char>(this, "APrimalDinoCharacter.AllowMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowNewEggAtLocation(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool AllowNewEggAtLocation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowNewEggAtLocation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowParallelAnimations(USkeletalMeshComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=86]]
    bool AllowParallelAnimations(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowParallelAnimations(USkeletalMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowPenetrationCheck(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowPenetrationCheck(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowPenetrationCheck(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AllowPhysFlying()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    BrzPonteiro AllowPhysFlying() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.AllowPhysFlying()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AllowPhysWalking()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    BrzPonteiro AllowPhysWalking() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.AllowPhysWalking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowPushOthers()
    // endereco: cache_pdb_25090264
    bool AllowPushOthers() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.AllowPushOthers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowSkeletalMeshTicking(USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSkeletalMeshTicking(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowSkeletalMeshTicking(USkeletalMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowSpawnForPlayer(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSpawnForPlayer(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.AllowSpawnForPlayer(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AllowTreadWater()
    // endereco: cache_pdb_25090264
    BrzPonteiro AllowTreadWater() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.AllowTreadWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowWakingTame(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    bool AllowWakingTame(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowWakingTame(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowWakingTame_Implementation(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    bool AllowWakingTame_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowWakingTame_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowWalkableSlopeOverride(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowWalkableSlopeOverride(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.AllowWalkableSlopeOverride(UPrimitiveComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AllowZoneAutoKill()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AllowZoneAutoKill() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.AllowZoneAutoKill()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.AllowedToExecuteRandomLookAtTargetLogic()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool AllowedToExecuteRandomLookAtTargetLogic() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.AllowedToExecuteRandomLookAtTargetLogic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AllowedToExecuteRandomLookAtTargetLogic_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=414+grafo=4/4]]
    BrzPonteiro AllowedToExecuteRandomLookAtTargetLogic_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.AllowedToExecuteRandomLookAtTargetLogic_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAni
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalDinoCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*
    // classe: a funcao mora em UPrimalActor, e APrimalDinoCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_Tick(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "UPrimalActor.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.AnimNotifyMountedDino()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void AnimNotifyMountedDino() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.AnimNotifyMountedDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ApplyBoneModifiers(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyBoneModifiers(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ApplyBoneModifiers(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshot(void* a0, void* a1, void* a2, float a3, int a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, float, int, bool, void*>(this, "APrimalDinoCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool,FPrimalSnapshotPose*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ApplyGestationBoneModifiers()
    // endereco: casamento de bytes com a build de referencia
    void ApplyGestationBoneModifiers() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ApplyGestationBoneModifiers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ApplyMaterailDamageEffect(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyMaterailDamageEffect(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalDinoCharacter.ApplyMaterailDamageEffect(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ApplyMutagen()
    // endereco: casamento de bytes com a build de referencia
    void ApplyMutagen() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ApplyMutagen()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ApplyRidingAttackExtraVelocity()
    // endereco: casamento de bytes com a build de referencia
    void ApplyRidingAttackExtraVelocity() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ApplyRidingAttackExtraVelocity()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.AreSpawnerSublevelsLoaded()
    // endereco: cache_pdb_25090264
    bool AreSpawnerSublevelsLoaded() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.AreSpawnerSublevelsLoaded()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AssertColorNames()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void AssertColorNames() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.AssertColorNames()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.AttemptAddWildGeneTraits(bool)
    // endereco: cache_pdb_25090264
    bool AttemptAddWildGeneTraits(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.AttemptAddWildGeneTraits(bool)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.AutoDrag()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=182]]
    void AutoDrag() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.AutoDrag()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.AutoRequestSaddleItemContainerInventories()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoRequestSaddleItemContainerInventories() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.AutoRequestSaddleItemContainerInventories()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.AutoTame()
    // endereco: casamento de bytes com a build de referencia
    void AutoTame() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.AutoTame()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPAddAlwaysHitMeleeActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAddAlwaysHitMeleeActors(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPAddAlwaysHitMeleeActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPAddTamingCreatureTrackerForTeam(int,bool,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPAddTamingCreatureTrackerForTeam(int a0, bool a1, void* a2) const
    {
        NativeCall<void, int, bool, void*>(this, "APrimalDinoCharacter.BPAddTamingCreatureTrackerForTeam(int,bool,APlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPAdjustAttackIndex(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int BPAdjustAttackIndex(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalDinoCharacter.BPAdjustAttackIndex(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPAdjustBaseFootStepDamageAmount(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPAdjustBaseFootStepDamageAmount(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.BPAdjustBaseFootStepDamageAmount(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPAllowCarryCharacter(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPAllowCarryCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPAllowCarryCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPAllowClaiming(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowClaiming(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPAllowClaiming(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPAllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoChara
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAllowDinoTargetingRange(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalDinoCharacter.BPAllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPAllowTeamToTrackTamingDino(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=138+chamadores=2]]
    bool BPAllowTeamToTrackTamingDino(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPAllowTeamToTrackTamingDino(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPBecameNewBaby(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPBecameNewBaby(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPBecameNewBaby(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPBecomeAdult()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPBecomeAdult() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPBecomeAdult()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPBecomeBaby()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPBecomeBaby() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPBecomeBaby()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPBeginRiderAttackTargetWindow(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void BPBeginRiderAttackTargetWindow(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.BPBeginRiderAttackTargetWindow(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPCanAutodrag(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=66]]
    bool BPCanAutodrag(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPCanAutodrag(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPCanDragCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanDragCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPCanDragCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPCanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanIgnoreImmobilizationTrap(void* a0, bool a1) const
    {
        return NativeCall<bool, void**, bool>(this, "APrimalDinoCharacter.BPCanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure>,bool)", &a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPCanLand(bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanLand(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BPCanLand(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPCanSetBabyAge(bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanSetBabyAge(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BPCanSetBabyAge(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPCanTakePassenger(APrimalCharacter*,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanTakePassenger(void* a0, int a1, bool a2, bool a3) const
    {
        return NativeCall<bool, void*, int, bool, bool>(this, "APrimalDinoCharacter.BPCanTakePassenger(APrimalCharacter*,int,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPCanTargetCorpse()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanTargetCorpse() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPCanTargetCorpse()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPCarriedDinoBabyRescaled(APrimalDinoCharacter*,float)
    // endereco: casamento de bytes com a build de referencia
    void BPCarriedDinoBabyRescaled(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalDinoCharacter.BPCarriedDinoBabyRescaled(APrimalDinoCharacter*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPChargingModifyInputAcceleration(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPChargingModifyInputAcceleration(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPChargingModifyInputAcceleration(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPCheckSeven()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool BPCheckSeven() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPCheckSeven()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPCheckSeven_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool BPCheckSeven_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPCheckSeven_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPClampMaxHarvestHealth()
    // endereco: casamento de bytes com a build de referencia
    float BPClampMaxHarvestHealth() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BPClampMaxHarvestHealth()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPClearForcedAggro()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54]]
    void BPClearForcedAggro() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPClearForcedAggro()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPConsumeInventoryFoodItem(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPConsumeInventoryFoodItem(void* a0, bool a1) const
    {
        return NativeCall<UObject*, void*, bool>(this, "APrimalDinoCharacter.BPConsumeInventoryFoodItem(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPCopyDinoSettingsToOtherDino(APlayerController*,APrimalDinoCharacter*,APri
    // endereco: casamento de bytes com a build de referencia
    void BPCopyDinoSettingsToOtherDino(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "APrimalDinoCharacter.BPCopyDinoSettingsToOtherDino(APlayerController*,APrimalDinoCharacter*,APrimalDinoCharacter*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPDesiredRotationIsLocalSpace()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPDesiredRotationIsLocalSpace() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPDesiredRotationIsLocalSpace()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPDidClearCarriedCharacter(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPDidClearCarriedCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPDidClearCarriedCharacter(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPDidSetCarriedCharacter(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPDidSetCarriedCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPDidSetCarriedCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPDinoARKDownloadedBegin()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPDinoARKDownloadedBegin() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPDinoARKDownloadedBegin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPDinoARKDownloadedEnd()
    // endereco: casamento de bytes com a build de referencia
    void BPDinoARKDownloadedEnd() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPDinoARKDownloadedEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPDinoFaceRotation(UE::Math::TRotator<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDinoFaceRotation(void* a0, float a1, bool a2) const
    {
        return NativeCall<void*, void*, float, bool>(this, "APrimalDinoCharacter.BPDinoFaceRotation(UE::Math::TRotator<double>,float,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPDinoPostBeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPDinoPostBeginPlay() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPDinoPostBeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPDinoPrepareForARKUploading()
    // endereco: casamento de bytes com a build de referencia
    void BPDinoPrepareForARKUploading() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPDinoPrepareForARKUploading()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPDinoTooltipCustomTamingProgressBar(bool&,float&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPDinoTooltipCustomTamingProgressBar(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalDinoCharacter.BPDinoTooltipCustomTamingProgressBar(bool&,float&,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool BPDinoTooltipCustomTamingProgressBar(void* a0, void* a1, FString* a2) const
    { return BPDinoTooltipCustomTamingProgressBar(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPDinoTooltipCustomTorpidityProgressBar(bool&,float&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPDinoTooltipCustomTorpidityProgressBar(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalDinoCharacter.BPDinoTooltipCustomTorpidityProgressBar(bool&,float&,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool BPDinoTooltipCustomTorpidityProgressBar(void* a0, void* a1, FString* a2) const
    { return BPDinoTooltipCustomTorpidityProgressBar(a0, a1, *a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPDisplayTamedMessage()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPDisplayTamedMessage() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPDisplayTamedMessage()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPDoAttack(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPDoAttack(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.BPDoAttack(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPDoHarvestAttack(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPDoHarvestAttack(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.BPDoHarvestAttack(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPDrawToRiderHUD(AShooterHUD*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPDrawToRiderHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPDrawToRiderHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPExtractEmbryo(APlayerController*,UPrimalItem*&,TSoftClassPtr<UPrimalItem>
    // endereco: casamento de bytes com a build de referencia
    bool BPExtractEmbryo(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalDinoCharacter.BPExtractEmbryo(APlayerController*,UPrimalItem*&,TSoftClassPtr<UPrimalItem>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPFedWakingTameEvent(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPFedWakingTameEvent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPFedWakingTameEvent(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPForcePreventMountedWeaponry()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPForcePreventMountedWeaponry() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPForcePreventMountedWeaponry()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPForceReachedDestination()
    // endereco: cache_pdb_25090264
    void BPForceReachedDestination() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPForceReachedDestination()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPGetAttackOfPlayedAnimation(FDinoAttackInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetAttackOfPlayedAnimation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPGetAttackOfPlayedAnimation(FDinoAttackInfo&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetColorSetIntensityMultipliers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetColorSetIntensityMultipliers() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.BPGetColorSetIntensityMultipliers()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetCrosshairAlpha()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetCrosshairAlpha() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BPGetCrosshairAlpha()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetCrosshairColor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCrosshairColor() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.BPGetCrosshairColor()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPGetCrosshairLocation(float,float,float&,float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGetCrosshairLocation(float a0, float a1, void* a2, void* a3) const
    {
        NativeCall<void, float, float, void*, void*>(this, "APrimalDinoCharacter.BPGetCrosshairLocation(float,float,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetCrosshairSpread()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetCrosshairSpread() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BPGetCrosshairSpread()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPGetCurrentAttackIndex()
    // endereco: cache_pdb_25090264
    int BPGetCurrentAttackIndex() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.BPGetCurrentAttackIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPGetCurrentAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCurrentAttackTargets(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "APrimalDinoCharacter.BPGetCurrentAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetCurrentSignificance()
    // endereco: casamento de bytes com a build de referencia
    float BPGetCurrentSignificance() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BPGetCurrentSignificance()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetDragSocketDinoName(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    unsigned long long BPGetDragSocketDinoName(void* a0) const
    {
        return NativeCall<unsigned long long, void*>(this, "APrimalDinoCharacter.BPGetDragSocketDinoName(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetDragSocketName(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    unsigned long long BPGetDragSocketName(void* a0) const
    {
        return NativeCall<unsigned long long, void*>(this, "APrimalDinoCharacter.BPGetDragSocketName(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetExtraBoneSetup(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetExtraBoneSetup(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalDinoCharacter.BPGetExtraBoneSetup(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPGetLookOffsetSocketName(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPGetLookOffsetSocketName(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.BPGetLookOffsetSocketName(APrimalCharacter*)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPGetMountedMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSized
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetMountedMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalDinoCharacter.BPGetMountedMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetOtherActorToIgnore()
    // endereco: cache_pdb_25090264
    UObject* BPGetOtherActorToIgnore() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.BPGetOtherActorToIgnore()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetPassengerDinoAdditionalOffset(APrimalDinoCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetPassengerDinoAdditionalOffset(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPGetPassengerDinoAdditionalOffset(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPGetReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&)
    // endereco: thunk
    BrzPonteiro BPGetReplicatedAttackTargets(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalDinoCharacter.BPGetReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetRiderSocket()
    // endereco: casamento de bytes com a build de referencia
    unsigned long long BPGetRiderSocket() const
    {
        return NativeCall<unsigned long long>(this, "APrimalDinoCharacter.BPGetRiderSocket()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetRiderUnboardDirection(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    BrzPonteiro BPGetRiderUnboardDirection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPGetRiderUnboardDirection(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetRiderUnboardLocation(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    BrzPonteiro BPGetRiderUnboardLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPGetRiderUnboardLocation(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPGetRidingMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetRidingMultiUseEntries(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.BPGetRidingMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetTamedFollowTarget()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetTamedFollowTarget() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.BPGetTamedFollowTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPGetTargetingDesirability(AActor*)
    // endereco: casamento de bytes com a build de referencia
    float BPGetTargetingDesirability(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.BPGetTargetingDesirability(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPGetWiegthedAttackOverride(float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    unsigned char BPGetWiegthedAttackOverride(float a0, float a1, void* a2) const
    {
        return NativeCall<unsigned char, float, float, void*>(this, "APrimalDinoCharacter.BPGetWiegthedAttackOverride(float,float,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPHandleControllerInitiatedAttack(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPHandleControllerInitiatedAttack(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPHandleControllerInitiatedAttack(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPHandleUseButtonPress(AShooterPlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=66+chamadores=3]]
    bool BPHandleUseButtonPress(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPHandleUseButtonPress(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPHasCurrentAttack()
    // endereco: cache_pdb_25090264
    bool BPHasCurrentAttack() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPHasCurrentAttack()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPIsLandingOnDino(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPIsLandingOnDino(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPIsLandingOnDino(UE::Math::TVector<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPIsTamed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool BPIsTamed() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPIsTamed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPIsValidFoodItemForConsumption(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPIsValidFoodItemForConsumption(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPIsValidFoodItemForConsumption(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPIsValidUnStasisCaster()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPIsValidUnStasisCaster() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPIsValidUnStasisCaster()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPKilledSomethingEvent(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=128]]
    void BPKilledSomethingEvent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPKilledSomethingEvent(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPKilledSomethingEventWithInfo(APrimalCharacter*,float,FDamageEvent&,AContr
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPKilledSomethingEventWithInfo(void* a0, float a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, float, void*, void*>(this, "APrimalDinoCharacter.BPKilledSomethingEventWithInfo(APrimalCharacter*,float,FDamageEvent&,AController*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    BrzPonteiro BPModifyAimOffsetNoTarget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPModifyAimOffsetTargetLocation(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BPModifyAimOffsetTargetLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPModifyAimOffsetTargetLocation(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPModifyControlRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<doub
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPModifyControlRotation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.BPModifyControlRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPModifyDesiredRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPModifyDesiredRotation(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "APrimalDinoCharacter.BPModifyDesiredRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPModifyHarvestingQuantity(float,TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    float BPModifyHarvestingQuantity(float a0, void* a1) const
    {
        return NativeCall<float, float, void*>(this, "APrimalDinoCharacter.BPModifyHarvestingQuantity(float,TSubclassOf<UPrimalItem>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPModifyHarvestingWeightsArray(TArray<float,TSizedDefaultAllocator<32>>&,TA
    // endereco: casamento de bytes com a build de referencia
    void BPModifyHarvestingWeightsArray(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalDinoCharacter.BPModifyHarvestingWeightsArray(TArray<float,TSizedDefaultAllocator<32>>&,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyAddPassenger(APrimalCharacter*,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyAddPassenger(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalDinoCharacter.BPNotifyAddPassenger(APrimalCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPNotifyBabyAgeIncrement(float,float)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyBabyAgeIncrement(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "APrimalDinoCharacter.BPNotifyBabyAgeIncrement(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPNotifyCarriedDinoBabyAgeIncrement(APrimalDinoCharacter*,float,float)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyCarriedDinoBabyAgeIncrement(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APrimalDinoCharacter.BPNotifyCarriedDinoBabyAgeIncrement(APrimalDinoCharacter*,float,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPNotifyClaimed()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyClaimed() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPNotifyClaimed()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyClearPassenger(APrimalCharacter*,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyClearPassenger(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalDinoCharacter.BPNotifyClearPassenger(APrimalCharacter*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyClearRider(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyClearRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPNotifyClearRider(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyDealtDamage(AActor*,float,FDamageEvent&,AController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyDealtDamage(void* a0, float a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, float, void*, void*>(this, "APrimalDinoCharacter.BPNotifyDealtDamage(AActor*,float,FDamageEvent&,AController*)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyIfPassengerLaunchShoulderMount(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyIfPassengerLaunchShoulderMount(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPNotifyIfPassengerLaunchShoulderMount(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPNotifyMateBoostChanged()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyMateBoostChanged() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPNotifyMateBoostChanged()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPNotifyNameEditText(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyNameEditText(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPNotifyNameEditText(AShooterPlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyOnBuffAddedToMountChar(APrimalBuff*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPNotifyOnBuffAddedToMountChar(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPNotifyOnBuffAddedToMountChar(APrimalBuff*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifySetRider(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPNotifySetRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPNotifySetRider(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyStructurePlacedNearby(APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyStructurePlacedNearby(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPNotifyStructurePlacedNearby(APrimalStructure*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPNotifyTamedLevelsRemoved(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyTamedLevelsRemoved(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.BPNotifyTamedLevelsRemoved(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPNotifyWildHarvestAttack(int)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyWildHarvestAttack(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.BPNotifyWildHarvestAttack(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnAdjustLastAttackTime(int,float)
    // endereco: casamento de bytes com a build de referencia
    void BPOnAdjustLastAttackTime(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "APrimalDinoCharacter.BPOnAdjustLastAttackTime(int,float)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnCarryCharacter(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPOnCarryCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOnCarryCharacter(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnClearCarriedCharacter(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnClearCarriedCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOnClearCarriedCharacter(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnClearMountedDino(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPOnClearMountedDino(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnClearMountedDino(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnDinoFiredProjectile(AShooterProjectile*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnDinoFiredProjectile(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOnDinoFiredProjectile(AShooterProjectile*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOnEndCharging()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPOnEndCharging() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPOnEndCharging()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnGestationChange(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=4]]
    void BPOnGestationChange(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnGestationChange(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnMountCharacterChangedWeapons(AShooterCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnMountCharacterChangedWeapons(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOnMountCharacterChangedWeapons(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOnRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnRefreshColorization(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPOnRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOnRepIsCharging()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOnRepIsCharging() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPOnRepIsCharging()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOnResetBoneModifiers()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOnResetBoneModifiers() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPOnResetBoneModifiers()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnRiderShoulderMountDinoChange(bool,AShooterCharacter*,APrimalDinoCharact
    // endereco: casamento de bytes com a build de referencia
    void BPOnRiderShoulderMountDinoChange(bool a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, bool, void*, void*, bool>(this, "APrimalDinoCharacter.BPOnRiderShoulderMountDinoChange(bool,AShooterCharacter*,APrimalDinoCharacter*,bool)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnSaddleStructLoaded(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPOnSaddleStructLoaded(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOnSaddleStructLoaded(APrimalStructure*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnSaddleStructRemoved(APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnSaddleStructRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOnSaddleStructRemoved(APrimalStructure*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnSecondaryDinoAdjustedAttachment(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOnSecondaryDinoAdjustedAttachment(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnSecondaryDinoAdjustedAttachment(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOnSetAttackIndex(unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    BrzPonteiro BPOnSetAttackIndex(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalDinoCharacter.BPOnSetAttackIndex(unsignedchar)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnSetFlight(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnSetFlight(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnSetFlight(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnSetMountedDino(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPOnSetMountedDino(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnSetMountedDino(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOnStartJump()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool BPOnStartJump() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPOnStartJump()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPOnTamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,
    // endereco: casamento de bytes com a build de referencia
    void BPOnTamedProcessOrder(void* a0, int a1, bool a2, void* a3, bool a4) const
    {
        NativeCall<void, void*, int, bool, void*, bool>(this, "APrimalDinoCharacter.BPOnTamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPOrderedMoveToLoc(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void BPOrderedMoveToLoc(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPOrderedMoveToLoc(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOverrideAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideAttackerDamageImpactFXAttachSocket(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPOverrideAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideBasedPlayerAimOffsetYaw(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideBasedPlayerAimOffsetYaw(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.BPOverrideBasedPlayerAimOffsetYaw(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOverrideCameraViewTarget(FName,UE::Math::TVector<double>,UE::Math::TRotat
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCameraViewTarget(unsigned long long a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, float, void*, void*, void*, void*, void*, void*>(this, "APrimalDinoCharacter.BPOverrideCameraViewTarget(FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,bool&,UE::Math::TVector<double>&,bool&,UE::Math::TRotator<double>&,bool&,float&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideFertilizedEggGender(APrimalDinoCharacter*,TSubclassOf<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    int BPOverrideFertilizedEggGender(void* a0, void* a1, int a2) const
    {
        return NativeCall<int, void*, void*, int>(this, "APrimalDinoCharacter.BPOverrideFertilizedEggGender(APrimalDinoCharacter*,TSubclassOf<UPrimalItem>,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideFloatingHUDLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideFloatingHUDLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.BPOverrideFloatingHUDLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOverrideGetAttackAnimationIndex(int,TArray<UAnimMontage*,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideGetAttackAnimationIndex(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalDinoCharacter.BPOverrideGetAttackAnimationIndex(int,TArray<UAnimMontage*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideHealthBarOffset(APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPOverrideHealthBarOffset(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.BPOverrideHealthBarOffset(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideIsSubmergedForWaterTargeting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool BPOverrideIsSubmergedForWaterTargeting() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPOverrideIsSubmergedForWaterTargeting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOverrideMateBoostIcon(UTexture2D*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideMateBoostIcon(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BPOverrideMateBoostIcon(UTexture2D*&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideMeleeSwingRadius(int)
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideMeleeSwingRadius(int a0) const
    {
        return NativeCall<float, int>(this, "APrimalDinoCharacter.BPOverrideMeleeSwingRadius(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOverrideMoveToOrder(UE::Math::TVector<double>,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideMoveToOrder(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.BPOverrideMoveToOrder(UE::Math::TVector<double>,AShooterCharacter*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverridePassengerAdditiveAnim(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPOverridePassengerAdditiveAnim(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalDinoCharacter.BPOverridePassengerAdditiveAnim(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideRiderIndoorsCheckLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideRiderIndoorsCheckLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.BPOverrideRiderIndoorsCheckLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideStencilAllianceForTarget(APrimalCharacter*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    unsigned char BPOverrideStencilAllianceForTarget(void* a0, void* a1) const
    {
        return NativeCall<unsigned char, void*, void*>(this, "APrimalDinoCharacter.BPOverrideStencilAllianceForTarget(APrimalCharacter*,UPrimitiveComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPOverrideTamingDescriptionLabel(FSlateColor&)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideTamingDescriptionLabel(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.BPOverrideTamingDescriptionLabel(FSlateColor&)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPOverrideTamingTeamForTrackingTamingDino(int)
    // endereco: casamento de bytes com a build de referencia
    int BPOverrideTamingTeamForTrackingTamingDino(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalDinoCharacter.BPOverrideTamingTeamForTrackingTamingDino(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPOverrideTamingTeamForTrackingTamingDino_Implementation(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro BPOverrideTamingTeamForTrackingTamingDino_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalDinoCharacter.BPOverrideTamingTeamForTrackingTamingDino_Implementation(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPPreServerUploadDino(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPPreServerUploadDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPPreServerUploadDino(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPPrepareForLaunchFromShoulder(UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPrepareForLaunchFromShoulder(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.BPPrepareForLaunchFromShoulder(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventClearMountCapsuleResizing()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=61+chamadores=2]]
    bool BPPreventClearMountCapsuleResizing() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventClearMountCapsuleResizing()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventCopySettingsToDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=66]]
    bool BPPreventCopySettingsToDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BPPreventCopySettingsToDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPPreventOrderAllowed(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPPreventOrderAllowed(void* a0, int a1, bool a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, int, bool, void*, bool>(this, "APrimalDinoCharacter.BPPreventOrderAllowed(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventRiding(AShooterCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventRiding(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.BPPreventRiding(AShooterCharacter*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventSpawnForPlayer(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventSpawnForPlayer(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.BPPreventSpawnForPlayer(AShooterPlayerController*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventStepDamage()
    // endereco: cache_pdb_25090264
    bool BPPreventStepDamage() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventStepDamage()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventUpdateMountedHiddenShadow()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=61]]
    bool BPPreventUpdateMountedHiddenShadow() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventUpdateMountedHiddenShadow()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPPreventUploading()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=61]]
    bool BPPreventUploading() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventUploading()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPRefreshColorization()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void BPRefreshColorization() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPRefreshColorization()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPSentKilledNotification(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPSentKilledNotification(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPSentKilledNotification(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPSetForcedAggro(AActor*,float,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=166]]
    void BPSetForcedAggro(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APrimalDinoCharacter.BPSetForcedAggro(AActor*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPSetInitialAimOffsetTargets(UE::Math::TVector<double>,UE::Math::TRotator<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetInitialAimOffsetTargets(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalDinoCharacter.BPSetInitialAimOffsetTargets(UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPSetSimulatedInterpRollOverride()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPSetSimulatedInterpRollOverride() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BPSetSimulatedInterpRollOverride()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPSetTamedFollowTarget(AActor*)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPSetTamedFollowTarget(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalDinoCharacter.BPSetTamedFollowTarget(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPSetupTamed(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPSetupTamed(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.BPSetupTamed(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPShouldCancelDoAttack(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPShouldCancelDoAttack(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPShouldCancelDoAttack(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPShouldForceFlee()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPShouldForceFlee() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPShouldForceFlee()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPShowTamingPanel(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPShowTamingPanel(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BPShowTamingPanel(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPSkipTerrainTraceForCarriedCharacter()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPSkipTerrainTraceForCarriedCharacter() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BPSkipTerrainTraceForCarriedCharacter()");
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.BPStaticCreateBabyDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BPStaticCreateBabyDino(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, void* a10, void* a11, int a12, int a13, int a14, int a15)
    {
        return NativeCall<void*, void*, void*, void*, float, void*, void*, void*, float, void*, void*, void*, void*, int, int, int, int>(nullptr, "APrimalDinoCharacter.BPStaticCreateBabyDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,APrimalDinoCharacter*&,APrimalDinoCharacter*&,int,int,int,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPStaticCreateBabyDinoNoAncestors(UWorld*,TSubclassOf<APrimalDinoCharacter>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPStaticCreateBabyDinoNoAncestors(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, int a10, int a11, int a12) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*, void*, void*, float, void*, void*, int, int, int>(this, "APrimalDinoCharacter.BPStaticCreateBabyDinoNoAncestors(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,APrimalDinoCharacter*&,APrimalDinoCharacter*&,int,int,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPStaticCreateBabyDinoNoAncestors_V2(UWorld*,TSubclassOf<APrimalDinoCharact
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BPStaticCreateBabyDinoNoAncestors_V2(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, void* a10, int a11, int a12, int a13)
    {
        return NativeCall<void*, void*, void**, void*, float, void*, void*, void*, float, void*, void*, void*, int, int, int>(nullptr, "APrimalDinoCharacter.BPStaticCreateBabyDinoNoAncestors_V2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,APrimalDinoCharacter*&,APrimalDinoCharacter*&,TArray<FName,TSizedDefaultAllocator<32>>,int,int,int)", a0, &a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BPStaticCreateBabyDino_V2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BPStaticCreateBabyDino_V2(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, void* a10, void* a11, void* a12, int a13, int a14, int a15, int a16)
    {
        return NativeCall<void*, void*, void**, void*, float, void*, void*, void*, float, void*, void*, void*, void*, void*, int, int, int, int>(nullptr, "APrimalDinoCharacter.BPStaticCreateBabyDino_V2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,APrimalDinoCharacter*&,APrimalDinoCharacter*&,TArray<FName,TSizedDefaultAllocator<32>>,int,int,int,int)", a0, &a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPStaticCreateBabyDino_V3(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPStaticCreateBabyDino_V3(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, void* a10, void* a11, void* a12, int a13, int a14, int a15, int a16, bool a17) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*, void*, void*, float, void*, void*, void*, void*, void*, int, int, int, int, bool>(this, "APrimalDinoCharacter.BPStaticCreateBabyDino_V3(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,APrimalDinoCharacter*&,APrimalDinoCharacter*&,TArray<FName,TSizedDefaultAllocator<32>>,int,int,int,int,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPTamedConsumeFoodItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void BPTamedConsumeFoodItem(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPTamedConsumeFoodItem(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPTamedRemovedFoodItemFromConsumption(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void BPTamedRemovedFoodItemFromConsumption(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPTamedRemovedFoodItemFromConsumption(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPUnstasis()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPUnstasis() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BPUnstasis()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPUnstasisConsumeFood(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPUnstasisConsumeFood(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalDinoCharacter.BPUnstasisConsumeFood(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BPUntamedConsumeFoodItem(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPUntamedConsumeFoodItem(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BPUntamedConsumeFoodItem(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BPUpdateDinoInTamingArray(bool,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPUpdateDinoInTamingArray(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "APrimalDinoCharacter.BPUpdateDinoInTamingArray(bool,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BPUpdateReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPUpdateReplicatedAttackTargets(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "APrimalDinoCharacter.BPUpdateReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_CanFly()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BP_CanFly() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BP_CanFly()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_GetCustomModifier_MaxSpeed()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=62]]
    float BP_GetCustomModifier_MaxSpeed() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BP_GetCustomModifier_MaxSpeed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_GetCustomModifier_RotationRate()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=62]]
    float BP_GetCustomModifier_RotationRate() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BP_GetCustomModifier_RotationRate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_InterceptMoveForward(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=67]]
    bool BP_InterceptMoveForward(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalDinoCharacter.BP_InterceptMoveForward(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_InterceptMoveRight(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=67]]
    bool BP_InterceptMoveRight(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalDinoCharacter.BP_InterceptMoveRight(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_OnBasedPawnAddedToSet()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void BP_OnBasedPawnAddedToSet() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BP_OnBasedPawnAddedToSet()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_OnBasedPawnRemovedFromSet()
    // endereco: cache_pdb_25090264
    void BP_OnBasedPawnRemovedFromSet() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BP_OnBasedPawnRemovedFromSet()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BP_OnCryo(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    void BP_OnCryo(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BP_OnCryo(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_OnLandingInterruptedNotify()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BP_OnLandingInterruptedNotify() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BP_OnLandingInterruptedNotify()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BP_OnRiderChangeWeapons(AShooterCharacter*,UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BP_OnRiderChangeWeapons(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.BP_OnRiderChangeWeapons(AShooterCharacter*,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BP_OnStartLandFailed(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BP_OnStartLandFailed(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.BP_OnStartLandFailed(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BP_OnStartLandingNotify()
    // endereco: casamento de bytes com a build de referencia
    void BP_OnStartLandingNotify() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BP_OnStartLandingNotify()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BP_OnTamedOrderReceived(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor
    // endereco: casamento de bytes com a build de referencia
    void BP_OnTamedOrderReceived(void* a0, int a1, bool a2, void* a3, bool a4) const
    {
        NativeCall<void, void*, int, bool, void*, bool>(this, "APrimalDinoCharacter.BP_OnTamedOrderReceived(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BP_OnTargetedByTamedOrder(APrimalCharacter*,APrimalDinoCharacter*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BP_OnTargetedByTamedOrder(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalDinoCharacter.BP_OnTargetedByTamedOrder(APrimalCharacter*,APrimalDinoCharacter*,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BP_OverrideBasedCharactersCameraInterpSpeed(APrimalCharacter*,float,float,f
    // endereco: casamento de bytes com a build de referencia
    void BP_OverrideBasedCharactersCameraInterpSpeed(void* a0, float a1, float a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, float, float, void*, void*>(this, "APrimalDinoCharacter.BP_OverrideBasedCharactersCameraInterpSpeed(APrimalCharacter*,float,float,float&,float&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BP_OverrideCarriedCharacterTransform(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool BP_OverrideCarriedCharacterTransform(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BP_OverrideCarriedCharacterTransform(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BP_OverrideDinoName(FString&,APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BP_OverrideDinoName(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.BP_OverrideDinoName(FString&,APlayerController*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BP_OverrideDinoName(FString* a0, void* a1) const
    { return BP_OverrideDinoName(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BP_OverrideRiderCameraCollisionSweep(UE::Math::TVector<double>&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    void BP_OverrideRiderCameraCollisionSweep(void* retorno, void* a0, void* a1) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalDinoCharacter.BP_OverrideRiderCameraCollisionSweep(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BP_PreventCarrying()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BP_PreventCarrying() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BP_PreventCarrying()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_PreventCarryingByCharacter(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=66]]
    bool BP_PreventCarryingByCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.BP_PreventCarryingByCharacter(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_PreventUnmounting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BP_PreventUnmounting() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BP_PreventUnmounting()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BP_SkipEnterFlightAnim()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BP_SkipEnterFlightAnim() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.BP_SkipEnterFlightAnim()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BSetupDinoTameable()
    // endereco: casamento de bytes com a build de referencia
    void BSetupDinoTameable() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BSetupDinoTameable()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BabyConsumeCuddleFood(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BabyConsumeCuddleFood(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.BabyConsumeCuddleFood(APlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=184]]
    void BlendSpacePlayerBase_UpdateBlendFilter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BlueprintAdjustOutputDamage(int,float,AActor*,TSubclassOf<UDamageType>&,flo
    // endereco: casamento de bytes com a build de referencia
    float BlueprintAdjustOutputDamage(int a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<float, int, float, void*, void**, void*>(this, "APrimalDinoCharacter.BlueprintAdjustOutputDamage(int,float,AActor*,TSubclassOf<UDamageType>&,float&)", a0, a1, a2, &a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BlueprintCanAttack(int,float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool BlueprintCanAttack(int a0, float a1, float a2, void* a3) const
    {
        return NativeCall<bool, int, float, float, void*>(this, "APrimalDinoCharacter.BlueprintCanAttack(int,float,float,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BlueprintCanRiderAttack(int)
    // endereco: casamento de bytes com a build de referencia
    bool BlueprintCanRiderAttack(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.BlueprintCanRiderAttack(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BlueprintDrawFloatingHUD(AShooterHUD*,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void BlueprintDrawFloatingHUD(void* a0, float a1, float a2, float a3) const
    {
        NativeCall<void, void*, float, float, float>(this, "APrimalDinoCharacter.BlueprintDrawFloatingHUD(AShooterHUD*,float,float,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BlueprintExtraBabyScaling()
    // endereco: casamento de bytes com a build de referencia
    float BlueprintExtraBabyScaling() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.BlueprintExtraBabyScaling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.BlueprintGetAttackWeight(int,float,float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float BlueprintGetAttackWeight(int a0, float a1, float a2, float a3, void* a4) const
    {
        return NativeCall<float, int, float, float, float, void*>(this, "APrimalDinoCharacter.BlueprintGetAttackWeight(int,float,float,float,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.BlueprintOverrideHarvestDamageType(float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BlueprintOverrideHarvestDamageType(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.BlueprintOverrideHarvestDamageType(float&)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.BlueprintOverrideWantsToRun(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BlueprintOverrideWantsToRun(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "APrimalDinoCharacter.BlueprintOverrideWantsToRun(bool,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.BlueprintPlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BlueprintPlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalDinoCharacter.BlueprintPlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BlueprintTamedTick()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BlueprintTamedTick() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.BlueprintTamedTick()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.BrakeDinoBP(float)
    // endereco: cache_pdb_25090264
    void BrakeDinoBP(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.BrakeDinoBP(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CalcCapsuleHalfHeight()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=255+grafo=4/4]]
    void CalcCapsuleHalfHeight() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.CalcCapsuleHalfHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanAttack(int)
    // endereco: casamento de bytes com a build de referencia
    bool CanAttack(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.CanAttack(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanBeCarried(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=124]]
    bool CanBeCarried(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.CanBeCarried(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanBePainted()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    bool CanBePainted() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanBePainted()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanBoardCharacters()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool CanBoardCharacters() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanBoardCharacters()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanCarryCharacter(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=79]]
    bool CanCarryCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.CanCarryCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanClearRider()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=183]]
    bool CanClearRider() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanClearRider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanCryo(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanCryo(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.CanCryo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanDinoAttackTargetsWithoutRider()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=245]]
    bool CanDinoAttackTargetsWithoutRider() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanDinoAttackTargetsWithoutRider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanDragCharacter(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanDragCharacter(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.CanDragCharacter(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CanEquipCarts_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanEquipCarts_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.CanEquipCarts_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanFeedWakingTame(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanFeedWakingTame(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.CanFeedWakingTame(APlayerController*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanFly()
    // endereco: cache_pdb_25090264
    bool CanFly() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanFly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanMount(APrimalCharacter*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanMount(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.CanMount(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanNurseDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanNurseDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.CanNurseDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanOrder(APrimalCharacter*,bool)
    // endereco: cache_pdb_25090264
    bool CanOrder(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.CanOrder(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanPlayRandomIdleFidgetAnimation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool CanPlayRandomIdleFidgetAnimation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanPlayRandomIdleFidgetAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CanPlayRandomIdleFidgetAnimation_Implementation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanPlayRandomIdleFidgetAnimation_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.CanPlayRandomIdleFidgetAnimation_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CanPlaySpecificIdleFidgetAnimation(FDinoIdleFidgetAnimInfo)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanPlaySpecificIdleFidgetAnimation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.CanPlaySpecificIdleFidgetAnimation(FDinoIdleFidgetAnimInfo)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CanPlaySpecificIdleFidgetAnimation_Implementation(FDinoIdleFidgetAnimInfo)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlaySpecificIdleFidgetAnimation_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.CanPlaySpecificIdleFidgetAnimation_Implementation(FDinoIdleFidgetAnimInfo)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanPlayerCheatSpawn(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanPlayerCheatSpawn(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.CanPlayerCheatSpawn(APlayerController*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.CanRide(AShooterCharacter*,unsignedchar*,unsignedchar*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanRide(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, bool>(this, "APrimalDinoCharacter.CanRide(AShooterCharacter*,unsignedchar*,unsignedchar*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanSetBabyAge(float)
    // endereco: casamento de bytes com a build de referencia
    bool CanSetBabyAge(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalDinoCharacter.CanSetBabyAge(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CanSkipAnimGraph()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanSkipAnimGraph() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CanSkipAnimGraph()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanTakePassenger(APrimalCharacter*,int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanTakePassenger(void* a0, int a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, int, bool, bool, bool>(this, "APrimalDinoCharacter.CanTakePassenger(APrimalCharacter*,int,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.CanTame(AShooterPlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanTame(void* a0, bool a1, bool a2) const
    {
        return NativeCall<bool, void*, bool, bool>(this, "APrimalDinoCharacter.CanTame(AShooterPlayerController*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CanTarget(ITargetableInterface*)
    // endereco: casamento de bytes com a build de referencia
    bool CanTarget(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.CanTarget(ITargetableInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CanThrottleWandering()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanThrottleWandering() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.CanThrottleWandering()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CanThrottleWanderingMovement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=87]]
    BrzPonteiro CanThrottleWanderingMovement() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.CanThrottleWanderingMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CancelCurrentAttack(bool,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=246]]
    bool CancelCurrentAttack(bool a0, float a1) const
    {
        return NativeCall<bool, bool, float>(this, "APrimalDinoCharacter.CancelCurrentAttack(bool,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CaptureCharacterSnapshot(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void CaptureCharacterSnapshot(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.CaptureCharacterSnapshot(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CarryCharacter(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CarryCharacter(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.CarryCharacter(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ChangeActorTeam(int)
    // endereco: casamento de bytes com a build de referencia
    void ChangeActorTeam(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.ChangeActorTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ChangeCameraZoom(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ChangeCameraZoom(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ChangeCameraZoom(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()
    // endereco: casamento de bytes com a build de referencia
    void CheckAndHandleBasedPlayersBeingPushedThroughWalls() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CheckAttackConditions(int,float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool CheckAttackConditions(int a0, float a1, float a2, void* a3) const
    {
        return NativeCall<bool, int, float, float, void*>(this, "APrimalDinoCharacter.CheckAttackConditions(int,float,float,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CheckBabyCuddleWalkDistance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckBabyCuddleWalkDistance() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.CheckBabyCuddleWalkDistance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CheckDinoDuped(bool&)
    // endereco: casamento de bytes com a build de referencia
    void CheckDinoDuped(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.CheckDinoDuped(bool&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CheckForTamedFoodConsumption(int)
    // endereco: casamento de bytes com a build de referencia
    void CheckForTamedFoodConsumption(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.CheckForTamedFoodConsumption(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CheckForWildAmbientHarvesting()
    // endereco: casamento de bytes com a build de referencia
    void CheckForWildAmbientHarvesting() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.CheckForWildAmbientHarvesting()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.CheckLocalPassengers()
    // endereco: casamento de bytes com a build de referencia
    bool CheckLocalPassengers() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.CheckLocalPassengers()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.ClearAllSaddleStructures()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=30]]
    void ClearAllSaddleStructures() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClearAllSaddleStructures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClearCarriedCharacter(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearCarriedCharacter(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ClearCarriedCharacter(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClearCarryingDino(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearCarryingDino(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ClearCarryingDino(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ClearCharacterAIMovement()
    // endereco: cache_pdb_25090264
    void ClearCharacterAIMovement() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClearCharacterAIMovement()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ClearColorSetIndices()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=147]]
    void ClearColorSetIndices() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClearColorSetIndices()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClearMountCharacter(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearMountCharacter(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ClearMountCharacter(bool,bool)", a0, a1);
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.ClearPassengers()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1362+grafo=9/9]]
    void ClearPassengers() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClearPassengers()");
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.ClearRider(bool,bool,bool,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearRider(bool a0, bool a1, bool a2, int a3, bool a4, bool a5) const
    {
        NativeCall<void, bool, bool, bool, int, bool, bool>(this, "APrimalDinoCharacter.ClearRider(bool,bool,bool,int,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClearRidingDinoAsPassenger(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearRidingDinoAsPassenger(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.ClearRidingDinoAsPassenger(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ClearTamedLandTarget()
    // endereco: cache_pdb_25090264
    void ClearTamedLandTarget() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClearTamedLandTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ClientInterruptLanding()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void ClientInterruptLanding() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClientInterruptLanding()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClientInterruptLanding_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    void ClientInterruptLanding_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClientInterruptLanding_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalDinoCharacter.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClientShouldNotifyLanded_Implementation()
    // endereco: cache_pdb_25090264
    void ClientShouldNotifyLanded_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ClientShouldNotifyLanded_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ClientStartLanding(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientStartLanding(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.ClientStartLanding(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ClientStartLanding_Implementation(UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=153]]
    void ClientStartLanding_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.ClientStartLanding_Implementation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ConsumeInventoryFoodItem(UPrimalItem*,float*,bool,float*,float,bool)
    // endereco: casamento de bytes com a build de referencia
    AShooterCharacter* ConsumeInventoryFoodItem(void* a0, void* a1, bool a2, void* a3, float a4, bool a5) const
    {
        return NativeCall<AShooterCharacter*, void*, void*, bool, void*, float, bool>(this, "APrimalDinoCharacter.ConsumeInventoryFoodItem(UPrimalItem*,float*,bool,float*,float,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ControllerCanOrder(AController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=341]]
    bool ControllerCanOrder(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoCharacter.ControllerCanOrder(AController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ControllerLeavingGame(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ControllerLeavingGame(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.ControllerLeavingGame(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CopyColorizationFromDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void CopyColorizationFromDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.CopyColorizationFromDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CopyPaintingComponentFrom(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void CopyPaintingComponentFrom(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.CopyPaintingComponentFrom(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CopySettingsToDinosInRange(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void CopySettingsToDinosInRange(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalDinoCharacter.CopySettingsToDinosInRange(APlayerController*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.CopySettingsToOtherDino(APlayerController*,APrimalDinoCharacter*,APrimalDin
    // endereco: casamento de bytes com a build de referencia
    void CopySettingsToOtherDino(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "APrimalDinoCharacter.CopySettingsToOtherDino(APlayerController*,APrimalDinoCharacter*,APrimalDinoCharacter*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CopySettingsToOtherDino_Implementation(APlayerController*,APrimalDinoCharac
    // endereco: casamento de bytes com a build de referencia
    void CopySettingsToOtherDino_Implementation(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "APrimalDinoCharacter.CopySettingsToOtherDino_Implementation(APlayerController*,APrimalDinoCharacter*,APrimalDinoCharacter*,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.CreateBabyDino(APrimalDinoCharacter*&,APrimalDinoCharacter*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateBabyDino(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.CreateBabyDino(APrimalDinoCharacter*&,APrimalDinoCharacter*&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CreateCloneFertilizedEgg(UE::Math::TVector<double>,UE::Math::TRotator<doubl
    // endereco: casamento de bytes com a build de referencia
    ADroppedItem* CreateCloneFertilizedEgg(void* a0, void* a1, void* a2, int a3, bool a4, bool a5) const
    {
        return NativeCall<ADroppedItem*, void*, void*, void**, int, bool, bool>(this, "APrimalDinoCharacter.CreateCloneFertilizedEgg(UE::Math::TVector<double>,UE::Math::TRotator<double>,TSubclassOf<ADroppedItem>,int,bool,bool)", a0, a1, &a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.CreateCloneGestation(int)
    // endereco: casamento de bytes com a build de referencia
    void CreateCloneGestation(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.CreateCloneGestation(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.CycleAttackWeightsForAttackAtIndex(int)
    // endereco: cache_pdb_25090264
    void CycleAttackWeightsForAttackAtIndex(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.CycleAttackWeightsForAttackAtIndex(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageTy
    // endereco: casamento de bytes com a build de referencia
    void DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, int, void**, float>(this, "APrimalDinoCharacter.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, &a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DeathHarvestingFadeOut_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void DeathHarvestingFadeOut_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.DeathHarvestingFadeOut_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Destroy(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool Destroy(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "APrimalDinoCharacter.Destroy(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DidLand()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=240]]
    void DidLand() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.DidLand()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalDinoCharacter.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DinoFireProjectileEx_Implementation(TSubclassOf<AShooterProjectile>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    void DinoFireProjectileEx_Implementation(void* a0, void* a1, void* a2, bool a3, bool a4, float a5, float a6, float a7, float a8, bool a9) const
    {
        NativeCall<void, void**, void*, void*, bool, bool, float, float, float, float, bool>(this, "APrimalDinoCharacter.DinoFireProjectileEx_Implementation(TSubclassOf<AShooterProjectile>,UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool,bool,float,float,float,float,bool)", &a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DinoKillerTransferItemsToInventory(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void DinoKillerTransferItemsToInventory(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.DinoKillerTransferItemsToInventory(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.DinoShoulderMountedLaunch(UE::Math::TVector<double>,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DinoShoulderMountedLaunch(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.DinoShoulderMountedLaunch(UE::Math::TVector<double>,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.DisableHarvesting()
    // endereco: cache_pdb_25090264
    BrzPonteiro DisableHarvesting() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.DisableHarvesting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DoAttack(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool DoAttack(int a0, bool a1, bool a2) const
    {
        return NativeCall<bool, int, bool, bool>(this, "APrimalDinoCharacter.DoAttack(int,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DoDinoCrouch()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=126]]
    void DoDinoCrouch() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.DoDinoCrouch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DoMate(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=128]]
    void DoMate(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.DoMate(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DoMate_Implementation(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void DoMate_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.DoMate_Implementation(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.DoNeuter()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DoNeuter() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.DoNeuter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DoNeuter_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void DoNeuter_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.DoNeuter_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.DoOverrideMountedAirControl(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float DoOverrideMountedAirControl(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalDinoCharacter.DoOverrideMountedAirControl(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DoUnstasis_TamedDinoUnstasisConsumeFood()
    // endereco: casamento de bytes com a build de referencia
    void DoUnstasis_TamedDinoUnstasisConsumeFood() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.DoUnstasis_TamedDinoUnstasisConsumeFood()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.DoesDinoHaveBasedPawns(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesDinoHaveBasedPawns(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalDinoCharacter.DoesDinoHaveBasedPawns(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.DoesUseHibernation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    bool DoesUseHibernation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.DoesUseHibernation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DontForceUpdateRateOptimizations()
    // endereco: cache_pdb_25090264
    bool DontForceUpdateRateOptimizations() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.DontForceUpdateRateOptimizations()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DrawDinoFloatingHUD(AShooterHUD*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DrawDinoFloatingHUD(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.DrawDinoFloatingHUD(AShooterHUD*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DrawFloatingHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawFloatingHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.DrawFloatingHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.DropsApexItem()
    // endereco: casamento de bytes com a build de referencia
    bool DropsApexItem() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.DropsApexItem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.EmitPoop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=184]]
    void EmitPoop() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.EmitPoop()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.EnableUpdateSkeletalMeshKinematics()
    // classe: a funcao mora em UPrimalActor, e APrimalDinoCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableUpdateSkeletalMeshKinematics() const
    {
        return NativeCall<void*>(this, "UPrimalActor.EnableUpdateSkeletalMeshKinematics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.EndCharging(bool)
    // endereco: casamento de bytes com a build de referencia
    void EndCharging(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.EndCharging(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.EndThrottledWandering()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro EndThrottledWandering() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.EndThrottledWandering()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.FaceRotation(UE::Math::TRotator<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void FaceRotation(void* a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "APrimalDinoCharacter.FaceRotation(UE::Math::TRotator<double>,float,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.FedWakingTameDino()
    // endereco: casamento de bytes com a build de referencia
    void FedWakingTameDino() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.FedWakingTameDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FedWakingTameDino_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void FedWakingTameDino_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.FedWakingTameDino_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FinalLoadedFromSaveGame()
    // endereco: casamento de bytes com a build de referencia
    void FinalLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.FinalLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FindDinoWithID(UWorld*,unsignedint,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindDinoWithID(void* a0, unsigned int a1, unsigned int a2)
    {
        return NativeCall<void*, void*, unsigned int, unsigned int>(nullptr, "APrimalDinoCharacter.FindDinoWithID(UWorld*,unsignedint,unsignedint)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.FindFirstFoodItemPlayerCharacter()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindFirstFoodItemPlayerCharacter() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.FindFirstFoodItemPlayerCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.FireMultipleProjectiles(TArray<UE::Math::TVector<double>,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FireMultipleProjectiles(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalDinoCharacter.FireMultipleProjectiles(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FireMultipleProjectilesEx_Implementation(TSubclassOf<AShooterProjectile>,TA
    // endereco: casamento de bytes com a build de referencia
    void FireMultipleProjectilesEx_Implementation(void* a0, void* a1, void* a2, bool a3, bool a4, void* a5, void* a6, float a7) const
    {
        NativeCall<void, void**, void*, void*, bool, bool, void*, void*, float>(this, "APrimalDinoCharacter.FireMultipleProjectilesEx_Implementation(TSubclassOf<AShooterProjectile>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool,bool,USceneComponent*,UE::Math::TVector<double>,float)", &a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FireMultipleProjectiles_Implementation(TArray<UE::Math::TVector<double>,TSi
    // endereco: casamento de bytes com a build de referencia
    void FireMultipleProjectiles_Implementation(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalDinoCharacter.FireMultipleProjectiles_Implementation(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FireProjectileLocal(UE::Math::TVector<double>,FVector_NetQuantizeNormal,boo
    // endereco: casamento de bytes com a build de referencia
    void FireProjectileLocal(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalDinoCharacter.FireProjectileLocal(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantize
    // endereco: casamento de bytes com a build de referencia
    void FireProjectile_Implementation(void* a0, void* a1, long long a2) const
    {
        NativeCall<void, void*, void*, long long>(this, "APrimalDinoCharacter.FireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.FlyingUseHighQualityCollision()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool FlyingUseHighQualityCollision() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.FlyingUseHighQualityCollision()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceAllowAccelerationRotationWhenFalling()
    // endereco: cache_pdb_25090264
    bool ForceAllowAccelerationRotationWhenFalling() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ForceAllowAccelerationRotationWhenFalling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceAllowBackwardsMovement()
    // endereco: casamento de bytes com a build de referencia
    bool ForceAllowBackwardsMovement() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ForceAllowBackwardsMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceClearRider()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ForceClearRider() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ForceClearRider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceDisableClientGravitySimulation()
    // endereco: cache_pdb_25090264
    bool ForceDisableClientGravitySimulation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ForceDisableClientGravitySimulation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceRefreshTransform()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=120]]
    void ForceRefreshTransform() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ForceRefreshTransform()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ForceSetTamedAggressionLevel(int)
    // endereco: casamento de bytes com a build de referencia
    void ForceSetTamedAggressionLevel(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.ForceSetTamedAggressionLevel(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceUpdateColorSets(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ForceUpdateColorSets(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "APrimalDinoCharacter.ForceUpdateColorSets(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ForceUpdateColorSets_Implementation(int,int)
    // endereco: casamento de bytes com a build de referencia
    void ForceUpdateColorSets_Implementation(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "APrimalDinoCharacter.ForceUpdateColorSets_Implementation(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GeneTraits_CharacterCanHaveGeneTraits()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GeneTraits_CharacterCanHaveGeneTraits() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GeneTraits_CharacterCanHaveGeneTraits()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    int GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "APrimalDinoCharacter.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GenerateRandomLookAtTargetCooldown(bool)
    // endereco: casamento de bytes com a build de referencia
    float GenerateRandomLookAtTargetCooldown(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalDinoCharacter.GenerateRandomLookAtTargetCooldown(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GenerateRandomLookAtTargetDuration()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=95]]
    float GenerateRandomLookAtTargetDuration() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GenerateRandomLookAtTargetDuration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetAIFollowStoppingDistanceMultiplier()
    // endereco: cache_pdb_25090264
    float GetAIFollowStoppingDistanceMultiplier() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetAIFollowStoppingDistanceMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetActiveState()
    // endereco: cache_pdb_25090264
    UPrimalAIState* GetActiveState() const
    {
        return NativeCall<UPrimalAIState*>(this, "APrimalDinoCharacter.GetActiveState()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetAffinityIncreaseForFoodItem(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    float GetAffinityIncreaseForFoodItem(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.GetAffinityIncreaseForFoodItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAimOffsets(float a0, void* a1, void* a2, float a3, void* a4, bool a5) const
    {
        return NativeCall<void*, float, void*, void*, float, void*, bool>(this, "APrimalDinoCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetAimOffsetsTransform(float,UE::Math::TTransform<double>&,float&,float,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAimOffsetsTransform(float a0, void* a1, void* a2, float a3, void* a4, bool a5) const
    {
        return NativeCall<void*, float, void*, void*, float, void*, bool>(this, "APrimalDinoCharacter.GetAimOffsetsTransform(float,UE::Math::TTransform<double>&,float&,float,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalC
    // endereco: casamento de bytes com a build de referencia
    bool GetAllAttachedCharsInternal(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, bool>(this, "APrimalDinoCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalCharacter*,0>,FDefaultSetAllocator>&,APrimalCharacter*,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetAllAttachedExplosives(bool)
    // endereco: casamento de bytes com a build de referencia
    void GetAllAttachedExplosives(void* retorno, bool a0) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.GetAllAttachedExplosives(bool)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetAllowedPaintingColorRegion(int)
    // endereco: cache_pdb_25090264
    bool GetAllowedPaintingColorRegion(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.GetAllowedPaintingColorRegion(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetAlwaysHitMeleeActors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAlwaysHitMeleeActors() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetAlwaysHitMeleeActors()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetApproachRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetApproachRadius() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetApproachRadius()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetAttackRangeOffset()
    // endereco: casamento de bytes com a build de referencia
    float GetAttackRangeOffset() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetAttackRangeOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetAttackTargets(AActor**,UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAttackTargets(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalDinoCharacter.GetAttackTargets(AActor**,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void GetAttackerDamageImpactFXAttachSocket(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.GetAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetBabyAge()
    // endereco: cache_pdb_25090264
    float GetBabyAge() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetBabyAge()");
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.GetBabyCuddleFood()
    // endereco: casamento de bytes com a build de referencia
    void** GetBabyCuddleFood() const
    {
        return NativeCall<void**>(this, "APrimalDinoCharacter.GetBabyCuddleFood()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetBabyCuddleInterval()
    // endereco: casamento de bytes com a build de referencia
    float GetBabyCuddleInterval() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetBabyCuddleInterval()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetBabyScale()
    // endereco: casamento de bytes com a build de referencia
    float GetBabyScale() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetBabyScale()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetBaseDescriptiveName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=116]]
    BrzPonteiro GetBaseDescriptiveName() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetBaseDescriptiveName()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.GetBaseDragWeight(bool)
    // endereco: casamento de bytes com a build de referencia
    float GetBaseDragWeight(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetBaseDragWeight(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetBaseTargetingDesire(ITargetableInterface*)
    // endereco: casamento de bytes com a build de referencia
    float GetBaseTargetingDesire(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.GetBaseTargetingDesire(ITargetableInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetBestInventoryFoodItem(float&,bool,bool,UPrimalItem**,bool)
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* GetBestInventoryFoodItem(void* a0, bool a1, bool a2, void* a3, bool a4) const
    {
        return NativeCall<UPrimalItem*, void*, bool, bool, void*, bool>(this, "APrimalDinoCharacter.GetBestInventoryFoodItem(float&,bool,bool,UPrimalItem**,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetBotRider()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=353]]
    UObject* GetBotRider() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetBotRider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetCanMutateStat(int)
    // endereco: casamento de bytes com a build de referencia
    bool GetCanMutateStat(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.GetCanMutateStat(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetCarryingSocketYaw(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=189+grafo=3/3]]
    float GetCarryingSocketYaw(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetCarryingSocketYaw(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<doubl
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool GetClosestTargetOverride(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalDinoCharacter.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetColorForColorizationRegion(int,int)
    // endereco: casamento de bytes com a build de referencia
    void GetColorForColorizationRegion(void* retorno, int a0, int a1) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalDinoCharacter.GetColorForColorizationRegion(int,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetColorSetInidcesAsString()
    // endereco: casamento de bytes com a build de referencia
    void GetColorSetInidcesAsString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetColorSetInidcesAsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetColorSetNamesAsArray()
    // endereco: casamento de bytes com a build de referencia
    void GetColorSetNamesAsArray(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetColorSetNamesAsArray()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetColorizationData()
    // endereco: casamento de bytes com a build de referencia
    void GetColorizationData(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetColorizationData()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetCorpseLifespan()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=120]]
    float GetCorpseLifespan() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetCorpseLifespan()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetCryopodTraitString()
    // endereco: casamento de bytes com a build de referencia
    void GetCryopodTraitString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetCryopodTraitString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetCurrentAimOffsetsRotation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentAimOffsetsRotation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetCurrentAimOffsetsRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetCurrentAttackIndexForInput(TEnumAsByte<EDinoInputAction::Type>)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentAttackIndexForInput(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalDinoCharacter.GetCurrentAttackIndexForInput(TEnumAsByte<EDinoInputAction::Type>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetCurrentAttackInfo(int&,FDinoAttackInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentAttackInfo(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.GetCurrentAttackInfo(int&,FDinoAttackInfo&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetCurrentAttackProgressPercent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=393]]
    float GetCurrentAttackProgressPercent() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetCurrentAttackProgressPercent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetCurrentDinoName(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void GetCurrentDinoName(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.GetCurrentDinoName(APlayerController*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetDebugInfoString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetDescriptiveName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDesiredNavmeshGenerationRadiusName()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    unsigned long long GetDesiredNavmeshGenerationRadiusName() const
    {
        return NativeCall<unsigned long long>(this, "APrimalDinoCharacter.GetDesiredNavmeshGenerationRadiusName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDesiredNavmeshGenerationRadiusName_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void GetDesiredNavmeshGenerationRadiusName_Implementation(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetDesiredNavmeshGenerationRadiusName_Implementation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDetailedDescription(FString&)
    // endereco: casamento de bytes com a build de referencia
    void GetDetailedDescription(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.GetDetailedDescription(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetDetailedDescription(void* retorno, FString* a0) const
    { GetDetailedDescription(retorno, *a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetDinoBasedPawns(USceneComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDinoBasedPawns(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalDinoCharacter.GetDinoBasedPawns(USceneComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoColor(int)
    // endereco: casamento de bytes com a build de referencia
    void GetDinoColor(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "APrimalDinoCharacter.GetDinoColor(int)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoData(FARKDinoData&)
    // endereco: casamento de bytes com a build de referencia
    void GetDinoData(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetDinoData(FARKDinoData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoDeathTime()
    // endereco: casamento de bytes com a build de referencia
    float GetDinoDeathTime() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetDinoDeathTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoDescriptiveName(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetDinoDescriptiveName(void* retorno, bool a0, bool a1) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalDinoCharacter.GetDinoDescriptiveName(bool,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoEntryIcon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=334]]
    UTexture* GetDinoEntryIcon() const
    {
        return NativeCall<UTexture*>(this, "APrimalDinoCharacter.GetDinoEntryIcon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetDinoIDs(int&,int&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetDinoIDs(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.GetDinoIDs(int&,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetDinoIDsAsStrings(FString&,FString&)
    // endereco: thunk
    BrzPonteiro GetDinoIDsAsStrings(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.GetDinoIDsAsStrings(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetDinoIDsAsStrings(FString* a0, FString* a1) const
    { return GetDinoIDsAsStrings(*a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoIdleFidgetAnimationsEnabled()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=166]]
    bool GetDinoIdleFidgetAnimationsEnabled() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.GetDinoIdleFidgetAnimationsEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoLevelUpAnimation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=239+chamadores=6+grafo=5/5]]
    UAnimMontage* GetDinoLevelUpAnimation() const
    {
        return NativeCall<UAnimMontage*>(this, "APrimalDinoCharacter.GetDinoLevelUpAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoLevelUpAnimation_Implementation()
    // endereco: casamento de bytes com a build de referencia
    UAnimMontage* GetDinoLevelUpAnimation_Implementation() const
    {
        return NativeCall<UAnimMontage*>(this, "APrimalDinoCharacter.GetDinoLevelUpAnimation_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoPlatformCollisionIgnoreActors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDinoPlatformCollisionIgnoreActors() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetDinoPlatformCollisionIgnoreActors()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoRandomLookAtEnabled()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=217+grafo=3/3]]
    bool GetDinoRandomLookAtEnabled() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.GetDinoRandomLookAtEnabled()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoTameSound()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* GetDinoTameSound() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetDinoTameSound()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetDinoTameSound_Implementation()
    // endereco: casamento de bytes com a build de referencia
    USoundBase* GetDinoTameSound_Implementation() const
    {
        return NativeCall<USoundBase*>(this, "APrimalDinoCharacter.GetDinoTameSound_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoUsesStat(int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    bool GetDinoUsesStat(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "APrimalDinoCharacter.GetDinoUsesStat(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDinoVelocity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDinoVelocity() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetDinoVelocity()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetDistanceToSpawnedLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetDistanceToSpawnedLocation() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetDistanceToSpawnedLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetEntryDescription()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=214]]
    void GetEntryDescription(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetEntryDescription()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetEntryIcon(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetEntryIcon(void* a0, bool a1) const
    {
        return NativeCall<UTexture2D*, void*, bool>(this, "APrimalDinoCharacter.GetEntryIcon(UObject*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetEntryIconMaterial(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    UMaterialInterface* GetEntryIconMaterial(void* a0, bool a1) const
    {
        return NativeCall<UMaterialInterface*, void*, bool>(this, "APrimalDinoCharacter.GetEntryIconMaterial(UObject*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetEntryString()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void GetEntryString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetEntryString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetEquippedItemDurabilityPercent(FItemNetID)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=170]]
    float GetEquippedItemDurabilityPercent(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "APrimalDinoCharacter.GetEquippedItemDurabilityPercent(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetExtraFoodItemEffectivenessMultipliersIndex(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetExtraFoodItemEffectivenessMultipliersIndex(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalDinoCharacter.GetExtraFoodItemEffectivenessMultipliersIndex(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetExtraPaintingMeshStartIndex()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetExtraPaintingMeshStartIndex() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.GetExtraPaintingMeshStartIndex()");
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.GetFirstAffinityFoodItemClass()
    // endereco: casamento de bytes com a build de referencia
    void** GetFirstAffinityFoodItemClass() const
    {
        return NativeCall<void**>(this, "APrimalDinoCharacter.GetFirstAffinityFoodItemClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetFirstValidWildFollowingParentRef()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFirstValidWildFollowingParentRef() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetFirstValidWildFollowingParentRef()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetFloatingHUDLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFloatingHUDLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetFloatingHUDLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetFoodItemEffectivenessMultipliersIndex(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetFoodItemEffectivenessMultipliersIndex(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalDinoCharacter.GetFoodItemEffectivenessMultipliersIndex(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetForceClaimTime()
    // endereco: casamento de bytes com a build de referencia
    double GetForceClaimTime() const
    {
        return NativeCall<double>(this, "APrimalDinoCharacter.GetForceClaimTime()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetForceTickPose()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool GetForceTickPose() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.GetForceTickPose()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetGestationData(FUnreplicatedEggData&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1724+bytes40+grafo=6/6]]
    void GetGestationData(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetGestationData(FUnreplicatedEggData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetGestationTimeRemaining()
    // endereco: casamento de bytes com a build de referencia
    float GetGestationTimeRemaining() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetGestationTimeRemaining()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetGravityZScale()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=344+grafo=3/3]]
    float GetGravityZScale() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetGravityZScale()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetHealthPercentage()
    // endereco: casamento de bytes com a build de referencia
    float GetHealthPercentage() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetHealthPercentage()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetImprintQualitySpeedForItem(UPrimalItem*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetImprintQualitySpeedForItem(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.GetImprintQualitySpeedForItem(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetImprintQualitySpeedForItem_Implementation(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetImprintQualitySpeedForItem_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetImprintQualitySpeedForItem_Implementation(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetImprintingQualityIncreasePerImprint()
    // endereco: casamento de bytes com a build de referencia
    float GetImprintingQualityIncreasePerImprint() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetImprintingQualityIncreasePerImprint()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetInstanceOverrideByValue_IsAlphaEliteMegaDino()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstanceOverrideByValue_IsAlphaEliteMegaDino() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetInstanceOverrideByValue_IsAlphaEliteMegaDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetInstanceOverrideByValue_LoseStaminaWithRiderRate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstanceOverrideByValue_LoseStaminaWithRiderRate() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetInstanceOverrideByValue_LoseStaminaWithRiderRate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetInstanceOverrideByValue_UseBabyGestation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstanceOverrideByValue_UseBabyGestation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetInstanceOverrideByValue_UseBabyGestation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetInterpolatedLocation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetInterpolatedLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetInterpolatedLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetLandingLocation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=5101+bytes40+grafo=40/40]]
    BrzPonteiro GetLandingLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetLandingLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetLastStartedTalkingTime()
    // endereco: casamento de bytes com a build de referencia
    double GetLastStartedTalkingTime() const
    {
        return NativeCall<double>(this, "APrimalDinoCharacter.GetLastStartedTalkingTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetLookOffsetSocketLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLookOffsetSocketLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetLookOffsetSocketLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetMaxSpeedModifier(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxSpeedModifier(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalDinoCharacter.GetMaxSpeedModifier(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAl
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalDinoCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetMultiUseIcon(APlayerController*,FMultiUseEntry)
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetMultiUseIcon(void* a0, void* a1) const
    {
        return NativeCall<UTexture2D*, void*, void*>(this, "APrimalDinoCharacter.GetMultiUseIcon(APlayerController*,FMultiUseEntry)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetNetStasisAndRangeMultiplier(bool)
    // endereco: casamento de bytes com a build de referencia
    float GetNetStasisAndRangeMultiplier(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetNetStasisAndRangeMultiplier(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetNetworkModeStasisRangeMultiplier(ENetMode)
    // endereco: casamento de bytes com a build de referencia
    float GetNetworkModeStasisRangeMultiplier(int a0) const
    {
        return NativeCall<float, int>(this, "APrimalDinoCharacter.GetNetworkModeStasisRangeMultiplier(ENetMode)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetNumAvailablePassengerSeats(bool)
    // endereco: casamento de bytes com a build de referencia
    int GetNumAvailablePassengerSeats(bool a0) const
    {
        return NativeCall<int, bool>(this, "APrimalDinoCharacter.GetNumAvailablePassengerSeats(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetNumPassengerSeats(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetNumPassengerSeats(bool a0) const
    {
        return NativeCall<int, bool>(this, "APrimalDinoCharacter.GetNumPassengerSeats(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetObject()
    // endereco: cache_pdb_25090264
    UObject* GetObject() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetObject()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetOriginalTargetingTeam()
    // endereco: cache_pdb_25090264
    int GetOriginalTargetingTeam() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.GetOriginalTargetingTeam()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetOtherActorToIgnore()
    // endereco: cache_pdb_25090264
    AActor* GetOtherActorToIgnore() const
    {
        return NativeCall<AActor*>(this, "APrimalDinoCharacter.GetOtherActorToIgnore()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetOverrideAttachedSaddleMesh()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=113+chamadores=4]]
    UObject* GetOverrideAttachedSaddleMesh() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetOverrideAttachedSaddleMesh()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.GetPaintingMesh_Implementation(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=81]]
    UMeshComponent* GetPaintingMesh_Implementation(int a0) const
    {
        return NativeCall<UMeshComponent*, int>(this, "APrimalDinoCharacter.GetPaintingMesh_Implementation(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetPassengerOffset(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetPassengerOffset(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetPassengerOffset(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetPassengerPerSeat(int)
    // endereco: cache_pdb_25090264
    UObject* GetPassengerPerSeat(int a0) const
    {
        return NativeCall<UObject*, int>(this, "APrimalDinoCharacter.GetPassengerPerSeat(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetPassengerSeatDefinition(unsignedchar)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=382+chamadores=3+grafo=3/3]]
    BrzPonteiro GetPassengerSeatDefinition(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalDinoCharacter.GetPassengerSeatDefinition(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetPassengers()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=177+bytes40+chamadores=4]]
    void GetPassengers(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetPassengers()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetPassengersAndSeatIndexes(TArray<APrimalCharacter*,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    void GetPassengersAndSeatIndexes(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.GetPassengersAndSeatIndexes(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetPassengersSeatIndex(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetPassengersSeatIndex(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalDinoCharacter.GetPassengersSeatIndex(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetPlayerSpawnLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetPlayerSpawnLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetPlayerSpawnLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetPlayerSpawnRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=163]]
    BrzPonteiro GetPlayerSpawnRotation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetPlayerSpawnRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetPoopAnimation(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=44]]
    UAnimMontage* GetPoopAnimation(bool a0) const
    {
        return NativeCall<UAnimMontage*, bool>(this, "APrimalDinoCharacter.GetPoopAnimation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetPreventColorizationRegions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPreventColorizationRegions() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetPreventColorizationRegions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)
    // endereco: casamento de bytes com a build de referencia
    float GetPrimalCameraDesiredArmLength(void* a0, float a1, float a2) const
    {
        return NativeCall<float, void*, float, float>(this, "APrimalDinoCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.GetRandomBaseLevel()
    // endereco: casamento de bytes com a build de referencia
    int GetRandomBaseLevel() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.GetRandomBaseLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetReplicatedAttackTargets(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.GetReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetRequireAccelerationForUseControllerDesiredRotation()
    // endereco: cache_pdb_25090264
    bool GetRequireAccelerationForUseControllerDesiredRotation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.GetRequireAccelerationForUseControllerDesiredRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetRequiresDLC()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRequiresDLC() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetRequiresDLC()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetRequiresDLC_Class()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRequiresDLC_Class() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetRequiresDLC_Class()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetRestrictedCarriedPlayerViewEndLoc()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=744+grafo=3/3]]
    BrzPonteiro GetRestrictedCarriedPlayerViewEndLoc() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetRestrictedCarriedPlayerViewEndLoc()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetRider()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetRider() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetRider()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetRidingCarryingIgnoreList(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRidingCarryingIgnoreList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetRidingCarryingIgnoreList(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetRidingMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    void GetRidingMultiUseEntries(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.GetRidingMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetRootYawSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    float GetRootYawSpeed(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalDinoCharacter.GetRootYawSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetRotationRateModifier()
    // endereco: casamento de bytes com a build de referencia
    float GetRotationRateModifier() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetRotationRateModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetRunningSpeedModifier(bool)
    // endereco: casamento de bytes com a build de referencia
    float GetRunningSpeedModifier(bool a0) const
    {
        return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetRunningSpeedModifier(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSaddleActorComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSaddleActorComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetSaddleActorComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetSaddleMeshComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=176]]
    USkeletalMeshComponent* GetSaddleMeshComponent() const
    {
        return NativeCall<USkeletalMeshComponent*>(this, "APrimalDinoCharacter.GetSaddleMeshComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSaddleMeshComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSaddleMeshComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetSaddleMeshComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetScaledMaxWildSpawnLevel()
    // endereco: casamento de bytes com a build de referencia
    int GetScaledMaxWildSpawnLevel() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.GetScaledMaxWildSpawnLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetSeatIndexForPassenger(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    int GetSeatIndexForPassenger(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalDinoCharacter.GetSeatIndexForPassenger(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetSecondaryDinoMountedAnimOverride()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=461+grafo=12/12]]
    UObject* GetSecondaryDinoMountedAnimOverride() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetSecondaryDinoMountedAnimOverride()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSecondaryMountedDinoSetups()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSecondaryMountedDinoSetups() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetSecondaryMountedDinoSetups()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetShortName()
    // endereco: casamento de bytes com a build de referencia
    void GetShortName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.GetShortName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSignificance(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=432+bytes40+grafo=3/3]]
    BrzPonteiro GetSignificance(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalDinoCharacter.GetSignificance(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSignificanceBasedAnimationBlend()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSignificanceBasedAnimationBlend() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetSignificanceBasedAnimationBlend()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSignificanceMaxDistance(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=432+bytes40+chamadores=4+grafo=3/3]]
    BrzPonteiro GetSignificanceMaxDistance(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalDinoCharacter.GetSignificanceMaxDistance(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetSocketForMeleeTraceForHitBlockers(int)
    // endereco: casamento de bytes com a build de referencia
    unsigned long long GetSocketForMeleeTraceForHitBlockers(int a0) const
    {
        return NativeCall<unsigned long long, int>(this, "APrimalDinoCharacter.GetSocketForMeleeTraceForHitBlockers(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetSocketLocationTemp(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSocketLocationTemp(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalDinoCharacter.GetSocketLocationTemp(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSpawnPointInfo()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSpawnPointInfo() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetSpawnPointInfo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSpecificHarvestMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSpecificHarvestMultiUseEntries(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalDinoCharacter.GetSpecificHarvestMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetSpeedModifier()
    // endereco: casamento de bytes com a build de referencia
    float GetSpeedModifier() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetSpeedModifier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetStartledAnimations()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStartledAnimations() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetStartledAnimations()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetStateOfPlayedAnimationAttack()
    // endereco: cache_pdb_25090264
    UObject* GetStateOfPlayedAnimationAttack() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetStateOfPlayedAnimationAttack()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetSwimmingAndWithAttachedBox(UE::Math::TVector<double>&,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSwimmingAndWithAttachedBox(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalDinoCharacter.GetSwimmingAndWithAttachedBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetTamedDinoCountCost()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetTamedDinoCountCost() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.GetTamedDinoCountCost()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetTamedFollowTarget()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UObject* GetTamedFollowTarget() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetTamedFollowTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetTamedFollowTargetNoRider()
    // endereco: cache_pdb_25090264
    UObject* GetTamedFollowTargetNoRider() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetTamedFollowTargetNoRider()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.GetTamedLandTarget()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=60]]
    UObject* GetTamedLandTarget() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetTamedLandTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetTamedUnsleepAnim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTamedUnsleepAnim() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetTamedUnsleepAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetTargetPathfindingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetPathfindingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetTargetPathfindingLocation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetTargetingDesirability(ITargetableInterface*)
    // endereco: casamento de bytes com a build de referencia
    float GetTargetingDesirability(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoCharacter.GetTargetingDesirability(ITargetableInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetTargetingDesirabilityNative(TScriptInterface<ITargetableInterface>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingDesirabilityNative(void* a0) const
    {
        return NativeCall<void*, void**>(this, "APrimalDinoCharacter.GetTargetingDesirabilityNative(TScriptInterface<ITargetableInterface>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetTargetingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetTargetingLocation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetTooltipCharacterInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipCharacterInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.GetTooltipCharacterInfo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetUntamedTargetingTeam()
    // endereco: casamento de bytes com a build de referencia
    int GetUntamedTargetingTeam() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.GetUntamedTargetingTeam()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetUsedCorpseTargetingMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUsedCorpseTargetingMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetUsedCorpseTargetingMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetUsesColorizationRegion(int)
    // endereco: casamento de bytes com a build de referencia
    bool GetUsesColorizationRegion(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.GetUsesColorizationRegion(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetWheelOptionInfo(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void GetWheelOptionInfo(void* retorno, void* a0, int a1) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalDinoCharacter.GetWheelOptionInfo(APlayerController*,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetWiegthedAttack(float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    unsigned char GetWiegthedAttack(float a0, float a1, void* a2) const
    {
        return NativeCall<unsigned char, float, float, void*>(this, "APrimalDinoCharacter.GetWiegthedAttack(float,float,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.GetWildUnsleepAnim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWildUnsleepAnim() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.GetWildUnsleepAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetXPMultiplier()
    // endereco: cache_pdb_25090264
    float GetXPMultiplier() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetXPMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetZoomMaxValue()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetZoomMaxValue() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetZoomMaxValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GetZoomMinValue()
    // endereco: casamento de bytes com a build de referencia
    float GetZoomMinValue() const
    {
        return NativeCall<float>(this, "APrimalDinoCharacter.GetZoomMinValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GiveDeathDossier()
    // endereco: casamento de bytes com a build de referencia
    void GiveDeathDossier() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.GiveDeathDossier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GiveSaddle(TSubclassOf<UPrimalItem>,float,float,bool)
    // endereco: thunk
    UPrimalItem* GiveSaddle(void* a0, float a1, float a2, bool a3) const
    {
        return NativeCall<UPrimalItem*, void**, float, float, bool>(this, "APrimalDinoCharacter.GiveSaddle(TSubclassOf<UPrimalItem>,float,float,bool)", &a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.GiveSaddleFromString(FString&,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    UPrimalItem* GiveSaddleFromString(const FString& a0, float a1, float a2, bool a3) const
    {
        return NativeCall<UPrimalItem*, void*, float, float, bool>(this, "APrimalDinoCharacter.GiveSaddleFromString(FString&,float,float,bool)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    UPrimalItem* GiveSaddleFromString(FString* a0, float a1, float a2, bool a3) const
    { return GiveSaddleFromString(*a0, a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HandleDieIfLeftWaterSpawnDepth()
    // endereco: casamento de bytes com a build de referencia
    void HandleDieIfLeftWaterSpawnDepth() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.HandleDieIfLeftWaterSpawnDepth()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.HandleMountedDinoAction(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void HandleMountedDinoAction(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.HandleMountedDinoAction(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HandleUnstasised(bool)
    // endereco: casamento de bytes com a build de referencia
    void HandleUnstasised(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.HandleUnstasised(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HasBuffPreventingClearRiderOnDinoImmobilized()
    // endereco: cache_pdb_25090264
    bool HasBuffPreventingClearRiderOnDinoImmobilized() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasBuffPreventingClearRiderOnDinoImmobilized()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HasBuffPreventingFlight()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=116]]
    bool HasBuffPreventingFlight() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasBuffPreventingFlight()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.HasCartEquipped()
    // endereco: casamento de bytes com a build de referencia
    bool HasCartEquipped() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasCartEquipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.HasNonZeroColorSetIndex()
    // endereco: cache_pdb_25090264
    bool HasNonZeroColorSetIndex() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasNonZeroColorSetIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HasOfflineRider()
    // endereco: casamento de bytes com a build de referencia
    bool HasOfflineRider() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasOfflineRider()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HasReachedDestination(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool HasReachedDestination(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.HasReachedDestination(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.HasSelfBuried()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool HasSelfBuried() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasSelfBuried()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.HasTarget()
    // endereco: cache_pdb_25090264
    bool HasTarget() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.HasTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IKFootTrace(int a0, void* a1, void* a2, void* a3, void* a4, float a5) const
    {
        return NativeCall<void*, int, void*, void*, void*, void*, float>(this, "APrimalDinoCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.IgnoreNPCZoneCountVolume(ANPCZoneVolume*)
    // endereco: cache_pdb_25090264
    BrzPonteiro IgnoreNPCZoneCountVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.IgnoreNPCZoneCountVolume(ANPCZoneVolume*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ImprintBabyDino(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ImprintBabyDino(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.ImprintBabyDino(APlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ImprintOnPlayerTarget(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ImprintOnPlayerTarget(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.ImprintOnPlayerTarget(AShooterPlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IncrementImprintingQuality()
    // endereco: casamento de bytes com a build de referencia
    void IncrementImprintingQuality() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.IncrementImprintingQuality()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IncrementNumTamedDinos()
    // endereco: casamento de bytes com a build de referencia
    void IncrementNumTamedDinos() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.IncrementNumTamedDinos()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.InitDownloadedTamedDino(AShooterPlayerController*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void InitDownloadedTamedDino(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalDinoCharacter.InitDownloadedTamedDino(AShooterPlayerController*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InitMaxStamina()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void InitMaxStamina() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.InitMaxStamina()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InitializeForReplicatedBasing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=183]]
    bool InitializeForReplicatedBasing() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.InitializeForReplicatedBasing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InitializeInvisiableSaddle()
    // endereco: casamento de bytes com a build de referencia
    void InitializeInvisiableSaddle() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.InitializeInvisiableSaddle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InterceptMountedOnPlayerEmoteAnim(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool InterceptMountedOnPlayerEmoteAnim(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.InterceptMountedOnPlayerEmoteAnim(UAnimMontage*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InterceptRiderEmoteAnim(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool InterceptRiderEmoteAnim(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.InterceptRiderEmoteAnim(UAnimMontage*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InternalRemoveDinoFromTamingArray()
    // endereco: cache_pdb_25090264
    void InternalRemoveDinoFromTamingArray() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.InternalRemoveDinoFromTamingArray()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.InterruptLanding()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=30]]
    void InterruptLanding() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.InterruptLanding()");
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.InterruptLatching(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void InterruptLatching(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.InterruptLatching(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsAWildFollowerKnownServerside()
    // endereco: cache_pdb_25090264
    bool IsAWildFollowerKnownServerside() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsAWildFollowerKnownServerside()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsActorInMeleeSwingHurtList(AActor*)
    // endereco: cache_pdb_25090264
    bool IsActorInMeleeSwingHurtList(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsActorInMeleeSwingHurtList(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsActorTickAllowed()
    // endereco: cache_pdb_25090264
    int IsActorTickAllowed() const
    {
        return NativeCall<int>(this, "APrimalDinoCharacter.IsActorTickAllowed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsAllowedToMate()
    // endereco: cache_pdb_25090264
    bool IsAllowedToMate() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsAllowedToMate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsAllowedToTransfer(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool IsAllowedToTransfer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsAllowedToTransfer(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsAttacking()
    // endereco: casamento de bytes com a build de referencia
    bool IsAttacking() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsAttacking()");
    }

    // ── NAO EXISTE COMO FUNCAO NO BINARIO ──────────────────────
    //   `inline` na Unreal: o compilador a dissolve em quem chama.
    //   Ate' 09/09/2026 devolvia o ZERO do tipo; agora le' o campo
    //   `bIsBaby`, pela reflexao viva.
    //   `bIsBaby` e' um BIT (byte 10685, bit 5). Le-se pela forma de bit,
    //   nao por ponteiro: `bIsBaby()()` — a dupla chamada e' a que todo
    //   plugin de ARK ja' escreve.
    bool IsBaby() const
    { return const_cast<APrimalDinoCharacter*>(this)->bIsBaby()(); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsBasedOnActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IsBasedOnActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsBasedOnActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsBossDino()
    // endereco: cache_pdb_25090264
    bool IsBossDino() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsBossDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsCorruptedDino()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsCorruptedDino() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsCorruptedDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsCurrentAttackStopsMovement()
    // endereco: cache_pdb_25090264
    bool IsCurrentAttackStopsMovement() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsCurrentAttackStopsMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsCurrentlyPlayingAttackAnimation()
    // endereco: cache_pdb_25090264
    bool IsCurrentlyPlayingAttackAnimation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsCurrentlyPlayingAttackAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsDamageOccludedByStructures(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IsDamageOccludedByStructures(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsDamageOccludedByStructures(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsDefaultTamingDisabled()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=293+chamadores=3+grafo=10/10]]
    bool IsDefaultTamingDisabled() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsDefaultTamingDisabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.IsFemale()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsFemale() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.IsFemale()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsFleeing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    bool IsFleeing() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsFleeing()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsImprintPlayer(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsImprintPlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsImprintPlayer(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsInFlyerPreventionVolume()
    // endereco: casamento de bytes com a build de referencia
    bool IsInFlyerPreventionVolume() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsInFlyerPreventionVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsInSingletonMission()
    // classe: a funcao mora em APrimalCharacter, e APrimalDinoCharacter herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    bool IsInSingletonMission() const
    {
        return NativeCall<bool>(this, "APrimalCharacter.IsInSingletonMission()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsInTekShield()
    // endereco: casamento de bytes com a build de referencia
    bool IsInTekShield() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsInTekShield()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsLandingOnDino(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsLandingOnDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsLandingOnDino(UE::Math::TVector<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsMatingEnabled()
    // endereco: cache_pdb_25090264
    bool IsMatingEnabled() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsMatingEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsMissionDino()
    // endereco: cache_pdb_25090264
    bool IsMissionDino() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsMissionDino()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsNearFeed(AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    bool IsNearFeed(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsNearFeed(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsPassengerSeatAvailable(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=139]]
    bool IsPassengerSeatAvailable(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.IsPassengerSeatAvailable(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsPrimalCharFriendly(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsPrimalCharFriendly(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsPrimalCharFriendly(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsPublicTeleporter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsPublicTeleporter() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsPublicTeleporter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsReadyToUpload(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool IsReadyToUpload(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsReadyToUpload(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsRemoteDino()
    // endereco: cache_pdb_25090264
    bool IsRemoteDino() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsRemoteDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.IsRiddenByImprinter()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsRiddenByImprinter() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.IsRiddenByImprinter()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsSwimmingWithAttachedBox()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsSwimmingWithAttachedBox() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsSwimmingWithAttachedBox()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsTaming()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsTaming() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsTaming()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsTamingDisabled()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=337+chamadores=3+grafo=13/13]]
    bool IsTamingDisabled() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsTamingDisabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsValidForStatusUpdate()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidForStatusUpdate() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsValidForStatusUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.IsValidMatingClassCheck(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidMatingClassCheck(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.IsValidMatingClassCheck(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsValidUnStasisCaster()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidUnStasisCaster() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsValidUnStasisCaster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsVehicle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=27]]
    bool IsVehicle() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsVehicle()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsWakingTame()
    // endereco: cache_pdb_25090264
    bool IsWakingTame() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsWakingTame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.IsWildFollowerOtherwiseValidAndLiving()
    // endereco: casamento de bytes com a build de referencia
    bool IsWildFollowerOtherwiseValidAndLiving() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.IsWildFollowerOtherwiseValidAndLiving()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.IsWildFollowingParentValid(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsWildFollowingParentValid(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.IsWildFollowingParentValid(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.IsWildWandering()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsWildWandering() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.IsWildWandering()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.KeepFlight(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro KeepFlight(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalDinoCharacter.KeepFlight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.KeepFlightTimer()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=327+grafo=5/5]]
    void KeepFlightTimer() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.KeepFlightTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.LinkedSupplyCrateDestroyed(APrimalStructureItemContainer_SupplyCrate*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=297+grafo=4/4]]
    void LinkedSupplyCrateDestroyed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.LinkedSupplyCrateDestroyed(APrimalStructureItemContainer_SupplyCrate*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_DecrementTimeSinceStasis()
    // endereco: casamento de bytes com a build de referencia
    void MaxTamedDinos_SoftTameLimit_DecrementTimeSinceStasis() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_DecrementTimeSinceStasis()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_DestroyAfterCountdown()
    // endereco: casamento de bytes com a build de referencia
    void MaxTamedDinos_SoftTameLimit_DestroyAfterCountdown() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_DestroyAfterCountdown()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_FreshlySetCreatureMarkedForSoftTameLimitDestruc
    // endereco: casamento de bytes com a build de referencia
    bool MaxTamedDinos_SoftTameLimit_FreshlySetCreatureMarkedForSoftTameLimitDestruction(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_FreshlySetCreatureMarkedForSoftTameLimitDestruction(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_FreshlyUnsetCreatureMarkedForSoftTameLimitDestr
    // endereco: casamento de bytes com a build de referencia
    bool MaxTamedDinos_SoftTameLimit_FreshlyUnsetCreatureMarkedForSoftTameLimitDestruction_IfApplicable(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_FreshlyUnsetCreatureMarkedForSoftTameLimitDestruction_IfApplicable(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureAbleToBeMarkedForDestruction()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool MaxTamedDinos_SoftTameLimit_IsCreatureAbleToBeMarkedForDestruction() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureAbleToBeMarkedForDestruction()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureDestructionCountdownActive()
    // endereco: cache_pdb_25090264
    bool MaxTamedDinos_SoftTameLimit_IsCreatureDestructionCountdownActive() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureDestructionCountdownActive()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureMarkedForDestruction()
    // endereco: cache_pdb_25090264
    bool MaxTamedDinos_SoftTameLimit_IsCreatureMarkedForDestruction() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureMarkedForDestruction()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_SetMaxTamedDinos_SoftTameLimit_MarkedForDeletio
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void MaxTamedDinos_SoftTameLimit_SetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_To_CachedValue(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_SetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_To_CachedValue(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeCountedTowardsSoftTameLimit()
    // endereco: casamento de bytes com a build de referencia
    bool MaxTamedDinos_SoftTameLimit_ShouldCreatureBeCountedTowardsSoftTameLimit() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeCountedTowardsSoftTameLimit()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyMarkedForDestruction(bool)
    // endereco: casamento de bytes com a build de referencia
    bool MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyMarkedForDestruction(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyMarkedForDestruction(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyUnMarkedFromDestruction(bo
    // endereco: casamento de bytes com a build de referencia
    bool MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyUnMarkedFromDestruction(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyUnMarkedFromDestruction(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_UpdateCreatureStatusRegardingSoftTameLimitDestr
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void MaxTamedDinos_SoftTameLimit_UpdateCreatureStatusRegardingSoftTameLimitDestruction(bool a0, float a1, bool a2) const
    {
        NativeCall<void, bool, float, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_UpdateCreatureStatusRegardingSoftTameLimitDestruction(bool,float,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ModifyAimOffsetRandomLookAtTarget(UE::Math::TRotator<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=179]]
    BrzPonteiro ModifyAimOffsetRandomLookAtTarget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.ModifyAimOffsetRandomLookAtTarget(UE::Math::TRotator<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ModifyAimOffsetRandomLookAtTarget_Implementation(UE::Math::TRotator<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifyAimOffsetRandomLookAtTarget_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.ModifyAimOffsetRandomLookAtTarget_Implementation(UE::Math::TRotator<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ModifyAirControl(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifyAirControl(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalDinoCharacter.ModifyAirControl(float)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.ModifyArmorDurabilityLostFromDamage(float,float,TEnumAsByte<EPrimalEquipmen
    // endereco: casamento de bytes com a build de referencia
    float ModifyArmorDurabilityLostFromDamage(float a0, float a1, unsigned char a2, void* a3) const
    {
        return NativeCall<float, float, float, unsigned char, void*>(this, "APrimalDinoCharacter.ModifyArmorDurabilityLostFromDamage(float,float,TEnumAsByte<EPrimalEquipmentType::Type>,UPrimalItem*)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.ModifyDesiredRotation(UE::Math::TRotator<double>&,float,bool&)
    // endereco: casamento de bytes com a build de referencia
    void ModifyDesiredRotation(void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, void*>(this, "APrimalDinoCharacter.ModifyDesiredRotation(UE::Math::TRotator<double>&,float,bool&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void ModifyFirstPersonCameraLocation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalDinoCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ModifyInputAcceleration(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=278+grafo=3/3]]
    bool ModifyInputAcceleration(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.ModifyInputAcceleration(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.MoveForward(float)
    // endereco: casamento de bytes com a build de referencia
    void MoveForward(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.MoveForward(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.MoveRight(float)
    // endereco: casamento de bytes com a build de referencia
    void MoveRight(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.MoveRight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.MultiSetAttachedStructurePickupAllowedBeforeNetworkTime(double,APrimalStruc
    // endereco: casamento de bytes com a build de referencia
    void MultiSetAttachedStructurePickupAllowedBeforeNetworkTime(double a0, void* a1) const
    {
        NativeCall<void, double, void*>(this, "APrimalDinoCharacter.MultiSetAttachedStructurePickupAllowedBeforeNetworkTime(double,APrimalStructure*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.MultiSetAttachedStructurePickupAllowedBeforeNetworkTime_Implementation(doub
    // endereco: cache_pdb_25090264
    void MultiSetAttachedStructurePickupAllowedBeforeNetworkTime_Implementation(double a0, void* a1) const
    {
        NativeCall<void, double, void*>(this, "APrimalDinoCharacter.MultiSetAttachedStructurePickupAllowedBeforeNetworkTime_Implementation(double,APrimalStructure*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.Multi_OnCryo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void Multi_OnCryo(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.Multi_OnCryo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Multi_OnCryo_Implementation(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Multi_OnCryo_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.Multi_OnCryo_Implementation(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.MulticastUpdateAllColorSets_Implementation(int,int,int,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    void MulticastUpdateAllColorSets_Implementation(int a0, int a1, int a2, int a3, int a4, int a5) const
    {
        NativeCall<void, int, int, int, int, int, int>(this, "APrimalDinoCharacter.MulticastUpdateAllColorSets_Implementation(int,int,int,int,int,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NetUpdateDinoNameStrings(FString&,FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=293+bytes40+chamadores=7]]
    void NetUpdateDinoNameStrings(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.NetUpdateDinoNameStrings(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateDinoNameStrings(FString* a0, FString* a1) const
    { NetUpdateDinoNameStrings(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NetUpdateDinoNameStrings_Implementation(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void NetUpdateDinoNameStrings_Implementation(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.NetUpdateDinoNameStrings_Implementation(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateDinoNameStrings_Implementation(FString* a0, FString* a1) const
    { NetUpdateDinoNameStrings_Implementation(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NetUpdateDinoOwnerData(FString&,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=184+bytes40+chamadores=5]]
    void NetUpdateDinoOwnerData(const FString& a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalDinoCharacter.NetUpdateDinoOwnerData(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateDinoOwnerData(FString* a0, int a1) const
    { NetUpdateDinoOwnerData(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NetUpdateDinoOwnerData_Implementation(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    void NetUpdateDinoOwnerData_Implementation(const FString& a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalDinoCharacter.NetUpdateDinoOwnerData_Implementation(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateDinoOwnerData_Implementation(FString* a0, int a1) const
    { NetUpdateDinoOwnerData_Implementation(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NotifyBumpedPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyBumpedPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.NotifyBumpedPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NotifyBumpedStructure(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=154]]
    void NotifyBumpedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.NotifyBumpedStructure(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NotifyClientsEmbryoTerminated()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void NotifyClientsEmbryoTerminated() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.NotifyClientsEmbryoTerminated()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.NotifyClientsEmbryoTerminated_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void NotifyClientsEmbryoTerminated_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.NotifyClientsEmbryoTerminated_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NotifyItemAdded(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyItemAdded(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.NotifyItemAdded(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.NotifyItemRemoved(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=140]]
    void NotifyItemRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.NotifyItemRemoved(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OffBrake()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=18]]
    void OffBrake() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OffBrake()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnBrake()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=137]]
    void OnBrake() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnBrake()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnControllerInitiatedAttack(int)
    // endereco: casamento de bytes com a build de referencia
    void OnControllerInitiatedAttack(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.OnControllerInitiatedAttack(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnCryo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void OnCryo(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.OnCryo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: casamento de bytes com a build de referencia
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnDinoStartled(UAnimMontage*,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnDinoStartled(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.OnDinoStartled(UAnimMontage*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnElevateDino(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=146]]
    void OnElevateDino(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.OnElevateDino(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnLowerDino(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=163]]
    void OnLowerDino(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.OnLowerDino(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.OnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnNearbyCharacterDied(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "APrimalDinoCharacter.OnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnPressReload()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=106+grafo=4/4]]
    void OnPressReload() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnPressReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnPrimalCharacterSleeped()
    // endereco: casamento de bytes com a build de referencia
    void OnPrimalCharacterSleeped() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnPrimalCharacterSleeped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnPrimalCharacterUnsleeped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void OnPrimalCharacterUnsleeped() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnPrimalCharacterUnsleeped()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.OnRandomIdleFidgetAnimPlayed(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnRandomIdleFidgetAnimPlayed(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.OnRandomIdleFidgetAnimPlayed(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnReleaseCrouchProneToggle()
    // endereco: casamento de bytes com a build de referencia
    void OnReleaseCrouchProneToggle() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnReleaseCrouchProneToggle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnReleaseReload()
    // endereco: casamento de bytes com a build de referencia
    void OnReleaseReload() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnReleaseReload()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.OnRep_CarriedCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=41]]
    void OnRep_CarriedCharacter() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_CarriedCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnRep_PassengerPerSeat()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void OnRep_PassengerPerSeat() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_PassengerPerSeat()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.OnRep_Rider()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_Rider() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_Rider()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.OnRep_Saddle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=247]]
    void OnRep_Saddle() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_Saddle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnRep_bBonesHidden()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    void OnRep_bBonesHidden() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_bBonesHidden()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.OnRep_bIsCharging()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_bIsCharging() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_bIsCharging()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.OnRep_bIsFlying()
    // endereco: cache_pdb_25090264
    void OnRep_bIsFlying() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnRep_bIsFlying()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.OnSpawnedForItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=128]]
    void OnSpawnedForItem(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.OnSpawnedForItem(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnStartFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void OnStartFire() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnStartFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnStartJump()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=271]]
    void OnStartJump() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnStartJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnStartTargeting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void OnStartTargeting() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnStartTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnStopFire()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=77+grafo=3/3]]
    void OnStopFire() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnStopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OnStopJump()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=37]]
    void OnStopJump() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnStopJump()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.OnSuccessfulImprinting()
    // endereco: casamento de bytes com a build de referencia
    void OnSuccessfulImprinting() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.OnSuccessfulImprinting()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.OnUpdateMountedDinoMeshHiding(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnUpdateMountedDinoMeshHiding(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.OnUpdateMountedDinoMeshHiding(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OverrideFinalWanderLocation(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool OverrideFinalWanderLocation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.OverrideFinalWanderLocation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OverrideFinalWanderLocation_Implementation(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool OverrideFinalWanderLocation_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.OverrideFinalWanderLocation_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OverrideForcePreventExitingWater()
    // endereco: cache_pdb_25090264
    bool OverrideForcePreventExitingWater() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.OverrideForcePreventExitingWater()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.OverrideIdleFidgetAnimation(UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideIdleFidgetAnimation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.OverrideIdleFidgetAnimation(UAnimMontage*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OverrideRandomWanderLocation(UE::Math::TVector<double>&,UE::Math::TVector<d
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OverrideRandomWanderLocation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.OverrideRandomWanderLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.OverrideRandomWanderLocation_Implementation(UE::Math::TVector<double>&,UE::
    // endereco: casamento de bytes com a build de referencia
    void OverrideRandomWanderLocation_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.OverrideRandomWanderLocation_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.PassengerDinosUsePassengerAnim()
    // endereco: casamento de bytes com a build de referencia
    bool PassengerDinosUsePassengerAnim() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.PassengerDinosUsePassengerAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PlayAttackAnimationOfAnimationArray(int,TArray<UAnimMontage*,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    void PlayAttackAnimationOfAnimationArray(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalDinoCharacter.PlayAttackAnimationOfAnimationArray(int,TArray<UAnimMontage*,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PlayChargingAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlayChargingAnim() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PlayChargingAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalDinoCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PlayHardEndChargingShake()
    // endereco: cache_pdb_25090264
    void PlayHardEndChargingShake() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PlayHardEndChargingShake()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PlayHardEndChargingShake_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=64]]
    void PlayHardEndChargingShake_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PlayHardEndChargingShake_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.PlayRandomIdleFidgetAnimation(float&,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayRandomIdleFidgetAnimation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.PlayRandomIdleFidgetAnimation(float&,int&)", a0, a1);
    }

    // jogo_confirmou_dump
    //   APrimalDinoCharacter.PlayWeightedAttackAnimation()
    // endereco: casamento de bytes com a build de referencia
    void PlayWeightedAttackAnimation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PlayWeightedAttackAnimation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.PlayedAnimationHasAttack()
    // endereco: cache_pdb_25090264
    bool PlayedAnimationHasAttack() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.PlayedAnimationHasAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Poop(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=211+grafo=3/3]]
    bool Poop(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.Poop(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PostNetReceiveLocationAndRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostNetReceiveLocationAndRotation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PostNetReceiveLocationAndRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PrepareForSaving()
    // endereco: casamento de bytes com a build de referencia
    void PrepareForSaving() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.PrepareForSaving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=103]]
    bool PreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalDinoCharacter.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.PreventShowingDinoTooltip()
    // endereco: cache_pdb_25090264
    bool PreventShowingDinoTooltip() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.PreventShowingDinoTooltip()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.PreventSpawnDeathEssence()
    // endereco: casamento de bytes com a build de referencia
    bool PreventSpawnDeathEssence() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.PreventSpawnDeathEssence()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.PreventSpawnDeathEssenceBase()
    // endereco: cache_pdb_25090264
    bool PreventSpawnDeathEssenceBase() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.PreventSpawnDeathEssenceBase()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalDinoCharacter.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessEditText(void* a0, FString* a1, bool a2) const
    { ProcessEditText(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ProcessOrderAttackTarget(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessOrderAttackTarget(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.ProcessOrderAttackTarget(AActor*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ProcessOrderFollowTarget(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessOrderFollowTarget(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.ProcessOrderFollowTarget(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ProcessOrderMoveTo(UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessOrderMoveTo(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.ProcessOrderMoveTo(UE::Math::TVector<double>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ProcessRootRotAndLoc(float,UE::Math::TVector<double>&,UE::Math::TRotator<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessRootRotAndLoc(float a0, void* a1, void* a2, void* a3, float a4, float a5, void* a6, void* a7) const
    {
        return NativeCall<void*, float, void*, void*, void*, float, float, void*, void*>(this, "APrimalDinoCharacter.ProcessRootRotAndLoc(float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float&,float,float,UE::Math::TRotator<double>&,float&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ReassertColorization()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ReassertColorization() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ReassertColorization()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.RecentlyHadRider(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RecentlyHadRider(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalDinoCharacter.RecentlyHadRider(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ReduceTameEffectiveness(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=177]]
    void ReduceTameEffectiveness(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.ReduceTameEffectiveness(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.RefreshAttachments()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void RefreshAttachments() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RefreshAttachments()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.RefreshBabyScaling()
    // endereco: casamento de bytes com a build de referencia
    void RefreshBabyScaling() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RefreshBabyScaling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RefreshColorization(bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshColorization(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.RefreshColorization(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.RefreshColorizationForMesh(TArray<FLinearColor,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshColorizationForMesh(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.RefreshColorizationForMesh(TArray<FLinearColor,TSizedDefaultAllocator<32>>&,UMeshComponent*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.RefreshNextTimePlayIdleFidgetAnimation()
    // endereco: casamento de bytes com a build de referencia
    void RefreshNextTimePlayIdleFidgetAnimation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RefreshNextTimePlayIdleFidgetAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.RefreshSecondaryDinoMountedSocketAttachment(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshSecondaryDinoMountedSocketAttachment(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalDinoCharacter.RefreshSecondaryDinoMountedSocketAttachment(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.RefreshThrottledBabyCollision(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void RefreshThrottledBabyCollision(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.RefreshThrottledBabyCollision(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RegisterAllComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=106]]
    void RegisterAllComponents() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RegisterAllComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.RegisterWithManagers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWithManagers() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.RegisterWithManagers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.RegisterWithSignificanceManager()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWithSignificanceManager() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.RegisterWithSignificanceManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RemoteInventoryAllowViewing(APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool RemoteInventoryAllowViewing(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.RemoteInventoryAllowViewing(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RemoveDinoReferenceFromLatchingStructure()
    // endereco: cache_pdb_25090264
    void RemoveDinoReferenceFromLatchingStructure() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RemoveDinoReferenceFromLatchingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RemoveDinoToActiveTamingArray()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=619+chamadores=3+grafo=10/10]]
    void RemoveDinoToActiveTamingArray() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RemoveDinoToActiveTamingArray()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RemovePassenger(APrimalCharacter*,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=40]]
    void RemovePassenger(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalDinoCharacter.RemovePassenger(APrimalCharacter*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.RemoveSaddleAttachment(FItemNetID)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveSaddleAttachment(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalDinoCharacter.RemoveSaddleAttachment(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RemoveStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.RemoveStructure(APrimalStructure*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.RemovedFromPatrolGroup()
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=174]]
    void RemovedFromPatrolGroup() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RemovedFromPatrolGroup()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RepairCheckTimer()
    // endereco: cache_pdb_25090264
    void RepairCheckTimer() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RepairCheckTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ReplicateDurabilityForEquippedItem(FItemNetID)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ReplicateDurabilityForEquippedItem(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalDinoCharacter.ReplicateDurabilityForEquippedItem(FItemNetID)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RequestAttackData()
    // endereco: cache_pdb_25090264
    void RequestAttackData() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.RequestAttackData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RequestDisplayEmbryoData(APlayerController*,bool)
    // endereco: cache_pdb_25090264
    void RequestDisplayEmbryoData(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.RequestDisplayEmbryoData(APlayerController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RequestTerminateEmbryo(APlayerController*)
    // endereco: cache_pdb_25090264
    void RequestTerminateEmbryo(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.RequestTerminateEmbryo(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ResetAttackCooldowns()
    // endereco: cache_pdb_25090264
    BrzPonteiro ResetAttackCooldowns() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.ResetAttackCooldowns()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ResetBrainComponent()
    // endereco: cache_pdb_25090264
    void ResetBrainComponent() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ResetBrainComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ResetCurrentAttackIndex()
    // endereco: cache_pdb_25090264
    void ResetCurrentAttackIndex() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ResetCurrentAttackIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ResetTakingOff()
    // endereco: cache_pdb_25090264
    void ResetTakingOff() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ResetTakingOff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.RidingTick(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void RidingTick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.RidingTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerCallAttackTarget_Implementation(AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=855+grafo=9/9]]
    void ServerCallAttackTarget_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.ServerCallAttackTarget_Implementation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=379+grafo=3/3]]
    void ServerCallFollowOne_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.ServerCallFollow_Implementation()
    // endereco: cache_pdb_25090264
    void ServerCallFollow_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerCallFollow_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void ServerCallMoveTo_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.ServerCallStay_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    void ServerCallStay_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerCallStay_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerClearRider(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerClearRider(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.ServerClearRider(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerClearRider_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerClearRider_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.ServerClearRider_Implementation(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ServerFinishedLanding()
    // endereco: cache_pdb_25090264
    void ServerFinishedLanding() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerFinishedLanding()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerFinishedLanding_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=22]]
    void ServerFinishedLanding_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerFinishedLanding_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerGiveDefaultWeapon_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    void ServerGiveDefaultWeapon_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerGiveDefaultWeapon_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerRequestAttack(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void ServerRequestAttack(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.ServerRequestAttack(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerRequestAttack_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestAttack_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoCharacter.ServerRequestAttack_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerRequestBraking_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestBraking_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.ServerRequestBraking_Implementation(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ServerRequestToggleFlight()
    // endereco: cache_pdb_25090264
    void ServerRequestToggleFlight() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestToggleFlight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerRequestToggleFlight_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=220]]
    void ServerRequestToggleFlight_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestToggleFlight_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestUseItemWithActor(void* a0, void* a1, int a2, bool a3) const
    {
        NativeCall<void, void*, void*, int, bool>(this, "APrimalDinoCharacter.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerRequestWaterSurfaceJump_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestWaterSurfaceJump_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestWaterSurfaceJump_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch(float,float)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetRiderMountedWeaponRotationYawPitch(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "APrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch_Implementation(float,float)
    // endereco: cache_pdb_25090264
    BrzPonteiro ServerSetRiderMountedWeaponRotationYawPitch_Implementation(float a0, float a1) const
    {
        return NativeCall<void*, float, float>(this, "APrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch_Implementation(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerSleepingTick()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=132]]
    void ServerSleepingTick() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerSleepingTick()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerTamedTick()
    // endereco: casamento de bytes com a build de referencia
    void ServerTamedTick() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerTamedTick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ServerToClientsPlayAttackAnimation(signedchar,signedchar,float,FName,bool,b
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerToClientsPlayAttackAnimation(signed char a0, signed char a1, float a2, unsigned long long a3, bool a4, bool a5, void* a6) const
    {
        return NativeCall<void*, signed char, signed char, float, unsigned long long, bool, bool, void*>(this, "APrimalDinoCharacter.ServerToClientsPlayAttackAnimation(signedchar,signedchar,float,FName,bool,bool,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerToClientsPlayAttackAnimation_Implementation(signedchar,signedchar,flo
    // endereco: casamento de bytes com a build de referencia
    void ServerToClientsPlayAttackAnimation_Implementation(char a0, char a1, float a2, unsigned long long a3, bool a4, bool a5, void* a6) const
    {
        NativeCall<void, char, char, float, unsigned long long, bool, bool, void*>(this, "APrimalDinoCharacter.ServerToClientsPlayAttackAnimation_Implementation(signedchar,signedchar,float,FName,bool,bool,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ServerToggleCharging()
    // endereco: casamento de bytes com a build de referencia
    void ServerToggleCharging() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerToggleCharging()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerToggleCharging_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    void ServerToggleCharging_Implementation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerToggleCharging_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ServerUpdateAttackTargets(AActor*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateAttackTargets(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoCharacter.ServerUpdateAttackTargets(AActor*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerUpdateAttackTargets_Implementation(AActor*,UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    void ServerUpdateAttackTargets_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.ServerUpdateAttackTargets_Implementation(AActor*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerUpdateBabyAge(float)
    // endereco: casamento de bytes com a build de referencia
    void ServerUpdateBabyAge(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.ServerUpdateBabyAge(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerUpdateGestation()
    // endereco: casamento de bytes com a build de referencia
    void ServerUpdateGestation() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ServerUpdateGestation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ServerUploadCharacter(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ServerUploadCharacter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.ServerUploadCharacter(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetAllowedPaintingColorRegion(int,bool)
    // endereco: cache_pdb_25090264
    void SetAllowedPaintingColorRegion(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "APrimalDinoCharacter.SetAllowedPaintingColorRegion(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.SetAnimWeightsForAttackAtIndex(int,TArray<float,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAnimWeightsForAttackAtIndex(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalDinoCharacter.SetAnimWeightsForAttackAtIndex(int,TArray<float,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.SetAttachmentVisibility(bool,EPrimalEquipmentType::Type)
    // endereco: thunk
    BrzPonteiro SetAttachmentVisibility(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "APrimalDinoCharacter.SetAttachmentVisibility(bool,EPrimalEquipmentType::Type)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetAttackTargetTraceDistanceValue(float)
    // endereco: cache_pdb_25090264
    void SetAttackTargetTraceDistanceValue(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.SetAttackTargetTraceDistanceValue(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetBabyAge(float)
    // endereco: casamento de bytes com a build de referencia
    void SetBabyAge(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.SetBabyAge(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetCarryingDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetCarryingDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetCarryingDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetCharacterStatusTameable(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCharacterStatusTameable(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "APrimalDinoCharacter.SetCharacterStatusTameable(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.SetColorizationData(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetColorizationData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.SetColorizationData(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetCurrentAttackIndex(unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetCurrentAttackIndex(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "APrimalDinoCharacter.SetCurrentAttackIndex(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.SetDeath(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=44]]
    BrzPonteiro SetDeath(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "APrimalDinoCharacter.SetDeath(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetEquippedItemDurabilityPercent(FItemNetID,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetEquippedItemDurabilityPercent(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "APrimalDinoCharacter.SetEquippedItemDurabilityPercent(FItemNetID,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetFCustomTrackedDinoInfoMembersByDinoRef(bool,bool,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void SetFCustomTrackedDinoInfoMembersByDinoRef(void* retorno, bool a0, bool a1, bool a2, int a3) const
    {
        NativeCall<void, void*, bool, bool, bool, int>(this, "APrimalDinoCharacter.SetFCustomTrackedDinoInfoMembersByDinoRef(bool,bool,bool,int)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetFlight(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetFlight(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "APrimalDinoCharacter.SetFlight(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetForceDisableClientGravitySim(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void SetForceDisableClientGravitySim(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.SetForceDisableClientGravitySim(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.SetForcedAggro(ITargetableInterface*,float,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetForcedAggro(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "APrimalDinoCharacter.SetForcedAggro(ITargetableInterface*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetGestationData(FUnreplicatedEggData&)
    // endereco: casamento de bytes com a build de referencia
    void SetGestationData(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetGestationData(FUnreplicatedEggData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetHardLimitWildDinoToVolume(ANPCZoneVolume*)
    // endereco: cache_pdb_25090264
    void SetHardLimitWildDinoToVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetHardLimitWildDinoToVolume(ANPCZoneVolume*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetImprintPlayer(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetImprintPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetImprintPlayer(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetLastAttackTimeForAttack(int,double)
    // endereco: cache_pdb_25090264
    void SetLastAttackTimeForAttack(int a0, double a1) const
    {
        NativeCall<void, int, double>(this, "APrimalDinoCharacter.SetLastAttackTimeForAttack(int,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetLastMovementDesiredRotation(UE::Math::TRotator<double>&)
    // endereco: cache_pdb_25090264
    void SetLastMovementDesiredRotation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetLastMovementDesiredRotation(UE::Math::TRotator<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetLeftDynamicActorBaseTime(double)
    // endereco: cache_pdb_25090264
    void SetLeftDynamicActorBaseTime(double a0) const
    {
        NativeCall<void, double>(this, "APrimalDinoCharacter.SetLeftDynamicActorBaseTime(double)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetLimitWildDinoToVolume(AVolume*)
    // endereco: cache_pdb_25090264
    void SetLimitWildDinoToVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetLimitWildDinoToVolume(AVolume*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetMountCharacter(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetMountCharacter(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalDinoCharacter.SetMountCharacter(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.SetMovementAccelerationVector(UE::Math::TVector<double>)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetMovementAccelerationVector(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.SetMovementAccelerationVector(UE::Math::TVector<double>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetNextAllowedMatingTime(double)
    // endereco: cache_pdb_25090264
    void SetNextAllowedMatingTime(double a0) const
    {
        NativeCall<void, double>(this, "APrimalDinoCharacter.SetNextAllowedMatingTime(double)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetPreventSaving(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void SetPreventSaving(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.SetPreventSaving(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetRandomLookAtTarget(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void SetRandomLookAtTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetRandomLookAtTarget(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetRider(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetRider(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefiniti
    // endereco: casamento de bytes com a build de referencia
    void SetRidingDinoAsPassenger(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefinition&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetSleeping(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSleeping(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "APrimalDinoCharacter.SetSleeping(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetState(UPrimalAIState*)
    // endereco: casamento de bytes com a build de referencia
    void SetState(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetState(UPrimalAIState*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetTamedFollowTarget(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void SetTamedFollowTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetTamedFollowTarget(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetTurretMode(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool SetTurretMode(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.SetTurretMode(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetTurretModeMovementRestrictions(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetTurretModeMovementRestrictions(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.SetTurretModeMovementRestrictions(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetTurretMode_Implementation(bool)
    // endereco: cache_pdb_25090264
    bool SetTurretMode_Implementation(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalDinoCharacter.SetTurretMode_Implementation(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.SetWildLimitTargetVolume(AVolume*)
    // endereco: cache_pdb_25090264
    void SetWildLimitTargetVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetWildLimitTargetVolume(AVolume*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupAsWildBabyOfSingleParent(APrimalDinoCharacter*,float,float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=17/17]]
    bool SetupAsWildBabyOfSingleParent(void* a0, float a1, float a2) const
    {
        return NativeCall<bool, void*, float, float>(this, "APrimalDinoCharacter.SetupAsWildBabyOfSingleParent(APrimalDinoCharacter*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupAsWildFollowerOfOtherDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=4/4]]
    bool SetupAsWildFollowerOfOtherDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.SetupAsWildFollowerOfOtherDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupColorization()
    // endereco: cache_pdb_25090264
    void SetupColorization() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.SetupColorization()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupPlayerInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupTamed(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetupTamed(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.SetupTamed(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupWildBaby_ApplyStats(FItemNetInfo&)
    // endereco: casamento de bytes com a build de referencia
    void SetupWildBaby_ApplyStats(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.SetupWildBaby_ApplyStats(FItemNetInfo&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupWildBaby_SetAncestryFromOneParent(APrimalDinoCharacter*,FItemNetInfo&)
    // endereco: casamento de bytes com a build de referencia
    void SetupWildBaby_SetAncestryFromOneParent(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.SetupWildBaby_SetAncestryFromOneParent(APrimalDinoCharacter*,FItemNetInfo&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupWildBaby_SetFakeInheritedColorsFromOneParent(APrimalDinoCharacter*,FIt
    // endereco: casamento de bytes com a build de referencia
    void SetupWildBaby_SetFakeInheritedColorsFromOneParent(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.SetupWildBaby_SetFakeInheritedColorsFromOneParent(APrimalDinoCharacter*,FItemNetInfo&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SetupWildBaby_SetFakeInheritedStatsAndMutationsFromOneParent(APrimalDinoCha
    // endereco: casamento de bytes com a build de referencia
    void SetupWildBaby_SetFakeInheritedStatsAndMutationsFromOneParent(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalDinoCharacter.SetupWildBaby_SetFakeInheritedStatsAndMutationsFromOneParent(APrimalDinoCharacter*,FItemNetInfo&,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldActivateNavigationInvokerComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ShouldActivateNavigationInvokerComponent() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.ShouldActivateNavigationInvokerComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ShouldAttackOfPlayedAnimationStopMovement()
    // endereco: cache_pdb_25090264
    bool ShouldAttackOfPlayedAnimationStopMovement() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldAttackOfPlayedAnimationStopMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldDealDamage(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDealDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.ShouldDealDamage(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldDinoThatSupportsStructuresPreventBasing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldDinoThatSupportsStructuresPreventBasing() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.ShouldDinoThatSupportsStructuresPreventBasing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldDisableControllerDesiredRotation()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDisableControllerDesiredRotation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldDisableControllerDesiredRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldEncumberBasedOnDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldEncumberBasedOnDino(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.ShouldEncumberBasedOnDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldForceAllowReload_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldForceAllowReload_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.ShouldForceAllowReload_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldForceDedicatedMovementTickEveryFrame()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115]]
    bool ShouldForceDedicatedMovementTickEveryFrame() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldForceDedicatedMovementTickEveryFrame()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ShouldForceFlee()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    bool ShouldForceFlee() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldForceFlee()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldIgnoreHitResult(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalDinoCharacter.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldIgnoreMoveCombiningOverlap()
    // endereco: cache_pdb_25090264
    bool ShouldIgnoreMoveCombiningOverlap() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldIgnoreMoveCombiningOverlap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldPreventCharacterBasing(APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldPreventCharacterBasing(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoCharacter.ShouldPreventCharacterBasing(APawn*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ShouldPreventHibernation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool ShouldPreventHibernation() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldPreventHibernation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldRestrictCarriedPlayerYaw()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldRestrictCarriedPlayerYaw() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldRestrictCarriedPlayerYaw()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldShowDinoTooltip(AShooterHUD&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldShowDinoTooltip(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.ShouldShowDinoTooltip(AShooterHUD&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldSkipForceUpdateWhenAimedCharacter()
    // classe: a funcao mora em UPrimalActor, e APrimalDinoCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldSkipForceUpdateWhenAimedCharacter() const
    {
        return NativeCall<void*>(this, "UPrimalActor.ShouldSkipForceUpdateWhenAimedCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldStillAllowRequestedMoveAcceleration()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=136]]
    bool ShouldStillAllowRequestedMoveAcceleration() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldStillAllowRequestedMoveAcceleration()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ShouldUseAnimationUpdateRateOptimizations()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ShouldUseAnimationUpdateRateOptimizations() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.ShouldUseAnimationUpdateRateOptimizations()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldUseArmorDurabilityVFX()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseArmorDurabilityVFX() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldUseArmorDurabilityVFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldUseDurabilityVar(int)
    // endereco: cache_pdb_25090264
    bool ShouldUseDurabilityVar(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalDinoCharacter.ShouldUseDurabilityVar(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ShouldUseDurabilityVarForItemType(TEnumAsByte<EPrimalEquipmentType::Type>)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseDurabilityVarForItemType(unsigned char a0) const
    {
        return NativeCall<bool, unsigned char>(this, "APrimalDinoCharacter.ShouldUseDurabilityVarForItemType(TEnumAsByte<EPrimalEquipmentType::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.ShowInsufficientStaminaMessage()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=445+grafo=5/5]]
    void ShowInsufficientStaminaMessage() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ShowInsufficientStaminaMessage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnDefaultController()
    // endereco: casamento de bytes com a build de referencia
    void SpawnDefaultController() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.SpawnDefaultController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SpawnDino(void* a0, void* a1, void* a2, void* a3, float a4, int a5, bool a6, bool a7, int a8, bool a9, float a10, int a11, bool a12, bool a13, bool a14)
    {
        return NativeCall<void*, void*, void**, void*, void*, float, int, bool, bool, int, bool, float, int, bool, bool, bool>(nullptr, "APrimalDinoCharacter.SpawnDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,int,bool,bool,int,bool,float,int,bool,bool,bool)", a0, &a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnEgg(bool)
    // endereco: casamento de bytes com a build de referencia
    void SpawnEgg(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.SpawnEgg(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnFromDinoData(FARKDinoData&,UWorld*,UE::Math::TVector<double>&,UE::Math
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SpawnFromDinoData(void* a0, void* a1, void* a2, void* a3, int a4, bool a5, void* a6)
    {
        return NativeCall<void*, void*, void*, void*, void*, int, bool, void*>(nullptr, "APrimalDinoCharacter.SpawnFromDinoData(FARKDinoData&,UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int,bool,AShooterPlayerController*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnFromDinoDataEx(FARKDinoData&,UWorld*,UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SpawnFromDinoDataEx(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, bool a6, void* a7, bool a8, bool a9)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, int, bool, void*, bool, bool>(nullptr, "APrimalDinoCharacter.SpawnFromDinoDataEx(FARKDinoData&,UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool&,int,bool,AShooterPlayerController*,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnNewAIController(TSubclassOf<AController>,UBehaviorTree*)
    // endereco: casamento de bytes com a build de referencia
    void SpawnNewAIController(void* a0, void* a1) const
    {
        NativeCall<void, void**, void*>(this, "APrimalDinoCharacter.SpawnNewAIController(TSubclassOf<AController>,UBehaviorTree*)", &a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalDinoCharacter.SpawnedPlayerFor(AShooterPlayerController*,APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SpawnedPlayerFor(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.SpawnedPlayerFor(AShooterPlayerController*,APawn*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SpawnedPlayerFor_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.SpecialActorWantsPerFrameTicking()
    // endereco: casamento de bytes com a build de referencia
    bool SpecialActorWantsPerFrameTicking() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.SpecialActorWantsPerFrameTicking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StartCharging(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartCharging(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.StartCharging(bool)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.StartForceSkelUpdate(float,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartForceSkelUpdate(float a0, bool a1, bool a2, bool a3) const
    {
        NativeCall<void, float, bool, bool, bool>(this, "APrimalDinoCharacter.StartForceSkelUpdate(float,bool,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StartLanding(UE::Math::TVector<double>)
    // endereco: cache_pdb_25090264
    void StartLanding(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.StartLanding(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StartRepair()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void StartRepair() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.StartRepair()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.StartSurfaceCameraForPassenger(AShooterCharacter*,float,float,float,bool)
    // endereco: cache_pdb_25090264
    void StartSurfaceCameraForPassenger(void* a0, float a1, float a2, float a3, bool a4) const
    {
        NativeCall<void, void*, float, float, float, bool>(this, "APrimalDinoCharacter.StartSurfaceCameraForPassenger(AShooterCharacter*,float,float,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StartSurfaceCameraForPassengers(float,float,float)
    // endereco: cache_pdb_25090264
    void StartSurfaceCameraForPassengers(float a0, float a1, float a2) const
    {
        NativeCall<void, float, float, float>(this, "APrimalDinoCharacter.StartSurfaceCameraForPassengers(float,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Stasis()
    // classe: a funcao mora em APrimalCharacter, e APrimalDinoCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalCharacter.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StasisingCharacter()
    // endereco: cache_pdb_25090264
    void StasisingCharacter() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.StasisingCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StaticCreateBabyDino_v2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro StaticCreateBabyDino_v2(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, int a10, void* a11, void* a12, int a13, int a14, int a15, bool a16, void* a17)
    {
        return NativeCall<void*, void*, void**, void*, float, void*, void*, void*, float, void*, void*, int, void*, void*, int, int, int, bool, void*>(nullptr, "APrimalDinoCharacter.StaticCreateBabyDino_v2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,unsignedchar*,unsignedchar*,unsignedchar*,float,APrimalDinoCharacter*&,APrimalDinoCharacter*&,int,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,int,int,int,bool,TArray<FName,TSizedDefaultAllocator<32>>)", a0, &a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.StaticCreateBabyDino_v3(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticCreateBabyDino_v3(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, float a7, void* a8, void* a9, int a10, void* a11, void* a12, int a13, int a14, int a15, bool a16, void* a17, bool a18) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*, void*, void*, float, void*, void*, int, void*, void*, int, int, int, bool, void*, bool>(this, "APrimalDinoCharacter.StaticCreateBabyDino_v3(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,unsignedchar*,unsignedchar*,unsignedchar*,float,APrimalDinoCharacter*&,APrimalDinoCharacter*&,int,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,int,int,int,bool,TArray<FName,TSizedDefaultAllocator<32>>,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StaticRegisterNativesAPrimalDinoCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAPrimalDinoCharacter()
    {
        NativeCall<void>(nullptr, "APrimalDinoCharacter.StaticRegisterNativesAPrimalDinoCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.StopActiveState(bool)
    // endereco: casamento de bytes com a build de referencia
    void StopActiveState(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.StopActiveState(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APrimalDinoCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TameDino(AShooterPlayerController*,bool,int,bool,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=316/316]]
    void TameDino(void* a0, bool a1, int a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, bool, int, bool, bool, bool>(this, "APrimalDinoCharacter.TameDino(AShooterPlayerController*,bool,int,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TamedDinoUnstasisConsumeFood(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=78]]
    void TamedDinoUnstasisConsumeFood(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.TamedDinoUnstasisConsumeFood(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.TamedDinoUnstasisHealthRecovery(double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TamedDinoUnstasisHealthRecovery(double a0) const
    {
        return NativeCall<void*, double>(this, "APrimalDinoCharacter.TamedDinoUnstasisHealthRecovery(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool TamedProcessOrder(void* a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<bool, void*, int, bool, void*>(this, "APrimalDinoCharacter.TamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TargetingTeamChanged()
    // endereco: casamento de bytes com a build de referencia
    void TargetingTeamChanged() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.TargetingTeamChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.ToggleDinoCopySettingsVisualRange()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleDinoCopySettingsVisualRange() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.ToggleDinoCopySettingsVisualRange()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.TryFindNewRandomLookAtTarget()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* TryFindNewRandomLookAtTarget() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoCharacter.TryFindNewRandomLookAtTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.TryFindNewRandomLookAtTarget_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryFindNewRandomLookAtTarget_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.TryFindNewRandomLookAtTarget_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalDinoCharacter.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.TurnInput(float)
    // endereco: casamento de bytes com a build de referencia
    void TurnInput(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.TurnInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UnPossessed()
    // endereco: casamento de bytes com a build de referencia
    void UnPossessed() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UnPossessed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UnclaimDino(bool)
    // endereco: casamento de bytes com a build de referencia
    void UnclaimDino(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.UnclaimDino(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.UnpauseAnimSharing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnpauseAnimSharing() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.UnpauseAnimSharing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.UnregisterWithManagers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterWithManagers() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.UnregisterWithManagers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.UnregisterWithSignificanceManager()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterWithSignificanceManager() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.UnregisterWithSignificanceManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.Unstasis()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=11/11]]
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UntameDino(float)
    // endereco: casamento de bytes com a build de referencia
    void UntameDino(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.UntameDino(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateAnimationPreUpdateMatinee()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=176+grafo=3/3]]
    void UpdateAnimationPreUpdateMatinee() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateAnimationPreUpdateMatinee()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateAttackTargets()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=479+grafo=9/9]]
    void UpdateAttackTargets() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateAttackTargets()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateBabyCuddling(double,unsignedchar,TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    void UpdateBabyCuddling(double a0, unsigned char a1, void* a2) const
    {
        NativeCall<void, double, unsigned char, void**>(this, "APrimalDinoCharacter.UpdateBabyCuddling(double,unsignedchar,TSubclassOf<UPrimalItem>)", a0, a1, &a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateBabyCuddling_Implementation(double,unsignedchar,TSubclassOf<UPrimalIt
    // endereco: casamento de bytes com a build de referencia
    void UpdateBabyCuddling_Implementation(double a0, unsigned char a1, void* a2) const
    {
        NativeCall<void, double, unsigned char, void**>(this, "APrimalDinoCharacter.UpdateBabyCuddling_Implementation(double,unsignedchar,TSubclassOf<UPrimalItem>)", a0, a1, &a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.UpdateCached_GeneTraitWeightReductions()
    // endereco: casamento de bytes com a build de referencia
    void UpdateCached_GeneTraitWeightReductions() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateCached_GeneTraitWeightReductions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateCarriedLocationAndRotation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=95]]
    void UpdateCarriedLocationAndRotation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateCarriedLocationAndRotation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateGang()
    // endereco: casamento de bytes com a build de referencia
    void UpdateGang() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateGang()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.UpdateHasBuffPreventingUploading()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    bool UpdateHasBuffPreventingUploading() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.UpdateHasBuffPreventingUploading()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateIK()
    // endereco: casamento de bytes com a build de referencia
    void UpdateIK() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateIK()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateImprintingDetails(FString&,FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=293+bytes40+chamadores=6]]
    void UpdateImprintingDetails(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.UpdateImprintingDetails(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UpdateImprintingDetails(FString* a0, FString* a1) const
    { UpdateImprintingDetails(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateImprintingDetailsForController(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void UpdateImprintingDetailsForController(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.UpdateImprintingDetailsForController(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateImprintingDetails_Implementation(FString&,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void UpdateImprintingDetails_Implementation(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.UpdateImprintingDetails_Implementation(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UpdateImprintingDetails_Implementation(FString* a0, FString* a1) const
    { UpdateImprintingDetails_Implementation(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateImprintingQuality(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=54+chamadores=3]]
    void UpdateImprintingQuality(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateImprintingQuality(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateImprintingQuality_Implementation(float)
    // endereco: cache_pdb_25090264
    void UpdateImprintingQuality_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateImprintingQuality_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateMateBoost(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateMateBoost(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoCharacter.UpdateMateBoost(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateMating()
    // endereco: casamento de bytes com a build de referencia
    void UpdateMating() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateMating()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateNetDynamicMusic()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    void UpdateNetDynamicMusic() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateNetDynamicMusic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateNextAllowedMatingTime(double)
    // endereco: casamento de bytes com a build de referencia
    void UpdateNextAllowedMatingTime(double a0) const
    {
        NativeCall<void, double>(this, "APrimalDinoCharacter.UpdateNextAllowedMatingTime(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateStasisFlags()
    // endereco: cache_pdb_25090264
    void UpdateStasisFlags() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateStasisFlags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateStatusComponent(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateStatusComponent(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateStatusComponent(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateTribeGroupRanks(unsignedchar,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void UpdateTribeGroupRanks(unsigned char a0, unsigned char a1) const
    {
        NativeCall<void, unsigned char, unsigned char>(this, "APrimalDinoCharacter.UpdateTribeGroupRanks(unsignedchar,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateTribeGroupRanks_Implementation(unsignedchar,unsignedchar)
    // endereco: cache_pdb_25090264
    void UpdateTribeGroupRanks_Implementation(unsigned char a0, unsigned char a1) const
    {
        NativeCall<void, unsigned char, unsigned char>(this, "APrimalDinoCharacter.UpdateTribeGroupRanks_Implementation(unsignedchar,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateUnstasisFlags()
    // endereco: cache_pdb_25090264
    void UpdateUnstasisFlags() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateUnstasisFlags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateWakingTame(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateWakingTame(float a0) const
    {
        NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateWakingTame(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateWildFollowChildState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateWildFollowChildState() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.UpdateWildFollowChildState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UpdateWildFollowParentState(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateWildFollowParentState(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoCharacter.UpdateWildFollowParentState(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UseLowQualityAnimationTick()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=255]]
    bool UseLowQualityAnimationTick() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.UseLowQualityAnimationTick()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.UseLowQualityBehaviorTreeTick()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=485]]
    bool UseLowQualityBehaviorTreeTick() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.UseLowQualityBehaviorTreeTick()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UseLowQualityMovementTick()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=92]]
    bool UseLowQualityMovementTick() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.UseLowQualityMovementTick()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.UseNetworkRangeScaling()
    // endereco: casamento de bytes com a build de referencia
    bool UseNetworkRangeScaling() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.UseNetworkRangeScaling()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.WakingTameConsumeFoodItem(AShooterPlayerController*,UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    int WakingTameConsumeFoodItem(void* a0, void* a1, bool a2) const
    {
        return NativeCall<int, void*, void*, bool>(this, "APrimalDinoCharacter.WakingTameConsumeFoodItem(AShooterPlayerController*,UPrimalItem*,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.WakingTameGetNumItemsToConsume(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    int WakingTameGetNumItemsToConsume(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalDinoCharacter.WakingTameGetNumItemsToConsume(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.WalkingAllowCheckFall(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=241+grafo=3/3]]
    bool WalkingAllowCheckFall(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.WalkingAllowCheckFall(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.WalkingAllowCheckFloor(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=202]]
    bool WalkingAllowCheckFloor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoCharacter.WalkingAllowCheckFloor(UE::Math::TVector<double>&)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoCharacter.WantsPerFrameSkeletalAnimationTicking()
    // endereco: casamento de bytes com a build de referencia
    bool WantsPerFrameSkeletalAnimationTicking() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.WantsPerFrameSkeletalAnimationTicking()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoCharacter.WantsToEnableNavRelevancy()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool WantsToEnableNavRelevancy() const
    {
        return NativeCall<bool>(this, "APrimalDinoCharacter.WantsToEnableNavRelevancy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoCharacter.WantsToEnableNavRelevancy_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WantsToEnableNavRelevancy_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoCharacter.WantsToEnableNavRelevancy_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void WasPushed(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalDinoCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ZoomIn()
    // endereco: casamento de bytes com a build de referencia
    void ZoomIn() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ZoomIn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoCharacter.ZoomOut()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=790+grafo=6/7]]
    void ZoomOut() const
    {
        NativeCall<void>(this, "APrimalDinoCharacter.ZoomOut()");
    }

    float& AIAggroNotifyNeighborsClassesRangeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AIAggroNotifyNeighborsClassesRangeScale"); }
    float& AICombatRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AICombatRotationRateModifier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +36, medido na build 25090264
    //  (offset absoluto medido: 0x2A48; confianca media)
    void*& AIFollowStoppingDistanceBabyField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 36); }
    float& AIRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AIRangeMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +40, medido na build 25090264
    //  (offset absoluto medido: 0x2A4C; confianca media)
    void*& AI_Access_Fails_CountField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 40); }
    int& AbsoluteBaseLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.AbsoluteBaseLevel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +36, medido na build 25090264
    //  (offset absoluto medido: 0x28D8; confianca media)
    float& AccumulatedStatusUpdateTimeField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastAllyLookTarget` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2360; confianca alta)
    TWeakObjectPtr<void>& ActiveStateField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "LastAllyLookTarget", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastAllyLookTarget` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2368; confianca alta)
    TWeakObjectPtr<void>& ActiveWonderStateField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "LastAllyLookTarget", 24); }
    float& AdditionalTamingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AdditionalTamingSpeedMultiplier"); }
    FieldArray<unsigned char> AllowPaintingColorRegionsField() const
    { return { (void*)this, "APrimalDinoCharacter.AllowPaintingColorRegions" }; }
    float& AllowRidingMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AllowRidingMaxDistance"); }
    TArray<void*>& AttackAnimationWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.AttackAnimationWeights"); }
    TArray<UAnimMontage*>& AttackAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalDinoCharacter.AttackAnimations"); }
    unsigned char& AttackIndexOfPlayedAnimationField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.AttackIndexOfPlayedAnimation"); }
    TArray<void*>& AttackInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.AttackInfos"); }
    AShooterPlayerController*& AttackMyTargetForPlayerControllerField() const
    { return *GetNativePointerField<AShooterPlayerController**>(this, "APrimalDinoCharacter.AttackMyTargetForPlayerController"); }
    float& AttackOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AttackOffset"); }
    float& AttackOnLaunchMaximumTargetDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AttackOnLaunchMaximumTargetDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CarriedCharacter` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2300; confianca alta)
    TWeakObjectPtr<void>& AutoDragByPawnField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "CarriedCharacter", 16); }
    float& BabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyAge"); }
    float& BabyAgeSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyAgeSpeed"); }
    BrzCampoPonteiro BabyCuddleFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.BabyCuddleFood")); }
    float& BabyCuddleGracePeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyCuddleGracePeriod"); }
    float& BabyCuddleLoseImpringQualityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyCuddleLoseImpringQualityPerSecond"); }
    unsigned char& BabyCuddleTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.BabyCuddleType"); }
    BrzCampoPonteiro BabyCuddleWalkStartingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.BabyCuddleWalkStartingLocation")); }
    UAnimMontage*& BabyCuddledAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.BabyCuddledAnimation"); }
    float& BabyGestationProgressField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyGestationProgress"); }
    double& BabyNextCuddleTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.BabyNextCuddleTime"); }
    float& BabyPitchMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyPitchMultiplier"); }
    float& BabyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyScale"); }
    float& BabySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabySpeedMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2A44; confianca alta)
    void*& BabySpeedMultiplierWildField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 32); }
    float& BabyVolumeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyVolumeMultiplier"); }
    BrzCampoPonteiro BaseDinoScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.BaseDinoScale")); }
    float& BreakFleeHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BreakFleeHealthPercentage"); }
    BrzCampoPonteiro BuffGivenToBasedCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.BuffGivenToBasedCharacters")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +76, medido na build 25090264
    //  (offset absoluto medido: 0x2900; confianca media)
    void*& CachedMeshScaledInitialBoundsSizeField() const
    { return BrzCampoAncorado<void*>(this, "ExtraDamageMultiplier", 76); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2A54; confianca media)
    void*& CachedPlayerViewportDistanceField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +44, medido na build 25090264
    //  (offset absoluto medido: 0x2A50; confianca media)
    void*& CachedSignificanceField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 44); }
    float& CarriedAsBabyPassengerSizeLimitOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CarriedAsBabyPassengerSizeLimitOverride"); }
    TWeakObjectPtr<void>& CarriedCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.CarriedCharacter"); }
    float& ChanceToLookAtNearbyDyingCharacterField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ChanceToLookAtNearbyDyingCharacter"); }
    float& ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInsteadField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInstead"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +104, medido na build 25090264
    //  (offset absoluto medido: 0x25C8; confianca media)
    double& ChargingStartBlockedTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 104); }
    float& CloneBaseElementCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CloneBaseElementCost"); }
    float& CloneElementCostPerLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CloneElementCostPerLevel"); }
    TWeakObjectPtr<void>& ColorOverrideBuffField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.ColorOverrideBuff"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WildFollowingParentRef` +8, medido na build 25090264
    //  (offset absoluto medido: 0x24A0; confianca alta)
    double& ColorOverrideBuffDeactivateTimeField() const
    { return BrzCampoAncorado<double>(this, "WildFollowingParentRef", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +64, medido na build 25090264
    //  (offset absoluto medido: 0x28F4; confianca media)
    float& ColorOverrideBuffInterpSpeedField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 64); }
    FieldArray<unsigned char> ColorSetIndicesField() const
    { return { (void*)this, "APrimalDinoCharacter.ColorSetIndices" }; }
    FieldArray<FName> ColorSetNamesField() const
    { return { (void*)this, "APrimalDinoCharacter.ColorSetNames" }; }
    UStaticMeshComponent*& CopyDinoSettingsRangeMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalDinoCharacter.CopyDinoSettingsRangeMesh"); }
    float& CorpseLifespanNonRelevantField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CorpseLifespanNonRelevant"); }
    unsigned char& CurrentAttackIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.CurrentAttackIndex"); }
    BrzCampoPonteiro CurrentIdleFidgetMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.CurrentIdleFidgetMontage")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +52, medido na build 25090264
    //  (offset absoluto medido: 0x28E8; confianca media)
    void*& CurrentImprintingQualitySpeedField() const
    { return BrzCampoAncorado<void*>(this, "ExtraDamageMultiplier", 52); }
    float& CurrentMovementAnimRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentMovementAnimRate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StepDamageFootDamageSockets` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1C40; confianca alta)
    TArray<ANPCZoneVolume*>& CurrentNPCVolumesField() const
    { return BrzCampoAncorado<TArray<ANPCZoneVolume*>>(this, "StepDamageFootDamageSockets", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SaddleStruct` +32, medido na build 25090264
    //  (offset absoluto medido: 0x19B0; confianca media)
    void*& CurrentPassengerSeatDefinitionField() const
    { return BrzCampoAncorado<void*>(this, "SaddleStruct", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FollowStoppingDistance` +1, medido na build 25090264
    //  (offset absoluto medido: 0x29C7; confianca alta)
    void*& CurrentPassengerSeatIndexField() const
    { return BrzCampoAncorado<void*>(this, "FollowStoppingDistance", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastAllyLookTarget` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2370; confianca alta)
    void*& CurrentRandomLookAtTargetField() const
    { return BrzCampoAncorado<void*>(this, "LastAllyLookTarget", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +80, medido na build 25090264
    //  (offset absoluto medido: 0x2904; confianca media)
    float& CurrentRootLocSwimOffsetField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 80); }
    int& CurrentSpecificHarvestResourceIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.CurrentSpecificHarvestResourceIndex"); }
    float& CurrentStrafeMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentStrafeMagnitude"); }
    float& CurrentTameAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentTameAffinity"); }
    int& CustomReplicatedDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.CustomReplicatedData"); }
    BrzCampoPonteiro DeathEssenceClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.DeathEssenceClass")); }
    TArray<void*>& DeathGiveItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.DeathGiveItemClasses"); }
    float& DeathGiveItemRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.DeathGiveItemRange"); }
    float& DeathInventoryChanceToUseField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.DeathInventoryChanceToUse"); }
    BrzCampoPonteiro DeathInventoryTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.DeathInventoryTemplates")); }
    FString& DescriptiveNameGenderOverrideFemaleField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.DescriptiveNameGenderOverrideFemale"); }
    FString& DescriptiveNameGenderOverrideMaleField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.DescriptiveNameGenderOverrideMale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRiderMountedWeaponRotation` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2000; confianca media)
    void*& DinoAimRotationOffsetField() const
    { return BrzCampoAncorado<void*>(this, "LastRiderMountedWeaponRotation", 48); }
    TArray<void*>& DinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.DinoAncestors"); }
    TArray<void*>& DinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.DinoAncestorsMale"); }
    TArray<void*>& DinoBaseLevelWeightEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.DinoBaseLevelWeightEntries"); }
    double& DinoDownloadedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.DinoDownloadedAtTime"); }
    TArray<void*>& DinoExtraDefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.DinoExtraDefaultInventoryItems"); }
    unsigned int& DinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalDinoCharacter.DinoID1"); }
    unsigned int& DinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalDinoCharacter.DinoID2"); }
    UAnimMontage*& DinoLevelUpAnimationOverrideField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.DinoLevelUpAnimationOverride"); }
    FName& DinoNameTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.DinoNameTag"); }
    BrzCampoPonteiro DinoSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.DinoSettingsClass")); }
    UAnimMontage*& DinoWithDinoPassengerAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.DinoWithDinoPassengerAnim"); }
    UAnimMontage*& DinoWithPassengerAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.DinoWithPassengerAnim"); }
    ANPCZoneManager*& DirectLinkNPCZoneManagerField() const
    { return *GetNativePointerField<ANPCZoneManager**>(this, "APrimalDinoCharacter.DirectLinkNPCZoneManager"); }
    float& EggChanceToSpawnUnstasisField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.EggChanceToSpawnUnstasis"); }
    TArray<void*>& EggItemsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.EggItemsToSpawn"); }
    TArray<void*>& EggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.EggWeightsToSpawn"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +24, medido na build 25090264
    //  (offset absoluto medido: 0x28CC; confianca alta)
    void*& EmptyFoodModifierField() const
    { return BrzCampoAncorado<void*>(this, "ExtraDamageMultiplier", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +40, medido na build 25090264
    //  (offset absoluto medido: 0x2588; confianca media)
    double& EndAttackTargetTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 40); }
    UAnimMontage*& EndChargingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.EndChargingAnimation"); }
    UAnimMontage*& EnterFlightAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.EnterFlightAnim"); }
    UAnimMontage*& ExitFlightAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.ExitFlightAnim"); }
    float& ExtraBabyAgeSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraBabyAgeSpeedMultiplier"); }
    float& ExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraDamageMultiplier"); }
    float& ExtraRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraRunningSpeedModifier"); }
    float& ExtraTamedSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraTamedSpeedMultiplier"); }
    float& ExtraUnTamedSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraUnTamedSpeedMultiplier"); }
    UAnimMontage*& FallAsleepAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.FallAsleepAnim"); }
    TArray<void*>& FertilizedEggItemsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.FertilizedEggItemsToSpawn"); }
    TArray<void*>& FertilizedEggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.FertilizedEggWeightsToSpawn"); }
    float& FleeHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FleeHealthPercentage"); }
    BrzCampoPonteiro FloatingHUDTextWorldOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.FloatingHUDTextWorldOffset")); }
    float& FlyerForceLimitPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyerForceLimitPitchMax"); }
    float& FlyerForceLimitPitchMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyerForceLimitPitchMin"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +32, medido na build 25090264
    //  (offset absoluto medido: 0x29A0; confianca alta)
    int& FlyerNumUnderGroundFailField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 32); }
    BrzCampoPonteiro FlyerTakeOffAdditionalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.FlyerTakeOffAdditionalVelocity")); }
    float& FlyingForceRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyingForceRotationRateModifier"); }
    float& FlyingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyingRunSpeedModifier"); }
    unsigned char& FollowStoppingDistanceField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.FollowStoppingDistance"); }
    float& FollowingRunDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FollowingRunDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +28, medido na build 25090264
    //  (offset absoluto medido: 0x2A40; confianca alta)
    void*& FollowingRunDistanceBabyLongField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2A3C; confianca alta)
    void*& FollowingRunDistanceBabyShortField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +20, medido na build 25090264
    //  (offset absoluto medido: 0x28C8; confianca alta)
    float& ForceNextAttackIndexField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +16, medido na build 25090264
    //  (offset absoluto medido: 0x28C4; confianca alta)
    float& ForceUpdateIKTimerField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 16); }
    TWeakObjectPtr<void>& ForcedMasterTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.ForcedMasterTarget"); }
    float& ForcedWildBabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ForcedWildBabyAge"); }
    int& GangCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.GangCount"); }
    float& GangOverlapRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.GangOverlapRange"); }
    TArray<void*>& GeneTraitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.GeneTraits"); }
    FieldArray<unsigned char> GestationEggColorSetIndicesField() const
    { return { (void*)this, "APrimalDinoCharacter.GestationEggColorSetIndices" }; }
    FieldArray<unsigned char> GestationEggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "APrimalDinoCharacter.GestationEggNumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned char> GestationEggNumberOfMutationsAppliedField() const
    { return { (void*)this, "APrimalDinoCharacter.GestationEggNumberOfMutationsApplied" }; }
    int& GestationEggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.GestationEggRandomMutationsFemale"); }
    int& GestationEggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.GestationEggRandomMutationsMale"); }
    float& GestationEggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.GestationEggTamedIneffectivenessModifier"); }
    unsigned char& GestationGenderOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.GestationGenderOverride"); }
    BrzCampoPonteiro HUDOverlayToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.HUDOverlayToolTipWidget")); }
    float& HUDScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HUDScaleMultiplier"); }
    float& HUDTextScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HUDTextScaleMultiplier"); }
    TWeakObjectPtr<void>& HardLimitWildDinoToVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.HardLimitWildDinoToVolume"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2988; confianca alta)
    void*& HarvestableHitCountField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayedAttackAnimation", 8); }
    float& HealthBarMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HealthBarMaxDrawDistance"); }
    float& HealthBarOffsetYField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HealthBarOffsetY"); }
    TArray<void*>& HibernatedZoneVolumesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.HibernatedZoneVolumes"); }
    TArray<void*>& HideBoneNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.HideBoneNames"); }
    BrzCampoPonteiro IdleFidgetAnimInfosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.IdleFidgetAnimInfos")); }
    float& IdleFidgetPlayFrequencyMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.IdleFidgetPlayFrequencyMax"); }
    float& IdleFidgetPlayFrequencyMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.IdleFidgetPlayFrequencyMin"); }
    FString& ImprinterNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.ImprinterName"); }
    FString& ImprinterPlayerUniqueNetIdField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.ImprinterPlayerUniqueNetId"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2984; confianca alta)
    void*& IndexOfLastPlayedIdleFidgetAnimationField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayedAttackAnimation", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +144, medido na build 25090264
    //  (offset absoluto medido: 0x1F40; confianca baixa)
    void*& InterpolatedVelocityField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 144); }
    float& KeepFlightRemainingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.KeepFlightRemainingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1EC8; confianca media)
    void*& LandingLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 24); }
    TWeakObjectPtr<void>& LastAllyLookTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.LastAllyLookTarget"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +168, medido na build 25090264
    //  (offset absoluto medido: 0x2608; confianca baixa)
    double& LastAllyTargetLookTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 168); }
    unsigned char& LastAttackIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.LastAttackIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +80, medido na build 25090264
    //  (offset absoluto medido: 0x25B0; confianca media)
    double& LastAttackedTargetTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +176, medido na build 25090264
    //  (offset absoluto medido: 0x2610; confianca baixa)
    double& LastAttackedTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +264, medido na build 25090264
    //  (offset absoluto medido: 0x2668; confianca baixa)
    double& LastAutoHealingItemUseField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 264); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2570; confianca media)
    double& LastAxisStartPressTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +8, medido na build 25090264
    //  (offset absoluto medido: 0x28BC; confianca alta)
    float& LastBabyAgeField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 8); }
    double& LastBabyFlyerFlyTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastBabyFlyerFlyTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +12, medido na build 25090264
    //  (offset absoluto medido: 0x28C0; confianca alta)
    float& LastBabyGestationProgressField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 12); }
    double& LastBoostDinoImpulseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastBoostDinoImpulseTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +112, medido na build 25090264
    //  (offset absoluto medido: 0x25D0; confianca media)
    double& LastChargeEndTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +48, medido na build 25090264
    //  (offset absoluto medido: 0x1EE0; confianca media)
    void*& LastChargeLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +72, medido na build 25090264
    //  (offset absoluto medido: 0x1EF8; confianca media)
    void*& LastCheckedLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +320, medido na build 25090264
    //  (offset absoluto medido: 0x26A0; confianca baixa)
    void*& LastClearMountCharacterBlockedTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 320); }
    double& LastClientCameraRotationServerUpdateField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastClientCameraRotationServerUpdate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +56, medido na build 25090264
    //  (offset absoluto medido: 0x2598; confianca media)
    double& LastColorizationTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +336, medido na build 25090264
    //  (offset absoluto medido: 0x26B0; confianca baixa)
    void*& LastDealtMeleeDamageTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 336); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +192, medido na build 25090264
    //  (offset absoluto medido: 0x2620; confianca baixa)
    double& LastDinoAllyLookInterpTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +224, medido na build 25090264
    //  (offset absoluto medido: 0x2640; confianca baixa)
    double& LastEatAnimationTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 224); }
    double& LastEggBoostedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastEggBoostedTime"); }
    double& LastEggSpawnChanceTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastEggSpawnChanceTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +152, medido na build 25090264
    //  (offset absoluto medido: 0x25F8; confianca baixa)
    double& LastFootStepDamageTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 152); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +88, medido na build 25090264
    //  (offset absoluto medido: 0x25B8; confianca media)
    double& LastForcedLandingCheckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 88); }
    int& LastFrameMoveLeftField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastFrameMoveLeft"); }
    int& LastFrameMoveRightField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastFrameMoveRight"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2990; confianca alta)
    int& LastFrameUseLowQualityAnimationTickField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +192, medido na build 25090264
    //  (offset absoluto medido: 0x1F70; confianca baixa)
    void*& LastGangCheckPositionField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +216, medido na build 25090264
    //  (offset absoluto medido: 0x2638; confianca baixa)
    double& LastGangCheckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 216); }
    double& LastGrappledTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastGrappledTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +96, medido na build 25090264
    //  (offset absoluto medido: 0x25C0; confianca media)
    void*& LastHasRiderPoopAnimTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 96); }
    double& LastHigherScaleExtraRunningSpeedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastHigherScaleExtraRunningSpeedTime"); }
    float& LastHigherScaleExtraRunningSpeedValueField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LastHigherScaleExtraRunningSpeedValue"); }
    double& LastInAllyRangeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastInAllyRangeSerialized"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastInAllyRangeTime"); }
    double& LastMatingNotificationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastMatingNotificationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +328, medido na build 25090264
    //  (offset absoluto medido: 0x26A8; confianca baixa)
    void*& LastMountedRefreshAttachmentTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 328); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2578; confianca media)
    double& LastMoveForwardTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 24); }
    BrzCampoPonteiro LastMovementDesiredRotation_MountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.LastMovementDesiredRotation_MountedWeaponry")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +120, medido na build 25090264
    //  (offset absoluto medido: 0x1F28; confianca media)
    void*& LastOverrodeRandomWanderLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 120); }
    int& LastPlayedAttackAnimationField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastPlayedAttackAnimation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +184, medido na build 25090264
    //  (offset absoluto medido: 0x2618; confianca baixa)
    double& LastPlayerDinoOverlapRelevantTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +72, medido na build 25090264
    //  (offset absoluto medido: 0x25A8; confianca media)
    double& LastRadialStepDamageTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +40, medido na build 25090264
    //  (offset absoluto medido: 0x29A8; confianca media)
    int& LastRiderExitFrameCounterField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 40); }
    BrzCampoPonteiro LastRiderMountedWeaponRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.LastRiderMountedWeaponRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +256, medido na build 25090264
    //  (offset absoluto medido: 0x2660; confianca baixa)
    double& LastRiderMountedWeaponRotationSentTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 256); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +96, medido na build 25090264
    //  (offset absoluto medido: 0x1F10; confianca media)
    void*& LastRiderOverlappedPositionField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +288, medido na build 25090264
    //  (offset absoluto medido: 0x2680; confianca baixa)
    double& LastServerTamedTickField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 288); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +208, medido na build 25090264
    //  (offset absoluto medido: 0x2630; confianca baixa)
    double& LastSetRiderTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 208); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoBaseLevelWeightEntries` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1D90; confianca alta)
    TArray<void*>& LastSocketPositionsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "DinoBaseLevelWeightEntries", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2580; confianca media)
    double& LastStartChargingTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +272, medido na build 25090264
    //  (offset absoluto medido: 0x2670; confianca baixa)
    double& LastStartedCarryingCharacterTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 272); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +160, medido na build 25090264
    //  (offset absoluto medido: 0x2600; confianca baixa)
    double& LastStartledTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 160); }
    double& LastTameConsumedFoodTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastTameConsumedFoodTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +248, medido na build 25090264
    //  (offset absoluto medido: 0x2658; confianca baixa)
    double& LastTamedDinoCharacterStatusTickTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 248); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +120, medido na build 25090264
    //  (offset absoluto medido: 0x25D8; confianca media)
    double& LastTamedFlyerNearbyAllyCheckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 120); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +48, medido na build 25090264
    //  (offset absoluto medido: 0x29B0; confianca media)
    int& LastTempDampenMovementInputAccelerationFrameField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +44, medido na build 25090264
    //  (offset absoluto medido: 0x29AC; confianca media)
    int& LastTickDelayFrameCountField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 44); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +136, medido na build 25090264
    //  (offset absoluto medido: 0x25E8; confianca baixa)
    double& LastTimeFallingField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +352, medido na build 25090264
    //  (offset absoluto medido: 0x26C0; confianca baixa)
    void*& LastTimePlayedIdleFidgetAnimationField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 352); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2590; confianca media)
    double& LastTimeWhileHeadingToGoalField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 48); }
    double& LastUpdatedBabyAgeAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastUpdatedBabyAgeAtTime"); }
    double& LastUpdatedGestationAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastUpdatedGestationAtTime"); }
    double& LastUpdatedMatingAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastUpdatedMatingAtTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +296, medido na build 25090264
    //  (offset absoluto medido: 0x2688; confianca baixa)
    double& LastVacuumSpaceCheckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 296); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +144, medido na build 25090264
    //  (offset absoluto medido: 0x25F0; confianca baixa)
    double& LastValidNotStuckTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 144); }
    int& LastValidTameVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastValidTameVersion"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +64, medido na build 25090264
    //  (offset absoluto medido: 0x25A0; confianca media)
    double& LastWakingTameFedTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +312, medido na build 25090264
    //  (offset absoluto medido: 0x2698; confianca baixa)
    double& LastWantsToEnableNavRelevancyField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 312); }
    float& LatchedFirstPersonViewAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchedFirstPersonViewAngle"); }
    TArray<APrimalStructure*>& LatchedOnStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalDinoCharacter.LatchedOnStructures"); }
    float& LatchingCameraInterpolationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingCameraInterpolationSpeed"); }
    float& LatchingDistanceLimitField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingDistanceLimit"); }
    float& LatchingInitialPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingInitialPitch"); }
    float& LatchingInitialYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingInitialYaw"); }
    float& LatchingInterpolatedPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingInterpolatedPitch"); }
    FString& LatestUploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.LatestUploadedFromServerName"); }
    float& LeavePlayAnimBelowHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LeavePlayAnimBelowHealthPercent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +92, medido na build 25090264
    //  (offset absoluto medido: 0x2910; confianca media)
    void*& LengthOfLastPlayedIdleFidgetAnimationField() const
    { return BrzCampoAncorado<void*>(this, "ExtraDamageMultiplier", 92); }
    float& LimitRiderYawOnLatchedRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LimitRiderYawOnLatchedRange"); }
    TWeakObjectPtr<void>& LimitWildDinoToVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.LimitWildDinoToVolume"); }
    int& LimitWildDinoToVolumenIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LimitWildDinoToVolumenIndex"); }
    FName& LimitWildDinoToVolumenTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.LimitWildDinoToVolumenTag"); }
    TWeakObjectPtr<void>& LinkedSupplyCrateField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.LinkedSupplyCrate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +84, medido na build 25090264
    //  (offset absoluto medido: 0x2908; confianca media)
    float& MPLandingAfterLeavingTimerField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 84); }
    float& MatingProgressField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MatingProgress"); }
    APrimalDinoCharacter*& MatingWithDinoField() const
    { return *GetNativePointerField<APrimalDinoCharacter**>(this, "APrimalDinoCharacter.MatingWithDino"); }
    int& MaxAllowedRandomMutationsField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MaxAllowedRandomMutations"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +56, medido na build 25090264
    //  (offset absoluto medido: 0x2A5C; confianca media)
    void*& MaxDistanceSignificanceBasedAnimationBlendField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +12, medido na build 25090264
    //  (offset absoluto medido: 0x298C; confianca alta)
    void*& MaxHarvestableHitCountField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayedAttackAnimation", 12); }
    float& MaxPercentOfCapsulHeightAllowedForIKField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MaxPercentOfCapsulHeightAllowedForIK"); }
    float& MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCache"); }
    double& MaxTamedDinos_SoftTameLimit_MarkedForDeletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_MarkedForDeletionTime"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.MeleeDamageType")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoBaseLevelWeightEntries` +32, medido na build 25090264
    //  (offset absoluto medido: 0x1DA0; confianca alta)
    void*& MeleeSwingHurtListField() const
    { return BrzCampoAncorado<void*>(this, "DinoBaseLevelWeightEntries", 32); }
    float& MeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MeleeSwingRadius"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PaintingAllowedUVRanges` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2924; confianca alta)
    int& MeshOriginalCollisionChannelField() const
    { return BrzCampoAncorado<int>(this, "PaintingAllowedUVRanges", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +52, medido na build 25090264
    //  (offset absoluto medido: 0x2A58; confianca media)
    void*& MinDistanceSignificanceBasedAnimationBlendField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 52); }
    int& MinPlayerLevelForWakingTameField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MinPlayerLevelForWakingTame"); }
    TWeakObjectPtr<void>& MountCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.MountCharacter"); }
    BrzCampoPonteiro MountCharacterProneLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.MountCharacterProneLocOffset")); }
    float& MountCharacterProneOffsetSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MountCharacterProneOffsetSpeed"); }
    BrzCampoPonteiro MountCharacterProneRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.MountCharacterProneRotOffset")); }
    FName& MountCharacterSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.MountCharacterSocketName"); }
    TArray<void*>& MyBabyCuddleFoodTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.MyBabyCuddleFoodTypes"); }
    BrzCampoPonteiro MyDinoEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.MyDinoEntry")); }
    UPrimalDinoSettings*& MyDinoSettingsCDOField() const
    { return *GetNativePointerField<UPrimalDinoSettings**>(this, "APrimalDinoCharacter.MyDinoSettingsCDO"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +40, medido na build 25090264
    //  (offset absoluto medido: 0x28DC; confianca media)
    float& NPCLerpToMaxRandomBaseLevelField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +20, medido na build 25090264
    //  (offset absoluto medido: 0x2994; confianca alta)
    int& NPCSpawnerExtraLevelOffsetField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +28, medido na build 25090264
    //  (offset absoluto medido: 0x28D0; confianca alta)
    float& NPCSpawnerLevelMultiplierField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 28); }
    UPrimalNavigationInvokerComponent*& NavigationInvokerComponentField() const
    { return *GetNativePointerField<UPrimalNavigationInvokerComponent**>(this, "APrimalDinoCharacter.NavigationInvokerComponent"); }
    int& NewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.NewMutationCount"); }
    double& NextAllowedBedUseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.NextAllowedBedUseTime"); }
    double& NextAllowedMatingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.NextAllowedMatingTime"); }
    TArray<void*>& NextBabyDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.NextBabyDinoAncestors"); }
    TArray<void*>& NextBabyDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.NextBabyDinoAncestorsMale"); }
    TArray<void*>& NextBabyGeneTraitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.NextBabyGeneTraits"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +128, medido na build 25090264
    //  (offset absoluto medido: 0x25E0; confianca media)
    void*& NextDedicatedServerBabyUpdateTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +200, medido na build 25090264
    //  (offset absoluto medido: 0x2628; confianca baixa)
    double& NextRidingFlyerUndergroundCheckField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +240, medido na build 25090264
    //  (offset absoluto medido: 0x2650; confianca baixa)
    double& NextTamedDinoCharacterStatusTickTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 240); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +280, medido na build 25090264
    //  (offset absoluto medido: 0x2678; confianca baixa)
    double& NextTickDelayAllowTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 280); }
    double& NextTimePlayIdleFidgetAnimationField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.NextTimePlayIdleFidgetAnimation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +344, medido na build 25090264
    //  (offset absoluto medido: 0x26B8; confianca baixa)
    void*& NextTimeUpdateRandomLookAtTargetField() const
    { return BrzCampoAncorado<void*>(this, "LastBoostDinoImpulseTime", 344); }
    float& NoRiderFlyingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.NoRiderFlyingRotationRateModifier"); }
    TArray<void*>& NoSaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.NoSaddlePassengerSeats"); }
    FName& NonDedicatedFreezeDinoPhysicsIfLayerUnloadedField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.NonDedicatedFreezeDinoPhysicsIfLayerUnloaded"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +52, medido na build 25090264
    //  (offset absoluto medido: 0x29B4; confianca media)
    void*& NumberOfTicksAtZeroField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayedAttackAnimation", 52); }
    float& NursingTroughFoodEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.NursingTroughFoodEffectivenessMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +168, medido na build 25090264
    //  (offset absoluto medido: 0x1F58; confianca baixa)
    void*& OldInterpolatedLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 168); }
    BrzCampoPonteiro OnClearMountedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnClearMountedDino")); }
    BrzCampoPonteiro OnFlyerLandedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnFlyerLanded")); }
    BrzCampoPonteiro OnFlyerLandingInterruptedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnFlyerLandingInterrupted")); }
    BrzCampoPonteiro OnFlyerStartLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnFlyerStartLanding")); }
    BrzCampoPonteiro OnNotifyAddPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnNotifyAddPassenger")); }
    BrzCampoPonteiro OnNotifyClearPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnNotifyClearPassenger")); }
    BrzCampoPonteiro OnNotifyClearRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnNotifyClearRider")); }
    BrzCampoPonteiro OnNotifySetRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnNotifySetRider")); }
    BrzCampoPonteiro OnSetMountedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OnSetMountedDino")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +88, medido na build 25090264
    //  (offset absoluto medido: 0x290C; confianca media)
    float& OriginalCapsuleHalfHeightField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 88); }
    FName& OriginalNPCVolumeNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.OriginalNPCVolumeName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2998; confianca alta)
    int& OriginalTargetingTeamField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 24); }
    float& OverlapAsTargetCheckTraceZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.OverlapAsTargetCheckTraceZOffset"); }
    BrzCampoPonteiro OverlayTooltipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OverlayTooltipPadding")); }
    BrzCampoPonteiro OverlayTooltipScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OverlayTooltipScale")); }
    USoundBase*& OverrideAreaMusicField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalDinoCharacter.OverrideAreaMusic"); }
    TArray<void*>& OverrideBaseStatLevelsOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.OverrideBaseStatLevelsOnSpawn"); }
    TArray<void*>& OverrideStatPriorityOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.OverrideStatPriorityOnSpawn"); }
    BrzCampoPonteiro OverrideStatsPanelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.OverrideStatsPanelClass")); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalDinoCharacter.OverrideTargetComponents"); }
    TArray<void*>& OverwrittenWildFollowingDinoInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.OverwrittenWildFollowingDinoInfos"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalDinoCharacter.OwnerMission"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.OwningPlayerName"); }
    BrzCampoPonteiro PaintingAllowedUVRangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.PaintingAllowedUVRanges")); }
    FName& PassengerFPVCameraRootSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.PassengerFPVCameraRootSocket"); }
    TArray<TWeakObjectPtr<void>>& PassengerPerSeatField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalDinoCharacter.PassengerPerSeat"); }
    float& PathfollowingMaxSpeedModiferField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PathfollowingMaxSpeedModifer"); }
    int& PatrolGroupIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.PatrolGroupID"); }
    BrzCampoPonteiro PatrolGroupOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.PatrolGroupOffset")); }
    float& PercentChanceFemaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PercentChanceFemale"); }
    int& PersonalTamedDinoCostField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.PersonalTamedDinoCost"); }
    float& PlayAnimBelowHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PlayAnimBelowHealthPercent"); }
    float& PlayerMountedLaunchFowardSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PlayerMountedLaunchFowardSpeed"); }
    float& PlayerMountedLaunchUpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PlayerMountedLaunchUpSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedPassengerPerSeat` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1BA0; confianca alta)
    TArray<TWeakObjectPtr<void>>& PrevPassengerPerSeatField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "SavedPassengerPerSeat", 16); }
    double& PreventMateBoostUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.PreventMateBoostUntilTime"); }
    BrzCampoPonteiro PreventMutationColorizationRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.PreventMutationColorizationRegions")); }
    BrzCampoPonteiro PreventPVPMountedWeaponClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.PreventPVPMountedWeaponClasses")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRiderMountedWeaponRotation` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1FE8; confianca alta)
    void*& PreviousAimRotField() const
    { return BrzCampoAncorado<void*>(this, "LastRiderMountedWeaponRotation", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PaintingAllowedUVRanges` +20, medido na build 25090264
    //  (offset absoluto medido: 0x2928; confianca alta)
    void*& PreviousBabyCapsuleWeaponTraceChannelResponseField() const
    { return BrzCampoAncorado<void*>(this, "PaintingAllowedUVRanges", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CarriedCharacter` +8, medido na build 25090264
    //  (offset absoluto medido: 0x22F8; confianca alta)
    TWeakObjectPtr<void>& PreviousCarriedCharacterField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "CarriedCharacter", 8); }
    TWeakObjectPtr<void>& PreviousRiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.PreviousRider"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +32, medido na build 25090264
    //  (offset absoluto medido: 0x28D4; confianca alta)
    float& PreviousRootYawSpeedField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +36, medido na build 25090264
    //  (offset absoluto medido: 0x29A4; confianca media)
    int& PreviousTargetingTeamField() const
    { return BrzCampoAncorado<int>(this, "LastPlayedAttackAnimation", 36); }
    FString& PreviousUploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.PreviousUploadedFromServerName"); }
    BrzCampoPonteiro RandomColorSetsFemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.RandomColorSetsFemale")); }
    BrzCampoPonteiro RandomColorSetsMaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.RandomColorSetsMale")); }
    float& RandomLookAtBaseSearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtBaseSearchRadius"); }
    float& RandomLookAtChanceToSkipCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtChanceToSkipCooldown"); }
    float& RandomLookAtCooldownMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtCooldownMax"); }
    float& RandomLookAtCooldownMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtCooldownMin"); }
    float& RandomLookAtDinoWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtDinoWeight"); }
    float& RandomLookAtDurationMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtDurationMax"); }
    float& RandomLookAtDurationMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtDurationMin"); }
    BrzCampoPonteiro RandomLookAtIgnoreDinoNameTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.RandomLookAtIgnoreDinoNameTags")); }
    float& RandomLookAtPlayerWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtPlayerWeight"); }
    float& RandomLookAtTargetMinDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtTargetMinDot"); }
    int& RandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.RandomMutationsFemale"); }
    int& RandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.RandomMutationsMale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +48, medido na build 25090264
    //  (offset absoluto medido: 0x28E4; confianca media)
    float& RepairAmountRemainingField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +232, medido na build 25090264
    //  (offset absoluto medido: 0x2648; confianca baixa)
    double& RepeatPrimaryAttackLastSendTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 232); }
    float& RequiredTameAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RequiredTameAffinity"); }
    float& RequiredTameAffinityPerBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RequiredTameAffinityPerBaseLevel"); }
    TWeakObjectPtr<void>& RiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.Rider"); }
    UAnimSequence*& RiderAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalDinoCharacter.RiderAnimOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +216, medido na build 25090264
    //  (offset absoluto medido: 0x1F88; confianca baixa)
    void*& RiderAttackLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastAllyLookTarget` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2358; confianca alta)
    TWeakObjectPtr<void>& RiderAttackTargetField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "LastAllyLookTarget", 8); }
    BrzCampoPonteiro RiderCheckTraceOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.RiderCheckTraceOffset")); }
    BrzCampoPonteiro RiderEjectionImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.RiderEjectionImpulse")); }
    BrzCampoPonteiro RiderFPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.RiderFPVCameraOffset")); }
    FName& RiderFPVCameraUseSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.RiderFPVCameraUseSocketName"); }
    float& RiderMaxRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderMaxRunSpeedModifier"); }
    float& RiderMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderMaxSpeedModifier"); }
    UAnimSequence*& RiderMoveAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalDinoCharacter.RiderMoveAnimOverride"); }
    float& RiderRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderRotationRateModifier"); }
    FName& RiderSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.RiderSocketName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +44, medido na build 25090264
    //  (offset absoluto medido: 0x28E0; confianca media)
    void*& RiderTimeThresholdField() const
    { return BrzCampoAncorado<void*>(this, "ExtraDamageMultiplier", 44); }
    float& RidingNetUpdateFequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RidingNetUpdateFequency"); }
    float& RootLocSwimOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RootLocSwimOffset"); }
    BrzCampoPonteiro SaddleItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.SaddleItemClass")); }
    FDinoSaddleStruct& SaddleStructField() const
    { return *GetNativePointerField<FDinoSaddleStruct*>(this, "APrimalDinoCharacter.SaddleStruct"); }
    TArray<void*>& SaddleStructuresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.SaddleStructures"); }
    TArray<APrimalStructure*>& SaddledStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalDinoCharacter.SaddledStructures"); }
    int& SaveDestroyWildDinosUnderVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.SaveDestroyWildDinosUnderVersion"); }
    int& SavedLastValidTameVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.SavedLastValidTameVersion"); }
    TArray<APrimalCharacter*>& SavedPassengerPerSeatField() const
    { return *GetNativePointerField<TArray<APrimalCharacter*>*>(this, "APrimalDinoCharacter.SavedPassengerPerSeat"); }
    float& ScaleExtraRunningSpeedModifierMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ScaleExtraRunningSpeedModifierMax"); }
    float& ScaleExtraRunningSpeedModifierMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ScaleExtraRunningSpeedModifierMin"); }
    float& ScaleExtraRunningSpeedModifierSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ScaleExtraRunningSpeedModifierSpeed"); }
    UPrimalInventoryComponent*& SecondaryInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalDinoCharacter.SecondaryInventoryComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +56, medido na build 25090264
    //  (offset absoluto medido: 0x28EC; confianca media)
    float& SetAttackTargetTraceDistanceField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 56); }
    UAnimMontage*& SleepConsumeFoodAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.SleepConsumeFoodAnim"); }
    float& SlopeBiasForMaxCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SlopeBiasForMaxCapsulePercent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BabyCuddleWalkStartingLocation` +240, medido na build 25090264
    //  (offset absoluto medido: 0x1FA0; confianca baixa)
    void*& SpawnedLocationField() const
    { return BrzCampoAncorado<void*>(this, "BabyCuddleWalkStartingLocation", 240); }
    BrzCampoPonteiro SpawnerColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.SpawnerColorSets")); }
    BrzCampoPonteiro StartChargingShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.StartChargingShake")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2568; confianca media)
    double& StartLandingTimeField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 8); }
    UAnimMontage*& StartledAnimationRightDefaultField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.StartledAnimationRightDefault"); }
    BrzCampoPonteiro StepActorDamageTypeOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.StepActorDamageTypeOverride")); }
    TArray<void*>& StepDamageFootDamageSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.StepDamageFootDamageSockets"); }
    float& StepDamageRadialDamageAmountGeneralField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageAmountGeneral"); }
    float& StepDamageRadialDamageAmountHarvestableField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageAmountHarvestable"); }
    float& StepDamageRadialDamageExtraRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageExtraRadius"); }
    float& StepDamageRadialDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageInterval"); }
    BrzCampoPonteiro StepHarvestableDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.StepHarvestableDamageType")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +68, medido na build 25090264
    //  (offset absoluto medido: 0x28F8; confianca media)
    float& SwimSoundTimeCacheField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 68); }
    float& SwimmingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SwimmingRotationRateModifier"); }
    float& SwimmingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SwimmingRunSpeedModifier"); }
    float& TameIneffectivenessByAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TameIneffectivenessByAffinity"); }
    float& TameIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TameIneffectivenessModifier"); }
    BrzCampoPonteiro TamedAIControllerOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.TamedAIControllerOverride")); }
    unsigned char& TamedAITargetingRangeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.TamedAITargetingRange"); }
    int& TamedAggressionLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.TamedAggressionLevel"); }
    double& TamedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.TamedAtTime"); }
    float& TamedCorpseLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedCorpseLifespan"); }
    TWeakObjectPtr<void>& TamedFollowTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.TamedFollowTarget"); }
    BrzCampoPonteiro TamedInventoryComponentTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.TamedInventoryComponentTemplate")); }
    TWeakObjectPtr<void>& TamedLandTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.TamedLandTarget"); }
    FString& TamedNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamedName"); }
    FString& TamedOnServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamedOnServerName"); }
    float& TamedRunningRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedRunningRotationRateModifier"); }
    float& TamedRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedRunningSpeedModifier"); }
    FString& TamedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamedTimeStamp"); }
    float& TamedWalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedWalkableFloorZ"); }
    float& TamedWalkingSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedWalkingSpeedModifier"); }
    FString& TamerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamerString"); }
    float& TamingFoodConsumeIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamingFoodConsumeInterval"); }
    float& TamingFoodConsumeIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamingFoodConsumeIntervalMax"); }
    float& TamingIneffectivenessModifierIncreaseByDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamingIneffectivenessModifierIncreaseByDamagePercent"); }
    double& TamingLastFoodConsumptionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.TamingLastFoodConsumptionTime"); }
    int& TamingTeamIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.TamingTeamID"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.Target"); }
    float& TargetLatchingInitialYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TargetLatchingInitialYaw"); }
    FName& TargetingTeamNameOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.TargetingTeamNameOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +60, medido na build 25090264
    //  (offset absoluto medido: 0x28F0; confianca media)
    float& TickStatusTimeAccumulationField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 60); }
    float& TimeBetweenTamedWakingEatAnimationsField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TimeBetweenTamedWakingEatAnimations"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastBoostDinoImpulseTime` +304, medido na build 25090264
    //  (offset absoluto medido: 0x2690; confianca baixa)
    double& TimeOfNextMateBoostUpdateField() const
    { return BrzCampoAncorado<double>(this, "LastBoostDinoImpulseTime", 304); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPlayedAttackAnimation` +28, medido na build 25090264
    //  (offset absoluto medido: 0x299C; confianca alta)
    void*& TimesRecentlySetRiderField() const
    { return BrzCampoAncorado<void*>(this, "LastPlayedAttackAnimation", 28); }
    unsigned char& TribeGroupPetOrderingRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.TribeGroupPetOrderingRank"); }
    unsigned char& TribeGroupPetRidingRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.TribeGroupPetRidingRank"); }
    BrzCampoPonteiro UnboardLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoCharacter.UnboardLocationOffset")); }
    float& UntamedPoopTimeCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.UntamedPoopTimeCache"); }
    float& UntamedRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.UntamedRunningSpeedModifier"); }
    float& UntamedWalkingSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.UntamedWalkingSpeedModifier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2A30; confianca alta)
    void*& UpdateWildBabyNextRunTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 12); }
    double& UploadEarliestValidTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.UploadEarliestValidTime"); }
    FString& UploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.UploadedFromServerName"); }
    UAnimMontage*& WakingConsumeFoodAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.WakingConsumeFoodAnim"); }
    float& WakingTameAffinityDecreaseFoodPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WakingTameAffinityDecreaseFoodPercentage"); }
    float& WakingTameFeedIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WakingTameFeedInterval"); }
    float& WakingTameFoodIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WakingTameFoodIncreaseMultiplier"); }
    float& WalkingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WalkingRotationRateModifier"); }
    TWeakObjectPtr<void>& WanderAroundActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.WanderAroundActor"); }
    float& WanderRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WanderRadiusMultiplier"); }
    UAnimMontage*& WildAmbientHarvestingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.WildAmbientHarvestingAnimation"); }
    TArray<UAnimMontage*>& WildAmbientHarvestingAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalDinoCharacter.WildAmbientHarvestingAnimations"); }
    TArray<void*>& WildAmbientHarvestingComponentClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoCharacter.WildAmbientHarvestingComponentClasses"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0x28B8; confianca alta)
    float& WildAmbientHarvestingTimerField() const
    { return BrzCampoAncorado<float>(this, "ExtraDamageMultiplier", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +20, medido na build 25090264
    //  (offset absoluto medido: 0x2A38; confianca alta)
    void*& WildBabyMinTimeBetweenRunsField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentSpecificHarvestResourceIndex` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2A28; confianca alta)
    void*& WildBabyNextRunTimeField() const
    { return BrzCampoAncorado<void*>(this, "CurrentSpecificHarvestResourceIndex", 4); }
    TArray<AActor*>& WildFollowerRefsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "APrimalDinoCharacter.WildFollowerRefs"); }
    AActor*& WildFollowingParentRefField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalDinoCharacter.WildFollowingParentRef"); }
    TWeakObjectPtr<void>& WildLimitTargetVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoCharacter.WildLimitTargetVolume"); }
    float& WildPercentageChanceOfBabyField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildPercentageChanceOfBaby"); }
    float& WildRandomScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildRandomScale"); }
    float& WildRunningRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildRunningRotationRateModifier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ExtraDamageMultiplier` +72, medido na build 25090264
    //  (offset absoluto medido: 0x28FC; confianca media)
    void*& bIsPVEField() const
    { return BrzCampoAncorado<void*>(this, "ExtraDamageMultiplier", 72); }
    float& chargingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.chargingRotationRateModifier"); }
    float& maxRangeForWeaponTriggeredTooltipField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.maxRangeForWeaponTriggeredTooltip"); }
    BitFieldValue<bool, unsigned __int32> bUseMountCharacterProneOffset()
    { return { (void*)this, "bUseMountCharacterProneOffset" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoResetAffinityOnUnsleep()
    { return { (void*)this, "bPreventDinoResetAffinityOnUnsleep" }; }
    BitFieldValue<bool, unsigned __int32> bForceReachedDestination()
    { return { (void*)this, "bForceReachedDestination" }; }
    BitFieldValue<bool, unsigned __int32> bHadLinkedSupplyCrate()
    { return { (void*)this, "bHadLinkedSupplyCrate" }; }
    BitFieldValue<bool, unsigned __int32> bRemovingStructuresOnDeath()
    { return { (void*)this, "bRemovingStructuresOnDeath" }; }
    BitFieldValue<bool, unsigned __int32> bResetUseAccelerationForRequestedMove()
    { return { (void*)this, "bResetUseAccelerationForRequestedMove" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenForLocalPassenger()
    { return { (void*)this, "bHiddenForLocalPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bRunCheckCarriedTrace()
    { return { (void*)this, "bRunCheckCarriedTrace" }; }
    BitFieldValue<bool, unsigned __int32> CanElevate()
    { return { (void*)this, "CanElevate" }; }
    BitFieldValue<bool, unsigned __int32> bIsElevating()
    { return { (void*)this, "bIsElevating" }; }
    BitFieldValue<bool, unsigned __int32> bIsBraking()
    { return { (void*)this, "bIsBraking" }; }
    BitFieldValue<bool, unsigned __int32> MovingForward()
    { return { (void*)this, "MovingForward" }; }
    BitFieldValue<bool, unsigned __int32> bReceivedDinoAncestors()
    { return { (void*)this, "bReceivedDinoAncestors" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater()
    { return { (void*)this, "bForcePreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCarryCharacterWithoutRider()
    { return { (void*)this, "bAllowCarryCharacterWithoutRider" }; }
    BitFieldValue<bool, unsigned __int32> bDebugMeleeAttacks()
    { return { (void*)this, "bDebugMeleeAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseAltAimSocketsForTurrets()
    { return { (void*)this, "bForceUseAltAimSocketsForTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoFaceRotation()
    { return { (void*)this, "bUseBPDinoFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckCanSpawnFromLocation()
    { return { (void*)this, "bUseBPCheckCanSpawnFromLocation" }; }
    BitFieldValue<bool, unsigned __int32> bIsLanding()
    { return { (void*)this, "bIsLanding" }; }
    BitFieldValue<bool, unsigned __int32> bCancelInterpolation()
    { return { (void*)this, "bCancelInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bIsCharging()
    { return { (void*)this, "bIsCharging" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePitchWhileSwimming()
    { return { (void*)this, "bReplicatePitchWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlying()
    { return { (void*)this, "bIsFlying" }; }
    BitFieldValue<bool, unsigned __int32> bIsWakingTame()
    { return { (void*)this, "bIsWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRiding()
    { return { (void*)this, "bAllowRiding" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayerController()
    { return { (void*)this, "bHasPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bForceAutoTame()
    { return { (void*)this, "bForceAutoTame" }; }
    BitFieldValue<bool, unsigned __int32> bRiderJumpTogglesFlight()
    { return { (void*)this, "bRiderJumpTogglesFlight" }; }
    BitFieldValue<bool, unsigned __int32> bHasRider()
    { return { (void*)this, "bHasRider" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCarryFlyerDinos()
    { return { (void*)this, "bAllowCarryFlyerDinos" }; }
    BitFieldValue<bool, unsigned __int32> bForcedLanding()
    { return { (void*)this, "bForcedLanding" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerForceNoPitch()
    { return { (void*)this, "bFlyerForceNoPitch" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerForceLimitPitch()
    { return { (void*)this, "bFlyerForceLimitPitch" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDinoLoadedFromSaveGame()
    { return { (void*)this, "bDinoLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bIsAWildFollowerKnownServerside()
    { return { (void*)this, "bIsAWildFollowerKnownServerside" }; }
    BitFieldValue<bool, unsigned __int32> AllowWildBabyTaming()
    { return { (void*)this, "AllowWildBabyTaming" }; }
    BitFieldValue<bool, unsigned __int32> bIsParentWildDino()
    { return { (void*)this, "bIsParentWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bDontForceUpdateRateOptimizations()
    { return { (void*)this, "bDontForceUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bDisabledFromAscension()
    { return { (void*)this, "bDisabledFromAscension" }; }
    BitFieldValue<bool, unsigned __int32> bCheatForceTameRide()
    { return { (void*)this, "bCheatForceTameRide" }; }
    BitFieldValue<bool, unsigned __int32> bIsFemale()
    { return { (void*)this, "bIsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeTamed()
    { return { (void*)this, "bCanBeTamed" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingIgnoredByWildDinos()
    { return { (void*)this, "bTargetingIgnoredByWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingIgnoreWildDinos()
    { return { (void*)this, "bTargetingIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bCanMountOnHumans()
    { return { (void*)this, "bCanMountOnHumans" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorization()
    { return { (void*)this, "bUseColorization" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeSwingDamageBlockedByStrutures()
    { return { (void*)this, "bMeleeSwingDamageBlockedByStrutures" }; }
    BitFieldValue<bool, unsigned __int32> bApplyDamageEffectToChildComponents()
    { return { (void*)this, "bApplyDamageEffectToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingCorpses()
    { return { (void*)this, "bAllowTargetingCorpses" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDontRequireSaddle()
    { return { (void*)this, "bRiderDontRequireSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeOrdered()
    { return { (void*)this, "bCanBeOrdered" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarnivore()
    { return { (void*)this, "bIsCarnivore" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingInWater()
    { return { (void*)this, "bAllowRidingInWater" }; }
    BitFieldValue<bool, unsigned __int32> bUsesGender()
    { return { (void*)this, "bUsesGender" }; }
    BitFieldValue<bool, unsigned __int32> hasAlreadySetGender()
    { return { (void*)this, "hasAlreadySetGender" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnSetNotifies()
    { return { (void*)this, "bUseBP_OnBasedPawnSetNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bTargetEverything()
    { return { (void*)this, "bTargetEverything" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTamedWandering()
    { return { (void*)this, "bEnableTamedWandering" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTamedMating()
    { return { (void*)this, "bEnableTamedMating" }; }
    BitFieldValue<bool, unsigned __int32> bCollectVictimItems()
    { return { (void*)this, "bCollectVictimItems" }; }
    BitFieldValue<bool, unsigned __int32> bServerInitializedDino()
    { return { (void*)this, "bServerInitializedDino" }; }
    BitFieldValue<bool, unsigned __int32> bNPCSpawnerOverrideLevel()
    { return { (void*)this, "bNPCSpawnerOverrideLevel" }; }
    BitFieldValue<bool, unsigned __int32> bHasMateBoost()
    { return { (void*)this, "bHasMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> NPCSpawnerAddLevelOffsetBeforeMultiplier()
    { return { (void*)this, "NPCSpawnerAddLevelOffsetBeforeMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bTamingHasFood()
    { return { (void*)this, "bTamingHasFood" }; }
    BitFieldValue<bool, unsigned __int32> bDontWander()
    { return { (void*)this, "bDontWander" }; }
    BitFieldValue<bool, unsigned __int32> bAnimIsMoving()
    { return { (void*)this, "bAnimIsMoving" }; }
    BitFieldValue<bool, unsigned __int32> bDoStepDamage()
    { return { (void*)this, "bDoStepDamage" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBasing()
    { return { (void*)this, "bForceAlwaysAllowBasing" }; }
    BitFieldValue<bool, unsigned __int32> bUseRootLocSwimOffset()
    { return { (void*)this, "bUseRootLocSwimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseLowQualityAnimationTick()
    { return { (void*)this, "bUseLowQualityAnimationTick" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllRiderWeapons()
    { return { (void*)this, "bPreventAllRiderWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bSupportWakingTame()
    { return { (void*)this, "bSupportWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bDebugBaby()
    { return { (void*)this, "bDebugBaby" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshedColorization()
    { return { (void*)this, "bRefreshedColorization" }; }
    BitFieldValue<bool, unsigned __int32> bPoopIsEgg()
    { return { (void*)this, "bPoopIsEgg" }; }
    BitFieldValue<bool, unsigned __int32> bPoopIsDud()
    { return { (void*)this, "bPoopIsDud" }; }
    BitFieldValue<bool, unsigned __int32> bWasChargingBlocked()
    { return { (void*)this, "bWasChargingBlocked" }; }
    BitFieldValue<bool, unsigned __int32> bWasRidingFalling()
    { return { (void*)this, "bWasRidingFalling" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedForReplicatedBasing()
    { return { (void*)this, "bInitializedForReplicatedBasing" }; }
    BitFieldValue<bool, unsigned __int32> bClientWasTamed()
    { return { (void*)this, "bClientWasTamed" }; }
    BitFieldValue<bool, unsigned __int32> bApplyBoneModifiersIgnoreRefreshBoneTransforms()
    { return { (void*)this, "bApplyBoneModifiersIgnoreRefreshBoneTransforms" }; }
    BitFieldValue<bool, unsigned __int32> bSetBabyWeaponTraceBlocking()
    { return { (void*)this, "bSetBabyWeaponTraceBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bCanHaveBaby()
    { return { (void*)this, "bCanHaveBaby" }; }
    BitFieldValue<bool, unsigned __int32> bReachedMaxStructures()
    { return { (void*)this, "bReachedMaxStructures" }; }
    BitFieldValue<bool, unsigned __int32> bBonesHidden()
    { return { (void*)this, "bBonesHidden" }; }
    BitFieldValue<bool, unsigned __int32> bDelayedAttachement()
    { return { (void*)this, "bDelayedAttachement" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bIsBaby()
    { return { (void*)this, "bIsBaby" }; }
    BitFieldValue<bool, unsigned __int32> bWasBaby()
    { return { (void*)this, "bWasBaby" }; }
    BitFieldValue<bool, unsigned __int32> bCanUnclaimTame()
    { return { (void*)this, "bCanUnclaimTame" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWildDinoEquipment()
    { return { (void*)this, "bAllowWildDinoEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bUseGang()
    { return { (void*)this, "bUseGang" }; }
    BitFieldValue<bool, unsigned __int32> bEggBoosted()
    { return { (void*)this, "bEggBoosted" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPassengerSeats()
    { return { (void*)this, "bSupportsPassengerSeats" }; }
    BitFieldValue<bool, unsigned __int32> bUseWildRandomScale()
    { return { (void*)this, "bUseWildRandomScale" }; }
    BitFieldValue<bool, unsigned __int32> bIsHeldJumpSlowFalling()
    { return { (void*)this, "bIsHeldJumpSlowFalling" }; }
    BitFieldValue<bool, unsigned __int32> bPlayingSlowFallingAnim()
    { return { (void*)this, "bPlayingSlowFallingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWakingTameFeeding()
    { return { (void*)this, "bPreventWakingTameFeeding" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablingTaming()
    { return { (void*)this, "bForceDisablingTaming" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairAlpha()
    { return { (void*)this, "bOverrideCrosshairAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairColor()
    { return { (void*)this, "bOverrideCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bClampOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bClampOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel()
    { return { (void*)this, "bUseFixedSpawnLevel" }; }
    BitFieldValue<bool, unsigned __int32> bUniqueDino()
    { return { (void*)this, "bUniqueDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideDinoName()
    { return { (void*)this, "bUseBP_OverrideDinoName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoTooltipCustomProgressBar()
    { return { (void*)this, "bUseBPDinoTooltipCustomProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTamingDescriptionLabel()
    { return { (void*)this, "bUseBPOverrideTamingDescriptionLabel" }; }
    BitFieldValue<bool, unsigned __int32> bIsNursingDino()
    { return { (void*)this, "bIsNursingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsNursing()
    { return { (void*)this, "bIsNursing" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPrioritizeAllyMountToCarry()
    { return { (void*)this, "bFlyerPrioritizeAllyMountToCarry" }; }
    BitFieldValue<bool, unsigned __int32> bClearRiderOnDinoImmobilized()
    { return { (void*)this, "bClearRiderOnDinoImmobilized" }; }
    BitFieldValue<bool, unsigned __int32> bIncrementedZoneManagerDirectLink()
    { return { (void*)this, "bIncrementedZoneManagerDirectLink" }; }
    BitFieldValue<bool, unsigned __int32> bSimulateRootMotion()
    { return { (void*)this, "bSimulateRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideStencilAllianceForTarget()
    { return { (void*)this, "bUseBPOverrideStencilAllianceForTarget" }; }
    BitFieldValue<bool, unsigned __int32> bIsScout()
    { return { (void*)this, "bIsScout" }; }
    BitFieldValue<bool, unsigned __int32> bShouldNotifyClientWhenLanded()
    { return { (void*)this, "bShouldNotifyClientWhenLanded" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlayerMountedCarryingDinoAnimation()
    { return { (void*)this, "bUsePlayerMountedCarryingDinoAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRotationRateModifier()
    { return { (void*)this, "bPreventRotationRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bStepDamageFoliageOnly()
    { return { (void*)this, "bStepDamageFoliageOnly" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUntamedRun()
    { return { (void*)this, "bPreventUntamedRun" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPublicSeating()
    { return { (void*)this, "bAllowPublicSeating" }; }
    BitFieldValue<bool, unsigned __int32> bTickedStasis()
    { return { (void*)this, "bTickedStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoAutoConsumeInventoryFood()
    { return { (void*)this, "bAllowDinoAutoConsumeInventoryFood" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoCharacterStatusComponentTick()
    { return { (void*)this, "bForceNoCharacterStatusComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bIsRaidDino()
    { return { (void*)this, "bIsRaidDino" }; }
    BitFieldValue<bool, unsigned __int32> bWildIgnoredByAutoTurrets()
    { return { (void*)this, "bWildIgnoredByAutoTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bWildAllowTargetingNeutralStructures()
    { return { (void*)this, "bWildAllowTargetingNeutralStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDroppedInventoryDeposit()
    { return { (void*)this, "bDroppedInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryingCharacter()
    { return { (void*)this, "bIsCarryingCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryingPassenger()
    { return { (void*)this, "bIsCarryingPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretTargetOverrideLocations()
    { return { (void*)this, "bAllowTurretTargetOverrideLocations" }; }
    BitFieldValue<bool, unsigned __int32> bLastDamageWasForwardedFromPlatformStructure()
    { return { (void*)this, "bLastDamageWasForwardedFromPlatformStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseMyBabyCuddleFoodTypesAsAdditional()
    { return { (void*)this, "bUseMyBabyCuddleFoodTypesAsAdditional" }; }
    BitFieldValue<bool, unsigned __int32> bIsManualFoodEat()
    { return { (void*)this, "bIsManualFoodEat" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPostNetReplication()
    { return { (void*)this, "bDisallowPostNetReplication" }; }
    BitFieldValue<bool, unsigned __int32> bTakingOff()
    { return { (void*)this, "bTakingOff" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMating()
    { return { (void*)this, "bPreventMating" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowBackwardsFlight()
    { return { (void*)this, "bFlyerDinoAllowBackwardsFlight" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowStrafing()
    { return { (void*)this, "bFlyerDinoAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bIsBossDino()
    { return { (void*)this, "bIsBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAIAllowSpecialAttacks()
    { return { (void*)this, "bTamedAIAllowSpecialAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bLocalPrimaryAttackPressed()
    { return { (void*)this, "bLocalPrimaryAttackPressed" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploading()
    { return { (void*)this, "bPreventUploading" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHibernation()
    { return { (void*)this, "bPreventHibernation" }; }
    BitFieldValue<bool, unsigned __int32> bRiderMovementLocked()
    { return { (void*)this, "bRiderMovementLocked" }; }
    BitFieldValue<bool, unsigned __int32> bTameTimerSet()
    { return { (void*)this, "bTameTimerSet" }; }
    BitFieldValue<bool, unsigned __int32> bNeutered()
    { return { (void*)this, "bNeutered" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllWhistles()
    { return { (void*)this, "bIgnoreAllWhistles" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingHUD()
    { return { (void*)this, "bHideFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvesting()
    { return { (void*)this, "bDisableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowTickingThisFrame()
    { return { (void*)this, "bForceAllowTickingThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDontGainImpulseOnSubmerged()
    { return { (void*)this, "bFlyerDontGainImpulseOnSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bIsSingleplayer()
    { return { (void*)this, "bIsSingleplayer" }; }
    BitFieldValue<bool, unsigned __int32> bIsCloneDino()
    { return { (void*)this, "bIsCloneDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedAnimLerp()
    { return { (void*)this, "bUseAdvancedAnimLerp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWanderingUnderWater()
    { return { (void*)this, "bPreventWanderingUnderWater" }; }
    BitFieldValue<bool, unsigned __int32> bWildAllowFollowTamedTarget()
    { return { (void*)this, "bWildAllowFollowTamedTarget" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageSameTeamAndClass()
    { return { (void*)this, "bAllowDamageSameTeamAndClass" }; }
    BitFieldValue<bool, unsigned __int32> bAllowsTurretMode()
    { return { (void*)this, "bAllowsTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingInTurretMode()
    { return { (void*)this, "bAllowRidingInTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bIsInTurretMode()
    { return { (void*)this, "bIsInTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyDesiredRotation()
    { return { (void*)this, "bUseBPModifyDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForcedLandingClearRider()
    { return { (void*)this, "bForcedLandingClearRider" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CustomModifier_MaxSpeed()
    { return { (void*)this, "bUseBP_CustomModifier_MaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bIsClearingRider()
    { return { (void*)this, "bIsClearingRider" }; }
    BitFieldValue<bool, unsigned __int32> bForcePerFrameTicking()
    { return { (void*)this, "bForcePerFrameTicking" }; }
    BitFieldValue<bool, unsigned __int32> bHadStaticBase()
    { return { (void*)this, "bHadStaticBase" }; }
    BitFieldValue<bool, unsigned __int32> bNoKillXP()
    { return { (void*)this, "bNoKillXP" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllyLook()
    { return { (void*)this, "bIgnoreAllyLook" }; }
    BitFieldValue<bool, unsigned __int32> bBabyInitiallyUnclaimed()
    { return { (void*)this, "bBabyInitiallyUnclaimed" }; }
    BitFieldValue<bool, unsigned __int32> bLastAnyLegOnGround()
    { return { (void*)this, "bLastAnyLegOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressWakingTameMessage()
    { return { (void*)this, "bSuppressWakingTameMessage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFlyerLanding()
    { return { (void*)this, "bPreventFlyerLanding" }; }
    BitFieldValue<bool, unsigned __int32> bHasDied()
    { return { (void*)this, "bHasDied" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayDying()
    { return { (void*)this, "bHasPlayDying" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTrapping()
    { return { (void*)this, "bAllowTrapping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWildTrapping()
    { return { (void*)this, "bPreventWildTrapping" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestroyOnRapidDeath()
    { return { (void*)this, "bIgnoreDestroyOnRapidDeath" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallingBumpCheck()
    { return { (void*)this, "bPreventFallingBumpCheck" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyingDino()
    { return { (void*)this, "bIsDestroyingDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintExtraBabyScale()
    { return { (void*)this, "bUseBlueprintExtraBabyScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnPostNetReplication()
    { return { (void*)this, "bUseBP_OnPostNetReplication" }; }
    BitFieldValue<bool, unsigned __int32> bPassiveFlee()
    { return { (void*)this, "bPassiveFlee" }; }
    BitFieldValue<bool, unsigned __int32> bDidAllowTickingTickingThisFrame()
    { return { (void*)this, "bDidAllowTickingTickingThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTargetConscious()
    { return { (void*)this, "bOnlyTargetConscious" }; }
    BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocationNoRider()
    { return { (void*)this, "bBPManagedFPVViewLocationNoRider" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideSaddle()
    { return { (void*)this, "bForceHideSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCloning()
    { return { (void*)this, "bPreventCloning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CanFly()
    { return { (void*)this, "bUseBP_CanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideBasedCharactersCameraInterpSpeed()
    { return { (void*)this, "bUseBP_OverrideBasedCharactersCameraInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideFloatingHUDLocation()
    { return { (void*)this, "bUseBPOverrideFloatingHUDLocation" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptPlayerEmotes()
    { return { (void*)this, "bInterceptPlayerEmotes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ShouldPreventBasedCharactersCameraInterpolation()
    { return { (void*)this, "bUseBP_ShouldPreventBasedCharactersCameraInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bRidingIsSeperateUnstasisCaster()
    { return { (void*)this, "bRidingIsSeperateUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bIsOceanManagerDino()
    { return { (void*)this, "bIsOceanManagerDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsSaveProfilingDino()
    { return { (void*)this, "bIsSaveProfilingDino" }; }
    BitFieldValue<bool, unsigned __int32> DisableCameraShakes()
    { return { (void*)this, "DisableCameraShakes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideCarriedCharacterTransform()
    { return { (void*)this, "bUseBP_OverrideCarriedCharacterTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnNotifies()
    { return { (void*)this, "bUseBP_OnBasedPawnNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWaterWalking()
    { return { (void*)this, "bUsesWaterWalking" }; }
    BitFieldValue<bool, unsigned __int32> bIsMek()
    { return { (void*)this, "bIsMek" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnforcer()
    { return { (void*)this, "bIsEnforcer" }; }
    BitFieldValue<bool, unsigned __int32> bIsExtinctionTitan()
    { return { (void*)this, "bIsExtinctionTitan" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreFlierRidingRestrictions()
    { return { (void*)this, "bIgnoreFlierRidingRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bRotatingUpdatesDinoIK()
    { return { (void*)this, "bRotatingUpdatesDinoIK" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideRiderCameraCollisionSweep()
    { return { (void*)this, "bUseBP_OverrideRiderCameraCollisionSweep" }; }
    BitFieldValue<bool, unsigned __int32> bDrawHealthBar()
    { return { (void*)this, "bDrawHealthBar" }; }
    BitFieldValue<bool, unsigned __int32> bUseShoulderMountedLaunch()
    { return { (void*)this, "bUseShoulderMountedLaunch" }; }
    BitFieldValue<bool, unsigned __int32> bUsePreciseLaunching()
    { return { (void*)this, "bUsePreciseLaunching" }; }
    BitFieldValue<bool, unsigned __int32> bDidSetupTamed()
    { return { (void*)this, "bDidSetupTamed" }; }
    BitFieldValue<bool, unsigned __int32> bIncrementedNumDinos()
    { return { (void*)this, "bIncrementedNumDinos" }; }
    BitFieldValue<bool, unsigned __int32> bBabyPreventExitingWater()
    { return { (void*)this, "bBabyPreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventExportDino()
    { return { (void*)this, "bPreventExportDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPassengerFPV()
    { return { (void*)this, "bPreventPassengerFPV" }; }
    BitFieldValue<bool, unsigned __int32> bGlideWhenFalling()
    { return { (void*)this, "bGlideWhenFalling" }; }
    BitFieldValue<bool, unsigned __int32> bGlideWhenMounted()
    { return { (void*)this, "bGlideWhenMounted" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowBackwardsMovement()
    { return { (void*)this, "bForceAllowBackwardsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatched()
    { return { (void*)this, "bIsLatched" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatchedDownward()
    { return { (void*)this, "bIsLatchedDownward" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatching()
    { return { (void*)this, "bIsLatching" }; }
    BitFieldValue<bool, unsigned __int32> bRotateToFaceLatchingObject()
    { return { (void*)this, "bRotateToFaceLatchingObject" }; }
    BitFieldValue<bool, unsigned __int32> bLimitRiderYawOnLatched()
    { return { (void*)this, "bLimitRiderYawOnLatched" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponry()
    { return { (void*)this, "bAllowMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponryPVE()
    { return { (void*)this, "bAllowMountedWeaponryPVE" }; }
    BitFieldValue<bool, unsigned __int32> bKeepAffinityOnDamageRecievedWakingTame()
    { return { (void*)this, "bKeepAffinityOnDamageRecievedWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bForceRiderDrawCrosshair()
    { return { (void*)this, "bForceRiderDrawCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUD()
    { return { (void*)this, "bForceDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUDWithoutRecentlyRendered()
    { return { (void*)this, "bForceDrawHUDWithoutRecentlyRendered" }; }
    BitFieldValue<bool, unsigned __int32> bCanTargetVehicles()
    { return { (void*)this, "bCanTargetVehicles" }; }
    BitFieldValue<bool, unsigned __int32> bVehicleAlwaysAllowTargetingByWildDinos()
    { return { (void*)this, "bVehicleAlwaysAllowTargetingByWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bRidingRequiresTamed()
    { return { (void*)this, "bRidingRequiresTamed" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressDeathNotification()
    { return { (void*)this, "bSuppressDeathNotification" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnUpdateMountedDinoMeshHiding()
    { return { (void*)this, "bUseOnUpdateMountedDinoMeshHiding" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptTurnInputEvents()
    { return { (void*)this, "bUseBPInterceptTurnInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEvents()
    { return { (void*)this, "bUseBPInterceptMoveInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEventsEvenIfZero()
    { return { (void*)this, "bUseBPInterceptMoveInputEventsEvenIfZero" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustAttackIndex()
    { return { (void*)this, "bUseBPAdjustAttackIndex" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnEndCharging()
    { return { (void*)this, "bUseBPOnEndCharging" }; }
    BitFieldValue<bool, unsigned __int32> bIsCorrupted()
    { return { (void*)this, "bIsCorrupted" }; }
    BitFieldValue<bool, unsigned __int32> bIsHordeDino()
    { return { (void*)this, "bIsHordeDino" }; }
    BitFieldValue<bool, unsigned __int32> bDropWildEggsWithoutMateBoost()
    { return { (void*)this, "bDropWildEggsWithoutMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> bIsTemporaryMissionDino()
    { return { (void*)this, "bIsTemporaryMissionDino" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventInventoryAccess()
    { return { (void*)this, "bForcePreventInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWildRunningWithoutTarget()
    { return { (void*)this, "bAllowWildRunningWithoutTarget" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirability()
    { return { (void*)this, "bUseBPGetTargetingDesirability" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysAllowStrafing()
    { return { (void*)this, "bAlwaysAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowTamedTickEggLay()
    { return { (void*)this, "bForceAllowTamedTickEggLay" }; }
    BitFieldValue<bool, unsigned __int32> bHasBuffPreventingUploading()
    { return { (void*)this, "bHasBuffPreventingUploading" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvestHealthGain()
    { return { (void*)this, "bDisableHarvestHealthGain" }; }
    BitFieldValue<bool, unsigned __int32> bRemainLatchedOnClearRider()
    { return { (void*)this, "bRemainLatchedOnClearRider" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOtherActorToIgnore()
    { return { (void*)this, "bUseBPGetOtherActorToIgnore" }; }
    BitFieldValue<bool, unsigned __int32> bGenderOverrideInSpawn()
    { return { (void*)this, "bGenderOverrideInSpawn" }; }
    BitFieldValue<bool, unsigned __int32> MutagenApplied()
    { return { (void*)this, "MutagenApplied" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhistleThroughRemoteDino()
    { return { (void*)this, "bAllowWhistleThroughRemoteDino" }; }
    BitFieldValue<bool, unsigned __int32> bForceValidUnstasisCaster()
    { return { (void*)this, "bForceValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bControlledDinoPreventsPlayerInventory()
    { return { (void*)this, "bControlledDinoPreventsPlayerInventory" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingSupportSkins()
    { return { (void*)this, "bPaintingSupportSkins" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePassengerAdditiveAnim()
    { return { (void*)this, "bUseBPOverridePassengerAdditiveAnim" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePassengerTPVAim()
    { return { (void*)this, "bReplicatePassengerTPVAim" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableClientGravitySim()
    { return { (void*)this, "bForceDisableClientGravitySim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirabilityForTurrets()
    { return { (void*)this, "bUseBPGetTargetingDesirabilityForTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bWasSpawnedInACaveOrBossArea()
    { return { (void*)this, "bWasSpawnedInACaveOrBossArea" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsSubmergedForWaterTargeting()
    { return { (void*)this, "bUseBPOverrideIsSubmergedForWaterTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bCreatureIsImmuneToServerSoftTameLimitDestruction()
    { return { (void*)this, "bCreatureIsImmuneToServerSoftTameLimitDestruction" }; }
    BitFieldValue<bool, unsigned __int32> DestroyedViaSoftTameLimitCountdown()
    { return { (void*)this, "DestroyedViaSoftTameLimitCountdown" }; }
    BitFieldValue<bool, unsigned __int32> bMaxTamedDinos_SoftTameLimit_IsCharacterCountedTowardsUnderSoftTameLimit()
    { return { (void*)this, "bMaxTamedDinos_SoftTameLimit_IsCharacterCountedTowardsUnderSoftTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNPCCountVolumes()
    { return { (void*)this, "bIgnoreNPCCountVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePathfinding()
    { return { (void*)this, "bDisablePathfinding" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideToNavMeshStepHeight()
    { return { (void*)this, "bDontOverrideToNavMeshStepHeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoLimbWallAvoidance()
    { return { (void*)this, "bUseDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysUpdateDinoLimbWallAvoidance()
    { return { (void*)this, "bAlwaysUpdateDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateDinoLimbWallAvoidance()
    { return { (void*)this, "bUpdateDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bCheatPossessed()
    { return { (void*)this, "bCheatPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bForceTickingBehaviorTreeEveryFrame()
    { return { (void*)this, "bForceTickingBehaviorTreeEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDinoHasBonded()
    { return { (void*)this, "bDinoHasBonded" }; }
    BitFieldValue<bool, unsigned __int32> bCuddleRequestRefreshed()
    { return { (void*)this, "bCuddleRequestRefreshed" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingName()
    { return { (void*)this, "bHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bSingleplayerFreezePhysicsWhenNoTarget()
    { return { (void*)this, "bSingleplayerFreezePhysicsWhenNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanTargetCorpse()
    { return { (void*)this, "bUseBPCanTargetCorpse" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffModifyAimOffsetNoTarget()
    { return { (void*)this, "bCheckBuffModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderIndoorsCheckLocation()
    { return { (void*)this, "bUseBPOverrideRiderIndoorsCheckLocation" }; }
    BitFieldValue<bool, unsigned __int32> bSwimmingWaterDinoMoveLikeFlying()
    { return { (void*)this, "bSwimmingWaterDinoMoveLikeFlying" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipTerrainTraceForCarriedCharacter()
    { return { (void*)this, "bUseBPSkipTerrainTraceForCarriedCharacter" }; }
    BitFieldValue<bool, unsigned __int32> FlyingMovementModeUseFlyingRunSpeedModifier()
    { return { (void*)this, "FlyingMovementModeUseFlyingRunSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAddedToMountChar()
    { return { (void*)this, "bUseBPNotifyOnBuffAddedToMountChar" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWanderAroundActorWildTameMix()
    { return { (void*)this, "bAllowWanderAroundActorWildTameMix" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyWanderAroundActorLocation()
    { return { (void*)this, "bUseBPModifyWanderAroundActorLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderAccessInventoryInput()
    { return { (void*)this, "bUseBPOverrideRiderAccessInventoryInput" }; }
    BitFieldValue<bool, unsigned __int32> bUseDescriptiveNameGenderOverrides()
    { return { (void*)this, "bUseDescriptiveNameGenderOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTamedFollowTarget()
    { return { (void*)this, "bUseBPGetTamedFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetTamedFollowTarget()
    { return { (void*)this, "bUseBPSetTamedFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBasedPlayerAimOffsetYaw()
    { return { (void*)this, "bUseBPOverrideBasedPlayerAimOffsetYaw" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearShoulderMountOfDiffTeam()
    { return { (void*)this, "bPreventClearShoulderMountOfDiffTeam" }; }
    BitFieldValue<bool, unsigned __int32> bPreventForceBabyFlyerLand()
    { return { (void*)this, "bPreventForceBabyFlyerLand" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAlwaysUseTamedUnsleepAnim()
    { return { (void*)this, "bTamedAlwaysUseTamedUnsleepAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseRandomLookAtTarget()
    { return { (void*)this, "bUseRandomLookAtTarget" }; }
    BitFieldValue<bool, unsigned __int32> bServerForceUpdateDinoGameplayMeshNearPlayer()
    { return { (void*)this, "bServerForceUpdateDinoGameplayMeshNearPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowMountedAimOffset()
    { return { (void*)this, "bForceAllowMountedAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bIsWandering()
    { return { (void*)this, "bIsWandering" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPhysMovement()
    { return { (void*)this, "bAllowPhysMovement" }; }
    BitFieldValue<bool, unsigned __int32> bWasWanderingEverThrottled()
    { return { (void*)this, "bWasWanderingEverThrottled" }; }
    BitFieldValue<bool, unsigned __int32> bWasMoving()
    { return { (void*)this, "bWasMoving" }; }
    BitFieldValue<bool, unsigned __int32> bRandomLookAtTargetDisabled()
    { return { (void*)this, "bRandomLookAtTargetDisabled" }; }
    BitFieldValue<bool, unsigned __int32> UseBPGetWiegthedAttackOverride()
    { return { (void*)this, "UseBPGetWiegthedAttackOverride" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTreadWater()
    { return { (void*)this, "bAllowTreadWater" }; }
    BitFieldValue<bool, unsigned __int32> bCanSecondaryMountOnHumans()
    { return { (void*)this, "bCanSecondaryMountOnHumans" }; }
    BitFieldValue<bool, unsigned __int32> bClientInterpLocationInCustomMovemode()
    { return { (void*)this, "bClientInterpLocationInCustomMovemode" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAutoMatingWhileTamedWandering()
    { return { (void*)this, "bDisableAutoMatingWhileTamedWandering" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultDinoTaming()
    { return { (void*)this, "bDisableDefaultDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildMeleeSwingTraceAll()
    { return { (void*)this, "bForceWildMeleeSwingTraceAll" }; }
    BitFieldValue<bool, unsigned __int32> bHadStaticMapActorBase()
    { return { (void*)this, "bHadStaticMapActorBase" }; }
    BitFieldValue<bool, unsigned __int32> bHasBotRider()
    { return { (void*)this, "bHasBotRider" }; }
    BitFieldValue<bool, unsigned __int32> bIncludePreventManualInPassengerCount()
    { return { (void*)this, "bIncludePreventManualInPassengerCount" }; }
    BitFieldValue<bool, unsigned __int32> bSkipProcessRootRotAndLocInAimOffset()
    { return { (void*)this, "bSkipProcessRootRotAndLocInAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowTeamToTrackTamingDino()
    { return { (void*)this, "bUseBPAllowTeamToTrackTamingDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCarryCharacter()
    { return { (void*)this, "bUseBPOnCarryCharacter" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALDINOCHARACTER_H
