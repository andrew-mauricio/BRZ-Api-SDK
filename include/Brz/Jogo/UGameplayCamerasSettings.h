// ==========================================================================
//  UGameplayCamerasSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYCAMERASSETTINGS_H
#define BRZ_SDK_JOGO_UGAMEPLAYCAMERASSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayCamerasSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayCamerasSettings"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    int& CombinedCameraRigNumThresholdField() const
    { return *GetNativePointerField<int*>(this, "UGameplayCamerasSettings.CombinedCameraRigNumThreshold"); }
    double& DefaultIKAimingAngleToleranceField() const
    { return *GetNativePointerField<double*>(this, "UGameplayCamerasSettings.DefaultIKAimingAngleTolerance"); }
    double& DefaultIKAimingDistanceToleranceField() const
    { return *GetNativePointerField<double*>(this, "UGameplayCamerasSettings.DefaultIKAimingDistanceTolerance"); }
    unsigned char& DefaultIKAimingMaxIterationsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayCamerasSettings.DefaultIKAimingMaxIterations"); }
    double& DefaultIKAimingMinDistanceField() const
    { return *GetNativePointerField<double*>(this, "UGameplayCamerasSettings.DefaultIKAimingMinDistance"); }
    BitFieldValue<bool, unsigned __int32> bAutoSpawnCameraSystemActor()
    { return { (void*)this, "bAutoSpawnCameraSystemActor" }; }
    BitFieldValue<bool, unsigned __int32> bAutoSpawnCameraSystemActorSetsControlRotation()
    { return { (void*)this, "bAutoSpawnCameraSystemActorSetsControlRotation" }; }

};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYCAMERASSETTINGS_H
