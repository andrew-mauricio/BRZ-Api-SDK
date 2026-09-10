// ==========================================================================
//  ADroppedItem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADROPPEDITEM_H
#define BRZ_SDK_JOGO_ADROPPEDITEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APhysicsVolume;
struct APrimalCharacter;
struct FItemNetInfo;
struct UMaterialInterface;
struct UPrimalItem;
struct UStaticMesh;
struct UTexture2D;

#include "AActor.h"

struct ADroppedItem : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADroppedItem"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "ADroppedItem.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "ADroppedItem.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.ForceSleep()
    // endereco: casamento de bytes com a build de referencia
    void ForceSleep() const
    {
        NativeCall<void>(this, "ADroppedItem.ForceSleep()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.FreezePhysics()
    // endereco: casamento de bytes com a build de referencia
    void FreezePhysics() const
    {
        NativeCall<void>(this, "ADroppedItem.FreezePhysics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.GetApproximateLocationPhysicsVolume()
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetApproximateLocationPhysicsVolume() const
    {
        return NativeCall<APhysicsVolume*>(this, "ADroppedItem.GetApproximateLocationPhysicsVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "ADroppedItem.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.KeepPhysicsActiveForDuration(float)
    // endereco: casamento de bytes com a build de referencia
    void KeepPhysicsActiveForDuration(float a0) const
    {
        NativeCall<void, float>(this, "ADroppedItem.KeepPhysicsActiveForDuration(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=103]]
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "ADroppedItem.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.OnRep_ReplicatedMovement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=92]]
    void OnRep_ReplicatedMovement() const
    {
        NativeCall<void>(this, "ADroppedItem.OnRep_ReplicatedMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.PostNetReceiveLocationAndRotation()
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceiveLocationAndRotation() const
    {
        NativeCall<void>(this, "ADroppedItem.PostNetReceiveLocationAndRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.PostNetReceivePhysicState()
    // classe: a funcao mora em AActor, e ADroppedItem herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=366]]
    void PostNetReceivePhysicState() const
    {
        NativeCall<void>(this, "AActor.PostNetReceivePhysicState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "ADroppedItem.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.ReplicateMovement()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=534+grafo=9/9]]
    void ReplicateMovement() const
    {
        NativeCall<void>(this, "ADroppedItem.ReplicateMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.SetupDroppedItemLifeSpan()
    // endereco: casamento de bytes com a build de referencia
    void SetupDroppedItemLifeSpan() const
    {
        NativeCall<void>(this, "ADroppedItem.SetupDroppedItemLifeSpan()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.SetupVisuals()
    // endereco: casamento de bytes com a build de referencia
    void SetupVisuals() const
    {
        NativeCall<void>(this, "ADroppedItem.SetupVisuals()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.Stasis()
    // classe: a funcao mora em AActor, e ADroppedItem herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "AActor.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "ADroppedItem.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItem.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "ADroppedItem.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    int& AssignedToTribeIDField() const
    { return *GetNativePointerField<int*>(this, "ADroppedItem.AssignedToTribeID"); }
    APrimalCharacter*& BasedTransformCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "ADroppedItem.BasedTransformCharacter"); }
    BrzCampoPonteiro BasedTransformLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.BasedTransformLocation")); }
    BrzCampoPonteiro BasedTransformVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.BasedTransformVelocity")); }
    BrzCampoPonteiro CenterLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.CenterLocationOffset")); }
    TWeakObjectPtr<void>& DroppedByActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "ADroppedItem.DroppedByActor"); }
    FString& DroppedByNameField() const
    { return *GetNativePointerField<FString*>(this, "ADroppedItem.DroppedByName"); }
    unsigned long long& DroppedByPlayerIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "ADroppedItem.DroppedByPlayerID"); }
    float& DroppedItemAccelerationGravityField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.DroppedItemAccelerationGravity"); }
    double& DroppedItemDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "ADroppedItem.DroppedItemDestructionTime"); }
    BrzCampoPonteiro DroppedItemInterpTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.DroppedItemInterpTarget")); }
    float& DroppedItemMaxFallSpeedField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.DroppedItemMaxFallSpeed"); }
    BrzCampoPonteiro DroppedItemScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.DroppedItemScale")); }
    BrzCampoPonteiro DroppedItemVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.DroppedItemVelocity")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PickupAllRange` +4, medido na build 25090264
    //  (offset absoluto medido: 0x8B8; confianca alta)
    float& DroppedLifeSpanOverrideField() const
    { return BrzCampoAncorado<float>(this, "PickupAllRange", 4); }
    float& ForceSleepTimerField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.ForceSleepTimer"); }
    float& FreezePhysicsAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.FreezePhysicsAfterTime"); }
    BrzCampoPonteiro HUDOverlayToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.HUDOverlayToolTipWidget")); }
    BrzCampoPonteiro HUDOverlayToolTipWidgetOnlyActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.HUDOverlayToolTipWidgetOnlyAction")); }
    float& ImpulseMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.ImpulseMagnitude"); }
    BrzCampoPonteiro ImpulseOffsetRangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.ImpulseOffsetRanges")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPickUpDistance` +8, medido na build 25090264
    //  (offset absoluto medido: 0x800; confianca alta)
    double& LastReplicatedMovementField() const
    { return BrzCampoAncorado<double>(this, "MaxPickUpDistance", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventDropAttachment` +30, medido na build 25090264
    //  (offset absoluto medido: 0x8A0; confianca alta)
    float& LocationStuckTimerField() const
    { return BrzCampoAncorado<float>(this, "bPreventDropAttachment", 30); }
    float& MaxPickUpDistanceField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.MaxPickUpDistance"); }
    UPrimalItem*& MyItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "ADroppedItem.MyItem"); }
    FItemNetInfo& MyItemInfoField() const
    { return *GetNativePointerField<FItemNetInfo*>(this, "ADroppedItem.MyItemInfo"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "ADroppedItem.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "ADroppedItem.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.NetDroppedMeshOverrideScale3D")); }
    BrzCampoPonteiro OverlayTooltipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.OverlayTooltipPadding")); }
    BrzCampoPonteiro OverlayTooltipScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.OverlayTooltipScale")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventDropAttachment` +38, medido na build 25090264
    //  (offset absoluto medido: 0x8A8; confianca media)
    double& PhysicsKeepAliveUntilTimeField() const
    { return BrzCampoAncorado<double>(this, "bPreventDropAttachment", 38); }
    BrzCampoPonteiro PickUpIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.PickUpIcon")); }
    float& PickupAllRangeField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItem.PickupAllRange"); }
    TObjectPtr<UTexture2D>& PickupIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "ADroppedItem.PickUpIcon"); }
    BrzCampoPonteiro PickupSingleIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItem.PickupSingleIcon")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPickUpDistance` +20, medido na build 25090264
    //  (offset absoluto medido: 0x80C; confianca alta)
    float& PrevAngularDampingField() const
    { return BrzCampoAncorado<float>(this, "MaxPickUpDistance", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPickUpDistance` +16, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca alta)
    float& PrevLinearDampingField() const
    { return BrzCampoAncorado<float>(this, "MaxPickUpDistance", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpawnDropSoundTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x818; confianca alta)
    void*& PreviousLocationField() const
    { return BrzCampoAncorado<void*>(this, "SpawnDropSoundTime", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventDropAttachment` +6, medido na build 25090264
    //  (offset absoluto medido: 0x888; confianca alta)
    void*& PreviousStuckLocationField() const
    { return BrzCampoAncorado<void*>(this, "bPreventDropAttachment", 6); }
    double& SpawnDropSoundTimeField() const
    { return *GetNativePointerField<double*>(this, "ADroppedItem.SpawnDropSoundTime"); }
    UStaticMesh*& UsedMeshAssetField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "ADroppedItem.UsedMeshAsset"); }
    bool& bUseBPSetupDroppedItemVisualsField() const
    { return *GetNativePointerField<bool*>(this, "ADroppedItem.bUseBPSetupDroppedItemVisuals"); }
    BitFieldValue<bool, unsigned __int32> bApplyImpulseOnSpawn()
    { return { (void*)this, "bApplyImpulseOnSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis()
    { return { (void*)this, "bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseCollisionTrace()
    { return { (void*)this, "bUseCollisionTrace" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPickup()
    { return { (void*)this, "bPreventPickup" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOutOfWater()
    { return { (void*)this, "bDestroyOutOfWater" }; }
    BitFieldValue<bool, unsigned __int32> bUseClientDroppedItemPhysics()
    { return { (void*)this, "bUseClientDroppedItemPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderwater()
    { return { (void*)this, "bIsUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyPreviousOwnerOfPickup()
    { return { (void*)this, "bNotifyPreviousOwnerOfPickup" }; }
    BitFieldValue<bool, unsigned __int32> bAssignedToTribePickupOnly()
    { return { (void*)this, "bAssignedToTribePickupOnly" }; }
    BitFieldValue<bool, unsigned __int32> bLowQuality()
    { return { (void*)this, "bLowQuality" }; }
    BitFieldValue<bool, unsigned __int32> bBPOnItemPickedUp()
    { return { (void*)this, "bBPOnItemPickedUp" }; }
    BitFieldValue<bool, unsigned __int32> bClientDisablePhysics()
    { return { (void*)this, "bClientDisablePhysics" }; }
    BitFieldValue<bool, unsigned __int32> bHasStoppedMovement()
    { return { (void*)this, "bHasStoppedMovement" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreventDroppedItemPhysics()
    { return { (void*)this, "bIsPreventDroppedItemPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bIsWildEgg()
    { return { (void*)this, "bIsWildEgg" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDropAttachment()
    { return { (void*)this, "bPreventDropAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDroppedItemImpacted()
    { return { (void*)this, "bUseBPDroppedItemImpacted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupDroppedItemVisuals()
    { return { (void*)this, "bUseBPSetupDroppedItemVisuals" }; }
    BitFieldValue<bool, unsigned __int32> bUseImpulseOffsetRanges()
    { return { (void*)this, "bUseImpulseOffsetRanges" }; }

};

#endif  // BRZ_SDK_JOGO_ADROPPEDITEM_H
