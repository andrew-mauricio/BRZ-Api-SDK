// ==========================================================================
//  UKismetProceduralMeshLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETPROCEDURALMESHLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETPROCEDURALMESHLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UKismetProceduralMeshLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetProceduralMeshLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetProceduralMeshLibrary.ConvertQuadToTriangles(TArray<int,TSizedDefaultAllocator<32>>&,int,
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ConvertQuadToTriangles(void* a0, int a1, int a2, int a3, int a4)
    {
        return NativeCall<void*, void*, int, int, int, int>(nullptr, "UKismetProceduralMeshLibrary.ConvertQuadToTriangles(TArray<int,TSizedDefaultAllocator<32>>&,int,int,int,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetProceduralMeshLibrary.GenerateBoxMesh(UE::Math::TVector<double>,TArray<UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenerateBoxMesh(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(nullptr, "UKismetProceduralMeshLibrary.GenerateBoxMesh(UE::Math::TVector<double>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>>&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetProceduralMeshLibrary.GetSectionFromStaticMesh(UStaticMesh*,int,int,TArray<UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetSectionFromStaticMesh(void* a0, int a1, int a2, void* a3, void* a4, void* a5, void* a6, void* a7)
    {
        return NativeCall<void*, void*, int, int, void*, void*, void*, void*, void*>(nullptr, "UKismetProceduralMeshLibrary.GetSectionFromStaticMesh(UStaticMesh*,int,int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>>&,TArray<FProcMeshTangent,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetProceduralMeshLibrary.SliceProceduralMesh(UProceduralMeshComponent*,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SliceProceduralMesh(void* a0, void* a1, void* a2, bool a3, void* a4, int a5, void* a6)
    {
        return NativeCall<void*, void*, void*, void*, bool, void*, int, void*>(nullptr, "UKismetProceduralMeshLibrary.SliceProceduralMesh(UProceduralMeshComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,UProceduralMeshComponent*&,EProcMeshSliceCapOption,UMaterialInterface*)", a0, a1, a2, a3, a4, a5, a6);
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETPROCEDURALMESHLIBRARY_H
