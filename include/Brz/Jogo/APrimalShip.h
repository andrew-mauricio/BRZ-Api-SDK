// ==========================================================================
//  APrimalShip — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSHIP_H
#define BRZ_SDK_JOGO_APRIMALSHIP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AController;
struct AMissionType;
struct ANPCZoneManager;
struct APawn;
struct APlayerState;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct APrimalProjectileGrapplingHook;
struct APrimalStructure;
struct AShooterCharacter;
struct AShooterPlayerController;
struct FActorTickFunction;
struct FDinoSaddleStruct;
struct FName;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimationAsset;
struct UAudioComponent;
struct UCapsuleComponent;
struct UCharacterMovementComponent;
struct UInputComponent;
struct UNetDriver;
struct UParticleSystem;
struct UPrimalCharacterStatusComponent;
struct UPrimalDinoSettings;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimalNavigationInvokerComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;
struct UTexture2D;
struct UToolTipWidget;


struct APrimalShip
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalShip"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddForceToBeApplied(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddForceToBeApplied(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, void*, unsigned long long>(this, "APrimalShip.AddForceToBeApplied(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddForceToBeAppliedAtCenterOfGravity(UE::Math::TVector<double>,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddForceToBeAppliedAtCenterOfGravity(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "APrimalShip.AddForceToBeAppliedAtCenterOfGravity(UE::Math::TVector<double>,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddForceToBeAppliedAtCustomSocket(UE::Math::TVector<double>,FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddForceToBeAppliedAtCustomSocket(void* a0, unsigned long long a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, unsigned long long, unsigned long long>(this, "APrimalShip.AddForceToBeAppliedAtCustomSocket(UE::Math::TVector<double>,FName,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddForceToShipAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddForceToShipAtLocation(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalShip.AddForceToShipAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddImpulseToShipAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddImpulseToShipAtLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.AddImpulseToShipAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddShipSkillCooldown(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddShipSkillCooldown(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalShip.AddShipSkillCooldown(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AddTorqueToBeApplied(UE::Math::TVector<double>,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTorqueToBeApplied(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "APrimalShip.AddTorqueToBeApplied(UE::Math::TVector<double>,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalShip.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AllowAutoPilot()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AllowAutoPilot() const
    {
        return NativeCall<void*>(this, "APrimalShip.AllowAutoPilot()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ApplyCannonballImpactBuffs(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCannonballImpactBuffs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.ApplyCannonballImpactBuffs(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ApplySaddledStructureSceneState(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplySaddledStructureSceneState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.ApplySaddledStructureSceneState(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ApplyShipSkillBuff(FName,APrimalCharacter*,AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyShipSkillBuff(unsigned long long a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, bool>(this, "APrimalShip.ApplyShipSkillBuff(FName,APrimalCharacter*,AActor*,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AquireLoot(APrimalShipLootCrate*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro AquireLoot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.AquireLoot(APrimalShipLootCrate*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AreAllMannedSailsClosing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    BrzPonteiro AreAllMannedSailsClosing() const
    {
        return NativeCall<void*>(this, "APrimalShip.AreAllMannedSailsClosing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AreAllMannedSailsOpening()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    BrzPonteiro AreAllMannedSailsOpening() const
    {
        return NativeCall<void*>(this, "APrimalShip.AreAllMannedSailsOpening()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AttemptToReconnectParticularStructureToShipOnClient(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AttemptToReconnectParticularStructureToShipOnClient(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.AttemptToReconnectParticularStructureToShipOnClient(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AttemptToReconnectStructuresOnClient()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AttemptToReconnectStructuresOnClient() const
    {
        return NativeCall<void*>(this, "APrimalShip.AttemptToReconnectStructuresOnClient()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPApplyShipSkillBuff(FName,APrimalCharacter*,AActor*)
    // endereco: thunk
    BrzPonteiro BPApplyShipSkillBuff(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "APrimalShip.BPApplyShipSkillBuff(FName,APrimalCharacter*,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPCanAnchor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPCanAnchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.BPCanAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*,TSizedDefaultAllocato
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=8]]
    BrzPonteiro BPGetCameraCollisionIgnoreActors_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPGetShipSkillData(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetShipSkillData(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.BPGetShipSkillData(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPSetShipDriver(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetShipDriver(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.BPSetShipDriver(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPSetThrottleInput(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetThrottleInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.BPSetThrottleInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPSimulatePhysics(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPSimulatePhysics(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.BPSimulatePhysics(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPTick(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPTick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.BPTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BPVesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitRes
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPVesselDynamicsOnHit(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalShip.BPVesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BP_AdjustRowImpulse(int,int,int,UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_AdjustRowImpulse(int a0, int a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<void*, int, int, int, void*, void*>(this, "APrimalShip.BP_AdjustRowImpulse(int,int,int,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BaseIgnoreWaveLocking(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BaseIgnoreWaveLocking(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.BaseIgnoreWaveLocking(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BeginDestroy()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    BrzPonteiro BeginDestroy() const
    {
        return NativeCall<void*>(this, "APrimalShip.BeginDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalShip.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CalcNextCombatMusic()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcNextCombatMusic() const
    {
        return NativeCall<void*>(this, "APrimalShip.CalcNextCombatMusic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CalculateSteeringVelocity()
    // endereco: cache_pdb_25090264
    BrzPonteiro CalculateSteeringVelocity() const
    {
        return NativeCall<void*>(this, "APrimalShip.CalculateSteeringVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CalculateThrottleForce()
    // endereco: cache_pdb_25090264
    BrzPonteiro CalculateThrottleForce() const
    {
        return NativeCall<void*>(this, "APrimalShip.CalculateThrottleForce()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoAnchoringInternal()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=641+grafo=9/9]]
    BrzPonteiro CanDoAnchoringInternal() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoAnchoringInternal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoAnchoring_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanDoAnchoring_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoAnchoring_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoDocking()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanDoDocking() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoDocking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoDockingInternal()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanDoDockingInternal() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoDockingInternal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoDocking_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanDoDocking_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoDocking_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanFireCannons()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=159]]
    BrzPonteiro CanFireCannons() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanFireCannons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanPlayerEditShipSkills(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=44]]
    BrzPonteiro CanPlayerEditShipSkills(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.CanPlayerEditShipSkills(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CannonDealtDirectDamage(AActor*,float,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CannonDealtDirectDamage(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalShip.CannonDealtDirectDamage(AActor*,float,FHitResult&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ChangeActorTeam(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ChangeActorTeam(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalShip.ChangeActorTeam(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ClientMultiUse(APlayerController*,int,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalShip.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ClientSetAttachedSeat_Implementation(APrimalStructureSeating_DriverSeat*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientSetAttachedSeat_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.ClientSetAttachedSeat_Implementation(APrimalStructureSeating_DriverSeat*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CustomReceiveHarvestResources(FItemNetInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CustomReceiveHarvestResources(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.CustomReceiveHarvestResources(FItemNetInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.DelayedFullyAnchor()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=371+grafo=6/6]]
    BrzPonteiro DelayedFullyAnchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.DelayedFullyAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Destroyed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "APrimalShip.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.DoImpactDamageToShipStructures(UE::Math::TVector<double>,float,float,AActor*)
    // endereco: thunk
    BrzPonteiro DoImpactDamageToShipStructures(void* a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, float, float, void*>(this, "APrimalShip.DoImpactDamageToShipStructures(UE::Math::TVector<double>,float,float,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.DoesShipHaveBasedPawns(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro DoesShipHaveBasedPawns(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.DoesShipHaveBasedPawns(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.EndPlay(EEndPlayReason::Type)
    // endereco: cache_pdb_25090264
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalShip.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ForceDocked(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceDocked(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalShip.ForceDocked(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ForceMoveShip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceMoveShip() const
    {
        return NativeCall<void*>(this, "APrimalShip.ForceMoveShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ForceMoveShipBackwards(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceMoveShipBackwards(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.ForceMoveShipBackwards(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ForceUnanchored()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    BrzPonteiro ForceUnanchored() const
    {
        return NativeCall<void*>(this, "APrimalShip.ForceUnanchored()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ForceUpdateBasedPawnsMovements()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceUpdateBasedPawnsMovements() const
    {
        return NativeCall<void*>(this, "APrimalShip.ForceUpdateBasedPawnsMovements()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAcceleratedScalar(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetAcceleratedScalar(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.GetAcceleratedScalar(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAllMeshesWithLadderSockets()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetAllMeshesWithLadderSockets() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAllMeshesWithLadderSockets()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAnchorAttachMesh()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAnchorAttachMesh() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAnchorAttachMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAnchorSetPercent()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAnchorSetPercent() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAnchorSetPercent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAttachedMeshes()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetAttachedMeshes() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAttachedMeshes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAutoPilotHeading()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAutoPilotHeading() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAutoPilotHeading()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAverageMannedSailOpenRatio()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAverageMannedSailOpenRatio() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAverageMannedSailOpenRatio()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCannonFireIntervalMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCannonFireIntervalMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetCannonFireIntervalMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCannonForCharacter(AShooterCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCannonForCharacter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetCannonForCharacter(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCannonballSpeedMultiplier()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=296+grafo=5/5]]
    BrzPonteiro GetCannonballSpeedMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetCannonballSpeedMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCannonsCooldownForSide(EShipFiringSide,float&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCannonsCooldownForSide(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalShip.GetCannonsCooldownForSide(EShipFiringSide,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCurrentBuffForShipSkill(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentBuffForShipSkill(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetCurrentBuffForShipSkill(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCurrentShipSkillCooldownDuration(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentShipSkillCooldownDuration(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetCurrentShipSkillCooldownDuration(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetDamageMultiplierForTarget(AActor*,EShipTargetCategory)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDamageMultiplierForTarget(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalShip.GetDamageMultiplierForTarget(AActor*,EShipTargetCategory)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetDefaultShipSkillCooldownDuration(FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultShipSkillCooldownDuration(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "APrimalShip.GetDefaultShipSkillCooldownDuration(FName,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDescriptiveName() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetDescriptiveName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetDriver()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=46]]
    BrzPonteiro GetDriver() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetDriver()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetEntryDescription()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetEntryDescription() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetEntryDescription()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetEntryIcon(UObject*,bool)
    // endereco: cache_pdb_25090264
    UTexture2D* GetEntryIcon(void* a0, bool a1) const
    {
        return NativeCall<UTexture2D*, void*, bool>(this, "APrimalShip.GetEntryIcon(UObject*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetGroundDistanceFromHullBottom(bool&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetGroundDistanceFromHullBottom(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetGroundDistanceFromHullBottom(bool&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetInterpolatedVelocity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInterpolatedVelocity() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetInterpolatedVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetLastRowTime()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLastRowTime() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetLastRowTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMainDriverSeat()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMainDriverSeat() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMainDriverSeat()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetManeuverabilityMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetManeuverabilityMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetManeuverabilityMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMannedSailsCount()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetMannedSailsCount() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMannedSailsCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMaxMovementWeight()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMaxMovementWeight() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMaxMovementWeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMaxShipSpeed(bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxShipSpeed(bool a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, bool, bool, bool, bool>(this, "APrimalShip.GetMaxShipSpeed(bool,bool,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMaxThrottleForce()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxThrottleForce() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMaxThrottleForce()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMaximumAnchorLength()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=443+grafo=6/6]]
    BrzPonteiro GetMaximumAnchorLength() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMaximumAnchorLength()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetNextCombatMusicTrack(APrimalCharacter*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetNextCombatMusicTrack(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalShip.GetNextCombatMusicTrack(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetNextCombatMusic_Implementation(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextCombatMusic_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalShip.GetNextCombatMusic_Implementation(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetOverboardDropLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOverboardDropLocation() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetOverboardDropLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetParticleSystemClampingVelocity()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    BrzPonteiro GetParticleSystemClampingVelocity() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetParticleSystemClampingVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderCurrentBuffClassForSkill_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderCurrentBuffClassForSkill_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderCurrentBuffClassForSkill_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderCurrentSkillCooldownDuration_Implementation(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetProviderCurrentSkillCooldownDuration_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderCurrentSkillCooldownDuration_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderDefaultSkillCooldownDuration_Implementation(FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderDefaultSkillCooldownDuration_Implementation(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "APrimalShip.GetProviderDefaultSkillCooldownDuration_Implementation(FName,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderFreeSkillPoints_Implementation(AShooterPlayerController*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderFreeSkillPoints_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "APrimalShip.GetProviderFreeSkillPoints_Implementation(AShooterPlayerController*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillBuffTargets_Implementation(ESkillBuffAplicationType,AShooterPlayerCo
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    BrzPonteiro GetProviderSkillBuffTargets_Implementation(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalShip.GetProviderSkillBuffTargets_Implementation(ESkillBuffAplicationType,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillCooldownTimeRemaining_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProviderSkillCooldownTimeRemaining_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillCooldownTimeRemaining_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillCooldown_Implementation(FName,FSkillCooldown&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderSkillCooldown_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalShip.GetProviderSkillCooldown_Implementation(FName,FSkillCooldown&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillData(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderSkillData(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillData(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillModifier_Implementation(FName,FName,float&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderSkillModifier_Implementation(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*>(this, "APrimalShip.GetProviderSkillModifier_Implementation(FName,FName,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillPointsSpent_Implementation(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderSkillPointsSpent_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillPointsSpent_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillRank_Implementation(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderSkillRank_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillRank_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillTreeForSkillData_Implementation(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderSkillTreeForSkillData_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillTreeForSkillData_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName,TSizedDefaultAllocator
    // endereco: cache_pdb_25090264
    BrzPonteiro GetProviderUnlockedSkillsAndRanks_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRammingDamageMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRammingDamageMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRammingDamageMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRider()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetRider() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRider()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRotationRateWithAcceleration11(float,float,float,float,float,float)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetRotationRateWithAcceleration11(float a0, float a1, float a2, float a3, float a4, float a5) const
    {
        return NativeCall<void*, float, float, float, float, float, float>(this, "APrimalShip.GetRotationRateWithAcceleration11(float,float,float,float,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRowingInterval()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetRowingInterval() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRowingInterval()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRudderAngle()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetRudderAngle() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRudderAngle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSailRotation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSailRotation() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSailRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSailThrottleForce(UPrimalShipSailComponent*,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSailThrottleForce(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalShip.GetSailThrottleForce(UPrimalShipSailComponent*,float&,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSailTurningInterpSpeed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSailTurningInterpSpeed() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSailTurningInterpSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSailUnitPercentage()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSailUnitPercentage() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSailUnitPercentage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSailUnitsMax()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSailUnitsMax() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSailUnitsMax()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipAccelerationMultiplier(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipAccelerationMultiplier(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.GetShipAccelerationMultiplier(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipContainingPoint(UWorld*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipContainingPoint(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.GetShipContainingPoint(UWorld*,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipFlatMovementSpeedBonus(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipFlatMovementSpeedBonus(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.GetShipFlatMovementSpeedBonus(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipForwardVector()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipForwardVector() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipForwardVector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipHeadwindPenaltyMultiplier()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=408+grafo=5/5]]
    BrzPonteiro GetShipHeadwindPenaltyMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipHeadwindPenaltyMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipMovementForceMult()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipMovementForceMult() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipMovementForceMult()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipMovementSpeedMultiplier(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipMovementSpeedMultiplier(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.GetShipMovementSpeedMultiplier(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipRightVector()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=89]]
    BrzPonteiro GetShipRightVector() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipRightVector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipRotation(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipRotation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.GetShipRotation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipRowingInput()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetShipRowingInput() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipRowingInput()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipRowingSeatCount()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetShipRowingSeatCount() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipRowingSeatCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSailCount()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetShipSailCount() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipSailCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillBuffTargets(ESkillBuffAplicationType,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipSkillBuffTargets(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalShip.GetShipSkillBuffTargets(ESkillBuffAplicationType,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillCooldownTimeRemaining(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipSkillCooldownTimeRemaining(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetShipSkillCooldownTimeRemaining(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillData(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetShipSkillData(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetShipSkillData(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillModifier(FName,FName,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipSkillModifier(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*>(this, "APrimalShip.GetShipSkillModifier(FName,FName,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillPointsSpent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipSkillPointsSpent() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipSkillPointsSpent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillRank(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetShipSkillRank(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetShipSkillRank(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSkillTreeTag()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipSkillTreeTag() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipSkillTreeTag()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipStructures()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetShipStructures() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipStructures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipTargetThrottleRatio()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetShipTargetThrottleRatio() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipTargetThrottleRatio()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipVelocity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipVelocity() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipVelocityAtLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipVelocityAtLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetShipVelocityAtLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSinkTargetPitch()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSinkTargetPitch() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSinkTargetPitch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSteeringForce()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSteeringForce() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSteeringForce()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetStructureDemolishTime()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetStructureDemolishTime() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetStructureDemolishTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetTargetCategory(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetCategory(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetTargetCategory(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetTargetingDesirability(ITargetableInterface*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetTargetingDesirability(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetTargetingDesirability(ITargetableInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetThrottleForceMultiplier()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetThrottleForceMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetThrottleForceMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetThrottleRatioInterpSpeed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    BrzPonteiro GetThrottleRatioInterpSpeed() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetThrottleRatioInterpSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetTimeSinceLastUsedShipSkill(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTimeSinceLastUsedShipSkill(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetTimeSinceLastUsedShipSkill(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetTimeToResetRudderAngle(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=138]]
    BrzPonteiro GetTimeToResetRudderAngle(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.GetTimeToResetRudderAngle(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetTotalSailUnits()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTotalSailUnits() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetTotalSailUnits()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GiveHotbarSkills(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GiveHotbarSkills(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GiveHotbarSkills(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GiveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GiveProviderHotbarReplacerBuff_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GiveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HandleAnchorMovement(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=22]]
    BrzPonteiro HandleAnchorMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.HandleAnchorMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HandleStowedAnchor()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=147]]
    BrzPonteiro HandleStowedAnchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.HandleStowedAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HasOpenSails()
    // endereco: cache_pdb_25090264
    BrzPonteiro HasOpenSails() const
    {
        return NativeCall<void*>(this, "APrimalShip.HasOpenSails()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HasOpenUnMannedSails()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasOpenUnMannedSails() const
    {
        return NativeCall<void*>(this, "APrimalShip.HasOpenUnMannedSails()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Internal_FullyChangeStateTo(bool,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Internal_FullyChangeStateTo(bool a0, bool a1, int a2) const
    {
        return NativeCall<void*, bool, bool, int>(this, "APrimalShip.Internal_FullyChangeStateTo(bool,bool,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Internal_FullyDock(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)
    // endereco: thunk
    BrzPonteiro Internal_FullyDock(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalShip.Internal_FullyDock(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Internal_FullyUnanchor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Internal_FullyUnanchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.Internal_FullyUnanchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.InterpThrottleAndInputs(float,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    BrzPonteiro InterpThrottleAndInputs(float a0, float a1) const
    {
        return NativeCall<void*, float, float>(this, "APrimalShip.InterpThrottleAndInputs(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsCharacterInCannon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=107]]
    BrzPonteiro IsCharacterInCannon() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsCharacterInCannon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsCheatWind()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsCheatWind() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsCheatWind()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsDocked()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsDocked() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsDocked()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsInCombat(APrimalCharacter*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInCombat(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.IsInCombat(APrimalCharacter*&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsInOceanVolume(APhysicsVolume**)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsInOceanVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.IsInOceanVolume(APhysicsVolume**)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsLargeRaft()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsLargeRaft() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsLargeRaft()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsPointInsideThisRaft(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=133]]
    BrzPonteiro IsPointInsideThisRaft(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.IsPointInsideThisRaft(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsProviderSkillReadyToUse_Implementation(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsProviderSkillReadyToUse_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.IsProviderSkillReadyToUse_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsProviderSkillUnlocked_Implementation(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsProviderSkillUnlocked_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.IsProviderSkillUnlocked_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsShipBuiltInStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsShipBuiltInStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.IsShipBuiltInStructure(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsShipCheckingForRowing()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsShipCheckingForRowing() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsShipCheckingForRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsShipSkillReadyToUse(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsShipSkillReadyToUse(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.IsShipSkillReadyToUse(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsShipSkillUnlocked(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsShipSkillUnlocked(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.IsShipSkillUnlocked(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.KillThrottleAndInputs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro KillThrottleAndInputs() const
    {
        return NativeCall<void*>(this, "APrimalShip.KillThrottleAndInputs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.MultiToggleTorches(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MultiToggleTorches(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.MultiToggleTorches(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.MultiToggleTorches_Implementation(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro MultiToggleTorches_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.MultiToggleTorches_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_FullyAnchor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Multi_FullyAnchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.Multi_FullyAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_FullyAnchor_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro Multi_FullyAnchor_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalShip.Multi_FullyAnchor_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_FullyUnanchor()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    BrzPonteiro Multi_FullyUnanchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.Multi_FullyUnanchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_OnShipRow()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Multi_OnShipRow() const
    {
        return NativeCall<void*>(this, "APrimalShip.Multi_OnShipRow()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_SpawnShipRammingVFX(FHitResult&,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Multi_SpawnShipRammingVFX(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalShip.Multi_SpawnShipRammingVFX(FHitResult&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_SpawnShipRammingVFX_Implementation(FHitResult&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Multi_SpawnShipRammingVFX_Implementation(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalShip.Multi_SpawnShipRammingVFX_Implementation(FHitResult&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.MulticastAquiredCargo_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastAquiredCargo_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.MulticastAquiredCargo_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.MulticastUpdateWheelLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastUpdateWheelLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.MulticastUpdateWheelLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.MulticastUpdateWheelLocation_Implementation(UE::Math::TVector<double>)
    // endereco: cache_pdb_25090264
    BrzPonteiro MulticastUpdateWheelLocation_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.MulticastUpdateWheelLocation_Implementation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.NetClientInterpolateTo_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<d
    // endereco: cache_pdb_25090264
    BrzPonteiro NetClientInterpolateTo_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.NetClientInterpolateTo_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.NetForceSyncTransform_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<do
    // endereco: cache_pdb_25090264
    BrzPonteiro NetForceSyncTransform_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.NetForceSyncTransform_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnAddCriticalShipStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAddCriticalShipStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.OnAddCriticalShipStructure(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnConstruction(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnConstruction(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.OnConstruction(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnInventoryItemRemoved(UPrimalInventoryComponent*,UPrimalItem*,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnInventoryItemRemoved(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalShip.OnInventoryItemRemoved(UPrimalInventoryComponent*,UPrimalItem*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnMusicOneOffFinished(FMusicTrackEntry)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnMusicOneOffFinished(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.OnMusicOneOffFinished(FMusicTrackEntry)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnRemoveCriticalShipStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRemoveCriticalShipStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.OnRemoveCriticalShipStructure(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnRep_IsAnchoring()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnRep_IsAnchoring() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnRep_IsAnchoring()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnRep_IsInWetDock()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_IsInWetDock() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnRep_IsInWetDock()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnRep_ReplicatedAnchorState()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnRep_ReplicatedAnchorState() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnRep_ReplicatedAnchorState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnShipRowingStart()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnShipRowingStart() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnShipRowingStart()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnShipRowingStop()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnShipRowingStop() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnShipRowingStop()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnStartSinking()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnStartSinking() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnStartSinking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnStructurePlacedOnShip(APrimalStructure*)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnStructurePlacedOnShip(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.OnStructurePlacedOnShip(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OverrideBasedCharacterTargetingDesirability(float,APrimalCharacter*,APrimalCharacter
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideBasedCharacterTargetingDesirability(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "APrimalShip.OverrideBasedCharacterTargetingDesirability(float,APrimalCharacter*,APrimalCharacter*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OverrideCannonAmmoConfig(int,FCannonAmmoConfig&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideCannonAmmoConfig(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalShip.OverrideCannonAmmoConfig(int,FCannonAmmoConfig&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalShip.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PostInitializeComponents()
    // endereco: cache_pdb_25090264
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalShip.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PreReplication(IRepChangedPropertyTracker&)
    // endereco: cache_pdb_25090264
    BrzPonteiro PreReplication(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.PreReplication(IRepChangedPropertyTracker&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalShip.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ProcessEditText(void* a0, FString* a1, bool a2) const
    { return ProcessEditText(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ProviderSkillAddedToSlot_Implementation(FName,int,AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=57]]
    BrzPonteiro ProviderSkillAddedToSlot_Implementation(unsigned long long a0, int a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, int, void*>(this, "APrimalShip.ProviderSkillAddedToSlot_Implementation(FName,int,AShooterPlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RaftStructurePreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RaftStructurePreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.RaftStructurePreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshColorization(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshColorization(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.RefreshColorization(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshColorizationForMesh(TArray<FLinearColor,TSizedDefaultAllocator<32>>&,UMeshCom
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshColorizationForMesh(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.RefreshColorizationForMesh(TArray<FLinearColor,TSizedDefaultAllocator<32>>&,UMeshComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshColorizationHelper(UMeshComponent*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=6/6]]
    BrzPonteiro RefreshColorizationHelper(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.RefreshColorizationHelper(UMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshLongRangeStasis()
    // endereco: cache_pdb_25090264
    BrzPonteiro RefreshLongRangeStasis() const
    {
        return NativeCall<void*>(this, "APrimalShip.RefreshLongRangeStasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshPassiveSkillBuffs(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshPassiveSkillBuffs(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.RefreshPassiveSkillBuffs(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshSaddledStructureSceneState()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=25]]
    BrzPonteiro RefreshSaddledStructureSceneState() const
    {
        return NativeCall<void*>(this, "APrimalShip.RefreshSaddledStructureSceneState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshVesselDynamicsState()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=32]]
    BrzPonteiro RefreshVesselDynamicsState() const
    {
        return NativeCall<void*>(this, "APrimalShip.RefreshVesselDynamicsState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RemoveHotbarSkills(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveHotbarSkills(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.RemoveHotbarSkills(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RemoveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemoveProviderHotbarReplacerBuff_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.RemoveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RemoveStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.RemoveStructure(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ResetSailingInputs()
    // endereco: cache_pdb_25090264
    BrzPonteiro ResetSailingInputs() const
    {
        return NativeCall<void*>(this, "APrimalShip.ResetSailingInputs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestUseItemWithActor(void* a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, int, bool>(this, "APrimalShip.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetCharacterMeshesMaterialScalarParamValue(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCharacterMeshesMaterialScalarParamValue(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalShip.SetCharacterMeshesMaterialScalarParamValue(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetCharacterStatusTameable(bool,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=121]]
    BrzPonteiro SetCharacterStatusTameable(bool a0, bool a1, bool a2) const
    {
        return NativeCall<void*, bool, bool, bool>(this, "APrimalShip.SetCharacterStatusTameable(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetDeath(bool,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetDeath(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "APrimalShip.SetDeath(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetHullMesh(UStaticMeshComponent*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetHullMesh(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.SetHullMesh(UStaticMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetSaddleContainerInventoryViewers(AShooterPlayerController*,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetSaddleContainerInventoryViewers(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalShip.SetSaddleContainerInventoryViewers(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetShipDriver(AShooterCharacter*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetShipDriver(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.SetShipDriver(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetSteeringInput(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetSteeringInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SetSteeringInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetThrottleForceMultiplier(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetThrottleForceMultiplier(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SetThrottleForceMultiplier(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetThrottleInput(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetThrottleInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SetThrottleInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetThrottleRatio(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetThrottleRatio(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "APrimalShip.SetThrottleRatio(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetTurningSailsInput(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetTurningSailsInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SetTurningSailsInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetupColorization()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupColorization() const
    {
        return NativeCall<void*>(this, "APrimalShip.SetupColorization()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ShipRow()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShipRow() const
    {
        return NativeCall<void*>(this, "APrimalShip.ShipRow()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ShouldApplyReplicatedVesselState()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=75]]
    BrzPonteiro ShouldApplyReplicatedVesselState() const
    {
        return NativeCall<void*>(this, "APrimalShip.ShouldApplyReplicatedVesselState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SimulatePhysics(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SimulatePhysics(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SimulatePhysics(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SpawnAnchor()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=554+grafo=5/6]]
    BrzPonteiro SpawnAnchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.SpawnAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SpawnCannonProjectile(UWorld*,UE::Math::TTransform<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnCannonProjectile(void* a0, void* a1, void* a2, int a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, void*>(this, "APrimalShip.SpawnCannonProjectile(UWorld*,UE::Math::TTransform<double>&,UE::Math::TVector<double>&,int,APrimalShip*,AShooterCharacter*)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SpawnInitialStructures()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SpawnInitialStructures() const
    {
        return NativeCall<void*>(this, "APrimalShip.SpawnInitialStructures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.StartAnchoring()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartAnchoring() const
    {
        return NativeCall<void*>(this, "APrimalShip.StartAnchoring()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.StaticRegisterNativesAPrimalShip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticRegisterNativesAPrimalShip() const
    {
        return NativeCall<void*>(this, "APrimalShip.StaticRegisterNativesAPrimalShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SyncRowingVarsToNPCs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SyncRowingVarsToNPCs() const
    {
        return NativeCall<void*>(this, "APrimalShip.SyncRowingVarsToNPCs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalShip.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TameDino(AShooterPlayerController*,bool,int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TameDino(void* a0, bool a1, int a2, bool a3, bool a4, bool a5) const
    {
        return NativeCall<void*, void*, bool, int, bool, bool, bool>(this, "APrimalShip.TameDino(AShooterPlayerController*,bool,int,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TamedProcessOrder(void* a0, int a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, int, bool, void*>(this, "APrimalShip.TamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TeleportSucceeded(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TeleportSucceeded(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "APrimalShip.TeleportSucceeded(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TickCriticalShipStructures(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickCriticalShipStructures(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.TickCriticalShipStructures(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TickDeath(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickDeath(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.TickDeath(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TickMusic()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickMusic() const
    {
        return NativeCall<void*>(this, "APrimalShip.TickMusic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TickRowing()
    // endereco: cache_pdb_25090264
    BrzPonteiro TickRowing() const
    {
        return NativeCall<void*>(this, "APrimalShip.TickRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TryActivateShipSkill(FName,AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryActivateShipSkill(unsigned long long a0, void* a1, bool a2) const
    {
        return NativeCall<void*, unsigned long long, void*, bool>(this, "APrimalShip.TryActivateShipSkill(FName,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalShip.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TryToggleLadders(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryToggleLadders(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.TryToggleLadders(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TryUnlockProviderSkill_Implementation(FName,AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro TryUnlockProviderSkill_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalShip.TryUnlockProviderSkill_Implementation(FName,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.TryUnlockShipSkill(FName,AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryUnlockShipSkill(unsigned long long a0, void* a1, bool a2) const
    {
        return NativeCall<void*, unsigned long long, void*, bool>(this, "APrimalShip.TryUnlockShipSkill(FName,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UnclaimShip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnclaimShip() const
    {
        return NativeCall<void*>(this, "APrimalShip.UnclaimShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UnlockAllShipSkills(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro UnlockAllShipSkills(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.UnlockAllShipSkills(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UnweldAllStructuresFromShipHull()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=40]]
    BrzPonteiro UnweldAllStructuresFromShipHull() const
    {
        return NativeCall<void*>(this, "APrimalShip.UnweldAllStructuresFromShipHull()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateDockedShipVisibility()
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateDockedShipVisibility() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateDockedShipVisibility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateFacingVisibility()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateFacingVisibility() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateFacingVisibility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateFinalAnchorLengthState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    BrzPonteiro UpdateFinalAnchorLengthState() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateFinalAnchorLengthState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateLoopingSound(FShipSoundInfo&,bool,UMeshComponent*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateLoopingSound(void* a0, bool a1, void* a2, unsigned long long a3) const
    {
        return NativeCall<void*, void*, bool, void*, unsigned long long>(this, "APrimalShip.UpdateLoopingSound(FShipSoundInfo&,bool,UMeshComponent*,FName)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateNameplateText()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateNameplateText() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateNameplateText()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateNetworkAndStasisRangeMultiplier()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=22]]
    BrzPonteiro UpdateNetworkAndStasisRangeMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateNetworkAndStasisRangeMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateRaftRelevant()
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateRaftRelevant() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateRaftRelevant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateRowingVars()
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateRowingVars() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateRowingVars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateSailingVars()
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateSailingVars() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateSailingVars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateShouldTickRowing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateShouldTickRowing() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateShouldTickRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateTorches()
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateTorches() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateTorches()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.VesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResul
    // endereco: cache_pdb_25090264
    BrzPonteiro VesselDynamicsOnHit(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalShip.VesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.WantsLongRangeStasis()
    // endereco: cache_pdb_25090264
    BrzPonteiro WantsLongRangeStasis() const
    {
        return NativeCall<void*>(this, "APrimalShip.WantsLongRangeStasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.WantsVesselPhysics()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WantsVesselPhysics() const
    {
        return NativeCall<void*>(this, "APrimalShip.WantsVesselPhysics()");
    }

    float& AIAggroNotifyNeighborsClassesRangeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AIAggroNotifyNeighborsClassesRangeScale"); }
    float& AICombatRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AICombatRotationRateModifier"); }
    BrzCampoPonteiro AIControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AIControllerClass")); }
    float& AIRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AIRangeMultiplier"); }
    BrzCampoPonteiro ASACameraConfigClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ASACameraConfigClass")); }
    int& AbsoluteBaseLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.AbsoluteBaseLevel"); }
    float& AccurateOceanVolumeOverlapsCapsuleHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AccurateOceanVolumeOverlapsCapsuleHeightMultiplier"); }
    BrzCampoPonteiro ActiveShipDyingNiagaraCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ActiveShipDyingNiagaraComp")); }
    BrzCampoPonteiro ActiveShipSinkingNiagaraCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ActiveShipSinkingNiagaraComp")); }
    BrzCampoPonteiro ActiveSkillsOnHotbarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ActiveSkillsOnHotbar")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShip.ActorUsingQuickAction"); }
    float& AddForwardVelocityOnJumpField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AddForwardVelocityOnJump"); }
    float& AddForwardVelocityOnJumpMaxSpeedMultiplierClampField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AddForwardVelocityOnJumpMaxSpeedMultiplierClamp"); }
    float& AdditionalTamingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AdditionalTamingSpeedMultiplier"); }
    FieldArray<unsigned char> AllowPaintingColorRegionsField() const
    { return { (void*)this, "APrimalShip.AllowPaintingColorRegions" }; }
    float& AllowRidingMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AllowRidingMaxDistance"); }
    BitFieldValue<bool, unsigned __int32> AllowWildBabyTaming()
    { return { (void*)this, "AllowWildBabyTaming" }; }
    BrzCampoPonteiro AnchorActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorActor")); }
    BrzCampoPonteiro AnchorActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorActorClass")); }
    double& AnchorFullySetTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.AnchorFullySetTime"); }
    BrzCampoPonteiro AnchorIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorIcon")); }
    float& AnchorLowerSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorLowerSpeed"); }
    BrzCampoPonteiro AnchorLoweringIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorLoweringIcon")); }
    float& AnchorMaximumDistanceFromShoreField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorMaximumDistanceFromShore"); }
    float& AnchorMaximumTraceDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorMaximumTraceDepth"); }
    float& AnchorMinimumWaveDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorMinimumWaveDamping"); }
    float& AnchorRaiseDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorRaiseDuration"); }
    float& AnchorRaiseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorRaiseSpeed"); }
    BrzCampoPonteiro AnchorRaisingIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorRaisingIcon")); }
    BrzCampoPonteiro AnchorReleaseLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorReleaseLocation")); }
    float& AnchorSetDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorSetDelay"); }
    BrzCampoPonteiro AnchorSoundComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorSoundComponent")); }
    BrzCampoPonteiro AnchorSound_MovingDownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorSound_MovingDown")); }
    BrzCampoPonteiro AnchorSound_MovingDown_BreakWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorSound_MovingDown_BreakWater")); }
    BrzCampoPonteiro AnchorSound_MovingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorSound_MovingUp")); }
    BrzCampoPonteiro AnchorSound_MovingUp_BreakWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorSound_MovingUp_BreakWater")); }
    BrzCampoPonteiro AnchorSound_MovingUp_FinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchorSound_MovingUp_Finish")); }
    float& AnchoredAutoDestroyTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchoredAutoDestroyTime"); }
    BrzCampoPonteiro AnchoredIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnchoredIcon")); }
    float& AnchoredNetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnchoredNetworkAndStasisRangeMultiplier"); }
    float& AnimRootMotionTranslationScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AnimRootMotionTranslationScale"); }
    BrzCampoPonteiro AnimSharingStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AnimSharingState")); }
    TArray<void*>& AnimationsPreventInputField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.AnimationsPreventInput"); }
    float& ArrivalDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ArrivalDistance"); }
    BrzCampoPonteiro AttachedCaptiansOrderSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachedCaptiansOrderSeats")); }
    BrzCampoPonteiro AttachedDeckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachedDeck")); }
    BrzCampoPonteiro AttachedDriverSeatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachedDriverSeat")); }
    BrzCampoPonteiro AttachedMiscCriticalStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachedMiscCriticalStructures")); }
    BrzCampoPonteiro AttachedRowingSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachedRowingSeats")); }
    BrzCampoPonteiro AttachedSailsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachedSails")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AttachmentReplication")); }
    TArray<void*>& AttackAnimationWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.AttackAnimationWeights"); }
    TArray<UAnimMontage*>& AttackAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalShip.AttackAnimations"); }
    unsigned char& AttackIndexOfPlayedAnimationField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.AttackIndexOfPlayedAnimation"); }
    TArray<void*>& AttackInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.AttackInfos"); }
    AShooterPlayerController*& AttackMyTargetForPlayerControllerField() const
    { return *GetNativePointerField<AShooterPlayerController**>(this, "APrimalShip.AttackMyTargetForPlayerController"); }
    float& AttackOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AttackOffset"); }
    float& AttackOnLaunchMaximumTargetDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AttackOnLaunchMaximumTargetDistance"); }
    double& AutoAnchorCountdownStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.AutoAnchorCountdownStartTime"); }
    float& AutoAnchorDelaySecField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoAnchorDelaySec"); }
    float& AutoPilot_AllowSnapToHeadingBelowAngularVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_AllowSnapToHeadingBelowAngularVelocity"); }
    float& AutoPilot_AngularVelocityMaxInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_AngularVelocityMaxInterpSpeed"); }
    float& AutoPilot_ForceMinAngularVelocity_MAXField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_ForceMinAngularVelocity_MAX"); }
    float& AutoPilot_ForceMinAngularVelocity_MINField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_ForceMinAngularVelocity_MIN"); }
    float& AutoPilot_TargetHeadingErrorRange_ResumeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_TargetHeadingErrorRange_Resume"); }
    float& AutoPilot_TargetHeadingErrorRange_SlowField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_TargetHeadingErrorRange_Slow"); }
    float& AutoPilot_TargetHeadingErrorRange_StopField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_TargetHeadingErrorRange_Stop"); }
    FieldArray<char> AutoPossessAIField() const
    { return { (void*)this, "APrimalShip.AutoPossessAI" }; }
    unsigned char& AutoPossessPlayerField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.AutoPossessPlayer"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.AutoReceiveInput"); }
    BitFieldValue<bool, unsigned __int32> AutoStopReplicationWhenSleeping()
    { return { (void*)this, "AutoStopReplicationWhenSleeping" }; }
    BrzCampoPonteiro AutoThrottleIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AutoThrottleIcon")); }
    float& BPTimerNonDedicatedMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BPTimerNonDedicatedMax"); }
    float& BPTimerNonDedicatedMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BPTimerNonDedicatedMin"); }
    float& BPTimerServerMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BPTimerServerMax"); }
    float& BPTimerServerMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BPTimerServerMin"); }
    float& BabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyAge"); }
    float& BabyAgeSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyAgeSpeed"); }
    BrzCampoPonteiro BabyCuddleFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BabyCuddleFood")); }
    float& BabyCuddleGracePeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyCuddleGracePeriod"); }
    float& BabyCuddleLoseImpringQualityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyCuddleLoseImpringQualityPerSecond"); }
    unsigned char& BabyCuddleTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.BabyCuddleType"); }
    BrzCampoPonteiro BabyCuddleWalkStartingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BabyCuddleWalkStartingLocation")); }
    UAnimMontage*& BabyCuddledAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.BabyCuddledAnimation"); }
    float& BabyGestationProgressField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyGestationProgress"); }
    double& BabyNextCuddleTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.BabyNextCuddleTime"); }
    float& BabyPitchMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyPitchMultiplier"); }
    float& BabyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyScale"); }
    float& BabySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabySpeedMultiplier"); }
    float& BabyVolumeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BabyVolumeMultiplier"); }
    float& BackGroupMaxYCoordinateField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BackGroupMaxYCoordinate"); }
    BrzCampoPonteiro BaseDinoScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BaseDinoScale")); }
    float& BaseEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BaseEyeHeight"); }
    float& BaseMovementWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BaseMovementWeight"); }
    BrzCampoPonteiro BaseRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BaseRotationOffset")); }
    float& BaseTargetingDesirabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BaseTargetingDesirability"); }
    BrzCampoPonteiro BaseTranslationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BaseTranslationOffset")); }
    BrzCampoPonteiro BasedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BasedMovement")); }
    float& BlinkDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BlinkDuration"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.BlueprintCreatedComponents"); }
    TWeakObjectPtr<void>& BoardedUnderWaterCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.BoardedUnderWaterCharacter"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.BoneDamageAdjusters"); }
    BrzCampoPonteiro BoneIndexArrayForDataChannelVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BoneIndexArrayForDataChannelVFX")); }
    BrzCampoPonteiro BoneScaleArrayForDataChannelVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BoneScaleArrayForDataChannelVFX")); }
    TArray<void*>& BonesToIngoreWhileDraggedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.BonesToIngoreWhileDragged"); }
    float& BreakFleeHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BreakFleeHealthPercentage"); }
    BrzCampoPonteiro BuffGivenToBasedCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BuffGivenToBasedCharacters")); }
    BrzCampoPonteiro BuffToGiveWhenOpeningSkillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BuffToGiveWhenOpeningSkills")); }
    BrzCampoPonteiro BuffToGiveWhenPilotingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.BuffToGiveWhenPiloting")); }
    float& BuffedDamageMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BuffedDamageMult"); }
    float& BuffedResistanceMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.BuffedResistanceMult"); }
    BrzCampoPonteiro Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReductionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction")); }
    BrzCampoPonteiro Cached_GeneTraitWeightReductionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.Cached_GeneTraitWeightReductions")); }
    FName& CameraProfileIdOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.CameraProfileIdOverride"); }
    int& CameraZoomLevelToIgnoreDeckField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.CameraZoomLevelToIgnoreDeck"); }
    BitFieldValue<bool, unsigned __int32> CanElevate()
    { return { (void*)this, "CanElevate" }; }
    BrzCampoPonteiro CannonControlField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CannonControl")); }
    BrzCampoPonteiro CannonControlIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CannonControlIcon")); }
    TObjectPtr<UCapsuleComponent>& CapsuleComponentField() const
    { return *GetNativePointerField<TObjectPtr<UCapsuleComponent>*>(this, "APrimalShip.CapsuleComponent"); }
    BrzCampoPonteiro CaptainDoorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CaptainDoorClass")); }
    float& CargoContainerLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CargoContainerLifetime"); }
    float& CargoContainerTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CargoContainerTimer"); }
    float& CarriedAsBabyPassengerSizeLimitOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CarriedAsBabyPassengerSizeLimitOverride"); }
    TWeakObjectPtr<void>& CarriedCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.CarriedCharacter"); }
    TWeakObjectPtr<void>& CarryingDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.CarryingDino"); }
    float& ChanceToLookAtNearbyDyingCharacterField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ChanceToLookAtNearbyDyingCharacter"); }
    float& ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInsteadField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInstead"); }
    float& CharacterLocalControlZInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CharacterLocalControlZInterpSpeed"); }
    TObjectPtr<UCharacterMovementComponent>& CharacterMovementField() const
    { return *GetNativePointerField<TObjectPtr<UCharacterMovementComponent>*>(this, "APrimalShip.CharacterMovement"); }
    AActor*& CharacterSavedDynamicBaseField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShip.CharacterSavedDynamicBase"); }
    FName& CharacterSavedDynamicBaseBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.CharacterSavedDynamicBaseBoneName"); }
    BrzCampoPonteiro CharacterSavedDynamicBaseRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CharacterSavedDynamicBaseRelativeLocation")); }
    BrzCampoPonteiro CharacterSavedDynamicBaseRelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CharacterSavedDynamicBaseRelativeRotation")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.Children"); }
    TObjectPtr<UTexture2D>& ClaimIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShip.ClaimIcon"); }
    float& ClientLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientLocationInterpSpeed"); }
    float& ClientPositionErrorToleranceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientPositionErrorToleranceSquared"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WetDockOceanZOffset` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2DE0; confianca alta)
    void*& ClientRaftInterpLocField() const
    { return BrzCampoAncorado<void*>(this, "WetDockOceanZOffset", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WetDockOceanZOffset` +28, medido na build 25090264
    //  (offset absoluto medido: 0x2DF8; confianca alta)
    void*& ClientRaftInterpRotField() const
    { return BrzCampoAncorado<void*>(this, "WetDockOceanZOffset", 28); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ClientRootMotionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ClientRootMotionParams")); }
    float& ClientRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientRotationInterpSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AutoPilot_ForceMinAngularVelocity_MAX` +4, medido na build 25090264
    //  (offset absoluto medido: 0x34E8; confianca alta)
    void*& ClientStartedInterpolationAtTimeField() const
    { return BrzCampoAncorado<void*>(this, "AutoPilot_ForceMinAngularVelocity_MAX", 4); }
    float& ClientUnanchoringAllowSlowInterpolationPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringAllowSlowInterpolationPeriod"); }
    float& ClientUnanchoringInterpSpeedFastField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringInterpSpeedFast"); }
    float& ClientUnanchoringLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringLocationInterpSpeed"); }
    float& ClientUnanchoringRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringRotationInterpSpeed"); }
    float& CloneBaseElementCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CloneBaseElementCost"); }
    float& CloneElementCostPerLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CloneElementCostPerLevel"); }
    BrzCampoPonteiro ClothColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ClothColorOptions")); }
    float& CollideOntoEnemyRaftDamageImpulseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollideOntoEnemyRaftDamageImpulseMultiplier"); }
    BrzCampoPonteiro CollisionImpactDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CollisionImpactDamageType")); }
    float& CollisionImpactMaxDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMaxDamageAmount"); }
    float& CollisionImpactMaxDamageRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMaxDamageRadius"); }
    float& CollisionImpactMaxImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMaxImpulse"); }
    float& CollisionImpactMinDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinDamageAmount"); }
    float& CollisionImpactMinDamageRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinDamageRadius"); }
    float& CollisionImpactMinImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinImpulse"); }
    float& CollisionImpactMinImpulseForDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinImpulseForDamage"); }
    float& CollisionImpactMinIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinInterval"); }
    int& CollisionImpactWeightClassField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.CollisionImpactWeightClass"); }
    TWeakObjectPtr<void>& ColorOverrideBuffField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.ColorOverrideBuff"); }
    FieldArray<unsigned char> ColorSetIndicesField() const
    { return { (void*)this, "APrimalShip.ColorSetIndices" }; }
    FieldArray<FName> ColorSetNamesField() const
    { return { (void*)this, "APrimalShip.ColorSetNames" }; }
    BrzCampoPonteiro CombatIdleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CombatIdle")); }
    BrzCampoPonteiro CombatMusicTracksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CombatMusicTracks")); }
    BrzCampoPonteiro ControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ControlInputVector")); }
    TObjectPtr<AController>& ControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APrimalShip.Controller"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.ControllingMatineeActors"); }
    UStaticMeshComponent*& CopyDinoSettingsRangeMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalShip.CopyDinoSettingsRangeMesh"); }
    double& CorpseDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.CorpseDestructionTime"); }
    float& CorpseDestructionTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CorpseDestructionTimer"); }
    float& CorpseFadeAwayTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CorpseFadeAwayTime"); }
    float& CorpseLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CorpseLifespan"); }
    float& CorpseLifespanNonRelevantField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CorpseLifespanNonRelevant"); }
    BrzCampoPonteiro CreakChangeDirectionSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CreakChangeDirectionSoundInfo")); }
    BrzCampoPonteiro CreakFullSpeedSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CreakFullSpeedSoundInfo")); }
    BrzCampoPonteiro CreakIdleComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CreakIdleComponent")); }
    BrzCampoPonteiro CreakIdleSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CreakIdleSoundInfo")); }
    BrzCampoPonteiro CreakMetalComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CreakMetalComponent")); }
    BrzCampoPonteiro CreakMetalSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CreakMetalSoundInfo")); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.CreationTime"); }
    float& CrouchedEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CrouchedEyeHeight"); }
    BrzCampoPonteiro CurrentAimRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CurrentAimRot")); }
    float& CurrentAnchorLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentAnchorLength"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MastExtensionZScale` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2FB4; confianca alta)
    void*& CurrentAngularDampingField() const
    { return BrzCampoAncorado<void*>(this, "MastExtensionZScale", 4); }
    unsigned char& CurrentAttackIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.CurrentAttackIndex"); }
    BrzCampoPonteiro CurrentCombatMusicTrackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CurrentCombatMusicTrack")); }
    BrzCampoPonteiro CurrentIdleFidgetMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CurrentIdleFidgetMontage")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MastExtensionZScale` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2FB8; confianca alta)
    void*& CurrentLinearDampingField() const
    { return BrzCampoAncorado<void*>(this, "MastExtensionZScale", 8); }
    BrzCampoPonteiro CurrentManualFireLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CurrentManualFireLocations")); }
    float& CurrentMovementAnimRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentMovementAnimRate"); }
    BrzCampoPonteiro CurrentPrimalCameraConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CurrentPrimalCameraConfig")); }
    BrzCampoPonteiro CurrentRootLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CurrentRootLoc")); }
    float& CurrentSailRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentSailRotation"); }
    int& CurrentSpecificHarvestResourceIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.CurrentSpecificHarvestResourceIndex"); }
    float& CurrentStrafeMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentStrafeMagnitude"); }
    float& CurrentTameAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentTameAffinity"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.CustomData"); }
    int& CustomReplicatedDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.CustomReplicatedData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.CustomTimeDilation"); }
    UToolTipWidget*& CustomTooltipWidgetField() const
    { return *GetNativePointerField<UToolTipWidget**>(this, "APrimalShip.CustomTooltipWidget"); }
    float& DamageNotifyTeamAggroRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DamageNotifyTeamAggroRange"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DamageTypeAdjusters"); }
    BrzCampoPonteiro DataChannelForSkeletonVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DataChannelForSkeletonVFX")); }
    float& DeadBaseTargetingDesirabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeadBaseTargetingDesirability"); }
    UAnimMontage*& DeathAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.DeathAnim"); }
    BrzCampoPonteiro DeathAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DeathAnimations")); }
    float& DeathCapsuleHalfHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeathCapsuleHalfHeightMultiplier"); }
    float& DeathCapsuleRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeathCapsuleRadiusMultiplier"); }
    BrzCampoPonteiro DeathDestructionDepositInventoryClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DeathDestructionDepositInventoryClass")); }
    BrzCampoPonteiro DeathEssenceClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DeathEssenceClass")); }
    TArray<void*>& DeathGiveItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DeathGiveItemClasses"); }
    float& DeathGiveItemRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeathGiveItemRange"); }
    float& DeathHarvestFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeathHarvestFadeOutDuration"); }
    BrzCampoPonteiro DeathHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DeathHarvestingComponent")); }
    float& DeathInventoryChanceToUseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeathInventoryChanceToUse"); }
    BrzCampoPonteiro DeathInventoryTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DeathInventoryTemplates")); }
    float& DeathMeshRelativeZOffsetAsCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DeathMeshRelativeZOffsetAsCapsulePercent"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.DeathSound"); }
    BrzCampoPonteiro DecksClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DecksClass")); }
    float& DefaultAngularDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DefaultAngularDamping"); }
    TArray<void*>& DefaultBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DefaultBuffs"); }
    float& DefaultLinearDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DefaultLinearDamping"); }
    BrzCampoPonteiro DefaultNoItemTextureParamOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DefaultNoItemTextureParamOverrides")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.DescriptiveName"); }
    FString& DescriptiveNameGenderOverrideFemaleField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.DescriptiveNameGenderOverrideFemale"); }
    FString& DescriptiveNameGenderOverrideMaleField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.DescriptiveNameGenderOverrideMale"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.DesiredRepGraphBehavior"); }
    float& DestroyIfNoTargetUnderShoreDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DestroyIfNoTargetUnderShoreDistanceAmount"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +4, medido na build 25090264
    //  (offset absoluto medido: 0x3534; confianca alta)
    void*& DestroyIfNoTargetUnderShoreDistanceCounterField() const
    { return BrzCampoAncorado<void*>(this, "DestroyIfNoTargetUnderShoreDistanceTimer", 4); }
    float& DestroyIfNoTargetUnderShoreDistanceTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DestroyIfNoTargetUnderShoreDistanceTimer"); }
    double& DiedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.DiedAtTime"); }
    TArray<void*>& DinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DinoAncestors"); }
    TArray<void*>& DinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DinoAncestorsMale"); }
    TArray<void*>& DinoBaseLevelWeightEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DinoBaseLevelWeightEntries"); }
    double& DinoDownloadedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.DinoDownloadedAtTime"); }
    TArray<void*>& DinoExtraDefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.DinoExtraDefaultInventoryItems"); }
    unsigned int& DinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalShip.DinoID1"); }
    unsigned int& DinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalShip.DinoID2"); }
    UAnimMontage*& DinoLevelUpAnimationOverrideField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.DinoLevelUpAnimationOverride"); }
    FName& DinoNameTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.DinoNameTag"); }
    BrzCampoPonteiro DinoSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DinoSettingsClass")); }
    UAnimMontage*& DinoWithDinoPassengerAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.DinoWithDinoPassengerAnim"); }
    UAnimMontage*& DinoWithPassengerAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.DinoWithPassengerAnim"); }
    ANPCZoneManager*& DirectLinkNPCZoneManagerField() const
    { return *GetNativePointerField<ANPCZoneManager**>(this, "APrimalShip.DirectLinkNPCZoneManager"); }
    BitFieldValue<bool, unsigned __int32> DisableCameraShakes()
    { return { (void*)this, "DisableCameraShakes" }; }
    BrzCampoPonteiro DockIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DockIcon")); }
    FName& DragBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.DragBoneName"); }
    BrzCampoPonteiro DragOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DragOffset")); }
    FName& DragSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.DragSocketName"); }
    float& DragSocketVerticalOffsetAsCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DragSocketVerticalOffsetAsCapsulePercent"); }
    float& DragWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DragWeight"); }
    int& DraggedBoneIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.DraggedBoneIndex"); }
    APrimalCharacter*& DraggedCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalShip.DraggedCharacter"); }
    APrimalCharacter*& DraggingCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalShip.DraggingCharacter"); }
    TObjectPtr<UNetDriver>& DriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "APrimalShip.Driver"); }
    BrzCampoPonteiro DriverSeatClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DriverSeatClass")); }
    float& EffectorInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EffectorInterpSpeed"); }
    float& EggChanceToSpawnUnstasisField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EggChanceToSpawnUnstasis"); }
    TArray<void*>& EggItemsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.EggItemsToSpawn"); }
    TArray<void*>& EggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.EggWeightsToSpawn"); }
    UAnimMontage*& EndChargingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.EndChargingAnimation"); }
    BrzCampoPonteiro EnterCannonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.EnterCannonIcon")); }
    UAnimMontage*& EnterFlightAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.EnterFlightAnim"); }
    float& EnvironmentInteractionPlasticityExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EnvironmentInteractionPlasticityExponent"); }
    float& EnvironmentInteractionPlasticityMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EnvironmentInteractionPlasticityMult"); }
    float& EquippedArmorDurabilityPercent1Field() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EquippedArmorDurabilityPercent1"); }
    float& EquippedArmorDurabilityPercent2Field() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EquippedArmorDurabilityPercent2"); }
    float& EquippedArmorDurabilityPercent3Field() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.EquippedArmorDurabilityPercent3"); }
    BrzCampoPonteiro ExitCannonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ExitCannonIcon")); }
    UAnimMontage*& ExitFlightAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.ExitFlightAnim"); }
    float& ExternalForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExternalForceMultiplier"); }
    float& ExtraBabyAgeSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraBabyAgeSpeedMultiplier"); }
    float& ExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraDamageMultiplier"); }
    float& ExtraFrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraFrictionModifier"); }
    float& ExtraMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraMaxAccelerationModifier"); }
    float& ExtraMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraMaxSpeedModifier"); }
    float& ExtraMeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraMeleeDamageMultiplier"); }
    float& ExtraReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraReceiveDamageMultiplier"); }
    float& ExtraRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraRotationRateModifier"); }
    float& ExtraRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraRunningSpeedModifier"); }
    float& ExtraTamedSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraTamedSpeedMultiplier"); }
    float& ExtraUnTamedSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ExtraUnTamedSpeedMultiplier"); }
    UAnimMontage*& FallAsleepAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.FallAsleepAnim"); }
    float& FallDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FallDamageMultiplier"); }
    TArray<void*>& FertilizedEggItemsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.FertilizedEggItemsToSpawn"); }
    TArray<void*>& FertilizedEggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.FertilizedEggWeightsToSpawn"); }
    float& FinalAnchorLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FinalAnchorLength"); }
    float& FixedBackwardsThrottleForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FixedBackwardsThrottleForce"); }
    float& FixedThrottleRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FixedThrottleRate"); }
    float& FleeHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FleeHealthPercentage"); }
    float& FleetRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FleetRadius"); }
    BrzCampoPonteiro FloatingHUDTextWorldOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.FloatingHUDTextWorldOffset")); }
    float& FluidInteractionScalarField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FluidInteractionScalar"); }
    float& FlyerForceLimitPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FlyerForceLimitPitchMax"); }
    float& FlyerForceLimitPitchMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FlyerForceLimitPitchMin"); }
    BrzCampoPonteiro FlyerTakeOffAdditionalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.FlyerTakeOffAdditionalVelocity")); }
    float& FlyingForceRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FlyingForceRotationRateModifier"); }
    BitFieldValue<bool, unsigned __int32> FlyingMovementModeUseFlyingRunSpeedModifier()
    { return { (void*)this, "FlyingMovementModeUseFlyingRunSpeedModifier" }; }
    float& FlyingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FlyingRunSpeedModifier"); }
    unsigned char& FollowStoppingDistanceField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.FollowStoppingDistance"); }
    float& FollowingRunDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FollowingRunDistance"); }
    TArray<USoundBase*>& FootStepSoundsPhysMatField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalShip.FootStepSoundsPhysMat"); }
    float& FootstepsMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FootstepsMaxRange"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.ForceMaximumReplicationRateUntilTime"); }
    double& ForcePreventCharZInterpUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.ForcePreventCharZInterpUntilTime"); }
    double& ForceUnfreezeSkeletalDynamicsUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.ForceUnfreezeSkeletalDynamicsUntilTime"); }
    TWeakObjectPtr<void>& ForcedMasterTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.ForcedMasterTarget"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Teleport_AllowedBelowTopDeckDist` +20, medido na build 25090264
    //  (offset absoluto medido: 0x3498; confianca alta)
    void*& ForcedMovementDirectionField() const
    { return BrzCampoAncorado<void*>(this, "Teleport_AllowedBelowTopDeckDist", 20); }
    float& ForcedWildBabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ForcedWildBabyAge"); }
    float& ForcesToApplyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ForcesToApplyScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VesselDynamicsComponent` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2AA8; confianca alta)
    void*& ForcestoApplyField() const
    { return BrzCampoAncorado<void*>(this, "VesselDynamicsComponent", 16); }
    float& FrontGroupMinYCoordinateField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FrontGroupMinYCoordinate"); }
    float& FullIKDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.FullIKDistance"); }
    int& GangCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.GangCount"); }
    float& GangOverlapRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GangOverlapRange"); }
    TArray<void*>& GeneTraitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.GeneTraits"); }
    FieldArray<unsigned char> GestationEggColorSetIndicesField() const
    { return { (void*)this, "APrimalShip.GestationEggColorSetIndices" }; }
    FieldArray<unsigned char> GestationEggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "APrimalShip.GestationEggNumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned char> GestationEggNumberOfMutationsAppliedField() const
    { return { (void*)this, "APrimalShip.GestationEggNumberOfMutationsApplied" }; }
    int& GestationEggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.GestationEggRandomMutationsFemale"); }
    int& GestationEggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.GestationEggRandomMutationsMale"); }
    float& GestationEggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GestationEggTamedIneffectivenessModifier"); }
    unsigned char& GestationGenderOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.GestationGenderOverride"); }
    float& GlideGravityScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GlideGravityScaleMultiplier"); }
    float& GlideMaxCarriedWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GlideMaxCarriedWeight"); }
    float& GlobalSailForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GlobalSailForceMultiplier"); }
    float& GlobalSteeringForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GlobalSteeringForceMultiplier"); }
    float& GlobalSteeringStandForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GlobalSteeringStandForceMultiplier"); }
    float& GrabWeightThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GrabWeightThreshold"); }
    BrzCampoPonteiro GroundCheckExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.GroundCheckExtent")); }
    float& GroundDistToStopShipField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.GroundDistToStopShip"); }
    BrzCampoPonteiro HUDOverlayToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.HUDOverlayToolTipWidget")); }
    float& HUDScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.HUDScaleMultiplier"); }
    float& HUDTextScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.HUDTextScaleMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3538; confianca alta)
    void*& HackCheckingForInvalidPhysXLocationField() const
    { return BrzCampoAncorado<void*>(this, "DestroyIfNoTargetUnderShoreDistanceTimer", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +32, medido na build 25090264
    //  (offset absoluto medido: 0x3550; confianca alta)
    void*& HackCheckingForInvalidPhysXTimeStopField() const
    { return BrzCampoAncorado<void*>(this, "DestroyIfNoTargetUnderShoreDistanceTimer", 32); }
    float& HalfLegLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.HalfLegLength"); }
    TWeakObjectPtr<void>& HardLimitWildDinoToVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.HardLimitWildDinoToVolume"); }
    float& HarvestingDestructionMeshRangeMultiplerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.HarvestingDestructionMeshRangeMultipler"); }
    float& HealthBarMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.HealthBarMaxDrawDistance"); }
    float& HealthBarOffsetYField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.HealthBarOffsetY"); }
    TArray<void*>& HibernatedZoneVolumesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.HibernatedZoneVolumes"); }
    TArray<void*>& HideBoneNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.HideBoneNames"); }
    BrzCampoPonteiro HideSpankerIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.HideSpankerIcon")); }
    BitFieldValue<bool, unsigned __int32> Hotfix_AreGeneTraitsEnabled()
    { return { (void*)this, "Hotfix_AreGeneTraitsEnabled" }; }
    BrzCampoPonteiro HullColorSetIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.HullColorSetIndices")); }
    TWeakObjectPtr<void>& HullMeshField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.HullMesh"); }
    FName& HullMeshCollisionProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.HullMeshCollisionProfileName"); }
    UAnimMontage*& HurtAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.HurtAnim"); }
    UAnimMontage*& HurtAnim_FlyingField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.HurtAnim_Flying"); }
    UAnimMontage*& HurtAnim_SleepingField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.HurtAnim_Sleeping"); }
    BrzCampoPonteiro HurtDecalDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.HurtDecalData")); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalShip.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.HurtFX_Niagara")); }
    USoundBase*& HurtSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.HurtSound"); }
    float& IKAfterFallingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.IKAfterFallingTime"); }
    TObjectPtr<UTexture2D>& IconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShip.Icon"); }
    BrzCampoPonteiro IdleFidgetAnimInfosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.IdleFidgetAnimInfos")); }
    float& IdleFidgetPlayFrequencyMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.IdleFidgetPlayFrequencyMax"); }
    float& IdleFidgetPlayFrequencyMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.IdleFidgetPlayFrequencyMin"); }
    AActor*& ImmobilizationActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShip.ImmobilizationActor"); }
    TArray<void*>& ImmobilizationTrapsToIgnoreField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.ImmobilizationTrapsToIgnore"); }
    FString& ImprinterNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.ImprinterName"); }
    FString& ImprinterPlayerUniqueNetIdField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.ImprinterPlayerUniqueNetId"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalShip.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalShip.Instigator"); }
    UAnimMontage*& JumpAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.JumpAnim"); }
    int& JumpCurrentCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.JumpCurrentCount"); }
    int& JumpCurrentCountPreJumpField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.JumpCurrentCountPreJump"); }
    float& JumpForceTimeRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.JumpForceTimeRemaining"); }
    float& JumpKeyHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.JumpKeyHoldTime"); }
    int& JumpMaxCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.JumpMaxCount"); }
    float& JumpMaxHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.JumpMaxHoldTime"); }
    float& JumpOfWaterKeyHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.JumpOfWaterKeyHoldTime"); }
    float& KeepFlightRemainingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.KeepFlightRemainingTime"); }
    float& KillXPBaseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.KillXPBase"); }
    BrzCampoPonteiro LaddersMastClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LaddersMastClass")); }
    BrzCampoPonteiro LaddersSideClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LaddersSideClass")); }
    UAnimMontage*& LandedAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.LandedAnim"); }
    BrzCampoPonteiro LandedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LandedDelegate")); }
    float& LandedSoundMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LandedSoundMaxRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastActorForceReplicationTime"); }
    TWeakObjectPtr<void>& LastAllyLookTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LastAllyLookTarget"); }
    double& LastAnchorLiftedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastAnchorLiftedTime"); }
    unsigned char& LastAttackIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.LastAttackIndex"); }
    TWeakObjectPtr<void>& LastAttackedNearbyPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LastAttackedNearbyPlayer"); }
    double& LastAttackedNearbyPlayerTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastAttackedNearbyPlayerTime"); }
    double& LastBabyFlyerFlyTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastBabyFlyerFlyTime"); }
    TWeakObjectPtr<void>& LastBasedMovementActorRefField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LastBasedMovementActorRef"); }
    double& LastBoostDinoImpulseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastBoostDinoImpulseTime"); }
    double& LastCausedDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastCausedDamageTime"); }
    double& LastClientCameraRotationServerUpdateField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastClientCameraRotationServerUpdate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CollisionImpactMinInterval` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3370; confianca alta)
    void*& LastCollisionImpactTimeField() const
    { return BrzCampoAncorado<void*>(this, "CollisionImpactMinInterval", 8); }
    BrzCampoPonteiro LastControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastControlInputVector")); }
    AActor*& LastDamageCauserField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShip.LastDamageCauser"); }
    TWeakObjectPtr<void>& LastDamageEventInstigatorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LastDamageEventInstigator"); }
    float& LastDistanceToShoreField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LastDistanceToShore"); }
    double& LastEggBoostedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastEggBoostedTime"); }
    double& LastEggSpawnChanceTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastEggSpawnChanceTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastExitStasisTime"); }
    double& LastForceAimedCharactersTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastForceAimedCharactersTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CombatMusicTracks` +16, medido na build 25090264
    //  (offset absoluto medido: 0x32D8; confianca alta)
    void*& LastFrameDisabledForcedVelocityDirectionField() const
    { return BrzCampoAncorado<void*>(this, "CombatMusicTracks", 16); }
    double& LastFrameMarkedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastFrameMarkedTime"); }
    int& LastFrameMoveLeftField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LastFrameMoveLeft"); }
    int& LastFrameMoveRightField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LastFrameMoveRight"); }
    APrimalProjectileGrapplingHook*& LastGrapHookPullingMeField() const
    { return *GetNativePointerField<APrimalProjectileGrapplingHook**>(this, "APrimalShip.LastGrapHookPullingMe"); }
    AShooterCharacter*& LastGrapHookPullingOwnerField() const
    { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalShip.LastGrapHookPullingOwner"); }
    double& LastGrappledTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastGrappledTime"); }
    double& LastHigherScaleExtraRunningSpeedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastHigherScaleExtraRunningSpeedTime"); }
    float& LastHigherScaleExtraRunningSpeedValueField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LastHigherScaleExtraRunningSpeedValue"); }
    TObjectPtr<AController>& LastHitByField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APrimalShip.LastHitBy"); }
    double& LastHitDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastHitDamageTime"); }
    BrzCampoPonteiro LastHitWallSweepCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastHitWallSweepCheckLocation")); }
    double& LastIkUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastIkUpdateTime"); }
    double& LastInAllyRangeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastInAllyRangeSerialized"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastInAllyRangeTime"); }
    float& LastIncomingDamagePreArmorField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LastIncomingDamagePreArmor"); }
    BitFieldValue<bool, unsigned __int32> LastIsInsideInActiveReverseVaccumSealedCube()
    { return { (void*)this, "LastIsInsideInActiveReverseVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideInActiveReverseVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideInActiveReverseVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideReverseVaccumSealedCube()
    { return { (void*)this, "LastIsInsideReverseVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideReverseVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideReverseVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCube()
    { return { (void*)this, "LastIsInsideVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideVaccumSealedCubeOnDino" }; }
    int& LastMarkedFrameCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LastMarkedFrameCount"); }
    double& LastMatingNotificationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastMatingNotificationTime"); }
    BrzCampoPonteiro LastMovementDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastMovementDesiredRotation")); }
    BrzCampoPonteiro LastMovementDesiredRotation_MountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastMovementDesiredRotation_MountedWeaponry")); }
    int& LastPlayedAttackAnimationField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LastPlayedAttackAnimation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +8, medido na build 25090264
    //  (offset absoluto medido: 0x33F0; confianca alta)
    void*& LastPositionField() const
    { return BrzCampoAncorado<void*>(this, "ShipHullSinkMovementForceMultiplier", 8); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastPreReplicationTime"); }
    BrzCampoPonteiro LastReverseVacuumCompartmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastReverseVacuumCompartment")); }
    BrzCampoPonteiro LastRiderMountedWeaponRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastRiderMountedWeaponRotation")); }
    double& LastRowTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastRowTime"); }
    double& LastRunningTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastRunningTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.LastSelectedWindSourceComponentName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3460; confianca alta)
    void*& LastSentSailRotationToServerTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3468; confianca alta)
    void*& LastSentSailRotationToServerValueField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +36, medido na build 25090264
    //  (offset absoluto medido: 0x347C; confianca media)
    void*& LastSentSteeringInputToServerValueField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x3470; confianca alta)
    void*& LastSentThrottleTargetToServerTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +32, medido na build 25090264
    //  (offset absoluto medido: 0x3478; confianca alta)
    void*& LastSentThrottleTargetToServerValueField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 32); }
    double& LastSkinnedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastSkinnedTime"); }
    double& LastStartedSleepingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastStartedSleepingTime"); }
    double& LastTameConsumedFoodTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTameConsumedFoodTime"); }
    double& LastThrottleCheckStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastThrottleCheckStartTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastThrottledTickTime"); }
    double& LastTimeInSwimmingField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimeInSwimming"); }
    double& LastTimeNotInFallingField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimeNotInFalling"); }
    double& LastTimePlacedDriverSeatField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimePlacedDriverSeat"); }
    double& LastTimeSubmergedField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimeSubmerged"); }
    double& LastTimeUpdatedCharacterStatusComponentField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimeUpdatedCharacterStatusComponent"); }
    double& LastTimeUpdatedCorpseDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimeUpdatedCorpseDestructionTime"); }
    double& LastTookDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTookDamageTime"); }
    double& LastTookDamageTimeDifferentTeamField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastTookDamageTimeDifferentTeam"); }
    double& LastUpdatedBabyAgeAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastUpdatedBabyAgeAtTime"); }
    double& LastUpdatedGestationAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastUpdatedGestationAtTime"); }
    double& LastUpdatedMatingAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastUpdatedMatingAtTime"); }
    double& LastUpdatedPlankDecayTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastUpdatedPlankDecayTime"); }
    int& LastValidTameVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LastValidTameVersion"); }
    double& LastWalkingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.LastWalkingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Teleport_AllowedBelowTopDeckDist` +12, medido na build 25090264
    //  (offset absoluto medido: 0x3490; confianca alta)
    void*& LastWantsForcedMovementTimeField() const
    { return BrzCampoAncorado<void*>(this, "Teleport_AllowedBelowTopDeckDist", 12); }
    float& LatchedFirstPersonViewAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LatchedFirstPersonViewAngle"); }
    TArray<APrimalStructure*>& LatchedOnStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalShip.LatchedOnStructures"); }
    float& LatchingCameraInterpolationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LatchingCameraInterpolationSpeed"); }
    float& LatchingDistanceLimitField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LatchingDistanceLimit"); }
    float& LatchingInitialPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LatchingInitialPitch"); }
    float& LatchingInitialYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LatchingInitialYaw"); }
    float& LatchingInterpolatedPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LatchingInterpolatedPitch"); }
    FString& LatestUploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.LatestUploadedFromServerName"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.Layers"); }
    float& LeavePlayAnimBelowHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LeavePlayAnimBelowHealthPercent"); }
    float& LimitRiderYawOnLatchedRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LimitRiderYawOnLatchedRange"); }
    TWeakObjectPtr<void>& LimitWildDinoToVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LimitWildDinoToVolume"); }
    int& LimitWildDinoToVolumenIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LimitWildDinoToVolumenIndex"); }
    FName& LimitWildDinoToVolumenTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.LimitWildDinoToVolumenTag"); }
    TWeakObjectPtr<void>& LinkedSupplyCrateField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LinkedSupplyCrate"); }
    TWeakObjectPtr<void>& LocalCaptainControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.LocalCaptainController"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedCurrentWetDockStructureID` +12, medido na build 25090264
    //  (offset absoluto medido: 0x33A0; confianca alta)
    void*& LongRangeStasisComponentField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedCurrentWetDockStructureID", 12); }
    float& LootCrateRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LootCrateRadius"); }
    int& LootCratesToDropField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.LootCratesToDrop"); }
    BrzCampoPonteiro LootDropClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LootDropClass")); }
    BrzCampoPonteiro MaidenVoyageIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MaidenVoyageIcon")); }
    BrzCampoPonteiro MaidenVoyageTrackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MaidenVoyageTrack")); }
    float& MastExtensionZScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MastExtensionZScale"); }
    float& MatingProgressField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MatingProgress"); }
    APrimalDinoCharacter*& MatingWithDinoField() const
    { return *GetNativePointerField<APrimalDinoCharacter**>(this, "APrimalShip.MatingWithDino"); }
    int& MaxAllowedRandomMutationsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.MaxAllowedRandomMutations"); }
    float& MaxBackwardsVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxBackwardsVelocity"); }
    float& MaxDragDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxDragDistance"); }
    float& MaxDragDistanceTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxDragDistanceTimeout"); }
    float& MaxDragMovementSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxDragMovementSpeed"); }
    float& MaxFallSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxFallSpeed"); }
    BrzCampoPonteiro MaxNameplateDimensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MaxNameplateDimensions")); }
    float& MaxPercentOfCapsulHeightAllowedForIKField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxPercentOfCapsulHeightAllowedForIK"); }
    float& MaxSailRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxSailRotation"); }
    float& MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCache"); }
    double& MaxTamedDinos_SoftTameLimit_MarkedForDeletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.MaxTamedDinos_SoftTameLimit_MarkedForDeletionTime"); }
    float& MaxTimeToShootAtLocationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxTimeToShootAtLocation"); }
    float& MaxWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaxWeightMultiplier"); }
    float& MaximumAnchorHorizonalLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaximumAnchorHorizonalLength"); }
    float& MaximumAnchorLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MaximumAnchorLength"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MeleeDamageType")); }
    float& MeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MeleeSwingRadius"); }
    TObjectPtr<USkeletalMeshComponent>& MeshField() const
    { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "APrimalShip.Mesh"); }
    int& MeshingTickCounterMultiplierField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.MeshingTickCounterMultiplier"); }
    BrzCampoPonteiro MetalColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MetalColorOptions")); }
    float& MinAllowedGroundDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MinAllowedGroundDist"); }
    float& MinMaxThrottleRatioToBeachField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MinMaxThrottleRatioToBeach"); }
    float& MinMovingMusicSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MinMovingMusicSpeed"); }
    float& MinMovingSoundSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MinMovingSoundSpeed"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MinNetUpdateFrequency"); }
    int& MinPlayerLevelForWakingTameField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.MinPlayerLevelForWakingTame"); }
    BrzCampoPonteiro MirroredUPaintingIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MirroredUPaintingIndices")); }
    TWeakObjectPtr<void>& MountCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.MountCharacter"); }
    BrzCampoPonteiro MountCharacterProneLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MountCharacterProneLocOffset")); }
    float& MountCharacterProneOffsetSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MountCharacterProneOffsetSpeed"); }
    BrzCampoPonteiro MountCharacterProneRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MountCharacterProneRotOffset")); }
    FName& MountCharacterSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.MountCharacterSocketName"); }
    TWeakObjectPtr<void>& MountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.MountedDino"); }
    double& MountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.MountedDinoTime"); }
    BrzCampoPonteiro MouthFlapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MouthFlapAnim")); }
    BrzCampoPonteiro MouthFlapSoundClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MouthFlapSoundClass")); }
    BrzCampoPonteiro MoveSteeringWheelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MoveSteeringWheelIcon")); }
    BrzCampoPonteiro MovementModeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MovementModeChangedDelegate")); }
    UAudioComponent*& MovingSoundComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalShip.MovingSoundComponent"); }
    USoundBase*& MovingSoundCueField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.MovingSoundCue"); }
    BitFieldValue<bool, unsigned __int32> MutagenApplied()
    { return { (void*)this, "MutagenApplied" }; }
    TArray<void*>& MyBabyCuddleFoodTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.MyBabyCuddleFoodTypes"); }
    UPrimalCharacterStatusComponent*& MyCharacterStatusComponentField() const
    { return *GetNativePointerField<UPrimalCharacterStatusComponent**>(this, "APrimalShip.MyCharacterStatusComponent"); }
    UPrimalHarvestingComponent*& MyDeathHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalShip.MyDeathHarvestingComponent"); }
    BrzCampoPonteiro MyDinoEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MyDinoEntry")); }
    UPrimalDinoSettings*& MyDinoSettingsCDOField() const
    { return *GetNativePointerField<UPrimalDinoSettings**>(this, "APrimalShip.MyDinoSettingsCDO"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalShip.MyInventoryComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +40, medido na build 25090264
    //  (offset absoluto medido: 0x3410; confianca media)
    void*& NamePlateTextField() const
    { return BrzCampoAncorado<void*>(this, "ShipHullSinkMovementForceMultiplier", 40); }
    UPrimalNavigationInvokerComponent*& NavigationInvokerComponentField() const
    { return *GetNativePointerField<UPrimalNavigationInvokerComponent**>(this, "APrimalShip.NavigationInvokerComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.NetDriverName"); }
    USoundBase*& NetDynamicMusicSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.NetDynamicMusicSound"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NetworkAndStasisRangeMultiplier"); }
    double& NetworkCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.NetworkCreationTime"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShip.NetworkSpatializationParent"); }
    int& NewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.NewMutationCount"); }
    double& NextAllowedBedUseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.NextAllowedBedUseTime"); }
    double& NextAllowedMatingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.NextAllowedMatingTime"); }
    double& NextBPTimerNonDedicatedField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.NextBPTimerNonDedicated"); }
    double& NextBPTimerServerField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.NextBPTimerServer"); }
    TArray<void*>& NextBabyDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.NextBabyDinoAncestors"); }
    TArray<void*>& NextBabyDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.NextBabyDinoAncestorsMale"); }
    TArray<void*>& NextBabyGeneTraitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.NextBabyGeneTraits"); }
    double& NextTimePlayIdleFidgetAnimationField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.NextTimePlayIdleFidgetAnimation"); }
    BrzCampoPonteiro NiagaraSystemsToActivateAfterDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.NiagaraSystemsToActivateAfterDragged")); }
    float& NoRiderFlyingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NoRiderFlyingRotationRateModifier"); }
    TArray<void*>& NoSaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.NoSaddlePassengerSeats"); }
    FName& NonDedicatedFreezeDinoPhysicsIfLayerUnloadedField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.NonDedicatedFreezeDinoPhysicsIfLayerUnloaded"); }
    BrzCampoPonteiro NotifyInputEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.NotifyInputEvent")); }
    BrzCampoPonteiro NotifyLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.NotifyLevelUp")); }
    BrzCampoPonteiro NotifyStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.NotifyStasis")); }
    BrzCampoPonteiro NotifyUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.NotifyUnstasis")); }
    float& NursingTroughFoodEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.NursingTroughFoodEffectivenessMultiplier"); }
    BrzCampoPonteiro OldLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OldLocation")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnActorHit")); }
    BrzCampoPonteiro OnCharacterMovementUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnCharacterMovementUpdated")); }
    BrzCampoPonteiro OnClearMountedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnClearMountedDino")); }
    float& OnDeathNotifyNearbyCharactersRadiusOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.OnDeathNotifyNearbyCharactersRadiusOverride"); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnDestroyed")); }
    BrzCampoPonteiro OnDiedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnDied")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnEndPlay")); }
    BrzCampoPonteiro OnFlyerLandedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnFlyerLanded")); }
    BrzCampoPonteiro OnFlyerLandingInterruptedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnFlyerLandingInterrupted")); }
    BrzCampoPonteiro OnFlyerStartLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnFlyerStartLanding")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnMatineeUpdated")); }
    BrzCampoPonteiro OnMovementTetherSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnMovementTetherSet")); }
    BrzCampoPonteiro OnNotifyAddPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnNotifyAddPassenger")); }
    BrzCampoPonteiro OnNotifyClearPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnNotifyClearPassenger")); }
    BrzCampoPonteiro OnNotifyClearRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnNotifyClearRider")); }
    BrzCampoPonteiro OnNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnNotifyDamage")); }
    BrzCampoPonteiro OnNotifySetRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnNotifySetRider")); }
    BrzCampoPonteiro OnOrbitCameraViewChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnOrbitCameraViewChange")); }
    BrzCampoPonteiro OnReachedJumpApexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnReachedJumpApex")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnSetMountedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnSetMountedDino")); }
    BrzCampoPonteiro OnShipAquiredCargoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnShipAquiredCargo")); }
    BrzCampoPonteiro OnShipLostCargoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnShipLostCargo")); }
    BrzCampoPonteiro OnShipSkillsChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnShipSkillsChanged")); }
    BrzCampoPonteiro OnSleepStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnSleepStateChanged")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OnTargetingTeamChanged")); }
    BrzCampoPonteiro OrbitCamRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OrbitCamRot")); }
    float& OrbitCamZoomField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.OrbitCamZoom"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.OriginalCreationTime"); }
    FName& OriginalNPCVolumeNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.OriginalNPCVolumeName"); }
    float& OverlapAsTargetCheckTraceZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.OverlapAsTargetCheckTraceZOffset"); }
    BrzCampoPonteiro OverlayTooltipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OverlayTooltipPadding")); }
    BrzCampoPonteiro OverlayTooltipScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OverlayTooltipScale")); }
    USoundBase*& OverrideAreaMusicField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.OverrideAreaMusic"); }
    TArray<void*>& OverrideBaseStatLevelsOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.OverrideBaseStatLevelsOnSpawn"); }
    BrzCampoPonteiro OverrideInputComponentClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OverrideInputComponentClass")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.OverrideStasisComponentRadius"); }
    TArray<void*>& OverrideStatPriorityOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.OverrideStatPriorityOnSpawn"); }
    BrzCampoPonteiro OverrideStatsPanelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.OverrideStatsPanelClass")); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalShip.OverrideTargetComponents"); }
    TArray<void*>& OverwrittenWildFollowingDinoInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.OverwrittenWildFollowingDinoInfos"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShip.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalShip.OwnerMission"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.OwningPlayerName"); }
    BrzCampoPonteiro PaintedColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PaintedColorOptions")); }
    BrzCampoPonteiro PaintingAllowedUVRangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PaintingAllowedUVRanges")); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalShip.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.ParentComponent"); }
    BrzCampoPonteiro ParticleSystemsToActivateAfterDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ParticleSystemsToActivateAfterDragged")); }
    FName& PassengerFPVCameraRootSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.PassengerFPVCameraRootSocket"); }
    TArray<TWeakObjectPtr<void>>& PassengerPerSeatField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShip.PassengerPerSeat"); }
    float& PathfollowingMaxSpeedModiferField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PathfollowingMaxSpeedModifer"); }
    int& PatrolGroupIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.PatrolGroupID"); }
    BrzCampoPonteiro PatrolGroupOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PatrolGroupOffset")); }
    float& PercentChanceFemaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PercentChanceFemale"); }
    float& PercentOfWeightForMaxSinkingSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PercentOfWeightForMaxSinkingSpeed"); }
    float& PercentOfWeightForMinSinkingSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PercentOfWeightForMinSinkingSpeed"); }
    int& PersonalTamedDinoCostField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.PersonalTamedDinoCost"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PhysicsReplicationMode")); }
    BrzCampoPonteiro PickedUpCargoSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PickedUpCargoSound")); }
    UAnimMontage*& PinnedAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.PinnedAnim"); }
    float& PlankDecayIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PlankDecayInterval"); }
    float& PlankDecayPercentPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PlankDecayPercentPerInterval"); }
    float& PlayAnimBelowHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PlayAnimBelowHealthPercent"); }
    float& PlayerMountedLaunchFowardSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PlayerMountedLaunchFowardSpeed"); }
    float& PlayerMountedLaunchUpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.PlayerMountedLaunchUpSpeed"); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "APrimalShip.PlayerState"); }
    BrzCampoPonteiro PoopAltItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PoopAltItemClass")); }
    UAnimMontage*& PoopAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.PoopAnimation"); }
    BrzCampoPonteiro PoopItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PoopItemClass")); }
    USoundBase*& PoopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.PoopSound"); }
    double& PossessedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.PossessedAtTime"); }
    TArray<void*>& PreventBuffClassesWithTagField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.PreventBuffClassesWithTag"); }
    double& PreventMateBoostUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.PreventMateBoostUntilTime"); }
    BrzCampoPonteiro PreventMutationColorizationRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PreventMutationColorizationRegions")); }
    BrzCampoPonteiro PreventPVPMountedWeaponClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PreventPVPMountedWeaponClasses")); }
    int& PreventSavingCharOnlyDamageTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.PreventSavingCharOnlyDamageTargetingTeam"); }
    BrzCampoPonteiro PreviousAngularVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PreviousAngularVelocity")); }
    TObjectPtr<AController>& PreviousControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APrimalShip.PreviousController"); }
    BrzCampoPonteiro PreviousLinearVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PreviousLinearVelocity")); }
    TWeakObjectPtr<void>& PreviousRiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.PreviousRider"); }
    FString& PreviousUploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.PreviousUploadedFromServerName"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalShip.PrimaryActorTick"); }
    float& ProneEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ProneEyeHeight"); }
    float& ProneWaterSubmergedDepthThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ProneWaterSubmergedDepthThreshold"); }
    BrzCampoPonteiro PropertyBagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.PropertyBag")); }
    float& ProxyJumpForceStartedTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ProxyJumpForceStartedTime"); }
    float& RaftCharacterBasingAbsoluteMaxDirZField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RaftCharacterBasingAbsoluteMaxDirZ"); }
    BrzCampoPonteiro RaftSpawnEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RaftSpawnEffect")); }
    float& RagdollReplicationIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RagdollReplicationInterval"); }
    BrzCampoPonteiro RandomColorSetsFemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RandomColorSetsFemale")); }
    BrzCampoPonteiro RandomColorSetsMaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RandomColorSetsMale")); }
    float& RandomLookAtBaseSearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtBaseSearchRadius"); }
    float& RandomLookAtChanceToSkipCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtChanceToSkipCooldown"); }
    float& RandomLookAtCooldownMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtCooldownMax"); }
    float& RandomLookAtCooldownMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtCooldownMin"); }
    float& RandomLookAtDinoWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtDinoWeight"); }
    float& RandomLookAtDurationMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtDurationMax"); }
    float& RandomLookAtDurationMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtDurationMin"); }
    BrzCampoPonteiro RandomLookAtIgnoreDinoNameTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RandomLookAtIgnoreDinoNameTags")); }
    float& RandomLookAtPlayerWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtPlayerWeight"); }
    float& RandomLookAtTargetMinDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RandomLookAtTargetMinDot"); }
    int& RandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.RandomMutationsFemale"); }
    int& RandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.RandomMutationsMale"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.RayTracingGroupId"); }
    BrzCampoPonteiro ReceiveControllerChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReceiveControllerChangedDelegate")); }
    BrzCampoPonteiro ReceiveRestartedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReceiveRestartedDelegate")); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.RemoteRole"); }
    unsigned char& RemoteViewPitchField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.RemoteViewPitch"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RepGraphBehavior")); }
    BrzCampoPonteiro RepRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RepRootMotion")); }
    float& ReplayLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplayLastTransformUpdateTimeStamp"); }
    BitFieldValue<bool, unsigned __int32> ReplicateAllBones()
    { return { (void*)this, "ReplicateAllBones" }; }
    BrzCampoPonteiro ReplicatedBasedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedBasedMovement")); }
    float& ReplicatedCurrentHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedCurrentHealth"); }
    float& ReplicatedCurrentTorporField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedCurrentTorpor"); }
    int& ReplicatedCurrentWetDockStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.ReplicatedCurrentWetDockStructureID"); }
    UAnimationAsset*& ReplicatedDeathAnimField() const
    { return *GetNativePointerField<UAnimationAsset**>(this, "APrimalShip.ReplicatedDeathAnim"); }
    BrzCampoPonteiro ReplicatedGravityDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedGravityDirection")); }
    float& ReplicatedMaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedMaxHealth"); }
    float& ReplicatedMaxTorporField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedMaxTorpor"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedMovement")); }
    unsigned char& ReplicatedMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.ReplicatedMovementMode"); }
    BrzCampoPonteiro ReplicatedRagdollPositionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedRagdollPositions")); }
    BrzCampoPonteiro ReplicatedRagdollRotationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedRagdollRotations")); }
    float& ReplicatedRudderAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedRudderAngle"); }
    float& ReplicatedRudderSteeringAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedRudderSteeringAmount"); }
    float& ReplicatedSailRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedSailRotation"); }
    double& ReplicatedServerLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.ReplicatedServerLastTransformUpdateTimeStamp"); }
    BrzCampoPonteiro ReplicatedShipRepairRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedShipRepairRequirements")); }
    float& ReplicatedSteeringInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedSteeringInput"); }
    float& ReplicatedThrottleRatio_TargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedThrottleRatio_Target"); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicationIntervalMultiplier"); }
    float& RequiredTameAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RequiredTameAffinity"); }
    float& RequiredTameAffinityPerBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RequiredTameAffinityPerBaseLevel"); }
    TWeakObjectPtr<void>& RiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.Rider"); }
    UAnimSequence*& RiderAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalShip.RiderAnimOverride"); }
    BrzCampoPonteiro RiderCheckTraceOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RiderCheckTraceOffset")); }
    BrzCampoPonteiro RiderEjectionImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RiderEjectionImpulse")); }
    BrzCampoPonteiro RiderFPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RiderFPVCameraOffset")); }
    FName& RiderFPVCameraUseSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.RiderFPVCameraUseSocketName"); }
    float& RiderMaxRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RiderMaxRunSpeedModifier"); }
    float& RiderMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RiderMaxSpeedModifier"); }
    UAnimSequence*& RiderMoveAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalShip.RiderMoveAnimOverride"); }
    float& RiderRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RiderRotationRateModifier"); }
    FName& RiderSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.RiderSocketName"); }
    float& RidingNetUpdateFequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RidingNetUpdateFequency"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalShip.RootComponent"); }
    float& RootLocSwimOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RootLocSwimOffset"); }
    TArray<void*>& RootMotionRepMovesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.RootMotionRepMoves"); }
    BrzCampoPonteiro RopeBeingPulledSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RopeBeingPulledSoundInfo")); }
    BrzCampoPonteiro RopeReachingEndOfTravelSoundinfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RopeReachingEndOfTravelSoundinfo")); }
    float& RotateSailsSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RotateSailsSpeedMultiplier"); }
    float& RowingImpulse_MaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RowingImpulse_Max"); }
    int& RowingSeatCount_MaxField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.RowingSeatCount_Max"); }
    float& RowingSeatImpulseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RowingSeatImpulseMultiplier"); }
    float& RowingSeats_RowingInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RowingSeats_RowingInput"); }
    float& RowingSeats_RowingIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RowingSeats_RowingInterval"); }
    float& RudderAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RudderAngle"); }
    float& RudderAngleThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RudderAngleThreshold"); }
    float& RudderAutoBackAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RudderAutoBackAngle"); }
    BrzCampoPonteiro RudderCenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RudderCenter")); }
    float& RudderSteerForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RudderSteerForce"); }
    float& RudderSteeringAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RudderSteeringAmount"); }
    BrzCampoPonteiro RudderSteeringComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.RudderSteeringComponent")); }
    float& RudderSteeringRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RudderSteeringRate"); }
    UAudioComponent*& RunLoopACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalShip.RunLoopAC"); }
    USoundBase*& RunLoopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.RunLoopSound"); }
    float& RunMinVelocityRotDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RunMinVelocityRotDot"); }
    float& RunMinVelocityRotDotAutonomousClientSlackField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RunMinVelocityRotDotAutonomousClientSlack"); }
    USoundBase*& RunStopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.RunStopSound"); }
    float& RunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RunningSpeedModifier"); }
    BrzCampoPonteiro SaddleItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SaddleItemClass")); }
    FDinoSaddleStruct& SaddleStructField() const
    { return *GetNativePointerField<FDinoSaddleStruct*>(this, "APrimalShip.SaddleStruct"); }
    TArray<void*>& SaddleStructuresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.SaddleStructures"); }
    TArray<APrimalStructure*>& SaddledStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalShip.SaddledStructures"); }
    BrzCampoPonteiro SailClassesForceMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailClassesForceMultipliers")); }
    float& SailTurningInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SailTurningInput"); }
    float& SailUnits_MaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SailUnits_Max"); }
    float& SailingVelocity_AbsoluteMaxAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SailingVelocity_AbsoluteMaxAllowed"); }
    float& SailingVelocity_MaxAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SailingVelocity_MaxAllowed"); }
    BrzCampoPonteiro SailsChangingDirectionSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailsChangingDirectionSoundInfo")); }
    BrzCampoPonteiro SailsOpenedSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailsOpenedSoundInfo")); }
    BrzCampoPonteiro SailsPivotingSoundinfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailsPivotingSoundinfo")); }
    BrzCampoPonteiro SailsPulledSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailsPulledSoundInfo")); }
    BrzCampoPonteiro SailsRunningAgainstTheWindSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailsRunningAgainstTheWindSoundInfo")); }
    BrzCampoPonteiro SailsRunningWithTheWindSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SailsRunningWithTheWindSoundInfo")); }
    float& Sails_AdditionalMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_AdditionalMaxVelocity"); }
    float& Sails_AvgSailRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_AvgSailRotationSpeed"); }
    float& Sails_MaxMovementWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_MaxMovementWeight"); }
    float& Sails_MaxThrottleForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_MaxThrottleForce"); }
    float& Sails_SteeringForce_AtVelocityMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_SteeringForce_AtVelocityMax"); }
    BrzCampoPonteiro Sails_ThrottleForceLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.Sails_ThrottleForceLocation")); }
    float& Sails_ThrottleForceWindMult_MaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_ThrottleForceWindMult_Max"); }
    float& Sails_ThrottleForceWindMult_MinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_ThrottleForceWindMult_Min"); }
    int& SaveDestroyWildDinosUnderVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.SaveDestroyWildDinosUnderVersion"); }
    BrzCampoPonteiro SavedBaseWorldLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SavedBaseWorldLocation")); }
    TArray<TWeakObjectPtr<void>>& SavedBasedCharactersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShip.SavedBasedCharacters"); }
    BrzCampoPonteiro SavedDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SavedDeathAnim")); }
    int& SavedLastValidTameVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.SavedLastValidTameVersion"); }
    TArray<APrimalCharacter*>& SavedPassengerPerSeatField() const
    { return *GetNativePointerField<TArray<APrimalCharacter*>*>(this, "APrimalShip.SavedPassengerPerSeat"); }
    BrzCampoPonteiro SavedRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SavedRootMotion")); }
    float& ScaleExtraRunningSpeedModifierMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ScaleExtraRunningSpeedModifierMax"); }
    float& ScaleExtraRunningSpeedModifierMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ScaleExtraRunningSpeedModifierMin"); }
    float& ScaleExtraRunningSpeedModifierSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ScaleExtraRunningSpeedModifierSpeed"); }
    UPrimalInventoryComponent*& SecondaryInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalShip.SecondaryInventoryComponent"); }
    TWeakObjectPtr<void>& SecondaryMountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.SecondaryMountedDino"); }
    double& SecondaryMountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.SecondaryMountedDinoTime"); }
    float& ServerTargetCarriedYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ServerTargetCarriedYaw"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SailClassesForceMultipliers` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3448; confianca alta)
    void*& ShipBeachedStartTimeField() const
    { return BrzCampoAncorado<void*>(this, "SailClassesForceMultipliers", 16); }
    float& ShipBowOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ShipBowOffset"); }
    BrzCampoPonteiro ShipCycloneDamageEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipCycloneDamageEffect")); }
    BrzCampoPonteiro ShipDyingNiagaraFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipDyingNiagaraFX")); }
    float& ShipHullSinkMovementForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ShipHullSinkMovementForceMultiplier"); }
    BrzCampoPonteiro ShipRammingNSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipRammingNS")); }
    BrzCampoPonteiro ShipRammingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipRammingSound")); }
    BrzCampoPonteiro ShipSinkingNiagaraFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipSinkingNiagaraFX")); }
    BrzCampoPonteiro ShipSkillCooldownsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipSkillCooldowns")); }
    BrzCampoPonteiro ShipSkillTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipSkillTree")); }
    BrzCampoPonteiro ShipSkillsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipSkillsIcon")); }
    float& ShipStructureHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ShipStructureHealthMultiplier"); }
    unsigned char& ShipTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.ShipType"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnchorMaximumDistanceFromShore` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3570; confianca alta)
    void*& ShipVelocityLastTickField() const
    { return BrzCampoAncorado<void*>(this, "AnchorMaximumDistanceFromShore", 8); }
    float& ShipWeightMovementForcePowerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ShipWeightMovementForcePower"); }
    BrzCampoPonteiro ShowSpankerIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShowSpankerIcon")); }
    float& SimpleIkRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SimpleIkRate"); }
    float& SingleMastExtensionLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SingleMastExtensionLength"); }
    float& SinkDelayTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SinkDelayTimer"); }
    UAnimMontage*& SleepConsumeFoodAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.SleepConsumeFoodAnim"); }
    float& SlopeBiasForMaxCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SlopeBiasForMaxCapsulePercent"); }
    BrzCampoPonteiro SnapshotAnimInstanceClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SnapshotAnimInstanceClass")); }
    TArray<void*>& SnapshotPosesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.SnapshotPoses"); }
    float& SnapshotScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SnapshotScale"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnerColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.SpawnerColorSets")); }
    float& SpeedMultiplierWhenFacingHeadwindField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SpeedMultiplierWhenFacingHeadwind"); }
    BrzCampoPonteiro StartChargingShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.StartChargingShake")); }
    float& StartWaveLockingThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StartWaveLockingThreshold"); }
    UAnimMontage*& StartledAnimationRightDefaultField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.StartledAnimationRightDefault"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalShip.StasisCheckComponent"); }
    float& StasisConsumerRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StasisConsumerRangeMultiplier"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShip.StasisUnRegisteredComponents"); }
    float& SteeringForce_MaxAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringForce_MaxAllowed"); }
    float& SteeringForce_MinAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringForce_MinAllowed"); }
    float& SteeringInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringInput"); }
    BrzCampoPonteiro StepActorDamageTypeOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.StepActorDamageTypeOverride")); }
    TArray<void*>& StepDamageFootDamageSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.StepDamageFootDamageSockets"); }
    float& StepDamageRadialDamageAmountGeneralField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StepDamageRadialDamageAmountGeneral"); }
    float& StepDamageRadialDamageAmountHarvestableField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StepDamageRadialDamageAmountHarvestable"); }
    float& StepDamageRadialDamageExtraRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StepDamageRadialDamageExtraRadius"); }
    float& StepDamageRadialDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StepDamageRadialDamageInterval"); }
    BrzCampoPonteiro StepHarvestableDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.StepHarvestableDamageType")); }
    BrzCampoPonteiro StowedAnchorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.StowedAnchorComponent")); }
    BrzCampoPonteiro StowedAnchorSocketOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.StowedAnchorSocketOffset")); }
    unsigned char& SubmergedWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.SubmergedWaterMovementMode"); }
    float& SwimmingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SwimmingRotationRateModifier"); }
    float& SwimmingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SwimmingRunSpeedModifier"); }
    UAnimMontage*& SyncedMontageField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.SyncedMontage"); }
    float& TPVCameraHorizontalOffsetFactorMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TPVCameraHorizontalOffsetFactorMax"); }
    float& TPVCameraHorizontalOffsetFactorMaxClampField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TPVCameraHorizontalOffsetFactorMaxClamp"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro TPVCameraOrgOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TPVCameraOrgOffset")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.Tags"); }
    float& TameIneffectivenessByAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TameIneffectivenessByAffinity"); }
    float& TameIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TameIneffectivenessModifier"); }
    BrzCampoPonteiro TamedAIControllerOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TamedAIControllerOverride")); }
    unsigned char& TamedAITargetingRangeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.TamedAITargetingRange"); }
    int& TamedAggressionLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.TamedAggressionLevel"); }
    double& TamedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.TamedAtTime"); }
    float& TamedCorpseLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamedCorpseLifespan"); }
    TWeakObjectPtr<void>& TamedFollowTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.TamedFollowTarget"); }
    BrzCampoPonteiro TamedInventoryComponentTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TamedInventoryComponentTemplate")); }
    TWeakObjectPtr<void>& TamedLandTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.TamedLandTarget"); }
    FString& TamedNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.TamedName"); }
    FString& TamedOnServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.TamedOnServerName"); }
    float& TamedRunningRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamedRunningRotationRateModifier"); }
    float& TamedRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamedRunningSpeedModifier"); }
    FString& TamedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.TamedTimeStamp"); }
    float& TamedWalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamedWalkableFloorZ"); }
    float& TamedWalkingSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamedWalkingSpeedModifier"); }
    FString& TamerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.TamerString"); }
    float& TamingFoodConsumeIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamingFoodConsumeInterval"); }
    float& TamingFoodConsumeIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamingFoodConsumeIntervalMax"); }
    float& TamingIneffectivenessModifierIncreaseByDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TamingIneffectivenessModifierIncreaseByDamagePercent"); }
    double& TamingLastFoodConsumptionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.TamingLastFoodConsumptionTime"); }
    int& TamingTeamIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.TamingTeamID"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.Target"); }
    float& TargetLatchingInitialYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TargetLatchingInitialYaw"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.TargetingTeam"); }
    FName& TargetingTeamNameOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.TargetingTeamNameOverride"); }
    BrzCampoPonteiro TaxidermySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TaxidermySkinClass")); }
    float& Teleport_AllowedAboveTopDeckDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Teleport_AllowedAboveTopDeckDist"); }
    float& Teleport_AllowedBelowTopDeckDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.Teleport_AllowedBelowTopDeckDist"); }
    TWeakObjectPtr<void>& TetherActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.TetherActor"); }
    float& TetherHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TetherHeight"); }
    float& TetherRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TetherRadius"); }
    unsigned char& ThrottleAxisField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.ThrottleAxis"); }
    float& ThrottleCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleCheckInterval"); }
    BrzCampoPonteiro ThrottleForceLocation_OffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ThrottleForceLocation_Offset")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +48, medido na build 25090264
    //  (offset absoluto medido: 0x3418; confianca media)
    void*& ThrottleForceMultiplierField() const
    { return BrzCampoAncorado<void*>(this, "ShipHullSinkMovementForceMultiplier", 48); }
    float& ThrottleInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleInput"); }
    float& ThrottleInputThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleInputThreshold"); }
    float& ThrottleRatioInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleRatioInterpSpeed"); }
    float& ThrottleRatio_TargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleRatio_Target"); }
    float& TimeBetweenTamedWakingEatAnimationsField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TimeBetweenTamedWakingEatAnimations"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MovingSoundCue` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2AE8; confianca alta)
    double& TimeSinceLastFadeOutField() const
    { return BrzCampoAncorado<double>(this, "MovingSoundCue", 8); }
    BrzCampoPonteiro ToggleDeckIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ToggleDeckIcon")); }
    BrzCampoPonteiro ToggleLaddersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ToggleLaddersIcon")); }
    BrzCampoPonteiro ToggleLightsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ToggleLightsIcon")); }
    BrzCampoPonteiro TorchMaterial_UnlitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TorchMaterial_Unlit")); }
    BrzCampoPonteiro TorchMaterials_LitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.TorchMaterials_Lit")); }
    float& TorquesToApplyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TorquesToApplyScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VesselDynamicsComponent` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2AB8; confianca alta)
    void*& TorquestoApplyField() const
    { return BrzCampoAncorado<void*>(this, "VesselDynamicsComponent", 32); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupPetOrderingRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.TribeGroupPetOrderingRank"); }
    unsigned char& TribeGroupPetRidingRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.TribeGroupPetRidingRank"); }
    FString& TribeNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.TribeName"); }
    float& TwoLeggedVirtualPointDistFactorField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.TwoLeggedVirtualPointDistFactor"); }
    float& UnAnchoredAutoDestroyTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.UnAnchoredAutoDestroyTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VesselDynamicsComponent` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2AC8; confianca media)
    void*& UnAnchoredNetworkAndStasisRangeMultiplierField() const
    { return BrzCampoAncorado<void*>(this, "VesselDynamicsComponent", 48); }
    unsigned char& UnSubmergedWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.UnSubmergedWaterMovementMode"); }
    BrzCampoPonteiro UnboardLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.UnboardLocationOffset")); }
    BrzCampoPonteiro UnlockedShipSkillNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.UnlockedShipSkillNodes")); }
    BrzCampoPonteiro UnlockedShipSkillRanksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.UnlockedShipSkillRanks")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.UnstasisLastInRangeTime"); }
    float& UntamedPoopTimeCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.UntamedPoopTimeCache"); }
    float& UntamedRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.UntamedRunningSpeedModifier"); }
    float& UntamedWalkingSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.UntamedWalkingSpeedModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.UpdateOverlapsMethodDuringLevelStreaming"); }
    double& UploadEarliestValidTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.UploadEarliestValidTime"); }
    FString& UploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShip.UploadedFromServerName"); }
    BitFieldValue<bool, unsigned __int32> UseBPGetWiegthedAttackOverride()
    { return { (void*)this, "UseBPGetWiegthedAttackOverride" }; }
    BrzCampoPonteiro VelocityBasedEnteredSwimmingSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.VelocityBasedEnteredSwimmingSounds")); }
    BrzCampoPonteiro VelocityBasedLandedSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.VelocityBasedLandedSounds")); }
    FName& VesselDynamicsCollisionProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.VesselDynamicsCollisionProfileName"); }
    BrzCampoPonteiro VesselDynamicsComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.VesselDynamicsComponent")); }
    UAnimMontage*& WakingConsumeFoodAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.WakingConsumeFoodAnim"); }
    float& WakingTameAffinityDecreaseFoodPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WakingTameAffinityDecreaseFoodPercentage"); }
    float& WakingTameFeedIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WakingTameFeedInterval"); }
    float& WakingTameFoodIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WakingTameFoodIncreaseMultiplier"); }
    float& WalkingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WalkingRotationRateModifier"); }
    TWeakObjectPtr<void>& WanderAroundActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.WanderAroundActor"); }
    float& WanderRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WanderRadiusMultiplier"); }
    BrzCampoPonteiro WaterSplashAgainstFastBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WaterSplashAgainstFastBoat")); }
    BrzCampoPonteiro WaterSplashAgainstMediumSpeedBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WaterSplashAgainstMediumSpeedBoat")); }
    BrzCampoPonteiro WaterSplashAgainstSlowBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WaterSplashAgainstSlowBoat")); }
    BrzCampoPonteiro WaterSplashAgainstStillBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WaterSplashAgainstStillBoat")); }
    float& WaterSubmergedDepthThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WaterSubmergedDepthThreshold"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CollisionImpactMinImpulseForDamage` +4, medido na build 25090264
    //  (offset absoluto medido: 0x337C; confianca alta)
    void*& WeldSweepIndexField() const
    { return BrzCampoAncorado<void*>(this, "CollisionImpactMinImpulseForDamage", 4); }
    float& WetDockOceanZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WetDockOceanZOffset"); }
    BrzCampoPonteiro WheelsChangeDirectionSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WheelsChangeDirectionSoundInfo")); }
    BrzCampoPonteiro WheelsTurningSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WheelsTurningSoundInfo")); }
    UAnimMontage*& WildAmbientHarvestingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalShip.WildAmbientHarvestingAnimation"); }
    TArray<UAnimMontage*>& WildAmbientHarvestingAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalShip.WildAmbientHarvestingAnimations"); }
    TArray<void*>& WildAmbientHarvestingComponentClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShip.WildAmbientHarvestingComponentClasses"); }
    TArray<AActor*>& WildFollowerRefsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "APrimalShip.WildFollowerRefs"); }
    AActor*& WildFollowingParentRefField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShip.WildFollowingParentRef"); }
    TWeakObjectPtr<void>& WildLimitTargetVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.WildLimitTargetVolume"); }
    float& WildPercentageChanceOfBabyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WildPercentageChanceOfBaby"); }
    float& WildRandomScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WildRandomScale"); }
    float& WildRunningRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.WildRunningRotationRateModifier"); }
    BrzCampoPonteiro WoodColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.WoodColorOptions")); }
    float& YawInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.YawInterpSpeed"); }
    BitFieldValue<bool, unsigned __int32> bAccurateOceanVolumeOverlaps()
    { return { (void*)this, "bAccurateOceanVolumeOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bActiveRunToggle()
    { return { (void*)this, "bActiveRunToggle" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowASACamera()
    { return { (void*)this, "bAllowASACamera" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBPNewDoorInteractionDrawHUD()
    { return { (void*)this, "bAllowBPNewDoorInteractionDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCarryCharacterWithoutRider()
    { return { (void*)this, "bAllowCarryCharacterWithoutRider" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCarryFlyerDinos()
    { return { (void*)this, "bAllowCarryFlyerDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCorpseDestructionWithPreventSaving()
    { return { (void*)this, "bAllowCorpseDestructionWithPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageSameTeamAndClass()
    { return { (void*)this, "bAllowDamageSameTeamAndClass" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoAutoConsumeInventoryFood()
    { return { (void*)this, "bAllowDinoAutoConsumeInventoryFood" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponry()
    { return { (void*)this, "bAllowMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponryPVE()
    { return { (void*)this, "bAllowMountedWeaponryPVE" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseByRemoteDino()
    { return { (void*)this, "bAllowMultiUseByRemoteDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPublicSeating()
    { return { (void*)this, "bAllowPublicSeating" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRiding()
    { return { (void*)this, "bAllowRiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingInTurretMode()
    { return { (void*)this, "bAllowRidingInTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingInWater()
    { return { (void*)this, "bAllowRidingInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileSwimming()
    { return { (void*)this, "bAllowRunningWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingCorpses()
    { return { (void*)this, "bAllowTargetingCorpses" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTrapping()
    { return { (void*)this, "bAllowTrapping" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTreadWater()
    { return { (void*)this, "bAllowTreadWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretTargetOverrideLocations()
    { return { (void*)this, "bAllowTurretTargetOverrideLocations" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWanderAroundActorWildTameMix()
    { return { (void*)this, "bAllowWanderAroundActorWildTameMix" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhistleThroughRemoteDino()
    { return { (void*)this, "bAllowWhistleThroughRemoteDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWildDinoEquipment()
    { return { (void*)this, "bAllowWildDinoEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWildRunningWithoutTarget()
    { return { (void*)this, "bAllowWildRunningWithoutTarget" }; }
    BitFieldValue<bool, unsigned __int32> bAllowsTurretMode()
    { return { (void*)this, "bAllowsTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysAllowStrafing()
    { return { (void*)this, "bAlwaysAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysUpdateDinoLimbWallAvoidance()
    { return { (void*)this, "bAlwaysUpdateDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bAnimIsMoving()
    { return { (void*)this, "bAnimIsMoving" }; }
    BitFieldValue<bool, unsigned __int32> bApplyDamageEffectToChildComponents()
    { return { (void*)this, "bApplyDamageEffectToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPCameraRotationFinal()
    { return { (void*)this, "bBPCameraRotationFinal" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPLimitPlayerRotation()
    { return { (void*)this, "bBPLimitPlayerRotation" }; }
    BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocation()
    { return { (void*)this, "bBPManagedFPVViewLocation" }; }
    BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocationNoRider()
    { return { (void*)this, "bBPManagedFPVViewLocationNoRider" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAllowedViewHitDir()
    { return { (void*)this, "bBPModifyAllowedViewHitDir" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBabyInitiallyUnclaimed()
    { return { (void*)this, "bBabyInitiallyUnclaimed" }; }
    BitFieldValue<bool, unsigned __int32> bBabyPreventExitingWater()
    { return { (void*)this, "bBabyPreventExitingWater" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedCurrentWetDockStructureID` +4, medido na build 25090264
    //  (offset absoluto medido: 0x3398; confianca alta)
    void*& bBeganPlayField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedCurrentWetDockStructureID", 4); }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBonesHidden()
    { return { (void*)this, "bBonesHidden" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCanAffectNavigationGeneration()
    { return { (void*)this, "bCanAffectNavigationGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeCarried()
    { return { (void*)this, "bCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDragged()
    { return { (void*)this, "bCanBeDragged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeOrdered()
    { return { (void*)this, "bCanBeOrdered" }; }
    BitFieldValue<bool, unsigned __int32> bCanBePushed()
    { return { (void*)this, "bCanBePushed" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeTamed()
    { return { (void*)this, "bCanBeTamed" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeTorpid()
    { return { (void*)this, "bCanBeTorpid" }; }
    BitFieldValue<bool, unsigned __int32> bCanDrag()
    { return { (void*)this, "bCanDrag" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverCrouch()
    { return { (void*)this, "bCanEverCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverProne()
    { return { (void*)this, "bCanEverProne" }; }
    BitFieldValue<bool, unsigned __int32> bCanHaveBaby()
    { return { (void*)this, "bCanHaveBaby" }; }
    BitFieldValue<bool, unsigned __int32> bCanIgnoreWater()
    { return { (void*)this, "bCanIgnoreWater" }; }
    BitFieldValue<bool, unsigned __int32> bCanMountOnHumans()
    { return { (void*)this, "bCanMountOnHumans" }; }
    BitFieldValue<bool, unsigned __int32> bCanPlayLandingAnim()
    { return { (void*)this, "bCanPlayLandingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bCanPushOthers()
    { return { (void*)this, "bCanPushOthers" }; }
    BitFieldValue<bool, unsigned __int32> bCanRun()
    { return { (void*)this, "bCanRun" }; }
    BitFieldValue<bool, unsigned __int32> bCanSecondaryMountOnHumans()
    { return { (void*)this, "bCanSecondaryMountOnHumans" }; }
    BitFieldValue<bool, unsigned __int32> bCanTargetVehicles()
    { return { (void*)this, "bCanTargetVehicles" }; }
    BitFieldValue<bool, unsigned __int32> bCanUnclaimTame()
    { return { (void*)this, "bCanUnclaimTame" }; }
    BitFieldValue<bool, unsigned __int32> bCancelInterpolation()
    { return { (void*)this, "bCancelInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bCheatForceTameRide()
    { return { (void*)this, "bCheatForceTameRide" }; }
    BitFieldValue<bool, unsigned __int32> bCheatPossessed()
    { return { (void*)this, "bCheatPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffModifyAimOffsetNoTarget()
    { return { (void*)this, "bCheckBuffModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bClampOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bClampOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bClearOnConsume()
    { return { (void*)this, "bClearOnConsume" }; }
    BitFieldValue<bool, unsigned __int32> bClearRiderOnDinoImmobilized()
    { return { (void*)this, "bClearRiderOnDinoImmobilized" }; }
    BitFieldValue<bool, unsigned __int32> bClientCheckEncroachmentOnNetUpdate()
    { return { (void*)this, "bClientCheckEncroachmentOnNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bClientInterpLocationInCustomMovemode()
    { return { (void*)this, "bClientInterpLocationInCustomMovemode" }; }
    BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotion()
    { return { (void*)this, "bClientResimulateRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotionSources()
    { return { (void*)this, "bClientResimulateRootMotionSources" }; }
    BitFieldValue<bool, unsigned __int32> bClientUpdating()
    { return { (void*)this, "bClientUpdating" }; }
    BitFieldValue<bool, unsigned __int32> bClientWasFalling()
    { return { (void*)this, "bClientWasFalling" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollectVictimItems()
    { return { (void*)this, "bCollectVictimItems" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeZoomInput()
    { return { (void*)this, "bConsumeZoomInput" }; }
    BitFieldValue<bool, unsigned __int32> bControlledDinoPreventsPlayerInventory()
    { return { (void*)this, "bControlledDinoPreventsPlayerInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCreatureIsImmuneToServerSoftTameLimitDestruction()
    { return { (void*)this, "bCreatureIsImmuneToServerSoftTameLimitDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bCuddleRequestRefreshed()
    { return { (void*)this, "bCuddleRequestRefreshed" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI()
    { return { (void*)this, "bDamageNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bDeathUseRagdoll()
    { return { (void*)this, "bDeathUseRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bDebugBaby()
    { return { (void*)this, "bDebugBaby" }; }
    BitFieldValue<bool, unsigned __int32> bDebugIK()
    { return { (void*)this, "bDebugIK" }; }
    BitFieldValue<bool, unsigned __int32> bDebugIK_ShowTraceNames()
    { return { (void*)this, "bDebugIK_ShowTraceNames" }; }
    BitFieldValue<bool, unsigned __int32> bDebugMeleeAttacks()
    { return { (void*)this, "bDebugMeleeAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant()
    { return { (void*)this, "bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis()
    { return { (void*)this, "bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDieIfLeftWater()
    { return { (void*)this, "bDieIfLeftWater" }; }
    BitFieldValue<bool, unsigned __int32> bDinoHasBonded()
    { return { (void*)this, "bDinoHasBonded" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAutoMatingWhileTamedWandering()
    { return { (void*)this, "bDisableAutoMatingWhileTamedWandering" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCameraShakeOnNotifyHit()
    { return { (void*)this, "bDisableCameraShakeOnNotifyHit" }; }
    BitFieldValue<bool, unsigned __int32> bDisableControllerDesiredRotation()
    { return { (void*)this, "bDisableControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultDinoTaming()
    { return { (void*)this, "bDisableDefaultDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFPV()
    { return { (void*)this, "bDisableFPV" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvestHealthGain()
    { return { (void*)this, "bDisableHarvestHealthGain" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvesting()
    { return { (void*)this, "bDisableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePathfinding()
    { return { (void*)this, "bDisablePathfinding" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSpawnDefaultController()
    { return { (void*)this, "bDisableSpawnDefaultController" }; }
    BitFieldValue<bool, unsigned __int32> bDisabledFromAscension()
    { return { (void*)this, "bDisabledFromAscension" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPostNetReplication()
    { return { (void*)this, "bDisallowPostNetReplication" }; }
    BitFieldValue<bool, unsigned __int32> bDoStepDamage()
    { return { (void*)this, "bDoStepDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyEmitPoop()
    { return { (void*)this, "bDontActuallyEmitPoop" }; }
    BitFieldValue<bool, unsigned __int32> bDontForceUpdateRateOptimizations()
    { return { (void*)this, "bDontForceUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideToNavMeshStepHeight()
    { return { (void*)this, "bDontOverrideToNavMeshStepHeight" }; }
    BitFieldValue<bool, unsigned __int32> bDontWander()
    { return { (void*)this, "bDontWander" }; }
    BitFieldValue<bool, unsigned __int32> bDraggedFromExtremitiesOnly()
    { return { (void*)this, "bDraggedFromExtremitiesOnly" }; }
    BitFieldValue<bool, unsigned __int32> bDrawHealthBar()
    { return { (void*)this, "bDrawHealthBar" }; }
    BitFieldValue<bool, unsigned __int32> bDropWildEggsWithoutMateBoost()
    { return { (void*)this, "bDropWildEggsWithoutMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEggBoosted()
    { return { (void*)this, "bEggBoosted" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAnimationGroundConforming()
    { return { (void*)this, "bEnableAnimationGroundConforming" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableIK()
    { return { (void*)this, "bEnableIK" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMouthFlapAnimations()
    { return { (void*)this, "bEnableMouthFlapAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTamedMating()
    { return { (void*)this, "bEnableTamedMating" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTamedWandering()
    { return { (void*)this, "bEnableTamedWandering" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowBackwardsFlight()
    { return { (void*)this, "bFlyerDinoAllowBackwardsFlight" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowStrafing()
    { return { (void*)this, "bFlyerDinoAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDontGainImpulseOnSubmerged()
    { return { (void*)this, "bFlyerDontGainImpulseOnSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerForceLimitPitch()
    { return { (void*)this, "bFlyerForceLimitPitch" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerForceNoPitch()
    { return { (void*)this, "bFlyerForceNoPitch" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPrioritizeAllyMountToCarry()
    { return { (void*)this, "bFlyerPrioritizeAllyMountToCarry" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowBackwardsMovement()
    { return { (void*)this, "bForceAllowBackwardsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowDediServerGroundConformInterpolate()
    { return { (void*)this, "bForceAllowDediServerGroundConformInterpolate" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowMountedAimOffset()
    { return { (void*)this, "bForceAllowMountedAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowTamedTickEggLay()
    { return { (void*)this, "bForceAllowTamedTickEggLay" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBasing()
    { return { (void*)this, "bForceAlwaysAllowBasing" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysUpdateMesh()
    { return { (void*)this, "bForceAlwaysUpdateMesh" }; }
    BitFieldValue<bool, unsigned __int32> bForceAutoTame()
    { return { (void*)this, "bForceAutoTame" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableClientGravitySim()
    { return { (void*)this, "bForceDisableClientGravitySim" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablingTaming()
    { return { (void*)this, "bForceDisablingTaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUD()
    { return { (void*)this, "bForceDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUDWithoutRecentlyRendered()
    { return { (void*)this, "bForceDrawHUDWithoutRecentlyRendered" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideSaddle()
    { return { (void*)this, "bForceHideSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceIKOnDedicatedServer()
    { return { (void*)this, "bForceIKOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoCharacterStatusComponentTick()
    { return { (void*)this, "bForceNoCharacterStatusComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePerFrameTicking()
    { return { (void*)this, "bForcePerFrameTicking" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAllInput()
    { return { (void*)this, "bForcePreventAllInput" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater()
    { return { (void*)this, "bForcePreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventInventoryAccess()
    { return { (void*)this, "bForcePreventInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceRiderDrawCrosshair()
    { return { (void*)this, "bForceRiderDrawCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceSimpleTeleportFade()
    { return { (void*)this, "bForceSimpleTeleportFade" }; }
    BitFieldValue<bool, unsigned __int32> bForceTickingBehaviorTreeEveryFrame()
    { return { (void*)this, "bForceTickingBehaviorTreeEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseAltAimSocketsForTurrets()
    { return { (void*)this, "bForceUseAltAimSocketsForTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseCustomCameraComponent()
    { return { (void*)this, "bForceUseCustomCameraComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceValidUnstasisCaster()
    { return { (void*)this, "bForceValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildEncumberBasedOnTamedDino()
    { return { (void*)this, "bForceWildEncumberBasedOnTamedDino" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildMeleeSwingTraceAll()
    { return { (void*)this, "bForceWildMeleeSwingTraceAll" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bGlideWhenFalling()
    { return { (void*)this, "bGlideWhenFalling" }; }
    BitFieldValue<bool, unsigned __int32> bGlideWhenMounted()
    { return { (void*)this, "bGlideWhenMounted" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +40, medido na build 25090264
    //  (offset absoluto medido: 0x3558; confianca media)
    void*& bHackCheckingForInvalidPhysXField() const
    { return BrzCampoAncorado<void*>(this, "DestroyIfNoTargetUnderShoreDistanceTimer", 40); }
    BitFieldValue<bool, unsigned __int32> bHadLinkedSupplyCrate()
    { return { (void*)this, "bHadLinkedSupplyCrate" }; }
    BitFieldValue<bool, unsigned __int32> bHadStaticBase()
    { return { (void*)this, "bHadStaticBase" }; }
    BitFieldValue<bool, unsigned __int32> bHadStaticMapActorBase()
    { return { (void*)this, "bHadStaticMapActorBase" }; }
    BitFieldValue<bool, unsigned __int32> bHasBotRider()
    { return { (void*)this, "bHasBotRider" }; }
    BitFieldValue<bool, unsigned __int32> bHasBuffPreSerializeForInstigator()
    { return { (void*)this, "bHasBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bHasBuffPreventingUploading()
    { return { (void*)this, "bHasBuffPreventingUploading" }; }
    BitFieldValue<bool, unsigned __int32> bHasDynamicBase()
    { return { (void*)this, "bHasDynamicBase" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasMateBoost()
    { return { (void*)this, "bHasMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayerController()
    { return { (void*)this, "bHasPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bHasRider()
    { return { (void*)this, "bHasRider" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenForLocalPassenger()
    { return { (void*)this, "bHiddenForLocalPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingHUD()
    { return { (void*)this, "bHideFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingName()
    { return { (void*)this, "bHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromScans()
    { return { (void*)this, "bHideFromScans" }; }
    BitFieldValue<bool, unsigned __int32> bIKEnabled()
    { return { (void*)this, "bIKEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bIfAmphibiousCountAsLandDinoForNPCVolumes()
    { return { (void*)this, "bIfAmphibiousCountAsLandDinoForNPCVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllImmobilizationTraps()
    { return { (void*)this, "bIgnoreAllImmobilizationTraps" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllWhistles()
    { return { (void*)this, "bIgnoreAllWhistles" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllyLook()
    { return { (void*)this, "bIgnoreAllyLook" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreCorpseDecompositionMultipliers()
    { return { (void*)this, "bIgnoreCorpseDecompositionMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestroyOnRapidDeath()
    { return { (void*)this, "bIgnoreDestroyOnRapidDeath" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreFlierRidingRestrictions()
    { return { (void*)this, "bIgnoreFlierRidingRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreLowGravityDisorientation()
    { return { (void*)this, "bIgnoreLowGravityDisorientation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNPCCountVolumes()
    { return { (void*)this, "bIgnoreNPCCountVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreOnDeathNotifyNearbyCharacters()
    { return { (void*)this, "bIgnoreOnDeathNotifyNearbyCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    bool& bInBaseReplicationField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShip.bInBaseReplication"); }
    BitFieldValue<bool, unsigned __int32> bInRagdoll()
    { return { (void*)this, "bInRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bIncludePreventManualInPassengerCount()
    { return { (void*)this, "bIncludePreventManualInPassengerCount" }; }
    BitFieldValue<bool, unsigned __int32> bIncrementedZoneManagerDirectLink()
    { return { (void*)this, "bIncrementedZoneManagerDirectLink" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptPlayerEmotes()
    { return { (void*)this, "bInterceptPlayerEmotes" }; }
    BitFieldValue<bool, unsigned __int32> bInterpHealthDamageMaterialOverlayAlpha()
    { return { (void*)this, "bInterpHealthDamageMaterialOverlayAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bIsAWildFollowerKnownServerside()
    { return { (void*)this, "bIsAWildFollowerKnownServerside" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmphibious()
    { return { (void*)this, "bIsAmphibious" }; }
    BitFieldValue<bool, unsigned __int32> bIsAnimSharing()
    { return { (void*)this, "bIsAnimSharing" }; }
    BitFieldValue<bool, unsigned __int32> bIsAtMaxInventoryItems()
    { return { (void*)this, "bIsAtMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsAttachedOtherCharacter()
    { return { (void*)this, "bIsAttachedOtherCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsBaby()
    { return { (void*)this, "bIsBaby" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingDragged()
    { return { (void*)this, "bIsBeingDragged" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlinking()
    { return { (void*)this, "bIsBlinking" }; }
    BitFieldValue<bool, unsigned __int32> bIsBossDino()
    { return { (void*)this, "bIsBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffed()
    { return { (void*)this, "bIsBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarnivore()
    { return { (void*)this, "bIsCarnivore" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarried()
    { return { (void*)this, "bIsCarried" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarriedAsPassenger()
    { return { (void*)this, "bIsCarriedAsPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryingCharacter()
    { return { (void*)this, "bIsCarryingCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryingPassenger()
    { return { (void*)this, "bIsCarryingPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bIsCharging()
    { return { (void*)this, "bIsCharging" }; }
    BitFieldValue<bool, unsigned __int32> bIsCloneDino()
    { return { (void*)this, "bIsCloneDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsCorrupted()
    { return { (void*)this, "bIsCorrupted" }; }
    BitFieldValue<bool, unsigned __int32> bIsCrouched()
    { return { (void*)this, "bIsCrouched" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyingDino()
    { return { (void*)this, "bIsDestroyingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoingDraggedInterp()
    { return { (void*)this, "bIsDoingDraggedInterp" }; }
    BitFieldValue<bool, unsigned __int32> bIsDragging()
    { return { (void*)this, "bIsDragging" }; }
    BitFieldValue<bool, unsigned __int32> bIsDraggingWithGrapHook()
    { return { (void*)this, "bIsDraggingWithGrapHook" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnforcer()
    { return { (void*)this, "bIsEnforcer" }; }
    BitFieldValue<bool, unsigned __int32> bIsExtinctionTitan()
    { return { (void*)this, "bIsExtinctionTitan" }; }
    BitFieldValue<bool, unsigned __int32> bIsFemale()
    { return { (void*)this, "bIsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlying()
    { return { (void*)this, "bIsFlying" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsHeldJumpSlowFalling()
    { return { (void*)this, "bIsHeldJumpSlowFalling" }; }
    BitFieldValue<bool, unsigned __int32> bIsHordeDino()
    { return { (void*)this, "bIsHordeDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsHost()
    { return { (void*)this, "bIsHost" }; }
    BitFieldValue<bool, unsigned __int32> bIsImmobilized()
    { return { (void*)this, "bIsImmobilized" }; }
    BitFieldValue<bool, unsigned __int32> bIsInTurretMode()
    { return { (void*)this, "bIsInTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsLanding()
    { return { (void*)this, "bIsLanding" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatched()
    { return { (void*)this, "bIsLatched" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatchedDownward()
    { return { (void*)this, "bIsLatchedDownward" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatching()
    { return { (void*)this, "bIsLatching" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocalViewTarget()
    { return { (void*)this, "bIsLocalViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsMassMoving()
    { return { (void*)this, "bIsMassMoving" }; }
    BitFieldValue<bool, unsigned __int32> bIsMek()
    { return { (void*)this, "bIsMek" }; }
    BitFieldValue<bool, unsigned __int32> bIsMounted()
    { return { (void*)this, "bIsMounted" }; }
    BitFieldValue<bool, unsigned __int32> bIsNursing()
    { return { (void*)this, "bIsNursing" }; }
    BitFieldValue<bool, unsigned __int32> bIsNursingDino()
    { return { (void*)this, "bIsNursingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsOceanManagerDino()
    { return { (void*)this, "bIsOceanManagerDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsOverridingClientPositionErrorTolerance()
    { return { (void*)this, "bIsOverridingClientPositionErrorTolerance" }; }
    BitFieldValue<bool, unsigned __int32> bIsParentWildDino()
    { return { (void*)this, "bIsParentWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingLowHealthAnim()
    { return { (void*)this, "bIsPlayingLowHealthAnim" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingTurningAnim()
    { return { (void*)this, "bIsPlayingTurningAnim" }; }
    BitFieldValue<bool, unsigned __int32> bIsProne()
    { return { (void*)this, "bIsProne" }; }
    BitFieldValue<bool, unsigned __int32> bIsRaidDino()
    { return { (void*)this, "bIsRaidDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bIsSaveProfilingDino()
    { return { (void*)this, "bIsSaveProfilingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsScout()
    { return { (void*)this, "bIsScout" }; }
    BitFieldValue<bool, unsigned __int32> bIsSecondaryMounted()
    { return { (void*)this, "bIsSecondaryMounted" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkinned()
    { return { (void*)this, "bIsSkinned" }; }
    BitFieldValue<bool, unsigned __int32> bIsSleeping()
    { return { (void*)this, "bIsSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bIsTemporaryMissionDino()
    { return { (void*)this, "bIsTemporaryMissionDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bIsVoiceTalking()
    { return { (void*)this, "bIsVoiceTalking" }; }
    BitFieldValue<bool, unsigned __int32> bIsWakingTame()
    { return { (void*)this, "bIsWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bIsWandering()
    { return { (void*)this, "bIsWandering" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnRelease()
    { return { (void*)this, "bJumpOnRelease" }; }
    BitFieldValue<bool, unsigned __int32> bKeepAffinityOnDamageRecievedWakingTame()
    { return { (void*)this, "bKeepAffinityOnDamageRecievedWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bLimitRiderYawOnLatched()
    { return { (void*)this, "bLimitRiderYawOnLatched" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bLocalIsDragging()
    { return { (void*)this, "bLocalIsDragging" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeSwingDamageBlockedByStrutures()
    { return { (void*)this, "bMeleeSwingDamageBlockedByStrutures" }; }
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
    BitFieldValue<bool, unsigned __int32> bNeutered()
    { return { (void*)this, "bNeutered" }; }
    BitFieldValue<bool, unsigned __int32> bNoDamageImpulse()
    { return { (void*)this, "bNoDamageImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bNoKillXP()
    { return { (void*)this, "bNoKillXP" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTargetConscious()
    { return { (void*)this, "bOnlyTargetConscious" }; }
    BitFieldValue<bool, unsigned __int32> bOrbitCamera()
    { return { (void*)this, "bOrbitCamera" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideBlendSpaceSmoothType()
    { return { (void*)this, "bOverrideBlendSpaceSmoothType" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairAlpha()
    { return { (void*)this, "bOverrideCrosshairAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairColor()
    { return { (void*)this, "bOverrideCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFlyingVelocity()
    { return { (void*)this, "bOverrideFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideNewFallVelocity()
    { return { (void*)this, "bOverrideNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideSwimmingAcceleration()
    { return { (void*)this, "bOverrideSwimmingAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideSwimmingVelocity()
    { return { (void*)this, "bOverrideSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideWalkingVelocity()
    { return { (void*)this, "bOverrideWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingSupportSkins()
    { return { (void*)this, "bPaintingSupportSkins" }; }
    BitFieldValue<bool, unsigned __int32> bPassiveFlee()
    { return { (void*)this, "bPassiveFlee" }; }
    BitFieldValue<bool, unsigned __int32> bPressedJump()
    { return { (void*)this, "bPressedJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllBuffs()
    { return { (void*)this, "bPreventAllBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllRiderWeapons()
    { return { (void*)this, "bPreventAllRiderWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAnimationUpdateRateOptimizations()
    { return { (void*)this, "bPreventAnimationUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearShoulderMountOfDiffTeam()
    { return { (void*)this, "bPreventClearShoulderMountOfDiffTeam" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCloning()
    { return { (void*)this, "bPreventCloning" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoResetAffinityOnUnsleep()
    { return { (void*)this, "bPreventDinoResetAffinityOnUnsleep" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDynamicMusic()
    { return { (void*)this, "bPreventDynamicMusic" }; }
    BitFieldValue<bool, unsigned __int32> bPreventExportDino()
    { return { (void*)this, "bPreventExportDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallingBumpCheck()
    { return { (void*)this, "bPreventFallingBumpCheck" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFlyerLanding()
    { return { (void*)this, "bPreventFlyerLanding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventForceBabyFlyerLand()
    { return { (void*)this, "bPreventForceBabyFlyerLand" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHUDInitialization()
    { return { (void*)this, "bPreventHUDInitialization" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHibernation()
    { return { (void*)this, "bPreventHibernation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHurtAnim()
    { return { (void*)this, "bPreventHurtAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPreventIKWhenNotWalking()
    { return { (void*)this, "bPreventIKWhenNotWalking" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryAccess()
    { return { (void*)this, "bPreventInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLiveBlinking()
    { return { (void*)this, "bPreventLiveBlinking" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMating()
    { return { (void*)this, "bPreventMating" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMoveUp()
    { return { (void*)this, "bPreventMoveUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMovement()
    { return { (void*)this, "bPreventMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPassengerFPV()
    { return { (void*)this, "bPreventPassengerFPV" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPerPixelPainting()
    { return { (void*)this, "bPreventPerPixelPainting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRotationRateModifier()
    { return { (void*)this, "bPreventRotationRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTargetingAndMovement()
    { return { (void*)this, "bPreventTargetingAndMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUntamedRun()
    { return { (void*)this, "bPreventUntamedRun" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploading()
    { return { (void*)this, "bPreventUploading" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWakingTameFeeding()
    { return { (void*)this, "bPreventWakingTameFeeding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWanderingUnderWater()
    { return { (void*)this, "bPreventWanderingUnderWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWaterHopCorrectionVelChange()
    { return { (void*)this, "bPreventWaterHopCorrectionVelChange" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWildTrapping()
    { return { (void*)this, "bPreventWildTrapping" }; }
    BitFieldValue<bool, unsigned __int32> bProxyIsJumpForceApplied()
    { return { (void*)this, "bProxyIsJumpForceApplied" }; }
    BitFieldValue<bool, unsigned __int32> bRagdollIgnoresPawnCapsules()
    { return { (void*)this, "bRagdollIgnoresPawnCapsules" }; }
    BitFieldValue<bool, unsigned __int32> bReachedMaxStructures()
    { return { (void*)this, "bReachedMaxStructures" }; }
    BitFieldValue<bool, unsigned __int32> bReadyToPoop()
    { return { (void*)this, "bReadyToPoop" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRecentlyUpdateIk()
    { return { (void*)this, "bRecentlyUpdateIk" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshedColorization()
    { return { (void*)this, "bRefreshedColorization" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bRemainLatchedOnClearRider()
    { return { (void*)this, "bRemainLatchedOnClearRider" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteRunning()
    { return { (void*)this, "bRemoteRunning" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateDesiredRotation()
    { return { (void*)this, "bReplicateDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePassengerTPVAim()
    { return { (void*)this, "bReplicatePassengerTPVAim" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePitchWhileSwimming()
    { return { (void*)this, "bReplicatePitchWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatedIsSubmerged()
    { return { (void*)this, "bReplicatedIsSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDontRequireSaddle()
    { return { (void*)this, "bRiderDontRequireSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bRiderJumpTogglesFlight()
    { return { (void*)this, "bRiderJumpTogglesFlight" }; }
    BitFieldValue<bool, unsigned __int32> bRiderMovementLocked()
    { return { (void*)this, "bRiderMovementLocked" }; }
    BitFieldValue<bool, unsigned __int32> bRidingIsSeperateUnstasisCaster()
    { return { (void*)this, "bRidingIsSeperateUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bRidingRequiresTamed()
    { return { (void*)this, "bRidingRequiresTamed" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SailsPivotingSoundinfo` +40, medido na build 25090264
    //  (offset absoluto medido: 0x2CD0; confianca media)
    void*& bRopeReachedEndOfTravelField() const
    { return BrzCampoAncorado<void*>(this, "SailsPivotingSoundinfo", 40); }
    BitFieldValue<bool, unsigned __int32> bRotateToFaceLatchingObject()
    { return { (void*)this, "bRotateToFaceLatchingObject" }; }
    BitFieldValue<bool, unsigned __int32> bRotatingUpdatesDinoIK()
    { return { (void*)this, "bRotatingUpdatesDinoIK" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bServerForceUpdateDinoGameplayMeshNearPlayer()
    { return { (void*)this, "bServerForceUpdateDinoGameplayMeshNearPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bServerInitializedDino()
    { return { (void*)this, "bServerInitializedDino" }; }
    BitFieldValue<bool, unsigned __int32> bServerMoveIgnoreRootMotion()
    { return { (void*)this, "bServerMoveIgnoreRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeInGodMode()
    { return { (void*)this, "bShouldBeInGodMode" }; }
    BitFieldValue<bool, unsigned __int32> bSimGravityDisabled()
    { return { (void*)this, "bSimGravityDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bSimulateRootMotion()
    { return { (void*)this, "bSimulateRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bSingleplayerFreezePhysicsWhenNoTarget()
    { return { (void*)this, "bSingleplayerFreezePhysicsWhenNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bSkipProcessRootRotAndLocInAimOffset()
    { return { (void*)this, "bSkipProcessRootRotAndLocInAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bSleepedWaterRagdoll()
    { return { (void*)this, "bSleepedWaterRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bSleepingDisableRagdoll()
    { return { (void*)this, "bSleepingDisableRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStepDamageFoliageOnly()
    { return { (void*)this, "bStepDamageFoliageOnly" }; }
    BitFieldValue<bool, unsigned __int32> bSupportWakingTame()
    { return { (void*)this, "bSupportWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPassengerSeats()
    { return { (void*)this, "bSupportsPassengerSeats" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressDeathNotification()
    { return { (void*)this, "bSuppressDeathNotification" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressPlayerKillNotification()
    { return { (void*)this, "bSuppressPlayerKillNotification" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressWakingTameMessage()
    { return { (void*)this, "bSuppressWakingTameMessage" }; }
    BitFieldValue<bool, unsigned __int32> bSwimmingWaterDinoMoveLikeFlying()
    { return { (void*)this, "bSwimmingWaterDinoMoveLikeFlying" }; }
    BitFieldValue<bool, unsigned __int32> bTakingOff()
    { return { (void*)this, "bTakingOff" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAIAllowSpecialAttacks()
    { return { (void*)this, "bTamedAIAllowSpecialAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAlwaysUseTamedUnsleepAnim()
    { return { (void*)this, "bTamedAlwaysUseTamedUnsleepAnim" }; }
    BitFieldValue<bool, unsigned __int32> bTamingHasFood()
    { return { (void*)this, "bTamingHasFood" }; }
    BitFieldValue<bool, unsigned __int32> bTargetEverything()
    { return { (void*)this, "bTargetEverything" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingIgnoreWildDinos()
    { return { (void*)this, "bTargetingIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingIgnoredByWildDinos()
    { return { (void*)this, "bTargetingIgnoredByWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUniqueDino()
    { return { (void*)this, "bUniqueDino" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateDinoLimbWallAvoidance()
    { return { (void*)this, "bUpdateDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedAnimLerp()
    { return { (void*)this, "bUseAdvancedAnimLerp" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmphibiousTargeting()
    { return { (void*)this, "bUseAmphibiousTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustAttackIndex()
    { return { (void*)this, "bUseBPAdjustAttackIndex" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage()
    { return { (void*)this, "bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowRunningWhileFalling()
    { return { (void*)this, "bUseBPAllowRunningWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowTeamToTrackTamingDino()
    { return { (void*)this, "bUseBPAllowTeamToTrackTamingDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanCombineMoves()
    { return { (void*)this, "bUseBPCanCombineMoves" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanTargetCorpse()
    { return { (void*)this, "bUseBPCanTargetCorpse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckCanSpawnFromLocation()
    { return { (void*)this, "bUseBPCheckCanSpawnFromLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoFaceRotation()
    { return { (void*)this, "bUseBPDinoFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoTooltipCustomProgressBar()
    { return { (void*)this, "bUseBPDinoTooltipCustomProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFaceRotation()
    { return { (void*)this, "bUseBPFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceKeepBasedOnDino()
    { return { (void*)this, "bUseBPForceKeepBasedOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetArmorDurabilityDecreaseMultiplier()
    { return { (void*)this, "bUseBPGetArmorDurabilityDecreaseMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFinalMaxSpeed()
    { return { (void*)this, "bUseBPGetFinalMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOtherActorToIgnore()
    { return { (void*)this, "bUseBPGetOtherActorToIgnore" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOverrideCameraInterpSpeed()
    { return { (void*)this, "bUseBPGetOverrideCameraInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTamedFollowTarget()
    { return { (void*)this, "bUseBPGetTamedFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirability()
    { return { (void*)this, "bUseBPGetTargetingDesirability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirabilityForTurrets()
    { return { (void*)this, "bUseBPGetTargetingDesirabilityForTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEvents()
    { return { (void*)this, "bUseBPInterceptMoveInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEventsEvenIfZero()
    { return { (void*)this, "bUseBPInterceptMoveInputEventsEvenIfZero" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptTurnInputEvents()
    { return { (void*)this, "bUseBPInterceptTurnInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPItemSlotOverrides()
    { return { (void*)this, "bUseBPItemSlotOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyDesiredRotation()
    { return { (void*)this, "bUseBPModifyDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyWanderAroundActorLocation()
    { return { (void*)this, "bUseBPModifyWanderAroundActorLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyXPMultiplier()
    { return { (void*)this, "bUseBPModifyXPMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAdded()
    { return { (void*)this, "bUseBPNotifyOnBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAddedToMountChar()
    { return { (void*)this, "bUseBPNotifyOnBuffAddedToMountChar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCarryCharacter()
    { return { (void*)this, "bUseBPOnCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnEndCharging()
    { return { (void*)this, "bUseBPOnEndCharging" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnImmobilize()
    { return { (void*)this, "bUseBPOnImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLethalDamage()
    { return { (void*)this, "bUseBPOnLethalDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSimulatedTick()
    { return { (void*)this, "bUseBPOnSimulatedTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAccessInventoryInput()
    { return { (void*)this, "bUseBPOverrideAccessInventoryInput" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBasedPlayerAimOffsetYaw()
    { return { (void*)this, "bUseBPOverrideBasedPlayerAimOffsetYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bUseBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewSwimVelocity()
    { return { (void*)this, "bUseBPOverrideCharacterNewSwimVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterParticle()
    { return { (void*)this, "bUseBPOverrideCharacterParticle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterSound()
    { return { (void*)this, "bUseBPOverrideCharacterSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageCauserHitMarker()
    { return { (void*)this, "bUseBPOverrideDamageCauserHitMarker" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideFloatingHUDLocation()
    { return { (void*)this, "bUseBPOverrideFloatingHUDLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsSubmergedForWaterTargeting()
    { return { (void*)this, "bUseBPOverrideIsSubmergedForWaterTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideJumpZModifier()
    { return { (void*)this, "bUseBPOverrideJumpZModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePassengerAdditiveAnim()
    { return { (void*)this, "bUseBPOverridePassengerAdditiveAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePhysicsImpulses()
    { return { (void*)this, "bUseBPOverridePhysicsImpulses" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePlayAnimExMontage()
    { return { (void*)this, "bUseBPOverridePlayAnimExMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderAccessInventoryInput()
    { return { (void*)this, "bUseBPOverrideRiderAccessInventoryInput" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderIndoorsCheckLocation()
    { return { (void*)this, "bUseBPOverrideRiderIndoorsCheckLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideStencilAllianceForTarget()
    { return { (void*)this, "bUseBPOverrideStencilAllianceForTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTamingDescriptionLabel()
    { return { (void*)this, "bUseBPOverrideTamingDescriptionLabel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPlayHitEffect()
    { return { (void*)this, "bUseBPPlayHitEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventMovementMode()
    { return { (void*)this, "bUseBPPreventMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetCharacterMeshseMaterialScalarParamValue()
    { return { (void*)this, "bUseBPSetCharacterMeshseMaterialScalarParamValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetTamedFollowTarget()
    { return { (void*)this, "bUseBPSetTamedFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShieldBlock()
    { return { (void*)this, "bUseBPShieldBlock" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldUseLongFallCameraPivotZValues()
    { return { (void*)this, "bUseBPShouldUseLongFallCameraPivotZValues" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipTerrainTraceForCarriedCharacter()
    { return { (void*)this, "bUseBPSkipTerrainTraceForCarriedCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTimerNonDedicated()
    { return { (void*)this, "bUseBPTimerNonDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTimerServer()
    { return { (void*)this, "bUseBPTimerServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CanFly()
    { return { (void*)this, "bUseBP_CanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CustomModifier_MaxSpeed()
    { return { (void*)this, "bUseBP_CustomModifier_MaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ForceAllowBuffClasses()
    { return { (void*)this, "bUseBP_ForceAllowBuffClasses" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ModifyInputAcceleration()
    { return { (void*)this, "bUseBP_ModifyInputAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnNotifies()
    { return { (void*)this, "bUseBP_OnBasedPawnNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnSetNotifies()
    { return { (void*)this, "bUseBP_OnBasedPawnSetNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnPostNetReplication()
    { return { (void*)this, "bUseBP_OnPostNetReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideBasedCharactersCameraInterpSpeed()
    { return { (void*)this, "bUseBP_OverrideBasedCharactersCameraInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideCarriedCharacterTransform()
    { return { (void*)this, "bUseBP_OverrideCarriedCharacterTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideDinoName()
    { return { (void*)this, "bUseBP_OverrideDinoName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideRiderCameraCollisionSweep()
    { return { (void*)this, "bUseBP_OverrideRiderCameraCollisionSweep" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ShouldPreventBasedCharactersCameraInterpolation()
    { return { (void*)this, "bUseBP_ShouldPreventBasedCharactersCameraInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintExtraBabyScale()
    { return { (void*)this, "bUseBlueprintExtraBabyScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintJumpInputEvents()
    { return { (void*)this, "bUseBlueprintJumpInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorization()
    { return { (void*)this, "bUseColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationPitch()
    { return { (void*)this, "bUseControllerRotationPitch" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationRoll()
    { return { (void*)this, "bUseControllerRotationRoll" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationYaw()
    { return { (void*)this, "bUseControllerRotationYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeferredMovement()
    { return { (void*)this, "bUseDeferredMovement" }; }
    BitFieldValue<bool, unsigned __int32> bUseDescriptiveNameGenderOverrides()
    { return { (void*)this, "bUseDescriptiveNameGenderOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoLimbWallAvoidance()
    { return { (void*)this, "bUseDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel()
    { return { (void*)this, "bUseFixedSpawnLevel" }; }
    BitFieldValue<bool, unsigned __int32> bUseGang()
    { return { (void*)this, "bUseGang" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetOverrideSocket()
    { return { (void*)this, "bUseGetOverrideSocket" }; }
    BitFieldValue<bool, unsigned __int32> bUseMountCharacterProneOffset()
    { return { (void*)this, "bUseMountCharacterProneOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseMyBabyCuddleFoodTypesAsAdditional()
    { return { (void*)this, "bUseMyBabyCuddleFoodTypesAsAdditional" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCharacterSteppedNotify()
    { return { (void*)this, "bUseOnCharacterSteppedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnStartedAllyTargetLooking()
    { return { (void*)this, "bUseOnStartedAllyTargetLooking" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnUpdateMountedDinoMeshHiding()
    { return { (void*)this, "bUseOnUpdateMountedDinoMeshHiding" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlayerMountedCarryingDinoAnimation()
    { return { (void*)this, "bUsePlayerMountedCarryingDinoAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUsePoopAnimationNotify()
    { return { (void*)this, "bUsePoopAnimationNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUsePreciseLaunching()
    { return { (void*)this, "bUsePreciseLaunching" }; }
    BitFieldValue<bool, unsigned __int32> bUseRandomLookAtTarget()
    { return { (void*)this, "bUseRandomLookAtTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseRootLocSwimOffset()
    { return { (void*)this, "bUseRootLocSwimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseShoulderMountedLaunch()
    { return { (void*)this, "bUseShoulderMountedLaunch" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseWildRandomScale()
    { return { (void*)this, "bUseWildRandomScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseZeroGravityWander()
    { return { (void*)this, "bUseZeroGravityWander" }; }
    BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PostRep()
    { return { (void*)this, "bUse_ModifySavedMoveAcceleration_PostRep" }; }
    BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PreRep()
    { return { (void*)this, "bUse_ModifySavedMoveAcceleration_PreRep" }; }
    BitFieldValue<bool, unsigned __int32> bUsesGender()
    { return { (void*)this, "bUsesGender" }; }
    BitFieldValue<bool, unsigned __int32> bUsesRunningAnimation()
    { return { (void*)this, "bUsesRunningAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWaterWalking()
    { return { (void*)this, "bUsesWaterWalking" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedCurrentWetDockStructureID` +5, medido na build 25090264
    //  (offset absoluto medido: 0x3399; confianca alta)
    void*& bUsingLongRangeStasisField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedCurrentWetDockStructureID", 5); }
    BitFieldValue<bool, unsigned __int32> bVehicleAlwaysAllowTargetingByWildDinos()
    { return { (void*)this, "bVehicleAlwaysAllowTargetingByWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bVehicleUpdatePPBlends()
    { return { (void*)this, "bVehicleUpdatePPBlends" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToRun()
    { return { (void*)this, "bWantsToRun" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +32, medido na build 25090264
    //  (offset absoluto medido: 0x3408; confianca alta)
    void*& bWasAnchoredOrDryDockedField() const
    { return BrzCampoAncorado<void*>(this, "ShipHullSinkMovementForceMultiplier", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CreakMetalComponent` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2DD8; confianca alta)
    void*& bWasAtFullSpeedField() const
    { return BrzCampoAncorado<void*>(this, "CreakMetalComponent", 8); }
    BitFieldValue<bool, unsigned __int32> bWasBeingDragged()
    { return { (void*)this, "bWasBeingDragged" }; }
    BitFieldValue<bool, unsigned __int32> bWasJumping()
    { return { (void*)this, "bWasJumping" }; }
    BitFieldValue<bool, unsigned __int32> bWildAllowFollowTamedTarget()
    { return { (void*)this, "bWildAllowFollowTamedTarget" }; }
    BitFieldValue<bool, unsigned __int32> bWildAllowTargetingNeutralStructures()
    { return { (void*)this, "bWildAllowTargetingNeutralStructures" }; }
    BitFieldValue<bool, unsigned __int32> bWildIgnoredByAutoTurrets()
    { return { (void*)this, "bWildIgnoredByAutoTurrets" }; }
    float& chargingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.chargingRotationRateModifier"); }
    int& customBitFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.customBitFlags"); }
    BitFieldValue<bool, unsigned __int32> hasAlreadySetGender()
    { return { (void*)this, "hasAlreadySetGender" }; }
    float& maxRangeForWeaponTriggeredTooltipField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.maxRangeForWeaponTriggeredTooltip"); }
    BitFieldValue<bool, unsigned __int32> AreTorchesLit()
    { return { (void*)this, "AreTorchesLit" }; }
    BitFieldValue<bool, unsigned __int32> CanAnchor()
    { return { (void*)this, "CanAnchor" }; }
    BitFieldValue<bool, unsigned __int32> IsAnchored()
    { return { (void*)this, "IsAnchored" }; }
    BitFieldValue<bool, unsigned __int32> IsAnchoring()
    { return { (void*)this, "IsAnchoring" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoPilot()
    { return { (void*)this, "bAllowAutoPilot" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBasedCharactersAttacks()
    { return { (void*)this, "bAllowBasedCharactersAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDriverSeats()
    { return { (void*)this, "bAllowDriverSeats" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRaftAttacks()
    { return { (void*)this, "bAllowRaftAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRowingSeats()
    { return { (void*)this, "bAllowRowingSeats" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRudderAngleSpeedModification()
    { return { (void*)this, "bAllowRudderAngleSpeedModification" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSails()
    { return { (void*)this, "bAllowSails" }; }
    BitFieldValue<bool, unsigned __int32> bAllowShipForcedMovement()
    { return { (void*)this, "bAllowShipForcedMovement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSteeringForceModification()
    { return { (void*)this, "bAllowSteeringForceModification" }; }
    BitFieldValue<bool, unsigned __int32> bAllowThrottleRatioInterpSpeedModification()
    { return { (void*)this, "bAllowThrottleRatioInterpSpeedModification" }; }
    BitFieldValue<bool, unsigned __int32> bAnchoredSetToOceanHeight()
    { return { (void*)this, "bAnchoredSetToOceanHeight" }; }
    BitFieldValue<bool, unsigned __int32> bAttemptAnchoringNextFrame()
    { return { (void*)this, "bAttemptAnchoringNextFrame" }; }
    BitFieldValue<bool, unsigned __int32> bAutoThrottleActive()
    { return { (void*)this, "bAutoThrottleActive" }; }
    BitFieldValue<bool, unsigned __int32> bBasedCharactersForceDisableCollisionCheck()
    { return { (void*)this, "bBasedCharactersForceDisableCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bBasingRequiresInteriorPosition()
    { return { (void*)this, "bBasingRequiresInteriorPosition" }; }
    BitFieldValue<bool, unsigned __int32> bCanHideSpanker()
    { return { (void*)this, "bCanHideSpanker" }; }
    BitFieldValue<bool, unsigned __int32> bCanMoveWithoutRider()
    { return { (void*)this, "bCanMoveWithoutRider" }; }
    BitFieldValue<bool, unsigned __int32> bClientSideSailingForces()
    { return { (void*)this, "bClientSideSailingForces" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRowing()
    { return { (void*)this, "bDebugRowing" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRowing_ForceAllSeatsRowSync()
    { return { (void*)this, "bDebugRowing_ForceAllSeatsRowSync" }; }
    BitFieldValue<bool, unsigned __int32> bDebugSailing()
    { return { (void*)this, "bDebugSailing" }; }
    BitFieldValue<bool, unsigned __int32> bDebugSteering()
    { return { (void*)this, "bDebugSteering" }; }
    BitFieldValue<bool, unsigned __int32> bDebugStructures()
    { return { (void*)this, "bDebugStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDisableShipHUD()
    { return { (void*)this, "bDisableShipHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowSalvaging()
    { return { (void*)this, "bForceAllowSalvaging" }; }
    BitFieldValue<bool, unsigned __int32> bForceFirstPerson()
    { return { (void*)this, "bForceFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bForcePvEAllowNonAlignedShipBasing()
    { return { (void*)this, "bForcePvEAllowNonAlignedShipBasing" }; }
    BitFieldValue<bool, unsigned __int32> bHackForcesToApplyCheckForInvalidPhysx()
    { return { (void*)this, "bHackForcesToApplyCheckForInvalidPhysx" }; }
    BitFieldValue<bool, unsigned __int32> bHealthPercentageUseHullHealth()
    { return { (void*)this, "bHealthPercentageUseHullHealth" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWindEffectiveness()
    { return { (void*)this, "bIgnoreWindEffectiveness" }; }
    BitFieldValue<bool, unsigned __int32> bIsCheckingThrottle()
    { return { (void*)this, "bIsCheckingThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bIsInWetDock()
    { return { (void*)this, "bIsInWetDock" }; }
    BitFieldValue<bool, unsigned __int32> bIsMetalHull()
    { return { (void*)this, "bIsMetalHull" }; }
    BitFieldValue<bool, unsigned __int32> bIsNPCShip()
    { return { (void*)this, "bIsNPCShip" }; }
    BitFieldValue<bool, unsigned __int32> bIsSmallRaft()
    { return { (void*)this, "bIsSmallRaft" }; }
    BitFieldValue<bool, unsigned __int32> bKillingThrottle()
    { return { (void*)this, "bKillingThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bMaidenVoyagePlayed()
    { return { (void*)this, "bMaidenVoyagePlayed" }; }
    BitFieldValue<bool, unsigned __int32> bMotionWantsMusicOn()
    { return { (void*)this, "bMotionWantsMusicOn" }; }
    BitFieldValue<bool, unsigned __int32> bMusicFadedIn()
    { return { (void*)this, "bMusicFadedIn" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseBPSimulatePhysics()
    { return { (void*)this, "bOnlyUseBPSimulatePhysics" }; }
    BitFieldValue<bool, unsigned __int32> bPreventsDinosWithStructureSupportingSaddles()
    { return { (void*)this, "bPreventsDinosWithStructureSupportingSaddles" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateCurrentSailRotation()
    { return { (void*)this, "bReplicateCurrentSailRotation" }; }
    BitFieldValue<bool, unsigned __int32> bSailsAffectThrottleLocation()
    { return { (void*)this, "bSailsAffectThrottleLocation" }; }
    BitFieldValue<bool, unsigned __int32> bShipHasSpecialAttack()
    { return { (void*)this, "bShipHasSpecialAttack" }; }
    BitFieldValue<bool, unsigned __int32> bSkipRamDamageWhenNPC()
    { return { (void*)this, "bSkipRamDamageWhenNPC" }; }
    BitFieldValue<bool, unsigned __int32> bSmallRaftPushAwayPlayers()
    { return { (void*)this, "bSmallRaftPushAwayPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bSpankerVisible()
    { return { (void*)this, "bSpankerVisible" }; }
    BitFieldValue<bool, unsigned __int32> bTickRowing()
    { return { (void*)this, "bTickRowing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAnchor()
    { return { (void*)this, "bUseBPCanAnchor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetThrottle()
    { return { (void*)this, "bUseBPSetThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSimulatePhysics()
    { return { (void*)this, "bUseBPSimulatePhysics" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustRowingImpulse()
    { return { (void*)this, "bUseBP_AdjustRowingImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcestoApply()
    { return { (void*)this, "bUseForcestoApply" }; }
    BitFieldValue<bool, unsigned __int32> bUseRaftBPTick()
    { return { (void*)this, "bUseRaftBPTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasInCombatLastTick()
    { return { (void*)this, "bWasInCombatLastTick" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSHIP_H
