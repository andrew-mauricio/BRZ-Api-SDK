// ==========================================================================
//  UPrimalItem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_H
#define BRZ_SDK_JOGO_UPRIMALITEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APhysicsVolume;
struct FItemNetID;
struct FItemStatInfo;
struct FName;
struct UActorComponent;
struct UClass;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UObject;
struct USoundBase;
struct UStaticMesh;
struct UTexture2D;
struct UWorld;

#include "UObject.h"

struct UPrimalItem : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AddAttachments(AActor*,bool,USkeletalMeshComponent*,bool,bool,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [chamadores=10+grafo=249/249]]
    void AddAttachments(void* a0, bool a1, void* a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, bool, void*, bool, bool, bool>(this, "UPrimalItem.AddAttachments(AActor*,bool,USkeletalMeshComponent*,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AddItemDurability(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddItemDurability(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UPrimalItem.AddItemDurability(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.AddItemTrait(TSubclassOf<UPrimalItemTrait>,TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddItemTrait(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.AddItemTrait(TSubclassOf<UPrimalItemTrait>,TSubclassOf<UPrimalItem>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.AddItemTraitBuffsToCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddItemTraitBuffsToCharacter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.AddItemTraitBuffsToCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AddNewItem(TSubclassOf<UPrimalItem>,UPrimalInventoryComponent*,bool,bool,float,bool,
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AddNewItem(void* a0, void* a1, bool a2, bool a3, float a4, bool a5, int a6, bool a7, float a8, bool a9, void* a10, float a11, bool a12, bool a13, bool a14, bool a15, bool a16, bool a17, void* a18)
    {
        return NativeCall<void*, void**, void*, bool, bool, float, bool, int, bool, float, bool, void**, float, bool, bool, bool, bool, bool, bool, void*>(nullptr, "UPrimalItem.AddNewItem(TSubclassOf<UPrimalItem>,UPrimalInventoryComponent*,bool,bool,float,bool,int,bool,float,bool,TSubclassOf<UPrimalItem>,float,bool,bool,bool,bool,bool,bool,UWorld*)", &a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, &a10, a11, a12, a13, a14, a15, a16, a17, a18);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AddToArkTributeInvenroty(UPrimalInventoryComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddToArkTributeInvenroty(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.AddToArkTributeInvenroty(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AddToInventory(UPrimalInventoryComponent*,bool,bool,FItemNetID*,bool,bool,bool,bool,
    // endereco: casamento de bytes com a build de referencia
    void AddToInventory(void* a0, bool a1, bool a2, void* a3, bool a4, bool a5, bool a6, bool a7, bool a8, bool a9) const
    {
        NativeCall<void, void*, bool, bool, void*, bool, bool, bool, bool, bool, bool>(this, "UPrimalItem.AddToInventory(UPrimalInventoryComponent*,bool,bool,FItemNetID*,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AddToSlot(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddToSlot(int a0, bool a1, bool a2) const
    {
        NativeCall<void, int, bool, bool>(this, "UPrimalItem.AddToSlot(int,bool,bool)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalItem.AddedToInventory()
    // endereco: casamento de bytes com a build de referencia
    void AddedToInventory() const
    {
        NativeCall<void>(this, "UPrimalItem.AddedToInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AllowEquipItem(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowEquipItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.AllowEquipItem(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AllowInventoryItem(UPrimalInventoryComponent*)
    // endereco: cache_pdb_25090264
    bool AllowInventoryItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.AllowInventoryItem(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AllowRemoteAddToInventory(UPrimalInventoryComponent*,AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowRemoteAddToInventory(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "UPrimalItem.AllowRemoteAddToInventory(UPrimalInventoryComponent*,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AllowSlotting(UPrimalInventoryComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSlotting(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UPrimalItem.AllowSlotting(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AllowUseInInventory(bool,AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowUseInInventory(bool a0, void* a1, bool a2) const
    {
        return NativeCall<bool, bool, void*, bool>(this, "UPrimalItem.AllowUseInInventory(bool,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "UPrimalItem.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,U
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "UPrimalItem.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNoti
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "UPrimalItem.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ApplyColorsFromStructure(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=154]]
    void ApplyColorsFromStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.ApplyColorsFromStructure(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.ApplyCustomCosmeticBuff()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCustomCosmeticBuff() const
    {
        return NativeCall<void*>(this, "UPrimalItem.ApplyCustomCosmeticBuff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ApplyingSkinOntoItem(UPrimalItem*,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=2]]
    void ApplyingSkinOntoItem(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.ApplyingSkinOntoItem(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPAddedAttachments()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPAddedAttachments() const
    {
        NativeCall<void>(this, "UPrimalItem.BPAddedAttachments()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPAllowCrafting(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPAllowCrafting(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.BPAllowCrafting(AShooterPlayerController*)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent*,AShooterPlayerController
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowRemoteRemoveFromInventory(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "UPrimalItem.BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent*,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPBreakItemID(FItemNetID,int&,int&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPBreakItemID(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "UPrimalItem.BPBreakItemID(FItemNetID,int&,int&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPCanAddToInventory(UPrimalInventoryComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanAddToInventory(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.BPCanAddToInventory(UPrimalInventoryComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPCanPlayerUseItem(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanPlayerUseItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.BPCanPlayerUseItem(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPCanUse(bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanUse(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimalItem.BPCanUse(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPClampRiderOffset(UE::Math::TVector<double>,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPClampRiderOffset(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPClampRiderOffset(UE::Math::TVector<double>,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPClientHandleItemNetExecCommand(FName,FBPNetExecParams&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPClientHandleItemNetExecCommand(unsigned long long a0, void* a1, void* a2) const
    {
        NativeCall<void, unsigned long long, void*, void*>(this, "UPrimalItem.BPClientHandleItemNetExecCommand(FName,FBPNetExecParams&,AShooterPlayerController*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPConsumeProjectileImpact(AShooterProjectile*,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPConsumeProjectileImpact(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPConsumeProjectileImpact(AShooterProjectile*,FHitResult&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPCrafted()
    // endereco: casamento de bytes com a build de referencia
    void BPCrafted() const
    {
        NativeCall<void>(this, "UPrimalItem.BPCrafted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPCustomSpawningEvent(UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,A
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCustomSpawningEvent(void* a0, void* a1, void* a2, void* a3, void* a4, const FString& a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*>(this, "UPrimalItem.BPCustomSpawningEvent(UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,AActor*,bool&,FString&,UE::Math::TVector<double>&,APlayerController*)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5), a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPCustomSpawningEvent(void* a0, void* a1, void* a2, void* a3, void* a4, FString* a5, void* a6, void* a7) const
    { return BPCustomSpawningEvent(a0, a1, a2, a3, a4, *a5, a6, a7); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPDrawItemIcon(UCanvas*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,bool
    // endereco: casamento de bytes com a build de referencia
    void BPDrawItemIcon(void* a0, void* a1, void* a2, bool a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, bool, void*>(this, "UPrimalItem.BPDrawItemIcon(UCanvas*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,bool,FLinearColor&)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPEquippedItemOnXPEarning(APrimalCharacter*,float,EXPType::Type)
    // endereco: casamento de bytes com a build de referencia
    void BPEquippedItemOnXPEarning(void* a0, float a1, int a2) const
    {
        NativeCall<void, void*, float, int>(this, "UPrimalItem.BPEquippedItemOnXPEarning(APrimalCharacter*,float,EXPType::Type)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPForceAllowRemoteAddToInventory(UPrimalInventoryComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPForceAllowRemoteAddToInventory(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.BPForceAllowRemoteAddToInventory(UPrimalInventoryComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetCropTendingResourceTemplates()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCropTendingResourceTemplates() const
    {
        return NativeCall<void*>(this, "UPrimalItem.BPGetCropTendingResourceTemplates()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetCropTendingWindowBeforeLosingEffectiveness()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetCropTendingWindowBeforeLosingEffectiveness() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPGetCropTendingWindowBeforeLosingEffectiveness()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetCustomAutoDecreaseDurabilityPerInterval()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetCustomAutoDecreaseDurabilityPerInterval() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPGetCustomAutoDecreaseDurabilityPerInterval()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPGetCustomDurabilityText()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPGetCustomDurabilityText(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPGetCustomDurabilityText()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetCustomDurabilityTextColor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetCustomDurabilityTextColor() const
    {
        return NativeCall<void*>(this, "UPrimalItem.BPGetCustomDurabilityTextColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetCustomIconMaterialParent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPGetCustomIconMaterialParent() const
    {
        return NativeCall<UObject*>(this, "UPrimalItem.BPGetCustomIconMaterialParent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPGetCustomInventoryWidgetText()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPGetCustomInventoryWidgetText(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPGetCustomInventoryWidgetText()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetCustomInventoryWidgetTextColor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCustomInventoryWidgetTextColor() const
    {
        return NativeCall<void*>(this, "UPrimalItem.BPGetCustomInventoryWidgetTextColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetExtraSpoilingTimeMultiplier()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetExtraSpoilingTimeMultiplier() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPGetExtraSpoilingTimeMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPGetItemDescription(FString&,bool,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void BPGetItemDescription(void* retorno, const FString& a0, bool a1, void* a2) const
    {
        NativeCall<void, void*, void*, bool, void*>(this, "UPrimalItem.BPGetItemDescription(FString&,bool,AShooterPlayerController*)", retorno, const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPGetItemDescription(void* retorno, FString* a0, bool a1, void* a2) const
    { BPGetItemDescription(retorno, *a0, a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetItemDurabilityPercentage()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=62+chamadores=4]]
    float BPGetItemDurabilityPercentage() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPGetItemDurabilityPercentage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPGetItemID(int&,int&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro BPGetItemID(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPGetItemID(int&,int&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetItemIcon(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetItemIcon(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "UPrimalItem.BPGetItemIcon(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPGetItemName(FString&,AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetItemName(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPGetItemName(FString&,AShooterPlayerController*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPGetItemName(FString* a0, void* a1) const
    { return BPGetItemName(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetItemNetInfo()
    // endereco: casamento de bytes com a build de referencia
    void BPGetItemNetInfo() const
    {
        NativeCall<void>(this, "UPrimalItem.BPGetItemNetInfo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetItemStatModifier(int,int)
    // endereco: cache_pdb_25090264
    float BPGetItemStatModifier(int a0, int a1) const
    {
        return NativeCall<float, int, int>(this, "UPrimalItem.BPGetItemStatModifier(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetItemStatRandomValue(float,int)
    // endereco: casamento de bytes com a build de referencia
    int BPGetItemStatRandomValue(float a0, int a1) const
    {
        return NativeCall<int, float, int>(this, "UPrimalItem.BPGetItemStatRandomValue(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPGetItemStatString(EPrimalItemStat::Type,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetItemStatString(int a0, const FString& a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalItem.BPGetItemStatString(EPrimalItemStat::Type,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPGetItemStatString(int a0, FString* a1) const
    { return BPGetItemStatString(a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetMaxAmmo()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int BPGetMaxAmmo() const
    {
        return NativeCall<int>(this, "UPrimalItem.BPGetMaxAmmo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetNumberOfDefaultSaddleStructures()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=7]]
    int BPGetNumberOfDefaultSaddleStructures() const
    {
        return NativeCall<int>(this, "UPrimalItem.BPGetNumberOfDefaultSaddleStructures()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetSaddleWeightMultiplier()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    float BPGetSaddleWeightMultiplier() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPGetSaddleWeightMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetShieldHitImpactEffect()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPGetShieldHitImpactEffect() const
    {
        return NativeCall<UObject*>(this, "UPrimalItem.BPGetShieldHitImpactEffect()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPGetSkinnedCustomInventoryWidgetText()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGetSkinnedCustomInventoryWidgetText(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPGetSkinnedCustomInventoryWidgetText()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPInitIconMaterial()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPInitIconMaterial() const
    {
        NativeCall<void>(this, "UPrimalItem.BPInitIconMaterial()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPInitItemColors(TArray<int,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPInitItemColors(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.BPInitItemColors(TArray<int,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPItemBelowDurabilityThreshold()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPItemBelowDurabilityThreshold() const
    {
        NativeCall<void>(this, "UPrimalItem.BPItemBelowDurabilityThreshold()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPItemBroken()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPItemBroken() const
    {
        NativeCall<void>(this, "UPrimalItem.BPItemBroken()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPMakeItemID(int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro BPMakeItemID(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalItem.BPMakeItemID(int,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPMatchesItemID(int,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPMatchesItemID(int a0, int a1) const
    {
        return NativeCall<bool, int, int>(this, "UPrimalItem.BPMatchesItemID(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPNotifyDropped(APrimalCharacter*,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=2]]
    void BPNotifyDropped(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.BPNotifyDropped(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPNotifyItemRefreshed()
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyItemRefreshed() const
    {
        NativeCall<void>(this, "UPrimalItem.BPNotifyItemRefreshed()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOnCropPhaseIncrease(int,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnCropPhaseIncrease(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UPrimalItem.BPOnCropPhaseIncrease(int,AActor*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOnCropPlanted(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnCropPlanted(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPOnCropPlanted(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOnItemAddedToInventory(UPrimalInventoryComponent*,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=58+chamadores=2]]
    void BPOnItemAddedToInventory(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.BPOnItemAddedToInventory(UPrimalInventoryComponent*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPOnLocalUse(AShooterCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=2]]
    void BPOnLocalUse(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPOnLocalUse(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOnRepaired(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnRepaired(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalItem.BPOnRepaired(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOnUpdatedItemContextMenu()
    // endereco: casamento de bytes com a build de referencia
    void BPOnUpdatedItemContextMenu() const
    {
        NativeCall<void>(this, "UPrimalItem.BPOnUpdatedItemContextMenu()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOnVersionChange(UWorld*,AShooterGameMode*,bool,bool&)
    // endereco: casamento de bytes com a build de referencia
    void BPOnVersionChange(void* a0, void* a1, bool a2, void* a3) const
    {
        NativeCall<void, void*, void*, bool, void*>(this, "UPrimalItem.BPOnVersionChange(UWorld*,AShooterGameMode*,bool,bool&)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOverrideAnimMontage(UAnimMontage*&,float&,FName&,bool&,bool&,float&,float&,bool,AP
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=291+bytes40+chamadores=4]]
    void BPOverrideAnimMontage(void* a0, void* a1, const FName& a2, void* a3, void* a4, void* a5, void* a6, bool a7, void* a8) const
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, bool, void*>(this, "UPrimalItem.BPOverrideAnimMontage(UAnimMontage*&,float&,FName&,bool&,bool&,float&,float&,bool,APrimalCharacter*)", a0, a1, const_cast<FName*>(&a2), a3, a4, a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPOverrideAnimMontage(void* a0, void* a1, FName* a2, void* a3, void* a4, void* a5, void* a6, bool a7, void* a8) const
    { BPOverrideAnimMontage(a0, a1, *a2, a3, a4, a5, a6, a7, a8); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOverrideCraftingConsumption(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPOverrideCraftingConsumption(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalItem.BPOverrideCraftingConsumption(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOverrideCustomInventoryWidgetDescriptionText()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOverrideCustomInventoryWidgetDescriptionText(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPOverrideCustomInventoryWidgetDescriptionText()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOverrideDeathAnim(FName)
    // endereco: casamento de bytes com a build de referencia
    UObject* BPOverrideDeathAnim(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "UPrimalItem.BPOverrideDeathAnim(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPOverrideEquippedDurabilityPercentage(float&)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideEquippedDurabilityPercentage(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPOverrideEquippedDurabilityPercentage(float&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOverrideFPVAnimMontage(UAnimMontage*&,float&,FName&,bool&,bool&,float&,float&,bool
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOverrideFPVAnimMontage(void* a0, void* a1, const FName& a2, void* a3, void* a4, void* a5, void* a6, bool a7, void* a8) const
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, bool, void*>(this, "UPrimalItem.BPOverrideFPVAnimMontage(UAnimMontage*&,float&,FName&,bool&,bool&,float&,float&,bool,APrimalCharacter*)", a0, a1, const_cast<FName*>(&a2), a3, a4, a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BPOverrideFPVAnimMontage(void* a0, void* a1, FName* a2, void* a3, void* a4, void* a5, void* a6, bool a7, void* a8) const
    { BPOverrideFPVAnimMontage(a0, a1, *a2, a3, a4, a5, a6, a7, a8); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOverrideHoldItemSlotAction()
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideHoldItemSlotAction() const
    {
        return NativeCall<bool>(this, "UPrimalItem.BPOverrideHoldItemSlotAction()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPOverrideInheritedStatWeight(APrimalDinoCharacter*,int&,float&)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideInheritedStatWeight(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UPrimalItem.BPOverrideInheritedStatWeight(APrimalDinoCharacter*,int&,float&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOverrideMinimalUseInterval()
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideMinimalUseInterval() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPOverrideMinimalUseInterval()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPOverridePreviewTransform(USceneComponent*,UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverridePreviewTransform(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPOverridePreviewTransform(USceneComponent*,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOverrideProjectileType()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UClass* BPOverrideProjectileType() const
    {
        return NativeCall<UClass*>(this, "UPrimalItem.BPOverrideProjectileType()");
    }

    // dump_sobre_sdk_287a0
    //   UPrimalItem.BPOverrideProjectileType_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void** BPOverrideProjectileType_Implementation() const
    {
        return NativeCall<void**>(this, "UPrimalItem.BPOverrideProjectileType_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPOverrideRemainingCooldownTime()
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideRemainingCooldownTime() const
    {
        return NativeCall<float>(this, "UPrimalItem.BPOverrideRemainingCooldownTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPOverrideSound(USoundBase*,USoundBase*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideSound(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPOverrideSound(USoundBase*,USoundBase*&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPPostAddBuffToGiveOwnerCharacter(APrimalCharacter*,APrimalBuff*)
    // endereco: casamento de bytes com a build de referencia
    void BPPostAddBuffToGiveOwnerCharacter(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.BPPostAddBuffToGiveOwnerCharacter(APrimalCharacter*,APrimalBuff*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPPostConstructAttachment(int,UActorComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPostConstructAttachment(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UPrimalItem.BPPostConstructAttachment(int,UActorComponent*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPPostInitializeItem(UWorld*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPPostInitializeItem(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPPostInitializeItem(UWorld*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPPreInitializeItem(UWorld*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPPreInitializeItem(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPPreInitializeItem(UWorld*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPPreUseItem()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPreUseItem() const
    {
        NativeCall<void>(this, "UPrimalItem.BPPreUseItem()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPPreventEquip(UPrimalInventoryComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPPreventEquip(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.BPPreventEquip(UPrimalInventoryComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPPreventUseOntoItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPPreventUseOntoItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.BPPreventUseOntoItem(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPPrimalDinoCharacterConsumedItem(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPPrimalDinoCharacterConsumedItem(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPPrimalDinoCharacterConsumedItem(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.BPProcessEditText(AShooterPlayerController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPProcessEditText(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.BPProcessEditText(AShooterPlayerController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPProcessEditText(void* a0, FString* a1) const
    { return BPProcessEditText(a0, *a1); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPServerHandleItemNetExecCommand(AShooterPlayerController*,FName,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    void BPServerHandleItemNetExecCommand(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "UPrimalItem.BPServerHandleItemNetExecCommand(AShooterPlayerController*,FName,FBPNetExecParams&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPServerVerifyStructurePlacementData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPServerVerifyStructurePlacementData() const
    {
        NativeCall<void>(this, "UPrimalItem.BPServerVerifyStructurePlacementData()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPSetWeaponClipAmmo(int)
    // endereco: casamento de bytes com a build de referencia
    void BPSetWeaponClipAmmo(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalItem.BPSetWeaponClipAmmo(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPSetupHUDIconMaterial(UMaterialInstanceDynamic*)
    // endereco: casamento de bytes com a build de referencia
    void BPSetupHUDIconMaterial(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPSetupHUDIconMaterial(UMaterialInstanceDynamic*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPShouldAlwaysShowInFolder(int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPShouldAlwaysShowInFolder(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "UPrimalItem.BPShouldAlwaysShowInFolder(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPShouldForceAllowSaddleBasing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPShouldForceAllowSaddleBasing() const
    {
        return NativeCall<bool>(this, "UPrimalItem.BPShouldForceAllowSaddleBasing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPShouldHideTopLevelCustomContextMenuOption(FName&)
    // endereco: casamento de bytes com a build de referencia
    bool BPShouldHideTopLevelCustomContextMenuOption(const FName& a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.BPShouldHideTopLevelCustomContextMenuOption(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool BPShouldHideTopLevelCustomContextMenuOption(FName* a0) const
    { return BPShouldHideTopLevelCustomContextMenuOption(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BPSkinOverrideWeaponFPVMasterPoseComponent()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPSkinOverrideWeaponFPVMasterPoseComponent() const
    {
        return NativeCall<UObject*>(this, "UPrimalItem.BPSkinOverrideWeaponFPVMasterPoseComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BPTributeItemDownloaded(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPTributeItemDownloaded(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPTributeItemDownloaded(UObject*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BPTributeItemUploaded(UObject*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPTributeItemUploaded(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BPTributeItemUploaded(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UPrimalItem.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.BlueprintEquipped(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=4]]
    void BlueprintEquipped(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.BlueprintEquipped(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BlueprintOwnerPosssessed(AController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BlueprintOwnerPosssessed(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.BlueprintOwnerPosssessed(AController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.BlueprintPostEquipped(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BlueprintPostEquipped(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.BlueprintPostEquipped(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.BlueprintUnequipped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BlueprintUnequipped() const
    {
        NativeCall<void>(this, "UPrimalItem.BlueprintUnequipped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CalcRecipeStats()
    // endereco: casamento de bytes com a build de referencia
    void CalcRecipeStats() const
    {
        NativeCall<void>(this, "UPrimalItem.CalcRecipeStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanBeArkTributeItem()
    // endereco: casamento de bytes com a build de referencia
    bool CanBeArkTributeItem() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanBeArkTributeItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.CanBeDyed()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanBeDyed() const
    {
        return NativeCall<void*>(this, "UPrimalItem.CanBeDyed()");
    }

    // jogo_confirmou_dump
    //   UPrimalItem.CanCraft(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CanCraft(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanCraft(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanCraftInInventory(UPrimalInventoryComponent&)
    // endereco: casamento de bytes com a build de referencia
    bool CanCraftInInventory(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanCraftInInventory(UPrimalInventoryComponent&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanDrop(bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanDrop(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimalItem.CanDrop(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanEquipWeapon()
    // endereco: casamento de bytes com a build de referencia
    bool CanEquipWeapon() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanEquipWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanFullyCraft(bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanFullyCraft(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimalItem.CanFullyCraft(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.CanMuteExtraEquipmentSounds()
    // endereco: casamento de bytes com a build de referencia
    bool CanMuteExtraEquipmentSounds() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanMuteExtraEquipmentSounds()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.CanPickUp()
    // endereco: casamento de bytes com a build de referencia
    bool CanPickUp() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanPickUp()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.CanPlayerCheatSpawn(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanPlayerCheatSpawn(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanPlayerCheatSpawn(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.CanRemoveWeaponAccessory()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool CanRemoveWeaponAccessory() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanRemoveWeaponAccessory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanRepair(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanRepair(bool a0, bool a1, bool a2) const
    {
        return NativeCall<bool, bool, bool, bool>(this, "UPrimalItem.CanRepair(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanRepairInInventory(UPrimalInventoryComponent&)
    // endereco: casamento de bytes com a build de referencia
    bool CanRepairInInventory(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanRepairInInventory(UPrimalInventoryComponent&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanShowNotificationItem()
    // endereco: casamento de bytes com a build de referencia
    bool CanShowNotificationItem() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanShowNotificationItem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanSpawnOverWater(AActor*,UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool CanSpawnOverWater(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalItem.CanSpawnOverWater(AActor*,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanSpoil()
    // endereco: casamento de bytes com a build de referencia
    bool CanSpoil() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CanSpoil()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanStackWithItem(UPrimalItem*,int*)
    // endereco: casamento de bytes com a build de referencia
    bool CanStackWithItem(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalItem.CanStackWithItem(UPrimalItem*,int*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.CanTendCrop(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanTendCrop(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanTendCrop(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanUse(bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanUse(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimalItem.CanUse(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanUseWithItemDestination(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool CanUseWithItemDestination(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanUseWithItemDestination(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CanUseWithItemSource(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    bool CanUseWithItemSource(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.CanUseWithItemSource(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CheckAutoCraftBlueprint()
    // endereco: casamento de bytes com a build de referencia
    bool CheckAutoCraftBlueprint() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CheckAutoCraftBlueprint()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CheckForInventoryDupes()
    // endereco: casamento de bytes com a build de referencia
    bool CheckForInventoryDupes() const
    {
        return NativeCall<bool>(this, "UPrimalItem.CheckForInventoryDupes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CheckForRepairResources(UPrimalInventoryComponent*,float,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CheckForRepairResources(void* a0, float a1, void* a2) const
    {
        return NativeCall<bool, void*, float, void*>(this, "UPrimalItem.CheckForRepairResources(UPrimalInventoryComponent*,float,APlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ClampItemRating(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void ClampItemRating(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.ClampItemRating(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.ClampRiderOffset(UE::Math::TVector<double>,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClampRiderOffset(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.ClampRiderOffset(UE::Math::TVector<double>,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ClampStats(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void ClampStats(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.ClampStats(UPrimalInventoryComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ClearAssociatedDinoID()
    // endereco: casamento de bytes com a build de referencia
    void ClearAssociatedDinoID() const
    {
        NativeCall<void>(this, "UPrimalItem.ClearAssociatedDinoID()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.ClearItemIcon()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClearItemIcon() const
    {
        return NativeCall<void*>(this, "UPrimalItem.ClearItemIcon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ConsumeCraftingResources(TArray<FCustomItemData,TSizedDefaultAllocator<32>>*,float*)
    // endereco: casamento de bytes com a build de referencia
    void ConsumeCraftingResources(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.ConsumeCraftingResources(TArray<FCustomItemData,TSizedDefaultAllocator<32>>*,float*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ConsumeRepairingResources(float,UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void ConsumeRepairingResources(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "UPrimalItem.ConsumeRepairingResources(float,UPrimalInventoryComponent*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ConsumeResourcesForRepair(UPrimalInventoryComponent*,float,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ConsumeResourcesForRepair(void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, void*>(this, "UPrimalItem.ConsumeResourcesForRepair(UPrimalInventoryComponent*,float,APlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CraftBlueprint(bool)
    // endereco: casamento de bytes com a build de referencia
    void CraftBlueprint(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.CraftBlueprint(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.Crafted(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Crafted(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.Crafted(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.Crafted_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void Crafted_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.Crafted_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CreateFromBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateFromBytes(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalItem.CreateFromBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.CreateItemFromNetInfo(FItemNetInfo&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateItemFromNetInfo(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalItem.CreateItemFromNetInfo(FItemNetInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.DoesClassUseMultiSellOrder(TSoftClassPtr<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesClassUseMultiSellOrder(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.DoesClassUseMultiSellOrder(TSoftClassPtr<UPrimalItem>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.DoesItemUseColorRegion(int)
    // endereco: cache_pdb_25090264
    bool DoesItemUseColorRegion(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalItem.DoesItemUseColorRegion(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.DoesItemUseMultiSellOrder()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool DoesItemUseMultiSellOrder() const
    {
        return NativeCall<bool>(this, "UPrimalItem.DoesItemUseMultiSellOrder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.EquipAnimationFinished()
    // endereco: casamento de bytes com a build de referencia
    void EquipAnimationFinished() const
    {
        NativeCall<void>(this, "UPrimalItem.EquipAnimationFinished()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.EquippedBlueprintTick(float)
    // endereco: casamento de bytes com a build de referencia
    void EquippedBlueprintTick(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalItem.EquippedBlueprintTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.EquippedItem()
    // endereco: casamento de bytes com a build de referencia
    void EquippedItem() const
    {
        NativeCall<void>(this, "UPrimalItem.EquippedItem()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.EquippedTick(float)
    // endereco: casamento de bytes com a build de referencia
    void EquippedTick(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalItem.EquippedTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.EquippedWeapon()
    // endereco: casamento de bytes com a build de referencia
    void EquippedWeapon() const
    {
        NativeCall<void>(this, "UPrimalItem.EquippedWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.FinishCraftingBlueprint()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishCraftingBlueprint() const
    {
        return NativeCall<void*>(this, "UPrimalItem.FinishCraftingBlueprint()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.FinishRepairing()
    // endereco: casamento de bytes com a build de referencia
    void FinishRepairing() const
    {
        NativeCall<void>(this, "UPrimalItem.FinishRepairing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GenerateItemID(FItemNetID&)
    // endereco: casamento de bytes com a build de referencia
    static void GenerateItemID(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UPrimalItem.GenerateItemID(FItemNetID&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetActualEquipmentType(bool)
    // endereco: cache_pdb_25090264
    unsigned char GetActualEquipmentType(bool a0) const
    {
        return NativeCall<unsigned char, bool>(this, "UPrimalItem.GetActualEquipmentType(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetAllStructuresToBuild()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllStructuresToBuild() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetAllStructuresToBuild()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetAppliedCustomCosmeticData(__int64&,int&,FCustomCosmeticAdditionalSettings&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAppliedCustomCosmeticData(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalItem.GetAppliedCustomCosmeticData(__int64&,int&,FCustomCosmeticAdditionalSettings&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetAssociatedDinoID(int&,int&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetAssociatedDinoID(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.GetAssociatedDinoID(int&,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetAttachedComponent(int,AActor*)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* GetAttachedComponent(int a0, void* a1) const
    {
        return NativeCall<UActorComponent*, int, void*>(this, "UPrimalItem.GetAttachedComponent(int,AActor*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetAttachedComponentsNum()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    int GetAttachedComponentsNum() const
    {
        return NativeCall<int>(this, "UPrimalItem.GetAttachedComponentsNum()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetAvailableCustomCosmetics()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvailableCustomCosmetics() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetAvailableCustomCosmetics()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetBrokenGiveItemClass()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBrokenGiveItemClass() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetBrokenGiveItemClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetBuffToGiveOwnerWhenEquipped(bool)
    // endereco: casamento de bytes com a build de referencia
    UClass* GetBuffToGiveOwnerWhenEquipped(bool a0) const
    {
        return NativeCall<UClass*, bool>(this, "UPrimalItem.GetBuffToGiveOwnerWhenEquipped(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetColorForItemColorID(int,int)
    // endereco: casamento de bytes com a build de referencia
    void GetColorForItemColorID(void* retorno, int a0, int a1) const
    {
        NativeCall<void, void*, int, int>(this, "UPrimalItem.GetColorForItemColorID(int,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetColorForItemColorIDFromDyeList(int,int)
    // endereco: casamento de bytes com a build de referencia
    void GetColorForItemColorIDFromDyeList(void* retorno, int a0, int a1) const
    {
        NativeCall<void, void*, int, int>(this, "UPrimalItem.GetColorForItemColorIDFromDyeList(int,int)", retorno, a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetCombinedItemID()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetCombinedItemID() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetCombinedItemID()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetComponentToAttach(int,AActor*)
    // endereco: casamento de bytes com a build de referencia
    UActorComponent* GetComponentToAttach(int a0, void* a1) const
    {
        return NativeCall<UActorComponent*, int, void*>(this, "UPrimalItem.GetComponentToAttach(int,AActor*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetCooldownDuration()
    // endereco: casamento de bytes com a build de referencia
    float GetCooldownDuration() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetCooldownDuration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetCraftRepairInvReqString()
    // endereco: casamento de bytes com a build de referencia
    void GetCraftRepairInvReqString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetCraftRepairInvReqString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetCraftingPercent()
    // endereco: casamento de bytes com a build de referencia
    float GetCraftingPercent() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetCraftingPercent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetCraftingRequirements(TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    void GetCraftingRequirements(void* retorno, void* a0, float a1) const
    {
        NativeCall<void, void*, void*, float>(this, "UPrimalItem.GetCraftingRequirements(TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>&,float)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetCraftingRequirementsString(UPrimalInventoryComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetCraftingRequirementsString(void* retorno, void* a0, bool a1) const
    {
        NativeCall<void, void*, void*, bool>(this, "UPrimalItem.GetCraftingRequirementsString(UPrimalInventoryComponent*,bool)", retorno, a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetCraftingResourceQuantitiesFromSortedResources(TMap<TSubclassOf<UPrimalItem>,FItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCraftingResourceQuantitiesFromSortedResources(void* a0, void* a1, void* a2, void* a3, bool a4, bool a5, int a6, bool a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, bool, int, bool, bool>(this, "UPrimalItem.GetCraftingResourceQuantitiesFromSortedResources(TMap<TSubclassOf<UPrimalItem>,FItemCraftingResourceRequirementQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,FItemCraftingResourceRequirementQuantityData,0>>&,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>,UPrimalInventoryComponent*,APlayerController*,bool,bool,int,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetCraftingResourceRequirement(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetCraftingResourceRequirement(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimalItem.GetCraftingResourceRequirement(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetCustomCosmeticBuffToGiveOwnerWhenEquipped()
    // endereco: casamento de bytes com a build de referencia
    UClass* GetCustomCosmeticBuffToGiveOwnerWhenEquipped() const
    {
        return NativeCall<UClass*>(this, "UPrimalItem.GetCustomCosmeticBuffToGiveOwnerWhenEquipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetCustomCosmeticDinoRiderOffset(bool,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCustomCosmeticDinoRiderOffset(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalItem.GetCustomCosmeticDinoRiderOffset(bool,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetCustomItemData(FName,FCustomItemData&)
    // endereco: casamento de bytes com a build de referencia
    bool GetCustomItemData(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "UPrimalItem.GetCustomItemData(FName,FCustomItemData&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetDataListEntryWidgetClass()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDataListEntryWidgetClass() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetDataListEntryWidgetClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetDisplayStringForContextMenuItem(FName&)
    // endereco: casamento de bytes com a build de referencia
    void GetDisplayStringForContextMenuItem(void* retorno, const FName& a0) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.GetDisplayStringForContextMenuItem(FName&)", retorno, const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetDisplayStringForContextMenuItem(void* retorno, FName* a0) const
    { GetDisplayStringForContextMenuItem(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetDurabilityPercentage()
    // endereco: casamento de bytes com a build de referencia
    float GetDurabilityPercentage() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetDurabilityPercentage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetEggHatchTimeRemaining(UWorld*,float)
    // endereco: casamento de bytes com a build de referencia
    float GetEggHatchTimeRemaining(void* a0, float a1) const
    {
        return NativeCall<float, void*, float>(this, "UPrimalItem.GetEggHatchTimeRemaining(UWorld*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetEngramRequirementItemClassOverride()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEngramRequirementItemClassOverride() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetEngramRequirementItemClassOverride()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetEngramRequirementLevel()
    // endereco: casamento de bytes com a build de referencia
    int GetEngramRequirementLevel() const
    {
        return NativeCall<int>(this, "UPrimalItem.GetEngramRequirementLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetEntryIcon(UObject*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UTexture2D* GetEntryIcon(void* a0, bool a1) const
    {
        return NativeCall<UTexture2D*, void*, bool>(this, "UPrimalItem.GetEntryIcon(UObject*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetEntryIconMaterial(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    UMaterialInterface* GetEntryIconMaterial(void* a0, bool a1) const
    {
        return NativeCall<UMaterialInterface*, void*, bool>(this, "UPrimalItem.GetEntryIconMaterial(UObject*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetEntryString()
    // endereco: casamento de bytes com a build de referencia
    void GetEntryString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetEntryString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetExplicitEntryIndexType(bool,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExplicitEntryIndexType(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalItem.GetExplicitEntryIndexType(bool,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetFinalTimeForFullRepair()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFinalTimeForFullRepair() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetFinalTimeForFullRepair()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetGiveItemWhenUsed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGiveItemWhenUsed() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetGiveItemWhenUsed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetHUDIconMaterial()
    // endereco: casamento de bytes com a build de referencia
    UMaterialInterface* GetHUDIconMaterial() const
    {
        return NativeCall<UMaterialInterface*>(this, "UPrimalItem.GetHUDIconMaterial()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetInstanceOverrideByValue_IsCursedItem()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstanceOverrideByValue_IsCursedItem() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetInstanceOverrideByValue_IsCursedItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetInstanceOverrideByValue_UseCustomContextMenuOptions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstanceOverrideByValue_UseCustomContextMenuOptions() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetInstanceOverrideByValue_UseCustomContextMenuOptions()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetInventoryIconDisplayText()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetInventoryIconDisplayText(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetInventoryIconDisplayText()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetInventoryIconDisplayTextSize()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetInventoryIconDisplayTextSize() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetInventoryIconDisplayTextSize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetInventoryIconDisplayText_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void GetInventoryIconDisplayText_Implementation(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetInventoryIconDisplayText_Implementation()", retorno);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalItem.GetItemAttachmentInfos(AActor*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetItemAttachmentInfos(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.GetItemAttachmentInfos(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetItemBytes(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetItemBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemColorID(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetItemColorID(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimalItem.GetItemColorID(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemColorIDFromDyeItemID(int)
    // endereco: casamento de bytes com a build de referencia
    int GetItemColorIDFromDyeItemID(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimalItem.GetItemColorIDFromDyeItemID(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetItemCustomColor(int,FLinearColor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemCustomColor(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalItem.GetItemCustomColor(int,FLinearColor&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemDescription(bool,AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetItemDescription(void* retorno, bool a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, bool, void*, bool>(this, "UPrimalItem.GetItemDescription(bool,AShooterPlayerController*,bool)", retorno, a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemDyeColors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemDyeColors() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetItemDyeColors()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemIcon(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetItemIcon(void* a0) const
    {
        return NativeCall<UTexture2D*, void*>(this, "UPrimalItem.GetItemIcon(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemName(bool,bool,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void GetItemName(void* retorno, bool a0, bool a1, void* a2) const
    {
        NativeCall<void, void*, bool, bool, void*>(this, "UPrimalItem.GetItemName(bool,bool,AShooterPlayerController*)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemNetInfo(bool)
    // endereco: casamento de bytes com a build de referencia
    void GetItemNetInfo(void* retorno, bool a0) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.GetItemNetInfo(bool)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemQualityColor()
    // endereco: cache_pdb_25090264
    void GetItemQualityColor(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetItemQualityColor()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemShortName()
    // endereco: casamento de bytes com a build de referencia
    void GetItemShortName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetItemShortName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemStatInfo(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetItemStatInfo(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalItem.GetItemStatInfo(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemStatModifier(EPrimalItemStat::Type)
    // endereco: casamento de bytes com a build de referencia
    float GetItemStatModifier(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalItem.GetItemStatModifier(EPrimalItemStat::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetItemStatModifierForTemplateItem(EPrimalItemStat::Type)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetItemStatModifierForTemplateItem(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalItem.GetItemStatModifierForTemplateItem(EPrimalItemStat::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemStatString(EPrimalItemStat::Type)
    // endereco: casamento de bytes com a build de referencia
    void GetItemStatString(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "UPrimalItem.GetItemStatString(EPrimalItemStat::Type)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemStatValues(int)
    // endereco: cache_pdb_25090264
    int GetItemStatValues(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimalItem.GetItemStatValues(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemStatsString()
    // endereco: casamento de bytes com a build de referencia
    void GetItemStatsString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetItemStatsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemSubtypeString()
    // endereco: casamento de bytes com a build de referencia
    void GetItemSubtypeString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetItemSubtypeString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemTrait(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    UObject* GetItemTrait(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "UPrimalItem.GetItemTrait(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetItemTraitModifier(FName,float&,TEnumAsByte<EItemTraitModiferType>&,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemTraitModifier(unsigned long long a0, void* a1, void* a2, int a3, bool a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, int, bool>(this, "UPrimalItem.GetItemTraitModifier(FName,float&,TEnumAsByte<EItemTraitModiferType>&,int,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetItemTypeColor()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetItemTypeColor() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetItemTypeColor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetItemTypeIcon()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetItemTypeIcon() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetItemTypeIcon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemTypeString()
    // endereco: casamento de bytes com a build de referencia
    void GetItemTypeString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetItemTypeString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetItemWeight(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    float GetItemWeight(bool a0, bool a1) const
    {
        return NativeCall<float, bool, bool>(this, "UPrimalItem.GetItemWeight(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetItemWeightForInventory(bool,bool,UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    float GetItemWeightForInventory(bool a0, bool a1, void* a2) const
    {
        return NativeCall<float, bool, bool, void*>(this, "UPrimalItem.GetItemWeightForInventory(bool,bool,UPrimalInventoryComponent*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetKeybindForContextMenuItem(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetKeybindForContextMenuItem(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.GetKeybindForContextMenuItem(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetKeybindForContextMenuItem(FName* a0) const
    { return GetKeybindForContextMenuItem(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetLocationPhysicsVolume(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetLocationPhysicsVolume(void* a0) const
    {
        return NativeCall<APhysicsVolume*, void*>(this, "UPrimalItem.GetLocationPhysicsVolume(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetMaxDurability()
    // endereco: cache_pdb_25090264
    float GetMaxDurability() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetMaxDurability()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetMaxItemQuantity(UObject*)
    // endereco: casamento de bytes com a build de referencia
    int GetMaxItemQuantity(void* a0) const
    {
        return NativeCall<int, void*>(this, "UPrimalItem.GetMaxItemQuantity(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetMaximumAdditionalCrafting(UPrimalInventoryComponent*,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    int GetMaximumAdditionalCrafting(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "UPrimalItem.GetMaximumAdditionalCrafting(UPrimalInventoryComponent*,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetMinimapMarkForItem(FMinimapMark&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMinimapMarkForItem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.GetMinimapMarkForItem(FMinimapMark&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetMinimapMarkForItemID(int,int,FMinimapMark&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMinimapMarkForItemID(int a0, int a1, void* a2) const
    {
        return NativeCall<void*, int, int, void*>(this, "UPrimalItem.GetMinimapMarkForItemID(int,int,FMinimapMark&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetMiscInfoFontScale()
    // endereco: casamento de bytes com a build de referencia
    float GetMiscInfoFontScale() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetMiscInfoFontScale()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetMiscInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetMiscInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetMiscInfoString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetNextRepairPercentage()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextRepairPercentage() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetNextRepairPercentage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetNextRepairSpeedMultiplier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextRepairSpeedMultiplier() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetNextRepairSpeedMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetOwnerActor()
    // endereco: casamento de bytes com a build de referencia
    AActor* GetOwnerActor() const
    {
        return NativeCall<AActor*>(this, "UPrimalItem.GetOwnerActor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetOwnerPlayer()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetOwnerPlayer() const
    {
        return NativeCall<UObject*>(this, "UPrimalItem.GetOwnerPlayer()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetOwningStructureID()
    // endereco: casamento de bytes com a build de referencia
    unsigned int GetOwningStructureID() const
    {
        return NativeCall<unsigned int>(this, "UPrimalItem.GetOwningStructureID()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetPlantedAsCropMultiuseEntries(APlayerController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlantedAsCropMultiuseEntries(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.GetPlantedAsCropMultiuseEntries(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetPrimaryColorName()
    // endereco: casamento de bytes com a build de referencia
    void GetPrimaryColorName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetPrimaryColorName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetProjectileType(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    UClass* GetProjectileType(void* a0) const
    {
        return NativeCall<UClass*, void*>(this, "UPrimalItem.GetProjectileType(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetRemainingCooldownTime()
    // endereco: casamento de bytes com a build de referencia
    float GetRemainingCooldownTime() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetRemainingCooldownTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetRepairResourceMultiplier(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRepairResourceMultiplier(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.GetRepairResourceMultiplier(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetRepairingPercent()
    // endereco: casamento de bytes com a build de referencia
    float GetRepairingPercent() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetRepairingPercent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetRepairingRequirements(UPrimalInventoryComponent*,bool,float,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRepairingRequirements(void* a0, bool a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, float, void*>(this, "UPrimalItem.GetRepairingRequirements(UPrimalInventoryComponent*,bool,float,APlayerController*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetRepairingRequirementsString(UPrimalInventoryComponent*,bool,float,APlayerControll
    // endereco: casamento de bytes com a build de referencia
    void GetRepairingRequirementsString(void* retorno, void* a0, bool a1, float a2, void* a3) const
    {
        NativeCall<void, void*, void*, bool, float, void*>(this, "UPrimalItem.GetRepairingRequirementsString(UPrimalInventoryComponent*,bool,float,APlayerController*)", retorno, a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetRequiresBobsTallTalesORTOFToCraft()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool GetRequiresBobsTallTalesORTOFToCraft() const
    {
        return NativeCall<bool>(this, "UPrimalItem.GetRequiresBobsTallTalesORTOFToCraft()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetRequiresTidesOfFortuneToCraft()
    // endereco: casamento de bytes com a build de referencia
    bool GetRequiresTidesOfFortuneToCraft() const
    {
        return NativeCall<bool>(this, "UPrimalItem.GetRequiresTidesOfFortuneToCraft()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.GetRole()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRole() const
    {
        return NativeCall<void*>(this, "UPrimalItem.GetRole()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetSortedCraftingRequirements(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSortedCraftingRequirements(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "UPrimalItem.GetSortedCraftingRequirements(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetSortedRepairingRequirements(bool,UPrimalInventoryComponent*,bool,float,APlayerCon
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSortedRepairingRequirements(bool a0, void* a1, bool a2, float a3, void* a4) const
    {
        return NativeCall<void*, bool, void*, bool, float, void*>(this, "UPrimalItem.GetSortedRepairingRequirements(bool,UPrimalInventoryComponent*,bool,float,APlayerController*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetSpoilingTime()
    // endereco: casamento de bytes com a build de referencia
    float GetSpoilingTime() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetSpoilingTime()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetTendingFailReason(APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetTendingFailReason(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.GetTendingFailReason(APlayerController*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetTimeToCraftBlueprint()
    // endereco: casamento de bytes com a build de referencia
    float GetTimeToCraftBlueprint() const
    {
        return NativeCall<float>(this, "UPrimalItem.GetTimeToCraftBlueprint()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetTimeUntilUploadAllowed(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    float GetTimeUntilUploadAllowed(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalItem.GetTimeUntilUploadAllowed(UWorld*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetUnderwearOverrideTag()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    unsigned long long GetUnderwearOverrideTag() const
    {
        return NativeCall<unsigned long long>(this, "UPrimalItem.GetUnderwearOverrideTag()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetUnreplicatedEggData(FUnreplicatedEggData&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1740+bytes40+grafo=6/6]]
    void GetUnreplicatedEggData(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.GetUnreplicatedEggData(FUnreplicatedEggData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    float GetUseItemAddCharacterStatusValue(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalItem.GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetWeaponAmmoOverrideItemCDO()
    // endereco: cache_pdb_25090264
    UObject* GetWeaponAmmoOverrideItemCDO() const
    {
        return NativeCall<UObject*>(this, "UPrimalItem.GetWeaponAmmoOverrideItemCDO()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.GetWeaponClipAmmo()
    // endereco: cache_pdb_25090264
    int GetWeaponClipAmmo() const
    {
        return NativeCall<int>(this, "UPrimalItem.GetWeaponClipAmmo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetWorld()
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UPrimalItem.GetWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.GetWorldHelper(UObject*)
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorldHelper(void* a0) const
    {
        return NativeCall<UWorld*, void*>(this, "UPrimalItem.GetWorldHelper(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.HandleShieldDamageBlocking(AShooterCharacter*,float,FDamageEvent&,AController*,AActo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleShieldDamageBlocking(void* a0, float a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, void*>(this, "UPrimalItem.HandleShieldDamageBlocking(AShooterCharacter*,float,FDamageEvent&,AController*,AActor*,UE::Math::TVector<double>)", a0, a1, a2, a3, a4, a5);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalItem.HandleShieldDamageBlocking_Implementation(AShooterCharacter*,float,FDamageEvent&,ACo
    // endereco: casamento de bytes com a build de referencia
    float HandleShieldDamageBlocking_Implementation(void* a0, float a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<float, void*, float, void*, void*, void*, void*>(this, "UPrimalItem.HandleShieldDamageBlocking_Implementation(AShooterCharacter*,float,FDamageEvent&,AController*,AActor*,UE::Math::TVector<double>)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.HasAvailableCustomCosmetics()
    // endereco: casamento de bytes com a build de referencia
    bool HasAvailableCustomCosmetics() const
    {
        return NativeCall<bool>(this, "UPrimalItem.HasAvailableCustomCosmetics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.HasBuffToGiveOwnerWhenEquipped()
    // endereco: casamento de bytes com a build de referencia
    bool HasBuffToGiveOwnerWhenEquipped() const
    {
        return NativeCall<bool>(this, "UPrimalItem.HasBuffToGiveOwnerWhenEquipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.HasCharacterSkinApplied()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool HasCharacterSkinApplied() const
    {
        return NativeCall<bool>(this, "UPrimalItem.HasCharacterSkinApplied()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.HasCustomItemData(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool HasCustomItemData(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalItem.HasCustomItemData(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.HasItemTrait(FName)
    // endereco: casamento de bytes com a build de referencia
    bool HasItemTrait(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalItem.HasItemTrait(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IncrementItemQuantity(int,bool,bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    int IncrementItemQuantity(int a0, bool a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    {
        return NativeCall<int, int, bool, bool, bool, bool, bool, bool>(this, "UPrimalItem.IncrementItemQuantity(int,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.InitFromNetInfo(FItemNetInfo&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitFromNetInfo(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.InitFromNetInfo(FItemNetInfo&,UWorld*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.InitItemIcon()
    // endereco: cache_pdb_25090264
    BrzPonteiro InitItemIcon() const
    {
        return NativeCall<void*>(this, "UPrimalItem.InitItemIcon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.InitItemTraitsFromCustomData()
    // endereco: casamento de bytes com a build de referencia
    void InitItemTraitsFromCustomData() const
    {
        NativeCall<void>(this, "UPrimalItem.InitItemTraitsFromCustomData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.InitNewItem(float,UPrimalInventoryComponent*,float,float)
    // endereco: casamento de bytes com a build de referencia
    void InitNewItem(float a0, void* a1, float a2, float a3) const
    {
        NativeCall<void, float, void*, float, float>(this, "UPrimalItem.InitNewItem(float,UPrimalInventoryComponent*,float,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.InitializeItem(bool,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    void InitializeItem(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "UPrimalItem.InitializeItem(bool,UWorld*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.InventoryLoadedFromSaveGame()
    // endereco: casamento de bytes com a build de referencia
    void InventoryLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "UPrimalItem.InventoryLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.InventoryRefreshCheckItem()
    // endereco: casamento de bytes com a build de referencia
    void InventoryRefreshCheckItem() const
    {
        NativeCall<void>(this, "UPrimalItem.InventoryRefreshCheckItem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsAutoUnlocked()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsAutoUnlocked() const
    {
        return NativeCall<void*>(this, "UPrimalItem.IsAutoUnlocked()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsBlueprintDeprecated(UWorld*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsBlueprintDeprecated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.IsBlueprintDeprecated(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsBroken()
    // endereco: casamento de bytes com a build de referencia
    bool IsBroken() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsBroken()");
    }

    // jogo_confirmou_dump
    //   UPrimalItem.IsCooldownReadyForUse()
    // endereco: casamento de bytes com a build de referencia
    bool IsCooldownReadyForUse() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsCooldownReadyForUse()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsCustomContextMenuItemEnabled(FName&)
    // endereco: casamento de bytes com a build de referencia
    bool IsCustomContextMenuItemEnabled(const FName& a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.IsCustomContextMenuItemEnabled(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool IsCustomContextMenuItemEnabled(FName* a0) const
    { return IsCustomContextMenuItemEnabled(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsDeprecated(UWorld*)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsDeprecated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.IsDeprecated(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsDyed()
    // endereco: cache_pdb_25090264
    bool IsDyed() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsDyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsEquippedAccessory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsEquippedAccessory() const
    {
        return NativeCall<void*>(this, "UPrimalItem.IsEquippedAccessory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.IsFuelItemForOwner()
    // endereco: casamento de bytes com a build de referencia
    bool IsFuelItemForOwner() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsFuelItemForOwner()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsItemSkin(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsItemSkin(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimalItem.IsItemSkin(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.IsItemTraitEffectPrevented(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsItemTraitEffectPrevented(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalItem.IsItemTraitEffectPrevented(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsOwnerInNoPainWater()
    // endereco: casamento de bytes com a build de referencia
    bool IsOwnerInNoPainWater() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsOwnerInNoPainWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsOwnerInWater()
    // endereco: casamento de bytes com a build de referencia
    bool IsOwnerInWater() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsOwnerInWater()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsPreventUploadIncludingLiveTuning()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsPreventUploadIncludingLiveTuning() const
    {
        return NativeCall<void*>(this, "UPrimalItem.IsPreventUploadIncludingLiveTuning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsReadyToUpload(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    bool IsReadyToUpload(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalItem.IsReadyToUpload(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsSharedBlueprint()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsSharedBlueprint() const
    {
        return NativeCall<void*>(this, "UPrimalItem.IsSharedBlueprint()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.IsUnlockedCosmetic()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsUnlockedCosmetic() const
    {
        return NativeCall<void*>(this, "UPrimalItem.IsUnlockedCosmetic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsUsableConsumable()
    // endereco: casamento de bytes com a build de referencia
    bool IsUsableConsumable() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsUsableConsumable()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.IsValidForCrafting()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidForCrafting() const
    {
        return NativeCall<bool>(this, "UPrimalItem.IsValidForCrafting()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.IsValidItemForCosmeticAuthSettings(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidItemForCosmeticAuthSettings(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UPrimalItem.IsValidItemForCosmeticAuthSettings(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.LocalUse(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void LocalUse(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.LocalUse(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void LocalUseItemOntoItem(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.MakeRepairingRequirementsString(UPrimalInventoryComponent*,TArray<FCraftingResourceR
    // endereco: casamento de bytes com a build de referencia
    static void MakeRepairingRequirementsString(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalItem.MakeRepairingRequirementsString(UPrimalInventoryComponent*,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.MeetBlueprintCraftingRequirements(UPrimalInventoryComponent*,int,AShooterPlayerContr
    // endereco: casamento de bytes com a build de referencia
    bool MeetBlueprintCraftingRequirements(void* a0, int a1, void* a2, bool a3, bool a4, bool a5) const
    {
        return NativeCall<bool, void*, int, void*, bool, bool, bool>(this, "UPrimalItem.MeetBlueprintCraftingRequirements(UPrimalInventoryComponent*,int,AShooterPlayerController*,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.MeetRepairingRequirements(UPrimalInventoryComponent*,bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    bool MeetRepairingRequirements(void* a0, bool a1, bool a2, float a3) const
    {
        return NativeCall<bool, void*, bool, bool, float>(this, "UPrimalItem.MeetRepairingRequirements(UPrimalInventoryComponent*,bool,bool,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.MergeCustomItemDatas(TArray<FCustomItemData,TSizedDefaultAllocator<32>>&,TArray<FCus
    // endereco: casamento de bytes com a build de referencia
    static void MergeCustomItemDatas(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalItem.MergeCustomItemDatas(TArray<FCustomItemData,TSizedDefaultAllocator<32>>&,TArray<FCustomItemData,TSizedDefaultAllocator<32>>&)", retorno, a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.ModifyFolderPath(TArray<FString,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifyFolderPath(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalItem.ModifyFolderPath(TArray<FString,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.NotifyEditText(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyEditText(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.NotifyEditText(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.OnItemTraitEffectActivated(FName,float,FBPNetExecParams&)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnItemTraitEffectActivated(unsigned long long a0, float a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, float, void*>(this, "UPrimalItem.OnItemTraitEffectActivated(FName,float,FBPNetExecParams&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.OnModDownloadComplete(bool,FInstalledMod&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnModDownloadComplete(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalItem.OnModDownloadComplete(bool,FInstalledMod&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.OnUsedAsCuddleFood(APrimalDinoCharacter*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void OnUsedAsCuddleFood(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.OnUsedAsCuddleFood(APrimalDinoCharacter*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.OnVersionChange(bool&,UWorld*,AShooterGameMode*,int)
    // endereco: cache_pdb_25090264
    void OnVersionChange(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "UPrimalItem.OnVersionChange(bool&,UWorld*,AShooterGameMode*,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.OverrideAnimMontage(UAnimMontage*&,float,FName,bool,bool,float,float,bool,APrimalCha
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideAnimMontage(void* a0, float a1, unsigned long long a2, bool a3, bool a4, float a5, float a6, bool a7, void* a8) const
    {
        return NativeCall<void*, void*, float, unsigned long long, bool, bool, float, float, bool, void*>(this, "UPrimalItem.OverrideAnimMontage(UAnimMontage*&,float,FName,bool,bool,float,float,bool,APrimalCharacter*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.OverrideCrouchingSound(USoundBase*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    USoundBase* OverrideCrouchingSound(void* a0, bool a1, int a2) const
    {
        return NativeCall<USoundBase*, void*, bool, int>(this, "UPrimalItem.OverrideCrouchingSound(USoundBase*,bool,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.OverrideCustomCosmeticEmoteDescription_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideCustomCosmeticEmoteDescription_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalItem.OverrideCustomCosmeticEmoteDescription_Implementation(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.OverrideCustomCosmeticEmoteHideWeapon(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=138+chamadores=3]]
    bool OverrideCustomCosmeticEmoteHideWeapon(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalItem.OverrideCustomCosmeticEmoteHideWeapon(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.OverrideCustomCosmeticEmoteIcon_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideCustomCosmeticEmoteIcon_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalItem.OverrideCustomCosmeticEmoteIcon_Implementation(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.OverrideItemRating(float)
    // endereco: casamento de bytes com a build de referencia
    void OverrideItemRating(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalItem.OverrideItemRating(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.PickupAlertDinos(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PickupAlertDinos(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.PickupAlertDinos(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.PlantedAsCropTryMultiUse(APlayerController*,int,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool PlantedAsCropTryMultiUse(void* a0, int a1, void* a2) const
    {
        return NativeCall<bool, void*, int, void*>(this, "UPrimalItem.PlantedAsCropTryMultiUse(APlayerController*,int,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.PostInitProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    BrzPonteiro PostInitProperties() const
    {
        return NativeCall<void*>(this, "UPrimalItem.PostInitProperties()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UPrimalItem.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.PreemptiveRequestLoad()
    // endereco: casamento de bytes com a build de referencia
    bool PreemptiveRequestLoad() const
    {
        return NativeCall<bool>(this, "UPrimalItem.PreemptiveRequestLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "UPrimalItem.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool ProcessEditText(void* a0, FString* a1, bool a2) const
    { return ProcessEditText(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RecalcSpoilingTime(double,float,UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    void RecalcSpoilingTime(double a0, float a1, void* a2) const
    {
        NativeCall<void, double, float, void*>(this, "UPrimalItem.RecalcSpoilingTime(double,float,UPrimalInventoryComponent*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RefreshAttachments(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshAttachments(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "UPrimalItem.RefreshAttachments(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveAttachments(AActor*,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void RemoveAttachments(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "UPrimalItem.RemoveAttachments(AActor*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveClipAmmo(bool)
    // endereco: casamento de bytes com a build de referencia
    void RemoveClipAmmo(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.RemoveClipAmmo(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveCustomItemData(FName)
    // endereco: casamento de bytes com a build de referencia
    void RemoveCustomItemData(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UPrimalItem.RemoveCustomItemData(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveFromSlot(bool,bool)
    // endereco: cache_pdb_25090264
    void RemoveFromSlot(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimalItem.RemoveFromSlot(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.RemoveFromWorldItemMap()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro RemoveFromWorldItemMap() const
    {
        return NativeCall<void*>(this, "UPrimalItem.RemoveFromWorldItemMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveItemFromArkTributeInventory()
    // endereco: casamento de bytes com a build de referencia
    bool RemoveItemFromArkTributeInventory() const
    {
        return NativeCall<bool>(this, "UPrimalItem.RemoveItemFromArkTributeInventory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveItemFromInventory(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool RemoveItemFromInventory(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "UPrimalItem.RemoveItemFromInventory(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.RemoveItemTrait(TSubclassOf<UPrimalItemTrait>,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveItemTrait(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "UPrimalItem.RemoveItemTrait(TSubclassOf<UPrimalItemTrait>,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemoveWeaponAccessory()
    // endereco: casamento de bytes com a build de referencia
    void RemoveWeaponAccessory() const
    {
        NativeCall<void>(this, "UPrimalItem.RemoveWeaponAccessory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RemovedSkinFromItem(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    void RemovedSkinFromItem(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPrimalItem.RemovedSkinFromItem(UPrimalItem*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.RepairItem(bool,float,float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RepairItem(bool a0, float a1, float a2, bool a3, bool a4) const
    {
        NativeCall<void, bool, float, float, bool, bool>(this, "UPrimalItem.RepairItem(bool,float,float,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.ResolveAccessoryOverrideSlot(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveAccessoryOverrideSlot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.ResolveAccessoryOverrideSlot(UPrimalInventoryComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SelectedCustomContextMenuItem(FName&,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SelectedCustomContextMenuItem(const FName& a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.SelectedCustomContextMenuItem(FName&,AShooterPlayerController*)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SelectedCustomContextMenuItem(FName* a0, void* a1) const
    { SelectedCustomContextMenuItem(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.Serialize(FArchive&)", a0);
    }

    // jogo_confirmou_dump
    //   UPrimalItem.ServerRemoveItemSkin()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerRemoveItemSkin() const
    {
        NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkin()");
    }

    // jogo_confirmou_dump
    //   UPrimalItem.ServerRemoveItemSkinOnly()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=1379+grafo=19/19]]
    void ServerRemoveItemSkinOnly() const
    {
        NativeCall<void>(this, "UPrimalItem.ServerRemoveItemSkinOnly()");
    }

    // jogo_confirmou_dump
    //   UPrimalItem.ServerRemoveWeaponAccessoryOnly()
    // endereco: casamento de bytes com a build de referencia
    void ServerRemoveWeaponAccessoryOnly() const
    {
        NativeCall<void>(this, "UPrimalItem.ServerRemoveWeaponAccessoryOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ServerSendItemExecCommandToEveryone(FName,FBPNetExecParams&,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSendItemExecCommandToEveryone(unsigned long long a0, void* a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, unsigned long long, void*, bool, bool, bool>(this, "UPrimalItem.ServerSendItemExecCommandToEveryone(FName,FBPNetExecParams&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.ServerSendItemExecCommandToPlayer(AShooterPlayerController*,FName,FBPNetExecParams&,
    // endereco: casamento de bytes com a build de referencia
    void ServerSendItemExecCommandToPlayer(void* a0, unsigned long long a1, void* a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, unsigned long long, void*, bool, bool, bool>(this, "UPrimalItem.ServerSendItemExecCommandToPlayer(AShooterPlayerController*,FName,FBPNetExecParams&,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ServerUpdatedWeaponClipAmmo()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ServerUpdatedWeaponClipAmmo() const
    {
        NativeCall<void>(this, "UPrimalItem.ServerUpdatedWeaponClipAmmo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.SetAssociatedDinoID(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetAssociatedDinoID(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.SetAssociatedDinoID(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetAttachedMeshesMaterialScalarParamValue(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void SetAttachedMeshesMaterialScalarParamValue(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UPrimalItem.SetAttachedMeshesMaterialScalarParamValue(FName,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.SetAttachmentVisibility(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetAttachmentVisibility(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.SetAttachmentVisibility(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.SetCustomColorParams(UMaterialInstanceDynamic*,FLinearColor&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCustomColorParams(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalItem.SetCustomColorParams(UMaterialInstanceDynamic*,FLinearColor&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.SetCustomColorParams(UPrimalItem*,UMaterialInstanceDynamic*,FLinearColor&,int)
    // endereco: thunk
    BrzPonteiro SetCustomColorParams(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UPrimalItem.SetCustomColorParams(UPrimalItem*,UMaterialInstanceDynamic*,FLinearColor&,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetCustomItemData(FCustomItemData&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=17/17]]
    void SetCustomItemData(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.SetCustomItemData(FCustomItemData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetEngramBlueprint()
    // endereco: cache_pdb_25090264
    void SetEngramBlueprint() const
    {
        NativeCall<void>(this, "UPrimalItem.SetEngramBlueprint()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetFirstPersonMasterPoseComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.SetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.SetItemColors(TArray<int,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetItemColors(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem.SetItemColors(TArray<int,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.SetItemStatInfo(int,FItemStatInfo&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SetItemStatInfo(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalItem.SetItemStatInfo(int,FItemStatInfo&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.SetItemStatValues(int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetItemStatValues(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UPrimalItem.SetItemStatValues(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetOwnerNoSee(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetOwnerNoSee(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimalItem.SetOwnerNoSee(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetQuantity(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetQuantity(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "UPrimalItem.SetQuantity(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SetUnreplicatedEggData(FUnreplicatedEggData&)
    // endereco: casamento de bytes com a build de referencia
    void SetUnreplicatedEggData(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalItem.SetUnreplicatedEggData(FUnreplicatedEggData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ShouldAlwaysShowInFolder(int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldAlwaysShowInFolder(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "UPrimalItem.ShouldAlwaysShowInFolder(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ShouldCropSpawnedCreatureGetTamingEffectivenessLevels()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldCropSpawnedCreatureGetTamingEffectivenessLevels() const
    {
        return NativeCall<bool>(this, "UPrimalItem.ShouldCropSpawnedCreatureGetTamingEffectivenessLevels()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ShouldDestroyOnVersionChange(AShooterGameMode*,int)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDestroyOnVersionChange(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "UPrimalItem.ShouldDestroyOnVersionChange(AShooterGameMode*,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ShouldMuteExtraEquipmentSounds()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldMuteExtraEquipmentSounds() const
    {
        return NativeCall<bool>(this, "UPrimalItem.ShouldMuteExtraEquipmentSounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.ShouldUseCustomRepairPercentage()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldUseCustomRepairPercentage() const
    {
        return NativeCall<void*>(this, "UPrimalItem.ShouldUseCustomRepairPercentage()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.ShowHUDNotificationForAdd()
    // endereco: casamento de bytes com a build de referencia
    void ShowHUDNotificationForAdd() const
    {
        NativeCall<void>(this, "UPrimalItem.ShowHUDNotificationForAdd()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.SkinEquippedBlueprintTick(UPrimalItem*,float)
    // endereco: casamento de bytes com a build de referencia
    void SkinEquippedBlueprintTick(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "UPrimalItem.SkinEquippedBlueprintTick(UPrimalItem*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.SlottedTick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54]]
    void SlottedTick(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalItem.SlottedTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.StaticGetColorForItemColorID(int)
    // endereco: casamento de bytes com a build de referencia
    static void StaticGetColorForItemColorID(void* retorno, int a0)
    {
        NativeCall<void, void*, int>(nullptr, "UPrimalItem.StaticGetColorForItemColorID(int)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.StaticGetColorForItemColorIDFromDyeList(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticGetColorForItemColorIDFromDyeList(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalItem.StaticGetColorForItemColorIDFromDyeList(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.StaticGetDinoColorSetIndexForItemColorIDFromDyeList(int)
    // endereco: casamento de bytes com a build de referencia
    static int StaticGetDinoColorSetIndexForItemColorIDFromDyeList(int a0)
    {
        return NativeCall<int, int>(nullptr, "UPrimalItem.StaticGetDinoColorSetIndexForItemColorIDFromDyeList(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.StaticGetItemNameAndIcon(TSubclassOf<UPrimalItem>,FString&,UTexture2D*&,bool,AShoote
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticGetItemNameAndIcon(void* a0, const FString& a1, void* a2, bool a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, bool, void*>(this, "UPrimalItem.StaticGetItemNameAndIcon(TSubclassOf<UPrimalItem>,FString&,UTexture2D*&,bool,AShooterPlayerController*)", a0, const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StaticGetItemNameAndIcon(void* a0, FString* a1, void* a2, bool a3, void* a4) const
    { return StaticGetItemNameAndIcon(a0, *a1, a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.StaticGetSortedIndexArrayForCraftingRepairingResources(TArray<FCraftingResourceRequi
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticGetSortedIndexArrayForCraftingRepairingResources(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalItem.StaticGetSortedIndexArrayForCraftingRepairingResources(TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.StaticRegisterNativesUPrimalItem()
    // endereco: casamento de bytes com a build de referencia
    static void StaticRegisterNativesUPrimalItem()
    {
        NativeCall<void>(nullptr, "UPrimalItem.StaticRegisterNativesUPrimalItem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.StopCraftingRepairing(bool)
    // endereco: casamento de bytes com a build de referencia
    void StopCraftingRepairing(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.StopCraftingRepairing(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.TickCraftingItem(float,AShooterGameState*)
    // endereco: casamento de bytes com a build de referencia
    void TickCraftingItem(float a0, void* a1) const
    {
        NativeCall<void, float, void*>(this, "UPrimalItem.TickCraftingItem(float,AShooterGameState*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.TryApplyCustomCosmetic(__int64&,int&,FCustomCosmeticAdditionalSettings&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryApplyCustomCosmetic(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalItem.TryApplyCustomCosmetic(__int64&,int&,FCustomCosmeticAdditionalSettings&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.UnequipWeapon(bool)
    // endereco: casamento de bytes com a build de referencia
    void UnequipWeapon(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.UnequipWeapon(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.UnequippedItem()
    // endereco: casamento de bytes com a build de referencia
    void UnequippedItem() const
    {
        NativeCall<void>(this, "UPrimalItem.UnequippedItem()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.UnequippedWeapon()
    // endereco: casamento de bytes com a build de referencia
    void UnequippedWeapon() const
    {
        NativeCall<void>(this, "UPrimalItem.UnequippedWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.UpdatedItem(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdatedItem(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UPrimalItem.UpdatedItem(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.Use(bool)
    // endereco: casamento de bytes com a build de referencia
    void Use(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalItem.Use(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.UseItemOntoItem(UPrimalItem*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=10/10]]
    bool UseItemOntoItem(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "UPrimalItem.UseItemOntoItem(UPrimalItem*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.Used(UPrimalItem*,int)
    // endereco: casamento de bytes com a build de referencia
    void Used(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalItem.Used(UPrimalItem*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.UsesDurability()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool UsesDurability() const
    {
        return NativeCall<bool>(this, "UPrimalItem.UsesDurability()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalItem.WantsToOverrideGender(bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    void WantsToOverrideGender(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalItem.WantsToOverrideGender(bool&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem.WantsToOverrideGender_Implementation(bool&,bool&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro WantsToOverrideGender_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem.WantsToOverrideGender_Implementation(bool&,bool&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalItem.WantsToUseCustomCosmeticEmote(FName)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=138+chamadores=4]]
    bool WantsToUseCustomCosmeticEmote(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalItem.WantsToUseCustomCosmeticEmote(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalItem.calcResourceQuantityRequired(TSubclassOf<UPrimalItem>,float,UPrimalInventoryComponen
    // endereco: casamento de bytes com a build de referencia
    unsigned short calcResourceQuantityRequired(void* a0, float a1, void* a2, bool a3) const
    {
        return NativeCall<unsigned short, void*, float, void*, bool>(this, "UPrimalItem.calcResourceQuantityRequired(TSubclassOf<UPrimalItem>,float,UPrimalInventoryComponent*,bool)", a0, a1, a2, a3);
    }

    // ── SEM ENDERECO NESTA BUILD: o ajudante abaixo responde por elas ──
    //    UPrimalItem.GetItemQuantity()

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.AccessoryActivatedIconOverrideJIT")); }
    //  no cache antigo este campo se chamava AccessoryActivatedIconOverride_DEPRECATED.
    //  nesta build ele e' `AccessoryActivatedIconOverride` — resolve por NOME.
    BrzCampoPonteiro AccessoryActivatedIconOverride_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.AccessoryActivatedIconOverride")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.AllowClassesToBeUsedAsParentSkin"); }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.AlternateItemIconBelowDurabilityValue"); }
    //  no cache antigo este campo se chamava AlternateItemIconBelowDurability_DEPRECATED.
    //  nesta build ele e' `AlternateItemIconBelowDurability` — resolve por NOME.
    BrzCampoPonteiro AlternateItemIconBelowDurability_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.AlternateItemIconBelowDurability")); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.BlueprintBackgroundOverrideTextureJIT")); }
    //  no cache antigo este campo se chamava BlueprintBackgroundOverrideTexture_DEPRECATED.
    //  nesta build ele e' `BlueprintBackgroundOverrideTexture` — resolve por NOME.
    BrzCampoPonteiro BlueprintBackgroundOverrideTexture_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.BlueprintBackgroundOverrideTexture")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.BrokenIconJIT")); }
    //  no cache antigo este campo se chamava BrokenIcon_DEPRECATED.
    //  nesta build ele e' `BrokenIcon` — resolve por NOME.
    BrzCampoPonteiro BrokenIcon_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.BrokenIcon")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.CachedStructuresToBuild"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSpoilingTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x9A0; confianca alta)
    double& ClusterSpoilingTimeUTCField() const
    { return BrzCampoAncorado<double>(this, "LastSpoilingTime", 8); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.CostumeDinoSaddleOverrideMeshMap")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyItemTraits` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3E0; confianca alta)
    void*& CostumeDinoSaddleOverrideRefsField() const
    { return BrzCampoAncorado<void*>(this, "MyItemTraits", 16); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.CraftingRequiresInventoryComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WheelItemsAmmo` +16, medido na build 25090264
    //  (offset absoluto medido: 0x330; confianca alta)
    TArray<void*>& CraftingResourceRequirementsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "WheelItemsAmmo", 16); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.CustomBrokenOverlayIconJIT")); }
    //  no cache antigo este campo se chamava CustomBrokenOverlayIcon_DEPRECATED.
    //  nesta build ele e' `CustomBrokenOverlayIcon` — resolve por NOME.
    BrzCampoPonteiro CustomBrokenOverlayIcon_DEPRECATEDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.CustomBrokenOverlayIcon")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityStringShort"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActorClassAttachmentInfos` +24, medido na build 25090264
    //  (offset absoluto medido: 0x240; confianca alta)
    TArray<void*>& DynamicItemAttachmentInfosField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "ActorClassAttachmentInfos", 24); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.EggTamedIneffectivenessModifier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomCosmeticAuthVars` +88, medido na build 25090264
    //  (offset absoluto medido: 0x798; confianca media)
    void*& EquipAnimationTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "CustomCosmeticAuthVars", 88); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BlueprintBackgroundOverrideTexture` +32, medido na build 25090264
    //  (offset absoluto medido: 0x8D8; confianca alta)
    UTexture2D*& FPVHandsMeshTextureMaskField() const
    { return BrzCampoAncorado<UTexture2D*>(this, "BlueprintBackgroundOverrideTexture", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureToBuildIndex` +20, medido na build 25090264
    //  (offset absoluto medido: 0xA74; confianca alta)
    int& FPVHandsMeshTextureMaskMaterialIndexField() const
    { return BrzCampoAncorado<int>(this, "StructureToBuildIndex", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureToBuildIndex` +24, medido na build 25090264
    //  (offset absoluto medido: 0xA78; confianca alta)
    int& FPVHandsMeshTextureMaskMaterialIndex2Field() const
    { return BrzCampoAncorado<int>(this, "StructureToBuildIndex", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CrafterTribeName` +32, medido na build 25090264
    //  (offset absoluto medido: 0x620; confianca alta)
    FName& FPVHandsMeshTextureMaskParamNameField() const
    { return BrzCampoAncorado<FName>(this, "CrafterTribeName", 32); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem.HUDIconMaterial"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActorClassAttachmentInfos` +16, medido na build 25090264
    //  (offset absoluto medido: 0x238; confianca alta)
    void*& ItemAttachmentInfosField() const
    { return BrzCampoAncorado<void*>(this, "ActorClassAttachmentInfos", 16); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.ItemIconMaterialParent"); }
    //  no cache antigo este campo se chamava ItemIcon_DEPRECATED.
    //  nesta build ele e' `ItemIcon` — resolve por NOME.
    UTexture2D*& ItemIcon_DEPRECATEDField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.ItemIcon"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.LastAutoDurabilityDecreaseTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CropMaxFruits` +4, medido na build 25090264
    //  (offset absoluto medido: 0xA88; confianca alta)
    int& LastCalculatedTotalAmmoInvUpdatedFrameField() const
    { return BrzCampoAncorado<int>(this, "CropMaxFruits", 4); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.LastEquippedReduceDurabilityTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastEquippedReduceDurabilityTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x9B0; confianca alta)
    double& LastItemAdditionTimeField() const
    { return BrzCampoAncorado<double>(this, "LastEquippedReduceDurabilityTime", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastUseTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x988; confianca alta)
    double& LastLocalUseTimeField() const
    { return BrzCampoAncorado<double>(this, "LastUseTime", 8); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.MyItemType"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.OnlyUsableOnSpecificClasses"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BlueprintBackgroundOverrideTexture` +24, medido na build 25090264
    //  (offset absoluto medido: 0x8D0; confianca alta)
    void*& OriginalGenderPlayerMeshNoItemDefaultTextureMaskField() const
    { return BrzCampoAncorado<void*>(this, "BlueprintBackgroundOverrideTexture", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureToBuildIndex` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA70; confianca alta)
    void*& OriginalGenderPlayerMeshTextureMaskMaterialIndexAltField() const
    { return BrzCampoAncorado<void*>(this, "StructureToBuildIndex", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureToBuildIndex` +12, medido na build 25090264
    //  (offset absoluto medido: 0xA6C; confianca alta)
    void*& OriginalGenderPlayerMeshTextureMaskMaterialIndexNewField() const
    { return BrzCampoAncorado<void*>(this, "StructureToBuildIndex", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CrafterTribeName` +24, medido na build 25090264
    //  (offset absoluto medido: 0x618; confianca alta)
    void*& OriginalGenderPlayerMeshTextureMaskParamNameField() const
    { return BrzCampoAncorado<void*>(this, "CrafterTribeName", 24); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.PendingSkinRefund")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BlueprintBackgroundOverrideTexture` +16, medido na build 25090264
    //  (offset absoluto medido: 0x8C8; confianca alta)
    UTexture2D*& PlayerMeshNoItemDefaultTextureMaskField() const
    { return BrzCampoAncorado<UTexture2D*>(this, "BlueprintBackgroundOverrideTexture", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BlueprintBackgroundOverrideTexture` +8, medido na build 25090264
    //  (offset absoluto medido: 0x8C0; confianca alta)
    UTexture2D*& PlayerMeshTextureMaskField() const
    { return BrzCampoAncorado<UTexture2D*>(this, "BlueprintBackgroundOverrideTexture", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureToBuildIndex` +8, medido na build 25090264
    //  (offset absoluto medido: 0xA68; confianca alta)
    int& PlayerMeshTextureMaskMaterialIndexAltField() const
    { return BrzCampoAncorado<int>(this, "StructureToBuildIndex", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureToBuildIndex` +4, medido na build 25090264
    //  (offset absoluto medido: 0xA64; confianca alta)
    int& PlayerMeshTextureMaskMaterialIndexNewField() const
    { return BrzCampoAncorado<int>(this, "StructureToBuildIndex", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CrafterTribeName` +16, medido na build 25090264
    //  (offset absoluto medido: 0x610; confianca alta)
    FName& PlayerMeshTextureMaskParamNameField() const
    { return BrzCampoAncorado<FName>(this, "CrafterTribeName", 16); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.RandomColorSet")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.SavedDurability"); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.TempSlotIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastEquippedReduceDurabilityTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x9B8; confianca alta)
    double& UploadEarliestValidTimeField() const
    { return BrzCampoAncorado<double>(this, "LastEquippedReduceDurabilityTime", 16); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.UseRequiresOwnerActorClasses"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BlueprintBackgroundOverrideTexture` +40, medido na build 25090264
    //  (offset absoluto medido: 0x8E0; confianca media)
    UPrimalItem*& WeaponAmmoOverrideItemCDOField() const
    { return BrzCampoAncorado<UPrimalItem*>(this, "BlueprintBackgroundOverrideTexture", 40); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.WeaponTemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CropMaxFruits` +8, medido na build 25090264
    //  (offset absoluto medido: 0xA8C; confianca alta)
    int& WeaponTotalAmmoField() const
    { return BrzCampoAncorado<int>(this, "CropMaxFruits", 8); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem.WidgetCustomBrokenOverlayStyleBrush")); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem.bNetInfoFromClient"); }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem.bUseItemColor" }; }
    BitFieldValue<bool, unsigned __int32> bCanBuildStructures()
    { return { (void*)this, "bCanBuildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEquppingItem()
    { return { (void*)this, "bAllowEquppingItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEquipOnTaxidermyBase()
    { return { (void*)this, "bPreventEquipOnTaxidermyBase" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInventoryItem()
    { return { (void*)this, "bAllowInventoryItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bEquippedItem()
    { return { (void*)this, "bEquippedItem" }; }
    BitFieldValue<bool, unsigned __int32> bCanSlot()
    { return { (void*)this, "bCanSlot" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemColors()
    { return { (void*)this, "bUseItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bShowTooltipColors()
    { return { (void*)this, "bShowTooltipColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitItemColors()
    { return { (void*)this, "bUseBPInitItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshOnDyeUsed()
    { return { (void*)this, "bRefreshOnDyeUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostAddBuffToGiveOwnerCharacter()
    { return { (void*)this, "bUseBPPostAddBuffToGiveOwnerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bForceDediAttachments()
    { return { (void*)this, "bForceDediAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomColors()
    { return { (void*)this, "bAllowCustomColors" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowRemovalWhenDead()
    { return { (void*)this, "bForceAllowRemovalWhenDead" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCraftBlueprint()
    { return { (void*)this, "bAutoCraftBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay()
    { return { (void*)this, "bHideFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemStats()
    { return { (void*)this, "bUseItemStats" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorWhenRiding()
    { return { (void*)this, "bUseSpawnActorWhenRiding" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActor()
    { return { (void*)this, "bUseSpawnActor" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDefaultCharacterAttachment()
    { return { (void*)this, "bAllowDefaultCharacterAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemDurability()
    { return { (void*)this, "bUseItemDurability" }; }
    BitFieldValue<bool, unsigned __int32> bNewWeaponAutoFillClipAmmo()
    { return { (void*)this, "bNewWeaponAutoFillClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyBrokenItem()
    { return { (void*)this, "bDestroyBrokenItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsMisssionItem()
    { return { (void*)this, "bIsMisssionItem" }; }
    BitFieldValue<bool, unsigned __int32> bThrowOnHotKeyUse()
    { return { (void*)this, "bThrowOnHotKeyUse" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlueprint()
    { return { (void*)this, "bIsBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeBlueprint()
    { return { (void*)this, "bCanBeBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUpload()
    { return { (void*)this, "bPreventUpload" }; }
    BitFieldValue<bool, unsigned __int32> bIsEngram()
    { return { (void*)this, "bIsEngram" }; }
    BitFieldValue<bool, unsigned __int32> bIsCustomRecipe()
    { return { (void*)this, "bIsCustomRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoodRecipe()
    { return { (void*)this, "bIsFoodRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bTekItem()
    { return { (void*)this, "bTekItem" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseInInventory()
    { return { (void*)this, "bAllowUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteUseInInventory()
    { return { (void*)this, "bAllowRemoteUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintEquippedNotifications()
    { return { (void*)this, "bUseBlueprintEquippedNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bUseInWaterRestoreDurability()
    { return { (void*)this, "bUseInWaterRestoreDurability" }; }
    BitFieldValue<bool, unsigned __int32> bValidCraftingResource()
    { return { (void*)this, "bValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupHUDIconMaterial()
    { return { (void*)this, "bUseBPSetupHUDIconMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_ScorchedEarth()
    { return { (void*)this, "bEquipRequiresDLC_ScorchedEarth" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Aberration()
    { return { (void*)this, "bEquipRequiresDLC_Aberration" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Extinction()
    { return { (void*)this, "bEquipRequiresDLC_Extinction" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Genesis()
    { return { (void*)this, "bEquipRequiresDLC_Genesis" }; }
    BitFieldValue<bool, unsigned __int32> bDurabilityRequirementIgnoredInWater()
    { return { (void*)this, "bDurabilityRequirementIgnoredInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRepair()
    { return { (void*)this, "bAllowRepair" }; }
    BitFieldValue<bool, unsigned __int32> bCustomBrokenIcon()
    { return { (void*)this, "bCustomBrokenIcon" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory()
    { return { (void*)this, "bAllowRemovalFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bFromSteamInventory()
    { return { (void*)this, "bFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory()
    { return { (void*)this, "bIsFromAllClustersInventory" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeItemOnUse()
    { return { (void*)this, "bConsumeItemOnUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnItemConsumed()
    { return { (void*)this, "bUseBPOnItemConsumed" }; }
    BitFieldValue<bool, unsigned __int32> bConfirmBeforeUsing()
    { return { (void*)this, "bConfirmBeforeUsing" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyCanUseInWater()
    { return { (void*)this, "bOnlyCanUseInWater" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseSwimming()
    { return { (void*)this, "bCanUseSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bIsDescriptionOnlyItem()
    { return { (void*)this, "bIsDescriptionOnlyItem" }; }
    BitFieldValue<bool, unsigned __int32> bRestoreDurabilityWhenColorized()
    { return { (void*)this, "bRestoreDurabilityWhenColorized" }; }
    BitFieldValue<bool, unsigned __int32> bAppendPrimaryColorToName()
    { return { (void*)this, "bAppendPrimaryColorToName" }; }
    BitFieldValue<bool, unsigned __int32> bUseScaleStatEffectivenessByDurability()
    { return { (void*)this, "bUseScaleStatEffectivenessByDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUsesCreationTime()
    { return { (void*)this, "bUsesCreationTime" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseWhileRiding()
    { return { (void*)this, "bAllowUseWhileRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceAtFullDurability()
    { return { (void*)this, "bPreventCraftingResourceAtFullDurability" }; }
    BitFieldValue<bool, unsigned __int32> bGiveItemWhenUsedCopyItemStats()
    { return { (void*)this, "bGiveItemWhenUsedCopyItemStats" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromRemoteInventoryDisplay()
    { return { (void*)this, "bHideFromRemoteInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDecreaseDurabilityOverTime()
    { return { (void*)this, "bAutoDecreaseDurabilityOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDragOntoOtherItemIfSameCustomData()
    { return { (void*)this, "bPreventDragOntoOtherItemIfSameCustomData" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnItemWeaponRemoveClipAmmo()
    { return { (void*)this, "bUseOnItemWeaponRemoveClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnItemSetIndexAsDestinationItemCustomData()
    { return { (void*)this, "bUseOnItemSetIndexAsDestinationItemCustomData" }; }
    BitFieldValue<bool, unsigned __int32> bSupportDragOntoOtherItem()
    { return { (void*)this, "bSupportDragOntoOtherItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsItemSkin()
    { return { (void*)this, "bIsItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bIsCustomCosmeticDisplay()
    { return { (void*)this, "bIsCustomCosmeticDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSkinTab()
    { return { (void*)this, "bPreventOnSkinTab" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetAttachmentIfNotUpdatingItem()
    { return { (void*)this, "bDontResetAttachmentIfNotUpdatingItem" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinIgnoreSkinIcon()
    { return { (void*)this, "bItemSkinIgnoreSkinIcon" }; }
    BitFieldValue<bool, unsigned __int32> bPickupEggAlertsDinos()
    { return { (void*)this, "bPickupEggAlertsDinos" }; }
    BitFieldValue<bool, unsigned __int32> bEggSpoilsWhenFertilized()
    { return { (void*)this, "bEggSpoilsWhenFertilized" }; }
    BitFieldValue<bool, unsigned __int32> bHideCustomDescription()
    { return { (void*)this, "bHideCustomDescription" }; }
    BitFieldValue<bool, unsigned __int32> bCopyCustomDescriptionIntoSpoiledItem()
    { return { (void*)this, "bCopyCustomDescriptionIntoSpoiledItem" }; }
    BitFieldValue<bool, unsigned __int32> bCopyDurabilityIntoSpoiledItem()
    { return { (void*)this, "bCopyDurabilityIntoSpoiledItem" }; }
    BitFieldValue<bool, unsigned __int32> bCraftedRequestCustomItemDescription()
    { return { (void*)this, "bCraftedRequestCustomItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowCustomItemDescription()
    { return { (void*)this, "bForceAllowCustomItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedItem()
    { return { (void*)this, "bInitializedItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsDroppedItem()
    { return { (void*)this, "bIsDroppedItem" }; }
    BitFieldValue<bool, unsigned __int32> bEggIsTooCold()
    { return { (void*)this, "bEggIsTooCold" }; }
    BitFieldValue<bool, unsigned __int32> bEggIsTooHot()
    { return { (void*)this, "bEggIsTooHot" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventUseOntoItem()
    { return { (void*)this, "bUseBPPreventUseOntoItem" }; }
    BitFieldValue<bool, unsigned __int32> bSkinDisableWhenSubmerged()
    { return { (void*)this, "bSkinDisableWhenSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbstractItem()
    { return { (void*)this, "bIsAbstractItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemSkins()
    { return { (void*)this, "bPreventItemSkins" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyCanUseInFalling()
    { return { (void*)this, "bOnlyCanUseInFalling" }; }
    BitFieldValue<bool, unsigned __int32> bForceDropDestruction()
    { return { (void*)this, "bForceDropDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeArkTributeItem()
    { return { (void*)this, "bCanBeArkTributeItem" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInvalidItemVersion()
    { return { (void*)this, "bAllowInvalidItemVersion" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorRelativeLoc()
    { return { (void*)this, "bUseSpawnActorRelativeLoc" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorTakeOwnerRotation()
    { return { (void*)this, "bUseSpawnActorTakeOwnerRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquippedItemBlueprintTick()
    { return { (void*)this, "bUseEquippedItemBlueprintTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquippedItemNativeTick()
    { return { (void*)this, "bUseEquippedItemNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnActorOnWaterOnly()
    { return { (void*)this, "bSpawnActorOnWaterOnly" }; }
    BitFieldValue<bool, unsigned __int32> bAutoTameSpawnedActor()
    { return { (void*)this, "bAutoTameSpawnedActor" }; }
    BitFieldValue<bool, unsigned __int32> bShowItemRatingAsPercent()
    { return { (void*)this, "bShowItemRatingAsPercent" }; }
    BitFieldValue<bool, unsigned __int32> bPreventArmorDurabiltyConsumption()
    { return { (void*)this, "bPreventArmorDurabiltyConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bIsEgg()
    { return { (void*)this, "bIsEgg" }; }
    BitFieldValue<bool, unsigned __int32> bIsCookingIngredient()
    { return { (void*)this, "bIsCookingIngredient" }; }
    BitFieldValue<bool, unsigned __int32> bDragClearDyedItem()
    { return { (void*)this, "bDragClearDyedItem" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateItem()
    { return { (void*)this, "bDeprecateItem" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedRecipeStats()
    { return { (void*)this, "bInitializedRecipeStats" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalWeaponTemplate()
    { return { (void*)this, "bItemSkinKeepOriginalWeaponTemplate" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalIcon()
    { return { (void*)this, "bItemSkinKeepOriginalIcon" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintEvents()
    { return { (void*)this, "bItemSkinReceiveOwnerEquippedBlueprintEvents" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintTick()
    { return { (void*)this, "bItemSkinReceiveOwnerEquippedBlueprintTick" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinAllowEquipping()
    { return { (void*)this, "bItemSkinAllowEquipping" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisplayInInventory()
    { return { (void*)this, "bForceDisplayInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bDroppedItemAllowDinoPickup()
    { return { (void*)this, "bDroppedItemAllowDinoPickup" }; }
    BitFieldValue<bool, unsigned __int32> bCraftDontActuallyGiveItem()
    { return { (void*)this, "bCraftDontActuallyGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseWhenSleeping()
    { return { (void*)this, "bPreventUseWhenSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRepairingRequirements()
    { return { (void*)this, "bOverrideRepairingRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bScaleOverridenRepairingRequirements()
    { return { (void*)this, "bScaleOverridenRepairingRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseItemAddCharacterStatsOnDinos()
    { return { (void*)this, "bForceUseItemAddCharacterStatsOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyEquipWhenUnconscious()
    { return { (void*)this, "bOnlyEquipWhenUnconscious" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventConsumableWhileHandcuffed()
    { return { (void*)this, "bForcePreventConsumableWhileHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideExactClassCraftingRequirement()
    { return { (void*)this, "bOverrideExactClassCraftingRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventConsumeItemOnDrag()
    { return { (void*)this, "bPreventConsumeItemOnDrag" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowGrinding()
    { return { (void*)this, "bForceAllowGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventGrinding()
    { return { (void*)this, "bForcePreventGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateBlueprint()
    { return { (void*)this, "bDeprecateBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoAutoConsume()
    { return { (void*)this, "bPreventDinoAutoConsume" }; }
    BitFieldValue<bool, unsigned __int32> bIsDinoAutoHealingItem()
    { return { (void*)this, "bIsDinoAutoHealingItem" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowRemoteAddToInventory()
    { return { (void*)this, "bBPAllowRemoteAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowRemoteRemoveFromInventory()
    { return { (void*)this, "bBPAllowRemoteRemoveFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemHeadHair()
    { return { (void*)this, "bEquipmentHatHideItemHeadHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemFacialHair()
    { return { (void*)this, "bEquipmentHatHideItemFacialHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceHairHiding()
    { return { (void*)this, "bEquipmentForceHairHiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoveFromSteamInventory()
    { return { (void*)this, "bAllowRemoveFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryNotifyCraftingFinished()
    { return { (void*)this, "bBPInventoryNotifyCraftingFinished" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBPAllowCrafting()
    { return { (void*)this, "bCheckBPAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowAddToInventory()
    { return { (void*)this, "bUseBPAllowAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemBlueprint()
    { return { (void*)this, "bPreventItemBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseByDinos()
    { return { (void*)this, "bPreventUseByDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseByHumans()
    { return { (void*)this, "bPreventUseByHumans" }; }
    BitFieldValue<bool, unsigned __int32> bBPCanUse()
    { return { (void*)this, "bBPCanUse" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOverrideItemAutoDecreaseDurability()
    { return { (void*)this, "bAllowOverrideItemAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bCopyItemDurabilityFromCraftingResource()
    { return { (void*)this, "bCopyItemDurabilityFromCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bIsInitialItem()
    { return { (void*)this, "bIsInitialItem" }; }
    BitFieldValue<bool, unsigned __int32> bPickupEggForceAggro()
    { return { (void*)this, "bPickupEggForceAggro" }; }
    BitFieldValue<bool, unsigned __int32> bClearSkinOnInventoryRemoval()
    { return { (void*)this, "bClearSkinOnInventoryRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomAutoDecreaseDurabilityPerInterval()
    { return { (void*)this, "bUseBPCustomAutoDecreaseDurabilityPerInterval" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetText()
    { return { (void*)this, "bUseBPCustomInventoryWidgetText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextColor()
    { return { (void*)this, "bUseBPCustomInventoryWidgetTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextForBlueprint()
    { return { (void*)this, "bUseBPCustomInventoryWidgetTextForBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bUseSkinnedBPCustomInventoryWidgetText()
    { return { (void*)this, "bUseSkinnedBPCustomInventoryWidgetText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityText()
    { return { (void*)this, "bUseBPCustomDurabilityText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityTextColor()
    { return { (void*)this, "bUseBPCustomDurabilityTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitFromItemNetInfo()
    { return { (void*)this, "bUseBPInitFromItemNetInfo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeItem()
    { return { (void*)this, "bUseBPInitializeItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemNetInfo()
    { return { (void*)this, "bUseBPGetItemNetInfo" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalItemName()
    { return { (void*)this, "bItemSkinKeepOriginalItemName" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploadingWeaponClipAmmo()
    { return { (void*)this, "bPreventUploadingWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNativeItemBroken()
    { return { (void*)this, "bPreventNativeItemBroken" }; }
    BitFieldValue<bool, unsigned __int32> bResourcePreventGivingFromDemolition()
    { return { (void*)this, "bResourcePreventGivingFromDemolition" }; }
    BitFieldValue<bool, unsigned __int32> bNameForceNoStatQualityRank()
    { return { (void*)this, "bNameForceNoStatQualityRank" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysLearnedEngram()
    { return { (void*)this, "bAlwaysLearnedEngram" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMinimumUseIntervalForDinoAutoEatingFood()
    { return { (void*)this, "bIgnoreMinimumUseIntervalForDinoAutoEatingFood" }; }
    BitFieldValue<bool, unsigned __int32> bUnappliedItemSkinIgnoreItemAttachments()
    { return { (void*)this, "bUnappliedItemSkinIgnoreItemAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bHideMoreOptionsIfNonRemovable()
    { return { (void*)this, "bHideMoreOptionsIfNonRemovable" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemDescription()
    { return { (void*)this, "bUseBPGetItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCrafted()
    { return { (void*)this, "bUseBPCrafted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemName()
    { return { (void*)this, "bUseBPGetItemName" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseAtTameLimit()
    { return { (void*)this, "bPreventUseAtTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bDivideTimeToCraftByGlobalCropGrowthSpeed()
    { return { (void*)this, "bDivideTimeToCraftByGlobalCropGrowthSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCheatGive()
    { return { (void*)this, "bPreventCheatGive" }; }
    BitFieldValue<bool, unsigned __int32> bUsingRequiresStandingOnSolidGround()
    { return { (void*)this, "bUsingRequiresStandingOnSolidGround" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddedAttachments()
    { return { (void*)this, "bUseBPAddedAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPConsumeProjectileImpact()
    { return { (void*)this, "bUseBPConsumeProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideProjectileType()
    { return { (void*)this, "bUseBPOverrideProjectileType" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnUpdatedItemContextMenu()
    { return { (void*)this, "bUseBPOnUpdatedItemContextMenu" }; }
    BitFieldValue<bool, unsigned __int32> bUsableWithTekGrenadeLauncher()
    { return { (void*)this, "bUsableWithTekGrenadeLauncher" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyDropped()
    { return { (void*)this, "bUseBPNotifyDropped" }; }
    BitFieldValue<bool, unsigned __int32> bThrowUsesSecondaryActionDrop()
    { return { (void*)this, "bThrowUsesSecondaryActionDrop" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemIcon()
    { return { (void*)this, "bUseBPGetItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseSlottedTick()
    { return { (void*)this, "bUseSlottedTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawItemIcon()
    { return { (void*)this, "bUseBPDrawItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowRemoteAddToInventory()
    { return { (void*)this, "bUseBPForceAllowRemoteAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bSkinAddWeightToSkinnedItem()
    { return { (void*)this, "bSkinAddWeightToSkinnedItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidForCrafting()
    { return { (void*)this, "bUseBPIsValidForCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCraftingConsumption()
    { return { (void*)this, "bUseBPOverrideCraftingConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bMergeCustomDataFromCraftingResources()
    { return { (void*)this, "bMergeCustomDataFromCraftingResources" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDrawingItemButtonIcon()
    { return { (void*)this, "bIgnoreDrawingItemButtonIcon" }; }
    BitFieldValue<bool, unsigned __int32> bCensoredItemSkin()
    { return { (void*)this, "bCensoredItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemDurabilityPercentage()
    { return { (void*)this, "bUseBPGetItemDurabilityPercentage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPEquippedItemOnXPEarning()
    { return { (void*)this, "bUseBPEquippedItemOnXPEarning" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysTriggerTributeDownloaded()
    { return { (void*)this, "bAlwaysTriggerTributeDownloaded" }; }
    BitFieldValue<bool, unsigned __int32> bDeferWeaponBeginPlayToAssociatedItemSetTime()
    { return { (void*)this, "bDeferWeaponBeginPlayToAssociatedItemSetTime" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRemovingClipAmmo()
    { return { (void*)this, "bPreventRemovingClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bCustomBrokenOverlayIcon()
    { return { (void*)this, "bCustomBrokenOverlayIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMaxAmmo()
    { return { (void*)this, "bUseBPGetMaxAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRefreshed()
    { return { (void*)this, "bUseBPNotifyItemRefreshed" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoLearnedEngramRequirement()
    { return { (void*)this, "bForceNoLearnedEngramRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseIgnoreMovementMode()
    { return { (void*)this, "bAllowUseIgnoreMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnFullEquippedSuitHUD()
    { return { (void*)this, "bPreventOnFullEquippedSuitHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingShield()
    { return { (void*)this, "bNonBlockingShield" }; }
    BitFieldValue<bool, unsigned __int32> bNetInfoFromClient()
    { return { (void*)this, "bNetInfoFromClient" }; }
    BitFieldValue<bool, unsigned __int32> bAddedToWorldItemMap()
    { return { (void*)this, "bAddedToWorldItemMap" }; }
    BitFieldValue<bool, unsigned __int32> bDisableItemUITooltip()
    { return { (void*)this, "bDisableItemUITooltip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDepositDropping()
    { return { (void*)this, "bPreventDepositDropping" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowSkinColorization()
    { return { (void*)this, "bForceAllowSkinColorization" }; }
    BitFieldValue<bool, unsigned __int32> bEquipAddTekExtendedInfo()
    { return { (void*)this, "bEquipAddTekExtendedInfo" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCraftingWithStarterAmmo()
    { return { (void*)this, "bAllowCraftingWithStarterAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideInheritedStatWeight()
    { return { (void*)this, "bUseBPOverrideInheritedStatWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseSkinDroppedItemTemplateForSecondryAction()
    { return { (void*)this, "bUseSkinDroppedItemTemplateForSecondryAction" }; }
    BitFieldValue<bool, unsigned __int32> AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers()
    { return { (void*)this, "AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters()
    { return { (void*)this, "AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWakingTameZeroAffinityEffectivenessMulti()
    { return { (void*)this, "bAllowWakingTameZeroAffinityEffectivenessMulti" }; }
    BitFieldValue<bool, unsigned __int32> bCostumeHideSaddleMesh()
    { return { (void*)this, "bCostumeHideSaddleMesh" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAutoDecreaseDurabilityOverTime()
    { return { (void*)this, "bDisableAutoDecreaseDurabilityOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bDoApplyOriginalColorsWhenUnskinned()
    { return { (void*)this, "bDoApplyOriginalColorsWhenUnskinned" }; }
    BitFieldValue<bool, unsigned __int32> bDontCountItemForUploadRestrictions()
    { return { (void*)this, "bDontCountItemForUploadRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bDontRemoveOnEquip()
    { return { (void*)this, "bDontRemoveOnEquip" }; }
    BitFieldValue<bool, unsigned __int32> bDontScaleSnapshot()
    { return { (void*)this, "bDontScaleSnapshot" }; }
    BitFieldValue<bool, unsigned __int32> bDontUseDurabilityDamageOverlay()
    { return { (void*)this, "bDontUseDurabilityDamageOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bEquipPreventsCharacterSkinsCosmetics()
    { return { (void*)this, "bEquipPreventsCharacterSkinsCosmetics" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceHideAllHairComponents()
    { return { (void*)this, "bEquipmentForceHideAllHairComponents" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemEyeHair()
    { return { (void*)this, "bEquipmentHatHideItemEyeHair" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowDragging()
    { return { (void*)this, "bForceAllowDragging" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideAllDefaultPawnAttachmentsWhenEquipped()
    { return { (void*)this, "bForceHideAllDefaultPawnAttachmentsWhenEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bForceNotificationItemCombatMode()
    { return { (void*)this, "bForceNotificationItemCombatMode" }; }
    BitFieldValue<bool, unsigned __int32> bForceQualityColorOverlay()
    { return { (void*)this, "bForceQualityColorOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bForceRequiresExplicitOwnerChecks()
    { return { (void*)this, "bForceRequiresExplicitOwnerChecks" }; }
    BitFieldValue<bool, unsigned __int32> bIsCharacterSkinOrCosmetic()
    { return { (void*)this, "bIsCharacterSkinOrCosmetic" }; }
    BitFieldValue<bool, unsigned __int32> bIsClubArkReward()
    { return { (void*)this, "bIsClubArkReward" }; }
    BitFieldValue<bool, unsigned __int32> bIsClubArkTrade()
    { return { (void*)this, "bIsClubArkTrade" }; }
    BitFieldValue<bool, unsigned __int32> bIsEmbryo()
    { return { (void*)this, "bIsEmbryo" }; }
    BitFieldValue<bool, unsigned __int32> bIsGhostItemSkin()
    { return { (void*)this, "bIsGhostItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bIsItemAccessory()
    { return { (void*)this, "bIsItemAccessory" }; }
    BitFieldValue<bool, unsigned __int32> bItemIsUsable()
    { return { (void*)this, "bItemIsUsable" }; }
    BitFieldValue<bool, unsigned __int32> bMuteExtraEquipmentSounds()
    { return { (void*)this, "bMuteExtraEquipmentSounds" }; }
    BitFieldValue<bool, unsigned __int32> bPreventModifyArmorValue()
    { return { (void*)this, "bPreventModifyArmorValue" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNotificationItemCombatMode()
    { return { (void*)this, "bPreventNotificationItemCombatMode" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularDroppingButStillDropInBulkAndDestructionCaches()
    { return { (void*)this, "bPreventRegularDroppingButStillDropInBulkAndDestructionCaches" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned()
    { return { (void*)this, "bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresBobsTallTalesToCraft()
    { return { (void*)this, "bRequiresBobsTallTalesToCraft" }; }
    BitFieldValue<bool, unsigned __int32> bSaddleUseRegularDurability()
    { return { (void*)this, "bSaddleUseRegularDurability" }; }
    BitFieldValue<bool, unsigned __int32> bSetCraftingActorToSpawnTeamFromCrafter()
    { return { (void*)this, "bSetCraftingActorToSpawnTeamFromCrafter" }; }
    BitFieldValue<bool, unsigned __int32> bSkinReequipOnClientBeginPlay()
    { return { (void*)this, "bSkinReequipOnClientBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bSkipEquipAnimation()
    { return { (void*)this, "bSkipEquipAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUnlockAsPersistentProfileItemOnCraft()
    { return { (void*)this, "bUnlockAsPersistentProfileItemOnCraft" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddedToInventory()
    { return { (void*)this, "bUseBPAddedToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanPlayerUseItem()
    { return { (void*)this, "bUseBPCanPlayerUseItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemStatString()
    { return { (void*)this, "bUseBPGetItemStatString" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCropPhaseIncrease()
    { return { (void*)this, "bUseBPOnCropPhaseIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAnimMontage()
    { return { (void*)this, "bUseBPOverrideAnimMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDeathAnim()
    { return { (void*)this, "bUseBPOverrideDeathAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideHoldItemSlotAction()
    { return { (void*)this, "bUseBPOverrideHoldItemSlotAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRemainingCooldownTime()
    { return { (void*)this, "bUseBPOverrideRemainingCooldownTime" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideSound()
    { return { (void*)this, "bUseBPOverrideSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventUpload()
    { return { (void*)this, "bUseBPPreventUpload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPrimalDinoCharacterConsumedItem()
    { return { (void*)this, "bUseBPPrimalDinoCharacterConsumedItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemovedFromInventory()
    { return { (void*)this, "bUseBPRemovedFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseMultiSaddleMeshOverrideMap()
    { return { (void*)this, "bUseMultiSaddleMeshOverrideMap" }; }
    BitFieldValue<bool, unsigned __int32> bUseOntoItemRequiresImmobilization()
    { return { (void*)this, "bUseOntoItemRequiresImmobilization" }; }

    //  ajudante da BRZ Api — nao e' funcao do jogo
    int GetItemQuantity() const
    { return GetNativeField<int>(this, "ItemQuantity"); }

};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_H
