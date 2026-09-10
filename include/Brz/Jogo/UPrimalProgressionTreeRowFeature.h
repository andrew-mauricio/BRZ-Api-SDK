// ==========================================================================
//  UPrimalProgressionTreeRowFeature — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEROWFEATURE_H
#define BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEROWFEATURE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalProgressionTreeRowFeature
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalProgressionTreeRowFeature"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeRowFeature.CheckRowRequirements(FName,TSet<FName,DefaultKeyFuncs<FName,0>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckRowRequirements(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalProgressionTreeRowFeature.CheckRowRequirements(FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeRowFeature.GetNodeRow(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNodeRow(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalProgressionTreeRowFeature.GetNodeRow(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeRowFeature.GetPointsSpentInRow(int,TSet<FName,DefaultKeyFuncs<FName,0>,FDe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPointsSpentInRow(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalProgressionTreeRowFeature.GetPointsSpentInRow(int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeRowFeature.IsRowAvailable(int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefault
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsRowAvailable(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalProgressionTreeRowFeature.IsRowAvailable(int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    BrzCampoPonteiro NodeRowAssignmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeRowFeature.NodeRowAssignments")); }
    BrzCampoPonteiro RowsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeRowFeature.Rows")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEROWFEATURE_H
