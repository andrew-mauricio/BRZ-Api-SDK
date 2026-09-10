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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=49]]
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
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToOwnersRoot()
    { return { (void*)this, "bAttachToOwnersRoot" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIncludeAgentHeight()
    { return { (void*)this, "bIncludeAgentHeight" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
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
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALNAVMODIFIERCOMPONENT_H
