// ==========================================================================
//  ADefaultPawn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADEFAULTPAWN_H
#define BRZ_SDK_JOGO_ADEFAULTPAWN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UPawnMovementComponent;
struct USphereComponent;
struct UStaticMeshComponent;

#include "APrimalPawn.h"

struct ADefaultPawn : public APrimalPawn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADefaultPawn"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADefaultPawn.MoveForward(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MoveForward(float a0) const
    {
        NativeCall<void, float>(this, "ADefaultPawn.MoveForward(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADefaultPawn.MoveRight(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void MoveRight(float a0) const
    {
        NativeCall<void, float>(this, "ADefaultPawn.MoveRight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADefaultPawn.SetupPlayerInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "ADefaultPawn.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADefaultPawn.UpdateNavigationRelevance()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void UpdateNavigationRelevance() const
    {
        NativeCall<void>(this, "ADefaultPawn.UpdateNavigationRelevance()");
    }

    float& BaseLookUpRateField() const
    { return *GetNativePointerField<float*>(this, "ADefaultPawn.BaseLookUpRate"); }
    float& BaseTurnRateField() const
    { return *GetNativePointerField<float*>(this, "ADefaultPawn.BaseTurnRate"); }
    TObjectPtr<USphereComponent>& CollisionComponentField() const
    { return *GetNativePointerField<TObjectPtr<USphereComponent>*>(this, "ADefaultPawn.CollisionComponent"); }
    TObjectPtr<UStaticMeshComponent>& MeshComponentField() const
    { return *GetNativePointerField<TObjectPtr<UStaticMeshComponent>*>(this, "ADefaultPawn.MeshComponent"); }
    TObjectPtr<UPawnMovementComponent>& MovementComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPawnMovementComponent>*>(this, "ADefaultPawn.MovementComponent"); }
    BitFieldValue<bool, unsigned __int32> bAddDefaultMovementBindings()
    { return { (void*)this, "bAddDefaultMovementBindings" }; }

};

#endif  // BRZ_SDK_JOGO_ADEFAULTPAWN_H
