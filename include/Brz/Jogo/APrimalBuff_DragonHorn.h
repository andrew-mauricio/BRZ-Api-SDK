// ==========================================================================
//  APrimalBuff_DragonHorn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_DRAGONHORN_H
#define BRZ_SDK_JOGO_APRIMALBUFF_DRAGONHORN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct AShooterPlayerController;
struct FActorTickFunction;
struct FName;
struct FVector2D;
struct UAudioComponent;
struct UInputComponent;
struct UMaterialInterface;
struct UPrimalBuffPersistentData;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;


struct APrimalBuff_DragonHorn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_DragonHorn"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.AbortQueuedSkyDash(AShooterPlayerController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AbortQueuedSkyDash(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.AbortQueuedSkyDash(AShooterPlayerController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AbortQueuedSkyDash(void* a0, FString* a1) const
    { return AbortQueuedSkyDash(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.AppendQuickActionEntries(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendQuickActionEntries(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.AppendQuickActionEntries(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ApplySkillCooldown(UPrimalBuffPersistentData_DragonHorn*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplySkillCooldown(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_DragonHorn.ApplySkillCooldown(UPrimalBuffPersistentData_DragonHorn*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BP_CanLinkDino(APrimalDinoCharacter*,AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BP_CanLinkDino(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.BP_CanLinkDino(APrimalDinoCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BP_CanUseDragonHornAction(EDragonHornDinoAction,AShooterPlayerController*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_CanUseDragonHornAction(int a0, void* a1, const FString& a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "APrimalBuff_DragonHorn.BP_CanUseDragonHornAction(EDragonHornDinoAction,AShooterPlayerController*,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BP_CanUseDragonHornAction(int a0, void* a1, FString* a2) const
    { return BP_CanUseDragonHornAction(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BP_CanUseDragonHornAction_Implementation(EDragonHornDinoAction,AShooterPl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_CanUseDragonHornAction_Implementation(int a0, void* a1, const FString& a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "APrimalBuff_DragonHorn.BP_CanUseDragonHornAction_Implementation(EDragonHornDinoAction,AShooterPlayerController*,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BP_CanUseDragonHornAction_Implementation(int a0, void* a1, FString* a2) const
    { return BP_CanUseDragonHornAction_Implementation(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BP_LoadDino(FCustomItemData&,UE::Math::TVector<double>,UE::Math::TRotator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_LoadDino(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.BP_LoadDino(FCustomItemData&,UE::Math::TVector<double>,UE::Math::TRotator<double>,AShooterPlayerController*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BP_StoreDino(APrimalDinoCharacter*,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_StoreDino(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.BP_StoreDino(APrimalDinoCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BindLinkedDinoAfterSetup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindLinkedDinoAfterSetup() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.BindLinkedDinoAfterSetup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BindLinkedDinoDeathDelegate(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindLinkedDinoDeathDelegate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.BindLinkedDinoDeathDelegate(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BindToDino(APrimalDinoCharacter*,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindToDino(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.BindToDino(APrimalDinoCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.BuildEntry(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int,FString
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuildEntry(void* a0, int a1, const FString& a2, void* a3, bool a4, const FString& a5, float a6, int a7) const
    {
        return NativeCall<void*, void*, int, void*, void*, bool, void*, float, int>(this, "APrimalBuff_DragonHorn.BuildEntry(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int,FString&,UTexture2D*,bool,FString&,float,int)", a0, a1, const_cast<FString*>(&a2), a3, a4, const_cast<FString*>(&a5), a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BuildEntry(void* a0, int a1, FString* a2, void* a3, bool a4, FString* a5, float a6, int a7) const
    { return BuildEntry(a0, a1, *a2, a3, a4, *a5, a6, a7); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CanPlaceDinoAtLocation(AShooterPlayerController*,TSubclassOf<APrimalDinoC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanPlaceDinoAtLocation(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, const FString& a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, bool, void*>(this, "APrimalBuff_DragonHorn.CanPlaceDinoAtLocation(AShooterPlayerController*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,bool,FString&)", a0, a1, a2, a3, a4, a5, const_cast<FString*>(&a6));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CanPlaceDinoAtLocation(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, FString* a6) const
    { return CanPlaceDinoAtLocation(a0, a1, a2, a3, a4, a5, *a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CanSkyDashFromLocation(APrimalDinoCharacter*,TSubclassOf<APrimalDinoChara
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanSkyDashFromLocation(void* a0, void* a1, void* a2, void* a3, void* a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.CanSkyDashFromLocation(APrimalDinoCharacter*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AShooterCharacter*,FString&)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CanSkyDashFromLocation(void* a0, void* a1, void* a2, void* a3, void* a4, FString* a5) const
    { return CanSkyDashFromLocation(a0, a1, a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CanStartOperation(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanStartOperation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.CanStartOperation(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CanUseSkillAfterCooldown(AShooterPlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseSkillAfterCooldown(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_DragonHorn.CanUseSkillAfterCooldown(AShooterPlayerController*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CheckHornActionSkillUnlocked(EDragonHornDinoAction,AShooterPlayerControll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckHornActionSkillUnlocked(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "APrimalBuff_DragonHorn.CheckHornActionSkillUnlocked(EDragonHornDinoAction,AShooterPlayerController*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClearAllCooldowns()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearAllCooldowns() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ClearAllCooldowns()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClearDragonHornLink(AShooterPlayerController*,FString&,FLinearColor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearDragonHornLink(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.ClearDragonHornLink(AShooterPlayerController*,FString&,FLinearColor&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ClearDragonHornLink(void* a0, FString* a1, void* a2) const
    { return ClearDragonHornLink(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClearFlyAwayMonitor(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearFlyAwayMonitor(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_DragonHorn.ClearFlyAwayMonitor(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClearGetMeTeleportMontage()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearGetMeTeleportMontage() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ClearGetMeTeleportMontage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClearSkyDashMonitor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearSkyDashMonitor() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ClearSkyDashMonitor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalBuff_DragonHorn.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClientShowFlyAwayCargoConfirm()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientShowFlyAwayCargoConfirm() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ClientShowFlyAwayCargoConfirm()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ClientShowFlyAwayCargoConfirm_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientShowFlyAwayCargoConfirm_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ClientShowFlyAwayCargoConfirm_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CommitFlyAwayStorage(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CommitFlyAwayStorage(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_DragonHorn.CommitFlyAwayStorage(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.CommitRecalledDragonLive(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CommitRecalledDragonLive(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.CommitRecalledDragonLive(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.DrawDragonHornBuffStatusHUD(AShooterHUD*,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawDragonHornBuffStatusHUD(void* a0, float a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, float, float, float>(this, "APrimalBuff_DragonHorn.DrawDragonHornBuffStatusHUD(AShooterHUD*,float,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.DropCargoBeforeStoringDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DropCargoBeforeStoringDino(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.DropCargoBeforeStoringDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff_DragonHorn.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.EnforceCaptureStoredDragon(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnforceCaptureStoredDragon(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_DragonHorn.EnforceCaptureStoredDragon(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.EnsureHornItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnsureHornItem() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.EnsureHornItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.EnsureHornItemAfterSetup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnsureHornItemAfterSetup() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.EnsureHornItemAfterSetup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.EnsureHornItemPresence(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnsureHornItemPresence(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_DragonHorn.EnsureHornItemPresence(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ExecuteComeHere(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteComeHere(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.ExecuteComeHere(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ExecuteGetMe(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteGetMe(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.ExecuteGetMe(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ExecuteGetMeTeleportAndDash(APrimalDinoCharacter*,AShooterPlayerControlle
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteGetMeTeleportAndDash(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.ExecuteGetMeTeleportAndDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ExecuteUnlink(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecuteUnlink(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.ExecuteUnlink(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.FindForCharacter(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindForCharacter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.FindForCharacter(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.FindLinkedLiveDino()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindLinkedLiveDino() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.FindLinkedLiveDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.FindOrAddForCharacter(AShooterCharacter*,TSubclassOf<APrimalBuff_DragonHo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindOrAddForCharacter(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.FindOrAddForCharacter(AShooterCharacter*,TSubclassOf<APrimalBuff_DragonHorn>,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.FinishFlyAwayAndStore()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishFlyAwayAndStore() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.FinishFlyAwayAndStore()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ForceDinoFlying(APrimalDinoCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceDinoFlying(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_DragonHorn.ForceDinoFlying(APrimalDinoCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.FormatCooldownRemaining(double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FormatCooldownRemaining(double a0) const
    {
        return NativeCall<void*, double>(this, "APrimalBuff_DragonHorn.FormatCooldownRemaining(double)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetCooldownDisabledReason(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCooldownDisabledReason(int a0, const FString& a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalBuff_DragonHorn.GetCooldownDisabledReason(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetCooldownDisabledReason(int a0, FString* a1) const
    { return GetCooldownDisabledReason(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetCooldownSkillName(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCooldownSkillName(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff_DragonHorn.GetCooldownSkillName(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetDesiredHornItem(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDesiredHornItem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.GetDesiredHornItem(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetDragonHornComponentForDinoClass(TSubclassOf<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDragonHornComponentForDinoClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.GetDragonHornComponentForDinoClass(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetDragonHornData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDragonHornData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetDragonHornData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetDragonHornData(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDragonHornData(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_DragonHorn.GetDragonHornData(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetDragonHornSkillMultiplier(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDragonHornSkillMultiplier(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuff_DragonHorn.GetDragonHornSkillMultiplier(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetFlyAwayTarget(APrimalDinoCharacter*,AShooterCharacter*,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFlyAwayTarget(void* a0, void* a1, void* a2, const FString& a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.GetFlyAwayTarget(APrimalDinoCharacter*,AShooterCharacter*,UE::Math::TVector<double>&,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetFlyAwayTarget(void* a0, void* a1, void* a2, FString* a3) const
    { return GetFlyAwayTarget(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetGetMeDashTargetLocation(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGetMeDashTargetLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.GetGetMeDashTargetLocation(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetInstigatorPlayerData()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetInstigatorPlayerData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetInstigatorPlayerData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetLinkCooldownDisabledReason(FString&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetLinkCooldownDisabledReason(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.GetLinkCooldownDisabledReason(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetLinkCooldownDisabledReason(FString* a0) const
    { return GetLinkCooldownDisabledReason(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetLinkedDino()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLinkedDino() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetLinkedDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetQuickActionDisplayName(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetQuickActionDisplayName(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff_DragonHorn.GetQuickActionDisplayName(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetShooterController()
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerController* GetShooterController() const
    {
        return NativeCall<AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.GetShooterController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetShooterInstigator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShooterInstigator() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetShooterInstigator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetSkillAdjustedGetMeMaxDistance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkillAdjustedGetMeMaxDistance() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetSkillAdjustedGetMeMaxDistance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.HasClearSkyAtLocation(TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasClearSkyAtLocation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.HasClearSkyAtLocation(TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.HasInventoryCargo(APrimalDinoCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HasInventoryCargo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.HasInventoryCargo(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.HideBuffFromHUD_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HideBuffFromHUD_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.HideBuffFromHUD_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.IsDragonHornActionSkillUnlocked(EDragonHornDinoAction)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDragonHornActionSkillUnlocked(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff_DragonHorn.IsDragonHornActionSkillUnlocked(EDragonHornDinoAction)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.IsDragonHornSkillUnlocked(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDragonHornSkillUnlocked(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuff_DragonHorn.IsDragonHornSkillUnlocked(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.IsLinkSkillUnlockedForDino(APrimalDinoCharacter*,AShooterPlayerController
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLinkSkillUnlockedForDino(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.IsLinkSkillUnlockedForDino(APrimalDinoCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.IsLinkedToLiveDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLinkedToLiveDino(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.IsLinkedToLiveDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.IsPersonallyBondedToDino(APrimalDinoCharacter*,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPersonallyBondedToDino(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.IsPersonallyBondedToDino(APrimalDinoCharacter*,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.MarkOperationAttempt()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MarkOperationAttempt() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.MarkOperationAttempt()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.MonitorFlyAway()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MonitorFlyAway() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.MonitorFlyAway()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.MonitorSkyDash()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MonitorSkyDash() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.MonitorSkyDash()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.NotifyDragonHornDinoAction(APrimalDinoCharacter*,EDragonHornDinoAction,AS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyDragonHornDinoAction(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "APrimalBuff_DragonHorn.NotifyDragonHornDinoAction(APrimalDinoCharacter*,EDragonHornDinoAction,AShooterPlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OnFlyAwayDashEnded(EDragonManeuverEndReason,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnFlyAwayDashEnded(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalBuff_DragonHorn.OnFlyAwayDashEnded(EDragonManeuverEndReason,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OnGetMeTeleportMontageFinished()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGetMeTeleportMontageFinished() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.OnGetMeTeleportMontageFinished()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OnLinkedDinoDied(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLinkedDinoDied(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.OnLinkedDinoDied(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OpenHornRadial(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OpenHornRadial(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.OpenHornRadial(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.PrepareLiveDragonForSkyDash(APrimalDinoCharacter*,AShooterPlayerControlle
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareLiveDragonForSkyDash(void* a0, void* a1, void* a2, void* a3, void* a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.PrepareLiveDragonForSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool&,FString&)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro PrepareLiveDragonForSkyDash(void* a0, void* a1, void* a2, void* a3, void* a4, FString* a5) const
    { return PrepareLiveDragonForSkyDash(a0, a1, a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.PruneSavedDragonHornPersistentData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PruneSavedDragonHornPersistentData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.PruneSavedDragonHornPersistentData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.PushReplicatedStateFromPersistentData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PushReplicatedStateFromPersistentData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.PushReplicatedStateFromPersistentData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.QueueDragonSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShoot
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro QueueDragonSkyDash(void* a0, void* a1, void* a2, void* a3, bool a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, float, bool>(this, "APrimalBuff_DragonHorn.QueueDragonSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.RefreshAfterInstigatorSetup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshAfterInstigatorSetup() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.RefreshAfterInstigatorSetup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ResolveBuffForLink(AShooterCharacter*,TSubclassOf<APrimalBuff_DragonHorn>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveBuffForLink(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.ResolveBuffForLink(AShooterCharacter*,TSubclassOf<APrimalBuff_DragonHorn>,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.SaveOwnerProfile(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveOwnerProfile(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_DragonHorn.SaveOwnerProfile(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ServerFlyAwayCargoConfirmResult_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerFlyAwayCargoConfirmResult_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_DragonHorn.ServerFlyAwayCargoConfirmResult_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ServerUseQuickAction()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUseQuickAction() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ServerUseQuickAction()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ServerUseQuickAction_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUseQuickAction_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ServerUseQuickAction_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.SetQuickActionUseIndex(AShooterPlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetQuickActionUseIndex(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff_DragonHorn.SetQuickActionUseIndex(AShooterPlayerController*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.SetupForInstigator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupForInstigator() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.SetupForInstigator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ShouldHaveHornItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldHaveHornItem() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.ShouldHaveHornItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.SpawnStoredDragonFromHorn(AShooterPlayerController*,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnStoredDragonFromHorn(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.SpawnStoredDragonFromHorn(AShooterPlayerController*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StartDragonSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShoot
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartDragonSkyDash(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "APrimalBuff_DragonHorn.StartDragonSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StartFaceTargetDash(APrimalDinoCharacter*,UE::Math::TVector<double>&,floa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartFaceTargetDash(void* a0, void* a1, float a2, float a3, bool a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, float, float, bool, void*>(this, "APrimalBuff_DragonHorn.StartFaceTargetDash(APrimalDinoCharacter*,UE::Math::TVector<double>&,float,float,bool,UDracoFlightMovementComponent*&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StartFlyAway(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartFlyAway(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_DragonHorn.StartFlyAway(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StartQueuedSkyDash()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartQueuedSkyDash() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.StartQueuedSkyDash()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StartSkillCooldown(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartSkillCooldown(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff_DragonHorn.StartSkillCooldown(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StartStoredDragonSkyDash(AShooterPlayerController*,AShooterCharacter*,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartStoredDragonSkyDash(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "APrimalBuff_DragonHorn.StartStoredDragonSkyDash(AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.StoreLinkedDinoInHorn(AShooterPlayerController*,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StoreLinkedDinoInHorn(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, bool, bool>(this, "APrimalBuff_DragonHorn.StoreLinkedDinoInHorn(AShooterPlayerController*,bool,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.TeleportDinoToSkyDashStart(APrimalDinoCharacter*,AShooterPlayerController
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TeleportDinoToSkyDashStart(void* a0, void* a1, void* a2, void* a3, const FString& a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.TeleportDinoToSkyDashStart(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TeleportDinoToSkyDashStart(void* a0, void* a1, void* a2, void* a3, FString* a4) const
    { return TeleportDinoToSkyDashStart(a0, a1, a2, a3, *a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.TryGetSkyDashStartLocation(AShooterPlayerController*,TSubclassOf<APrimalD
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryGetSkyDashStartLocation(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, const FString& a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.TryGetSkyDashStartLocation(AShooterPlayerController*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,FString&)", a0, a1, a2, a3, a4, a5, const_cast<FString*>(&a6));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TryGetSkyDashStartLocation(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, FString* a6) const
    { return TryGetSkyDashStartLocation(a0, a1, a2, a3, a4, a5, *a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.TryGetSpawnLocationForPlayer(AShooterPlayerController*,TSubclassOf<APrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryGetSpawnLocationForPlayer(void* a0, void* a1, void* a2, void* a3, void* a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "APrimalBuff_DragonHorn.TryGetSpawnLocationForPlayer(AShooterPlayerController*,TSubclassOf<APrimalDinoCharacter>,APrimalDinoCharacter*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FString&)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TryGetSpawnLocationForPlayer(void* a0, void* a1, void* a2, void* a3, void* a4, FString* a5) const
    { return TryGetSpawnLocationForPlayer(a0, a1, a2, a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.TryMountPendingSkyDashRider()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMountPendingSkyDashRider() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.TryMountPendingSkyDashRider()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalBuff_DragonHorn.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.TryStartPendingFlyAwayDash()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryStartPendingFlyAwayDash() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.TryStartPendingFlyAwayDash()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.UnbindLinkedDinoDeathDelegate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnbindLinkedDinoDeathDelegate() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.UnbindLinkedDinoDeathDelegate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.UpdateBuffPersistentData_Implementation(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateBuffPersistentData_Implementation(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "APrimalBuff_DragonHorn.UpdateBuffPersistentData_Implementation(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ValidateLinkCandidate(APrimalDinoCharacter*,AShooterPlayerController*,FSt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateLinkCandidate(void* a0, void* a1, const FString& a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "APrimalBuff_DragonHorn.ValidateLinkCandidate(APrimalDinoCharacter*,AShooterPlayerController*,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ValidateLinkCandidate(void* a0, void* a1, FString* a2, bool a3) const
    { return ValidateLinkCandidate(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.ValidatePlayerOwner(AShooterPlayerController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidatePlayerOwner(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_DragonHorn.ValidatePlayerOwner(AShooterPlayerController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ValidatePlayerOwner(void* a0, FString* a1) const
    { return ValidatePlayerOwner(a0, *a1); }

    float& AOEBuffIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.AOEBuffIntervalMax"); }
    float& AOEBuffIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.AOEBuffIntervalMin"); }
    float& AOEBuffRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.AOEBuffRange"); }
    BrzCampoPonteiro AOEOtherBuffToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.AOEOtherBuffToApply")); }
    float& ActivateSoundFadeInDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ActivateSoundFadeInDuration"); }
    TArray<void*>& ActivePreventsBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.ActivePreventsBuffClasses"); }
    BrzCampoPonteiro ActivePreventsBuffClassesExceptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ActivePreventsBuffClassesExceptions")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_DragonHorn.ActorUsingQuickAction"); }
    int& AddBuffMaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.AddBuffMaxNumStacks"); }
    float& AdditionalRidingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.AdditionalRidingDistance"); }
    int& AltNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.AltNumStacks"); }
    float& AoEApplyDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.AoEApplyDamageInterval"); }
    BrzCampoPonteiro AoEApplyDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.AoEApplyDamageType")); }
    BrzCampoPonteiro AoEBuffLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.AoEBuffLocOffset")); }
    TArray<void*>& AoEClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.AoEClassesToExclude"); }
    TArray<void*>& AoEClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.AoEClassesToInclude"); }
    BrzCampoPonteiro AoETraceToTargetsStartOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.AoETraceToTargetsStartOffset")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_DragonHorn.AutoReceiveInput"); }
    TArray<void*>& BPNotifyActivationToOtherBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.BPNotifyActivationToOtherBuffClasses"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.BlueprintCreatedComponents"); }
    TArray<void*>& BuffClassesToCancelOnActivationField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.BuffClassesToCancelOnActivation"); }
    TWeakObjectPtr<void>& BuffDamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.BuffDamageCauser"); }
    BrzCampoPonteiro BuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffDescription")); }
    BrzCampoPonteiro BuffPersistentDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffPersistentDataClass")); }
    BrzCampoPonteiro BuffPostProcessEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffPostProcessEffect")); }
    TArray<void*>& BuffPreventsOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.BuffPreventsOwnerClass"); }
    TArray<void*>& BuffRequiresOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.BuffRequiresOwnerClass"); }
    double& BuffStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.BuffStartTime"); }
    BrzCampoPonteiro BuffStatusBarOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusBarOffset")); }
    BrzCampoPonteiro BuffStatusBarSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusBarSize")); }
    BrzCampoPonteiro BuffStatusBorderColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusBorderColor")); }
    float& BuffStatusBorderThicknessField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffStatusBorderThickness"); }
    FString& BuffStatusFarTextField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.BuffStatusFarText"); }
    BrzCampoPonteiro BuffStatusFarTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusFarTextColor")); }
    BrzCampoPonteiro BuffStatusFontField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusFont")); }
    BrzCampoPonteiro BuffStatusHealthColorHighField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusHealthColorHigh")); }
    BrzCampoPonteiro BuffStatusHealthColorLowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusHealthColorLow")); }
    BrzCampoPonteiro BuffStatusStoredBackgroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusStoredBackgroundColor")); }
    FString& BuffStatusStoredTextField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.BuffStatusStoredText"); }
    BrzCampoPonteiro BuffStatusStoredTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffStatusStoredTextColor")); }
    float& BuffStatusStoredTextScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffStatusStoredTextScale"); }
    float& BuffTickClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffTickRemoteClientMinTime"); }
    float& BuffTickServerMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffTickServerMinTime"); }
    BrzCampoPonteiro BuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.BuffToGiveOnDeactivation")); }
    BrzCampoPonteiro CameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.CameraShake")); }
    float& CameraShakeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CameraShakeFalloff"); }
    float& CameraShakeInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CameraShakeInnerRadius"); }
    float& CameraShakeOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CameraShakeOuterRadius"); }
    float& CameraShakeScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CameraShakeScaleMultiplier"); }
    float& CharacterAOEBuffDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterAOEBuffResistance"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    TArray<void*>& CharacterStatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.CharacterStatusValueModifiers"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ColorParameter")); }
    float& ComeHereCooldownSecondsField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ComeHereCooldownSeconds"); }
    BrzCampoPonteiro ComeHereIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ComeHereIcon")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.CustomTimeDilation"); }
    float& DeactivateAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.DeactivateAfterTime"); }
    float& DeactivateSoundFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.DeactivateSoundFadeOutDuration"); }
    USoundBase*& DeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_DragonHorn.DeactivatedSound"); }
    float& DeactivationLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.DeactivationLifespan"); }
    BrzCampoPonteiro DecalToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.DecalToSpawn")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DepleteInstigatorItemDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.DepleteInstigatorItemDurabilityPerSecond"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_DragonHorn.DesiredRepGraphBehavior"); }
    float& DinoColorizationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.DinoColorizationInterpSpeed"); }
    int& DinoColorizationPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.DinoColorizationPriority"); }
    TArray<void*>& DisabledWeaponTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.DisabledWeaponTags"); }
    BrzCampoPonteiro EmitterNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.EmitterNiagaraComponent")); }
    float& ExtendBuffTimeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ExtendBuffTimeOverride"); }
    USoundBase*& ExtraActivationSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_DragonHorn.ExtraActivationSoundToPlay"); }
    FName& FlyAwayComeHereCooldownModifierNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.FlyAwayComeHereCooldownModifierName"); }
    FName& FlyAwayComeHereUnlockSkillNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.FlyAwayComeHereUnlockSkillName"); }
    float& FlyAwayCooldownSecondsField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FlyAwayCooldownSeconds"); }
    float& FlyAwayDashHorizontalDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FlyAwayDashHorizontalDistance"); }
    double& FlyAwayExpireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.FlyAwayExpireTime"); }
    BrzCampoPonteiro FlyAwayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.FlyAwayIcon")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingFlyAwayController` +12, medido na build 25535041
    //  (offset absoluto medido: 0xE30; confianca alta)
    void*& FlyAwayMonitorTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "PendingFlyAwayController", 12); }
    float& FlyAwaySkyDashSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FlyAwaySkyDashSpeed"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ForceMaximumReplicationRateUntilTime"); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ForceNetworkSpatializationBuffMaxLimitRange"); }
    BrzCampoPonteiro ForceNetworkSpatializationMaxLimitBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ForceNetworkSpatializationMaxLimitBuffType")); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    float& FrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FrictionModifier"); }
    FName& GetMeCooldownModifierNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.GetMeCooldownModifierName"); }
    float& GetMeCooldownSecondsField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.GetMeCooldownSeconds"); }
    FName& GetMeDistanceModifierNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.GetMeDistanceModifierName"); }
    BrzCampoPonteiro GetMeIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.GetMeIcon")); }
    float& GetMeMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.GetMeMaxDistance"); }
    FName& GetMeUnlockSkillNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.GetMeUnlockSkillName"); }
    float& HarvestQuantityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.HarvestQuantityMultiplier"); }
    BrzCampoPonteiro HitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.HitLocation")); }
    BrzCampoPonteiro HornItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.HornItemClass")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.HypoThermiaInsulation"); }
    BrzCampoPonteiro ImpulseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ImpulseData")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalBuff_DragonHorn.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalBuff_DragonHorn.Instigator"); }
    FName& InstigatorAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.InstigatorAttachmentSocket_PlayerOverride"); }
    TWeakObjectPtr<void>& InstigatorItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.InstigatorItem"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.InsulationRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastExitStasisTime"); }
    double& LastItemDurabilityDepletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastItemDurabilityDepletionTime"); }
    double& LastOperationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastOperationTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.LastSelectedWindSourceComponentName"); }
    double& LastSkyDashRetargetTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastSkyDashRetargetTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastThrottledTickTime"); }
    double& LastTimeAddedStackField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastTimeAddedStack"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.Layers"); }
    float& LinkDragonCooldownSecondsField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.LinkDragonCooldownSeconds"); }
    FName& LinkUnlockSkillNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.LinkUnlockSkillName"); }
    TWeakObjectPtr<void>& LinkedLiveDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.LinkedLiveDino"); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.MPCAdjusters")); }
    int& MaxConcurrentActivatedVfxField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.MaxConcurrentActivatedVfx"); }
    int& MaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.MaxNumStacks"); }
    TArray<void*>& MaxStatScalersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.MaxStatScalers"); }
    float& Maximum2DVelocityForStaminaRecoveryField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.Maximum2DVelocityForStaminaRecovery"); }
    float& MaximumVelocityZForSlowingFallField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.MaximumVelocityZForSlowingFall"); }
    float& MeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.MeleeDamageMultiplier"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.MinNetUpdateFrequency"); }
    float& MinTimeBetweenStacksField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.MinTimeBetweenStacks"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() const
    { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff_DragonHorn.MyBuffPersistentData"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_DragonHorn.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_DragonHorn.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.NiagaraComponent")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnMatineeUpdated")); }
    BrzCampoPonteiro OnParticleBurstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnParticleBurst")); }
    BrzCampoPonteiro OnParticleCollideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnParticleCollide")); }
    BrzCampoPonteiro OnParticleDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnParticleDeath")); }
    BrzCampoPonteiro OnParticleSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnParticleSpawn")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.OnTargetingTeamChanged")); }
    float& OnlyForInstigatorSoundFadeInTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.OnlyForInstigatorSoundFadeInTime"); }
    float& OperationCooldownSecondsField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.OperationCooldownSeconds"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.OriginalCreationTime"); }
    TArray<void*>& OverrideInventoryItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.OverrideInventoryItemClassWeightMultipliers"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_DragonHorn.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.ParentComponent"); }
    BrzCampoPonteiro ParticleSystemComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ParticleSystemComponent")); }
    TWeakObjectPtr<void>& PendingFlyAwayControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingFlyAwayController"); }
    TWeakObjectPtr<void>& PendingFlyAwayDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingFlyAwayDino"); }
    TWeakObjectPtr<void>& PendingSkyDashControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashController"); }
    TWeakObjectPtr<void>& PendingSkyDashDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashDino"); }
    TWeakObjectPtr<void>& PendingSkyDashRiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashRider"); }
    BrzCampoPonteiro PendingSkyDashTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.PendingSkyDashTargetLocation")); }
    TWeakObjectPtr<void>& PendingTeleportControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingTeleportController"); }
    TWeakObjectPtr<void>& PendingTeleportDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingTeleportDino"); }
    TWeakObjectPtr<void>& PendingTeleportRiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.PendingTeleportRider"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.PhysicsReplicationMode")); }
    float& PostProcessInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.PostProcessInterpSpeedUp"); }
    TArray<UMaterialInterface*>& PostprocessBlendablesToExcludeField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff_DragonHorn.PostprocessBlendablesToExclude"); }
    TArray<void*>& PostprocessMaterialAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.PostprocessMaterialAdjusters"); }
    TArray<void*>& PreventActorClassesTargetingField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.PreventActorClassesTargeting"); }
    TArray<void*>& PreventActorClassesTargetingRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.PreventActorClassesTargetingRanges"); }
    float& PreventIfMovementMassGreaterThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.PreventIfMovementMassGreaterThan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalBuff_DragonHorn.PrimaryActorTick"); }
    BrzCampoPonteiro QuickActionIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.QuickActionIcon")); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.RayTracingGroupId"); }
    float& ReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ReceiveDamageMultiplier"); }
    float& ReflectMeleeDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ReflectMeleeDamagePercent"); }
    AMissionType*& RelatedMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_DragonHorn.RelatedMission"); }
    float& RemoteForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.RemoteForcedFleeDuration"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_DragonHorn.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.RepGraphBehavior")); }
    unsigned int& ReplicatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalBuff_DragonHorn.ReplicatedDinoID1"); }
    unsigned int& ReplicatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalBuff_DragonHorn.ReplicatedDinoID2"); }
    FString& ReplicatedDinoNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.ReplicatedDinoName"); }
    BrzCampoPonteiro ReplicatedLinkStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ReplicatedLinkState")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ReplicatedMovement")); }
    double& ReplicatedNextComeHereTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextComeHereTime"); }
    double& ReplicatedNextFlyAwayTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextFlyAwayTime"); }
    double& ReplicatedNextGetMeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextGetMeTime"); }
    double& ReplicatedNextLinkDragonTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextLinkDragonTime"); }
    int& ReplicatedQuickActionUseIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.ReplicatedQuickActionUseIndex"); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_DragonHorn.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalBuff_DragonHorn.RootComponent"); }
    BrzCampoPonteiro RootTransformCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.RootTransformComp")); }
    float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
    float& ShallowEmitterOverrideSecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ShallowEmitterOverrideSecondsBeforeInactive"); }
    float& ShallowEmitterSpawnableMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ShallowEmitterSpawnableMaxDistance"); }
    BrzCampoPonteiro ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    float& SkillActivationCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkillActivationCost"); }
    unsigned char& SkillActivationStatusCostTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_DragonHorn.SkillActivationStatusCostType"); }
    float& SkyDashExitSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashExitSpeed"); }
    double& SkyDashExpireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.SkyDashExpireTime"); }
    float& SkyDashGetMeExitSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashGetMeExitSpeed"); }
    float& SkyDashGetMeTargetHeightOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashGetMeTargetHeightOffset"); }
    float& SkyDashMaxDirectDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashMaxDirectDistance"); }
    float& SkyDashMonitorIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashMonitorInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingSkyDashTargetLocation` +24, medido na build 25535041
    //  (offset absoluto medido: 0xDE8; confianca alta)
    void*& SkyDashMonitorTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "PendingSkyDashTargetLocation", 24); }
    float& SkyDashMountRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashMountRadius"); }
    float& SkyDashRetargetDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashRetargetDistance"); }
    float& SkyDashRetargetIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashRetargetInterval"); }
    float& SkyDashSpawnReplicationDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashSpawnReplicationDelay"); }
    float& SkyDashSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PendingSkyDashTargetLocation` +32, medido na build 25535041
    //  (offset absoluto medido: 0xDF0; confianca alta)
    void*& SkyDashStartDelayTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "PendingSkyDashTargetLocation", 32); }
    float& SkyDashStartHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashStartHeight"); }
    double& SkyDashStartedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.SkyDashStartedTime"); }
    float& SkyDashTimeoutSecondsField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashTimeoutSeconds"); }
    float& SlowInstigatorFallingAddZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SlowInstigatorFallingDampenZVelocity"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_DragonHorn.SoundToPlay"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.SpawnCollisionHandlingMethod")); }
    float& SpawnForwardOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SpawnForwardOffset"); }
    float& SpawnHeightOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SpawnHeightOffset"); }
    BrzCampoPonteiro SpawnedForActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.SpawnedForActor")); }
    float& StackDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.StackDuration"); }
    float& StackingUpdatedBuffLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.StackingUpdatedBuffLifetime"); }
    float& StaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.StaminaDrainMultiplier"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalBuff_DragonHorn.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalBuff_DragonHorn.StasisUnRegisteredComponents"); }
    float& SubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SubmergedMaxAccelerationModifier"); }
    float& SubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SubmergedMaxSpeedModifier"); }
    float& SubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SubmergedRotationRateModifier"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.TPVCameraOffsetMultiplier")); }
    float& TPVCameraSpeedInterpolationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.TPVCameraSpeedInterpolationMultiplier"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_DragonHorn.Tags"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_DragonHorn.Target"); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_DragonHorn.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_DragonHorn.TargetingInfoTooltipScale"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.TargetingTooltipCheckRange"); }
    BrzCampoPonteiro UnlinkIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.UnlinkIcon")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.UnstasisLastInRangeTime"); }
    float& UnsubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.UnsubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.UnsubmergedMaxSpeedModifier"); }
    float& UnsubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.UnsubmergedRotationRateModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPAdjustOutputDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.UseBPAdjustOutputDamage")); }
    BrzCampoPonteiro UseBPAdjustOutputDamageForNonMeleePlayerDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.UseBPAdjustOutputDamageForNonMeleePlayerDamage")); }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_DragonHorn.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ViewMinExposureMultiplier"); }
    float& WarmupSecondsPerFrameCapField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.WarmupSecondsPerFrameCap"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.XPtoAddRate"); }
    BrzCampoPonteiro bAOEApplyOtherBuffIgnoreSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAOEApplyOtherBuffIgnoreSameTeam")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAOEApplyOtherBuffOnDinos")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAOEApplyOtherBuffOnPlayers")); }
    BrzCampoPonteiro bAOEApplyOtherBuffRequireSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAOEApplyOtherBuffRequireSameTeam")); }
    BrzCampoPonteiro bAOEBuffCarnosOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAOEBuffCarnosOnly")); }
    BrzCampoPonteiro bAOEOnlyApplyOtherBuffToWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAOEOnlyApplyOtherBuffToWildDinos")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAddCharacterValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAddCharacterValues")); }
    BrzCampoPonteiro bAddExtendBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAddExtendBuffTime")); }
    BrzCampoPonteiro bAddReactivatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAddReactivates")); }
    BrzCampoPonteiro bAddRequireSameDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAddRequireSameDamageCauser")); }
    BrzCampoPonteiro bAddResetsBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAddResetsBuffTime")); }
    BrzCampoPonteiro bAddStackResetsBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAddStackResetsBuffStart")); }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bAddTPVCameraOffset"); }
    BrzCampoPonteiro bAdditionalExperienceMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAdditionalExperienceMultiplier")); }
    BrzCampoPonteiro bAdditionalTamingSpeedMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAdditionalTamingSpeedMultiplier")); }
    BrzCampoPonteiro bAllowBuffStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowBuffStasis")); }
    BrzCampoPonteiro bAllowBuffWhenInstigatorDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowBuffWhenInstigatorDead")); }
    BrzCampoPonteiro bAllowLoopingEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowLoopingEmitter")); }
    BrzCampoPonteiro bAllowMultiUseEntriesFromSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowMultiUseEntriesFromSelf")); }
    BrzCampoPonteiro bAllowOnlyCustomFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowOnlyCustomFallDamage")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTurretsToTargetInstigatorIfTraceHitsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAllowTurretsToTargetInstigatorIfTraceHitsBuff")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysShowBuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAlwaysShowBuffDescription")); }
    BrzCampoPonteiro bAoEApplyDamageAllTargetablesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAoEApplyDamageAllTargetables")); }
    BrzCampoPonteiro bAoEBuffAllowIfAlreadyBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAoEBuffAllowIfAlreadyBuffed")); }
    BrzCampoPonteiro bAoEIgnoreDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAoEIgnoreDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoEOnlyOnDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAoEOnlyOnDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoETraceToTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAoETraceToTargets")); }
    BrzCampoPonteiro bApplyOneMaxSpeedModifierPerStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bApplyOneMaxSpeedModifierPerStack")); }
    BrzCampoPonteiro bApplyStatModifierToDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bApplyStatModifierToDinos")); }
    BrzCampoPonteiro bApplyStatModifierToPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bApplyStatModifierToPlayers")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bAutoStasis")); }
    BrzCampoPonteiro bBPAddMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPAddMultiUseEntries")); }
    BrzCampoPonteiro bBPAdjustStatusValueModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPAdjustStatusValueModification")); }
    BrzCampoPonteiro bBPDrawBuffStatusHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPDrawBuffStatusHUD")); }
    BrzCampoPonteiro bBPFilterMultiUseFilterTargetEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPFilterMultiUseFilterTargetEntries")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyCharacterFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPModifyCharacterFOV")); }
    BrzCampoPonteiro bBPOverrideActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPOverrideActorForTargetingTooltip")); }
    BrzCampoPonteiro bBPOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterWalkVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPOverrideCharacterWalkVelocity")); }
    BrzCampoPonteiro bBPOverrideWeaponBobField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPOverrideWeaponBob")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseBumpedByPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPUseBumpedByPawn")); }
    BrzCampoPonteiro bBPUseBumpedPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBPUseBumpedPawn")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffDrawFloatingHUD")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDRemotePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffDrawFloatingHUDRemotePlayers")); }
    BrzCampoPonteiro bBuffForceNoTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffForceNoTick")); }
    BrzCampoPonteiro bBuffForceNoTickDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffForceNoTickDedicated")); }
    BrzCampoPonteiro bBuffHandleInstigatorMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffHandleInstigatorMultiUseEntries")); }
    BrzCampoPonteiro bBuffHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffHidesNonWeaponHUD")); }
    BrzCampoPonteiro bBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bBuffPreventsApplyingLevelUpsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreventsApplyingLevelUps")); }
    BrzCampoPonteiro bBuffPreventsCryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreventsCryo")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreventsInventoryAccess")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessAllowMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreventsInventoryAccessAllowMissions")); }
    BrzCampoPonteiro bBuffPreventsMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreventsMountedWeaponry")); }
    BrzCampoPonteiro bBuffPreventsPlayerDropAllInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bBuffPreventsPlayerDropAllInventory")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCallRiderNotifiesOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCallRiderNotifiesOnClient")); }
    BrzCampoPonteiro bCameraShakeOrientTowardsEpicenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCameraShakeOrientTowardsEpicenter")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCanBeInCluster")); }
    BrzCampoPonteiro bCausesCryoSicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCausesCryoSickness")); }
    BrzCampoPonteiro bCheckPreventInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCheckPreventInput")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCollideWhenPlacing")); }
    BrzCampoPonteiro bCompleteCustomDepthStencilOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCompleteCustomDepthStencilOverride")); }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bContinueTickingClientAfterDeactivate"); }
    BrzCampoPonteiro bContinueTickingServerAfterDeactivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bContinueTickingServerAfterDeactivate")); }
    BrzCampoPonteiro bCurrentlyActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCurrentlyActive")); }
    BrzCampoPonteiro bCustomDepthStencilIgnoreHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bCustomDepthStencilIgnoreHealth")); }
    BrzCampoPonteiro bDeactivateAfterAddingXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDeactivateAfterAddingXP")); }
    BrzCampoPonteiro bDeactivateOnJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDeactivateOnJump")); }
    BrzCampoPonteiro bDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDeactivated")); }
    BrzCampoPonteiro bDeactivatedSoundOnlyLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDeactivatedSoundOnlyLocal")); }
    BrzCampoPonteiro bDediServerUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDediServerUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bDelayedDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDelayedDeactivation")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDestroyOnSystemFinish")); }
    BrzCampoPonteiro bDestroyOnTargetStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDestroyOnTargetStasis")); }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bDestroyWhenUnpossessed"); }
    BrzCampoPonteiro bDinoIgnoreBuffPostprocessEffectWhenRiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDinoIgnoreBuffPostprocessEffectWhenRidden")); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bDisableBloom"); }
    BrzCampoPonteiro bDisableFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDisableFaceRotation")); }
    BrzCampoPonteiro bDisableFootstepsParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDisableFootstepsParticles")); }
    BrzCampoPonteiro bDisableIfCharacterUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDisableIfCharacterUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisplayHUDProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDisplayHUDProgressBar")); }
    BrzCampoPonteiro bDoCharacterDetachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDoCharacterDetachment")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeCarryingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDoCharacterDetachmentIncludeCarrying")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDoCharacterDetachmentIncludeRiding")); }
    BrzCampoPonteiro bDontPlayInstigatorActiveSoundOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bDontPlayInstigatorActiveSoundOnDino")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableBuffStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnableBuffStacking")); }
    BrzCampoPonteiro bEnableDistanceBasedVfxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnableDistanceBasedVfx")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableStaticPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnableStaticPathing")); }
    BrzCampoPonteiro bEnableTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnableTargetingTooltip")); }
    BrzCampoPonteiro bEnablesSpyglassEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bEnablesSpyglassEffect")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFlyAwayInProgressField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bFlyAwayInProgress")); }
    BrzCampoPonteiro bFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bFollowTarget")); }
    BrzCampoPonteiro bForceAddUnderwaterCharacterStatusValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceAddUnderwaterCharacterStatusValues")); }
    BrzCampoPonteiro bForceAllowAddingWithoutControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceAllowAddingWithoutController")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowWhileBuriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceAllowWhileBuried")); }
    BrzCampoPonteiro bForceAlwaysAllowBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceAlwaysAllowBuff")); }
    BrzCampoPonteiro bForceCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceCrosshair")); }
    BrzCampoPonteiro bForceDrawMissionDinoTargetHealthbarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceDrawMissionDinoTargetHealthbars")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceHideFloatingName")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceInstigatorTick")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceNoRotation")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceOnDediServer")); }
    BrzCampoPonteiro bForceOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceOverrideCharacterWalkingVelocity")); }
    BrzCampoPonteiro bForcePlayerProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForcePlayerProne")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSelfTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceSelfTick")); }
    BrzCampoPonteiro bForceShowFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceShowFloatingName")); }
    BrzCampoPonteiro bForceUsePreventTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceUsePreventTargeting")); }
    BrzCampoPonteiro bForceUsePreventTargetingTurretField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceUsePreventTargetingTurret")); }
    BrzCampoPonteiro bForceUseStackCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForceUseStackCount")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bForcedOnSpectatorPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bForcedOnSpectatorPlayerController")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGetInstigatorChatMessagesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bGetInstigatorChatMessages")); }
    BrzCampoPonteiro bGetMeTeleportMontageInProgressField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bGetMeTeleportMontageInProgress")); }
    BrzCampoPonteiro bHUDFormatTimerAsTimecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHUDFormatTimerAsTimecode")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpulseDataAvailableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHasImpulseDataAvailable")); }
    BrzCampoPonteiro bHasRelatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHasRelatedMission")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHidden")); }
    BrzCampoPonteiro bHideBuffFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHideBuffFromHUD")); }
    BrzCampoPonteiro bHideBuffFromHUDOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHideBuffFromHUDOnly")); }
    BrzCampoPonteiro bHideFootStepDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHideFootStepDecals")); }
    BrzCampoPonteiro bHideTimerFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHideTimerFromHUD")); }
    BrzCampoPonteiro bHighPrioritySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bHighPrioritySound")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImmobilizeTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bImmobilizeTarget")); }
    BrzCampoPonteiro bImmobilizeTargetPreventDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bImmobilizeTargetPreventDismount")); }
    BrzCampoPonteiro bInterceptInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bInterceptInputEvents")); }
    BrzCampoPonteiro bInterceptUseActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bInterceptUseAction")); }
    BrzCampoPonteiro bInterceptWeaponToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bInterceptWeaponToggle")); }
    BrzCampoPonteiro bIsBuffPersistentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsBuffPersistent")); }
    BrzCampoPonteiro bIsCarryBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsCarryBuff")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDiseaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsDisease")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsFromSkillField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsFromSkill")); }
    BrzCampoPonteiro bIsHighRiskMissionBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsHighRiskMissionBuff")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsMapActor")); }
    BrzCampoPonteiro bIsSkillBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsSkillBuff")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bListenForInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bListenForInput")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bModifyFrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bModifyFriction")); }
    BrzCampoPonteiro bModifyMaxAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bModifyMaxAcceleration")); }
    BrzCampoPonteiro bModifyMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bModifyMaxSpeed")); }
    BrzCampoPonteiro bModifyRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bModifyRotationRate")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetResetBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetResetBuffStart")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNotifyDamage")); }
    BrzCampoPonteiro bNotifyExperienceGainedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNotifyExperienceGained")); }
    BrzCampoPonteiro bNotifyExperienceGained_AllowCountingAlphaKillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNotifyExperienceGained_AllowCountingAlphaKills")); }
    BrzCampoPonteiro bNotifyExperienceGained_IncludeSmallAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bNotifyExperienceGained_IncludeSmallAmounts")); }
    BrzCampoPonteiro bOnlyActivateSoundForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyActivateSoundForInstigator")); }
    BrzCampoPonteiro bOnlyAddCharacterValuesUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyAddCharacterValuesUnderwater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyReplicateOnNetForcedUpdate")); }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bOnlyTickIfPlayerCharacter"); }
    BrzCampoPonteiro bOnlyTickWhenPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyTickWhenPossessed")); }
    BrzCampoPonteiro bOnlyTickWhenVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOnlyTickWhenVisible")); }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bOverrideBuffDescription"); }
    BrzCampoPonteiro bOverrideBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideBuffType")); }
    BrzCampoPonteiro bOverrideCharacterLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideCharacterLanding")); }
    BrzCampoPonteiro bOverrideCharacterMovementInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideCharacterMovementInput")); }
    BrzCampoPonteiro bOverrideInventoryWeightMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideInventoryWeightMultipliers")); }
    BrzCampoPonteiro bOverrideRightShoulderOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideRightShoulderOnPlayer")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideTPVCameraOffset")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bOverrideTPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro bPendingSkyDashIsStoredRecallField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPendingSkyDashIsStoredRecall")); }
    BrzCampoPonteiro bPersistentBuffSurvivesLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPersistentBuffSurvivesLevelUp")); }
    BrzCampoPonteiro bPlayerIgnoreBuffPostprocessEffectWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino")); }
    BrzCampoPonteiro bPostUpdateTickGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPostUpdateTickGroup")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventCarryCharacter")); }
    BrzCampoPonteiro bPreventCarryOrPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventCarryOrPassenger")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearRiderOnDinoImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventClearRiderOnDinoImmobilize")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventDinoDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventDinoDismount")); }
    BrzCampoPonteiro bPreventDinoRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventDinoRiding")); }
    BrzCampoPonteiro bPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventFallDamage")); }
    BrzCampoPonteiro bPreventInputDoesOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventInputDoesOffset")); }
    BrzCampoPonteiro bPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventInstigatorAttack")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLogoutSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventLogoutSleeping")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnBigDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnBigDino")); }
    BrzCampoPonteiro bPreventOnBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnBossDino")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnDino")); }
    BrzCampoPonteiro bPreventOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnPlayer")); }
    BrzCampoPonteiro bPreventOnRobotDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnRobotDino")); }
    BrzCampoPonteiro bPreventOnSeatingStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnSeatingStructures")); }
    BrzCampoPonteiro bPreventOnShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnShip")); }
    BrzCampoPonteiro bPreventOnWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventOnWildDino")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bPreventSaving")); }
    BrzCampoPonteiro bReactivateWithNewDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReactivateWithNewDamageCauser")); }
    BrzCampoPonteiro bReactivationAddsNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReactivationAddsNewStack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemoteForcedFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bRemoteForcedFlee")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatedHasStoredDinoDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReplicatedHasStoredDinoData")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bReplicates")); }
    BrzCampoPonteiro bRequireControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bRequireController")); }
    BrzCampoPonteiro bResetTopStackTimeWhenAddingNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bResetTopStackTimeWhenAddingNewStack")); }
    BrzCampoPonteiro bRespectCryoRestrictionsForFlyAwayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bRespectCryoRestrictionsForFlyAway")); }
    BrzCampoPonteiro bSavePlayerDataOnSaveWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSavePlayerDataOnSaveWorld")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSavedWhenStasised")); }
    BrzCampoPonteiro bShallowEmitterDontSpawnOutOfViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bShallowEmitterDontSpawnOutOfView")); }
    BrzCampoPonteiro bShallowEmitterSpawnableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bShallowEmitterSpawnable")); }
    BrzCampoPonteiro bShowBuffModifierDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bShowBuffModifierDescription")); }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bShowMammalIncubationOptions"); }
    BrzCampoPonteiro bSkillAddBuffDeactivationTimeToCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkillAddBuffDeactivationTimeToCooldown")); }
    BrzCampoPonteiro bSkillAllowUseWhileEncumberedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkillAllowUseWhileEncumbered")); }
    BrzCampoPonteiro bSkillAllowUseWhileSeatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkillAllowUseWhileSeated")); }
    BrzCampoPonteiro bSkillBuffSetCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkillBuffSetCooldown")); }
    BrzCampoPonteiro bSkipFlyAwayCargoConfirmField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkipFlyAwayCargoConfirm")); }
    BrzCampoPonteiro bSkipInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkipInstigatorTick")); }
    BrzCampoPonteiro bSkyDashInProgressField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkyDashInProgress")); }
    BrzCampoPonteiro bSkyDashShouldMountOnArrivalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSkyDashShouldMountOnArrival")); }
    BrzCampoPonteiro bSlowInstigatorFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSlowInstigatorFalling")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bStasised")); }
    BrzCampoPonteiro bStatusComponentUsingExtendedHUDTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bStatusComponentUsingExtendedHUDText")); }
    BrzCampoPonteiro bSupportsCustomHexagonConversionShopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bSupportsCustomHexagonConversionShop")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bTearOff")); }
    BrzCampoPonteiro bTickSoundInRangePlaybackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bTickSoundInRangePlayback")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bTriggerBPStasis")); }
    BrzCampoPonteiro bTriggerBPUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bTriggerBPUnstasis")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseASACameraPivotLocationForOldCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseASACameraPivotLocationForOldCamera")); }
    BrzCampoPonteiro bUseActivateSoundFadeInDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseActivateSoundFadeInDuration")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAdjustCharacterMovementImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPAdjustCharacterMovementImpulse")); }
    BrzCampoPonteiro bUseBPAdjustImpulseFromDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPAdjustImpulseFromDamage")); }
    BrzCampoPonteiro bUseBPAdjustRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPAdjustRadialDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPBuffControllerKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPBuffControllerKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPBuffKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffPreventBuildingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPBuffPreventBuilding")); }
    BrzCampoPonteiro bUseBPBuffPreventsImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPBuffPreventsImmobilization")); }
    BrzCampoPonteiro bUseBPBuffPreventsMultiuseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPBuffPreventsMultiuseEntries")); }
    BrzCampoPonteiro bUseBPCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPCanBeCarried")); }
    BrzCampoPonteiro bUseBPCanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPCanFly")); }
    BrzCampoPonteiro bUseBPChangeBuffStatusValueModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPChangeBuffStatusValueModifiers")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPCheckForErrors")); }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBPCustomAllowAddBuff"); }
    BrzCampoPonteiro bUseBPCustomApplyColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPCustomApplyColor")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPCustomIsRelevantForClient")); }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBPDeactivated"); }
    BrzCampoPonteiro bUseBPDinoNameColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPDinoNameColorOverride")); }
    BrzCampoPonteiro bUseBPDinoRefreshColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPDinoRefreshColorization")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPExcludeAoEActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPExcludeAoEActor")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPForceOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bUseBPFullyHarvestedNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPFullyHarvestedNode")); }
    BrzCampoPonteiro bUseBPGetAltInventoryForAmmoConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetAltInventoryForAmmoConsumption")); }
    BrzCampoPonteiro bUseBPGetAttackAnimPlayRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetAttackAnimPlayRateModifier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPGetBuffDescriptionIconAlphaMultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetBuffDescriptionIconAlphaMult")); }
    BrzCampoPonteiro bUseBPGetBuffLevelUpStatOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetBuffLevelUpStatOverride")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCameraShakeScalarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetCameraShakeScalar")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetCustomTooltipActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetCustomTooltipActor")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetHUDElementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetHUDElements")); }
    BrzCampoPonteiro bUseBPGetMoveAnimRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetMoveAnimRate")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetOrbitCamTargetLocation")); }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBPGetPlayerFootStepSound"); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetWaypointsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPGetWaypointsBuff")); }
    BrzCampoPonteiro bUseBPHandleOnStartAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPHandleOnStartAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStartFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPHandleOnStartFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPHandleOnStopAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPHandleOnStopFire")); }
    BrzCampoPonteiro bUseBPInformDamageCauserOfBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPInformDamageCauserOfBuffAdded")); }
    BrzCampoPonteiro bUseBPInitializedCharacterAnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPInitializedCharacterAnimScriptInstance")); }
    BrzCampoPonteiro bUseBPInstigatorAllowDinoTargetingRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPInstigatorAllowDinoTargetingRange")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsCharacterHardAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPIsCharacterHardAttached")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPModifyArmorValue")); }
    BrzCampoPonteiro bUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bUseBPNofityMontagePlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNofityMontagePlay")); }
    BrzCampoPonteiro bUseBPNonDedicatedPlayerPostAnimUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNonDedicatedPlayerPostAnimUpdate")); }
    BrzCampoPonteiro bUseBPNotifyBuffWeaponFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyBuffWeaponFired")); }
    BrzCampoPonteiro bUseBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyItemAdded")); }
    BrzCampoPonteiro bUseBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bUseBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyItemRemoved")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyOtherBuffActivated")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyOtherBuffDeactivated")); }
    BrzCampoPonteiro bUseBPNotifyPreventDismountingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPNotifyPreventDismounting")); }
    BrzCampoPonteiro bUseBPOnAoeBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnAoeBuffAdded")); }
    BrzCampoPonteiro bUseBPOnDestroyInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnDestroyInstigator")); }
    BrzCampoPonteiro bUseBPOnHexagonCountChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnHexagonCountChanged")); }
    BrzCampoPonteiro bUseBPOnInstigatorCapsuleComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnInstigatorCapsuleComponentHit")); }
    BrzCampoPonteiro bUseBPOnInstigatorLootedCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnInstigatorLootedCrate")); }
    BrzCampoPonteiro bUseBPOnInstigatorMovementModeChangedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnInstigatorMovementModeChangedNotify")); }
    BrzCampoPonteiro bUseBPOnOwnerMassTeleportEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnOwnerMassTeleportEvent")); }
    BrzCampoPonteiro bUseBPOnPlayerShoulderMountDinoChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnPlayerShoulderMountDinoChange")); }
    BrzCampoPonteiro bUseBPOnRiderChangeWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnRiderChangeWeapons")); }
    BrzCampoPonteiro bUseBPOnTamedWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOnTamedWildDino")); }
    BrzCampoPonteiro bUseBPOverrideAoEBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideAoEBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPOverrideBloodDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideBloodDecals")); }
    BrzCampoPonteiro bUseBPOverrideBuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideBuffToGiveOnDeactivation")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCameraArmLength")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCameraArmLengthInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraDesiredPivotLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCameraDesiredPivotLocation")); }
    BrzCampoPonteiro bUseBPOverrideCameraPivotLocationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCameraPivotLocationInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterLocalControlZInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCharacterLocalControlZInterpSpeed")); }
    BrzCampoPonteiro bUseBPOverrideCuddleFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideCuddleFoodTypes")); }
    BrzCampoPonteiro bUseBPOverrideDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideDynamicMusic")); }
    BrzCampoPonteiro bUseBPOverrideIsImprintPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideIsImprintPlayer")); }
    BrzCampoPonteiro bUseBPOverrideIsNetRelevantForField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideIsNetRelevantFor")); }
    BrzCampoPonteiro bUseBPOverrideMaxInventoryAccessDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideMaxInventoryAccessDistance")); }
    BrzCampoPonteiro bUseBPOverrideMaxUseDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideMaxUseDistance")); }
    BrzCampoPonteiro bUseBPOverrideTalkerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideTalkerCharacter")); }
    BrzCampoPonteiro bUseBPOverrideTargetStructureSettingsDamageAdjusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideTargetStructureSettingsDamageAdjuster")); }
    BrzCampoPonteiro bUseBPOverrideTargetingDesireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideTargetingDesire")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPOverrideValuesToAddPerSecondField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideValuesToAddPerSecond")); }
    BrzCampoPonteiro bUseBPOverrideWaterJumpVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPOverrideWaterJumpVelocity")); }
    BrzCampoPonteiro bUseBPPassHarvestExperienceToActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPassHarvestExperienceToActor")); }
    BrzCampoPonteiro bUseBPPreClaimWildFollowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreClaimWildFollower")); }
    BrzCampoPonteiro bUseBPPreServerUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreServerUpload")); }
    BrzCampoPonteiro bUseBPPreventAddingOtherBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventAddingOtherBuff")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventEquipWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventEquipWeapons")); }
    BrzCampoPonteiro bUseBPPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventFallDamage")); }
    BrzCampoPonteiro bUseBPPreventFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventFirstPerson")); }
    BrzCampoPonteiro bUseBPPreventFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventFlight")); }
    BrzCampoPonteiro bUseBPPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventInstigatorAttack")); }
    BrzCampoPonteiro bUseBPPreventInstigatorMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventInstigatorMovementMode")); }
    BrzCampoPonteiro bUseBPPreventNotifySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventNotifySound")); }
    BrzCampoPonteiro bUseBPPreventOnStartJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventOnStartJump")); }
    BrzCampoPonteiro bUseBPPreventRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventRunning")); }
    BrzCampoPonteiro bUseBPPreventTekArmorBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventTekArmorBuffs")); }
    BrzCampoPonteiro bUseBPPreventThrowingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPPreventThrowingItem")); }
    BrzCampoPonteiro bUseBPSetupForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPSetupForInstigator")); }
    BrzCampoPonteiro bUseBPShouldForceOwnerDedicatedMovementTickPerFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBPShouldForceOwnerDedicatedMovementTickPerFrame")); }
    BrzCampoPonteiro bUseBP_AdjustDamageExField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBP_AdjustDamageEx")); }
    BrzCampoPonteiro bUseBP_OnOwnerDealtDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBP_OnOwnerDealtDamage")); }
    BrzCampoPonteiro bUseBP_OnOwnerTeleportedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBP_OnOwnerTeleported")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBP_OverrideTerminalVelocity")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBuffOverrideFinalWanderLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBuffOverrideFinalWanderLocation")); }
    BrzCampoPonteiro bUseBuffOverrideInventoryAccessInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBuffOverrideInventoryAccessInput")); }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBuffTickClient"); }
    BrzCampoPonteiro bUseBuffTickServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseBuffTickServer")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCenteredTPVCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseCenteredTPVCamera")); }
    BrzCampoPonteiro bUseConsolidatedMultiUseWheelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseConsolidatedMultiUseWheel")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseFinalAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseFinalAdjustDamage")); }
    BrzCampoPonteiro bUseForcedBuffAimOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseForcedBuffAimOverride")); }
    BrzCampoPonteiro bUseGetGravityZScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseGetGravityZScale")); }
    BrzCampoPonteiro bUseInstigatorItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseInstigatorItem")); }
    BrzCampoPonteiro bUseInterceptInstigatorPlayerEmoteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseInterceptInstigatorPlayerEmote")); }
    BrzCampoPonteiro bUseInterceptItemSlotUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseInterceptItemSlotUse")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseNiagaraDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseNiagaraDestroyOnSystemFinish")); }
    BrzCampoPonteiro bUseOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseOnCarryCharacter")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePostAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUsePostAdjustDamage")); }
    BrzCampoPonteiro bUseRemoteClientTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseRemoteClientTick")); }
    BrzCampoPonteiro bUseSetHiddenInGameFromInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseSetHiddenInGameFromInstigator")); }
    BrzCampoPonteiro bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTickingDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUseTickingDeactivation")); }
    BrzCampoPonteiro bUsesInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bUsesInstigator")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.bWasActivated")); }
    BrzCampoPonteiro omitHapticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.omitHaptics")); }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_DragonHorn.staticPathingDestination")); }
    BitFieldValue<bool, unsigned __int32> bFlyAwayInProgress()
    { return { (void*)this, "bFlyAwayInProgress" }; }
    BitFieldValue<bool, unsigned __int32> bGetMeTeleportMontageInProgress()
    { return { (void*)this, "bGetMeTeleportMontageInProgress" }; }
    BitFieldValue<bool, unsigned __int32> bPendingSkyDashIsStoredRecall()
    { return { (void*)this, "bPendingSkyDashIsStoredRecall" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatedHasStoredDinoData()
    { return { (void*)this, "bReplicatedHasStoredDinoData" }; }
    BitFieldValue<bool, unsigned __int32> bRespectCryoRestrictionsForFlyAway()
    { return { (void*)this, "bRespectCryoRestrictionsForFlyAway" }; }
    BitFieldValue<bool, unsigned __int32> bSkipFlyAwayCargoConfirm()
    { return { (void*)this, "bSkipFlyAwayCargoConfirm" }; }
    BitFieldValue<bool, unsigned __int32> bSkyDashInProgress()
    { return { (void*)this, "bSkyDashInProgress" }; }
    BitFieldValue<bool, unsigned __int32> bSkyDashShouldMountOnArrival()
    { return { (void*)this, "bSkyDashShouldMountOnArrival" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_DRAGONHORN_H
