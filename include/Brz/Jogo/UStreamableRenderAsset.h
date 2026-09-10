// ==========================================================================
//  UStreamableRenderAsset — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USTREAMABLERENDERASSET_H
#define BRZ_SDK_JOGO_USTREAMABLERENDERASSET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UObject.h"

struct UStreamableRenderAsset : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UStreamableRenderAsset"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UStreamableRenderAsset.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.CalcCumulativeLODSize(int)
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=45]]
    int CalcCumulativeLODSize(int a0) const
    {
        return NativeCall<int, int>(this, "UStreamableRenderAsset.CalcCumulativeLODSize(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.DoesMipDataExist(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    bool DoesMipDataExist(int a0) const
    {
        return NativeCall<bool, int>(this, "UStreamableRenderAsset.DoesMipDataExist(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.GetMipIoFilenameHash(int)
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=42]]
    unsigned int GetMipIoFilenameHash(int a0) const
    {
        return NativeCall<unsigned int, int>(this, "UStreamableRenderAsset.GetMipIoFilenameHash(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.HasPendingInitOrStreaming(bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasPendingInitOrStreaming(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UStreamableRenderAsset.HasPendingInitOrStreaming(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.IsReadyForFinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    bool IsReadyForFinishDestroy() const
    {
        return NativeCall<bool>(this, "UStreamableRenderAsset.IsReadyForFinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.LinkStreaming()
    // endereco: casamento de bytes com a build de referencia
    void LinkStreaming() const
    {
        NativeCall<void>(this, "UStreamableRenderAsset.LinkStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.SetForceMipLevelsToBeResident(float,int)
    // endereco: casamento de bytes com a build de referencia
    void SetForceMipLevelsToBeResident(float a0, int a1) const
    {
        NativeCall<void, float, int>(this, "UStreamableRenderAsset.SetForceMipLevelsToBeResident(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.StreamIn(int,bool)
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=42]]
    bool StreamIn(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "UStreamableRenderAsset.StreamIn(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.StreamOut(int)
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=42]]
    bool StreamOut(int a0) const
    {
        return NativeCall<bool, int>(this, "UStreamableRenderAsset.StreamOut(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.TickMipLevelChangeCallbacks(TArray<UStreamableRenderAsset*,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    void TickMipLevelChangeCallbacks(void* a0) const
    {
        NativeCall<void, void*>(this, "UStreamableRenderAsset.TickMipLevelChangeCallbacks(TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<32>>*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.TickStreaming(bool,TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void TickStreaming(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "UStreamableRenderAsset.TickStreaming(bool,TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<32>>*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.UnlinkStreaming()
    // endereco: casamento de bytes com a build de referencia
    void UnlinkStreaming() const
    {
        NativeCall<void>(this, "UStreamableRenderAsset.UnlinkStreaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStreamableRenderAsset.WaitForPendingInitOrStreaming(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void WaitForPendingInitOrStreaming(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UStreamableRenderAsset.WaitForPendingInitOrStreaming(bool,bool)", a0, a1);
    }

    double& ForceMipLevelsToBeResidentTimestampField() const
    { return *GetNativePointerField<double*>(this, "UStreamableRenderAsset.ForceMipLevelsToBeResidentTimestamp"); }
    BrzCampoPonteiro NoRefStreamingLODBiasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UStreamableRenderAsset.NoRefStreamingLODBias")); }
    int& NumCinematicMipLevelsField() const
    { return *GetNativePointerField<int*>(this, "UStreamableRenderAsset.NumCinematicMipLevels"); }
    int& StreamingIndexField() const
    { return *GetNativePointerField<int*>(this, "UStreamableRenderAsset.StreamingIndex"); }
    BitFieldValue<bool, unsigned __int32> NeverStream()
    { return { (void*)this, "NeverStream" }; }
    BitFieldValue<bool, unsigned __int32> bGlobalForceMipLevelsToBeResident()
    { return { (void*)this, "bGlobalForceMipLevelsToBeResident" }; }
    BitFieldValue<bool, unsigned __int32> bHasStreamingUpdatePending()
    { return { (void*)this, "bHasStreamingUpdatePending" }; }
    BitFieldValue<bool, unsigned __int32> bForceMiplevelsToBeResident()
    { return { (void*)this, "bForceMiplevelsToBeResident" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreStreamingMipBias()
    { return { (void*)this, "bIgnoreStreamingMipBias" }; }
    BitFieldValue<bool, unsigned __int32> bUseCinematicMipLevels()
    { return { (void*)this, "bUseCinematicMipLevels" }; }
    BitFieldValue<bool, unsigned __int32> bConsoleDropLOD0()
    { return { (void*)this, "bConsoleDropLOD0" }; }
    BitFieldValue<bool, unsigned __int32> bConsoleDropLOD0onLowMemPlatform()
    { return { (void*)this, "bConsoleDropLOD0onLowMemPlatform" }; }

};

#endif  // BRZ_SDK_JOGO_USTREAMABLERENDERASSET_H
