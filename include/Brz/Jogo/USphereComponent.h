// ==========================================================================
//  USphereComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USPHERECOMPONENT_H
#define BRZ_SDK_JOGO_USPHERECOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UShapeComponent.h"

struct USphereComponent : public UShapeComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("USphereComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USphereComponent.AreSymmetricRotations(UE::Math::TQuat<double>&,UE::Math::TQuat<double>&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    bool AreSymmetricRotations(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "USphereComponent.AreSymmetricRotations(UE::Math::TQuat<double>&,UE::Math::TQuat<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USphereComponent.CalcBoundingCylinder(float&,float&)
    // classe: a funcao mora em USceneComponent, e USphereComponent herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=58]]
    void CalcBoundingCylinder(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "USceneComponent.CalcBoundingCylinder(float&,float&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USphereComponent.IsZeroExtent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsZeroExtent() const
    {
        return NativeCall<bool>(this, "USphereComponent.IsZeroExtent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USphereComponent.SetSphereRadius(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSphereRadius(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "USphereComponent.SetSphereRadius(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USphereComponent.UpdateBodySetup()
    // endereco: casamento de bytes com a build de referencia
    void UpdateBodySetup() const
    {
        NativeCall<void>(this, "USphereComponent.UpdateBodySetup()");
    }

    float& SphereRadiusField() const
    { return *GetNativePointerField<float*>(this, "USphereComponent.SphereRadius"); }
};

#endif  // BRZ_SDK_JOGO_USPHERECOMPONENT_H
