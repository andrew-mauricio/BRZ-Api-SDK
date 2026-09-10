// ==========================================================================
//  UKismetRenderingLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETRENDERINGLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETRENDERINGLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UKismetRenderingLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetRenderingLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetRenderingLibrary.ExportRenderTarget(UObject*,UTextureRenderTarget2D*,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ExportRenderTarget(void* a0, void* a1, const FString& a2, const FString& a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetRenderingLibrary.ExportRenderTarget(UObject*,UTextureRenderTarget2D*,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro ExportRenderTarget(void* a0, void* a1, FString* a2, FString* a3)
    { return ExportRenderTarget(a0, a1, *a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetRenderingLibrary.ExportTexture2D(UObject*,UTexture2D*,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ExportTexture2D(void* a0, void* a1, const FString& a2, const FString& a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetRenderingLibrary.ExportTexture2D(UObject*,UTexture2D*,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro ExportTexture2D(void* a0, void* a1, FString* a2, FString* a3)
    { return ExportTexture2D(a0, a1, *a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetRenderingLibrary.ReadRenderTargetPixel(UObject*,UTextureRenderTarget2D*,int,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ReadRenderTargetPixel(void* a0, void* a1, int a2, int a3)
    {
        return NativeCall<void*, void*, void*, int, int>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetPixel(UObject*,UTextureRenderTarget2D*,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetRenderingLibrary.ReadRenderTargetRawPixel(UObject*,UTextureRenderTarget2D*,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ReadRenderTargetRawPixel(void* a0, void* a1, int a2, int a3, bool a4)
    {
        return NativeCall<void*, void*, void*, int, int, bool>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetRawPixel(UObject*,UTextureRenderTarget2D*,int,int,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetRenderingLibrary.ReadRenderTargetRawPixelArea(UObject*,UTextureRenderTarget2D*,int,int,in
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ReadRenderTargetRawPixelArea(void* a0, void* a1, int a2, int a3, int a4, int a5, bool a6)
    {
        return NativeCall<void*, void*, void*, int, int, int, int, bool>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetRawPixelArea(UObject*,UTextureRenderTarget2D*,int,int,int,int,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetRenderingLibrary.SetCastInsetShadowForAllAttachments(UPrimitiveComponent*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetCastInsetShadowForAllAttachments(void* a0, bool a1, bool a2)
    {
        return NativeCall<void*, void*, bool, bool>(nullptr, "UKismetRenderingLibrary.SetCastInsetShadowForAllAttachments(UPrimitiveComponent*,bool,bool)", a0, a1, a2);
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETRENDERINGLIBRARY_H
