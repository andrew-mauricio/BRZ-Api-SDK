// ==========================================================================
//  UShapeComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHAPECOMPONENT_H
#define BRZ_SDK_JOGO_USHAPECOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UPrimitiveComponent.h"

struct UShapeComponent : public UPrimitiveComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShapeComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShapeComponent.IsNavigationRelevant()
    // endereco: casamento de bytes com a build de referencia
    bool IsNavigationRelevant() const
    {
        return NativeCall<bool>(this, "UShapeComponent.IsNavigationRelevant()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UShapeComponent.ShouldCollideWhenPlacing()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldCollideWhenPlacing() const
    {
        return NativeCall<bool>(this, "UShapeComponent.ShouldCollideWhenPlacing()");
    }

    BrzCampoPonteiro AreaClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShapeComponent.AreaClassOverride")); }
    BrzCampoPonteiro LineThicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShapeComponent.LineThickness")); }
    BrzCampoPonteiro ShapeBodySetupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShapeComponent.ShapeBodySetup")); }
    BrzCampoPonteiro ShapeColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShapeComponent.ShapeColor")); }
    BitFieldValue<bool, unsigned __int32> bDrawOnlyIfSelected()
    { return { (void*)this, "bDrawOnlyIfSelected" }; }
    BitFieldValue<bool, unsigned __int32> bShouldCollideWhenPlacing()
    { return { (void*)this, "bShouldCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDynamicObstacle()
    { return { (void*)this, "bDynamicObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bUseSystemDefaultObstacleAreaClass()
    { return { (void*)this, "bUseSystemDefaultObstacleAreaClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseArchetypeBodySetup()
    { return { (void*)this, "bUseArchetypeBodySetup" }; }

};

#endif  // BRZ_SDK_JOGO_USHAPECOMPONENT_H
