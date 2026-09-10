// ==========================================================================
//  APrimalStructure — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ABiomeZoneVolume;
struct AMissionType;
struct APawn;
struct APrimalDinoCharacter;
struct APrimalStructureDoor;
struct FItemNetID;
struct FName;
struct FPrimalStructureSnapPointOverride;
struct UActorComponent;
struct UClass;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UObject;
struct UPaintingTexture;
struct UPrimalHarvestingComponent;
struct UPrimalItem;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;

#include "APrimalTargetableActor.h"

struct APrimalStructure : public APrimalTargetableActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructure"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.AddHostileStacks(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddHostileStacks(int a0, bool a1, bool a2) const
    {
        return NativeCall<void*, int, bool, bool>(this, "APrimalStructure.AddHostileStacks(int,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.AddToReprocessTreeQueue(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,A
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToReprocessTreeQueue(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, bool, bool>(this, "APrimalStructure.AddToReprocessTreeQueue(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AController*,AActor*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.AdjustCollideTrace(UWorld*,int,FHitResult&,UE::Math::TVector<double>&,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustCollideTrace(void* a0, int a1, void* a2, void* a3, void* a4, int a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, int, void*, void*, void*, int, void*, void*>(this, "APrimalStructure.AdjustCollideTrace(UWorld*,int,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AdjustPlacementOnCollision(APlayerController*,UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    bool AdjustPlacementOnCollision(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<bool, void*, void*, void*, int>(this, "APrimalStructure.AdjustPlacementOnCollision(APlayerController*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowColoringBy(APlayerController*,UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowColoringBy(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructure.AllowColoringBy(APlayerController*,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowPickupForItem(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowPickupForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowPickupForItem(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowPlacingOnSaddleParentClass(APrimalDinoCharacter*,bool,int*,AShooterPlayerC
    // endereco: casamento de bytes com a build de referencia
    bool AllowPlacingOnSaddleParentClass(void* a0, bool a1, void* a2, void* a3) const
    {
        return NativeCall<bool, void*, bool, void*, void*>(this, "APrimalStructure.AllowPlacingOnSaddleParentClass(APrimalDinoCharacter*,bool,int*,AShooterPlayerController*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowRegisterComponentWithWorld(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowRegisterComponentWithWorld(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowRegisterComponentWithWorld(UActorComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.AllowShowUserGeneratedText()
    // endereco: casamento de bytes com a build de referencia
    bool AllowShowUserGeneratedText() const
    {
        return NativeCall<bool>(this, "APrimalStructure.AllowShowUserGeneratedText()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowSnapByClassAndTags(FPrimalStructureSnapPoint&,APrimalStructure*,FPrimalStr
    // endereco: casamento de bytes com a build de referencia
    bool AllowSnapByClassAndTags(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalStructure.AllowSnapByClassAndTags(FPrimalStructureSnapPoint&,APrimalStructure*,FPrimalStructureSnapPoint&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowSnapByTypeFlags(FPrimalStructureSnapPoint&,APrimalStructure*,int)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSnapByTypeFlags(void* a0, void* a1, int a2) const
    {
        return NativeCall<bool, void*, void*, int>(this, "APrimalStructure.AllowSnapByTypeFlags(FPrimalStructureSnapPoint&,APrimalStructure*,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowSnapRotationForStructure(int,APrimalStructure*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool AllowSnapRotationForStructure(int a0, void* a1, int a2) const
    {
        return NativeCall<bool, int, void*, int>(this, "APrimalStructure.AllowSnapRotationForStructure(int,APrimalStructure*,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowSnappingWith(APrimalStructure*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSnappingWith(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructure.AllowSnappingWith(APrimalStructure*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowSnappingWithClass(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSnappingWithClass(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowSnappingWithClass(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AllowStructureAccess(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowStructureAccess(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowStructureAccess(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNot
    // classe: a funcao mora em UPrimalActor, e APrimalStructure herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "UPrimalActor.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ApplyColorToRegions(short,bool*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyColorToRegions(short a0, void* a1) const
    {
        return NativeCall<void*, short, void*>(this, "APrimalStructure.ApplyColorToRegions(short,bool*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ApplyLinkedIDs(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=61]]
    void ApplyLinkedIDs(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.ApplyLinkedIDs(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.ApplyPrimalItemSettingsToStructure(UMeshComponent*,UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=430+grafo=7/7]]
    void ApplyPrimalItemSettingsToStructure(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.ApplyPrimalItemSettingsToStructure(UMeshComponent*,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ApplyScale(bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyScale(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.ApplyScale(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.ApplyStructureEffect(FName,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=465+grafo=8/8]]
    void ApplyStructureEffect(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "APrimalStructure.ApplyStructureEffect(FName,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.AreStructureSkinsHidden()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AreStructureSkinsHidden() const
    {
        return NativeCall<void*>(this, "APrimalStructure.AreStructureSkinsHidden()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.AttachToStructureAttachmentBase(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void AttachToStructureAttachmentBase(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.AttachToStructureAttachmentBase(APrimalStructure*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPAllowPickupGiveItem(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowPickupGiveItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.BPAllowPickupGiveItem(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPAllowSnapRotationForStructure(int,FName,APrimalStructure*,int,FName)
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowSnapRotationForStructure(int a0, unsigned long long a1, void* a2, int a3, unsigned long long a4) const
    {
        return NativeCall<bool, int, unsigned long long, void*, int, unsigned long long>(this, "APrimalStructure.BPAllowSnapRotationForStructure(int,FName,APrimalStructure*,int,FName)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPAllowSnappingWith(APrimalStructure*,APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=71+chamadores=2]]
    bool BPAllowSnappingWith(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructure.BPAllowSnappingWith(APrimalStructure*,APlayerController*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPAllowSwitchToVariant(FName)
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowSwitchToVariant(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "APrimalStructure.BPAllowSwitchToVariant(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPApplyCustomDurabilityOnPickup(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPApplyCustomDurabilityOnPickup(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPApplyCustomDurabilityOnPickup(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPCheckItemRequiementsToBuild(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    int BPCheckItemRequiementsToBuild(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalStructure.BPCheckItemRequiementsToBuild(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPConsumeProjectileImpact(AShooterProjectile*,FHitResult&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPConsumeProjectileImpact(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.BPConsumeProjectileImpact(AShooterProjectile*,FHitResult&,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPDefaultProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void BPDefaultProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructure.BPDefaultProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPDefaultProcessEditText(void* a0, FString* a1, bool a2) const
    { BPDefaultProcessEditText(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPForceConsideredEnemyFoundation(APlayerController*,APrimalStructure*,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPForceConsideredEnemyFoundation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.BPForceConsideredEnemyFoundation(APlayerController*,APrimalStructure*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetAdditionalScaleForPainting()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=163+chamadores=6]]
    BrzPonteiro BPGetAdditionalScaleForPainting() const
    {
        return NativeCall<void*>(this, "APrimalStructure.BPGetAdditionalScaleForPainting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPGetAggroDinoOnDamageSettings(TArray<FName,TSizedDefaultAllocator<32>>&,float&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetAggroDinoOnDamageSettings(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.BPGetAggroDinoOnDamageSettings(TArray<FName,TSizedDefaultAllocator<32>>&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPGetAllLinkedStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetAllLinkedStructures(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalStructure.BPGetAllLinkedStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TSubclassOf<APrimalStructure>,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetAmmoBoxReloadPercent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float BPGetAmmoBoxReloadPercent() const
    {
        return NativeCall<float>(this, "APrimalStructure.BPGetAmmoBoxReloadPercent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetAttachedToCharacter()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPGetAttachedToCharacter() const
    {
        return NativeCall<UObject*>(this, "APrimalStructure.BPGetAttachedToCharacter()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetCantBuildReasonString(int)
    // endereco: casamento de bytes com a build de referencia
    void BPGetCantBuildReasonString(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructure.BPGetCantBuildReasonString(int)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetCustomItemRepairPercentage(UPrimalItem*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=67+chamadores=2]]
    float BPGetCustomItemRepairPercentage(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalStructure.BPGetCustomItemRepairPercentage(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetCustomItemRepairSpeedMultiplier(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    float BPGetCustomItemRepairSpeedMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalStructure.BPGetCustomItemRepairSpeedMultiplier(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPGetInfoFromConsumedItemForPlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetPaintingMaskColor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetPaintingMaskColor() const
    {
        return NativeCall<void*>(this, "APrimalStructure.BPGetPaintingMaskColor()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPGetSnapFromPlacementMeshOverride(APrimalStructure*,FPlacementData&,UStaticMes
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPGetSnapFromPlacementMeshOverride(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7) const
    {
        NativeCall<void, void*, void*, void*, void**, void*, void*, void*, void*>(this, "APrimalStructure.BPGetSnapFromPlacementMeshOverride(APrimalStructure*,FPlacementData&,UStaticMesh*&,TSubclassOf<APrimalStructure>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,bool&)", a0, a1, a2, &a3, a4, a5, a6, a7);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPGetSnapToPlacementMeshOverride(APrimalStructure*,FPlacementData&,UStaticMesh*
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPGetSnapToPlacementMeshOverride(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7) const
    {
        NativeCall<void, void*, void*, void*, void**, void*, void*, void*, void*>(this, "APrimalStructure.BPGetSnapToPlacementMeshOverride(APrimalStructure*,FPlacementData&,UStaticMesh*&,TSubclassOf<APrimalStructure>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,bool&)", a0, a1, a2, &a3, a4, a5, a6, a7);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPGetStructureID(APrimalStructure*)
    // endereco: cache_pdb_25090264
    int BPGetStructureID(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalStructure.BPGetStructureID(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPGetVariantByTagConst(FName,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetVariantByTagConst(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalStructure.BPGetVariantByTagConst(FName,bool&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPHandleBedFastTravel(AShooterPlayerController*,APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    bool BPHandleBedFastTravel(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructure.BPHandleBedFastTravel(AShooterPlayerController*,APrimalStructure*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPHandleStructureEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPHandleStructureEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.BPHandleStructureEnabled(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPIsAllowedToBuild(FPlacementData&,int)
    // endereco: casamento de bytes com a build de referencia
    int BPIsAllowedToBuild(void* a0, int a1) const
    {
        return NativeCall<int, void*, int>(this, "APrimalStructure.BPIsAllowedToBuild(FPlacementData&,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPIsAllowedToBuildEx(FPlacementData&,int,APlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    int BPIsAllowedToBuildEx(void* a0, int a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<int, void*, int, void*, bool, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx(FPlacementData&,int,APlayerController*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPNetRefreshStructureColors(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNetRefreshStructureColors(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.BPNetRefreshStructureColors(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.BPNetRefreshStructureColors_Implementation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNetRefreshStructureColors_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.BPNetRefreshStructureColors_Implementation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPOnDemolish(APlayerController*,AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=2]]
    void BPOnDemolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.BPOnDemolish(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOnStructurePickup(APlayerController*,TSubclassOf<UPrimalItem>,UPrimalItem*,bo
    // endereco: casamento de bytes com a build de referencia
    void BPOnStructurePickup(void* a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, void*, void*, void*, bool>(this, "APrimalStructure.BPOnStructurePickup(APlayerController*,TSubclassOf<UPrimalItem>,UPrimalItem*,bool)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideAllowSnapPoint(bool,APrimalStructure*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideAllowSnapPoint(bool a0, void* a1, int a2, int a3) const
    {
        return NativeCall<bool, bool, void*, int, int>(this, "APrimalStructure.BPOverrideAllowSnapPoint(bool,APrimalStructure*,int,int)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideAllowStructureAccess(AShooterPlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideAllowStructureAccess(void* a0, bool a1, bool a2) const
    {
        return NativeCall<bool, void*, bool, bool>(this, "APrimalStructure.BPOverrideAllowStructureAccess(AShooterPlayerController*,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideCantBuildReasonString(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOverrideCantBuildReasonString(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructure.BPOverrideCantBuildReasonString(int)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPOverrideConfirmPlacingStructure(FPlacementData&,APlayerController*,FItemNetID
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideConfirmPlacingStructure(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<void*, void*, void*, unsigned long long>(this, "APrimalStructure.BPOverrideConfirmPlacingStructure(FPlacementData&,APlayerController*,FItemNetID)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideDemolish(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPOverrideDemolish(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.BPOverrideDemolish(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideDescriptiveName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOverrideDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPOverrideDescriptiveName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideDescriptiveNameForPreview()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOverrideDescriptiveNameForPreview(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPOverrideDescriptiveNameForPreview()", retorno);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPOverrideFinalPlacementData(FPlacementData&)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideFinalPlacementData(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPOverrideFinalPlacementData(FPlacementData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideMeleeSwingDamageBlockLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideMeleeSwingDamageBlockLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.BPOverrideMeleeSwingDamageBlockLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPOverridePlacementRotation(UE::Math::TVector<double>,UE::Math::TRotator<double
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverridePlacementRotation(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.BPOverridePlacementRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,APlayerController*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPOverrideSnapTargetAllowSnapPoint(bool,APrimalStructure*,int)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideSnapTargetAllowSnapPoint(bool a0, void* a1, int a2) const
    {
        return NativeCall<bool, bool, void*, int>(this, "APrimalStructure.BPOverrideSnapTargetAllowSnapPoint(bool,APrimalStructure*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPOverrideSnappedFromTransform(APrimalStructure*,int,FName,UE::Math::TVector<do
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BPOverrideSnappedFromTransform(void* a0, int a1, unsigned long long a2, void* a3, void* a4, void* a5, void* a6, int a7, unsigned long long a8, void* a9, void* a10, void* a11, void* a12) const
    {
        return NativeCall<void*, void*, int, unsigned long long, void*, void*, void*, void*, int, unsigned long long, void*, void*, void*, void*>(this, "APrimalStructure.BPOverrideSnappedFromTransform(APrimalStructure*,int,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,int,FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int&,int&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPOverrideSnappedToTransform(APrimalStructure*,int,FName,UE::Math::TVector<doub
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BPOverrideSnappedToTransform(void* a0, int a1, unsigned long long a2, void* a3, void* a4, void* a5, void* a6, int a7, unsigned long long a8, void* a9, void* a10, void* a11, void* a12) const
    {
        return NativeCall<void*, void*, int, unsigned long long, void*, void*, void*, void*, int, unsigned long long, void*, void*, void*, void*>(this, "APrimalStructure.BPOverrideSnappedToTransform(APrimalStructure*,int,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,int,FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int&,int&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPOverrideStructureHarvestingDepleted(UPrimalHarvestingComponent*)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideStructureHarvestingDepleted(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPOverrideStructureHarvestingDepleted(UPrimalHarvestingComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPOverrideTargetLocation(UE::Math::TVector<double>&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideTargetLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.BPOverrideTargetLocation(UE::Math::TVector<double>&,AActor*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPPlacedStructure(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPPlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPPlacedStructure(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPPostPreviewStructureFlipped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPPostPreviewStructureFlipped() const
    {
        NativeCall<void>(this, "APrimalStructure.BPPostPreviewStructureFlipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPPostSetStructureCollisionChannels()
    // endereco: casamento de bytes com a build de referencia
    void BPPostSetStructureCollisionChannels() const
    {
        NativeCall<void>(this, "APrimalStructure.BPPostSetStructureCollisionChannels()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPPreventPlacementOnPawn(APlayerController*,APrimalCharacter*,FName)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventPlacementOnPawn(void* a0, void* a1, unsigned long long a2) const
    {
        return NativeCall<bool, void*, void*, unsigned long long>(this, "APrimalStructure.BPPreventPlacementOnPawn(APlayerController*,APrimalCharacter*,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPPreventPlacingOnFloorStructure(FPlacementData&,APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPPreventPlacingOnFloorStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.BPPreventPlacingOnFloorStructure(FPlacementData&,APrimalStructure*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPPreventPlacingStructureOntoMe(APlayerController*,APrimalStructure*,FHitResult
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventPlacingStructureOntoMe(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalStructure.BPPreventPlacingStructureOntoMe(APlayerController*,APrimalStructure*,FHitResult&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPPreventUseDescriptiveNameOverride(bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventUseDescriptiveNameOverride(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalStructure.BPPreventUseDescriptiveNameOverride(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPPreventUsingAsFloorForStructure(FPlacementData&,APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPPreventUsingAsFloorForStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.BPPreventUsingAsFloorForStructure(FPlacementData&,APrimalStructure*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPRefreshedStructureColors()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPRefreshedStructureColors() const
    {
        NativeCall<void>(this, "APrimalStructure.BPRefreshedStructureColors()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPStructurePreGetMultiUseEntries(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPStructurePreGetMultiUseEntries(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.BPStructurePreGetMultiUseEntries(APlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BPStructureSkinBlueprintDrawHUD(APrimalStructure*,AShooterHUD*,float,float)
    // endereco: casamento de bytes com a build de referencia
    void BPStructureSkinBlueprintDrawHUD(void* a0, void* a1, float a2, float a3) const
    {
        NativeCall<void, void*, void*, float, float>(this, "APrimalStructure.BPStructureSkinBlueprintDrawHUD(APrimalStructure*,AShooterHUD*,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPStructureSkinGetMultiUseEntries(APrimalStructure*,APlayerController*,TArray<F
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPStructureSkinGetMultiUseEntries(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.BPStructureSkinGetMultiUseEntries(APrimalStructure*,APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPStructureSkinTryMultiUse(APrimalStructure*,APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    bool BPStructureSkinTryMultiUse(void* a0, void* a1, int a2) const
    {
        return NativeCall<bool, void*, void*, int>(this, "APrimalStructure.BPStructureSkinTryMultiUse(APrimalStructure*,APlayerController*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.BPTreatAsFoundationForSnappedStructure(APrimalStructure*,FPlacementData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPTreatAsFoundationForSnappedStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.BPTreatAsFoundationForSnappedStructure(APrimalStructure*,FPlacementData&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPUnstasis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPUnstasis() const
    {
        NativeCall<void>(this, "APrimalStructure.BPUnstasis()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.BPUseCountStructureInRange()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPUseCountStructureInRange() const
    {
        return NativeCall<bool>(this, "APrimalStructure.BPUseCountStructureInRange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructure.BeginPlay()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.BlueprintDrawHUD(AShooterHUD*,float,float)
    // endereco: casamento de bytes com a build de referencia
    void BlueprintDrawHUD(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APrimalStructure.BlueprintDrawHUD(AShooterHUD*,float,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.CallDrawFloatingHUD(AShooterHUD*)
    // endereco: cache_pdb_25090264
    void CallDrawFloatingHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.CallDrawFloatingHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.CanAttachToExosuit_Implementation(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CanAttachToExosuit_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.CanAttachToExosuit_Implementation(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.CanAutoDemolish()
    // endereco: casamento de bytes com a build de referencia
    bool CanAutoDemolish() const
    {
        return NativeCall<bool>(this, "APrimalStructure.CanAutoDemolish()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.CanBeBaseForCharacter(APawn*)
    // endereco: casamento de bytes com a build de referencia
    bool CanBeBaseForCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.CanBeBaseForCharacter(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.CanBePainted()
    // endereco: casamento de bytes com a build de referencia
    bool CanBePainted() const
    {
        return NativeCall<bool>(this, "APrimalStructure.CanBePainted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.CanPickupStructureFromRecentPlacement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanPickupStructureFromRecentPlacement() const
    {
        return NativeCall<bool>(this, "APrimalStructure.CanPickupStructureFromRecentPlacement()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.CanStructureBePlanned(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    bool CanStructureBePlanned(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.CanStructureBePlanned(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ChangeActorTeam(int)
    // endereco: casamento de bytes com a build de referencia
    void ChangeActorTeam(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.ChangeStructureStaticMesh(UStaticMeshComponent*,UStaticMesh*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    void ChangeStructureStaticMesh(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.ChangeStructureStaticMesh(UStaticMeshComponent*,UStaticMesh*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.CheckAdditionalStructureTag(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CheckAdditionalStructureTag(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "APrimalStructure.CheckAdditionalStructureTag(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CheckForAnyGround(APlayerController*,UE::Math::TVector<double>,bool&,FPlacement
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForAnyGround(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "APrimalStructure.CheckForAnyGround(APlayerController*,UE::Math::TVector<double>,bool&,FPlacementData&,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CheckForHangingParent(APlayerController*,UE::Math::TVector<double>,FHitResult&,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForHangingParent(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalStructure.CheckForHangingParent(APlayerController*,UE::Math::TVector<double>,FHitResult&,FPlacementData&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CheckForWallParent(APlayerController*,UE::Math::TVector<double>,UE::Math::TRota
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForWallParent(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "APrimalStructure.CheckForWallParent(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResult&,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CheckNotEncroaching(APlayerController*,UE::Math::TVector<double>,UE::Math::TRot
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckNotEncroaching(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6, bool a7, bool a8, bool a9) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, bool, bool, bool, bool>(this, "APrimalStructure.CheckNotEncroaching(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,APrimalStructure*,APrimalStructure*,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ClampBuildLocation(UE::Math::TVector<double>,AActor*&,FPlacementData&,bool,APla
    // endereco: casamento de bytes com a build de referencia
    bool ClampBuildLocation(void* a0, void* a1, void* a2, bool a3, void* a4, bool a5) const
    {
        return NativeCall<bool, void*, void*, void*, bool, void*, bool>(this, "APrimalStructure.ClampBuildLocation(UE::Math::TVector<double>,AActor*&,FPlacementData&,bool,APlayerController*,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CleanUpTree(APrimalStructure*,AController*,AActor*,unsignedint,TMap<TSubclassOf
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanUpTree(void* a0, void* a1, void* a2, unsigned int a3, void* a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, void*, void*, unsigned int, void*, bool, bool, bool>(this, "APrimalStructure.CleanUpTree(APrimalStructure*,AController*,AActor*,unsignedint,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CleanUpTree(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanUpTree(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, bool, bool>(this, "APrimalStructure.CleanUpTree(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,AController*,AActor*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ClearBiomeZoneVolume(ABiomeZoneVolume*)
    // endereco: cache_pdb_25090264
    void ClearBiomeZoneVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.ClearBiomeZoneVolume(ABiomeZoneVolume*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.ClearCustomColors()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClearCustomColors() const
    {
        NativeCall<void>(this, "APrimalStructure.ClearCustomColors()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ClearCustomColors_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClearCustomColors_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ClearStructureLinks(APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1684+grafo=14/14]]
    void ClearStructureLinks(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.ClearStructureLinks(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.ClearStructureSkinTimer(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearStructureSkinTimer(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalStructure.ClearStructureSkinTimer(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructure.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ClientPaint_Implementation(UStructurePaintingComponent*,AShooterPlayerControlle
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPaint_Implementation(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "APrimalStructure.ClientPaint_Implementation(UStructurePaintingComponent*,AShooterPlayerController*,TArray<FPaintItem,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ClientScaleTexture_Implementation(UStructurePaintingComponent*,float,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=149]]
    BrzPonteiro ClientScaleTexture_Implementation(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "APrimalStructure.ClientScaleTexture_Implementation(UStructurePaintingComponent*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ClientSendPaintingRevision_Implementation(UStructurePaintingComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendPaintingRevision_Implementation(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructure.ClientSendPaintingRevision_Implementation(UStructurePaintingComponent*,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.ClientUpdateLinkedStructures(TArray<unsignedint,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientUpdateLinkedStructures(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.ClientUpdateLinkedStructures(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ClientUpdateLinkedStructures_Implementation(TArray<unsignedint,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    void ClientUpdateLinkedStructures_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CreateComponentFromTemplate(UActorComponent*,FName)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* CreateComponentFromTemplate(void* a0, unsigned long long a1) const
    {
        return NativeCall<UActorComponent*, void*, unsigned long long>(this, "APrimalStructure.CreateComponentFromTemplate(UActorComponent*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CreateComponentFromTemplateData(FBlueprintCookedComponentInstancingData*,FName)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* CreateComponentFromTemplateData(void* a0, unsigned long long a1) const
    {
        return NativeCall<UActorComponent*, void*, unsigned long long>(this, "APrimalStructure.CreateComponentFromTemplateData(FBlueprintCookedComponentInstancingData*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.CreateDynamicMaterials(UMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void CreateDynamicMaterials(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.CreateDynamicMaterials(UMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.CullAgainstFoundations(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CullAgainstFoundations(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.CullAgainstFoundations(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.Demolish(APlayerController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void Demolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.Demolish(APlayerController*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.DemolishStructureAndDependingLinkedStructures(APlayerController*,TMap<TSubclass
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DemolishStructureAndDependingLinkedStructures(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "APrimalStructure.DemolishStructureAndDependingLinkedStructures(APlayerController*,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DestroyByMeshing()
    // endereco: casamento de bytes com a build de referencia
    void DestroyByMeshing() const
    {
        NativeCall<void>(this, "APrimalStructure.DestroyByMeshing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.DestroyOutsideWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DestroyOutsideWorld() const
    {
        return NativeCall<void*>(this, "APrimalStructure.DestroyOutsideWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DestroyStructuresPlacedOnFloor()
    // endereco: casamento de bytes com a build de referencia
    void DestroyStructuresPlacedOnFloor() const
    {
        NativeCall<void>(this, "APrimalStructure.DestroyStructuresPlacedOnFloor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalStructure.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalStructure.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DisableStructurePickup()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    void DisableStructurePickup() const
    {
        NativeCall<void>(this, "APrimalStructure.DisableStructurePickup()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DoAnyTribePermissionsRestrict(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool DoAnyTribePermissionsRestrict(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.DoAnyTribePermissionsRestrict(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.DoTrap()
    // endereco: casamento de bytes com a build de referencia
    void DoTrap() const
    {
        NativeCall<void>(this, "APrimalStructure.DoTrap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DoesGameModeShowDemolishTimer()
    // endereco: casamento de bytes com a build de referencia
    bool DoesGameModeShowDemolishTimer() const
    {
        return NativeCall<bool>(this, "APrimalStructure.DoesGameModeShowDemolishTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DrawStructureTooltip(AShooterHUD*,bool)
    // endereco: cache_pdb_25090264
    void DrawStructureTooltip(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructure.DrawStructureTooltip(AShooterHUD*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.DrawStructureTooltipAction(AShooterHUD*,bool)
    // endereco: casamento de bytes com a build de referencia
    void DrawStructureTooltipAction(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructure.DrawStructureTooltipAction(AShooterHUD*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.EnableUnstasisCast(bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableUnstasisCast(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.EnableUnstasisCast(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructure.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ExecSkinNetMessage(APrimalStructure*,FName,FSkinNetMessageParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecSkinNetMessage(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "APrimalStructure.ExecSkinNetMessage(APrimalStructure*,FName,FSkinNetMessageParams&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FadeInEffectTick()
    // endereco: casamento de bytes com a build de referencia
    void FadeInEffectTick() const
    {
        NativeCall<void>(this, "APrimalStructure.FadeInEffectTick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.FastPlaceStructureOnPawnMesh(APawn*,USkeletalMeshComponent*,FPlacementData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FastPlaceStructureOnPawnMesh(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.FastPlaceStructureOnPawnMesh(APawn*,USkeletalMeshComponent*,FPlacementData&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FillVolumetricDispatchesForFluidInteraction(bool,bool,UActorComponent*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool FillVolumetricDispatchesForFluidInteraction(bool a0, bool a1, void* a2, void* a3) const
    {
        return NativeCall<bool, bool, bool, void*, void*>(this, "APrimalStructure.FillVolumetricDispatchesForFluidInteraction(bool,bool,UActorComponent*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FillVolumetricDispatchesForFoliageInteraction(bool,UActorComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool FillVolumetricDispatchesForFoliageInteraction(bool a0, void* a1) const
    {
        return NativeCall<bool, bool, void*>(this, "APrimalStructure.FillVolumetricDispatchesForFoliageInteraction(bool,UActorComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FinalLoadedFromSaveGame()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void FinalLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "APrimalStructure.FinalLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    char FinalStructurePlacement(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6, void* a7) const
    {
        return NativeCall<char, void*, void*, void*, void*, void*, unsigned long long, bool, void*>(this, "APrimalStructure.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.FindFoundations(APrimalStructure*,TMap<APrimalStructure*,UE::Math::TVector<doub
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=214]]
    BrzPonteiro FindFoundations(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalStructure.FindFoundations(APrimalStructure*,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,bool&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.FindStructureEffectRow(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindStructureEffectRow(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalStructure.FindStructureEffectRow(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FlagConnectionsLessThan(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,i
    // endereco: casamento de bytes com a build de referencia
    static void FlagConnectionsLessThan(void* a0, int a1, void* a2)
    {
        NativeCall<void, void*, int, void*>(nullptr, "APrimalStructure.FlagConnectionsLessThan(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,int,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.FlagReachable(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void FlagReachable(void* a0)
    {
        NativeCall<void, void*>(nullptr, "APrimalStructure.FlagReachable(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ForceAttachStructureToSaddle_Implementation(APrimalDinoCharacter*,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceAttachStructureToSaddle_Implementation(void* a0, void* a1, void* a2, bool a3, unsigned long long a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, bool, unsigned long long, void*, void*>(this, "APrimalStructure.ForceAttachStructureToSaddle_Implementation(APrimalDinoCharacter*,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FName,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ForceInfiniteDrawDistanceOnComponent(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool ForceInfiniteDrawDistanceOnComponent(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.ForceInfiniteDrawDistanceOnComponent(UPrimitiveComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GatherStructuresPlacedOnFloor(APrimalStructure*,TArray<APrimalStructure*,TSized
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GatherStructuresPlacedOnFloor(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.GatherStructuresPlacedOnFloor(APrimalStructure*,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetAdditionalVariants()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdditionalVariants() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetAdditionalVariants()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetAdjustedPlacementTraceLoc(FPlacementData&,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdjustedPlacementTraceLoc(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.GetAdjustedPlacementTraceLoc(FPlacementData&,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetAllLinkedStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TS
    // endereco: casamento de bytes com a build de referencia
    void GetAllLinkedStructures(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void**, bool>(this, "APrimalStructure.GetAllLinkedStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TSubclassOf<APrimalStructure>,bool)", a0, &a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetAllPrimalCameraModes(TArray<FPrimalCameraMode,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllPrimalCameraModes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.GetAllPrimalCameraModes(TArray<FPrimalCameraMode,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetAllowedStructureColorRegions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllowedStructureColorRegions() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetAllowedStructureColorRegions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetAttachedToStaticMeshTransform(APlayerController*,UStaticMeshComponent*,UE::M
    // endereco: casamento de bytes com a build de referencia
    char GetAttachedToStaticMeshTransform(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<char, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalStructure.GetAttachedToStaticMeshTransform(APlayerController*,UStaticMeshComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FHitResult&,APrimalStructure**)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetAttackRangeOffset()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAttackRangeOffset() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetAttackRangeOffset()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetBedFilterClass()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UClass* GetBedFilterClass() const
    {
        return NativeCall<UClass*>(this, "APrimalStructure.GetBedFilterClass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetBuildingUITemplateOverride()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBuildingUITemplateOverride() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetBuildingUITemplateOverride()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetCantBuildReasonString(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void GetCantBuildReasonString(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalStructure.GetCantBuildReasonString(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetCantBuildReasonString(int a0, FString* a1) const
    { GetCantBuildReasonString(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetClosestStructureToPoint(UWorld*,UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    static AActor* GetClosestStructureToPoint(void* a0, void* a1, float a2)
    {
        return NativeCall<AActor*, void*, void*, float>(nullptr, "APrimalStructure.GetClosestStructureToPoint(UWorld*,UE::Math::TVector<double>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=61+chamadores=2]]
    bool GetClosestTargetOverride(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructure.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetCollisionComponentsToDestroyOnStasis()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCollisionComponentsToDestroyOnStasis() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetCollisionComponentsToDestroyOnStasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetConsumesPrimalItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetConsumesPrimalItem() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetConsumesPrimalItem()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetCustomCosmeticModID()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    long long GetCustomCosmeticModID() const
    {
        return NativeCall<long long>(this, "APrimalStructure.GetCustomCosmeticModID()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetDayCycleManager()
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetDayCycleManager()
    {
        return NativeCall<UObject*>(nullptr, "APrimalStructure.GetDayCycleManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetDebugInfoString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetDefaultDestinationID()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetDefaultDestinationID() const
    {
        return NativeCall<int>(this, "APrimalStructure.GetDefaultDestinationID()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetDefaultVariant()
    // endereco: casamento de bytes com a build de referencia
    void GetDefaultVariant(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetDefaultVariant()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetDescriptiveName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetDestroyedMesh()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDestroyedMesh() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetDestroyedMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetDestroyedMeshes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDestroyedMeshes() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetDestroyedMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetEntryDescription()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=302]]
    void GetEntryDescription(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetEntryDescription()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetEntryString()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    void GetEntryString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetEntryString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetForceDemolishTime()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    double GetForceDemolishTime() const
    {
        return NativeCall<double>(this, "APrimalStructure.GetForceDemolishTime()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetFoundationTop()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFoundationTop() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetFoundationTop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetFromID(UWorld*,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetFromID(void* a0, unsigned int a1)
    {
        return NativeCall<void*, void*, unsigned int>(nullptr, "APrimalStructure.GetFromID(UWorld*,unsignedint)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetHitPawnCollisionGroup()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetHitPawnCollisionGroup() const
    {
        return NativeCall<int>(this, "APrimalStructure.GetHitPawnCollisionGroup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetInstanceWaterPlacementMinimumWaterHeight()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    BrzPonteiro GetInstanceWaterPlacementMinimumWaterHeight() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetInstanceWaterPlacementMinimumWaterHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2134+chamadores=2+grafo=81/81]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetLinkedDoor()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=167+chamadores=3]]
    APrimalStructureDoor* GetLinkedDoor() const
    {
        return NativeCall<APrimalStructureDoor*>(this, "APrimalStructure.GetLinkedDoor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructure.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetNearbyFoundation(FPlacementData&,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNearbyFoundation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.GetNearbyFoundation(FPlacementData&,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetNearbyStructuresOfClass(UWorld*,TSubclassOf<APrimalStructure>,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    static void GetNearbyStructuresOfClass(void* a0, void* a1, void* a2, float a3, void* a4)
    {
        NativeCall<void, void*, void*, void*, float, void*>(nullptr, "APrimalStructure.GetNearbyStructuresOfClass(UWorld*,TSubclassOf<APrimalStructure>,UE::Math::TVector<double>&,float,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetNetRelevancyBiomeId()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNetRelevancyBiomeId() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetNetRelevancyBiomeId()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetNumStructuresInRange(UE::Math::TVector<double>&,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    long long GetNumStructuresInRange(void* a0, float a1) const
    {
        return NativeCall<long long, void*, float>(this, "APrimalStructure.GetNumStructuresInRange(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetNumStructuresInRangeEx(UE::Math::TVector<double>&,float,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetNumStructuresInRangeEx(void* a0, float a1, bool a2) const
    {
        return NativeCall<void*, void*, float, bool>(this, "APrimalStructure.GetNumStructuresInRangeEx(UE::Math::TVector<double>&,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetNumStructuresInRangeStructureTypeFlag(UWorld*,UE::Math::TVector<double>,int,
    // endereco: casamento de bytes com a build de referencia
    static long long GetNumStructuresInRangeStructureTypeFlag(void* a0, void* a1, int a2, void* a3, float a4, bool a5, bool a6, void* a7, bool a8, void* a9, int a10)
    {
        return NativeCall<long long, void*, void*, int, void*, float, bool, bool, void*, bool, void*, int>(nullptr, "APrimalStructure.GetNumStructuresInRangeStructureTypeFlag(UWorld*,UE::Math::TVector<double>,int,TArray<FName,TSizedDefaultAllocator<32>>,float,bool,bool,APrimalStructure*,bool,APrimalDinoCharacter*,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetPaintingStaticMesh()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UStaticMeshComponent* GetPaintingStaticMesh() const
    {
        return NativeCall<UStaticMeshComponent*>(this, "APrimalStructure.GetPaintingStaticMesh()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetPaintingStaticMesh_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=253]]
    UStaticMeshComponent* GetPaintingStaticMesh_Implementation() const
    {
        return NativeCall<UStaticMeshComponent*>(this, "APrimalStructure.GetPaintingStaticMesh_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetPaintingTexture()
    // endereco: casamento de bytes com a build de referencia
    UPaintingTexture* GetPaintingTexture() const
    {
        return NativeCall<UPaintingTexture*>(this, "APrimalStructure.GetPaintingTexture()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetPhysMaterialOverride()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetPhysMaterialOverride() const
    {
        return NativeCall<UObject*>(this, "APrimalStructure.GetPhysMaterialOverride()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetPlacingGroundLocation(AActor*&,FPlacementData&,APlayerController*,bool,int,U
    // endereco: casamento de bytes com a build de referencia
    bool GetPlacingGroundLocation(void* a0, void* a1, void* a2, bool a3, int a4, void* a5, bool a6) const
    {
        return NativeCall<bool, void*, void*, void*, bool, int, void*, bool>(this, "APrimalStructure.GetPlacingGroundLocation(AActor*&,FPlacementData&,APlayerController*,bool,int,UPrimitiveComponent**,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetPlayerSpawnRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlayerSpawnRotation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetPlayerSpawnRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetPrimalStructureSparseClassData()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetPrimalStructureSparseClassData() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetPrimalStructureSparseClassData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetPrimaryHitComponent()
    // endereco: casamento de bytes com a build de referencia
    UPrimitiveComponent* GetPrimaryHitComponent() const
    {
        return NativeCall<UPrimitiveComponent*>(this, "APrimalStructure.GetPrimaryHitComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetSkeletalMeshComponent()
    // endereco: casamento de bytes com a build de referencia
    USkeletalMeshComponent* GetSkeletalMeshComponent() const
    {
        return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructure.GetSkeletalMeshComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetSkinnedPaintingStaticMesh(APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* GetSkinnedPaintingStaticMesh(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalStructure.GetSkinnedPaintingStaticMesh(APrimalStructure*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructure.GetSnapPlacementMeshOverride(FPlacementData&,UStaticMesh**,UClass**,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    bool GetSnapPlacementMeshOverride(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalStructure.GetSnapPlacementMeshOverride(FPlacementData&,UStaticMesh**,UClass**,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,UE::Math::TVector<double>*,bool*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetSnapPointLocation(int,bool,UE::Math::TVector<double>,UE::Math::TRotator<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSnapPointLocation(int a0, bool a1, void* a2, void* a3) const
    {
        return NativeCall<void*, int, bool, void*, void*>(this, "APrimalStructure.GetSnapPointLocation(int,bool,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetSnapPointName(int)
    // endereco: casamento de bytes com a build de referencia
    unsigned long long GetSnapPointName(int a0) const
    {
        return NativeCall<unsigned long long, int>(this, "APrimalStructure.GetSnapPointName(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetSnapPoints()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSnapPoints() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetSnapPoints()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetSnapToLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FPlace
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSnapToLocation(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, bool a7, int a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, bool, int>(this, "APrimalStructure.GetSnapToLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FPlacementData&,APrimalStructure**,TArray<FAttachmentPoint,TSizedDefaultAllocator<32>>*,int*,APlayerController*,bool,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetSnapToParentStructures(FPlacementData&,TArray<APrimalStructure*,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSnapToParentStructures(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.GetSnapToParentStructures(FPlacementData&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,APlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetSnappedLocAndRot(int,APrimalStructure*,int,UE::Math::TVector<double>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    long long GetSnappedLocAndRot(int a0, void* a1, int a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<long long, int, void*, int, void*, void*, void*>(this, "APrimalStructure.GetSnappedLocAndRot(int,APrimalStructure*,int,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TTransform<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetSpawnPointInfo()
    // endereco: casamento de bytes com a build de referencia
    void GetSpawnPointInfo(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.GetSpawnPointInfo()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetStructureColor(int)
    // endereco: casamento de bytes com a build de referencia
    void GetStructureColor(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructure.GetStructureColor(int)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetStructureColorForID(int,int)
    // endereco: casamento de bytes com a build de referencia
    void GetStructureColorForID(void* retorno, int a0, int a1) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructure.GetStructureColorForID(int,int)", retorno, a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetStructureColorValue(int)
    // endereco: cache_pdb_25090264
    int GetStructureColorValue(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalStructure.GetStructureColorValue(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetStructureDemolishTime()
    // endereco: casamento de bytes com a build de referencia
    float GetStructureDemolishTime() const
    {
        return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetStructureMeshAndTransform(FName,UE::Math::TTransform<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    UStaticMesh* GetStructureMeshAndTransform(unsigned long long a0, void* a1, bool a2) const
    {
        return NativeCall<UStaticMesh*, unsigned long long, void*, bool>(this, "APrimalStructure.GetStructureMeshAndTransform(FName,UE::Math::TTransform<double>&,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetStructureSkinDestroyedMeshes(APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetStructureSkinDestroyedMeshes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.GetStructureSkinDestroyedMeshes(APrimalStructure*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetStructureSquaredRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetStructureSquaredRadius() const
    {
        return NativeCall<float>(this, "APrimalStructure.GetStructureSquaredRadius()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetStructuresInRange(UWorld*,UE::Math::TVector<double>,float,TSubclassOf<APrima
    // endereco: casamento de bytes com a build de referencia
    static void GetStructuresInRange(void* a0, void* a1, float a2, void* a3, void* a4, bool a5, void* a6)
    {
        NativeCall<void, void*, void*, float, void*, void*, bool, void*>(nullptr, "APrimalStructure.GetStructuresInRange(UWorld*,UE::Math::TVector<double>,float,TSubclassOf<APrimalStructure>,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool,APrimalStructure*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetTargetPathfindingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetPathfindingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.GetTargetPathfindingLocation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetTargetingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.GetTargetingLocation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetTemplateMeshOverrides(FString&,TEnumAsByte<ETemplateMeshOverrideType::Type>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateMeshOverrides(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructure.GetTemplateMeshOverrides(FString&,TEnumAsByte<ETemplateMeshOverrideType::Type>&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetTemplateMeshOverrides(FString* a0, void* a1) const
    { return GetTemplateMeshOverrides(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.GetTooltipStructureInfoBP(AShooterPlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=191+bytes40+grafo=3/3]]
    BrzPonteiro GetTooltipStructureInfoBP(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.GetTooltipStructureInfoBP(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetVariantByTag(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVariantByTag(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalStructure.GetVariantByTag(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetVariantNum()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetVariantNum() const
    {
        return NativeCall<int>(this, "APrimalStructure.GetVariantNum()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetVariants()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetVariants() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetVariants()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.GetWeldRootShip()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetWeldRootShip() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetWeldRootShip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,in
    // endereco: casamento de bytes com a build de referencia
    void GetWindSourceComponents(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalStructure.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,int,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.HasAppliedCustomCosmetic()
    // endereco: cache_pdb_25090264
    bool HasAppliedCustomCosmetic() const
    {
        return NativeCall<bool>(this, "APrimalStructure.HasAppliedCustomCosmetic()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.HasStructureTag(FName)
    // endereco: casamento de bytes com a build de referencia
    bool HasStructureTag(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "APrimalStructure.HasStructureTag(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.HasStructureTags(TArray<FName,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasStructureTags(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.HasStructureTags(TArray<FName,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.HideGrass()
    // endereco: casamento de bytes com a build de referencia
    void HideGrass() const
    {
        NativeCall<void>(this, "APrimalStructure.HideGrass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.Internal_IsInSnapChain(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    bool Internal_IsInSnapChain(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.Internal_IsInSnapChain(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotato
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int IsAllowedToBuild(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, bool a6, bool a7, void* a8) const
    {
        return NativeCall<int, void*, void*, void*, void*, bool, void*, bool, bool, void*>(this, "APrimalStructure.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsAllowedToDemolish(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsAllowedToDemolish(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.IsAllowedToDemolish(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.IsAttachedToSaddlePlatform()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsAttachedToSaddlePlatform() const
    {
        return NativeCall<void*>(this, "APrimalStructure.IsAttachedToSaddlePlatform()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsAttachedToStructureAttachmentBase()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=85]]
    bool IsAttachedToStructureAttachmentBase() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsAttachedToStructureAttachmentBase()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsCompatibleWithGhostStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    bool IsCompatibleWithGhostStructure(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.IsCompatibleWithGhostStructure(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsComponentRelevantForNavigation(UActorComponent*)
    // endereco: cache_pdb_25090264
    bool IsComponentRelevantForNavigation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.IsComponentRelevantForNavigation(UActorComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.IsInsideBase(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInsideBase(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.IsInsideBase(UE::Math::TVector<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsLinkedToWaterOrPowerSource()
    // endereco: cache_pdb_25090264
    bool IsLinkedToWaterOrPowerSource() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsLinkedToWaterOrPowerSource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalStructure.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.IsObstructedByTerrainOrWorldGeo(APlayerController*,UE::Math::TVector<double>,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsObstructedByTerrainOrWorldGeo(void* a0, void* a1, void* a2, void* a3, bool a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, bool, void*>(this, "APrimalStructure.IsObstructedByTerrainOrWorldGeo(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,bool,APawn*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsOnlyLinkedToFastDecayStructures()
    // endereco: casamento de bytes com a build de referencia
    bool IsOnlyLinkedToFastDecayStructures() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure*,DefaultKeyFunc
    // endereco: casamento de bytes com a build de referencia
    bool IsOnlyLinkedToFastDecayStructuresInternal(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsPointNearSupplyCrateSpawn(UWorld*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static char IsPointNearSupplyCrateSpawn(void* a0, void* a1)
    {
        return NativeCall<char, void*, void*>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn(UWorld*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsPointObstructedByWorldGeometry(UWorld*,UE::Math::TVector<double>,bool,bool,bo
    // endereco: casamento de bytes com a build de referencia
    static char IsPointObstructedByWorldGeometry(void* a0, void* a1, bool a2, bool a3, bool a4, float a5)
    {
        return NativeCall<char, void*, void*, bool, bool, bool, float>(nullptr, "APrimalStructure.IsPointObstructedByWorldGeometry(UWorld*,UE::Math::TVector<double>,bool,bool,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsReadyForDynamicBasing()
    // endereco: cache_pdb_25090264
    bool IsReadyForDynamicBasing() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsReadyForDynamicBasing()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsRepairAllowed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=75+grafo=3/3]]
    bool IsRepairAllowed() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsRepairAllowed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsReverseVacuumCompartment()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsReverseVacuumCompartment() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsReverseVacuumCompartment()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsTargetable()
    // endereco: cache_pdb_25090264
    bool IsTargetable() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsTargetable()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsUnderwaterBase()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsUnderwaterBase() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsUnderwaterBase()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsUsingWorldSpaceMaterial()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsUsingWorldSpaceMaterial() const
    {
        return NativeCall<bool>(this, "APrimalStructure.IsUsingWorldSpaceMaterial()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.IsValidEncroachment(AActor*,UPrimitiveComponent*,APrimalStructure*,APrimalStruc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidEncroachment(void* a0, void* a1, void* a2, void* a3, bool a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, bool>(this, "APrimalStructure.IsValidEncroachment(AActor*,UPrimitiveComponent*,APrimalStructure*,APrimalStructure*,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructure.IsValidEncroachment(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,APrimalS
    // endereco: casamento de bytes com a build de referencia
    bool IsValidEncroachment(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, bool>(this, "APrimalStructure.IsValidEncroachment(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,APrimalStructure*,APrimalStructure*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsValidForSnappingFrom(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsValidForSnappingFrom(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.IsValidForSnappingFrom(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsValidSnapParent(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotato
    // endereco: casamento de bytes com a build de referencia
    char IsValidSnapParent(void* a0, void* a1, void* a2) const
    {
        return NativeCall<char, void*, void*, void*>(this, "APrimalStructure.IsValidSnapParent(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   APrimalStructure.IsValidSnapPointFrom(APrimalStructure*,int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsValidSnapPointFrom(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructure.IsValidSnapPointFrom(APrimalStructure*,int,int)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   APrimalStructure.IsValidSnapPointTo(APrimalStructure*,int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsValidSnapPointTo(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructure.IsValidSnapPointTo(APrimalStructure*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.IsValidStructureReplacement(APrimalStructure*,bool)
    // endereco: casamento de bytes com a build de referencia
    int IsValidStructureReplacement(void* a0, bool a1) const
    {
        return NativeCall<int, void*, bool>(this, "APrimalStructure.IsValidStructureReplacement(APrimalStructure*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.IsValidStructureSkinTarget(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsValidStructureSkinTarget(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.IsValidStructureSkinTarget(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.IsValidStructureSkinTarget_Implementation(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=16]]
    BrzPonteiro IsValidStructureSkinTarget_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.IsValidStructureSkinTarget_Implementation(APrimalStructure*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.LinkStructure(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void LinkStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.LinkStructure(APrimalStructure*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.LoopingStructureSkinTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    void LoopingStructureSkinTimer() const
    {
        NativeCall<void>(this, "APrimalStructure.LoopingStructureSkinTimer()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.MultiAddStructuresPlacedOnFloor(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void MultiAddStructuresPlacedOnFloor(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.MultiHandleSkinNetMessage(FName,FSkinNetMessageParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiHandleSkinNetMessage(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalStructure.MultiHandleSkinNetMessage(FName,FSkinNetMessageParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.MultiHandleSkinNetMessage_Implementation(FName,FSkinNetMessageParams&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=328+grafo=3/3]]
    BrzPonteiro MultiHandleSkinNetMessage_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalStructure.MultiHandleSkinNetMessage_Implementation(FName,FSkinNetMessageParams&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.MultiRefreshStructureSkin(TSubclassOf<APrimalStructure>,__int64,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void MultiRefreshStructureSkin(void* a0, long long a1, int a2, bool a3, bool a4) const
    {
        NativeCall<void, void*, long long, int, bool, bool>(this, "APrimalStructure.MultiRefreshStructureSkin(TSubclassOf<APrimalStructure>,__int64,int,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.MultiRefreshStructureSkin_Implementation(TSubclassOf<APrimalStructure>,__int64,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiRefreshStructureSkin_Implementation(void* a0, long long a1, int a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, long long, int, bool, bool>(this, "APrimalStructure.MultiRefreshStructureSkin_Implementation(TSubclassOf<APrimalStructure>,__int64,int,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.MultiRefreshVariantSettings(FName)
    // endereco: casamento de bytes com a build de referencia
    void MultiRefreshVariantSettings(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalStructure.MultiRefreshVariantSettings(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime(double)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MultiSetPickupAllowedBeforeNetworkTime(double a0) const
    {
        NativeCall<void, double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime_Implementation(double)
    // endereco: cache_pdb_25090264
    void MultiSetPickupAllowedBeforeNetworkTime_Implementation(double a0) const
    {
        NativeCall<void, double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime_Implementation(double)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.MultiSetupTrap(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void MultiSetupTrap(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.MultiSetupTrap(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.MultiSetupTrap_Implementation(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro MultiSetupTrap_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructure.MultiSetupTrap_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.MultiTraceSingle(UWorld*,int,FHitResult&,UE::Math::TVector<double>&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiTraceSingle(void* a0, int a1, void* a2, void* a3, void* a4, int a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, int, void*, void*, void*, int, void*, void*>(this, "APrimalStructure.MultiTraceSingle(UWorld*,int,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.NetDoSpawnEffects()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void NetDoSpawnEffects() const
    {
        NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NetDoSpawnEffects_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void NetDoSpawnEffects_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NetResetClientReceivedStructuersPlacedOnFloors_Implementation()
    // endereco: cache_pdb_25090264
    void NetResetClientReceivedStructuersPlacedOnFloors_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructure.NetResetClientReceivedStructuersPlacedOnFloors_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.NetSetIgnoreDestructionEffects(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void NetSetIgnoreDestructionEffects(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.NetSetIgnoreDestructionEffects(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NetSetIgnoreDestructionEffects_Implementation(bool)
    // endereco: cache_pdb_25090264
    void NetSetIgnoreDestructionEffects_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.NetSetIgnoreDestructionEffects_Implementation(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.NetSpawnCoreStructureDeathActor()
    // endereco: casamento de bytes com a build de referencia
    void NetSpawnCoreStructureDeathActor() const
    {
        NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void NetSpawnCoreStructureDeathActor_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.NetUpdateOriginalOwnerNameAndID(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    void NetUpdateOriginalOwnerNameAndID(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateOriginalOwnerNameAndID(int a0, FString* a1) const
    { NetUpdateOriginalOwnerNameAndID(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation(int,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    void NetUpdateOriginalOwnerNameAndID_Implementation(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateOriginalOwnerNameAndID_Implementation(int a0, FString* a1) const
    { NetUpdateOriginalOwnerNameAndID_Implementation(a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.NetUpdateTeamAndOwnerName(int,FString&)
    // endereco: cache_pdb_25090264
    void NetUpdateTeamAndOwnerName(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateTeamAndOwnerName(int a0, FString* a1) const
    { NetUpdateTeamAndOwnerName(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NetUpdateTeamAndOwnerName_Implementation(int,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    void NetUpdateTeamAndOwnerName_Implementation(int a0, const FString& a1) const
    {
        NativeCall<void, int, void*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName_Implementation(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateTeamAndOwnerName_Implementation(int a0, FString* a1) const
    { NetUpdateTeamAndOwnerName_Implementation(a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.NonLoopingStructureSkinTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    void NonLoopingStructureSkinTimer() const
    {
        NativeCall<void>(this, "APrimalStructure.NonLoopingStructureSkinTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.NonPlayerFinalStructurePlacement(int,int,FString&,APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void NonPlayerFinalStructurePlacement(int a0, int a1, const FString& a2, void* a3) const
    {
        NativeCall<void, int, int, void*, void*>(this, "APrimalStructure.NonPlayerFinalStructurePlacement(int,int,FString&,APrimalStructure*)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NonPlayerFinalStructurePlacement(int a0, int a1, FString* a2, void* a3) const
    { NonPlayerFinalStructurePlacement(a0, a1, *a2, a3); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.NonPlayerFinalStructurePlacementForPC(AShooterPlayerController*,APrimalStructur
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    void NonPlayerFinalStructurePlacementForPC(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.NonPlayerFinalStructurePlacementForPC(AShooterPlayerController*,APrimalStructure*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OnClientReceiveStructuresPlacedOnFloor(TArray<APrimalStructure*,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnClientReceiveStructuresPlacedOnFloor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.OnClientReceiveStructuresPlacedOnFloor(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnDeserializedByGame(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructure.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OnEffectExpiryTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEffectExpiryTimer() const
    {
        return NativeCall<void*>(this, "APrimalStructure.OnEffectExpiryTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OnModDownloadComplete(bool,FInstalledMod&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnModDownloadComplete(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "APrimalStructure.OnModDownloadComplete(bool,FInstalledMod&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OnModDownloadCompleteMultiRefresh(bool,FInstalledMod&,TSubclassOf<APrimalStruct
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnModDownloadCompleteMultiRefresh(bool a0, void* a1, void* a2, long long a3, int a4, bool a5, bool a6) const
    {
        return NativeCall<void*, bool, void*, void*, long long, int, bool, bool>(this, "APrimalStructure.OnModDownloadCompleteMultiRefresh(bool,FInstalledMod&,TSubclassOf<APrimalStructure>,__int64,int,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.OnRep_AttachmentReplication()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_AttachmentReplication() const
    {
        NativeCall<void>(this, "APrimalStructure.OnRep_AttachmentReplication()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OnRep_CurrentVariantTag()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    void OnRep_CurrentVariantTag() const
    {
        NativeCall<void>(this, "APrimalStructure.OnRep_CurrentVariantTag()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OnRep_StructureColors()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void OnRep_StructureColors() const
    {
        NativeCall<void>(this, "APrimalStructure.OnRep_StructureColors()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OnStructurePlacementRefreshed()
    // endereco: cache_pdb_25090264
    void OnStructurePlacementRefreshed() const
    {
        NativeCall<void>(this, "APrimalStructure.OnStructurePlacementRefreshed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OverrideAttachToStaticMeshSocket()
    // endereco: casamento de bytes com a build de referencia
    bool OverrideAttachToStaticMeshSocket() const
    {
        return NativeCall<bool>(this, "APrimalStructure.OverrideAttachToStaticMeshSocket()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OverrideAttachToStaticMeshSocketNameBase()
    // endereco: cache_pdb_25090264
    unsigned long long OverrideAttachToStaticMeshSocketNameBase() const
    {
        return NativeCall<unsigned long long>(this, "APrimalStructure.OverrideAttachToStaticMeshSocketNameBase()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OverrideAttachToStaticMeshSocketNameBase_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideAttachToStaticMeshSocketNameBase_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.OverrideAttachToStaticMeshSocketNameBase_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OverrideOnlyAllowPlacementInWater()
    // endereco: casamento de bytes com a build de referencia
    bool OverrideOnlyAllowPlacementInWater() const
    {
        return NativeCall<bool>(this, "APrimalStructure.OverrideOnlyAllowPlacementInWater()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OverrideOnlyAllowPlacementInWater_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    BrzPonteiro OverrideOnlyAllowPlacementInWater_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.OverrideOnlyAllowPlacementInWater_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OverrideOwner(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void OverrideOwner(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructure.OverrideOwner(AActor*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OverrideSnapToWaterSurface()
    // endereco: casamento de bytes com a build de referencia
    bool OverrideSnapToWaterSurface() const
    {
        return NativeCall<bool>(this, "APrimalStructure.OverrideSnapToWaterSurface()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OverrideSnapToWaterSurface_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideSnapToWaterSurface_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.OverrideSnapToWaterSurface_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.OverrideWaterVolumeCheckPointOffset()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=163]]
    BrzPonteiro OverrideWaterVolumeCheckPointOffset() const
    {
        return NativeCall<void*>(this, "APrimalStructure.OverrideWaterVolumeCheckPointOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.OverrideWaterVolumeCheckPointOffset_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideWaterVolumeCheckPointOffset_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.OverrideWaterVolumeCheckPointOffset_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.PackColorToFloat(FLinearColor&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PackColorToFloat(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.PackColorToFloat(FLinearColor&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PickupStructure(bool,AShooterPlayerController*)
    // endereco: thunk
    UPrimalItem* PickupStructure(bool a0, void* a1) const
    {
        return NativeCall<UPrimalItem*, bool, void*>(this, "APrimalStructure.PickupStructure(bool,AShooterPlayerController*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.PickupStructureAndDependingLinkedStructures(APlayerController*,bool,UPrimalInve
    // endereco: casamento de bytes com a build de referencia
    void PickupStructureAndDependingLinkedStructures(void* a0, bool a1, void* a2) const
    {
        NativeCall<void, void*, bool, void*>(this, "APrimalStructure.PickupStructureAndDependingLinkedStructures(APlayerController*,bool,UPrimalInventoryComponent*)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.PlacedOnDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=128]]
    void PlacedOnDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.PlacedOnDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PlacedStructure(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructure.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    void PostInitProperties() const
    {
        NativeCall<void>(this, "APrimalStructure.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=282+grafo=5/5]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructure.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PostSpawnInitialize()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=169]]
    void PostSpawnInitialize() const
    {
        NativeCall<void>(this, "APrimalStructure.PostSpawnInitialize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool
    // classe: a funcao mora em AActor, e APrimalStructure herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostSpawnInitialize(void* a0, void* a1, void* a2, bool a3, bool a4, bool a5, bool a6, bool a7, int a8) const
    {
        NativeCall<void, void*, void*, void*, bool, bool, bool, bool, bool, int>(this, "AActor.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool,bool,bool,ESpawnActorScaleMethod)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructure.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PrepareAsPlacementPreview()
    // endereco: casamento de bytes com a build de referencia
    void PrepareAsPlacementPreview() const
    {
        NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.PrepareForSaving()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareForSaving() const
    {
        return NativeCall<void*>(this, "APrimalStructure.PrepareForSaving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool PreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructure.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.PreventPlacingOnFloorActor(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreventPlacingOnFloorActor(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructure.PreventPlacingOnFloorActor(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.PreviewCulledStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void PreviewCulledStructures(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.PreviewCulledStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.Primal_AllowInstancingOfSubobjects(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro Primal_AllowInstancingOfSubobjects(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalStructure.Primal_AllowInstancingOfSubobjects(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ProcessBulkCleanUpTreeKills()
    // endereco: casamento de bytes com a build de referencia
    static void ProcessBulkCleanUpTreeKills()
    {
        NativeCall<void>(nullptr, "APrimalStructure.ProcessBulkCleanUpTreeKills()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructure.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessEditText(void* a0, FString* a1, bool a2) const
    { ProcessEditText(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ProcessTreeQueue()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessTreeQueue() const
    {
        return NativeCall<void*>(this, "APrimalStructure.ProcessTreeQueue()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.RearmEffectExpiryTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RearmEffectExpiryTimer() const
    {
        return NativeCall<void*>(this, "APrimalStructure.RearmEffectExpiryTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.RecomputeActiveEffectsDamageMult()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RecomputeActiveEffectsDamageMult() const
    {
        return NativeCall<void*>(this, "APrimalStructure.RecomputeActiveEffectsDamageMult()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ReduceMemoryForStasis()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReduceMemoryForStasis() const
    {
        return NativeCall<void*>(this, "APrimalStructure.ReduceMemoryForStasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.RefreshStructureColors(UMeshComponent*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1148+grafo=13/13]]
    void RefreshStructureColors(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.RefreshStructureColors(UMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.RefreshStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math
    // endereco: casamento de bytes com a build de referencia
    char RefreshStructurePlacement(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6) const
    {
        return NativeCall<char, void*, void*, void*, void*, void*, unsigned long long, bool>(this, "APrimalStructure.RefreshStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.RemoveLinkedStructure(APrimalStructure*,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveLinkedStructure(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructure.RemoveLinkedStructure(APrimalStructure*,AController*,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.RemoveStructureEffect(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=351+grafo=7/7]]
    void RemoveStructureEffect(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "APrimalStructure.RemoveStructureEffect(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.RepairCheckTimer()
    // endereco: casamento de bytes com a build de referencia
    void RepairCheckTimer() const
    {
        NativeCall<void>(this, "APrimalStructure.RepairCheckTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.ReplicateAttachmentForShips()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=39]]
    BrzPonteiro ReplicateAttachmentForShips() const
    {
        return NativeCall<void*>(this, "APrimalStructure.ReplicateAttachmentForShips()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ReprocessTree(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AController
    // endereco: casamento de bytes com a build de referencia
    static void ReprocessTree(void* a0, void* a1, void* a2, bool a3, bool a4)
    {
        NativeCall<void, void*, void*, void*, bool, bool>(nullptr, "APrimalStructure.ReprocessTree(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AController*,AActor*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.RestoreMemoryForUnstasis()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RestoreMemoryForUnstasis() const
    {
        return NativeCall<void*>(this, "APrimalStructure.RestoreMemoryForUnstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ScreenDoorFadeAway(FDamageEvent&,APawn*)
    // endereco: casamento de bytes com a build de referencia
    void ScreenDoorFadeAway(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.ScreenDoorFadeAway(FDamageEvent&,APawn*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerRequestUseItemWithActor(void* a0, void* a1, int a2, bool a3) const
    {
        NativeCall<void, void*, void*, int, bool>(this, "APrimalStructure.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.SetAllowedStructureColorRegions(TArray<int,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAllowedStructureColorRegions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.SetAllowedStructureColorRegions(TArray<int,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetBedEnabled(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115+grafo=4/4]]
    void SetBedEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.SetBedEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetBiomeZoneVolume(ABiomeZoneVolume*)
    // endereco: cache_pdb_25090264
    void SetBiomeZoneVolume(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.SetBiomeZoneVolume(ABiomeZoneVolume*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetBoundsScale(float)
    // endereco: casamento de bytes com a build de referencia
    void SetBoundsScale(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructure.SetBoundsScale(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetCarriedByDino(bool)
    // endereco: cache_pdb_25090264
    void SetCarriedByDino(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.SetCarriedByDino(bool)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructure.SetDinoSaddleAttachment(APrimalDinoCharacter*,FName,UE::Math::TVector<double>,U
    // endereco: casamento de bytes com a build de referencia
    void SetDinoSaddleAttachment(void* a0, unsigned long long a1, void* a2, void* a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, unsigned long long, void*, void*, bool, bool>(this, "APrimalStructure.SetDinoSaddleAttachment(APrimalDinoCharacter*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetDynamicMobility()
    // endereco: casamento de bytes com a build de referencia
    void SetDynamicMobility() const
    {
        NativeCall<void>(this, "APrimalStructure.SetDynamicMobility()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.SetEnabled(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetEnabledPrimarySnappedStructureParent(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetEnabledPrimarySnappedStructureParent(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=980+grafo=14/14]]
    void SetEnabledPrimarySnappedStructureParent_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetHarvestingActive(bool,bool,float,bool,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetHarvestingActive(bool a0, bool a1, float a2, bool a3, int a4, bool a5, bool a6) const
    {
        NativeCall<void, bool, bool, float, bool, int, bool, bool>(this, "APrimalStructure.SetHarvestingActive(bool,bool,float,bool,int,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetLinkedIDs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=16]]
    void SetLinkedIDs() const
    {
        NativeCall<void>(this, "APrimalStructure.SetLinkedIDs()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetNetworkParentDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void SetNetworkParentDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.SetNetworkParentDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetNetworkParentStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void SetNetworkParentStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.SetNetworkParentStructure(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetSnapPreviewOverride(FPlacementData&)
    // endereco: casamento de bytes com a build de referencia
    void SetSnapPreviewOverride(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.SetSnapPreviewOverride(FPlacementData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetSnowState(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSnowState(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "APrimalStructure.SetSnowState(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetStaticMobility()
    // endereco: casamento de bytes com a build de referencia
    void SetStaticMobility() const
    {
        NativeCall<void>(this, "APrimalStructure.SetStaticMobility()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructure.SetStructureCollisionChannels(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetStructureCollisionChannels(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.SetStructureCollisionChannels(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetStructureColorValue(int,int)
    // endereco: casamento de bytes com a build de referencia
    void SetStructureColorValue(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "APrimalStructure.SetStructureColorValue(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetStructureSkin(TSubclassOf<APrimalStructure>,__int64,int)
    // endereco: casamento de bytes com a build de referencia
    bool SetStructureSkin(void* a0, long long a1, int a2) const
    {
        return NativeCall<bool, void*, long long, int>(this, "APrimalStructure.SetStructureSkin(TSubclassOf<APrimalStructure>,__int64,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetStructureSkinTimer(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetStructureSkinTimer(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APrimalStructure.SetStructureSkinTimer(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SetVariant(FName,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool SetVariant(unsigned long long a0, bool a1) const
    {
        return NativeCall<bool, unsigned long long, bool>(this, "APrimalStructure.SetVariant(FName,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetZiplineStructurePointers(APrimalStructure*,APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void SetZiplineStructurePointers(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.SetZiplineStructurePointers(APrimalStructure*,APrimalStructure*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SetZiplineStructurePointersForInstigator(AController*,APrimalStructure*,APrimal
    // endereco: casamento de bytes com a build de referencia
    void SetZiplineStructurePointersForInstigator(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructure.SetZiplineStructurePointersForInstigator(AController*,APrimalStructure*,APrimalStructure*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ShouldPerformMeshingCheck(bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldPerformMeshingCheck(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalStructure.ShouldPerformMeshingCheck(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SnapsAreOptional()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool SnapsAreOptional() const
    {
        return NativeCall<bool>(this, "APrimalStructure.SnapsAreOptional()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.SpawnStructureEmitter(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnStructureEmitter(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructure.SpawnStructureEmitter(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.SpawnZiplineActors(APrimalStructure*,APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static void SpawnZiplineActors(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "APrimalStructure.SpawnZiplineActors(APrimalStructure*,APrimalStructure*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.SpawnZiplineActorsForInstigator(AController*,APrimalStructure*,APrimalStructure
    // endereco: casamento de bytes com a build de referencia
    void SpawnZiplineActorsForInstigator(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructure.SpawnZiplineActorsForInstigator(AController*,APrimalStructure*,APrimalStructure*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.StartRepair()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=511+grafo=8/8]]
    void StartRepair() const
    {
        NativeCall<void>(this, "APrimalStructure.StartRepair()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.Stasis()
    // classe: a funcao mora em AActor, e APrimalStructure herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "AActor.Stasis()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.StopRepair()
    // endereco: cache_pdb_25090264
    void StopRepair() const
    {
        NativeCall<void>(this, "APrimalStructure.StopRepair()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.StructureHarvestingDepleted(UPrimalHarvestingComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StructureHarvestingDepleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructure.StructureHarvestingDepleted(UPrimalHarvestingComponent*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.StructureSkinHandleCommand(FName,APrimalStructure*,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    void StructureSkinHandleCommand(unsigned long long a0, void* a1, void* a2) const
    {
        NativeCall<void, unsigned long long, void*, void*>(this, "APrimalStructure.StructureSkinHandleCommand(FName,APrimalStructure*,FBPNetExecParams&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.StructureSkinUndoPreviewTimer()
    // endereco: casamento de bytes com a build de referencia
    void StructureSkinUndoPreviewTimer() const
    {
        NativeCall<void>(this, "APrimalStructure.StructureSkinUndoPreviewTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=87/87]]
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APrimalStructure.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructure.TemplateMiscDataApplied(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TemplateMiscDataApplied(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.TemplateMiscDataApplied(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void TemplateMiscDataApplied(FString* a0) const
    { TemplateMiscDataApplied(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructure.TemplateMiscDataRequested()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TemplateMiscDataRequested(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructure.TemplateMiscDataRequested()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.TickPlacingStructure(APrimalStructurePlacer*,float)
    // endereco: casamento de bytes com a build de referencia
    bool TickPlacingStructure(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "APrimalStructure.TickPlacingStructure(APrimalStructurePlacer*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.ToggleCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMeshComponent*&,USta
    // endereco: casamento de bytes com a build de referencia
    void ToggleCosmeticMeshComp(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalStructure.ToggleCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMeshComponent*&,UStaticMesh*,UStaticMeshComponent*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructure.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UnhideGrass()
    // endereco: casamento de bytes com a build de referencia
    void UnhideGrass() const
    {
        NativeCall<void>(this, "APrimalStructure.UnhideGrass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.UnpackColorFromFloat(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UnpackColorFromFloat(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructure.UnpackColorFromFloat(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.Unstasis()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=45/59]]
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructure.Unstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.UnweldFromShipHull()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnweldFromShipHull() const
    {
        return NativeCall<void*>(this, "APrimalStructure.UnweldFromShipHull()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.UpdateActorTeamName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateActorTeamName() const
    {
        return NativeCall<void*>(this, "APrimalStructure.UpdateActorTeamName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)
    // endereco: casamento de bytes com a build de referencia
    void UpdateCosmeticMeshComp(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.UpdateNavigation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=715+chamadores=2+grafo=7/7]]
    BrzPonteiro UpdateNavigation() const
    {
        return NativeCall<void*>(this, "APrimalStructure.UpdateNavigation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.UpdateSnowTraceResults(int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSnowTraceResults(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "APrimalStructure.UpdateSnowTraceResults(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UpdateStencilValues()
    // endereco: casamento de bytes com a build de referencia
    void UpdateStencilValues() const
    {
        NativeCall<void>(this, "APrimalStructure.UpdateStencilValues()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UpdateStencilValuesWithStenilDepth(EStencilAlliance::Type)
    // endereco: casamento de bytes com a build de referencia
    void UpdateStencilValuesWithStenilDepth(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructure.UpdateStencilValuesWithStenilDepth(EStencilAlliance::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UpdateStructureMesh()
    // endereco: casamento de bytes com a build de referencia
    void UpdateStructureMesh() const
    {
        NativeCall<void>(this, "APrimalStructure.UpdateStructureMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.UpdateTribeGroupStructureRank(unsignedchar)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro UpdateTribeGroupStructureRank(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalStructure.UpdateTribeGroupStructureRank(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UpdateTribeGroupStructureRank_Implementation(unsignedchar)
    // endereco: cache_pdb_25090264
    void UpdateTribeGroupStructureRank_Implementation(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "APrimalStructure.UpdateTribeGroupStructureRank_Implementation(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UpdatedHealth(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdatedHealth(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructure.UpdatedHealth(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructure.UseDynamicMobility()
    // endereco: cache_pdb_25090264
    bool UseDynamicMobility() const
    {
        return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructure.VTraceGhost(UWorld*,int,UE::Math::TVector<double>&,UE::Math::TVector<double>&,F
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VTraceGhost(void* a0, int a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, bool a8, bool a9, void* a10, unsigned long long a11, void* a12, void* a13, void* a14, void* a15) const
    {
        return NativeCall<void*, void*, int, void*, void*, void*, void*, int, int, bool, bool, void*, unsigned long long, void*, void*, void*, void*>(this, "APrimalStructure.VTraceGhost(UWorld*,int,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,AActor*,ECollisionChannel,int,bool,bool,UE::Math::TVector<double>&,FName,AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>*,UE::Math::TQuat<double>&,AActor*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    APrimalStructure.FindFoundations(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TMap<APrimalStructure*,
    //      (colide com APrimalStructure.FindFoundations(APrimalStructure*,TMap<APrimalStructure*,UE::Math::TVector<doub)
    //    APrimalStructure.FlagReachable(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultM
    //      (colide com APrimalStructure.FlagReachable(APrimalStructure*))

    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.ActiveEffectVFX")); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructure.AllowStructureColorSets" }; }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructure.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.AttachedToDinoID1"); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.BedID"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveEffectVFX` +168, medido na build 25090264
    //  (offset absoluto medido: 0x880; confianca baixa)
    void*& CachedActiveEffectsDamageMultField() const
    { return BrzCampoAncorado<void*>(this, "ActiveEffectVFX", 168); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructure.CosmeticVariantStaticMesh"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructure.CurrentVariantTag"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.DeactivateTrapIcon")); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriodMultiplier"); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage"); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.DestructionEmitter")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveEffectVFX` +80, medido na build 25090264
    //  (offset absoluto medido: 0x828; confianca media)
    void*& EffectExpireTimesField() const
    { return BrzCampoAncorado<void*>(this, "ActiveEffectVFX", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveEffectVFX` +160, medido na build 25090264
    //  (offset absoluto medido: 0x878; confianca baixa)
    void*& EffectExpiryTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "ActiveEffectVFX", 160); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.FloatingHudLocTextOffset")); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.GroundEncroachmentCheckLocationOffset")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.ItemsUseAlternateActorClassAttachment")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSkinAppliedTime` +32, medido na build 25090264
    //  (offset absoluto medido: 0xBD8; confianca alta)
    double& LastBumpedDamageTimeField() const
    { return BrzCampoAncorado<double>(this, "LastSkinAppliedTime", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSkinAppliedTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0xBC8; confianca alta)
    double& LastColorizationTimeField() const
    { return BrzCampoAncorado<double>(this, "LastSkinAppliedTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SkinCooldownDuration` +4, medido na build 25090264
    //  (offset absoluto medido: 0xC20; confianca alta)
    float& LastFadeOpacityField() const
    { return BrzCampoAncorado<float>(this, "SkinCooldownDuration", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSkinAppliedTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0xBD0; confianca alta)
    double& LastFailedPinTimeField() const
    { return BrzCampoAncorado<double>(this, "LastSkinAppliedTime", 24); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructure.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructure.LastInAllyRangeTimeSerialized"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructure.LastSkinAppliedTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSkinAppliedTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0xBC0; confianca alta)
    double& LastStructureStasisTimeField() const
    { return BrzCampoAncorado<double>(this, "LastSkinAppliedTime", 8); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructure.LatchedDinos"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructure.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructure.LinkedStructuresID"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.LocalOnlySkinCustomPersistentData")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OwnerMission` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB90; confianca alta)
    ABiomeZoneVolume*& MyBiomeZoneVolumeField() const
    { return BrzCampoAncorado<ABiomeZoneVolume*>(this, "OwnerMission", 8); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructure.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.MyCustomCosmeticStructureSkinVariantID"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructure.MyRootTransform"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OwnerMission` +16, medido na build 25090264
    //  (offset absoluto medido: 0xB98; confianca alta)
    USkeletalMeshComponent*& MySKCompField() const
    { return BrzCampoAncorado<USkeletalMeshComponent*>(this, "OwnerMission", 16); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructure.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructure.MyStructureHarvestingComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreviewCameraRotation` +24, medido na build 25090264
    //  (offset absoluto medido: 0xAD8; confianca alta)
    void*& MyStructureHarvestingElementField() const
    { return BrzCampoAncorado<void*>(this, "PreviewCameraRotation", 24); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.NotifyCarriedByDinoChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveEffectVFX` +176, medido na build 25090264
    //  (offset absoluto medido: 0x888; confianca baixa)
    void*& OnClientBlockedUserIdsRecievedDelegateHandleField() const
    { return BrzCampoAncorado<void*>(this, "ActiveEffectVFX", 176); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructure.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.OriginalPlacerPlayerID"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructure.OverrideTargetComponents"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructure.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructure.PaintingComponent"); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructure.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructure.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementYawOffsetIncrement"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructure.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructure.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructure.PreviewSnapOverride"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SaddleDino` +8, medido na build 25090264
    //  (offset absoluto medido: 0xAF0; confianca alta)
    TWeakObjectPtr<void>& PrimaryMeshComponentField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "SaddleDino", 8); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureParent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AttachedToDinoID1` +12, medido na build 25090264
    //  (offset absoluto medido: 0xC50; confianca alta)
    void*& ProcessTreeTagField() const
    { return BrzCampoAncorado<void*>(this, "AttachedToDinoID1", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlacementYawOffsetIncrement` +4, medido na build 25090264
    //  (offset absoluto medido: 0xBF0; confianca alta)
    float& RepairAmountRemainingField() const
    { return BrzCampoAncorado<float>(this, "PlacementYawOffsetIncrement", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LocalOnlySkinCustomPersistentData` +120, medido na build 25090264
    //  (offset absoluto medido: 0x7A8; confianca media)
    void*& RepairCheckTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "LocalOnlySkinCustomPersistentData", 120); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.ReplicatedStructureMySkinClass")); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageImpulse"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructure.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.SavedStructureMinAllowedVersion"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.SkinPersistentData")); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructure.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.SnappedChooseRotationPlacementData")); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructure.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.StructureID"); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructure.StructureSkinClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LocalOnlySkinCustomPersistentData` +128, medido na build 25090264
    //  (offset absoluto medido: 0x7B0; confianca media)
    void*& StructureSkinLoopingTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "LocalOnlySkinCustomPersistentData", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LocalOnlySkinCustomPersistentData` +136, medido na build 25090264
    //  (offset absoluto medido: 0x7B8; confianca baixa)
    void*& StructureSkinNonLoopingTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "LocalOnlySkinCustomPersistentData", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LocalOnlySkinCustomPersistentData` +144, medido na build 25090264
    //  (offset absoluto medido: 0x7C0; confianca baixa)
    void*& StructureSkinUndoPreviewTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "LocalOnlySkinCustomPersistentData", 144); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructure.StructuresPlacedOnFloor"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AttachedToDinoID1` +4, medido na build 25090264
    //  (offset absoluto medido: 0xC48; confianca alta)
    void*& TaggedIndexField() const
    { return BrzCampoAncorado<void*>(this, "AttachedToDinoID1", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AttachedToDinoID1` +8, medido na build 25090264
    //  (offset absoluto medido: 0xC4C; confianca alta)
    void*& TaggedIndexTwoField() const
    { return BrzCampoAncorado<void*>(this, "AttachedToDinoID1", 8); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructure.TribeGroupStructureRank"); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructure.Variants"); }
    BitFieldValue<bool, unsigned __int32> bIsFlippable()
    { return { (void*)this, "bIsFlippable" }; }
    BitFieldValue<bool, unsigned __int32> bFlipByScale()
    { return { (void*)this, "bFlipByScale" }; }
    BitFieldValue<bool, unsigned __int32> bFlipInvertLocOffset()
    { return { (void*)this, "bFlipInvertLocOffset" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlipped()
    { return { (void*)this, "bIsFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bShowInPlaceableList()
    { return { (void*)this, "bShowInPlaceableList" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedMaterials()
    { return { (void*)this, "bInitializedMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWallAttachments()
    { return { (void*)this, "bForceAllowWallAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRefreshedStructureColors()
    { return { (void*)this, "bUseBPRefreshedStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsTeleporter()
    { return { (void*)this, "bIsTeleporter" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorframe()
    { return { (void*)this, "bIsDoorframe" }; }
    BitFieldValue<bool, unsigned __int32> bClientAddPlacedOnFloorStructures()
    { return { (void*)this, "bClientAddPlacedOnFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis()
    { return { (void*)this, "bUseBPPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis()
    { return { (void*)this, "bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGame()
    { return { (void*)this, "bUseBPPostLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementUsesWeaponClipAmmo()
    { return { (void*)this, "bPlacementUsesWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished()
    { return { (void*)this, "bIgnoreDyingWhenDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteTakeAnythingAsGround()
    { return { (void*)this, "bAbsoluteTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnDynamicsFoliageAndDoors()
    { return { (void*)this, "bDisablePlacementOnDynamicsFoliageAndDoors" }; }
    BitFieldValue<bool, unsigned __int32> bSeatedDisableCollisionCheck()
    { return { (void*)this, "bSeatedDisableCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsAllowedToBuildEx()
    { return { (void*)this, "bUseBPIsAllowedToBuildEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleStructureEnabled()
    { return { (void*)this, "bUseBPHandleStructureEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnVerticalGround()
    { return { (void*)this, "bForcePlacingOnVerticalGround" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementShouldNotBeHorizontal()
    { return { (void*)this, "bPlacementShouldNotBeHorizontal" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresGroundedPlacement()
    { return { (void*)this, "bRequiresGroundedPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresPvPOnly()
    { return { (void*)this, "bAllowPlacingOnOtherTeamStructuresPvPOnly" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseSkeletalMeshComponent()
    { return { (void*)this, "bForceUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation()
    { return { (void*)this, "UseBPOverrideTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance()
    { return { (void*)this, "bOverrideFoundationSupportDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableFootSound()
    { return { (void*)this, "bForceDisableFootSound" }; }
    BitFieldValue<bool, unsigned __int32> bTraceThruEncroachmentPoints()
    { return { (void*)this, "bTraceThruEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOverlapInsteadOfEncroachmentPoints()
    { return { (void*)this, "bUseMeshOverlapInsteadOfEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects()
    { return { (void*)this, "bDidSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoPlacementDistanceIncrease()
    { return { (void*)this, "bPreventDinoPlacementDistanceIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bPendingRemoval()
    { return { (void*)this, "bPendingRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bWasAttachedToPawn()
    { return { (void*)this, "bWasAttachedToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideCollisionProfile()
    { return { (void*)this, "bDontOverrideCollisionProfile" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedRotationPlacement()
    { return { (void*)this, "bUseAdvancedRotationPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingReplaced()
    { return { (void*)this, "bIsBeingReplaced" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrimitiveColor()
    { return { (void*)this, "bSetPrimitiveColor" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrimitiveHealth()
    { return { (void*)this, "bSetPrimitiveHealth" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacingPlayerStructure()
    { return { (void*)this, "bIsPlacingPlayerStructure" }; }
    BitFieldValue<bool, unsigned __int32> bRootFoundationLimitBuildArea()
    { return { (void*)this, "bRootFoundationLimitBuildArea" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToPawn()
    { return { (void*)this, "bAllowAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle()
    { return { (void*)this, "bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementTraceIgnorePawns()
    { return { (void*)this, "bPlacementTraceIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bRequireFreePrimarySnappedStructure()
    { return { (void*)this, "bRequireFreePrimarySnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiplePrimarySnappedStructures()
    { return { (void*)this, "bAllowMultiplePrimarySnappedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowPlacementInWater()
    { return { (void*)this, "bOnlyAllowPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnGround()
    { return { (void*)this, "bForcePlacingOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bTakeAnythingAsGround()
    { return { (void*)this, "bTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoundation()
    { return { (void*)this, "bIsFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bForceCheckNearbyEnemyFoundation()
    { return { (void*)this, "bForceCheckNearbyEnemyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsFloor()
    { return { (void*)this, "bIsFloor" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup()
    { return { (void*)this, "bForceFloorCollisionGroup" }; }
    BitFieldValue<bool, unsigned __int32> bIsWall()
    { return { (void*)this, "bIsWall" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPreventCropsBiomes()
    { return { (void*)this, "bDisallowPreventCropsBiomes" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired()
    { return { (void*)this, "bCanBeRepaired" }; }
    BitFieldValue<bool, unsigned __int32> bReturnDamageOnHitFromPawn()
    { return { (void*)this, "bReturnDamageOnHitFromPawn" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseFromRidingDino()
    { return { (void*)this, "bAllowUseFromRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsFenceFoundation()
    { return { (void*)this, "bIsFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseFenceFoundation()
    { return { (void*)this, "bUseFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyBlockSelfTraceChannel()
    { return { (void*)this, "bUseOnlyBlockSelfTraceChannel" }; }
    BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped()
    { return { (void*)this, "bWasPlacementSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bIsCoreStructure()
    { return { (void*)this, "bIsCoreStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateStructure()
    { return { (void*)this, "bDeprecateStructure" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresToBeInsideZoneVolume()
    { return { (void*)this, "bRequiresToBeInsideZoneVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoadBearing()
    { return { (void*)this, "bAllowLoadBearing" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnvironmentStructure()
    { return { (void*)this, "bIsEnvironmentStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDemolished()
    { return { (void*)this, "bDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bSetStaticMobility()
    { return { (void*)this, "bSetStaticMobility" }; }
    BitFieldValue<bool, unsigned __int32> bIsPvE()
    { return { (void*)this, "bIsPvE" }; }
    BitFieldValue<bool, unsigned __int32> bBeginPlayIgnoreApplyScale()
    { return { (void*)this, "bBeginPlayIgnoreApplyScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnVariantSwitch()
    { return { (void*)this, "bUseBPOnVariantSwitch" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnStructureFloors()
    { return { (void*)this, "bRequiresPlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnStructureFloors()
    { return { (void*)this, "bDisablePlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyStructureIfFloorDestroyed()
    { return { (void*)this, "bDestroyStructureIfFloorDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlacementCollisionCheck()
    { return { (void*)this, "bUsePlacementCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseLenientWorldGeoObstructionCheck()
    { return { (void*)this, "bUseLenientWorldGeoObstructionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresSnapping()
    { return { (void*)this, "bRequiresSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bSnappingRequiresNearbyFoundation()
    { return { (void*)this, "bSnappingRequiresNearbyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapRotation()
    { return { (void*)this, "bAllowSnapRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowSnapRotationForStructure()
    { return { (void*)this, "bUseBPAllowSnapRotationForStructure" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideObstructedSnaps()
    { return { (void*)this, "bForceHideObstructedSnaps" }; }
    BitFieldValue<bool, unsigned __int32> bDontCheckSnapsForObstruction()
    { return { (void*)this, "bDontCheckSnapsForObstruction" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation()
    { return { (void*)this, "bPlacementChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementIgnoreChooseRotation()
    { return { (void*)this, "bPlacementIgnoreChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementAdjustHeight()
    { return { (void*)this, "bPlacementAdjustHeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseSnapFromPlacementOverrideEvenWhenNotSnapped()
    { return { (void*)this, "bUseSnapFromPlacementOverrideEvenWhenNotSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacingOnWall()
    { return { (void*)this, "bRequiresPlacingOnWall" }; }
    BitFieldValue<bool, unsigned __int32> bSnapRequiresPlacementOnGround()
    { return { (void*)this, "bSnapRequiresPlacementOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapOntoSameLocation()
    { return { (void*)this, "bAllowSnapOntoSameLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyFoundationIfSnappedToFoundation()
    { return { (void*)this, "bOnlyFoundationIfSnappedToFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bFoundationRequiresGroundTrace()
    { return { (void*)this, "bFoundationRequiresGroundTrace" }; }
    BitFieldValue<bool, unsigned __int32> bPlacingOnGroundRequiresNoStructure()
    { return { (void*)this, "bPlacingOnGroundRequiresNoStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormal()
    { return { (void*)this, "bTakeGroundNormal" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormalDirectly()
    { return { (void*)this, "bTakeGroundNormalDirectly" }; }
    BitFieldValue<bool, unsigned __int32> bFinalPlacementDontAdjustForMaxRange()
    { return { (void*)this, "bFinalPlacementDontAdjustForMaxRange" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureColors()
    { return { (void*)this, "bAllowStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bUseFadeInEffect()
    { return { (void*)this, "bUseFadeInEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUsingStructureColors()
    { return { (void*)this, "bUsingStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDefaultVariant()
    { return { (void*)this, "bPreventDefaultVariant" }; }
    BitFieldValue<bool, unsigned __int32> bCarriedByDino()
    { return { (void*)this, "bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement()
    { return { (void*)this, "bAllowPickingUpStructureAfterPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePickingUpStructureAfterPlacementOnTryMultiUse()
    { return { (void*)this, "bDisablePickingUpStructureAfterPlacementOnTryMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomEvent()
    { return { (void*)this, "bUseBlueprintAnimNotifyCustomEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUsesHealth()
    { return { (void*)this, "bUsesHealth" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSnappedToOtherFloorStructures()
    { return { (void*)this, "bIgnoreSnappedToOtherFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bEnforceStructureLinkExactRotation()
    { return { (void*)this, "bEnforceStructureLinkExactRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround()
    { return { (void*)this, "bForceSnappedStructureToGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockIK()
    { return { (void*)this, "bForceBlockIK" }; }
    BitFieldValue<bool, unsigned __int32> bStationaryStructure()
    { return { (void*)this, "bStationaryStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePawns()
    { return { (void*)this, "bIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bForcePushTroughWallCheck()
    { return { (void*)this, "bForcePushTroughWallCheck" }; }
    BitFieldValue<bool, unsigned __int32> bCanDemolish()
    { return { (void*)this, "bCanDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructures()
    { return { (void*)this, "bAllowPlacingOnOtherTeamStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPlacementInWater()
    { return { (void*)this, "bPreventPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInRegularStructurePreventionZones()
    { return { (void*)this, "bAllowInRegularStructurePreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetStructureCollisionChannels()
    { return { (void*)this, "bDontSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventEnemyStructuresNearby()
    { return { (void*)this, "bForcePreventEnemyStructuresNearby" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEnemyDemolish()
    { return { (void*)this, "bAllowEnemyDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallySnapJustPlacement()
    { return { (void*)this, "bDontActuallySnapJustPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInRange()
    { return { (void*)this, "bIgnoreMaxStructuresInRange" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingUseSkeletalMesh()
    { return { (void*)this, "bPaintingUseSkeletalMesh" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPaintingComponent()
    { return { (void*)this, "bUsesPaintingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bCanBuildUpon()
    { return { (void*)this, "bCanBuildUpon" }; }
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime()
    { return { (void*)this, "bHasResetDecayTime" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowInPreventionVolumes()
    { return { (void*)this, "bForceAllowInPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bDoForceCreateDynamicMaterials()
    { return { (void*)this, "bDoForceCreateDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetInfoFromConsumedItemForPlacedStructure()
    { return { (void*)this, "bUseBPGetInfoFromConsumedItemForPlacedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bImmuneToAutoDemolish()
    { return { (void*)this, "bImmuneToAutoDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInSmallRadius()
    { return { (void*)this, "bIgnoreMaxStructuresInSmallRadius" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustPlacementIfCollide()
    { return { (void*)this, "bAdjustPlacementIfCollide" }; }
    BitFieldValue<bool, unsigned __int32> bAlignToSaddleWhenPlacing()
    { return { (void*)this, "bAlignToSaddleWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingByCorruptDinos()
    { return { (void*)this, "bAllowTargetingByCorruptDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTreatAsFoundationForSnappedStructure()
    { return { (void*)this, "bUseBPTreatAsFoundationForSnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnStructurePickup()
    { return { (void*)this, "bUseBPOnStructurePickup" }; }
    BitFieldValue<bool, unsigned __int32> bPerInstanceSnapPoints()
    { return { (void*)this, "bPerInstanceSnapPoints" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToWaterSurface()
    { return { (void*)this, "bSnapToWaterSurface" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdatedHealth()
    { return { (void*)this, "bUseBPUpdatedHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveName()
    { return { (void*)this, "bUseBPOverrideDescriptiveName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveNameForPreview()
    { return { (void*)this, "bUseBPOverrideDescriptiveNameForPreview" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCreationOfDynamicMaterials()
    { return { (void*)this, "bPreventCreationOfDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasisUnlessPrevented()
    { return { (void*)this, "bDestroyOnStasisUnlessPrevented" }; }
    BitFieldValue<bool, unsigned __int32> bPreviewApplyColorToChildComponents()
    { return { (void*)this, "bPreviewApplyColorToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachToSaddle()
    { return { (void*)this, "bPreventAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bForcePersonalStructureOwnership()
    { return { (void*)this, "bForcePersonalStructureOwnership" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowStructureAccess()
    { return { (void*)this, "bBPOverrideAllowStructureAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverideDemolish()
    { return { (void*)this, "bBPOverideDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDemolish()
    { return { (void*)this, "bUseBPOnDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWith()
    { return { (void*)this, "bBPOverrideAllowSnappingWith" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWithButAlsoCallSuper()
    { return { (void*)this, "bBPOverrideAllowSnappingWithButAlsoCallSuper" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLinkedStructureDestroyed()
    { return { (void*)this, "bUseBPOnLinkedStructureDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseTribeGroupStructureRank()
    { return { (void*)this, "bUseTribeGroupStructureRank" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockStationaryTraces()
    { return { (void*)this, "bForceBlockStationaryTraces" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocket()
    { return { (void*)this, "bAttachToStaticMeshSocket" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketRotation()
    { return { (void*)this, "bAttachToStaticMeshSocketRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceGroundForFoundation()
    { return { (void*)this, "bForceGroundForFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedToTransform()
    { return { (void*)this, "bBPOverrideSnappedToTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedFromTransform()
    { return { (void*)this, "bBPOverrideSnappedFromTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverridePlacementRotation()
    { return { (void*)this, "bBPOverridePlacementRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm()
    { return { (void*)this, "bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bNoCollision()
    { return { (void*)this, "bNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials()
    { return { (void*)this, "bCreatedDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewStructure()
    { return { (void*)this, "bIsPreviewStructure" }; }
    BitFieldValue<bool, unsigned __int32> bStructureUseAltCollisionChannel()
    { return { (void*)this, "bStructureUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy()
    { return { (void*)this, "bDemolishJustDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityDemolish()
    { return { (void*)this, "bHighPriorityDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSnapStructure()
    { return { (void*)this, "bDisableSnapStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUD()
    { return { (void*)this, "bBlueprintDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawPreviewHUD()
    { return { (void*)this, "bBlueprintDrawPreviewHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterial()
    { return { (void*)this, "bUsesWorldSpaceMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTrace()
    { return { (void*)this, "bForceIgnoreStationaryObjectTrace" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawns()
    { return { (void*)this, "bForceAllowNearSupplyCrateSpawns" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannels()
    { return { (void*)this, "bBPPostSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccess()
    { return { (void*)this, "bPickupGiveItemRequiresAccess" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItem()
    { return { (void*)this, "bUseBPAllowPickupGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructures()
    { return { (void*)this, "bPreventAttachedChildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlaced()
    { return { (void*)this, "bPreventPreviewIfWeaponPlaced" }; }
    BitFieldValue<bool, unsigned __int32> bStructuresInRangeTypeFlagUseAltCollisionChannel()
    { return { (void*)this, "bStructuresInRangeTypeFlagUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bIsDrawingHUDPickupTimer()
    { return { (void*)this, "bIsDrawingHUDPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTargeting()
    { return { (void*)this, "bIgnoredByTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bBPCheckItemRequiementsToBuild()
    { return { (void*)this, "bBPCheckItemRequiementsToBuild" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAggroDinoOnDamageSettings()
    { return { (void*)this, "bUseBPGetAggroDinoOnDamageSettings" }; }
    BitFieldValue<bool, unsigned __int32> bWasPickedUp()
    { return { (void*)this, "bWasPickedUp" }; }
    BitFieldValue<bool, unsigned __int32> bCanAttachToExosuit()
    { return { (void*)this, "bCanAttachToExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeStoredByExosuit()
    { return { (void*)this, "bCanBeStoredByExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bStructureIgnoreDying()
    { return { (void*)this, "bStructureIgnoreDying" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor()
    { return { (void*)this, "bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor()
    { return { (void*)this, "bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventCharacterBasing()
    { return { (void*)this, "bUseBPPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDynamicObstacle()
    { return { (void*)this, "bDontSetDynamicObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters()
    { return { (void*)this, "bDontSetDamageParameters" }; }
    BitFieldValue<bool, unsigned __int32> bBedUsesDefaultDestination()
    { return { (void*)this, "bBedUsesDefaultDestination" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRegisterSkeletalMeshesOnDedicatedServer()
    { return { (void*)this, "bAllowRegisterSkeletalMeshesOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseInfiniteStaticMeshDrawDistance()
    { return { (void*)this, "bUseInfiniteStaticMeshDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bDidHideGrass()
    { return { (void*)this, "bDidHideGrass" }; }
    BitFieldValue<bool, unsigned __int32> bHasWindSourceComponentsToInteractWithVolumetricDispatcher()
    { return { (void*)this, "bHasWindSourceComponentsToInteractWithVolumetricDispatcher" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChooseRotationWhenSnapped()
    { return { (void*)this, "bAllowChooseRotationWhenSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureSkinsWithoutTeamCheck()
    { return { (void*)this, "bAllowStructureSkinsWithoutTeamCheck" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldRoundRobin()
    { return { (void*)this, "bAllowWeldRoundRobin" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldingToShips()
    { return { (void*)this, "bAllowWeldingToShips" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetPickupTimer()
    { return { (void*)this, "bDontResetPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bIsStructureAttachmentBase()
    { return { (void*)this, "bIsStructureAttachmentBase" }; }
    BitFieldValue<bool, unsigned __int32> bIsTrapped()
    { return { (void*)this, "bIsTrapped" }; }
    BitFieldValue<bool, unsigned __int32> bLinkedStructureRemovalForceClientUpdate()
    { return { (void*)this, "bLinkedStructureRemovalForceClientUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementPreventLockingCameraWhileChooseRotation()
    { return { (void*)this, "bPlacementPreventLockingCameraWhileChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bStructureCosmeticOverrideStructureColorSets()
    { return { (void*)this, "bStructureCosmeticOverrideStructureColorSets" }; }
    BitFieldValue<bool, unsigned __int32> bStructureFiresProjectiles()
    { return { (void*)this, "bStructureFiresProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnClientUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnClientUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnServerUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnServerUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostPreviewStructureFlipped()
    { return { (void*)this, "bUseBPPostPreviewStructureFlipped" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURE_H
