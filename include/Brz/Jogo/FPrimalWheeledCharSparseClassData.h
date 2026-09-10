// ==========================================================================
//  FPrimalWheeledCharSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALWHEELEDCHARSPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALWHEELEDCHARSPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundCue;
struct UTexture2D;

#include "FPrimalDinoCharacterSparseClassData.h"

struct FPrimalWheeledCharSparseClassData : public FPrimalDinoCharacterSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalWheeledCharSparseClassData"); }

    BrzCampoPonteiro DustTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalWheeledCharSparseClassData.DustType")); }
    TObjectPtr<UTexture2D>& FlipMultiuseIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalWheeledCharSparseClassData.FlipMultiuseIcon"); }
    USoundCue*& HonkSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.HonkSound"); }
    USoundCue*& ImpactSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.ImpactSound"); }
    USoundCue*& LandingSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.LandingSound"); }
    float& SkidDurationRequiredForStopSoundField() const
    { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidDurationRequiredForStopSound"); }
    float& SkidFadeoutTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidFadeoutTime"); }
    USoundCue*& SkidSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.SkidSound"); }
    USoundCue*& SkidSoundStopField() const
    { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.SkidSoundStop"); }
    float& SkidThresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidThreshold"); }
    float& SkidThresholdVelocityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidThresholdVelocity"); }
    float& SlipThresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SlipThreshold"); }
    float& SpringCompressionLandingThresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SpringCompressionLandingThreshold"); }
    bool& bSimulationInterpolationField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalWheeledCharSparseClassData.bSimulationInterpolation"); }
    BitFieldValue<bool, unsigned __int32> bSimulationInterpolation()
    { return { (void*)this, "bSimulationInterpolation" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALWHEELEDCHARSPARSECLASSDATA_H
