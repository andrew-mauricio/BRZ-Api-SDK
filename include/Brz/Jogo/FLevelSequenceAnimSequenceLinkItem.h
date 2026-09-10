// ==========================================================================
//  FLevelSequenceAnimSequenceLinkItem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELSEQUENCEANIMSEQUENCELINKITEM_H
#define BRZ_SDK_JOGO_FLEVELSEQUENCEANIMSEQUENCELINKITEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelSequenceAnimSequenceLinkItem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelSequenceAnimSequenceLinkItem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro CurveInterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.CurveInterpolation")); }
    BrzCampoPonteiro CustomDisplayRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.CustomDisplayRate")); }
    BrzCampoPonteiro CustomEndFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.CustomEndFrame")); }
    BrzCampoPonteiro CustomStartFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.CustomStartFrame")); }
    BrzCampoPonteiro DelayBeforeStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.DelayBeforeStart")); }
    BrzCampoPonteiro ExcludeAnimationNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.ExcludeAnimationNames")); }
    BrzCampoPonteiro IncludeAnimationNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.IncludeAnimationNames")); }
    BrzCampoPonteiro InterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.Interpolation")); }
    BrzCampoPonteiro PathToAnimSequenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.PathToAnimSequence")); }
    BrzCampoPonteiro SkelTrackGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.SkelTrackGuid")); }
    BrzCampoPonteiro WarmUpFramesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSequenceAnimSequenceLinkItem.WarmUpFrames")); }
    BitFieldValue<bool, unsigned __int32> bEvaluateAllSkeletalMeshComponents()
    { return { (void*)this, "bEvaluateAllSkeletalMeshComponents" }; }
    BitFieldValue<bool, unsigned __int32> bExportAttributeCurves()
    { return { (void*)this, "bExportAttributeCurves" }; }
    BitFieldValue<bool, unsigned __int32> bExportMaterialCurves()
    { return { (void*)this, "bExportMaterialCurves" }; }
    BitFieldValue<bool, unsigned __int32> bExportMorphTargets()
    { return { (void*)this, "bExportMorphTargets" }; }
    BitFieldValue<bool, unsigned __int32> bExportTransforms()
    { return { (void*)this, "bExportTransforms" }; }
    BitFieldValue<bool, unsigned __int32> bRecordInWorldSpace()
    { return { (void*)this, "bRecordInWorldSpace" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTimeRange()
    { return { (void*)this, "bUseCustomTimeRange" }; }

};

#endif  // BRZ_SDK_JOGO_FLEVELSEQUENCEANIMSEQUENCELINKITEM_H
