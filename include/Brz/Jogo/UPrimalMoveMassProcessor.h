// ==========================================================================
//  UPrimalMoveMassProcessor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALMOVEMASSPROCESSOR_H
#define BRZ_SDK_JOGO_UPRIMALMOVEMASSPROCESSOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalMoveMassProcessor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalMoveMassProcessor"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.AdjustFloorHeight(FMassActorFragment&,UE::Math::TVector<double>,FMassEx
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustFloorHeight(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UPrimalMoveMassProcessor.AdjustFloorHeight(FMassActorFragment&,UE::Math::TVector<double>,FMassExecutionContext&,FPrimalMovementFragment&,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.ApplyVelocityBraking(UE::Math::TVector<double>&,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyVelocityBraking(void* a0, float a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, float, float, float>(this, "UPrimalMoveMassProcessor.ApplyVelocityBraking(UE::Math::TVector<double>&,float,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.ConfigureQueries()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConfigureQueries() const
    {
        return NativeCall<void*>(this, "UPrimalMoveMassProcessor.ConfigureQueries()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.Execute(FMassEntityManager&,FMassExecutionContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Execute(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalMoveMassProcessor.Execute(FMassEntityManager&,FMassExecutionContext&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.FindFloor(FMassExecutionContext&,AActor*,UE::Math::TVector<double>,FPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindFloor(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UPrimalMoveMassProcessor.FindFloor(FMassExecutionContext&,AActor*,UE::Math::TVector<double>,FPrimalMovementFragment&,FFindFloorResult&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.FloorSweepTest(FMassExecutionContext&,FHitResult&,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FloorSweepTest(void* a0, void* a1, void* a2, void* a3, int a4, void* a5, void* a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int, void*, void*, void*>(this, "UPrimalMoveMassProcessor.FloorSweepTest(FMassExecutionContext&,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.SlideAlongSurface(int,FMassExecutionContext&,FMassActorFragment&,FPrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SlideAlongSurface(int a0, void* a1, void* a2, void* a3, void* a4, float a5, void* a6, void* a7, bool a8, void* a9) const
    {
        return NativeCall<void*, int, void*, void*, void*, void*, float, void*, void*, bool, void*>(this, "UPrimalMoveMassProcessor.SlideAlongSurface(int,FMassExecutionContext&,FMassActorFragment&,FPrimalMovementFragment&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMoveMassProcessor.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TwoWallAdjust(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UPrimalMoveMassProcessor.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<double>&,FPrimalMovementFragment&)", a0, a1, a2, a3);
    }

    unsigned char& ExecutionFlagsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalMoveMassProcessor.ExecutionFlags"); }
    BrzCampoPonteiro ExecutionOrderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalMoveMassProcessor.ExecutionOrder")); }
    BrzCampoPonteiro ProcessingPhaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalMoveMassProcessor.ProcessingPhase")); }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterWithProcessingPhases()
    { return { (void*)this, "bAutoRegisterWithProcessingPhases" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresGameThreadExecution()
    { return { (void*)this, "bRequiresGameThreadExecution" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALMOVEMASSPROCESSOR_H
