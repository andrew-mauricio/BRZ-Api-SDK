// ==========================================================================
//  FPrimalStructureSnapPointOverride — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURESNAPPOINTOVERRIDE_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURESNAPPOINTOVERRIDE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalStructureSnapPointOverride
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureSnapPointOverride"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalStructureSnapPointOverride.operator=(FPrimalStructureSnapPointOverride&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalStructureSnapPointOverride.operator=(FPrimalStructureSnapPointOverride&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FPrimalStructureSnapPointOverride.operator=(FPrimalStructureSnapPointOverride&)
    //      (colide com FPrimalStructureSnapPointOverride.operator=(FPrimalStructureSnapPointOverride&&))

    BrzCampoPonteiro PreviewLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPointOverride.PreviewLocOffset")); }
    BrzCampoPonteiro PreviewRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPointOverride.PreviewRotOffset")); }
    BrzCampoPonteiro PreviewScaleOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPointOverride.PreviewScaleOffset")); }
    BrzCampoPonteiro StaticMeshOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPointOverride.StaticMeshOverride")); }
    BrzCampoPonteiro StructureClassCDOField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPointOverride.StructureClassCDO")); }
    BrzCampoPonteiro StructureClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSnapPointOverride.StructureClassOverride")); }
    BitFieldValue<bool, unsigned __int32> PreviewTransformOverride()
    { return { (void*)this, "PreviewTransformOverride" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURESNAPPOINTOVERRIDE_H
