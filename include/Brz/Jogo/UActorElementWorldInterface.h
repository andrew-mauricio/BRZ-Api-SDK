// ==========================================================================
//  UActorElementWorldInterface — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UACTORELEMENTWORLDINTERFACE_H
#define BRZ_SDK_JOGO_UACTORELEMENTWORLDINTERFACE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UActorElementWorldInterface
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UActorElementWorldInterface"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.AddIgnoredElementToCollisionQueryParams(FTypedElementHandle&,FCollis
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AddIgnoredElementToCollisionQueryParams(void* a0, void* a1, bool a2)
    {
        return NativeCall<void*, void*, void*, bool>(nullptr, "UActorElementWorldInterface.AddIgnoredElementToCollisionQueryParams(FTypedElementHandle&,FCollisionQueryParams&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.CanMoveElement(FTypedElementHandle&,ETypedElementWorldType)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CanMoveElement(void* a0, int a1)
    {
        return NativeCall<void*, void*, int>(nullptr, "UActorElementWorldInterface.CanMoveElement(FTypedElementHandle&,ETypedElementWorldType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.FindSuitableTransformAlongPath(FTypedElementHandle&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindSuitableTransformAlongPath(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(nullptr, "UActorElementWorldInterface.FindSuitableTransformAlongPath(FTypedElementHandle&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FCollisionShape&,TArrayView<FTypedElementHandle,int>,UE::Math::TTransform<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.FindSuitableTransformAlongPath_WorldSweep(UWorld*,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindSuitableTransformAlongPath_WorldSweep(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UActorElementWorldInterface.FindSuitableTransformAlongPath_WorldSweep(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FCollisionShape&,TArrayView<FTypedElementHandle,int>,FCollisionQueryParams&,UE::Math::TTransform<double>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.FindSuitableTransformAtPoint(FTypedElementHandle&,UE::Math::TTransfo
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindSuitableTransformAtPoint(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UActorElementWorldInterface.FindSuitableTransformAtPoint(FTypedElementHandle&,UE::Math::TTransform<double>&,UE::Math::TTransform<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.GetBounds(FTypedElementHandle&,UE::Math::TBoxSphereBounds<double,dou
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetBounds(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UActorElementWorldInterface.GetBounds(FTypedElementHandle&,UE::Math::TBoxSphereBounds<double,double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.GetRelativeTransform(FTypedElementHandle&,UE::Math::TTransform<doubl
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetRelativeTransform(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UActorElementWorldInterface.GetRelativeTransform(FTypedElementHandle&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.GetSelectionElementsFromSelectionFunction(FTypedElementHandle&,FWorl
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetSelectionElementsFromSelectionFunction(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UActorElementWorldInterface.GetSelectionElementsFromSelectionFunction(FTypedElementHandle&,FWorldSelectionElementArgs&,TFunction<bool__cdecl(FTypedElementHandle&,FWorldSelectionElementArgs&)>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.GetWorldTransform(FTypedElementHandle&,UE::Math::TTransform<double>&
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetWorldTransform(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UActorElementWorldInterface.GetWorldTransform(FTypedElementHandle&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.SetRelativeTransform(FTypedElementHandle&,UE::Math::TTransform<doubl
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetRelativeTransform(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UActorElementWorldInterface.SetRelativeTransform(FTypedElementHandle&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorElementWorldInterface.SetWorldTransform(FTypedElementHandle&,UE::Math::TTransform<double>&
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetWorldTransform(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UActorElementWorldInterface.SetWorldTransform(FTypedElementHandle&,UE::Math::TTransform<double>&)", a0, a1);
    }

};

#endif  // BRZ_SDK_JOGO_UACTORELEMENTWORLDINTERFACE_H
