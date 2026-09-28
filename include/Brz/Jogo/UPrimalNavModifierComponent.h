// ==========================================================================
//  UPrimalNavModifierComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALNAVMODIFIERCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALNAVMODIFIERCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalNavModifierComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalNavModifierComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavModifierComponent.CalcAndCacheBounds()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcAndCacheBounds() const
    {
        return NativeCall<void*>(this, "UPrimalNavModifierComponent.CalcAndCacheBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavModifierComponent.GetFailsafeExtentAndLocation(UE::Math::TVector<double>&,UE::Math::TV
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetFailsafeExtentAndLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalNavModifierComponent.GetFailsafeExtentAndLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavModifierComponent.GetNavigationData(FNavigationRelevantData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNavigationData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalNavModifierComponent.GetNavigationData(FNavigationRelevantData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavModifierComponent.SetFailsafeExtentAndLocation(UE::Math::TVector<double>&,UE::Math::TV
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetFailsafeExtentAndLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalNavModifierComponent.SetFailsafeExtentAndLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    BrzCampoPonteiro AreaClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.AreaClass")); }
    BrzCampoPonteiro AreaClassToReplaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.AreaClassToReplace")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalNavModifierComponent.AssetUserData"); }
    BrzCampoPonteiro CachedNavParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.CachedNavParent")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalNavModifierComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavModifierComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavModifierComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalNavModifierComponent.CustomTag"); }
    BrzCampoPonteiro FailsafeExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.FailsafeExtent")); }
    BrzCampoPonteiro FailsafeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.FailsafeLocation")); }
    BrzCampoPonteiro NavMeshResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.NavMeshResolution")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.OnComponentDeactivated")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalNavModifierComponent.PrimaryComponentTick"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavModifierComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAttachToOwnersRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bAttachToOwnersRoot")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIncludeAgentHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bIncludeAgentHeight")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bReplicates")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavModifierComponent.bUseBPOnComponentTick")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALNAVMODIFIERCOMPONENT_H
