// ==========================================================================
//  UShooterActorChannel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERACTORCHANNEL_H
#define BRZ_SDK_JOGO_USHOOTERACTORCHANNEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterActorChannel
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterActorChannel"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterActorChannel.ReadyForDormancy(bool)
    // endereco: cache_pdb_25090264
    static BrzPonteiro ReadyForDormancy(bool a0)
    {
        return NativeCall<void*, bool>(nullptr, "UShooterActorChannel.ReadyForDormancy(bool)", a0);
    }

    BrzCampoPonteiro ActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterActorChannel.Actor")); }
    BrzCampoPonteiro ConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterActorChannel.Connection")); }
    BrzCampoPonteiro CreateSubObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterActorChannel.CreateSubObjects")); }
};

#endif  // BRZ_SDK_JOGO_USHOOTERACTORCHANNEL_H
