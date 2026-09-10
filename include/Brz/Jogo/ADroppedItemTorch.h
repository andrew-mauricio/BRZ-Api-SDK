// ==========================================================================
//  ADroppedItemTorch — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADROPPEDITEMTORCH_H
#define BRZ_SDK_JOGO_ADROPPEDITEMTORCH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "ADroppedItem.h"

struct ADroppedItemTorch : public ADroppedItem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADroppedItemTorch"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "ADroppedItemTorch.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.GetDroppedItemLifeTime()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
    float GetDroppedItemLifeTime() const
    {
        return NativeCall<float>(this, "ADroppedItemTorch.GetDroppedItemLifeTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.HandleCollisionWithObjects(FHitResult)
    // endereco: casamento de bytes com a build de referencia
    void HandleCollisionWithObjects(void* a0) const
    {
        NativeCall<void, void*>(this, "ADroppedItemTorch.HandleCollisionWithObjects(FHitResult)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.LoadData()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=485+grafo=8/8]]
    void LoadData() const
    {
        NativeCall<void>(this, "ADroppedItemTorch.LoadData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.OnRep_FireIsOn()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_FireIsOn() const
    {
        NativeCall<void>(this, "ADroppedItemTorch.OnRep_FireIsOn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.SetDroppedItemLifeTime()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=475+grafo=8/8]]
    void SetDroppedItemLifeTime() const
    {
        NativeCall<void>(this, "ADroppedItemTorch.SetDroppedItemLifeTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemTorch.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "ADroppedItemTorch.Tick(float)", a0);
    }

    double& LastDurabilityConsumptionTimeField() const
    { return *GetNativePointerField<double*>(this, "ADroppedItemTorch.LastDurabilityConsumptionTime"); }
    float& LifeTimeMeterField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.LifeTimeMeter"); }
    float& PassiveDurabilityCostIntervalField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.PassiveDurabilityCostInterval"); }
    float& PassiveDurabilityCostPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.PassiveDurabilityCostPerInterval"); }
    BitFieldValue<bool, unsigned __int32> FireIsOn()
    { return { (void*)this, "FireIsOn" }; }

};

#endif  // BRZ_SDK_JOGO_ADROPPEDITEMTORCH_H
