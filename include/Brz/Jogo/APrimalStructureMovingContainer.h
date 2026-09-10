// ==========================================================================
//  APrimalStructureMovingContainer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREMOVINGCONTAINER_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREMOVINGCONTAINER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "APrimalStructureItemContainer.h"

struct APrimalStructureMovingContainer : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureMovingContainer"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureMovingContainer.NetExecCommand(FName,FNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool NetExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalStructureMovingContainer.NetExecCommand(FName,FNetExecParams&)", a0, a1);
    }

    BrzCampoPonteiro FinalLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMovingContainer.FinalLocation")); }
    BrzCampoPonteiro ItemBalloonLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMovingContainer.ItemBalloonLocation")); }
    unsigned short& ItemLatitudeField() const
    { return *GetNativePointerField<unsigned short*>(this, "APrimalStructureMovingContainer.ItemLatitude"); }
    unsigned short& ItemLongitudeField() const
    { return *GetNativePointerField<unsigned short*>(this, "APrimalStructureMovingContainer.ItemLongitude"); }
    float& LocationNameField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMovingContainer.LocationName"); }
    unsigned char& bHasSetLocationField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMovingContainer.bHasSetLocation"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREMOVINGCONTAINER_H
