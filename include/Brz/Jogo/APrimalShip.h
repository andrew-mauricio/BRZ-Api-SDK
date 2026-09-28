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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AquireLoot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.AquireLoot(APrimalShipLootCrate*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AreAllMannedSailsClosing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AreAllMannedSailsClosing() const
    {
        return NativeCall<void*>(this, "APrimalShip.AreAllMannedSailsClosing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.AreAllMannedSailsOpening()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BaseIgnoreWaveLocking(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.BaseIgnoreWaveLocking(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CalculateSteeringVelocity() const
    {
        return NativeCall<void*>(this, "APrimalShip.CalculateSteeringVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CalculateThrottleForce()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CalculateThrottleForce() const
    {
        return NativeCall<void*>(this, "APrimalShip.CalculateThrottleForce()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoAnchoringInternal()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanDoAnchoringInternal() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoAnchoringInternal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoAnchoring_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanDoDockingInternal() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoDockingInternal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanDoDocking_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanDoDocking_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanDoDocking_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanFireCannons()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanFireCannons() const
    {
        return NativeCall<void*>(this, "APrimalShip.CanFireCannons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.CanPlayerEditShipSkills(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalShip.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.ClientSetAttachedSeat_Implementation(APrimalStructureSeating_DriverSeat*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=371+grafo=5/5]]
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoImpactDamageToShipStructures(void* a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, float, float, void*>(this, "APrimalShip.DoImpactDamageToShipStructures(UE::Math::TVector<double>,float,float,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.DoesShipHaveBasedPawns(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DoesShipHaveBasedPawns(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalShip.DoesShipHaveBasedPawns(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.EndPlay(EEndPlayReason::Type)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetAnchorAttachMesh() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetAnchorAttachMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetAnchorSetPercent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCannonForCharacter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetCannonForCharacter(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCannonballSpeedMultiplier()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=296+grafo=4/4]]
    BrzPonteiro GetCannonballSpeedMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetCannonballSpeedMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetCannonsCooldownForSide(EShipFiringSide,float&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDriver() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetDriver()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetEntryDescription()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetEntryDescription() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetEntryDescription()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetEntryIcon(UObject*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetLastRowTime() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetLastRowTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2509+grafo=97/97]]
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMainDriverSeat()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMannedSailsCount() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMannedSailsCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetMaxMovementWeight()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaximumAnchorLength() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetMaximumAnchorLength()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetNextCombatMusicTrack(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetProviderSkillCooldown_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalShip.GetProviderSkillCooldown_Implementation(FName,FSkillCooldown&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillData(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetProviderSkillData(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillData(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillModifier_Implementation(FName,FName,float&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetProviderSkillModifier_Implementation(unsigned long long a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*>(this, "APrimalShip.GetProviderSkillModifier_Implementation(FName,FName,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillPointsSpent_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetProviderSkillPointsSpent_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillPointsSpent_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillRank_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetProviderSkillRank_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillRank_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderSkillTreeForSkillData_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetProviderSkillTreeForSkillData_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.GetProviderSkillTreeForSkillData_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName,TSizedDefaultAllocator
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetRider() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRider()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRotationRateWithAcceleration11(float,float,float,float,float,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetRotationRateWithAcceleration11(float a0, float a1, float a2, float a3, float a4, float a5) const
    {
        return NativeCall<void*, float, float, float, float, float, float>(this, "APrimalShip.GetRotationRateWithAcceleration11(float,float,float,float,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRowingInterval()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetRowingInterval() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRowingInterval()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetRudderAngle()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetRudderAngle() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetRudderAngle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetSailRotation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=89+chamadores=2]]
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetShipRowingInput() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipRowingInput()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipRowingSeatCount()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetShipRowingSeatCount() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipRowingSeatCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipSailCount()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShipStructures() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetShipStructures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetShipTargetThrottleRatio()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSteeringForce() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetSteeringForce()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetStructureDemolishTime()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingDesirability(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GetTargetingDesirability(ITargetableInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetThrottleForceMultiplier()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetThrottleForceMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.GetThrottleForceMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.GetThrottleRatioInterpSpeed()
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GiveProviderHotbarReplacerBuff_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.GiveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HandleAnchorMovement(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleAnchorMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.HandleAnchorMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HandleStowedAnchor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleStowedAnchor() const
    {
        return NativeCall<void*>(this, "APrimalShip.HandleStowedAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.HasOpenSails()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InterpThrottleAndInputs(float a0, float a1) const
    {
        return NativeCall<void*, float, float>(this, "APrimalShip.InterpThrottleAndInputs(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsCharacterInCannon()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsCharacterInCannon() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsCharacterInCannon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsCheatWind()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsCheatWind() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsCheatWind()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsDocked()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInOceanVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.IsInOceanVolume(APhysicsVolume**)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsLargeRaft()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsLargeRaft() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsLargeRaft()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsPointInsideThisRaft(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPointInsideThisRaft(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.IsPointInsideThisRaft(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsProviderSkillReadyToUse_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsProviderSkillReadyToUse_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.IsProviderSkillReadyToUse_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsProviderSkillUnlocked_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsShipCheckingForRowing() const
    {
        return NativeCall<void*>(this, "APrimalShip.IsShipCheckingForRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsShipSkillReadyToUse(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsShipSkillReadyToUse(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalShip.IsShipSkillReadyToUse(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.IsShipSkillUnlocked(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Multi_FullyAnchor_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalShip.Multi_FullyAnchor_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.Multi_FullyUnanchor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MulticastUpdateWheelLocation_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.MulticastUpdateWheelLocation_Implementation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.NetClientInterpolateTo_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<d
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro NetClientInterpolateTo_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShip.NetClientInterpolateTo_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.NetForceSyncTransform_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<do
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnRep_ReplicatedAnchorState() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnRep_ReplicatedAnchorState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnShipRowingStart()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnShipRowingStart() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnShipRowingStart()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnShipRowingStop()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnShipRowingStop() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnShipRowingStop()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnStartSinking()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnStartSinking() const
    {
        return NativeCall<void*>(this, "APrimalShip.OnStartSinking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.OnStructurePlacedOnShip(APrimalStructure*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalShip.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PostInitializeComponents()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalShip.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PreReplication(IRepChangedPropertyTracker&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PreReplication(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.PreReplication(IRepChangedPropertyTracker&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshColorizationHelper(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.RefreshColorizationHelper(UMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshLongRangeStasis()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshSaddledStructureSceneState() const
    {
        return NativeCall<void*>(this, "APrimalShip.RefreshSaddledStructureSceneState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RefreshVesselDynamicsState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshVesselDynamicsState() const
    {
        return NativeCall<void*>(this, "APrimalShip.RefreshVesselDynamicsState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RemoveHotbarSkills(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro RemoveHotbarSkills(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.RemoveHotbarSkills(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.RemoveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCharacterStatusTameable(bool a0, bool a1, bool a2) const
    {
        return NativeCall<void*, bool, bool, bool>(this, "APrimalShip.SetCharacterStatusTameable(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetDeath(bool,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetDeath(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "APrimalShip.SetDeath(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetHullMesh(UStaticMeshComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetHullMesh(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.SetHullMesh(UStaticMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetSaddleContainerInventoryViewers(AShooterPlayerController*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetSaddleContainerInventoryViewers(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalShip.SetSaddleContainerInventoryViewers(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetShipDriver(AShooterCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetShipDriver(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.SetShipDriver(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetSteeringInput(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetSteeringInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SetSteeringInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetThrottleForceMultiplier(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetThrottleForceMultiplier(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SetThrottleForceMultiplier(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SetThrottleInput(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldApplyReplicatedVesselState() const
    {
        return NativeCall<void*>(this, "APrimalShip.ShouldApplyReplicatedVesselState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SimulatePhysics(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SimulatePhysics(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShip.SimulatePhysics(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.SpawnAnchor()
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UnlockAllShipSkills(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShip.UnlockAllShipSkills(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UnweldAllStructuresFromShipHull()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnweldAllStructuresFromShipHull() const
    {
        return NativeCall<void*>(this, "APrimalShip.UnweldAllStructuresFromShipHull()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateDockedShipVisibility()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateNetworkAndStasisRangeMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateNetworkAndStasisRangeMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateRaftRelevant()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateRaftRelevant() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateRaftRelevant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateRowingVars()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateRowingVars() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateRowingVars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.UpdateSailingVars()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateTorches() const
    {
        return NativeCall<void*>(this, "APrimalShip.UpdateTorches()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.VesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResul
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro VesselDynamicsOnHit(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalShip.VesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShip.WantsLongRangeStasis()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    BrzCampoPonteiro AllowWildBabyTamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AllowWildBabyTaming")); }
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
    BrzCampoPonteiro AreTorchesLitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AreTorchesLit")); }
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
    BrzCampoPonteiro AutoStopReplicationWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.AutoStopReplicationWhenSleeping")); }
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
    BrzCampoPonteiro CanAnchorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CanAnchor")); }
    BrzCampoPonteiro CanElevateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.CanElevate")); }
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
    //  ancorado em `WetDockOceanZOffset` +4, medido na build 25535041
    //  (offset absoluto medido: 0x2DE0; confianca alta)
    void*& ClientRaftInterpLocField() const
    { return BrzCampoAncorado<void*>(this, "WetDockOceanZOffset", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WetDockOceanZOffset` +28, medido na build 25535041
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
    //  ancorado em `AutoPilot_ForceMinAngularVelocity_MAX` +4, medido na build 25535041
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
    //  ancorado em `MastExtensionZScale` +4, medido na build 25535041
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
    //  ancorado em `MastExtensionZScale` +8, medido na build 25535041
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
    float& DamageMultiplierInRamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.DamageMultiplierInRamSocketRadius"); }
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
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +4, medido na build 25535041
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
    BrzCampoPonteiro DisableCameraShakesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.DisableCameraShakes")); }
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
    BrzCampoPonteiro FlyingMovementModeUseFlyingRunSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.FlyingMovementModeUseFlyingRunSpeedModifier")); }
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
    //  ancorado em `Teleport_AllowedBelowTopDeckDist` +20, medido na build 25535041
    //  (offset absoluto medido: 0x3498; confianca alta)
    void*& ForcedMovementDirectionField() const
    { return BrzCampoAncorado<void*>(this, "Teleport_AllowedBelowTopDeckDist", 20); }
    float& ForcedWildBabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ForcedWildBabyAge"); }
    float& ForcesToApplyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ForcesToApplyScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VesselDynamicsComponent` +16, medido na build 25535041
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
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +8, medido na build 25535041
    //  (offset absoluto medido: 0x3538; confianca alta)
    void*& HackCheckingForInvalidPhysXLocationField() const
    { return BrzCampoAncorado<void*>(this, "DestroyIfNoTargetUnderShoreDistanceTimer", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +32, medido na build 25535041
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
    BrzCampoPonteiro Hotfix_AreGeneTraitsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.Hotfix_AreGeneTraitsEnabled")); }
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
    BrzCampoPonteiro IsAnchoredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.IsAnchored")); }
    BrzCampoPonteiro IsAnchoringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.IsAnchoring")); }
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
    //  ancorado em `CollisionImpactMinInterval` +8, medido na build 25535041
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
    //  ancorado em `CombatMusicTracks` +16, medido na build 25535041
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
    BrzCampoPonteiro LastInWaterVolumeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastInWaterVolumeLocation")); }
    BrzCampoPonteiro LastInWaterVolumeRecoveryDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastInWaterVolumeRecoveryDir")); }
    float& LastIncomingDamagePreArmorField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.LastIncomingDamagePreArmor"); }
    BrzCampoPonteiro LastIsInsideInActiveReverseVaccumSealedCubeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastIsInsideInActiveReverseVaccumSealedCube")); }
    BrzCampoPonteiro LastIsInsideInActiveReverseVaccumSealedCubeOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastIsInsideInActiveReverseVaccumSealedCubeOnDino")); }
    BrzCampoPonteiro LastIsInsideReverseVaccumSealedCubeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastIsInsideReverseVaccumSealedCube")); }
    BrzCampoPonteiro LastIsInsideReverseVaccumSealedCubeOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastIsInsideReverseVaccumSealedCubeOnDino")); }
    BrzCampoPonteiro LastIsInsideVaccumSealedCubeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastIsInsideVaccumSealedCube")); }
    BrzCampoPonteiro LastIsInsideVaccumSealedCubeOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.LastIsInsideVaccumSealedCubeOnDino")); }
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
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +8, medido na build 25535041
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
    //  ancorado em `LastFrameMarkedTime` +8, medido na build 25535041
    //  (offset absoluto medido: 0x3460; confianca alta)
    void*& LastSentSailRotationToServerTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +16, medido na build 25535041
    //  (offset absoluto medido: 0x3468; confianca alta)
    void*& LastSentSailRotationToServerValueField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +36, medido na build 25535041
    //  (offset absoluto medido: 0x347C; confianca media)
    void*& LastSentSteeringInputToServerValueField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +24, medido na build 25535041
    //  (offset absoluto medido: 0x3470; confianca alta)
    void*& LastSentThrottleTargetToServerTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastFrameMarkedTime", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFrameMarkedTime` +32, medido na build 25535041
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
    //  ancorado em `Teleport_AllowedBelowTopDeckDist` +12, medido na build 25535041
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
    //  ancorado em `ReplicatedCurrentWetDockStructureID` +12, medido na build 25535041
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
    float& MinRammingDirectionDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.MinRammingDirectionDamageMultiplier"); }
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
    BrzCampoPonteiro MutagenAppliedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.MutagenApplied")); }
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
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +40, medido na build 25535041
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
    float& RamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RamSocketRadius"); }
    float& RammingExtraImpulseMultiplierInRamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RammingExtraImpulseMultiplierInRamSocketRadius"); }
    float& RammingImpulseMitigationMultiplierInRamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.RammingImpulseMitigationMultiplierInRamSocketRadius"); }
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
    BrzCampoPonteiro ReplicateAllBonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicateAllBones")); }
    BrzCampoPonteiro ReplicatedAvailableShipRepairResourceQuantitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ReplicatedAvailableShipRepairResourceQuantities")); }
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
    float& ScrapeVFXSpawnDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ScrapeVFXSpawnDistance"); }
    float& ScrapeVFXSpawnDurationAfterHitField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ScrapeVFXSpawnDurationAfterHit"); }
    float& ScrapeVFXSpawnIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ScrapeVFXSpawnInterval"); }
    UPrimalInventoryComponent*& SecondaryInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalShip.SecondaryInventoryComponent"); }
    TWeakObjectPtr<void>& SecondaryMountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShip.SecondaryMountedDino"); }
    double& SecondaryMountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShip.SecondaryMountedDinoTime"); }
    float& ServerTargetCarriedYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.ServerTargetCarriedYaw"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SailClassesForceMultipliers` +16, medido na build 25535041
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
    FName& ShipRamSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShip.ShipRamSocketName"); }
    BrzCampoPonteiro ShipRammingNSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipRammingNS")); }
    BrzCampoPonteiro ShipRammingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipRammingSound")); }
    BrzCampoPonteiro ShipScrapeNSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.ShipScrapeNS")); }
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
    //  ancorado em `AnchorMaximumDistanceFromShore` +8, medido na build 25535041
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
    float& SpeedScalarThresholdForRammingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SpeedScalarThresholdForRamming"); }
    float& SpeedToConsiderMaxForRammingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SpeedToConsiderMaxForRamming"); }
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
    float& StationaryTurnBackwardsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StationaryTurnBackwardsMultiplier"); }
    float& StationaryTurnMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StationaryTurnMultiplier"); }
    float& StationaryTurnVelocityThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.StationaryTurnVelocityThreshold"); }
    float& SteeringForceStandBoostThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringForceStandBoostThreshold"); }
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
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +48, medido na build 25535041
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
    //  ancorado em `MovingSoundCue` +8, medido na build 25535041
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
    //  ancorado em `VesselDynamicsComponent` +32, medido na build 25535041
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
    //  ancorado em `VesselDynamicsComponent` +48, medido na build 25535041
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
    BrzCampoPonteiro UseBPGetWiegthedAttackOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.UseBPGetWiegthedAttackOverride")); }
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
    //  ancorado em `CollisionImpactMinImpulseForDamage` +4, medido na build 25535041
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
    BrzCampoPonteiro bAccurateOceanVolumeOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAccurateOceanVolumeOverlaps")); }
    BrzCampoPonteiro bActiveRunToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bActiveRunToggle")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowASACameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowASACamera")); }
    BrzCampoPonteiro bAllowAutoPilotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowAutoPilot")); }
    BrzCampoPonteiro bAllowBPNewDoorInteractionDrawHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowBPNewDoorInteractionDrawHUD")); }
    BrzCampoPonteiro bAllowBasedCharactersAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowBasedCharactersAttacks")); }
    BrzCampoPonteiro bAllowCarryCharacterWithoutRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowCarryCharacterWithoutRider")); }
    BrzCampoPonteiro bAllowCarryFlyerDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowCarryFlyerDinos")); }
    BrzCampoPonteiro bAllowCorpseDestructionWithPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowCorpseDestructionWithPreventSaving")); }
    BrzCampoPonteiro bAllowDamageSameTeamAndClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowDamageSameTeamAndClass")); }
    BrzCampoPonteiro bAllowDinoAutoConsumeInventoryFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowDinoAutoConsumeInventoryFood")); }
    BrzCampoPonteiro bAllowDriverSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowDriverSeats")); }
    BrzCampoPonteiro bAllowMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowMountedWeaponry")); }
    BrzCampoPonteiro bAllowMountedWeaponryPVEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowMountedWeaponryPVE")); }
    BrzCampoPonteiro bAllowMultiUseByRemoteDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowMultiUseByRemoteDino")); }
    BrzCampoPonteiro bAllowPublicSeatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowPublicSeating")); }
    BrzCampoPonteiro bAllowRaftAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRaftAttacks")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRiding")); }
    BrzCampoPonteiro bAllowRidingInTurretModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRidingInTurretMode")); }
    BrzCampoPonteiro bAllowRidingInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRidingInWater")); }
    BrzCampoPonteiro bAllowRowingSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRowingSeats")); }
    BrzCampoPonteiro bAllowRudderAngleSpeedModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRudderAngleSpeedModification")); }
    BrzCampoPonteiro bAllowRunningWhileSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowRunningWhileSwimming")); }
    BrzCampoPonteiro bAllowSailsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowSails")); }
    BrzCampoPonteiro bAllowShipForcedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowShipForcedMovement")); }
    BrzCampoPonteiro bAllowSteeringForceModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowSteeringForceModification")); }
    BrzCampoPonteiro bAllowTargetingCorpsesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowTargetingCorpses")); }
    BrzCampoPonteiro bAllowTeleportMeshInterpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowTeleportMeshInterp")); }
    BrzCampoPonteiro bAllowThrottleRatioInterpSpeedModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowThrottleRatioInterpSpeedModification")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTrappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowTrapping")); }
    BrzCampoPonteiro bAllowTreadWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowTreadWater")); }
    BrzCampoPonteiro bAllowTurretTargetOverrideLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowTurretTargetOverrideLocations")); }
    BrzCampoPonteiro bAllowWanderAroundActorWildTameMixField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowWanderAroundActorWildTameMix")); }
    BrzCampoPonteiro bAllowWhistleThroughRemoteDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowWhistleThroughRemoteDino")); }
    BrzCampoPonteiro bAllowWildDinoEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowWildDinoEquipment")); }
    BrzCampoPonteiro bAllowWildRunningWithoutTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowWildRunningWithoutTarget")); }
    BrzCampoPonteiro bAllowsTurretModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAllowsTurretMode")); }
    BrzCampoPonteiro bAlwaysAllowStrafingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAlwaysAllowStrafing")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysUpdateDinoLimbWallAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAlwaysUpdateDinoLimbWallAvoidance")); }
    BrzCampoPonteiro bAnchoredSetToOceanHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAnchoredSetToOceanHeight")); }
    BrzCampoPonteiro bAnimIsMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAnimIsMoving")); }
    BrzCampoPonteiro bApplyDamageEffectToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bApplyDamageEffectToChildComponents")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAttemptAnchoringNextFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAttemptAnchoringNextFrame")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAutoStasis")); }
    BrzCampoPonteiro bAutoThrottleActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bAutoThrottleActive")); }
    BrzCampoPonteiro bBPCameraRotationFinalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPCameraRotationFinal")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPLimitPlayerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPLimitPlayerRotation")); }
    BrzCampoPonteiro bBPManagedFPVViewLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPManagedFPVViewLocation")); }
    BrzCampoPonteiro bBPManagedFPVViewLocationNoRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPManagedFPVViewLocationNoRider")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyAllowedViewHitDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPModifyAllowedViewHitDir")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBabyInitiallyUnclaimedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBabyInitiallyUnclaimed")); }
    BrzCampoPonteiro bBabyPreventExitingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBabyPreventExitingWater")); }
    BrzCampoPonteiro bBasedCharactersForceDisableCollisionCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBasedCharactersForceDisableCollisionCheck")); }
    BrzCampoPonteiro bBasingRequiresInteriorPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBasingRequiresInteriorPosition")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedCurrentWetDockStructureID` +4, medido na build 25535041
    //  (offset absoluto medido: 0x3398; confianca alta)
    void*& bBeganPlayField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedCurrentWetDockStructureID", 4); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBonesHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bBonesHidden")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCanAffectNavigationGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanAffectNavigationGeneration")); }
    BrzCampoPonteiro bCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeCarried")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeDragged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeOrderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeOrdered")); }
    BrzCampoPonteiro bCanBePushedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBePushed")); }
    BrzCampoPonteiro bCanBeRepairedInOpenWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeRepairedInOpenWater")); }
    BrzCampoPonteiro bCanBeTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeTamed")); }
    BrzCampoPonteiro bCanBeTorpidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanBeTorpid")); }
    BrzCampoPonteiro bCanDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanDrag")); }
    BrzCampoPonteiro bCanEverCrouchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanEverCrouch")); }
    BrzCampoPonteiro bCanEverProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanEverProne")); }
    BrzCampoPonteiro bCanHaveBabyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanHaveBaby")); }
    BrzCampoPonteiro bCanHideSpankerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanHideSpanker")); }
    BrzCampoPonteiro bCanIgnoreWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanIgnoreWater")); }
    BrzCampoPonteiro bCanMountOnHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanMountOnHumans")); }
    BrzCampoPonteiro bCanMoveWithoutRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanMoveWithoutRider")); }
    BrzCampoPonteiro bCanPlayLandingAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanPlayLandingAnim")); }
    BrzCampoPonteiro bCanPushOthersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanPushOthers")); }
    BrzCampoPonteiro bCanRunField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanRun")); }
    BrzCampoPonteiro bCanSecondaryMountOnHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanSecondaryMountOnHumans")); }
    BrzCampoPonteiro bCanTargetVehiclesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanTargetVehicles")); }
    BrzCampoPonteiro bCanUnclaimTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCanUnclaimTame")); }
    BrzCampoPonteiro bCancelInterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCancelInterpolation")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheatForceTameRideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCheatForceTameRide")); }
    BrzCampoPonteiro bCheatPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCheatPossessed")); }
    BrzCampoPonteiro bCheckBuffModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCheckBuffModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bClampOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClampOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bClearOnConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClearOnConsume")); }
    BrzCampoPonteiro bClearRiderOnDinoImmobilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClearRiderOnDinoImmobilized")); }
    BrzCampoPonteiro bClientCheckEncroachmentOnNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientCheckEncroachmentOnNetUpdate")); }
    BrzCampoPonteiro bClientInterpLocationInCustomMovemodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientInterpLocationInCustomMovemode")); }
    BrzCampoPonteiro bClientResimulateRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientResimulateRootMotion")); }
    BrzCampoPonteiro bClientResimulateRootMotionSourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientResimulateRootMotionSources")); }
    BrzCampoPonteiro bClientSideSailingForcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientSideSailingForces")); }
    BrzCampoPonteiro bClientUpdatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientUpdating")); }
    BrzCampoPonteiro bClientWasFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClientWasFalling")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bClimbable")); }
    BrzCampoPonteiro bCollectVictimItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCollectVictimItems")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCollideWhenPlacing")); }
    BrzCampoPonteiro bConsumeZoomInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bConsumeZoomInput")); }
    BrzCampoPonteiro bControlledDinoPreventsPlayerInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bControlledDinoPreventsPlayerInventory")); }
    BrzCampoPonteiro bCreatureIsImmuneToServerSoftTameLimitDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCreatureIsImmuneToServerSoftTameLimitDestruction")); }
    BrzCampoPonteiro bCuddleRequestRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bCuddleRequestRefreshed")); }
    BrzCampoPonteiro bDamageNotifyTeamAggroAIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDamageNotifyTeamAggroAI")); }
    BrzCampoPonteiro bDeathUseRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDeathUseRagdoll")); }
    BrzCampoPonteiro bDebugBabyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugBaby")); }
    BrzCampoPonteiro bDebugIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugIK")); }
    BrzCampoPonteiro bDebugIK_ShowTraceNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugIK_ShowTraceNames")); }
    BrzCampoPonteiro bDebugMeleeAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugMeleeAttacks")); }
    BrzCampoPonteiro bDebugRowingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugRowing")); }
    BrzCampoPonteiro bDebugRowing_ForceAllSeatsRowSyncField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugRowing_ForceAllSeatsRowSync")); }
    BrzCampoPonteiro bDebugSailingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugSailing")); }
    BrzCampoPonteiro bDebugSteeringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugSteering")); }
    BrzCampoPonteiro bDebugStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDebugStructures")); }
    BrzCampoPonteiro bDediServerAutoUnregisterSkeletalMeshWhenNotRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDestroyOnStasis")); }
    BrzCampoPonteiro bDieIfLeftWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDieIfLeftWater")); }
    BrzCampoPonteiro bDinoHasBondedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDinoHasBonded")); }
    BrzCampoPonteiro bDisableAutoMatingWhileTamedWanderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableAutoMatingWhileTamedWandering")); }
    BrzCampoPonteiro bDisableCameraShakeOnNotifyHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableCameraShakeOnNotifyHit")); }
    BrzCampoPonteiro bDisableControllerDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableControllerDesiredRotation")); }
    BrzCampoPonteiro bDisableDefaultDinoTamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableDefaultDinoTaming")); }
    BrzCampoPonteiro bDisableFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableFPV")); }
    BrzCampoPonteiro bDisableHarvestHealthGainField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableHarvestHealthGain")); }
    BrzCampoPonteiro bDisableHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableHarvesting")); }
    BrzCampoPonteiro bDisablePathfindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisablePathfinding")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableShipHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableShipHUD")); }
    BrzCampoPonteiro bDisableSpawnDefaultControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisableSpawnDefaultController")); }
    BrzCampoPonteiro bDisabledFromAscensionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisabledFromAscension")); }
    BrzCampoPonteiro bDisallowPostNetReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDisallowPostNetReplication")); }
    BrzCampoPonteiro bDoStepDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDoStepDamage")); }
    BrzCampoPonteiro bDontActuallyEmitPoopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDontActuallyEmitPoop")); }
    BrzCampoPonteiro bDontForceUpdateRateOptimizationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDontForceUpdateRateOptimizations")); }
    BrzCampoPonteiro bDontOverrideToNavMeshStepHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDontOverrideToNavMeshStepHeight")); }
    BrzCampoPonteiro bDontWanderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDontWander")); }
    BrzCampoPonteiro bDraggedFromExtremitiesOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDraggedFromExtremitiesOnly")); }
    BrzCampoPonteiro bDrawHealthBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDrawHealthBar")); }
    BrzCampoPonteiro bDropWildEggsWithoutMateBoostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bDropWildEggsWithoutMateBoost")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEggBoostedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEggBoosted")); }
    BrzCampoPonteiro bEnableAnimationGroundConformingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableAnimationGroundConforming")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableIK")); }
    BrzCampoPonteiro bEnableMouthFlapAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableMouthFlapAnimations")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableTamedMatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableTamedMating")); }
    BrzCampoPonteiro bEnableTamedWanderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bEnableTamedWandering")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFlyerDinoAllowBackwardsFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFlyerDinoAllowBackwardsFlight")); }
    BrzCampoPonteiro bFlyerDinoAllowStrafingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFlyerDinoAllowStrafing")); }
    BrzCampoPonteiro bFlyerDontGainImpulseOnSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFlyerDontGainImpulseOnSubmerged")); }
    BrzCampoPonteiro bFlyerForceLimitPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFlyerForceLimitPitch")); }
    BrzCampoPonteiro bFlyerForceNoPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFlyerForceNoPitch")); }
    BrzCampoPonteiro bFlyerPrioritizeAllyMountToCarryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bFlyerPrioritizeAllyMountToCarry")); }
    BrzCampoPonteiro bForceAllowBackwardsMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAllowBackwardsMovement")); }
    BrzCampoPonteiro bForceAllowDediServerGroundConformInterpolateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAllowDediServerGroundConformInterpolate")); }
    BrzCampoPonteiro bForceAllowMountedAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAllowMountedAimOffset")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowSalvagingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAllowSalvaging")); }
    BrzCampoPonteiro bForceAllowTamedTickEggLayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAllowTamedTickEggLay")); }
    BrzCampoPonteiro bForceAlwaysAllowBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAlwaysAllowBasing")); }
    BrzCampoPonteiro bForceAlwaysUpdateMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAlwaysUpdateMesh")); }
    BrzCampoPonteiro bForceAutoTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceAutoTame")); }
    BrzCampoPonteiro bForceDisableClientGravitySimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceDisableClientGravitySim")); }
    BrzCampoPonteiro bForceDisablingTamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceDisablingTaming")); }
    BrzCampoPonteiro bForceDrawHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceDrawHUD")); }
    BrzCampoPonteiro bForceDrawHUDWithoutRecentlyRenderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceDrawHUDWithoutRecentlyRendered")); }
    BrzCampoPonteiro bForceFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceFirstPerson")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceHideSaddle")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceIKOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceIKOnDedicatedServer")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoCharacterStatusComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceNoCharacterStatusComponentTick")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePerFrameTickingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcePerFrameTicking")); }
    BrzCampoPonteiro bForcePreventAllInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcePreventAllInput")); }
    BrzCampoPonteiro bForcePreventExitingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcePreventExitingWater")); }
    BrzCampoPonteiro bForcePreventInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcePreventInventoryAccess")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForcePvEAllowNonAlignedShipBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcePvEAllowNonAlignedShipBasing")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceRiderDrawCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceRiderDrawCrosshair")); }
    BrzCampoPonteiro bForceSimpleTeleportFadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceSimpleTeleportFade")); }
    BrzCampoPonteiro bForceTickingBehaviorTreeEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceTickingBehaviorTreeEveryFrame")); }
    BrzCampoPonteiro bForceUseAltAimSocketsForTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceUseAltAimSocketsForTurrets")); }
    BrzCampoPonteiro bForceUseCustomCameraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceUseCustomCameraComponent")); }
    BrzCampoPonteiro bForceValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceValidUnstasisCaster")); }
    BrzCampoPonteiro bForceWildEncumberBasedOnTamedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceWildEncumberBasedOnTamedDino")); }
    BrzCampoPonteiro bForceWildMeleeSwingTraceAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForceWildMeleeSwingTraceAll")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGlideWhenFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bGlideWhenFalling")); }
    BrzCampoPonteiro bGlideWhenMountedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bGlideWhenMounted")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestroyIfNoTargetUnderShoreDistanceTimer` +40, medido na build 25535041
    //  (offset absoluto medido: 0x3558; confianca media)
    void*& bHackCheckingForInvalidPhysXField() const
    { return BrzCampoAncorado<void*>(this, "DestroyIfNoTargetUnderShoreDistanceTimer", 40); }
    BrzCampoPonteiro bHackForcesToApplyCheckForInvalidPhysxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHackForcesToApplyCheckForInvalidPhysx")); }
    BrzCampoPonteiro bHadLinkedSupplyCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHadLinkedSupplyCrate")); }
    BrzCampoPonteiro bHadStaticBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHadStaticBase")); }
    BrzCampoPonteiro bHadStaticMapActorBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHadStaticMapActorBase")); }
    BrzCampoPonteiro bHasBotRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasBotRider")); }
    BrzCampoPonteiro bHasBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bHasBuffPreventingUploadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasBuffPreventingUploading")); }
    BrzCampoPonteiro bHasDynamicBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasDynamicBase")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasMateBoostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasMateBoost")); }
    BrzCampoPonteiro bHasPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasPlayerController")); }
    BrzCampoPonteiro bHasRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHasRider")); }
    BrzCampoPonteiro bHealthPercentageUseHullHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHealthPercentageUseHullHealth")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHidden")); }
    BrzCampoPonteiro bHiddenForLocalPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHiddenForLocalPassenger")); }
    BrzCampoPonteiro bHideFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHideFloatingHUD")); }
    BrzCampoPonteiro bHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHideFloatingName")); }
    BrzCampoPonteiro bHideFromScansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bHideFromScans")); }
    BrzCampoPonteiro bIKEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIKEnabled")); }
    BrzCampoPonteiro bIfAmphibiousCountAsLandDinoForNPCVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIfAmphibiousCountAsLandDinoForNPCVolumes")); }
    BrzCampoPonteiro bIgnoreAllImmobilizationTrapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreAllImmobilizationTraps")); }
    BrzCampoPonteiro bIgnoreAllWhistlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreAllWhistles")); }
    BrzCampoPonteiro bIgnoreAllyLookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreAllyLook")); }
    BrzCampoPonteiro bIgnoreBasedDinosWhenTeleportingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreBasedDinosWhenTeleporting")); }
    BrzCampoPonteiro bIgnoreCorpseDecompositionMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreCorpseDecompositionMultipliers")); }
    BrzCampoPonteiro bIgnoreDestroyOnRapidDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreDestroyOnRapidDeath")); }
    BrzCampoPonteiro bIgnoreFlierRidingRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreFlierRidingRestrictions")); }
    BrzCampoPonteiro bIgnoreLowGravityDisorientationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreLowGravityDisorientation")); }
    BrzCampoPonteiro bIgnoreNPCCountVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreNPCCountVolumes")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreOnDeathNotifyNearbyCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreOnDeathNotifyNearbyCharacters")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoreWindEffectivenessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoreWindEffectiveness")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIgnoresOriginShifting")); }
    bool& bInBaseReplicationField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShip.bInBaseReplication"); }
    BrzCampoPonteiro bInRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bInRagdoll")); }
    BrzCampoPonteiro bIncludePreventManualInPassengerCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIncludePreventManualInPassengerCount")); }
    BrzCampoPonteiro bIncrementedZoneManagerDirectLinkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIncrementedZoneManagerDirectLink")); }
    BrzCampoPonteiro bInterceptPlayerEmotesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bInterceptPlayerEmotes")); }
    BrzCampoPonteiro bInterpHealthDamageMaterialOverlayAlphaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bInterpHealthDamageMaterialOverlayAlpha")); }
    BrzCampoPonteiro bIsAWildFollowerKnownServersideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsAWildFollowerKnownServerside")); }
    BrzCampoPonteiro bIsAmphibiousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsAmphibious")); }
    BrzCampoPonteiro bIsAnimSharingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsAnimSharing")); }
    BrzCampoPonteiro bIsAtMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsAtMaxInventoryItems")); }
    BrzCampoPonteiro bIsAttachedOtherCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsAttachedOtherCharacter")); }
    BrzCampoPonteiro bIsBabyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsBaby")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsBed")); }
    BrzCampoPonteiro bIsBeingDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsBeingDragged")); }
    BrzCampoPonteiro bIsBlinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsBlinking")); }
    BrzCampoPonteiro bIsBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsBossDino")); }
    BrzCampoPonteiro bIsBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsBuffed")); }
    BrzCampoPonteiro bIsCarnivoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCarnivore")); }
    BrzCampoPonteiro bIsCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCarried")); }
    BrzCampoPonteiro bIsCarriedAsPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCarriedAsPassenger")); }
    BrzCampoPonteiro bIsCarryingCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCarryingCharacter")); }
    BrzCampoPonteiro bIsCarryingPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCarryingPassenger")); }
    BrzCampoPonteiro bIsChargingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCharging")); }
    BrzCampoPonteiro bIsCheckingThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCheckingThrottle")); }
    BrzCampoPonteiro bIsCloneDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCloneDino")); }
    BrzCampoPonteiro bIsCorruptedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCorrupted")); }
    BrzCampoPonteiro bIsCrouchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsCrouched")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDestroyingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsDestroyingDino")); }
    BrzCampoPonteiro bIsDoingDraggedInterpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsDoingDraggedInterp")); }
    BrzCampoPonteiro bIsDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsDragging")); }
    BrzCampoPonteiro bIsDraggingWithGrapHookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsDraggingWithGrapHook")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsEnforcerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsEnforcer")); }
    BrzCampoPonteiro bIsExtinctionTitanField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsExtinctionTitan")); }
    BrzCampoPonteiro bIsFemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsFemale")); }
    BrzCampoPonteiro bIsFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsFlying")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsHeldJumpSlowFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsHeldJumpSlowFalling")); }
    BrzCampoPonteiro bIsHordeDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsHordeDino")); }
    BrzCampoPonteiro bIsHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsHost")); }
    BrzCampoPonteiro bIsImmobilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsImmobilized")); }
    BrzCampoPonteiro bIsInTurretModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsInTurretMode")); }
    BrzCampoPonteiro bIsInWetDockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsInWetDock")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsInvincible")); }
    BrzCampoPonteiro bIsLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsLanding")); }
    BrzCampoPonteiro bIsLatchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsLatched")); }
    BrzCampoPonteiro bIsLatchedDownwardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsLatchedDownward")); }
    BrzCampoPonteiro bIsLatchingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsLatching")); }
    BrzCampoPonteiro bIsLocalViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsLocalViewTarget")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsMapActor")); }
    BrzCampoPonteiro bIsMassMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsMassMoving")); }
    BrzCampoPonteiro bIsMekField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsMek")); }
    BrzCampoPonteiro bIsMetalHullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsMetalHull")); }
    BrzCampoPonteiro bIsMountedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsMounted")); }
    BrzCampoPonteiro bIsNPCShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsNPCShip")); }
    BrzCampoPonteiro bIsNursingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsNursing")); }
    BrzCampoPonteiro bIsNursingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsNursingDino")); }
    BrzCampoPonteiro bIsOceanManagerDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsOceanManagerDino")); }
    BrzCampoPonteiro bIsOverridingClientPositionErrorToleranceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsOverridingClientPositionErrorTolerance")); }
    BrzCampoPonteiro bIsParentWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsParentWildDino")); }
    BrzCampoPonteiro bIsPlayingLowHealthAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsPlayingLowHealthAnim")); }
    BrzCampoPonteiro bIsPlayingTurningAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsPlayingTurningAnim")); }
    BrzCampoPonteiro bIsProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsProne")); }
    BrzCampoPonteiro bIsRaidDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsRaidDino")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsRepairing")); }
    BrzCampoPonteiro bIsSaveProfilingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsSaveProfilingDino")); }
    BrzCampoPonteiro bIsScoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsScout")); }
    BrzCampoPonteiro bIsSecondaryMountedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsSecondaryMounted")); }
    BrzCampoPonteiro bIsSkinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsSkinned")); }
    BrzCampoPonteiro bIsSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsSleeping")); }
    BrzCampoPonteiro bIsSmallRaftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsSmallRaft")); }
    BrzCampoPonteiro bIsTemporaryMissionDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsTemporaryMissionDino")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bIsVoiceTalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsVoiceTalking")); }
    BrzCampoPonteiro bIsWakingTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsWakingTame")); }
    BrzCampoPonteiro bIsWanderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bIsWandering")); }
    BrzCampoPonteiro bJumpOnReleaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bJumpOnRelease")); }
    BrzCampoPonteiro bKeepAffinityOnDamageRecievedWakingTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bKeepAffinityOnDamageRecievedWakingTame")); }
    BrzCampoPonteiro bKillingThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bKillingThrottle")); }
    BrzCampoPonteiro bLimitRiderYawOnLatchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bLimitRiderYawOnLatched")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bLocalIsDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bLocalIsDragging")); }
    BrzCampoPonteiro bMaidenVoyagePlayedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bMaidenVoyagePlayed")); }
    BrzCampoPonteiro bMeleeSwingDamageBlockedByStruturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bMeleeSwingDamageBlockedByStrutures")); }
    BrzCampoPonteiro bMotionWantsMusicOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bMotionWantsMusicOn")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bMusicFadedInField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bMusicFadedIn")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNeuteredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNeutered")); }
    BrzCampoPonteiro bNoDamageImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNoDamageImpulse")); }
    BrzCampoPonteiro bNoKillXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bNoKillXP")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyTargetConsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOnlyTargetConscious")); }
    BrzCampoPonteiro bOnlyUseBPSimulatePhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOnlyUseBPSimulatePhysics")); }
    BrzCampoPonteiro bOrbitCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOrbitCamera")); }
    BrzCampoPonteiro bOverrideBlendSpaceSmoothTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideBlendSpaceSmoothType")); }
    BrzCampoPonteiro bOverrideCrosshairAlphaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideCrosshairAlpha")); }
    BrzCampoPonteiro bOverrideCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideCrosshairColor")); }
    BrzCampoPonteiro bOverrideFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideFlyingVelocity")); }
    BrzCampoPonteiro bOverrideNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideNewFallVelocity")); }
    BrzCampoPonteiro bOverrideSwimmingAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideSwimmingAcceleration")); }
    BrzCampoPonteiro bOverrideSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideSwimmingVelocity")); }
    BrzCampoPonteiro bOverrideWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bOverrideWalkingVelocity")); }
    BrzCampoPonteiro bPaintingSupportSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPaintingSupportSkins")); }
    BrzCampoPonteiro bPassiveFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPassiveFlee")); }
    BrzCampoPonteiro bPressedJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPressedJump")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventAllBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventAllBuffs")); }
    BrzCampoPonteiro bPreventAllRiderWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventAllRiderWeapons")); }
    BrzCampoPonteiro bPreventAnimationUpdateRateOptimizationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventAnimationUpdateRateOptimizations")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearShoulderMountOfDiffTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventClearShoulderMountOfDiffTeam")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventCloningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventCloning")); }
    BrzCampoPonteiro bPreventDinoResetAffinityOnUnsleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventDinoResetAffinityOnUnsleep")); }
    BrzCampoPonteiro bPreventDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventDynamicMusic")); }
    BrzCampoPonteiro bPreventExportDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventExportDino")); }
    BrzCampoPonteiro bPreventFallingBumpCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventFallingBumpCheck")); }
    BrzCampoPonteiro bPreventFlyerLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventFlyerLanding")); }
    BrzCampoPonteiro bPreventForceBabyFlyerLandField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventForceBabyFlyerLand")); }
    BrzCampoPonteiro bPreventHUDInitializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventHUDInitialization")); }
    BrzCampoPonteiro bPreventHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventHibernation")); }
    BrzCampoPonteiro bPreventHurtAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventHurtAnim")); }
    BrzCampoPonteiro bPreventIKWhenNotWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventIKWhenNotWalking")); }
    BrzCampoPonteiro bPreventInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventInventoryAccess")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLiveBlinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventLiveBlinking")); }
    BrzCampoPonteiro bPreventMatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventMating")); }
    BrzCampoPonteiro bPreventMoveUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventMoveUp")); }
    BrzCampoPonteiro bPreventMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventMovement")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventPassengerFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventPassengerFPV")); }
    BrzCampoPonteiro bPreventPerPixelPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventPerPixelPainting")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventRotationRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventRotationRateModifier")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventStasis")); }
    BrzCampoPonteiro bPreventTargetingAndMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventTargetingAndMovement")); }
    BrzCampoPonteiro bPreventUntamedRunField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventUntamedRun")); }
    BrzCampoPonteiro bPreventUploadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventUploading")); }
    BrzCampoPonteiro bPreventWakingTameFeedingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventWakingTameFeeding")); }
    BrzCampoPonteiro bPreventWanderingUnderWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventWanderingUnderWater")); }
    BrzCampoPonteiro bPreventWaterHopCorrectionVelChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventWaterHopCorrectionVelChange")); }
    BrzCampoPonteiro bPreventWildTrappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventWildTrapping")); }
    BrzCampoPonteiro bPreventsDinosWithStructureSupportingSaddlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bPreventsDinosWithStructureSupportingSaddles")); }
    BrzCampoPonteiro bProxyIsJumpForceAppliedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bProxyIsJumpForceApplied")); }
    BrzCampoPonteiro bRagdollIgnoresPawnCapsulesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRagdollIgnoresPawnCapsules")); }
    BrzCampoPonteiro bReachedMaxStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReachedMaxStructures")); }
    BrzCampoPonteiro bReadyToPoopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReadyToPoop")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRecentlyUpdateIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRecentlyUpdateIk")); }
    BrzCampoPonteiro bRefreshedColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRefreshedColorization")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemainLatchedOnClearRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRemainLatchedOnClearRider")); }
    BrzCampoPonteiro bRemoteRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRemoteRunning")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateCurrentSailRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicateCurrentSailRotation")); }
    BrzCampoPonteiro bReplicateDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicateDesiredRotation")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicateMovement")); }
    BrzCampoPonteiro bReplicatePassengerTPVAimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicatePassengerTPVAim")); }
    BrzCampoPonteiro bReplicatePitchWhileSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicatePitchWhileSwimming")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatedIsSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicatedIsSubmerged")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bReplicates")); }
    BrzCampoPonteiro bRiderDontRequireSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRiderDontRequireSaddle")); }
    BrzCampoPonteiro bRiderJumpTogglesFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRiderJumpTogglesFlight")); }
    BrzCampoPonteiro bRiderMovementLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRiderMovementLocked")); }
    BrzCampoPonteiro bRidingIsSeperateUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRidingIsSeperateUnstasisCaster")); }
    BrzCampoPonteiro bRidingRequiresTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRidingRequiresTamed")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SailsPivotingSoundinfo` +40, medido na build 25535041
    //  (offset absoluto medido: 0x2CD0; confianca media)
    void*& bRopeReachedEndOfTravelField() const
    { return BrzCampoAncorado<void*>(this, "SailsPivotingSoundinfo", 40); }
    BrzCampoPonteiro bRotateToFaceLatchingObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRotateToFaceLatchingObject")); }
    BrzCampoPonteiro bRotatingUpdatesDinoIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bRotatingUpdatesDinoIK")); }
    BrzCampoPonteiro bSailsAffectThrottleLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSailsAffectThrottleLocation")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSavedWhenStasised")); }
    BrzCampoPonteiro bServerForceUpdateDinoGameplayMeshNearPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bServerForceUpdateDinoGameplayMeshNearPlayer")); }
    BrzCampoPonteiro bServerInitializedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bServerInitializedDino")); }
    BrzCampoPonteiro bServerMoveIgnoreRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bServerMoveIgnoreRootMotion")); }
    BrzCampoPonteiro bShipHasSpecialAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bShipHasSpecialAttack")); }
    BrzCampoPonteiro bShouldBeInGodModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bShouldBeInGodMode")); }
    BrzCampoPonteiro bShouldHaveCargoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bShouldHaveCargo")); }
    BrzCampoPonteiro bSimGravityDisabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSimGravityDisabled")); }
    BrzCampoPonteiro bSimulateRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSimulateRootMotion")); }
    BrzCampoPonteiro bSingleplayerFreezePhysicsWhenNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSingleplayerFreezePhysicsWhenNoTarget")); }
    BrzCampoPonteiro bSkipProcessRootRotAndLocInAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSkipProcessRootRotAndLocInAimOffset")); }
    BrzCampoPonteiro bSkipRamDamageWhenNPCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSkipRamDamageWhenNPC")); }
    BrzCampoPonteiro bSleepedWaterRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSleepedWaterRagdoll")); }
    BrzCampoPonteiro bSleepingDisableRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSleepingDisableRagdoll")); }
    BrzCampoPonteiro bSmallRaftPushAwayPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSmallRaftPushAwayPlayers")); }
    BrzCampoPonteiro bSpankerVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSpankerVisible")); }
    BrzCampoPonteiro bSpawnScrapeVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSpawnScrapeVFX")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bStasised")); }
    BrzCampoPonteiro bStepDamageFoliageOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bStepDamageFoliageOnly")); }
    BrzCampoPonteiro bSupportWakingTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSupportWakingTame")); }
    BrzCampoPonteiro bSupportsPassengerSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSupportsPassengerSeats")); }
    BrzCampoPonteiro bSuppressDeathNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSuppressDeathNotification")); }
    BrzCampoPonteiro bSuppressPlayerKillNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSuppressPlayerKillNotification")); }
    BrzCampoPonteiro bSuppressWakingTameMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSuppressWakingTameMessage")); }
    BrzCampoPonteiro bSwimmingWaterDinoMoveLikeFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bSwimmingWaterDinoMoveLikeFlying")); }
    BrzCampoPonteiro bTakingOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTakingOff")); }
    BrzCampoPonteiro bTamedAIAllowSpecialAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTamedAIAllowSpecialAttacks")); }
    BrzCampoPonteiro bTamedAlwaysUseTamedUnsleepAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTamedAlwaysUseTamedUnsleepAnim")); }
    BrzCampoPonteiro bTamingHasFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTamingHasFood")); }
    BrzCampoPonteiro bTargetEverythingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTargetEverything")); }
    BrzCampoPonteiro bTargetingIgnoreWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTargetingIgnoreWildDinos")); }
    BrzCampoPonteiro bTargetingIgnoredByWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTargetingIgnoredByWildDinos")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTearOff")); }
    BrzCampoPonteiro bTickRowingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTickRowing")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bTriggerBPStasis")); }
    BrzCampoPonteiro bUniqueDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUniqueDino")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUpdateDinoLimbWallAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUpdateDinoLimbWallAvoidance")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAdvancedAnimLerpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseAdvancedAnimLerp")); }
    BrzCampoPonteiro bUseAmphibiousTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseAmphibiousTargeting")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAdjustAttackIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPAdjustAttackIndex")); }
    BrzCampoPonteiro bUseBPAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPAdjustDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPAllowRunningWhileFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPAllowRunningWhileFalling")); }
    BrzCampoPonteiro bUseBPAllowTeamToTrackTamingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPAllowTeamToTrackTamingDino")); }
    BrzCampoPonteiro bUseBPCanAnchorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPCanAnchor")); }
    BrzCampoPonteiro bUseBPCanCombineMovesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPCanCombineMoves")); }
    BrzCampoPonteiro bUseBPCanTargetCorpseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPCanTargetCorpse")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckCanSpawnFromLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPCheckCanSpawnFromLocation")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDinoFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPDinoFaceRotation")); }
    BrzCampoPonteiro bUseBPDinoTooltipCustomProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPDinoTooltipCustomProgressBar")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPFaceRotation")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceKeepBasedOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPForceKeepBasedOnDino")); }
    BrzCampoPonteiro bUseBPGetArmorDurabilityDecreaseMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetArmorDurabilityDecreaseMultiplier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFinalMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetFinalMaxSpeed")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetOtherActorToIgnoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetOtherActorToIgnore")); }
    BrzCampoPonteiro bUseBPGetOverrideCameraInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetOverrideCameraInterpSpeed")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetTamedFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetTamedFollowTarget")); }
    BrzCampoPonteiro bUseBPGetTargetingDesirabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetTargetingDesirability")); }
    BrzCampoPonteiro bUseBPGetTargetingDesirabilityForTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPGetTargetingDesirabilityForTurrets")); }
    BrzCampoPonteiro bUseBPInterceptMoveInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPInterceptMoveInputEvents")); }
    BrzCampoPonteiro bUseBPInterceptMoveInputEventsEvenIfZeroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPInterceptMoveInputEventsEvenIfZero")); }
    BrzCampoPonteiro bUseBPInterceptTurnInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPInterceptTurnInputEvents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPItemSlotOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPItemSlotOverrides")); }
    BrzCampoPonteiro bUseBPModifyDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPModifyDesiredRotation")); }
    BrzCampoPonteiro bUseBPModifyWanderAroundActorLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPModifyWanderAroundActorLocation")); }
    BrzCampoPonteiro bUseBPModifyXPMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPModifyXPMultiplier")); }
    BrzCampoPonteiro bUseBPNotifyOnBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPNotifyOnBuffAdded")); }
    BrzCampoPonteiro bUseBPNotifyOnBuffAddedToMountCharField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPNotifyOnBuffAddedToMountChar")); }
    BrzCampoPonteiro bUseBPOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOnCarryCharacter")); }
    BrzCampoPonteiro bUseBPOnEndChargingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOnEndCharging")); }
    BrzCampoPonteiro bUseBPOnImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOnImmobilize")); }
    BrzCampoPonteiro bUseBPOnLethalDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOnLethalDamage")); }
    BrzCampoPonteiro bUseBPOnSimulatedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOnSimulatedTick")); }
    BrzCampoPonteiro bUseBPOverrideAccessInventoryInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideAccessInventoryInput")); }
    BrzCampoPonteiro bUseBPOverrideBasedPlayerAimOffsetYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideBasedPlayerAimOffsetYaw")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bUseBPOverrideCharacterNewSwimVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideCharacterNewSwimVelocity")); }
    BrzCampoPonteiro bUseBPOverrideCharacterParticleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideCharacterParticle")); }
    BrzCampoPonteiro bUseBPOverrideCharacterSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideCharacterSound")); }
    BrzCampoPonteiro bUseBPOverrideDamageCauserHitMarkerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideDamageCauserHitMarker")); }
    BrzCampoPonteiro bUseBPOverrideFloatingHUDLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideFloatingHUDLocation")); }
    BrzCampoPonteiro bUseBPOverrideIsSubmergedForWaterTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideIsSubmergedForWaterTargeting")); }
    BrzCampoPonteiro bUseBPOverrideJumpZModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideJumpZModifier")); }
    BrzCampoPonteiro bUseBPOverridePassengerAdditiveAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverridePassengerAdditiveAnim")); }
    BrzCampoPonteiro bUseBPOverridePhysicsImpulsesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverridePhysicsImpulses")); }
    BrzCampoPonteiro bUseBPOverridePlayAnimExMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverridePlayAnimExMontage")); }
    BrzCampoPonteiro bUseBPOverrideRiderAccessInventoryInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideRiderAccessInventoryInput")); }
    BrzCampoPonteiro bUseBPOverrideRiderIndoorsCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideRiderIndoorsCheckLocation")); }
    BrzCampoPonteiro bUseBPOverrideStencilAllianceForTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideStencilAllianceForTarget")); }
    BrzCampoPonteiro bUseBPOverrideTamingDescriptionLabelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideTamingDescriptionLabel")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPlayHitEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPPlayHitEffect")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPPreventMovementMode")); }
    BrzCampoPonteiro bUseBPSetCharacterMeshseMaterialScalarParamValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPSetCharacterMeshseMaterialScalarParamValue")); }
    BrzCampoPonteiro bUseBPSetTamedFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPSetTamedFollowTarget")); }
    BrzCampoPonteiro bUseBPSetThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPSetThrottle")); }
    BrzCampoPonteiro bUseBPShieldBlockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPShieldBlock")); }
    BrzCampoPonteiro bUseBPShouldUseLongFallCameraPivotZValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPShouldUseLongFallCameraPivotZValues")); }
    BrzCampoPonteiro bUseBPSimulatePhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPSimulatePhysics")); }
    BrzCampoPonteiro bUseBPSkipTerrainTraceForCarriedCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPSkipTerrainTraceForCarriedCharacter")); }
    BrzCampoPonteiro bUseBPTimerNonDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPTimerNonDedicated")); }
    BrzCampoPonteiro bUseBPTimerServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBPTimerServer")); }
    BrzCampoPonteiro bUseBP_AdjustRowingImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_AdjustRowingImpulse")); }
    BrzCampoPonteiro bUseBP_CanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_CanFly")); }
    BrzCampoPonteiro bUseBP_CustomModifier_MaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_CustomModifier_MaxSpeed")); }
    BrzCampoPonteiro bUseBP_ForceAllowBuffClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_ForceAllowBuffClasses")); }
    BrzCampoPonteiro bUseBP_ModifyInputAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_ModifyInputAcceleration")); }
    BrzCampoPonteiro bUseBP_OnBasedPawnNotifiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OnBasedPawnNotifies")); }
    BrzCampoPonteiro bUseBP_OnBasedPawnSetNotifiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OnBasedPawnSetNotifies")); }
    BrzCampoPonteiro bUseBP_OnPostNetReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OnPostNetReplication")); }
    BrzCampoPonteiro bUseBP_OverrideBasedCharactersCameraInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OverrideBasedCharactersCameraInterpSpeed")); }
    BrzCampoPonteiro bUseBP_OverrideCarriedCharacterTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OverrideCarriedCharacterTransform")); }
    BrzCampoPonteiro bUseBP_OverrideDinoNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OverrideDinoName")); }
    BrzCampoPonteiro bUseBP_OverrideRiderCameraCollisionSweepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OverrideRiderCameraCollisionSweep")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_OverrideTerminalVelocity")); }
    BrzCampoPonteiro bUseBP_ShouldPreventBasedCharactersCameraInterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBP_ShouldPreventBasedCharactersCameraInterpolation")); }
    BrzCampoPonteiro bUseBlueprintExtraBabyScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBlueprintExtraBabyScale")); }
    BrzCampoPonteiro bUseBlueprintJumpInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseBlueprintJumpInputEvents")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseColorization")); }
    BrzCampoPonteiro bUseControllerRotationPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseControllerRotationPitch")); }
    BrzCampoPonteiro bUseControllerRotationRollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseControllerRotationRoll")); }
    BrzCampoPonteiro bUseControllerRotationYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseControllerRotationYaw")); }
    BrzCampoPonteiro bUseDeferredMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseDeferredMovement")); }
    BrzCampoPonteiro bUseDescriptiveNameGenderOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseDescriptiveNameGenderOverrides")); }
    BrzCampoPonteiro bUseDinoLimbWallAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseDinoLimbWallAvoidance")); }
    BrzCampoPonteiro bUseFixedSpawnLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseFixedSpawnLevel")); }
    BrzCampoPonteiro bUseForcestoApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseForcestoApply")); }
    BrzCampoPonteiro bUseGangField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseGang")); }
    BrzCampoPonteiro bUseGetOverrideSocketField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseGetOverrideSocket")); }
    BrzCampoPonteiro bUseMountCharacterProneOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseMountCharacterProneOffset")); }
    BrzCampoPonteiro bUseMyBabyCuddleFoodTypesAsAdditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseMyBabyCuddleFoodTypesAsAdditional")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnCharacterSteppedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseOnCharacterSteppedNotify")); }
    BrzCampoPonteiro bUseOnStartedAllyTargetLookingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseOnStartedAllyTargetLooking")); }
    BrzCampoPonteiro bUseOnUpdateMountedDinoMeshHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseOnUpdateMountedDinoMeshHiding")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePlayerMountedCarryingDinoAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUsePlayerMountedCarryingDinoAnimation")); }
    BrzCampoPonteiro bUsePoopAnimationNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUsePoopAnimationNotify")); }
    BrzCampoPonteiro bUsePreciseLaunchingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUsePreciseLaunching")); }
    BrzCampoPonteiro bUseRaftBPTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseRaftBPTick")); }
    BrzCampoPonteiro bUseRandomLookAtTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseRandomLookAtTarget")); }
    BrzCampoPonteiro bUseRootLocSwimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseRootLocSwimOffset")); }
    BrzCampoPonteiro bUseShoulderMountedLaunchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseShoulderMountedLaunch")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseStasisGrid")); }
    BrzCampoPonteiro bUseWildRandomScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseWildRandomScale")); }
    BrzCampoPonteiro bUseZeroGravityWanderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUseZeroGravityWander")); }
    BrzCampoPonteiro bUse_ModifySavedMoveAcceleration_PostRepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUse_ModifySavedMoveAcceleration_PostRep")); }
    BrzCampoPonteiro bUse_ModifySavedMoveAcceleration_PreRepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUse_ModifySavedMoveAcceleration_PreRep")); }
    BrzCampoPonteiro bUsesGenderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUsesGender")); }
    BrzCampoPonteiro bUsesRunningAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUsesRunningAnimation")); }
    BrzCampoPonteiro bUsesWaterWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bUsesWaterWalking")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedCurrentWetDockStructureID` +5, medido na build 25535041
    //  (offset absoluto medido: 0x3399; confianca alta)
    void*& bUsingLongRangeStasisField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedCurrentWetDockStructureID", 5); }
    BrzCampoPonteiro bVehicleAlwaysAllowTargetingByWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bVehicleAlwaysAllowTargetingByWildDinos")); }
    BrzCampoPonteiro bVehicleUpdatePPBlendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bVehicleUpdatePPBlends")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWantsToRunField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWantsToRun")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShipHullSinkMovementForceMultiplier` +32, medido na build 25535041
    //  (offset absoluto medido: 0x3408; confianca alta)
    void*& bWasAnchoredOrDryDockedField() const
    { return BrzCampoAncorado<void*>(this, "ShipHullSinkMovementForceMultiplier", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CreakMetalComponent` +8, medido na build 25535041
    //  (offset absoluto medido: 0x2DD8; confianca alta)
    void*& bWasAtFullSpeedField() const
    { return BrzCampoAncorado<void*>(this, "CreakMetalComponent", 8); }
    BrzCampoPonteiro bWasBeingDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWasBeingDragged")); }
    BrzCampoPonteiro bWasInCombatLastTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWasInCombatLastTick")); }
    BrzCampoPonteiro bWasJumpingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWasJumping")); }
    BrzCampoPonteiro bWildAllowFollowTamedTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWildAllowFollowTamedTarget")); }
    BrzCampoPonteiro bWildAllowTargetingNeutralStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWildAllowTargetingNeutralStructures")); }
    BrzCampoPonteiro bWildIgnoredByAutoTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.bWildIgnoredByAutoTurrets")); }
    float& chargingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShip.chargingRotationRateModifier"); }
    int& customBitFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShip.customBitFlags"); }
    BrzCampoPonteiro hasAlreadySetGenderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShip.hasAlreadySetGender")); }
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
