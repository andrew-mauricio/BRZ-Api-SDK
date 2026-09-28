// ==========================================================================
//  UTexture — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UTEXTURE_H
#define BRZ_SDK_JOGO_UTEXTURE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UEnum;

#include "UStreamableRenderAsset.h"

struct UTexture : public UStreamableRenderAsset
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UTexture"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.BeginDestroy()
    // classe: a funcao mora em UStreamableRenderAsset, e UTexture herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UStreamableRenderAsset.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.BeginFinalReleaseResource()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BeginFinalReleaseResource() const
    {
        NativeCall<void>(this, "UTexture.BeginFinalReleaseResource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.CancelPendingTextureStreaming()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=201+chamadores=2+grafo=3/3]]
    static void CancelPendingTextureStreaming()
    {
        NativeCall<void>(nullptr, "UTexture.CancelPendingTextureStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.DoesMipDataExist(int)
    // endereco: casamento de bytes com a build de referencia
    bool DoesMipDataExist(int a0) const
    {
        return NativeCall<bool, int>(this, "UTexture.DoesMipDataExist(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetAssetUserDataArray()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetAssetUserDataArray() const
    {
        return NativeCall<void*>(this, "UTexture.GetAssetUserDataArray()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetLastRenderTimeForStreaming()
    // endereco: casamento de bytes com a build de referencia
    float GetLastRenderTimeForStreaming() const
    {
        return NativeCall<float>(this, "UTexture.GetLastRenderTimeForStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetMaterialType()
    // endereco: casamento de bytes com a build de referencia
    int GetMaterialType() const
    {
        return NativeCall<int>(this, "UTexture.GetMaterialType()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetMipIoFilenameHash(int)
    // endereco: casamento de bytes com a build de referencia
    unsigned int GetMipIoFilenameHash(int a0) const
    {
        return NativeCall<unsigned int, int>(this, "UTexture.GetMipIoFilenameHash(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetPixelFormatEnum()
    // endereco: casamento de bytes com a build de referencia
    static UEnum* GetPixelFormatEnum()
    {
        return NativeCall<UEnum*>(nullptr, "UTexture.GetPixelFormatEnum()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetResource()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetResource() const
    {
        return NativeCall<void*>(this, "UTexture.GetResource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.GetResourcePostInitState(FTexturePlatformData*,bool,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetResourcePostInitState(void* retorno, void* a0, bool a1, int a2, int a3, bool a4) const
    {
        NativeCall<void, void*, void*, bool, int, int, bool>(this, "UTexture.GetResourcePostInitState(FTexturePlatformData*,bool,int,int,bool)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.HasPendingLODTransition()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool HasPendingLODTransition() const
    {
        return NativeCall<bool>(this, "UTexture.HasPendingLODTransition()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.HasPendingRenderResourceInitialization()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool HasPendingRenderResourceInitialization() const
    {
        return NativeCall<bool>(this, "UTexture.HasPendingRenderResourceInitialization()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.InvalidateLastRenderTimeForStreaming()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void InvalidateLastRenderTimeForStreaming() const
    {
        NativeCall<void>(this, "UTexture.InvalidateLastRenderTimeForStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.IsReadyForFinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    bool IsReadyForFinishDestroy() const
    {
        return NativeCall<bool>(this, "UTexture.IsReadyForFinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.PostCDOContruct()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void PostCDOContruct() const
    {
        NativeCall<void>(this, "UTexture.PostCDOContruct()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.PostLoad()
    // classe: a funcao mora em UObject, e UTexture herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UObject.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.ReleaseResource()
    // endereco: casamento de bytes com a build de referencia
    void ReleaseResource() const
    {
        NativeCall<void>(this, "UTexture.ReleaseResource()");
    }

    // dump_sobre_sdk_287a0
    //   UTexture.SerializeCookedPlatformData(FArchive&,bool)
    // endereco: casamento de bytes com a build de referencia
    void SerializeCookedPlatformData(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UTexture.SerializeCookedPlatformData(FArchive&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UTexture.ShouldMipLevelsBeForcedResident()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool ShouldMipLevelsBeForcedResident() const
    {
        return NativeCall<bool>(this, "UTexture.ShouldMipLevelsBeForcedResident()");
    }

    BrzCampoPonteiro AssetUserDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.AssetUserData")); }
    BrzCampoPonteiro AvailabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.Availability")); }
    BrzCampoPonteiro CompressionSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.CompressionSettings")); }
    BrzCampoPonteiro CompressionYCoCgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.CompressionYCoCg")); }
    unsigned char& CookPlatformTilingSettingsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UTexture.CookPlatformTilingSettings"); }
    BrzCampoPonteiro DownscaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.Downscale")); }
    BrzCampoPonteiro DownscaleOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.DownscaleOptions")); }
    unsigned char& FilterField() const
    { return *GetNativePointerField<unsigned char*>(this, "UTexture.Filter"); }
    BrzCampoPonteiro LODBiasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.LODBias")); }
    BrzCampoPonteiro LODGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.LODGroup")); }
    int& LevelIndexField() const
    { return *GetNativePointerField<int*>(this, "UTexture.LevelIndex"); }
    BrzCampoPonteiro LightingGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.LightingGuid")); }
    BrzCampoPonteiro MipLoadOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.MipLoadOptions")); }
    BrzCampoPonteiro SRGBField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.SRGB")); }
    BrzCampoPonteiro VirtualTextureStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.VirtualTextureStreaming")); }
    BrzCampoPonteiro bAsyncResourceReleaseHasBeenStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.bAsyncResourceReleaseHasBeenStarted")); }
    BrzCampoPonteiro bNoTilingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.bNoTiling")); }
    BrzCampoPonteiro bNotOfflineProcessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.bNotOfflineProcessed")); }
    BrzCampoPonteiro bOodlePreserveExtremesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UTexture.bOodlePreserveExtremes")); }
    BitFieldValue<bool, unsigned __int32> SRGB()
    { return { (void*)this, "SRGB" }; }
    BitFieldValue<bool, unsigned __int32> bNoTiling()
    { return { (void*)this, "bNoTiling" }; }
    BitFieldValue<bool, unsigned __int32> VirtualTextureStreaming()
    { return { (void*)this, "VirtualTextureStreaming" }; }
    BitFieldValue<bool, unsigned __int32> CompressionYCoCg()
    { return { (void*)this, "CompressionYCoCg" }; }
    BitFieldValue<bool, unsigned __int32> bNotOfflineProcessed()
    { return { (void*)this, "bNotOfflineProcessed" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncResourceReleaseHasBeenStarted()
    { return { (void*)this, "bAsyncResourceReleaseHasBeenStarted" }; }
    BitFieldValue<bool, unsigned __int32> bOodlePreserveExtremes()
    { return { (void*)this, "bOodlePreserveExtremes" }; }

};

#endif  // BRZ_SDK_JOGO_UTEXTURE_H
