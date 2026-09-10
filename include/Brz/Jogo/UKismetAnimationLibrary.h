// ==========================================================================
//  UKismetAnimationLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETANIMATIONLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETANIMATIONLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UKismetAnimationLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetAnimationLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetAnimationLibrary.CalculateDirection(UE::Math::TVector<double>&,UE::Math::TRotator<double>
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CalculateDirection(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetAnimationLibrary.CalculateDirection(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory(float,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro K2_CalculateVelocityFromPositionHistory(float a0, void* a1, void* a2, int a3, float a4, float a5)
    {
        return NativeCall<void*, float, void*, void*, int, float, float>(nullptr, "UKismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory(float,UE::Math::TVector<double>,FPositionHistory&,int,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetAnimationLibrary.K2_CalculateVelocityFromSockets(float,USkeletalMeshComponent*,FName,FNam
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro K2_CalculateVelocityFromSockets(float a0, void* a1, unsigned long long a2, unsigned long long a3, int a4, void* a5, void* a6, int a7, float a8, float a9, int a10, void* a11)
    {
        return NativeCall<void*, float, void*, unsigned long long, unsigned long long, int, void*, void*, int, float, float, int, void*>(nullptr, "UKismetAnimationLibrary.K2_CalculateVelocityFromSockets(float,USkeletalMeshComponent*,FName,FName,ERelativeTransformSpace,UE::Math::TVector<double>,FPositionHistory&,int,float,float,EEasingFuncType,FRuntimeFloatCurve&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetAnimationLibrary.K2_EndProfilingTimer(bool,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro K2_EndProfilingTimer(bool a0, const FString& a1)
    {
        return NativeCall<void*, bool, void*>(nullptr, "UKismetAnimationLibrary.K2_EndProfilingTimer(bool,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro K2_EndProfilingTimer(bool a0, FString* a1)
    { return K2_EndProfilingTimer(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetAnimationLibrary.K2_LookAt(UE::Math::TTransform<double>&,UE::Math::TVector<double>&,UE::M
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro K2_LookAt(void* a0, void* a1, void* a2, bool a3, void* a4, float a5)
    {
        return NativeCall<void*, void*, void*, void*, bool, void*, float>(nullptr, "UKismetAnimationLibrary.K2_LookAt(UE::Math::TTransform<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetAnimationLibrary.K2_StartProfilingTimer()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro K2_StartProfilingTimer()
    {
        return NativeCall<void*>(nullptr, "UKismetAnimationLibrary.K2_StartProfilingTimer()");
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETANIMATIONLIBRARY_H
