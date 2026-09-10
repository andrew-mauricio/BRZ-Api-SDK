// ==========================================================================
//  AGameNetworkManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AGAMENETWORKMANAGER_H
#define BRZ_SDK_JOGO_AGAMENETWORKMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AInfo.h"

struct AGameNetworkManager : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AGameNetworkManager"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameNetworkManager.CalculatedNetSpeed()
    // endereco: casamento de bytes com a build de referencia
    int CalculatedNetSpeed() const
    {
        return NativeCall<int>(this, "AGameNetworkManager.CalculatedNetSpeed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameNetworkManager.EnableStandbyCheatDetection(bool)
    // endereco: casamento de bytes com a build de referencia
    void EnableStandbyCheatDetection(bool a0) const
    {
        NativeCall<void, bool>(this, "AGameNetworkManager.EnableStandbyCheatDetection(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameNetworkManager.ExceedsAllowablePositionError(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ExceedsAllowablePositionError(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameNetworkManager.ExceedsAllowablePositionError(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameNetworkManager.NetworkVelocityNearZero(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool NetworkVelocityNearZero(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameNetworkManager.NetworkVelocityNearZero(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameNetworkManager.UpdateNetSpeeds(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateNetSpeeds(bool a0) const
    {
        NativeCall<void, bool>(this, "AGameNetworkManager.UpdateNetSpeeds(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameNetworkManager.WithinUpdateDelayBounds(APlayerController*,double)
    // endereco: casamento de bytes com a build de referencia
    bool WithinUpdateDelayBounds(void* a0, double a1) const
    {
        return NativeCall<bool, void*, double>(this, "AGameNetworkManager.WithinUpdateDelayBounds(APlayerController*,double)", a0, a1);
    }

    int& AdjustedNetSpeedField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.AdjustedNetSpeed"); }
    float& BadPacketLossThresholdField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.BadPacketLossThreshold"); }
    int& BadPingThresholdField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.BadPingThreshold"); }
    float& CLIENTADJUSTUPDATECOSTField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.CLIENTADJUSTUPDATECOST"); }
    float& ClientErrorUpdateRateLimitField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientErrorUpdateRateLimit"); }
    float& ClientNetCamUpdateDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetCamUpdateDeltaTime"); }
    float& ClientNetCamUpdatePositionLimitField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetCamUpdatePositionLimit"); }
    float& ClientNetSendMoveDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTime"); }
    float& ClientNetSendMoveDeltaTimeStationaryField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTimeStationary"); }
    float& ClientNetSendMoveDeltaTimeThrottledField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTimeThrottled"); }
    int& ClientNetSendMoveThrottleAtNetSpeedField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.ClientNetSendMoveThrottleAtNetSpeed"); }
    int& ClientNetSendMoveThrottleOverPlayerCountField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.ClientNetSendMoveThrottleOverPlayerCount"); }
    float& JoinInProgressStandbyWaitTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.JoinInProgressStandbyWaitTime"); }
    double& LastNetSpeedUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "AGameNetworkManager.LastNetSpeedUpdateTime"); }
    float& MAXCLIENTUPDATEINTERVALField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXCLIENTUPDATEINTERVAL"); }
    float& MAXNEARZEROVELOCITYSQUAREDField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXNEARZEROVELOCITYSQUARED"); }
    float& MAXPOSITIONERRORSQUAREDField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXPOSITIONERRORSQUARED"); }
    float& MaxClientForcedUpdateDurationField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxClientForcedUpdateDuration"); }
    float& MaxClientSmoothingDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxClientSmoothingDeltaTime"); }
    int& MaxDynamicBandwidthField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MaxDynamicBandwidth"); }
    float& MaxMoveDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxMoveDeltaTime"); }
    int& MinDynamicBandwidthField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MinDynamicBandwidth"); }
    float& MoveRepSizeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MoveRepSize"); }
    float& MovementTimeDiscrepancyDriftAllowanceField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyDriftAllowance"); }
    float& MovementTimeDiscrepancyMaxTimeMarginField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyMaxTimeMargin"); }
    float& MovementTimeDiscrepancyMinTimeMarginField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyMinTimeMargin"); }
    float& MovementTimeDiscrepancyResolutionRateField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyResolutionRate"); }
    float& PercentForBadPingField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentForBadPing"); }
    float& PercentMissingForRxStandbyField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForRxStandby"); }
    float& PercentMissingForTxStandbyField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForTxStandby"); }
    float& ServerForcedUpdateHitchCooldownField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ServerForcedUpdateHitchCooldown"); }
    float& ServerForcedUpdateHitchThresholdField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ServerForcedUpdateHitchThreshold"); }
    float& SeverePacketLossThresholdField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.SeverePacketLossThreshold"); }
    int& SeverePingThresholdField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.SeverePingThreshold"); }
    float& StandbyRxCheatTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyRxCheatTime"); }
    float& StandbyTxCheatTimeField() const
    { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyTxCheatTime"); }
    int& TotalNetBandwidthField() const
    { return *GetNativePointerField<int*>(this, "AGameNetworkManager.TotalNetBandwidth"); }
    bool& bMovementTimeDiscrepancyDetectionField() const
    { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bMovementTimeDiscrepancyDetection"); }
    bool& bUseDistanceBasedRelevancyField() const
    { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bUseDistanceBasedRelevancy"); }
    BitFieldValue<bool, unsigned __int32> bIsStandbyCheckingEnabled()
    { return { (void*)this, "bIsStandbyCheckingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bHasStandbyCheatTriggered()
    { return { (void*)this, "bHasStandbyCheatTriggered" }; }
    BitFieldValue<bool, unsigned __int32> ClientAuthorativePosition()
    { return { (void*)this, "ClientAuthorativePosition" }; }
    BitFieldValue<bool, unsigned __int32> bMovementTimeDiscrepancyDetection()
    { return { (void*)this, "bMovementTimeDiscrepancyDetection" }; }
    BitFieldValue<bool, unsigned __int32> bMovementTimeDiscrepancyForceCorrectionsDuringResolution()
    { return { (void*)this, "bMovementTimeDiscrepancyForceCorrectionsDuringResolution" }; }
    BitFieldValue<bool, unsigned __int32> bMovementTimeDiscrepancyResolution()
    { return { (void*)this, "bMovementTimeDiscrepancyResolution" }; }
    BitFieldValue<bool, unsigned __int32> bUseDistanceBasedRelevancy()
    { return { (void*)this, "bUseDistanceBasedRelevancy" }; }

};

#endif  // BRZ_SDK_JOGO_AGAMENETWORKMANAGER_H
