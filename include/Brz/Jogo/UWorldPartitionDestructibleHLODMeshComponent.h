// ==========================================================================
//  UWorldPartitionDestructibleHLODMeshComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODMESHCOMPONENT_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODMESHCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct USceneComponent;


struct UWorldPartitionDestructibleHLODMeshComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionDestructibleHLODMeshComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionDestructibleHLODMeshComponent.DamageActor(int,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DamageActor(int a0, float a1) const
    {
        return NativeCall<void*, int, float>(this, "UWorldPartitionDestructibleHLODMeshComponent.DamageActor(int,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionDestructibleHLODMeshComponent.DestroyActor(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro DestroyActor(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorldPartitionDestructibleHLODMeshComponent.DestroyActor(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionDestructibleHLODMeshComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionDestructibleHLODMeshComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODMeshComponent.AssetUserData"); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODMeshComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UWorldPartitionDestructibleHLODMeshComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionDestructibleHLODMeshComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODMeshComponent.AttachmentChangedIncrementer"); }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODMeshComponent.ClientAttachedChildren"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODMeshComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODMeshComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODMeshComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionDestructibleHLODMeshComponent.CustomTag"); }
    BrzCampoPonteiro DestructibleActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.DestructibleActors")); }
    BrzCampoPonteiro DestructibleHLODMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.DestructibleHLODMaterial")); }
    BrzCampoPonteiro DestructibleHLODStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.DestructibleHLODState")); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldPartitionDestructibleHLODMeshComponent.DetailMode"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldPartitionDestructibleHLODMeshComponent.Mobility"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.OnComponentDeactivated")); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UWorldPartitionDestructibleHLODMeshComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.PhysicsVolumeChangedDelegate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UWorldPartitionDestructibleHLODMeshComponent.PrimaryComponentTick"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.RelativeScale3D")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODMeshComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro VisibilityMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.VisibilityMaterial")); }
    BrzCampoPonteiro VisibilityTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.VisibilityTexture")); }
    BitFieldValue<bool, unsigned __int32> bAbsoluteLocation()
    { return { (void*)this, "bAbsoluteLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteRotation()
    { return { (void*)this, "bAbsoluteRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteScale()
    { return { (void*)this, "bAbsoluteScale" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAttachedSoundsForceHighPriority()
    { return { (void*)this, "bAttachedSoundsForceHighPriority" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bBoundsChangeTriggersStreamingDataRebuild()
    { return { (void*)this, "bBoundsChangeTriggersStreamingDataRebuild" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bClientSyncAlwaysUpdatePhysicsCollision()
    { return { (void*)this, "bClientSyncAlwaysUpdatePhysicsCollision" }; }
    BitFieldValue<bool, unsigned __int32> bComponentToWorldUpdated()
    { return { (void*)this, "bComponentToWorldUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bComputeBoundsOnceForGame()
    { return { (void*)this, "bComputeBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bComputeFastLocalBounds()
    { return { (void*)this, "bComputeFastLocalBounds" }; }
    BitFieldValue<bool, unsigned __int32> bComputedBoundsOnceForGame()
    { return { (void*)this, "bComputedBoundsOnceForGame" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenInGame()
    { return { (void*)this, "bHiddenInGame" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreParentTransformUpdate()
    { return { (void*)this, "bIgnoreParentTransformUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bIsNotRenderAttachmentRoot()
    { return { (void*)this, "bIsNotRenderAttachmentRoot" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeAttached()
    { return { (void*)this, "bShouldBeAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapLocationWhenAttached()
    { return { (void*)this, "bShouldSnapLocationWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapRotationWhenAttached()
    { return { (void*)this, "bShouldSnapRotationWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldSnapScaleWhenAttached()
    { return { (void*)this, "bShouldSnapScaleWhenAttached" }; }
    BitFieldValue<bool, unsigned __int32> bShouldUpdatePhysicsVolume()
    { return { (void*)this, "bShouldUpdatePhysicsVolume" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateChildOverlaps()
    { return { (void*)this, "bUpdateChildOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachParentBound()
    { return { (void*)this, "bUseAttachParentBound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bVisible()
    { return { (void*)this, "bVisible" }; }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODMESHCOMPONENT_H
