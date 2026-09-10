// ==========================================================================
//  APrimalStructureTribeFlag — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETRIBEFLAG_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETRIBEFLAG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "APrimalStructure.h"

struct APrimalStructureTribeFlag : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTribeFlag"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTribeFlag.AllowColoringBy(APlayerController*,UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowColoringBy(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructureTribeFlag.AllowColoringBy(APlayerController*,UObject*)", a0, a1);
    }

    unsigned int& TribeIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTribeFlag.TribeID"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETRIBEFLAG_H
