// ==========================================================================
//  UPrimalCameraConfig — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALCAMERACONFIG_H
#define BRZ_SDK_JOGO_UPRIMALCAMERACONFIG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalCameraConfig
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalCameraConfig"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro CameraProfilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCameraConfig.CameraProfiles")); }
    FName& DefaultCameraProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.DefaultCameraProfileName"); }
    BrzCampoPonteiro ExtraCameraProfilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCameraConfig.ExtraCameraProfiles")); }
    FName& LooseCameraProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.LooseCameraProfileName"); }
    FName& MidCameraProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.MidCameraProfileName"); }
    BrzCampoPonteiro TPVWeaponCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCameraConfig.TPVWeaponCameraOffset")); }
    FName& TightCameraProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.TightCameraProfileName"); }
    float& TransitionToASACameraInterpTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCameraConfig.TransitionToASACameraInterpTime"); }
    float& TransitionToOldCameraInterpTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCameraConfig.TransitionToOldCameraInterpTime"); }
    float& TransitionToTargetingCameraInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCameraConfig.TransitionToTargetingCameraInterpSpeed"); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALCAMERACONFIG_H
