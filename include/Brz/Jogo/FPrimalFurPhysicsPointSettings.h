// ==========================================================================
//  FPrimalFurPhysicsPointSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALFURPHYSICSPOINTSETTINGS_H
#define BRZ_SDK_JOGO_FPRIMALFURPHYSICSPOINTSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalFurPhysicsPointSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalFurPhysicsPointSettings"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro DampingModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.DampingModifier")); }
    BrzCampoPonteiro GravityFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.GravityFactor")); }
    BrzCampoPonteiro MaxDistanceToRestPosFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.MaxDistanceToRestPosFactor")); }
    BrzCampoPonteiro PivotPosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.PivotPos")); }
    BrzCampoPonteiro RestPosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.RestPos")); }
    BrzCampoPonteiro SocketNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.SocketName")); }
    BrzCampoPonteiro SpringFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalFurPhysicsPointSettings.SpringFactor")); }
    BitFieldValue<bool, unsigned __int32> bEnableDistanceConstraint()
    { return { (void*)this, "bEnableDistanceConstraint" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePivotConstraint()
    { return { (void*)this, "bEnablePivotConstraint" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALFURPHYSICSPOINTSETTINGS_H
