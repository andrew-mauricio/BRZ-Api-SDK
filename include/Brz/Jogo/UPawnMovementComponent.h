// ==========================================================================
//  UPawnMovementComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPAWNMOVEMENTCOMPONENT_H
#define BRZ_SDK_JOGO_UPAWNMOVEMENTCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AController;
struct APawn;

#include "UMovementComponent.h"

struct UPawnMovementComponent : public UMovementComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPawnMovementComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.AddInputVector(UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddInputVector(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UPawnMovementComponent.AddInputVector(UE::Math::TVector<double>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.GetController()
    // endereco: cache_pdb_25090264
    AController* GetController() const
    {
        return NativeCall<AController*>(this, "UPawnMovementComponent.GetController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.IsMoveInputIgnored()
    // endereco: cache_pdb_25090264
    bool IsMoveInputIgnored() const
    {
        return NativeCall<bool>(this, "UPawnMovementComponent.IsMoveInputIgnored()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.MarkForClientCameraUpdate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void MarkForClientCameraUpdate() const
    {
        NativeCall<void>(this, "UPawnMovementComponent.MarkForClientCameraUpdate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.OnTeleported()
    // endereco: casamento de bytes com a build de referencia
    void OnTeleported() const
    {
        NativeCall<void>(this, "UPawnMovementComponent.OnTeleported()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.RequestPathMove(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void RequestPathMove(void* a0) const
    {
        NativeCall<void, void*>(this, "UPawnMovementComponent.RequestPathMove(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UPawnMovementComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPawnMovementComponent.SetUpdatedComponent(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetUpdatedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UPawnMovementComponent.SetUpdatedComponent(USceneComponent*)", a0);
    }

    TObjectPtr<APawn>& PawnOwnerField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPawnMovementComponent.PawnOwner"); }
};

#endif  // BRZ_SDK_JOGO_UPAWNMOVEMENTCOMPONENT_H
