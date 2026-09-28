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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bAutoActivate")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bHiddenInGame")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bReplicates")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODMeshComponent.bVisible")); }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODMESHCOMPONENT_H
