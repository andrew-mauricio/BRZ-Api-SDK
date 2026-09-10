// ==========================================================================
//  APrimalStructureUnderwaterBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREUNDERWATERBASE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREUNDERWATERBASE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UBoxComponent;
struct USoundBase;
struct UTexture2D;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureUnderwaterBase : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureUnderwaterBase"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.AddedLinkedStructure(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    void AddedLinkedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureUnderwaterBase.AddedLinkedStructure(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=343+grafo=5/5]]
    bool ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureUnderwaterBase.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.AreBasesOpenToEachOther(APrimalStructureUnderwaterBase*,int,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1386+bytes40+grafo=6/6]]
    bool AreBasesOpenToEachOther(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureUnderwaterBase.AreBasesOpenToEachOther(APrimalStructureUnderwaterBase*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureUnderwaterBase.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.CanOpenPorthole(FPorthole&)
    // endereco: casamento de bytes com a build de referencia
    bool CanOpenPorthole(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureUnderwaterBase.CanOpenPorthole(FPorthole&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureUnderwaterBase.ChangedCompartmentFloodState()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void ChangedCompartmentFloodState() const
    {
        NativeCall<void>(this, "APrimalStructureUnderwaterBase.ChangedCompartmentFloodState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureUnderwaterBase.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.DoSetPortholeState(int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    void DoSetPortholeState(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.DoSetPortholeState(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureUnderwaterBase.GetInstanceWaterPlacementMinimumWaterHeight()
    // classe: a funcao mora em APrimalStructure, e APrimalStructureUnderwaterBase herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    BrzPonteiro GetInstanceWaterPlacementMinimumWaterHeight() const
    {
        return NativeCall<void*>(this, "APrimalStructure.GetInstanceWaterPlacementMinimumWaterHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.GetLinkedBaseByPortholeIndex(int,int&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1094+bytes40+chamadores=3+grafo=6/6]]
    BrzPonteiro GetLinkedBaseByPortholeIndex(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalStructureUnderwaterBase.GetLinkedBaseByPortholeIndex(int,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSize
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureUnderwaterBase.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureUnderwaterBase.IsInsideBase_Implementation(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=67]]
    BrzPonteiro IsInsideBase_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureUnderwaterBase.IsInsideBase_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.IsPortholeObstructed(FPorthole&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsPortholeObstructed(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalStructureUnderwaterBase.IsPortholeObstructed(FPorthole&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.OnRep_IsFrameHidden()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=199+chamadores=2]]
    void OnRep_IsFrameHidden() const
    {
        NativeCall<void>(this, "APrimalStructureUnderwaterBase.OnRep_IsFrameHidden()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.PopulatePortholes()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1074+bytes40+grafo=28/28]]
    void PopulatePortholes() const
    {
        NativeCall<void>(this, "APrimalStructureUnderwaterBase.PopulatePortholes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.RefreshLinkedPorthole(FPorthole&)
    // endereco: casamento de bytes com a build de referencia
    void RefreshLinkedPorthole(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureUnderwaterBase.RefreshLinkedPorthole(FPorthole&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureUnderwaterBase.RemovedLinkedStructure(APrimalStructure*,APlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro RemovedLinkedStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureUnderwaterBase.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.SetCurrentViewingPorthole(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SetCurrentViewingPorthole(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureUnderwaterBase.SetCurrentViewingPorthole(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.SetPortholeState(int,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=57]]
    void SetPortholeState(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.SetPortholeState(int,int)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureUnderwaterBase.SetStructureCollisionChannels(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void SetStructureCollisionChannels(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureUnderwaterBase.SetStructureCollisionChannels(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureUnderwaterBase.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.UpdateFloodState(APlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateFloodState(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateFloodState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.UpdateFrameState(APlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateFrameState(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateFrameState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureUnderwaterBase.UpdateLockState(APlayerController*,bool,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateLockState(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateLockState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    BrzCampoPonteiro ClientsViewingPortholesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureUnderwaterBase.ClientsViewingPortholes")); }
    TObjectPtr<UTexture2D>& CloseIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.CloseIcon"); }
    USoundBase*& ClosePortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.ClosePortholeSound"); }
    TArray<void*>& CurrentPinCodesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureUnderwaterBase.CurrentPinCodes"); }
    TObjectPtr<UTexture2D>& DrainAllConnectedIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.DrainAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& DrainCompartmentIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.DrainCompartmentIcon"); }
    TObjectPtr<UTexture2D>& FloodAllConnectedIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.FloodAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& FloodCompartmentIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.FloodCompartmentIcon"); }
    BrzCampoPonteiro FloodedEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureUnderwaterBase.FloodedEmitter")); }
    USoundBase*& FreezePortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.FreezePortholeSound"); }
    TObjectPtr<UTexture2D>& HideConnectedFramesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.HideConnectedFramesIcon"); }
    TObjectPtr<UTexture2D>& HideFrameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.HideFrameIcon"); }
    //  no cache antigo este campo se chamava InteriorBox.
    //  nesta build ele e' `PortholeNameIconColorOverrides` — resolve por NOME.
    UBoxComponent*& InteriorBoxField() const
    { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructureUnderwaterBase.PortholeNameIconColorOverrides"); }
    TObjectPtr<UTexture2D>& OpenIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.OpenIcon"); }
    USoundBase*& OpenPortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.OpenPortholeSound"); }
    TObjectPtr<UTexture2D>& OpenWindowIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.OpenWindowIcon"); }
    TArray<APrimalStructureUnderwaterBase*>& PortholeLinksField() const
    { return *GetNativePointerField<TArray<APrimalStructureUnderwaterBase*>*>(this, "APrimalStructureUnderwaterBase.PortholeLinks"); }
    TArray<void*>& PortholeNameIconColorOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureUnderwaterBase.PortholeNameIconColorOverrides"); }
    TArray<void*>& PortholeNameOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureUnderwaterBase.PortholeNameOverrides"); }
    TArray<void*>& PortholeSaveStateField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureUnderwaterBase.PortholeSaveState"); }
    TArray<void*>& PortholeStateField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureUnderwaterBase.PortholeState"); }
    TArray<void*>& PortholesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureUnderwaterBase.Portholes"); }
    TObjectPtr<UTexture2D>& ShowConnectedFramesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.ShowConnectedFramesIcon"); }
    TObjectPtr<UTexture2D>& ShowFrameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.ShowFrameIcon"); }
    BrzCampoPonteiro UnfloodedEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureUnderwaterBase.UnfloodedEmitter")); }
    USoundBase*& UnfreezePortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.UnfreezePortholeSound"); }
    BitFieldValue<bool, unsigned __int32> bIsFlooded()
    { return { (void*)this, "bIsFlooded" }; }
    BitFieldValue<bool, unsigned __int32> bIsFrameHidden()
    { return { (void*)this, "bIsFrameHidden" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAddingPortholeMUEntries()
    { return { (void*)this, "bPreventAddingPortholeMUEntries" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREUNDERWATERBASE_H
