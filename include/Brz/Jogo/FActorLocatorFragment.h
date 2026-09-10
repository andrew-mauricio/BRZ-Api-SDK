// ==========================================================================
//  FActorLocatorFragment — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FACTORLOCATORFRAGMENT_H
#define BRZ_SDK_JOGO_FACTORLOCATORFRAGMENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FActorLocatorFragment
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorLocatorFragment"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorLocatorFragment.ComputePriority(UObject*,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputePriority(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FActorLocatorFragment.ComputePriority(UObject*,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorLocatorFragment.Resolve(UE::UniversalObjectLocator::FResolveParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Resolve(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorLocatorFragment.Resolve(UE::UniversalObjectLocator::FResolveParams&)", a0);
    }

    BrzCampoPonteiro PathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorLocatorFragment.Path")); }
};

#endif  // BRZ_SDK_JOGO_FACTORLOCATORFRAGMENT_H
