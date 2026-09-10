// ==========================================================================
//  FPrimalCameraParamsOverride — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCAMERAPARAMSOVERRIDE_H
#define BRZ_SDK_JOGO_FPRIMALCAMERAPARAMSOVERRIDE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalCameraParamsOverride
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCameraParamsOverride"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalCameraParamsOverride.operator=(FPrimalCameraParamsOverride&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalCameraParamsOverride.operator=(FPrimalCameraParamsOverride&)", a0);
    }

    BrzCampoPonteiro CameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraArmLength")); }
    BrzCampoPonteiro CameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraArmLengthInterpParams")); }
    BrzCampoPonteiro CameraPivotBoneNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraPivotBoneName")); }
    BrzCampoPonteiro CameraPivotLocationInterpParamsXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraPivotLocationInterpParamsX")); }
    BrzCampoPonteiro CameraPivotLocationInterpParamsYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraPivotLocationInterpParamsY")); }
    BrzCampoPonteiro CameraPivotLocationInterpParamsZField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraPivotLocationInterpParamsZ")); }
    BrzCampoPonteiro CameraPivotRotationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.CameraPivotRotationInterpParams")); }
    BrzCampoPonteiro PitchBasedModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.PitchBasedModifiers")); }
    BrzCampoPonteiro PivotLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.PivotLocationOffset")); }
    BrzCampoPonteiro RemoveOriginalPitchModifiersInPitchRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraParamsOverride.RemoveOriginalPitchModifiersInPitchRange")); }
    BitFieldValue<bool, unsigned __int32> bOverridePivotLocationOffsetSettings()
    { return { (void*)this, "bOverridePivotLocationOffsetSettings" }; }
    BitFieldValue<bool, unsigned __int32> bUsePivotLocationOffset()
    { return { (void*)this, "bUsePivotLocationOffset" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCAMERAPARAMSOVERRIDE_H
