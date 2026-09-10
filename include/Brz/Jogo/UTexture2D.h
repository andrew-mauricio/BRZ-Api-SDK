// ==========================================================================
//  UTexture2D — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UTEXTURE2D_H
#define BRZ_SDK_JOGO_UTEXTURE2D_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UTexture.h"

struct UTexture2D : public UTexture
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UTexture2D"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.BeginDestroy()
    // classe: a funcao mora em UTexture, e UTexture2D herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=47]]
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UTexture.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.CalcTextureMemorySize(int)
    // endereco: casamento de bytes com a build de referencia
    int CalcTextureMemorySize(int a0) const
    {
        return NativeCall<int, int>(this, "UTexture2D.CalcTextureMemorySize(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetDesc()
    // endereco: casamento de bytes com a build de referencia
    void GetDesc(void* retorno) const
    {
        NativeCall<void, void*>(this, "UTexture2D.GetDesc()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetGlobalMipMapLODBias()
    // endereco: casamento de bytes com a build de referencia
    static float GetGlobalMipMapLODBias()
    {
        return NativeCall<float>(nullptr, "UTexture2D.GetGlobalMipMapLODBias()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetMipData(int,void**)
    // endereco: casamento de bytes com a build de referencia
    void GetMipData(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UTexture2D.GetMipData(int,void**)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetNumMips()
    // endereco: casamento de bytes com a build de referencia
    int GetNumMips() const
    {
        return NativeCall<int>(this, "UTexture2D.GetNumMips()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetNumMipsAllowed(bool)
    // endereco: casamento de bytes com a build de referencia
    int GetNumMipsAllowed(bool a0) const
    {
        return NativeCall<int, bool>(this, "UTexture2D.GetNumMipsAllowed(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetNumResidentMips()
    // endereco: casamento de bytes com a build de referencia
    int GetNumResidentMips() const
    {
        return NativeCall<int>(this, "UTexture2D.GetNumResidentMips()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.GetResourceSizeEx(FResourceSizeEx&)
    // endereco: casamento de bytes com a build de referencia
    void GetResourceSizeEx(void* a0) const
    {
        NativeCall<void, void*>(this, "UTexture2D.GetResourceSizeEx(FResourceSizeEx&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.IsCurrentlyVirtualTextured()
    // endereco: cache_pdb_25090264
    bool IsCurrentlyVirtualTextured() const
    {
        return NativeCall<bool>(this, "UTexture2D.IsCurrentlyVirtualTextured()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.RefreshSamplerStates()
    // endereco: casamento de bytes com a build de referencia
    void RefreshSamplerStates() const
    {
        NativeCall<void>(this, "UTexture2D.RefreshSamplerStates()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.StreamIn(int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool StreamIn(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "UTexture2D.StreamIn(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture2D.StreamOut(int)
    // endereco: casamento de bytes com a build de referencia
    bool StreamOut(int a0) const
    {
        return NativeCall<bool, int>(this, "UTexture2D.StreamOut(int)", a0);
    }

    BrzCampoPonteiro AddressXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture2D.AddressX")); }
    BrzCampoPonteiro AddressYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture2D.AddressY")); }
    BrzCampoPonteiro FirstResourceMemMipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture2D.FirstResourceMemMip")); }
    BrzCampoPonteiro ImportedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture2D.ImportedSize")); }
    BitFieldValue<bool, unsigned __int32> bTemporarilyDisableStreaming()
    { return { (void*)this, "bTemporarilyDisableStreaming" }; }

};

#endif  // BRZ_SDK_JOGO_UTEXTURE2D_H
