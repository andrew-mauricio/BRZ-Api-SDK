// ==========================================================================
//  UKismetMaterialLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETMATERIALLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETMATERIALLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInstanceDynamic;


struct UKismetMaterialLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetMaterialLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMaterialLibrary.CreateDynamicMaterialInstance(UObject*,UMaterialInterface*,FName,EMIDCrea
    // endereco: casamento de bytes com a build de referencia
    static UMaterialInstanceDynamic* CreateDynamicMaterialInstance(void* a0, void* a1, unsigned long long a2, int a3)
    {
        return NativeCall<UMaterialInstanceDynamic*, void*, void*, unsigned long long, int>(nullptr, "UKismetMaterialLibrary.CreateDynamicMaterialInstance(UObject*,UMaterialInterface*,FName,EMIDCreationFlags)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMaterialLibrary.GetScalarParameterValue(UObject*,UMaterialParameterCollection*,FName)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetScalarParameterValue(void* a0, void* a1, unsigned long long a2)
    {
        return NativeCall<void*, void*, void*, unsigned long long>(nullptr, "UKismetMaterialLibrary.GetScalarParameterValue(UObject*,UMaterialParameterCollection*,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMaterialLibrary.GetVectorParameterValue(UObject*,UMaterialParameterCollection*,FName)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetVectorParameterValue(void* a0, void* a1, unsigned long long a2)
    {
        return NativeCall<void*, void*, void*, unsigned long long>(nullptr, "UKismetMaterialLibrary.GetVectorParameterValue(UObject*,UMaterialParameterCollection*,FName)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMaterialLibrary.SetScalarParameterValue(UObject*,UMaterialParameterCollection*,FName,floa
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetScalarParameterValue(void* a0, void* a1, unsigned long long a2, float a3)
    {
        return NativeCall<void*, void*, void*, unsigned long long, float>(nullptr, "UKismetMaterialLibrary.SetScalarParameterValue(UObject*,UMaterialParameterCollection*,FName,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMaterialLibrary.SetVectorParameterValue(UObject*,UMaterialParameterCollection*,FName,FLin
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetVectorParameterValue(void* a0, void* a1, unsigned long long a2, void* a3)
    {
        return NativeCall<void*, void*, void*, unsigned long long, void*>(nullptr, "UKismetMaterialLibrary.SetVectorParameterValue(UObject*,UMaterialParameterCollection*,FName,FLinearColor&)", a0, a1, a2, a3);
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETMATERIALLIBRARY_H
