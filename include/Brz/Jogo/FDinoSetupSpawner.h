// ==========================================================================
//  FDinoSetupSpawner — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOSETUPSPAWNER_H
#define BRZ_SDK_JOGO_FDINOSETUPSPAWNER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FDinoSetupSpawner
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoSetupSpawner"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro DinoSetup_4_B69D37274B49C5BF304B1CA78C982791Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetupSpawner.DinoSetup_4_B69D37274B49C5BF304B1CA78C982791")); }
    BrzCampoPonteiro MaxNumToSpawn_13_B06D996842D707E354F7C1B2541C69CEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetupSpawner.MaxNumToSpawn_13_B06D996842D707E354F7C1B2541C69CE")); }
    BrzCampoPonteiro MinNumToSpawn_10_8B491FA54277B0FE198BE3A526DD9F8AField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetupSpawner.MinNumToSpawn_10_8B491FA54277B0FE198BE3A526DD9F8A")); }
    BrzCampoPonteiro SpawnWeight_6_DE5989E3414D815E65CD039B9B592F2FField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetupSpawner.SpawnWeight_6_DE5989E3414D815E65CD039B9B592F2F")); }
};

#endif  // BRZ_SDK_JOGO_FDINOSETUPSPAWNER_H
