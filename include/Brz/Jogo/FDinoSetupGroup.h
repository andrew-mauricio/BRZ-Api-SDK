// ==========================================================================
//  FDinoSetupGroup — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOSETUPGROUP_H
#define BRZ_SDK_JOGO_FDINOSETUPGROUP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;


struct FDinoSetupGroup
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoSetupGroup"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FDinoSetupGroup.operator=(FDinoSetupGroup&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FDinoSetupGroup.operator=(FDinoSetupGroup&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FDinoSetupGroup.operator=(FDinoSetupGroup&)
    //      (colide com FDinoSetupGroup.operator=(FDinoSetupGroup&&))

    TArray<void*>& EntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoSetupGroup.Entries"); }
    TArray<void*>& EntriesSpawnNumberLimitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoSetupGroup.EntriesSpawnNumberLimits"); }
    FName& GroupNameField() const
    { return *GetNativePointerField<FName*>(this, "FDinoSetupGroup.GroupName"); }
    float& RandomWeightField() const
    { return *GetNativePointerField<float*>(this, "FDinoSetupGroup.RandomWeight"); }
};

#endif  // BRZ_SDK_JOGO_FDINOSETUPGROUP_H
