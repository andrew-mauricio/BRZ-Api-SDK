// ==========================================================================
//  UWorldMetricsSubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDMETRICSSUBSYSTEM_H
#define BRZ_SDK_JOGO_UWORLDMETRICSSUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldMetricsSubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldMetricsSubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.AcquireExtensionInternal(UObject*,TSubclassOf<UWorldMetricsExtension>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AcquireExtensionInternal(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void**>(this, "UWorldMetricsSubsystem.AcquireExtensionInternal(UObject*,TSubclassOf<UWorldMetricsExtension>&)", a0, &a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AddReferencedObjects(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UWorldMetricsSubsystem.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginDestroy() const
    {
        return NativeCall<void*>(this, "UWorldMetricsSubsystem.BeginDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.Clear()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Clear() const
    {
        return NativeCall<void*>(this, "UWorldMetricsSubsystem.Clear()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.Enable(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Enable(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldMetricsSubsystem.Enable(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.FExtension.FExtension(UWorldMetricsSubsystem::FExtension&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FExtension_FExtension(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldMetricsSubsystem.FExtension.FExtension(UWorldMetricsSubsystem::FExtension&&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.ReleaseExtension(UWorldMetricInterface*,TSubclassOf<UWorldMetricsExtensio
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ReleaseExtension(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void**>(this, "UWorldMetricsSubsystem.ReleaseExtension(UWorldMetricInterface*,TSubclassOf<UWorldMetricsExtension>&)", a0, &a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.ReleaseExtensionInternal(UObject*,TSubclassOf<UWorldMetricsExtension>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleaseExtensionInternal(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void**>(this, "UWorldMetricsSubsystem.ReleaseExtensionInternal(UObject*,TSubclassOf<UWorldMetricsExtension>&)", a0, &a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.RemoveMetric(UWorldMetricInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveMetric(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldMetricsSubsystem.RemoveMetric(UWorldMetricInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.ShouldCreateSubsystem(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldCreateSubsystem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldMetricsSubsystem.ShouldCreateSubsystem(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.TryRemoveExtension(TSubclassOf<UWorldMetricsExtension>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryRemoveExtension(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UWorldMetricsSubsystem.TryRemoveExtension(TSubclassOf<UWorldMetricsExtension>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.VerifyMetricReleasedAllExtensions(UWorldMetricInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VerifyMetricReleasedAllExtensions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldMetricsSubsystem.VerifyMetricReleasedAllExtensions(UWorldMetricInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldMetricsSubsystem.VerifyRemoveOrphanExtensions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VerifyRemoveOrphanExtensions() const
    {
        return NativeCall<void*>(this, "UWorldMetricsSubsystem.VerifyRemoveOrphanExtensions()");
    }

    BrzCampoPonteiro MetricsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldMetricsSubsystem.Metrics")); }
    float& UpdateRateInSecondsField() const
    { return *GetNativePointerField<float*>(this, "UWorldMetricsSubsystem.UpdateRateInSeconds"); }
    int& WarmUpFramesField() const
    { return *GetNativePointerField<int*>(this, "UWorldMetricsSubsystem.WarmUpFrames"); }
};

#endif  // BRZ_SDK_JOGO_UWORLDMETRICSSUBSYSTEM_H
