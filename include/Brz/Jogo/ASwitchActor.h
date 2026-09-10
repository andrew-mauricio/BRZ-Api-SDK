// ==========================================================================
//  ASwitchActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASWITCHACTOR_H
#define BRZ_SDK_JOGO_ASWITCHACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USceneComponent;

#include "AActor.h"

struct ASwitchActor : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ASwitchActor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASwitchActor.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "ASwitchActor.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASwitchActor.SelectOption(int)
    // endereco: casamento de bytes com a build de referencia
    void SelectOption(int a0) const
    {
        NativeCall<void, int>(this, "ASwitchActor.SelectOption(int)", a0);
    }

    int& LastSelectedOptionField() const
    { return *GetNativePointerField<int*>(this, "ASwitchActor.LastSelectedOption"); }
    TObjectPtr<USceneComponent>& SceneComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "ASwitchActor.SceneComponent"); }
};

#endif  // BRZ_SDK_JOGO_ASWITCHACTOR_H
