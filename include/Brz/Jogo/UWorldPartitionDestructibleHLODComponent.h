// ==========================================================================
//  UWorldPartitionDestructibleHLODComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODCOMPONENT_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct USceneComponent;


struct UWorldPartitionDestructibleHLODComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionDestructibleHLODComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionDestructibleHLODComponent.GetDestructibleActors()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetDestructibleActors() const
    {
        return NativeCall<void*>(this, "UWorldPartitionDestructibleHLODComponent.GetDestructibleActors()");
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODComponent.AssetUserData"); }
    TArray<void*>& AttachChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODComponent.AttachChildren"); }
    TObjectPtr<USceneComponent>& AttachParentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UWorldPartitionDestructibleHLODComponent.AttachParent"); }
    FName& AttachSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionDestructibleHLODComponent.AttachSocketName"); }
    int& AttachmentChangedIncrementerField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODComponent.AttachmentChangedIncrementer"); }
    TArray<void*>& ClientAttachedChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODComponent.ClientAttachedChildren"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UWorldPartitionDestructibleHLODComponent.ComponentTags"); }
    BrzCampoPonteiro ComponentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.ComponentVelocity")); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionDestructibleHLODComponent.CustomTag"); }
    BrzCampoPonteiro DestructibleActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.DestructibleActors")); }
    unsigned char& DetailModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldPartitionDestructibleHLODComponent.DetailMode"); }
    unsigned char& MobilityField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldPartitionDestructibleHLODComponent.Mobility"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.OnComponentDeactivated")); }
    TWeakObjectPtr<void>& PhysicsVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UWorldPartitionDestructibleHLODComponent.PhysicsVolume"); }
    BrzCampoPonteiro PhysicsVolumeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.PhysicsVolumeChangedDelegate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UWorldPartitionDestructibleHLODComponent.PrimaryComponentTick"); }
    BrzCampoPonteiro RelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.RelativeLocation")); }
    BrzCampoPonteiro RelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.RelativeRotation")); }
    BrzCampoPonteiro RelativeScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.RelativeScale3D")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionDestructibleHLODComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro bAbsoluteLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bAbsoluteLocation")); }
    BrzCampoPonteiro bAbsoluteRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bAbsoluteRotation")); }
    BrzCampoPonteiro bAbsoluteScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bAbsoluteScale")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAttachedSoundsForceHighPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bAttachedSoundsForceHighPriority")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bAutoActivate")); }
    BrzCampoPonteiro bBoundsChangeTriggersStreamingDataRebuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bBoundsChangeTriggersStreamingDataRebuild")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bClientSyncAlwaysUpdatePhysicsCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bClientSyncAlwaysUpdatePhysicsCollision")); }
    BrzCampoPonteiro bComponentToWorldUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bComponentToWorldUpdated")); }
    BrzCampoPonteiro bComputeBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bComputeBoundsOnceForGame")); }
    BrzCampoPonteiro bComputeFastLocalBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bComputeFastLocalBounds")); }
    BrzCampoPonteiro bComputedBoundsOnceForGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bComputedBoundsOnceForGame")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHiddenInGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bHiddenInGame")); }
    BrzCampoPonteiro bIgnoreParentTransformUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bIgnoreParentTransformUpdate")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsNotRenderAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bIsNotRenderAttachmentRoot")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bReplicates")); }
    BrzCampoPonteiro bShouldBeAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bShouldBeAttached")); }
    BrzCampoPonteiro bShouldSnapLocationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bShouldSnapLocationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapRotationWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bShouldSnapRotationWhenAttached")); }
    BrzCampoPonteiro bShouldSnapScaleWhenAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bShouldSnapScaleWhenAttached")); }
    BrzCampoPonteiro bShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUpdateChildOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bUpdateChildOverlaps")); }
    BrzCampoPonteiro bUseAttachParentBoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bUseAttachParentBound")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionDestructibleHLODComponent.bVisible")); }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONDESTRUCTIBLEHLODCOMPONENT_H
