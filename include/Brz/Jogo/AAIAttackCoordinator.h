// ==========================================================================
//  AAIAttackCoordinator — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AAIATTACKCOORDINATOR_H
#define BRZ_SDK_JOGO_AAIATTACKCOORDINATOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AActor.h"

struct AAIAttackCoordinator : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AAIAttackCoordinator"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIAttackCoordinator.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=19]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AAIAttackCoordinator.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIAttackCoordinator.UpdateAttackPriorities()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2501+grafo=9/9]]
    void UpdateAttackPriorities() const
    {
        NativeCall<void>(this, "AAIAttackCoordinator.UpdateAttackPriorities()");
    }

    TArray<TWeakObjectPtr<void>>& AttackersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AAIAttackCoordinator.Attackers"); }
    int& MaxAttackersPerTargetField() const
    { return *GetNativePointerField<int*>(this, "AAIAttackCoordinator.MaxAttackersPerTarget"); }
    float& UpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "AAIAttackCoordinator.UpdateInterval"); }
};

#endif  // BRZ_SDK_JOGO_AAIATTACKCOORDINATOR_H
