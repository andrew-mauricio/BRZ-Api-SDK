// ==========================================================================
//  AHoverDronePawn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AHOVERDRONEPAWN_H
#define BRZ_SDK_JOGO_AHOVERDRONEPAWN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "ADefaultPawn.h"

struct AHoverDronePawn : public ADefaultPawn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AHoverDronePawn"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.BeginLookat()
    // endereco: casamento de bytes com a build de referencia
    void BeginLookat() const
    {
        NativeCall<void>(this, "AHoverDronePawn.BeginLookat()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.LookUpAccel(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void LookUpAccel(float a0) const
    {
        NativeCall<void, float>(this, "AHoverDronePawn.LookUpAccel(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.MoveForward(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void MoveForward(float a0) const
    {
        NativeCall<void, float>(this, "AHoverDronePawn.MoveForward(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.MoveRight(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void MoveRight(float a0) const
    {
        NativeCall<void, float>(this, "AHoverDronePawn.MoveRight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.MoveUp(float)
    // endereco: casamento de bytes com a build de referencia
    void MoveUp(float a0) const
    {
        NativeCall<void, float>(this, "AHoverDronePawn.MoveUp(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.SetupPlayerInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "AHoverDronePawn.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHoverDronePawn.TurnAccel(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TurnAccel(float a0) const
    {
        NativeCall<void, float>(this, "AHoverDronePawn.TurnAccel(float)", a0);
    }

    BrzCampoPonteiro DroneTiltInterpolatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHoverDronePawn.DroneTiltInterpolator")); }
    BrzCampoPonteiro TiltLimitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHoverDronePawn.TiltLimits")); }
    BrzCampoPonteiro TiltUpVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AHoverDronePawn.TiltUpVector")); }
    bool& bAllowSpeedChangeField() const
    { return *GetNativePointerField<bool*>(this, "AHoverDronePawn.bAllowSpeedChange"); }
    BitFieldValue<bool, unsigned __int32> bAllowSpeedChange()
    { return { (void*)this, "bAllowSpeedChange" }; }
    BitFieldValue<bool, unsigned __int32> bConstrainMovementToXYPlane()
    { return { (void*)this, "bConstrainMovementToXYPlane" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTiltLimits()
    { return { (void*)this, "bEnableTiltLimits" }; }
    BitFieldValue<bool, unsigned __int32> bIsTiltingEnabled()
    { return { (void*)this, "bIsTiltingEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_AHOVERDRONEPAWN_H
