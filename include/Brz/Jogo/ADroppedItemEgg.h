// ==========================================================================
//  ADroppedItemEgg — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADROPPEDITEMEGG_H
#define BRZ_SDK_JOGO_ADROPPEDITEMEGG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct ABiomeZoneVolume;

#include "ADroppedItem.h"

struct ADroppedItemEgg : public ADroppedItem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADroppedItemEgg"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemEgg.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "ADroppedItemEgg.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemEgg.CalcInsulation()
    // endereco: casamento de bytes com a build de referencia
    void CalcInsulation() const
    {
        NativeCall<void>(this, "ADroppedItemEgg.CalcInsulation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemEgg.NetSpawnDinoEmitter_Implementation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1636+bytes40+grafo=21/21]]
    void NetSpawnDinoEmitter_Implementation() const
    {
        NativeCall<void>(this, "ADroppedItemEgg.NetSpawnDinoEmitter_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemEgg.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "ADroppedItemEgg.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemEgg.UpdateEgg(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateEgg(float a0) const
    {
        NativeCall<void, float>(this, "ADroppedItemEgg.UpdateEgg(float)", a0);
    }

    float& EggThermalInsulationTemperatureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.EggThermalInsulationTemperatureMultiplier"); }
    BrzCampoPonteiro EggVFXScaleMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItemEgg.EggVFXScaleMultiplier")); }
    float& IndoorsHyperThermalInsulationField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.IndoorsHyperThermalInsulation"); }
    float& IndoorsHypoThermalInsulationField() const
    { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.IndoorsHypoThermalInsulation"); }
    ABiomeZoneVolume*& MyBiomeZoneField() const
    { return *GetNativePointerField<ABiomeZoneVolume**>(this, "ADroppedItemEgg.MyBiomeZone"); }
    BrzCampoPonteiro SpawnDinoEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADroppedItemEgg.SpawnDinoEmitter")); }
    BitFieldValue<bool, unsigned __int32> bIsEggTooHot()
    { return { (void*)this, "bIsEggTooHot" }; }
    BitFieldValue<bool, unsigned __int32> bIsEggTooCold()
    { return { (void*)this, "bIsEggTooCold" }; }

};

#endif  // BRZ_SDK_JOGO_ADROPPEDITEMEGG_H
