// ==========================================================================
//  FLevelCollection — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELCOLLECTION_H
#define BRZ_SDK_JOGO_FLEVELCOLLECTION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AGameStateBase;
struct ULevel;
struct UNetDriver;


struct FLevelCollection
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelCollection"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelCollection.AddLevel(ULevel*const)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro AddLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FLevelCollection.AddLevel(ULevel*const)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelCollection.RemoveLevel(ULevel*const)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro RemoveLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FLevelCollection.RemoveLevel(ULevel*const)", a0);
    }

    BrzCampoPonteiro DemoNetDriverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelCollection.DemoNetDriver")); }
    TObjectPtr<AGameStateBase>& GameStateField() const
    { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "FLevelCollection.GameState"); }
    TArray<void*>& LevelsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FLevelCollection.Levels"); }
    TObjectPtr<UNetDriver>& NetDriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "FLevelCollection.NetDriver"); }
    TObjectPtr<ULevel>& PersistentLevelField() const
    { return *GetNativePointerField<TObjectPtr<ULevel>*>(this, "FLevelCollection.PersistentLevel"); }
};

#endif  // BRZ_SDK_JOGO_FLEVELCOLLECTION_H
