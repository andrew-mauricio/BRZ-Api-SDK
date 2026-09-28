// ==========================================================================
//  UPrimalNavigationInvokerComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALNAVIGATIONINVOKERCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALNAVIGATIONINVOKERCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalNavigationInvokerComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalNavigationInvokerComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavigationInvokerComponent.SetActiveAlternateRadius(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActiveAlternateRadius(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalNavigationInvokerComponent.SetActiveAlternateRadius(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavigationInvokerComponent.UpdatePrimalNavigationInvoker(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdatePrimalNavigationInvoker(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalNavigationInvokerComponent.UpdatePrimalNavigationInvoker(APrimalDinoCharacter*)", a0);
    }

    BrzCampoPonteiro AlternateGenerationAndRemovalRadiiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.AlternateGenerationAndRemovalRadii")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalNavigationInvokerComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalNavigationInvokerComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavigationInvokerComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavigationInvokerComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalNavigationInvokerComponent.CustomTag"); }
    float& DeactivationDelayField() const
    { return *GetNativePointerField<float*>(this, "UPrimalNavigationInvokerComponent.DeactivationDelay"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.OnComponentDeactivated")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalNavigationInvokerComponent.PrimaryComponentTick"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavigationInvokerComponent.Priority"); }
    BrzCampoPonteiro SupportedAgentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.SupportedAgents")); }
    float& TileGenerationRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalNavigationInvokerComponent.TileGenerationRadius"); }
    float& TileRemovalRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalNavigationInvokerComponent.TileRemovalRadius"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavigationInvokerComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bForceInvokerActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bForceInvokerActive")); }
    BrzCampoPonteiro bForceInvokerInactiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bForceInvokerInactive")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bReplicates")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationInvokerComponent.bUseBPOnComponentTick")); }
    BitFieldValue<bool, unsigned __int32> bForceInvokerActive()
    { return { (void*)this, "bForceInvokerActive" }; }
    BitFieldValue<bool, unsigned __int32> bForceInvokerInactive()
    { return { (void*)this, "bForceInvokerInactive" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALNAVIGATIONINVOKERCOMPONENT_H
