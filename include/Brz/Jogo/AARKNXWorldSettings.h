// ==========================================================================
//  AARKNXWorldSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AARKNXWORLDSETTINGS_H
#define BRZ_SDK_JOGO_AARKNXWORLDSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AWorldSettings.h"

struct AARKNXWorldSettings : public AWorldSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AARKNXWorldSettings"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AARKNXWorldSettings.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void BeginPlay() const
    {
        NativeCall<void>(this, "AARKNXWorldSettings.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AARKNXWorldSettings.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AARKNXWorldSettings.Tick(float)", a0);
    }

    TArray<TWeakObjectPtr<void>>& DeferredAudioActivatesField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AARKNXWorldSettings.DeferredAudioActivates"); }
    TArray<TWeakObjectPtr<void>>& DeferredMeshNavigationUpdatesField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AARKNXWorldSettings.DeferredMeshNavigationUpdates"); }
    BrzCampoPonteiro NXSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AARKNXWorldSettings.NXSettings")); }
    BrzCampoPonteiro PointLightReductionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AARKNXWorldSettings.PointLightReduction")); }
    BrzCampoPonteiro SubmapToDataLayerMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AARKNXWorldSettings.SubmapToDataLayerMap")); }
};

#endif  // BRZ_SDK_JOGO_AARKNXWORLDSETTINGS_H
