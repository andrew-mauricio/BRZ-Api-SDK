// ==========================================================================
//  FPrimalSnowManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSNOWMANAGER_H
#define BRZ_SDK_JOGO_FPRIMALSNOWMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalSnowManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalSnowManager"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalSnowManager.OnScanComplete(FTraceHandle&,FOverlapDatum&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnScanComplete(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FPrimalSnowManager.OnScanComplete(FTraceHandle&,FOverlapDatum&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalSnowManager.OnTeleport(UWorld*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTeleport(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FPrimalSnowManager.OnTeleport(UWorld*,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalSnowManager.PerformScanAsync(UWorld*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PerformScanAsync(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FPrimalSnowManager.PerformScanAsync(UWorld*,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalSnowManager.Tick(UWorld*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FPrimalSnowManager.Tick(UWorld*,UE::Math::TVector<double>)", a0, a1);
    }

    BrzCampoPonteiro HighPriorityRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSnowManager.HighPriorityRange")); }
    BrzCampoPonteiro MaxScanRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSnowManager.MaxScanRange")); }
    BrzCampoPonteiro MovementThresholdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSnowManager.MovementThreshold")); }
    BrzCampoPonteiro TeleportBatchSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSnowManager.TeleportBatchSize")); }
    BrzCampoPonteiro TracesPerFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSnowManager.TracesPerFrame")); }
};

#endif  // BRZ_SDK_JOGO_FPRIMALSNOWMANAGER_H
