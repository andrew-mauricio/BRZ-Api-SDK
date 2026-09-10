// ==========================================================================
//  AHazardTrigger — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AHAZARDTRIGGER_H
#define BRZ_SDK_JOGO_AHAZARDTRIGGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "ABaseBoxTrigger.h"

struct AHazardTrigger : public ABaseBoxTrigger
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AHazardTrigger"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger.Activate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Activate() const
    {
        NativeCall<void>(this, "AHazardTrigger.Activate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger.Deactivate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=51]]
    void Deactivate() const
    {
        NativeCall<void>(this, "AHazardTrigger.Deactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger.OnConstruction(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    void OnConstruction(void* a0) const
    {
        NativeCall<void, void*>(this, "AHazardTrigger.OnConstruction(UE::Math::TTransform<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,
    // endereco: casamento de bytes com a build de referencia
    void OnTriggerBeginOverlap(void* a0, void* a1, void* a2, int a3, bool a4, void* a5) const
    {
        NativeCall<void, void*, void*, void*, int, bool, void*>(this, "AHazardTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHazardTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    void OnTriggerEndOverlap(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "AHazardTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", a0, a1, a2, a3);
    }

    BrzCampoPonteiro BoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger.Bounds")); }
    double& LastActivationTimeField() const
    { return *GetNativePointerField<double*>(this, "AHazardTrigger.LastActivationTime"); }
    BrzCampoPonteiro SplineTraceChannelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHazardTrigger.SplineTraceChannel")); }
    BitFieldValue<bool, unsigned __int32> bConformToTerrain()
    { return { (void*)this, "bConformToTerrain" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }

};

#endif  // BRZ_SDK_JOGO_AHAZARDTRIGGER_H
