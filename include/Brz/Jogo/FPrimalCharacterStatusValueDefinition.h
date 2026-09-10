// ==========================================================================
//  FPrimalCharacterStatusValueDefinition — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSVALUEDEFINITION_H
#define BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSVALUEDEFINITION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UTexture2D;


struct FPrimalCharacterStatusValueDefinition
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCharacterStatusValueDefinition"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    UTexture2D*& StatusValueIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterStatusValueDefinition.StatusValueIcon"); }
    FString& StatusValueNameField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusValueDefinition.StatusValueName"); }
    bool& bDisplayHideCurrentValueField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueDefinition.bDisplayHideCurrentValue"); }
    BitFieldValue<bool, unsigned __int32> bDisplayAsPercent()
    { return { (void*)this, "bDisplayAsPercent" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHideCurrentValue()
    { return { (void*)this, "bDisplayHideCurrentValue" }; }
    BitFieldValue<bool, unsigned __int32> bLevelUpSetToMaxValue()
    { return { (void*)this, "bLevelUpSetToMaxValue" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSVALUEDEFINITION_H
