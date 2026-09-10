// ==========================================================================
//  FPrimalStructureTemplateEntry — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEENTRY_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEENTRY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalStructureTemplateEntry
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureTemplateEntry"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalStructureTemplateEntry.operator=(FPrimalStructureTemplateEntry&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalStructureTemplateEntry.operator=(FPrimalStructureTemplateEntry&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FPrimalStructureTemplateEntry.operator=(FPrimalStructureTemplateEntry&)
    //      (colide com FPrimalStructureTemplateEntry.operator=(FPrimalStructureTemplateEntry&&))

    BrzCampoPonteiro CollisionCompsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.CollisionComps")); }
    BrzCampoPonteiro ColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.Colors")); }
    BrzCampoPonteiro ContainerNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.ContainerName")); }
    BrzCampoPonteiro LocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.Loc")); }
    BrzCampoPonteiro MeshCompsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.MeshComps")); }
    BrzCampoPonteiro MiscEntryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.MiscEntryData")); }
    BrzCampoPonteiro RotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.Rot")); }
    BrzCampoPonteiro SkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.Skin")); }
    BrzCampoPonteiro SkinDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.SkinData")); }
    BrzCampoPonteiro SkinIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.SkinID")); }
    BrzCampoPonteiro SkinVariantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.SkinVariant")); }
    BrzCampoPonteiro StructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.Structure")); }
    BrzCampoPonteiro VariantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateEntry.Variant")); }
    BitFieldValue<bool, unsigned __int32> bIsFlipped()
    { return { (void*)this, "bIsFlipped" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEENTRY_H
