// ==========================================================================
//  UPrimalProgressionTreeGraph — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEGRAPH_H
#define BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEGRAPH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalProgressionTreeGraph
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalProgressionTreeGraph"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.AddChild_Implementation(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddChild_Implementation(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long>(this, "UPrimalProgressionTreeGraph.AddChild_Implementation(FName,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.AddNode(FName,UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNode(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalProgressionTreeGraph.AddNode(FName,UE::Math::TVector2<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.AddNode_Implementation(FName,UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNode_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalProgressionTreeGraph.AddNode_Implementation(FName,UE::Math::TVector2<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.AddPrerequisite_Implementation(FName,FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddPrerequisite_Implementation(unsigned long long a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, int>(this, "UPrimalProgressionTreeGraph.AddPrerequisite_Implementation(FName,FName,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.ArePrerequisitesMet(FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ArePrerequisitesMet(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalProgressionTreeGraph.ArePrerequisitesMet(FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.ArePrerequisitesMetForController(FName,APlayerController*,UObject*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ArePrerequisitesMetForController(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "UPrimalProgressionTreeGraph.ArePrerequisitesMetForController(FName,APlayerController*,UObject*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.ArePrerequisitesMet_Implementation(FName,TSet<FName,DefaultKeyFuncs<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ArePrerequisitesMet_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalProgressionTreeGraph.ArePrerequisitesMet_Implementation(FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.FindAllPathsHelper(FName,FName,TArray<FName,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindAllPathsHelper(unsigned long long a0, unsigned long long a1, void* a2, void* a3, void* a4, int a5) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*, void*, void*, int>(this, "UPrimalProgressionTreeGraph.FindAllPathsHelper(FName,FName,TArray<FName,TSizedDefaultAllocator<32>>&,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&,TArray<FPrimalProgressionPath,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetAllAncestors_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllAncestors_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalProgressionTreeGraph.GetAllAncestors_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetAllDescendants_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllDescendants_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalProgressionTreeGraph.GetAllDescendants_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetAllPathsBetweenNodes_Implementation(FName,FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllPathsBetweenNodes_Implementation(unsigned long long a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, int>(this, "UPrimalProgressionTreeGraph.GetAllPathsBetweenNodes_Implementation(FName,FName,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetAvailableNodes_Implementation(TSet<FName,DefaultKeyFuncs<FName,0>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvailableNodes_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalProgressionTreeGraph.GetAvailableNodes_Implementation(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetEdgeWeight(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEdgeWeight(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long>(this, "UPrimalProgressionTreeGraph.GetEdgeWeight(FName,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetPathBetweenNodes_Implementation(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPathBetweenNodes_Implementation(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long>(this, "UPrimalProgressionTreeGraph.GetPathBetweenNodes_Implementation(FName,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetRootNodes_Implementation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetRootNodes_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalProgressionTreeGraph.GetRootNodes_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.GetShortestWeightedPath_Implementation(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShortestWeightedPath_Implementation(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long>(this, "UPrimalProgressionTreeGraph.GetShortestWeightedPath_Implementation(FName,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.PathExists_Implementation(FName,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PathExists_Implementation(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long>(this, "UPrimalProgressionTreeGraph.PathExists_Implementation(FName,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.RemoveNode_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveNode_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalProgressionTreeGraph.RemoveNode_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph.ValidateGraph_Implementation(TArray<FString,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateGraph_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalProgressionTreeGraph.ValidateGraph_Implementation(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    BrzCampoPonteiro GraphFeaturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeGraph.GraphFeatures")); }
    BrzCampoPonteiro NodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeGraph.Nodes")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEGRAPH_H
