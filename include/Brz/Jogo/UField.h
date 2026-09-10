// ==========================================================================
//  UField — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UFIELD_H
#define BRZ_SDK_JOGO_UFIELD_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UClass;
struct UStruct;

#include "UObject.h"

struct UField : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UField"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UField.AddCppProperty(FProperty*)
    // endereco: cache_pdb_25090264
    void AddCppProperty(void* a0) const
    {
        NativeCall<void, void*>(this, "UField.AddCppProperty(FProperty*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UField.GetAuthoredName()
    // endereco: casamento de bytes com a build de referencia
    void GetAuthoredName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UField.GetAuthoredName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UField.GetOwnerClass()
    // endereco: casamento de bytes com a build de referencia
    UClass* GetOwnerClass() const
    {
        return NativeCall<UClass*>(this, "UField.GetOwnerClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UField.GetOwnerStruct()
    // endereco: casamento de bytes com a build de referencia
    UStruct* GetOwnerStruct() const
    {
        return NativeCall<UStruct*>(this, "UField.GetOwnerStruct()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UField.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UField.Serialize(FArchive&)", a0);
    }

    UField*& NextField() const
    { return *GetNativePointerField<UField**>(this, "UField.Next"); }
};

#endif  // BRZ_SDK_JOGO_UFIELD_H
