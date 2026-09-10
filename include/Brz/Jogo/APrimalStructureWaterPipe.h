// ==========================================================================
//  APrimalStructureWaterPipe — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREWATERPIPE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREWATERPIPE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInterface;

#include "APrimalStructure.h"

struct APrimalStructureWaterPipe : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureWaterPipe"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.AddedLinkedStructure(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=292]]
    void AddedLinkedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureWaterPipe.AddedLinkedStructure(APrimalStructure*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureWaterPipe.BPOnWaterStateChange(bool)
    // endereco: casamento de bytes com a build de referencia
    void BPOnWaterStateChange(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureWaterPipe.BPOnWaterStateChange(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=32]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.CheckForWater(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*
    // endereco: casamento de bytes com a build de referencia
    bool CheckForWater(void* a0, bool a1, void* a2) const
    {
        return NativeCall<bool, void*, bool, void*>(this, "APrimalStructureWaterPipe.CheckForWater(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>&,bool,APrimalStructureWaterPipe*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.FinalLoadedFromSaveGame()
    // endereco: casamento de bytes com a build de referencia
    void FinalLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.FinalLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.GetAllLinkedPipes(TArray<APrimalStructureWaterPipe*,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    void GetAllLinkedPipes(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureWaterPipe.GetAllLinkedPipes(TArray<APrimalStructureWaterPipe*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAlloc
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=335+grafo=11/11]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureWaterPipe.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureWaterPipe.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.Internal_CheckForNonPipeLink()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool Internal_CheckForNonPipeLink() const
    {
        return NativeCall<bool>(this, "APrimalStructureWaterPipe.Internal_CheckForNonPipeLink()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.Internal_PushNonPipeLink(bool)
    // endereco: casamento de bytes com a build de referencia
    void Internal_PushNonPipeLink(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureWaterPipe.Internal_PushNonPipeLink(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureWaterPipe.OnRep_HasWater(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void OnRep_HasWater(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureWaterPipe.OnRep_HasWater(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.OnRep_IsMeshHidden()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_IsMeshHidden() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.OnRep_IsMeshHidden()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.ParseGraphForWater(TArray<APrimalStructure*,TSizedDefaultAllocator<32>
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    void ParseGraphForWater(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructureWaterPipe.ParseGraphForWater(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,APrimalStructureWaterPipe*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureWaterPipe.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.PostInitializeComponents()
    // classe: a funcao mora em APrimalStructure, e APrimalStructureWaterPipe herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=282+grafo=5/5]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructure.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.PreLinkedStructure()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=86]]
    void PreLinkedStructure() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.PreLinkedStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.PushWaterState(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void PushWaterState(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalStructureWaterPipe.PushWaterState(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.RefreshLinkedToNonPipeState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void RefreshLinkedToNonPipeState() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshLinkedToNonPipeState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.RefreshWaterState()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=484+grafo=3/3]]
    void RefreshWaterState() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshWaterState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureWaterPipe.RemovedLinkedStructure(APrimalStructure*,APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    BrzPonteiro RemovedLinkedStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureWaterPipe.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.SetHasWater(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetHasWater(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureWaterPipe.SetHasWater(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureWaterPipe.SubtractWaterFromConnections(float,float&,TArray<APrimalStructure*,TSi
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SubtractWaterFromConnections(float a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, float, void*, void*, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections(float,float&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.SubtractWaterFromConnections_Internal(float,float&,TArray<APrimalStruc
    // endereco: casamento de bytes com a build de referencia
    void SubtractWaterFromConnections_Internal(float a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, float, void*, void*, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections_Internal(float,float&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureWaterPipe.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureWaterPipe.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructureWaterPipe.Unstasis()");
    }

    float& AutoDestroyPeriodWhenUnconnectedToNonPipeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureWaterPipe.AutoDestroyPeriodWhenUnconnectedToNonPipe"); }
    UMaterialInterface*& HasWaterMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureWaterPipe.HasWaterMaterial"); }
    UMaterialInterface*& NoWaterMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureWaterPipe.NoWaterMaterial"); }
    int& WaterMaterialIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureWaterPipe.WaterMaterialIndex"); }
    BitFieldValue<bool, unsigned __int32> bAlwaysHasWater()
    { return { (void*)this, "bAlwaysHasWater" }; }
    BitFieldValue<bool, unsigned __int32> bHasWater()
    { return { (void*)this, "bHasWater" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeshHidden()
    { return { (void*)this, "bIsMeshHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterPipe()
    { return { (void*)this, "bIsWaterPipe" }; }
    BitFieldValue<bool, unsigned __int32> bConnectedToNonPipe()
    { return { (void*)this, "bConnectedToNonPipe" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRefreshPipeMaterials()
    { return { (void*)this, "bUseBPOnRefreshPipeMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnWaterStateChange()
    { return { (void*)this, "bUseBPOnWaterStateChange" }; }
    BitFieldValue<bool, unsigned __int32> bCanHideMesh()
    { return { (void*)this, "bCanHideMesh" }; }
    BitFieldValue<bool, unsigned __int32> bHasRefreshedConnectedToNonPipe()
    { return { (void*)this, "bHasRefreshedConnectedToNonPipe" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREWATERPIPE_H
