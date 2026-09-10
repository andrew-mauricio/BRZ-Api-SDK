// ==========================================================================
//  UKismetMathLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETMATHLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETMATHLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UKismetMathLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetMathLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.ClassIsChildOf(TSubclassOf<UObject>,TSubclassOf<UObject>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ClassIsChildOf(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.ClassIsChildOf(TSubclassOf<UObject>,TSubclassOf<UObject>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.ComposeRotators(UE::Math::TRotator<double>,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ComposeRotators(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.ComposeRotators(UE::Math::TRotator<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.CreateVectorFromYawPitch(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateVectorFromYawPitch(float a0, float a1, float a2)
    {
        return NativeCall<void*, float, float, float>(nullptr, "UKismetMathLibrary.CreateVectorFromYawPitch(float,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.FindRelativeLookAtRotation(UE::Math::TTransform<double>&,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindRelativeLookAtRotation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.FindRelativeLookAtRotation(UE::Math::TTransform<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.FlattenVector(UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static BrzPonteiro FlattenVector(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetMathLibrary.FlattenVector(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.FloatSpringInterp(float,float,FFloatSpringState&,float,float,float,float,floa
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FloatSpringInterp(float a0, float a1, void* a2, float a3, float a4, float a5, float a6, float a7, bool a8, float a9, float a10, bool a11)
    {
        return NativeCall<void*, float, float, void*, float, float, float, float, float, bool, float, float, bool>(nullptr, "UKismetMathLibrary.FloatSpringInterp(float,float,FFloatSpringState&,float,float,float,float,float,bool,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.GetAzimuthAndElevation(UE::Math::TVector<double>,UE::Math::TTransform<double>
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetAzimuthAndElevation(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetMathLibrary.GetAzimuthAndElevation(UE::Math::TVector<double>,UE::Math::TTransform<double>&,float&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.GetForwardVector(UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetForwardVector(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetMathLibrary.GetForwardVector(UE::Math::TRotator<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.InverseTransformLocation(UE::Math::TTransform<double>&,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro InverseTransformLocation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.InverseTransformLocation(UE::Math::TTransform<double>&,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.InverseTransformRotation(UE::Math::TTransform<double>&,UE::Math::TRotator<dou
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro InverseTransformRotation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.InverseTransformRotation(UE::Math::TTransform<double>&,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.IsPointInBox(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsPointInBox(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetMathLibrary.IsPointInBox(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.IsPointInBoxWithTransform(UE::Math::TVector<double>,UE::Math::TTransform<doub
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsPointInBoxWithTransform(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetMathLibrary.IsPointInBoxWithTransform(UE::Math::TVector<double>,UE::Math::TTransform<double>&,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.IsPointInBoxWithTransform_Box(UE::Math::TVector<double>,UE::Math::TTransform<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsPointInBoxWithTransform_Box(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetMathLibrary.IsPointInBoxWithTransform_Box(UE::Math::TVector<double>,UE::Math::TTransform<double>&,UE::Math::TBox<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.LerpAngle(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro LerpAngle(float a0, float a1, float a2)
    {
        return NativeCall<void*, float, float, float>(nullptr, "UKismetMathLibrary.LerpAngle(float,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.MakeRotationFromAxes(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MakeRotationFromAxes(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetMathLibrary.MakeRotationFromAxes(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.MapRangeClamped(double,double,double,double,double)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro MapRangeClamped(double a0, double a1, double a2, double a3, double a4)
    {
        return NativeCall<void*, double, double, double, double, double>(nullptr, "UKismetMathLibrary.MapRangeClamped(double,double,double,double,double)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.MinAreaRectangle(UObject*,TArray<UE::Math::TVector<double>,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MinAreaRectangle(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, bool a7)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, bool>(nullptr, "UKismetMathLibrary.MinAreaRectangle(UObject*,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float&,float&,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.NearlyEqual_TransformTransform(UE::Math::TTransform<double>&,UE::Math::TTrans
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro NearlyEqual_TransformTransform(void* a0, void* a1, float a2, float a3, float a4)
    {
        return NativeCall<void*, void*, void*, float, float, float>(nullptr, "UKismetMathLibrary.NearlyEqual_TransformTransform(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,float,float,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.NormalizeAxis(float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro NormalizeAxis(float a0)
    {
        return NativeCall<void*, float>(nullptr, "UKismetMathLibrary.NormalizeAxis(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.NormalizedDeltaRotator(UE::Math::TRotator<double>,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro NormalizedDeltaRotator(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.NormalizedDeltaRotator(UE::Math::TRotator<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.QuaternionSpringInterp(UE::Math::TQuat<double>,UE::Math::TQuat<double>,FQuate
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro QuaternionSpringInterp(void* a0, void* a1, void* a2, float a3, float a4, float a5, float a6, float a7, bool a8)
    {
        return NativeCall<void*, void*, void*, void*, float, float, float, float, float, bool>(nullptr, "UKismetMathLibrary.QuaternionSpringInterp(UE::Math::TQuat<double>,UE::Math::TQuat<double>,FQuaternionSpringState&,float,float,float,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.RInterpTo_Constant_PerAxis(UE::Math::TRotator<double>,UE::Math::TRotator<doub
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RInterpTo_Constant_PerAxis(void* a0, void* a1, float a2, void* a3)
    {
        return NativeCall<void*, void*, void*, float, void*>(nullptr, "UKismetMathLibrary.RInterpTo_Constant_PerAxis(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,UE::Math::TRotator<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.RLerp(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static void RLerp(void* retorno, void* a0, void* a1, float a2, bool a3)
    {
        NativeCall<void, void*, void*, void*, float, bool>(nullptr, "UKismetMathLibrary.RLerp(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool)", retorno, a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.RandomUnitVectorInConeInRadiansFromStream(FRandomStream&,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RandomUnitVectorInConeInRadiansFromStream(void* a0, void* a1, float a2)
    {
        return NativeCall<void*, void*, void*, float>(nullptr, "UKismetMathLibrary.RandomUnitVectorInConeInRadiansFromStream(FRandomStream&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.RandomUnitVectorInEllipticalConeInRadiansFromStream(FRandomStream&,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RandomUnitVectorInEllipticalConeInRadiansFromStream(void* a0, void* a1, float a2, float a3)
    {
        return NativeCall<void*, void*, void*, float, float>(nullptr, "UKismetMathLibrary.RandomUnitVectorInEllipticalConeInRadiansFromStream(FRandomStream&,UE::Math::TVector<double>&,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.RotatorFromAxisAndAngle(UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RotatorFromAxisAndAngle(void* a0, float a1)
    {
        return NativeCall<void*, void*, float>(nullptr, "UKismetMathLibrary.RotatorFromAxisAndAngle(UE::Math::TVector<double>,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.SafeDivide(double,double)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro SafeDivide(double a0, double a1)
    {
        return NativeCall<void*, double, double>(nullptr, "UKismetMathLibrary.SafeDivide(double,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.StaticRegisterNativesUKismetMathLibrary()
    // endereco: cache_pdb_25090264
    static BrzPonteiro StaticRegisterNativesUKismetMathLibrary()
    {
        return NativeCall<void*>(nullptr, "UKismetMathLibrary.StaticRegisterNativesUKismetMathLibrary()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.TLerp(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,float,TEnum
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TLerp(void* a0, void* a1, float a2, unsigned char a3)
    {
        return NativeCall<void*, void*, void*, float, unsigned char>(nullptr, "UKismetMathLibrary.TLerp(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,float,TEnumAsByte<ELerpInterpolationMode::Type>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.TransformLocation(UE::Math::TTransform<double>&,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TransformLocation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.TransformLocation(UE::Math::TTransform<double>&,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.TransformRotation(UE::Math::TTransform<double>&,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TransformRotation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetMathLibrary.TransformRotation(UE::Math::TTransform<double>&,UE::Math::TRotator<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.Transform_Determinant(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Transform_Determinant(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetMathLibrary.Transform_Determinant(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetMathLibrary.VectorSpringInterp(UE::Math::TVector<double>,UE::Math::TVector<double>,FVecto
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro VectorSpringInterp(void* a0, void* a1, void* a2, float a3, float a4, float a5, float a6, float a7, bool a8, void* a9, void* a10, bool a11)
    {
        return NativeCall<void*, void*, void*, void*, float, float, float, float, float, bool, void*, void*, bool>(nullptr, "UKismetMathLibrary.VectorSpringInterp(UE::Math::TVector<double>,UE::Math::TVector<double>,FVectorSpringState&,float,float,float,float,float,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETMATHLIBRARY_H
