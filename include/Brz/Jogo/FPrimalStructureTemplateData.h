// ==========================================================================
//  FPrimalStructureTemplateData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEDATA_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FPrimalStructureTemplateData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureTemplateData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalStructureTemplateData.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalStructureTemplateData.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalStructureTemplateData.StaticStruct()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FPrimalStructureTemplateData.StaticStruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalStructureTemplateData.Validate()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Validate()
    {
        return NativeCall<void*>(nullptr, "FPrimalStructureTemplateData.Validate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalStructureTemplateData.operator=(FPrimalStructureTemplateData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalStructureTemplateData.operator=(FPrimalStructureTemplateData&)", a0);
    }

    BrzCampoPonteiro ContentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.Contents")); }
    BrzCampoPonteiro CreatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.Creator")); }
    BrzCampoPonteiro DataVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.DataVersion")); }
    BrzCampoPonteiro DescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.Description")); }
    TArray<void*>& EntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureTemplateData.Entries"); }
    BrzCampoPonteiro InvalidSkinCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.InvalidSkinCount")); }
    BrzCampoPonteiro InvalidStructureCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.InvalidStructureCount")); }
    BrzCampoPonteiro MiscDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.MiscData")); }
    FString& NameField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalStructureTemplateData.Name"); }
    BrzCampoPonteiro SnapOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateData.SnapOverrides")); }
};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEDATA_H
