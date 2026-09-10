// ==========================================================================
//  FPrimalStructureSnapPoint — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURESNAPPOINT_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURESNAPPOINT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalStructureSnapPoint
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureSnapPoint"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ExtraSnapPointMatchGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.ExtraSnapPointMatchGroup")); }
    BrzCampoPonteiro ExtraSnapTypeExcludeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.ExtraSnapTypeExcludeFlags")); }
    BrzCampoPonteiro ExtraSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.ExtraSnapTypeFlags")); }
    BrzCampoPonteiro PointComparisonExtraRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.PointComparisonExtraRotOffset")); }
    BrzCampoPonteiro PointLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.PointLocOffset")); }
    BrzCampoPonteiro PointRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.PointRotOffset")); }
    TArray<void*>& SnapFromStructureTypesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSnapPoint.SnapFromStructureTypesToExclude"); }
    BrzCampoPonteiro SnapFromStructureTypesToIncludeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapFromStructureTypesToInclude")); }
    BrzCampoPonteiro SnapPointDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapPointDescription")); }
    BrzCampoPonteiro SnapPointMatchGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapPointMatchGroup")); }
    BrzCampoPonteiro SnapPointOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapPointOverride")); }
    BrzCampoPonteiro SnapTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapTag")); }
    BrzCampoPonteiro SnapTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapTags")); }
    TArray<void*>& SnapToStructureTypesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSnapPoint.SnapToStructureTypesToExclude"); }
    BrzCampoPonteiro SnapToStructureTypesToIncludeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.SnapToStructureTypesToInclude")); }
    BrzCampoPonteiro StaticMeshSnapSocketNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.StaticMeshSnapSocketName")); }
    BrzCampoPonteiro ToPointSnapTypeExcludeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.ToPointSnapTypeExcludeFlags")); }
    BrzCampoPonteiro ToPointSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPoint.ToPointSnapTypeFlags")); }
    BitFieldValue<bool, unsigned __int32> bAttachFromPoint()
    { return { (void*)this, "bAttachFromPoint" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToDisableEncroachmentCheck()
    { return { (void*)this, "bAttachToDisableEncroachmentCheck" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToPoint()
    { return { (void*)this, "bAttachToPoint" }; }
    BitFieldValue<bool, unsigned __int32> bForceStructureLinking()
    { return { (void*)this, "bForceStructureLinking" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityAttachToPoint()
    { return { (void*)this, "bHighPriorityAttachToPoint" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreParentEncroachmentCheck()
    { return { (void*)this, "bIgnoreParentEncroachmentCheck" }; }
    BitFieldValue<bool, unsigned __int32> bInvalidForStructureLinking()
    { return { (void*)this, "bInvalidForStructureLinking" }; }
    BitFieldValue<bool, unsigned __int32> bPorthole()
    { return { (void*)this, "bPorthole" }; }
    BitFieldValue<bool, unsigned __int32> bSnapForceNoGroundRequirement()
    { return { (void*)this, "bSnapForceNoGroundRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToOnlyAllowSingleAttachment()
    { return { (void*)this, "bSnapToOnlyAllowSingleAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToUseAlternatePlacemenTraceScale()
    { return { (void*)this, "bSnapToUseAlternatePlacemenTraceScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAllowSnapPoint()
    { return { (void*)this, "bUseBPOverrideAllowSnapPoint" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURESNAPPOINT_H
