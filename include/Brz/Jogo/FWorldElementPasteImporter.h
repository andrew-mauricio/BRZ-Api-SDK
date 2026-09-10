// ==========================================================================
//  FWorldElementPasteImporter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDELEMENTPASTEIMPORTER_H
#define BRZ_SDK_JOGO_FWORLDELEMENTPASTEIMPORTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldElementPasteImporter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldElementPasteImporter"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro CurrentSelectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldElementPasteImporter.CurrentSelection")); }
    BrzCampoPonteiro TextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldElementPasteImporter.Text")); }
    BrzCampoPonteiro WorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldElementPasteImporter.World")); }
};

#endif  // BRZ_SDK_JOGO_FWORLDELEMENTPASTEIMPORTER_H
