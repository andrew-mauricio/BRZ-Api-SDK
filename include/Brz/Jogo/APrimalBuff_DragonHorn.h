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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=133]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=447+chamadores=6+grafo=7/7]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetInstigatorPlayerData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetInstigatorPlayerData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetLinkCooldownDisabledReason(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetLinkCooldownDisabledReason(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.GetLinkCooldownDisabledReason(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetLinkCooldownDisabledReason(FString* a0) const
    { return GetLinkCooldownDisabledReason(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetLinkedDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AShooterPlayerController* GetShooterController() const
    {
        return NativeCall<AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.GetShooterController()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetShooterInstigator()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetShooterInstigator() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.GetShooterInstigator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.GetSkillAdjustedGetMeMaxDistance()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro HasInventoryCargo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_DragonHorn.HasInventoryCargo(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.HideBuffFromHUD_Implementation()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=51+chamadores=2]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro MarkOperationAttempt() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.MarkOperationAttempt()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.MonitorFlyAway()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro NotifyDragonHornDinoAction(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "APrimalBuff_DragonHorn.NotifyDragonHornDinoAction(APrimalDinoCharacter*,EDragonHornDinoAction,AShooterPlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OnFlyAwayDashEnded(EDragonManeuverEndReason,UE::Math::TVector<double>)
    // endereco: thunk
    BrzPonteiro OnFlyAwayDashEnded(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalBuff_DragonHorn.OnFlyAwayDashEnded(EDragonManeuverEndReason,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OnGetMeTeleportMontageFinished()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=770+grafo=16/16]]
    BrzPonteiro OnGetMeTeleportMontageFinished() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.OnGetMeTeleportMontageFinished()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.OnLinkedDinoDied(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2280+grafo=43/43]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1692+bytes40+chamadores=2+grafo=14/14]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UnbindLinkedDinoDeathDelegate() const
    {
        return NativeCall<void*>(this, "APrimalBuff_DragonHorn.UnbindLinkedDinoDeathDelegate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_DragonHorn.UpdateBuffPersistentData_Implementation(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=150]]
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
    //  ancorado em `PendingFlyAwayController` +12, medido na build 25090264
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
    //  ancorado em `PendingSkyDashTargetLocation` +24, medido na build 25090264
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
    //  ancorado em `PendingSkyDashTargetLocation` +32, medido na build 25090264
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
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamage()
    { return { (void*)this, "UseBPAdjustOutputDamage" }; }
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamageForNonMeleePlayerDamage()
    { return { (void*)this, "UseBPAdjustOutputDamageForNonMeleePlayerDamage" }; }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_DragonHorn.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ViewMinExposureMultiplier"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.XPtoAddRate"); }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffIgnoreSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffIgnoreSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnDinos()
    { return { (void*)this, "bAOEApplyOtherBuffOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnPlayers()
    { return { (void*)this, "bAOEApplyOtherBuffOnPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffRequireSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffRequireSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly()
    { return { (void*)this, "bAOEBuffCarnosOnly" }; }
    BitFieldValue<bool, unsigned __int32> bAOEOnlyApplyOtherBuffToWildDinos()
    { return { (void*)this, "bAOEOnlyApplyOtherBuffToWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAddCharacterValues()
    { return { (void*)this, "bAddCharacterValues" }; }
    BitFieldValue<bool, unsigned __int32> bAddExtendBuffTime()
    { return { (void*)this, "bAddExtendBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAddReactivates()
    { return { (void*)this, "bAddReactivates" }; }
    BitFieldValue<bool, unsigned __int32> bAddRequireSameDamageCauser()
    { return { (void*)this, "bAddRequireSameDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bAddResetsBuffTime()
    { return { (void*)this, "bAddResetsBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAddStackResetsBuffStart()
    { return { (void*)this, "bAddStackResetsBuffStart" }; }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bAddTPVCameraOffset"); }
    BitFieldValue<bool, unsigned __int32> bAdditionalExperienceMultiplier()
    { return { (void*)this, "bAdditionalExperienceMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAdditionalTamingSpeedMultiplier()
    { return { (void*)this, "bAdditionalTamingSpeedMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffStasis()
    { return { (void*)this, "bAllowBuffStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffWhenInstigatorDead()
    { return { (void*)this, "bAllowBuffWhenInstigatorDead" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoopingEmitter()
    { return { (void*)this, "bAllowLoopingEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseEntriesFromSelf()
    { return { (void*)this, "bAllowMultiUseEntriesFromSelf" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOnlyCustomFallDamage()
    { return { (void*)this, "bAllowOnlyCustomFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretsToTargetInstigatorIfTraceHitsBuff()
    { return { (void*)this, "bAllowTurretsToTargetInstigatorIfTraceHitsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysShowBuffDescription()
    { return { (void*)this, "bAlwaysShowBuffDescription" }; }
    BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables()
    { return { (void*)this, "bAoEApplyDamageAllTargetables" }; }
    BitFieldValue<bool, unsigned __int32> bAoEBuffAllowIfAlreadyBuffed()
    { return { (void*)this, "bAoEBuffAllowIfAlreadyBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bAoEIgnoreDinosTargetingInstigator()
    { return { (void*)this, "bAoEIgnoreDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoEOnlyOnDinosTargetingInstigator()
    { return { (void*)this, "bAoEOnlyOnDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoETraceToTargets()
    { return { (void*)this, "bAoETraceToTargets" }; }
    BitFieldValue<bool, unsigned __int32> bApplyOneMaxSpeedModifierPerStack()
    { return { (void*)this, "bApplyOneMaxSpeedModifierPerStack" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToDinos()
    { return { (void*)this, "bApplyStatModifierToDinos" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToPlayers()
    { return { (void*)this, "bApplyStatModifierToPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPAddMultiUseEntries()
    { return { (void*)this, "bBPAddMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPAdjustStatusValueModification()
    { return { (void*)this, "bBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bBPDrawBuffStatusHUD()
    { return { (void*)this, "bBPDrawBuffStatusHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBPFilterMultiUseFilterTargetEntries()
    { return { (void*)this, "bBPFilterMultiUseFilterTargetEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyCharacterFOV()
    { return { (void*)this, "bBPModifyCharacterFOV" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideActorForTargetingTooltip()
    { return { (void*)this, "bBPOverrideActorForTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bBPOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bBPOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterWalkVelocity()
    { return { (void*)this, "bBPOverrideCharacterWalkVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideWeaponBob()
    { return { (void*)this, "bBPOverrideWeaponBob" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedByPawn()
    { return { (void*)this, "bBPUseBumpedByPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedPawn()
    { return { (void*)this, "bBPUseBumpedPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUD()
    { return { (void*)this, "bBuffDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUDRemotePlayers()
    { return { (void*)this, "bBuffDrawFloatingHUDRemotePlayers" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTick()
    { return { (void*)this, "bBuffForceNoTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTickDedicated()
    { return { (void*)this, "bBuffForceNoTickDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHandleInstigatorMultiUseEntries()
    { return { (void*)this, "bBuffHandleInstigatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHidesNonWeaponHUD()
    { return { (void*)this, "bBuffHidesNonWeaponHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreSerializeForInstigator()
    { return { (void*)this, "bBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsApplyingLevelUps()
    { return { (void*)this, "bBuffPreventsApplyingLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsCryo()
    { return { (void*)this, "bBuffPreventsCryo" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccess()
    { return { (void*)this, "bBuffPreventsInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccessAllowMissions()
    { return { (void*)this, "bBuffPreventsInventoryAccessAllowMissions" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsMountedWeaponry()
    { return { (void*)this, "bBuffPreventsMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsPlayerDropAllInventory()
    { return { (void*)this, "bBuffPreventsPlayerDropAllInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderNotifiesOnClient()
    { return { (void*)this, "bCallRiderNotifiesOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCameraShakeOrientTowardsEpicenter()
    { return { (void*)this, "bCameraShakeOrientTowardsEpicenter" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCausesCryoSickness()
    { return { (void*)this, "bCausesCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bCheckPreventInput()
    { return { (void*)this, "bCheckPreventInput" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride()
    { return { (void*)this, "bCompleteCustomDepthStencilOverride" }; }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bContinueTickingClientAfterDeactivate"); }
    BitFieldValue<bool, unsigned __int32> bContinueTickingServerAfterDeactivate()
    { return { (void*)this, "bContinueTickingServerAfterDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bCurrentlyActive()
    { return { (void*)this, "bCurrentlyActive" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth()
    { return { (void*)this, "bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateAfterAddingXP()
    { return { (void*)this, "bDeactivateAfterAddingXP" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateOnJump()
    { return { (void*)this, "bDeactivateOnJump" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivated()
    { return { (void*)this, "bDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivatedSoundOnlyLocal()
    { return { (void*)this, "bDeactivatedSoundOnlyLocal" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bDediServerUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bDelayedDeactivation()
    { return { (void*)this, "bDelayedDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnSystemFinish()
    { return { (void*)this, "bDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnTargetStasis()
    { return { (void*)this, "bDestroyOnTargetStasis" }; }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bDestroyWhenUnpossessed"); }
    BitFieldValue<bool, unsigned __int32> bDinoIgnoreBuffPostprocessEffectWhenRidden()
    { return { (void*)this, "bDinoIgnoreBuffPostprocessEffectWhenRidden" }; }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bDisableBloom"); }
    BitFieldValue<bool, unsigned __int32> bDisableFaceRotation()
    { return { (void*)this, "bDisableFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFootstepsParticles()
    { return { (void*)this, "bDisableFootstepsParticles" }; }
    BitFieldValue<bool, unsigned __int32> bDisableIfCharacterUnderwater()
    { return { (void*)this, "bDisableIfCharacterUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHUDProgressBar()
    { return { (void*)this, "bDisplayHUDProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachment()
    { return { (void*)this, "bDoCharacterDetachment" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeCarrying()
    { return { (void*)this, "bDoCharacterDetachmentIncludeCarrying" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeRiding()
    { return { (void*)this, "bDoCharacterDetachmentIncludeRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayInstigatorActiveSoundOnDino()
    { return { (void*)this, "bDontPlayInstigatorActiveSoundOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBuffStacking()
    { return { (void*)this, "bEnableBuffStacking" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStaticPathing()
    { return { (void*)this, "bEnableStaticPathing" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTargetingTooltip()
    { return { (void*)this, "bEnableTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bEnablesSpyglassEffect()
    { return { (void*)this, "bEnablesSpyglassEffect" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFollowTarget()
    { return { (void*)this, "bFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAddUnderwaterCharacterStatusValues()
    { return { (void*)this, "bForceAddUnderwaterCharacterStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAddingWithoutController()
    { return { (void*)this, "bForceAllowAddingWithoutController" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWhileBuried()
    { return { (void*)this, "bForceAllowWhileBuried" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBuff()
    { return { (void*)this, "bForceAlwaysAllowBuff" }; }
    BitFieldValue<bool, unsigned __int32> bForceCrosshair()
    { return { (void*)this, "bForceCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawMissionDinoTargetHealthbars()
    { return { (void*)this, "bForceDrawMissionDinoTargetHealthbars" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideFloatingName()
    { return { (void*)this, "bForceHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceInstigatorTick()
    { return { (void*)this, "bForceInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoRotation()
    { return { (void*)this, "bForceNoRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnDediServer()
    { return { (void*)this, "bForceOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bForceOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bForceOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bForceOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterWalkingVelocity()
    { return { (void*)this, "bForceOverrideCharacterWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlayerProne()
    { return { (void*)this, "bForcePlayerProne" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceSelfTick()
    { return { (void*)this, "bForceSelfTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowFloatingName()
    { return { (void*)this, "bForceShowFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargeting()
    { return { (void*)this, "bForceUsePreventTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargetingTurret()
    { return { (void*)this, "bForceUsePreventTargetingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseStackCount()
    { return { (void*)this, "bForceUseStackCount" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bForcedOnSpectatorPlayerController()
    { return { (void*)this, "bForcedOnSpectatorPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bGetInstigatorChatMessages()
    { return { (void*)this, "bGetInstigatorChatMessages" }; }
    BitFieldValue<bool, unsigned __int32> bHUDFormatTimerAsTimecode()
    { return { (void*)this, "bHUDFormatTimerAsTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasImpulseDataAvailable()
    { return { (void*)this, "bHasImpulseDataAvailable" }; }
    BitFieldValue<bool, unsigned __int32> bHasRelatedMission()
    { return { (void*)this, "bHasRelatedMission" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUD()
    { return { (void*)this, "bHideBuffFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUDOnly()
    { return { (void*)this, "bHideBuffFromHUDOnly" }; }
    BitFieldValue<bool, unsigned __int32> bHideFootStepDecals()
    { return { (void*)this, "bHideFootStepDecals" }; }
    BitFieldValue<bool, unsigned __int32> bHideTimerFromHUD()
    { return { (void*)this, "bHideTimerFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHighPrioritySound()
    { return { (void*)this, "bHighPrioritySound" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTarget()
    { return { (void*)this, "bImmobilizeTarget" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTargetPreventDismount()
    { return { (void*)this, "bImmobilizeTargetPreventDismount" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptInputEvents()
    { return { (void*)this, "bInterceptInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptUseAction()
    { return { (void*)this, "bInterceptUseAction" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptWeaponToggle()
    { return { (void*)this, "bInterceptWeaponToggle" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffPersistent()
    { return { (void*)this, "bIsBuffPersistent" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryBuff()
    { return { (void*)this, "bIsCarryBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDisease()
    { return { (void*)this, "bIsDisease" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromSkill()
    { return { (void*)this, "bIsFromSkill" }; }
    BitFieldValue<bool, unsigned __int32> bIsHighRiskMissionBuff()
    { return { (void*)this, "bIsHighRiskMissionBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkillBuff()
    { return { (void*)this, "bIsSkillBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bListenForInput()
    { return { (void*)this, "bListenForInput" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bModifyFriction()
    { return { (void*)this, "bModifyFriction" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxAcceleration()
    { return { (void*)this, "bModifyMaxAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxSpeed()
    { return { (void*)this, "bModifyMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bModifyRotationRate()
    { return { (void*)this, "bModifyRotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetResetBuffStart()
    { return { (void*)this, "bNetResetBuffStart" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyDamage()
    { return { (void*)this, "bNotifyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained()
    { return { (void*)this, "bNotifyExperienceGained" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_AllowCountingAlphaKills()
    { return { (void*)this, "bNotifyExperienceGained_AllowCountingAlphaKills" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_IncludeSmallAmounts()
    { return { (void*)this, "bNotifyExperienceGained_IncludeSmallAmounts" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator()
    { return { (void*)this, "bOnlyActivateSoundForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAddCharacterValuesUnderwater()
    { return { (void*)this, "bOnlyAddCharacterValuesUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bOnlyTickIfPlayerCharacter"); }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenPossessed()
    { return { (void*)this, "bOnlyTickWhenPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenVisible()
    { return { (void*)this, "bOnlyTickWhenVisible" }; }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bOverrideBuffDescription"); }
    BitFieldValue<bool, unsigned __int32> bOverrideBuffType()
    { return { (void*)this, "bOverrideBuffType" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterLanding()
    { return { (void*)this, "bOverrideCharacterLanding" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterMovementInput()
    { return { (void*)this, "bOverrideCharacterMovementInput" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryWeightMultipliers()
    { return { (void*)this, "bOverrideInventoryWeightMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRightShoulderOnPlayer()
    { return { (void*)this, "bOverrideRightShoulderOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffset()
    { return { (void*)this, "bOverrideTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffsetMultiplier()
    { return { (void*)this, "bOverrideTPVCameraOffsetMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPersistentBuffSurvivesLevelUp()
    { return { (void*)this, "bPersistentBuffSurvivesLevelUp" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIgnoreBuffPostprocessEffectWhenRidingDino()
    { return { (void*)this, "bPlayerIgnoreBuffPostprocessEffectWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bPostUpdateTickGroup()
    { return { (void*)this, "bPostUpdateTickGroup" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryCharacter()
    { return { (void*)this, "bPreventCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryOrPassenger()
    { return { (void*)this, "bPreventCarryOrPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearRiderOnDinoImmobilize()
    { return { (void*)this, "bPreventClearRiderOnDinoImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoDismount()
    { return { (void*)this, "bPreventDinoDismount" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoRiding()
    { return { (void*)this, "bPreventDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallDamage()
    { return { (void*)this, "bPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInputDoesOffset()
    { return { (void*)this, "bPreventInputDoesOffset" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInstigatorAttack()
    { return { (void*)this, "bPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLogoutSleeping()
    { return { (void*)this, "bPreventLogoutSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBigDino()
    { return { (void*)this, "bPreventOnBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBossDino()
    { return { (void*)this, "bPreventOnBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDino()
    { return { (void*)this, "bPreventOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnPlayer()
    { return { (void*)this, "bPreventOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnRobotDino()
    { return { (void*)this, "bPreventOnRobotDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSeatingStructures()
    { return { (void*)this, "bPreventOnSeatingStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnShip()
    { return { (void*)this, "bPreventOnShip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnWildDino()
    { return { (void*)this, "bPreventOnWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bReactivateWithNewDamageCauser()
    { return { (void*)this, "bReactivateWithNewDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bReactivationAddsNewStack()
    { return { (void*)this, "bReactivationAddsNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteForcedFlee()
    { return { (void*)this, "bRemoteForcedFlee" }; }
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
    BitFieldValue<bool, unsigned __int32> bRequireController()
    { return { (void*)this, "bRequireController" }; }
    BitFieldValue<bool, unsigned __int32> bResetTopStackTimeWhenAddingNewStack()
    { return { (void*)this, "bResetTopStackTimeWhenAddingNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bSavePlayerDataOnSaveWorld()
    { return { (void*)this, "bSavePlayerDataOnSaveWorld" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterDontSpawnOutOfView()
    { return { (void*)this, "bShallowEmitterDontSpawnOutOfView" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterSpawnable()
    { return { (void*)this, "bShallowEmitterSpawnable" }; }
    BitFieldValue<bool, unsigned __int32> bShowBuffModifierDescription()
    { return { (void*)this, "bShowBuffModifierDescription" }; }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bShowMammalIncubationOptions"); }
    BitFieldValue<bool, unsigned __int32> bSkillAddBuffDeactivationTimeToCooldown()
    { return { (void*)this, "bSkillAddBuffDeactivationTimeToCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileEncumbered()
    { return { (void*)this, "bSkillAllowUseWhileEncumbered" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileSeated()
    { return { (void*)this, "bSkillAllowUseWhileSeated" }; }
    BitFieldValue<bool, unsigned __int32> bSkillBuffSetCooldown()
    { return { (void*)this, "bSkillBuffSetCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkipInstigatorTick()
    { return { (void*)this, "bSkipInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling()
    { return { (void*)this, "bSlowInstigatorFalling" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStatusComponentUsingExtendedHUDText()
    { return { (void*)this, "bStatusComponentUsingExtendedHUDText" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTickSoundInRangePlayback()
    { return { (void*)this, "bTickSoundInRangePlayback" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseASACameraPivotLocationForOldCamera()
    { return { (void*)this, "bUseASACameraPivotLocationForOldCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseActivateSoundFadeInDuration()
    { return { (void*)this, "bUseActivateSoundFadeInDuration" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse()
    { return { (void*)this, "bUseBPAdjustCharacterMovementImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage()
    { return { (void*)this, "bUseBPAdjustImpulseFromDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustRadialDamage()
    { return { (void*)this, "bUseBPAdjustRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffControllerKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffControllerKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventBuilding()
    { return { (void*)this, "bUseBPBuffPreventBuilding" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsImmobilization()
    { return { (void*)this, "bUseBPBuffPreventsImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsMultiuseEntries()
    { return { (void*)this, "bUseBPBuffPreventsMultiuseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeCarried()
    { return { (void*)this, "bUseBPCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFly()
    { return { (void*)this, "bUseBPCanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangeBuffStatusValueModifiers()
    { return { (void*)this, "bUseBPChangeBuffStatusValueModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBPCustomAllowAddBuff"); }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomApplyColor()
    { return { (void*)this, "bUseBPCustomApplyColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBPDeactivated"); }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoNameColorOverride()
    { return { (void*)this, "bUseBPDinoNameColorOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoRefreshColorization()
    { return { (void*)this, "bUseBPDinoRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPExcludeAoEActor()
    { return { (void*)this, "bUseBPExcludeAoEActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceOverrideWeaponFireTransform()
    { return { (void*)this, "bUseBPForceOverrideWeaponFireTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFullyHarvestedNode()
    { return { (void*)this, "bUseBPFullyHarvestedNode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAltInventoryForAmmoConsumption()
    { return { (void*)this, "bUseBPGetAltInventoryForAmmoConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAttackAnimPlayRateModifier()
    { return { (void*)this, "bUseBPGetAttackAnimPlayRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDamageCauser()
    { return { (void*)this, "bUseBPGetBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDescriptionIconAlphaMult()
    { return { (void*)this, "bUseBPGetBuffDescriptionIconAlphaMult" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffLevelUpStatOverride()
    { return { (void*)this, "bUseBPGetBuffLevelUpStatOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraShakeScalar()
    { return { (void*)this, "bUseBPGetCameraShakeScalar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairColor()
    { return { (void*)this, "bUseBPGetCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCustomTooltipActor()
    { return { (void*)this, "bUseBPGetCustomTooltipActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements()
    { return { (void*)this, "bUseBPGetHUDElements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMoveAnimRate()
    { return { (void*)this, "bUseBPGetMoveAnimRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBPGetPlayerFootStepSound"); }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetWaypointsBuff()
    { return { (void*)this, "bUseBPGetWaypointsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartAltFire()
    { return { (void*)this, "bUseBPHandleOnStartAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartFire()
    { return { (void*)this, "bUseBPHandleOnStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopAltFire()
    { return { (void*)this, "bUseBPHandleOnStopAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopFire()
    { return { (void*)this, "bUseBPHandleOnStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInformDamageCauserOfBuffAdded()
    { return { (void*)this, "bUseBPInformDamageCauserOfBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializedCharacterAnimScriptInstance()
    { return { (void*)this, "bUseBPInitializedCharacterAnimScriptInstance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInstigatorAllowDinoTargetingRange()
    { return { (void*)this, "bUseBPInstigatorAllowDinoTargetingRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCharacterHardAttached()
    { return { (void*)this, "bUseBPIsCharacterHardAttached" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor()
    { return { (void*)this, "bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyArmorValue()
    { return { (void*)this, "bUseBPModifyArmorValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNofityMontagePlay()
    { return { (void*)this, "bUseBPNofityMontagePlay" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNonDedicatedPlayerPostAnimUpdate()
    { return { (void*)this, "bUseBPNonDedicatedPlayerPostAnimUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyBuffWeaponFired()
    { return { (void*)this, "bUseBPNotifyBuffWeaponFired" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemAdded()
    { return { (void*)this, "bUseBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemQuantityUpdated()
    { return { (void*)this, "bUseBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRemoved()
    { return { (void*)this, "bUseBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffActivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffDeactivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyPreventDismounting()
    { return { (void*)this, "bUseBPNotifyPreventDismounting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAoeBuffAdded()
    { return { (void*)this, "bUseBPOnAoeBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDestroyInstigator()
    { return { (void*)this, "bUseBPOnDestroyInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHexagonCountChanged()
    { return { (void*)this, "bUseBPOnHexagonCountChanged" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorCapsuleComponentHit()
    { return { (void*)this, "bUseBPOnInstigatorCapsuleComponentHit" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorLootedCrate()
    { return { (void*)this, "bUseBPOnInstigatorLootedCrate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorMovementModeChangedNotify()
    { return { (void*)this, "bUseBPOnInstigatorMovementModeChangedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnOwnerMassTeleportEvent()
    { return { (void*)this, "bUseBPOnOwnerMassTeleportEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnPlayerShoulderMountDinoChange()
    { return { (void*)this, "bUseBPOnPlayerShoulderMountDinoChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRiderChangeWeapons()
    { return { (void*)this, "bUseBPOnRiderChangeWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTamedWildDino()
    { return { (void*)this, "bUseBPOnTamedWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAoEBuffDamageCauser()
    { return { (void*)this, "bUseBPOverrideAoEBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBloodDecals()
    { return { (void*)this, "bUseBPOverrideBloodDecals" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBuffToGiveOnDeactivation()
    { return { (void*)this, "bUseBPOverrideBuffToGiveOnDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLength()
    { return { (void*)this, "bUseBPOverrideCameraArmLength" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLengthInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraArmLengthInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraDesiredPivotLocation()
    { return { (void*)this, "bUseBPOverrideCameraDesiredPivotLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraPivotLocationInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraPivotLocationInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterLocalControlZInterpSpeed()
    { return { (void*)this, "bUseBPOverrideCharacterLocalControlZInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCuddleFoodTypes()
    { return { (void*)this, "bUseBPOverrideCuddleFoodTypes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsImprintPlayer()
    { return { (void*)this, "bUseBPOverrideIsImprintPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsNetRelevantFor()
    { return { (void*)this, "bUseBPOverrideIsNetRelevantFor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxInventoryAccessDistance()
    { return { (void*)this, "bUseBPOverrideMaxInventoryAccessDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxUseDistance()
    { return { (void*)this, "bUseBPOverrideMaxUseDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTalkerCharacter()
    { return { (void*)this, "bUseBPOverrideTalkerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetStructureSettingsDamageAdjuster()
    { return { (void*)this, "bUseBPOverrideTargetStructureSettingsDamageAdjuster" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingDesire()
    { return { (void*)this, "bUseBPOverrideTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideValuesToAddPerSecond()
    { return { (void*)this, "bUseBPOverrideValuesToAddPerSecond" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWaterJumpVelocity()
    { return { (void*)this, "bUseBPOverrideWaterJumpVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPassHarvestExperienceToActor()
    { return { (void*)this, "bUseBPPassHarvestExperienceToActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreClaimWildFollower()
    { return { (void*)this, "bUseBPPreClaimWildFollower" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreServerUpload()
    { return { (void*)this, "bUseBPPreServerUpload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff()
    { return { (void*)this, "bUseBPPreventAddingOtherBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventEquipWeapons()
    { return { (void*)this, "bUseBPPreventEquipWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamage()
    { return { (void*)this, "bUseBPPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFirstPerson()
    { return { (void*)this, "bUseBPPreventFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFlight()
    { return { (void*)this, "bUseBPPreventFlight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorAttack()
    { return { (void*)this, "bUseBPPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorMovementMode()
    { return { (void*)this, "bUseBPPreventInstigatorMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySound()
    { return { (void*)this, "bUseBPPreventNotifySound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventOnStartJump()
    { return { (void*)this, "bUseBPPreventOnStartJump" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning()
    { return { (void*)this, "bUseBPPreventRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventTekArmorBuffs()
    { return { (void*)this, "bUseBPPreventTekArmorBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventThrowingItem()
    { return { (void*)this, "bUseBPPreventThrowingItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupForInstigator()
    { return { (void*)this, "bUseBPSetupForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldForceOwnerDedicatedMovementTickPerFrame()
    { return { (void*)this, "bUseBPShouldForceOwnerDedicatedMovementTickPerFrame" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustDamageEx()
    { return { (void*)this, "bUseBP_AdjustDamageEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerDealtDamage()
    { return { (void*)this, "bUseBP_OnOwnerDealtDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerTeleported()
    { return { (void*)this, "bUseBP_OnOwnerTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBlueprintAnimNotifications"); }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideFinalWanderLocation()
    { return { (void*)this, "bUseBuffOverrideFinalWanderLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideInventoryAccessInput()
    { return { (void*)this, "bUseBuffOverrideInventoryAccessInput" }; }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_DragonHorn.bUseBuffTickClient"); }
    BitFieldValue<bool, unsigned __int32> bUseBuffTickServer()
    { return { (void*)this, "bUseBuffTickServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCenteredTPVCamera()
    { return { (void*)this, "bUseCenteredTPVCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseConsolidatedMultiUseWheel()
    { return { (void*)this, "bUseConsolidatedMultiUseWheel" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip()
    { return { (void*)this, "bUseDinoRangeForTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseFinalAdjustDamage()
    { return { (void*)this, "bUseFinalAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcedBuffAimOverride()
    { return { (void*)this, "bUseForcedBuffAimOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetGravityZScale()
    { return { (void*)this, "bUseGetGravityZScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstigatorItem()
    { return { (void*)this, "bUseInstigatorItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptInstigatorPlayerEmote()
    { return { (void*)this, "bUseInterceptInstigatorPlayerEmote" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptItemSlotUse()
    { return { (void*)this, "bUseInterceptItemSlotUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseNiagaraDestroyOnSystemFinish()
    { return { (void*)this, "bUseNiagaraDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCarryCharacter()
    { return { (void*)this, "bUseOnCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostAdjustDamage()
    { return { (void*)this, "bUsePostAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseRemoteClientTick()
    { return { (void*)this, "bUseRemoteClientTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseSetHiddenInGameFromInstigator()
    { return { (void*)this, "bUseSetHiddenInGameFromInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad()
    { return { (void*)this, "bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickingDeactivation()
    { return { (void*)this, "bUseTickingDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUsesInstigator()
    { return { (void*)this, "bUsesInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated()
    { return { (void*)this, "bWasActivated" }; }
    BitFieldValue<bool, unsigned __int32> omitHaptics()
    { return { (void*)this, "omitHaptics" }; }
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
