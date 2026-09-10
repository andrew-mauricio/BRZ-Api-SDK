// ==========================================================================
//  UPrimalBlueprintFunctions — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALBLUEPRINTFUNCTIONS_H
#define BRZ_SDK_JOGO_UPRIMALBLUEPRINTFUNCTIONS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalBlueprintFunctions
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalBlueprintFunctions"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.ControllerEvent_GetAnalogValue(FControllerEvent&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    static BrzPonteiro ControllerEvent_GetAnalogValue(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalBlueprintFunctions.ControllerEvent_GetAnalogValue(FControllerEvent&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.ControllerEvent_GetEffectingButton(FControllerEvent&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ControllerEvent_GetEffectingButton(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalBlueprintFunctions.ControllerEvent_GetEffectingButton(FControllerEvent&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.ConvertTransformToRelative(UE::Math::TTransform<double>&,UE::Math::TTr
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ConvertTransformToRelative(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UPrimalBlueprintFunctions.ConvertTransformToRelative(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.FloatToStringInvariant(float,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FloatToStringInvariant(float a0, int a1)
    {
        return NativeCall<void*, float, int>(nullptr, "UPrimalBlueprintFunctions.FloatToStringInvariant(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.ForceNotifyBlackboardValue(UBTNode*,FBlackboardKeySelector&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ForceNotifyBlackboardValue(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UPrimalBlueprintFunctions.ForceNotifyBlackboardValue(UBTNode*,FBlackboardKeySelector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.GetInjectedLightDirection(UObject*,ADirectionalLight*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetInjectedLightDirection(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UPrimalBlueprintFunctions.GetInjectedLightDirection(UObject*,ADirectionalLight*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.GetWaterPlaneDataAsset()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetWaterPlaneDataAsset()
    {
        return NativeCall<void*>(nullptr, "UPrimalBlueprintFunctions.GetWaterPlaneDataAsset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.K2_SetTimerForNextTick(UObject*,FString,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro K2_SetTimerForNextTick(void* a0, const FString& a1, bool a2)
    {
        return NativeCall<void*, void*, void*, bool>(nullptr, "UPrimalBlueprintFunctions.K2_SetTimerForNextTick(UObject*,FString,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro K2_SetTimerForNextTick(void* a0, FString* a1, bool a2)
    { return K2_SetTimerForNextTick(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.SetCastFarShadow(UPrimitiveComponent*,bool)
    // endereco: cache_pdb_25090264
    static BrzPonteiro SetCastFarShadow(void* a0, bool a1)
    {
        return NativeCall<void*, void*, bool>(nullptr, "UPrimalBlueprintFunctions.SetCastFarShadow(UPrimitiveComponent*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.UploadWaterHeightPlaneBufferData(TArray<float,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UploadWaterHeightPlaneBufferData(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalBlueprintFunctions.UploadWaterHeightPlaneBufferData(TArray<float,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBlueprintFunctions.UploadWaterHeightPlaneBufferDataWithWorld(TArray<float,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UploadWaterHeightPlaneBufferDataWithWorld(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UPrimalBlueprintFunctions.UploadWaterHeightPlaneBufferDataWithWorld(TArray<float,TSizedDefaultAllocator<32>>,UWorld*)", a0, a1);
    }

};

#endif  // BRZ_SDK_JOGO_UPRIMALBLUEPRINTFUNCTIONS_H
