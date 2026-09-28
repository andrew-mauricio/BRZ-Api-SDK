// ==========================================================================
//  FTransformGizmoDataBinder — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FTRANSFORMGIZMODATABINDER_H
#define BRZ_SDK_JOGO_FTRANSFORMGIZMODATABINDER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FTransformGizmoDataBinder
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FTransformGizmoDataBinder"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ActualToBoundConversionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.ActualToBoundConversion")); }
    BrzCampoPonteiro BoundEulerAnglesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.BoundEulerAngles")); }
    BrzCampoPonteiro BoundGizmosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.BoundGizmos")); }
    BrzCampoPonteiro BoundScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.BoundScale")); }
    BrzCampoPonteiro BoundToActualConversionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.BoundToActualConversion")); }
    BrzCampoPonteiro BoundTranslationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.BoundTranslation")); }
    BrzCampoPonteiro ContextObjectsToUnregisterWithField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.ContextObjectsToUnregisterWith")); }
    BrzCampoPonteiro CurrentCustomLocalReferenceTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.CurrentCustomLocalReferenceTransform")); }
    BrzCampoPonteiro CurrentlyTrackedGizmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.CurrentlyTrackedGizmo")); }
    BrzCampoPonteiro DefaultCustomLocalReferenceTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.DefaultCustomLocalReferenceTransform")); }
    BrzCampoPonteiro DeltaStartTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.DeltaStartTransform")); }
    BrzCampoPonteiro LastCoordinateSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.LastCoordinateSystem")); }
    BrzCampoPonteiro LastEulerAnglesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.LastEulerAngles")); }
    BrzCampoPonteiro LastScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.LastScale")); }
    BrzCampoPonteiro LastTranslationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.LastTranslation")); }
    BrzCampoPonteiro OnTrackedGizmoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.OnTrackedGizmoChanged")); }
    BrzCampoPonteiro ProportionalDragInitialVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.ProportionalDragInitialVector")); }
    BrzCampoPonteiro VectorsToUseIfUnboundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.VectorsToUseIfUnbound")); }
    BrzCampoPonteiro bAvoidDestinationModeWhenUnsafeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bAvoidDestinationModeWhenUnsafe")); }
    BrzCampoPonteiro bChangeDisplayedGizmoOnDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bChangeDisplayedGizmoOnDrag")); }
    BrzCampoPonteiro bCurrentGizmoLacksDegreeOfFreedomField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bCurrentGizmoLacksDegreeOfFreedom")); }
    BrzCampoPonteiro bCurrentGizmoOnlyHasUniformScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bCurrentGizmoOnlyHasUniformScale")); }
    BrzCampoPonteiro bEnforceUniformScaleConstraintsIfPresentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bEnforceUniformScaleConstraintsIfPresent")); }
    BrzCampoPonteiro bGizmoIsBeingDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bGizmoIsBeingDragged")); }
    BrzCampoPonteiro bIgnoreCallbackForDebouncingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bIgnoreCallbackForDebouncing")); }
    BrzCampoPonteiro bInDataEditSequenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bInDataEditSequence")); }
    BrzCampoPonteiro bTriggerSequenceBookendsForNonSequenceUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bTriggerSequenceBookendsForNonSequenceUpdates")); }
    BrzCampoPonteiro bUsingDeltaModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformGizmoDataBinder.bUsingDeltaMode")); }
};

#endif  // BRZ_SDK_JOGO_FTRANSFORMGIZMODATABINDER_H
