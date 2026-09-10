// ==========================================================================
//  FPrimalCameraParams — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCAMERAPARAMS_H
#define BRZ_SDK_JOGO_FPRIMALCAMERAPARAMS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalCameraParams
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCameraParams"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalCameraParams.ApplyOverride(FPrimalCameraParamsOverride&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyOverride(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalCameraParams.ApplyOverride(FPrimalCameraParamsOverride&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalCameraParams.operator=(FPrimalCameraParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalCameraParams.operator=(FPrimalCameraParams&)", a0);
    }

    BrzCampoPonteiro AnimAimOffsetPitchRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.AnimAimOffsetPitchRange")); }
    BrzCampoPonteiro CameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraArmLength")); }
    BrzCampoPonteiro CameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraArmLengthInterpParams")); }
    BrzCampoPonteiro CameraPivotBoneNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraPivotBoneName")); }
    BrzCampoPonteiro CameraPivotLocationInterpParamsXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraPivotLocationInterpParamsX")); }
    BrzCampoPonteiro CameraPivotLocationInterpParamsYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraPivotLocationInterpParamsY")); }
    BrzCampoPonteiro CameraPivotLocationInterpParamsZField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraPivotLocationInterpParamsZ")); }
    BrzCampoPonteiro CameraPivotRotationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.CameraPivotRotationInterpParams")); }
    BrzCampoPonteiro InterpParamsXModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.InterpParamsXModifiers")); }
    BrzCampoPonteiro InterpParamsYModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.InterpParamsYModifiers")); }
    BrzCampoPonteiro InterpParamsZModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.InterpParamsZModifiers")); }
    BrzCampoPonteiro MaxCameraPivotRotationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.MaxCameraPivotRotationInterpParams")); }
    BrzCampoPonteiro PitchBasedModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.PitchBasedModifiers")); }
    BrzCampoPonteiro PivotLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.PivotLocationOffset")); }
    BrzCampoPonteiro PositivePitchZDistOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.PositivePitchZDistOff")); }
    BrzCampoPonteiro YawDeltaToEndLerpingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.YawDeltaToEndLerping")); }
    BrzCampoPonteiro YawDeltaToStartLerpingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParams.YawDeltaToStartLerping")); }
    BitFieldValue<bool, unsigned __int32> bDinoUseOldSystemCameraLocation()
    { return { (void*)this, "bDinoUseOldSystemCameraLocation" }; }
    BitFieldValue<bool, unsigned __int32> bLerpRotationInterpParamsBasedOnRotationSpeed()
    { return { (void*)this, "bLerpRotationInterpParamsBasedOnRotationSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUsePivotLocationOffset()
    { return { (void*)this, "bUsePivotLocationOffset" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCAMERAPARAMS_H
