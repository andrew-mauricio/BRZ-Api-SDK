// ==========================================================================
//  UGameplayControlRotationComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYCONTROLROTATIONCOMPONENT_H
#define BRZ_SDK_JOGO_UGAMEPLAYCONTROLROTATIONCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APlayerController;
struct FActorComponentTickFunction;
struct FName;


struct UGameplayControlRotationComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayControlRotationComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayControlRotationComponent.InitializeControlRotationService(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeControlRotationService(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayControlRotationComponent.InitializeControlRotationService(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayControlRotationComponent.TeardownControlRotationService(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TeardownControlRotationService(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayControlRotationComponent.TeardownControlRotationService(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayControlRotationComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UGameplayControlRotationComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayControlRotationComponent.AssetUserData"); }
    unsigned char& AutoActivateForPlayerField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayControlRotationComponent.AutoActivateForPlayer"); }
    float& AxisActionAngularSpeedThresholdField() const
    { return *GetNativePointerField<float*>(this, "UGameplayControlRotationComponent.AxisActionAngularSpeedThreshold"); }
    float& AxisActionMagnitudeThresholdField() const
    { return *GetNativePointerField<float*>(this, "UGameplayControlRotationComponent.AxisActionMagnitudeThreshold"); }
    BrzCampoPonteiro AxisActionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.AxisActions")); }
    BrzCampoPonteiro CameraSystemHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.CameraSystemHost")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayControlRotationComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UGameplayControlRotationComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UGameplayControlRotationComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayControlRotationComponent.CustomTag"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.OnComponentDeactivated")); }
    TObjectPtr<APlayerController>& PlayerControllerField() const
    { return *GetNativePointerField<TObjectPtr<APlayerController>*>(this, "UGameplayControlRotationComponent.PlayerController"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UGameplayControlRotationComponent.PrimaryComponentTick"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UGameplayControlRotationComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bReplicates")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayControlRotationComponent.bUseBPOnComponentTick")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYCONTROLROTATIONCOMPONENT_H
