// ==========================================================================
//  UPrimalFurBPFunctionLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALFURBPFUNCTIONLIBRARY_H
#define BRZ_SDK_JOGO_UPRIMALFURBPFUNCTIONLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalFurBPFunctionLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalFurBPFunctionLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalFurBPFunctionLibrary.CalculateCameraData(UActorComponent*,bool&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CalculateCameraData(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UPrimalFurBPFunctionLibrary.CalculateCameraData(UActorComponent*,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalFurBPFunctionLibrary.SetFurParams(TArray<FPrimalFurPhysicsPointSettings,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetFurParams(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, float a7, float a8, void* a9)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, float, float, void*>(nullptr, "UPrimalFurBPFunctionLibrary.SetFurParams(TArray<FPrimalFurPhysicsPointSettings,TSizedDefaultAllocator<32>>,TArray<UMaterialInstanceDynamic*,TSizedDefaultAllocator<32>>,TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>>,TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>>,float,float,AActor*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalFurBPFunctionLibrary.SetFurParamsCustomTime(AActor*,TArray<UMaterialInstanceDynamic*,TSiz
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetFurParamsCustomTime(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6, void* a7, void* a8, void* a9, void* a10, void* a11, void* a12)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, bool, void*, void*, void*, void*, void*, void*>(nullptr, "UPrimalFurBPFunctionLibrary.SetFurParamsCustomTime(AActor*,TArray<UMaterialInstanceDynamic*,TSizedDefaultAllocator<32>>,TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>>,TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>>,TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>>,TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>>,bool,float&,float&,float&,float&,UE::Math::TVector2<double>,UE::Math::TVector2<double>)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

};

#endif  // BRZ_SDK_JOGO_UPRIMALFURBPFUNCTIONLIBRARY_H
