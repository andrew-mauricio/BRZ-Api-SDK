// ==========================================================================
//  ADroppedItemMission — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADROPPEDITEMMISSION_H
#define BRZ_SDK_JOGO_ADROPPEDITEMMISSION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AMissionType;

#include "ADroppedItem.h"

struct ADroppedItemMission : public ADroppedItem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADroppedItemMission"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemMission.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "ADroppedItemMission.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemMission.IsAllowedToPickupItem_Implementation(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool IsAllowedToPickupItem_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ADroppedItemMission.IsAllowedToPickupItem_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADroppedItemMission.OnItemPickedUp(APlayerController*,UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void OnItemPickedUp(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ADroppedItemMission.OnItemPickedUp(APlayerController*,UPrimalItem*)", a0, a1);
    }

    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "ADroppedItemMission.OwnerMission"); }
    BitFieldValue<bool, unsigned __int32> bPickupOnlyAllowMissionPlayers()
    { return { (void*)this, "bPickupOnlyAllowMissionPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bShowHUDMissionInfo()
    { return { (void*)this, "bShowHUDMissionInfo" }; }

};

#endif  // BRZ_SDK_JOGO_ADROPPEDITEMMISSION_H
