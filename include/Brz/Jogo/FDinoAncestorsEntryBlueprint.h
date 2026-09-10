// ==========================================================================
//  FDinoAncestorsEntryBlueprint — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOANCESTORSENTRYBLUEPRINT_H
#define BRZ_SDK_JOGO_FDINOANCESTORSENTRYBLUEPRINT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FDinoAncestorsEntryBlueprint
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoAncestorsEntryBlueprint"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    int& FemaleDinoID1Field() const
    { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID1"); }
    int& FemaleDinoID2Field() const
    { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID2"); }
    FString& FemaleNameField() const
    { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.FemaleName"); }
    int& MaleDinoID1Field() const
    { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID1"); }
    int& MaleDinoID2Field() const
    { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID2"); }
    FString& MaleNameField() const
    { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.MaleName"); }
};

#endif  // BRZ_SDK_JOGO_FDINOANCESTORSENTRYBLUEPRINT_H
