// ==========================================================================
//  FHittestGrid — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FHITTESTGRID_H
#define BRZ_SDK_JOGO_FHITTESTGRID_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;


struct FHittestGrid
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FHittestGrid"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.AddGrid(TSharedRef<FHittestGrid,1>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddGrid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FHittestGrid.AddGrid(TSharedRef<FHittestGrid,1>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.Clear()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro Clear() const
    {
        return NativeCall<void*>(this, "FHittestGrid.Clear()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.ClearInternal(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearInternal(int a0) const
    {
        return NativeCall<void*, int>(this, "FHittestGrid.ClearInternal(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.FindNextFocusableWidget(FArrangedWidget&,EUINavigation,FNavigationReply&,FArrangedW
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindNextFocusableWidget(void* a0, int a1, void* a2, void* a3, int a4) const
    {
        return NativeCall<void*, void*, int, void*, void*, int>(this, "FHittestGrid.FindNextFocusableWidget(FArrangedWidget&,EUINavigation,FNavigationReply&,FArrangedWidget&,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.GetCollapsedHittestGrid(TArray<FHittestGrid*,TSizedInlineAllocator<16,32,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCollapsedHittestGrid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FHittestGrid.GetCollapsedHittestGrid(TArray<FHittestGrid*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.GetCollapsedWidgets(TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCollapsedWidgets(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "FHittestGrid.GetCollapsedWidgets(TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>>>&,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.GetHitIndexFromCellIndex(FHittestGrid::FGridTestingParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHitIndexFromCellIndex(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FHittestGrid.GetHitIndexFromCellIndex(FHittestGrid::FGridTestingParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.InsertCustomHitTestPath(SWidget*,TSharedRef<ICustomHitTestPath,1>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InsertCustomHitTestPath(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FHittestGrid.InsertCustomHitTestPath(SWidget*,TSharedRef<ICustomHitTestPath,1>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.IsDescendantOf(SWidget*,FHittestGrid::FWidgetData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDescendantOf(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FHittestGrid.IsDescendantOf(SWidget*,FHittestGrid::FWidgetData&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.RemoveWidget(SWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FHittestGrid.RemoveWidget(SWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.SameSize(FHittestGrid*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SameSize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FHittestGrid.SameSize(FHittestGrid*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FHittestGrid.SetHittestArea(UE::Slate::FDeprecateVector2DParameter&,UE::Slate::FDeprecateVector2
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetHittestArea(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "FHittestGrid.SetHittestArea(UE::Slate::FDeprecateVector2DParameter&,UE::Slate::FDeprecateVector2DParameter&,UE::Slate::FDeprecateVector2DParameter&)", a0, a1, a2);
    }
    BrzCampoPonteiro CachedOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.CachedOwner")); }
    BrzCampoPonteiro CellsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.Cells")); }
    BrzCampoPonteiro DirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.Direction")); }
    BrzCampoPonteiro GridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.Grid")); }
    BrzCampoPonteiro GridSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.GridSize")); }
    BrzCampoPonteiro NumCellsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.NumCells")); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "FHittestGrid.Owner"); }
    BrzCampoPonteiro RadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.Radius")); }
    BitFieldValue<bool, unsigned __int32> Result()
    { return { (void*)this, "Result" }; }
    BrzCampoPonteiro UserIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.UserIndex")); }
    BrzCampoPonteiro WidgetIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHittestGrid.WidgetIndex")); }
};

#endif  // BRZ_SDK_JOGO_FHITTESTGRID_H
