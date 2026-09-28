// ==========================================================================
//  FWorldPartitionStreamingSource — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDPARTITIONSTREAMINGSOURCE_H
#define BRZ_SDK_JOGO_FWORLDPARTITIONSTREAMINGSOURCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldPartitionStreamingSource
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldPartitionStreamingSource"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionStreamingSource.GetDebugColor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDebugColor() const
    {
        return NativeCall<void*>(this, "FWorldPartitionStreamingSource.GetDebugColor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionStreamingSource.ToString()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToString() const
    {
        return NativeCall<void*>(this, "FWorldPartitionStreamingSource.ToString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionStreamingSource.UpdateHash()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateHash() const
    {
        return NativeCall<void*>(this, "FWorldPartitionStreamingSource.UpdateHash()");
    }

    BrzCampoPonteiro DebugColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.DebugColor")); }
    BrzCampoPonteiro ExtraAngleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.ExtraAngle")); }
    BrzCampoPonteiro ExtraRadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.ExtraRadius")); }
    BrzCampoPonteiro Hash2DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.Hash2D")); }
    BrzCampoPonteiro Hash3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.Hash3D")); }
    BrzCampoPonteiro LocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.Location")); }
    FString& NameField() const
    { return *GetNativePointerField<FString*>(this, "FWorldPartitionStreamingSource.Name"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "FWorldPartitionStreamingSource.Priority"); }
    BrzCampoPonteiro QuantizedLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.QuantizedLocation")); }
    BrzCampoPonteiro QuantizedRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.QuantizedRotation")); }
    BrzCampoPonteiro RotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.Rotation")); }
    BrzCampoPonteiro ShapesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.Shapes")); }
    BrzCampoPonteiro TargetBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.TargetBehavior")); }
    BrzCampoPonteiro TargetGridsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.TargetGrids")); }
    BrzCampoPonteiro TargetHLODLayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.TargetHLODLayers")); }
    BrzCampoPonteiro TargetStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.TargetState")); }
    BrzCampoPonteiro VelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.Velocity")); }
    BrzCampoPonteiro bBlockOnSlowLoadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.bBlockOnSlowLoading")); }
    BrzCampoPonteiro bForce2DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.bForce2D")); }
    BrzCampoPonteiro bRemoteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.bRemote")); }
    BrzCampoPonteiro bReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.bReplay")); }
    BrzCampoPonteiro bUseVelocityContributionToCellsSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionStreamingSource.bUseVelocityContributionToCellsSorting")); }
};

#endif  // BRZ_SDK_JOGO_FWORLDPARTITIONSTREAMINGSOURCE_H
