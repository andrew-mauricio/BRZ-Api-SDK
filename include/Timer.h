// ═══════════════════════════════════════════════════════════════════════════════
//  Timer.h — o relogio, no nome que os plugins de ARK ja' escrevem
//
//  Encaminha para `ICommands::AddOnTimerCallback`, que e' onde o relogio de
//  verdade mora. Existe porque varios plugins abrem com `#include "Timer.h"` e
//  chamam `API::Timer::Get().DelayExecute(...)`.
//
//  ── O QUE MUDA EM RELACAO AO ORIGINAL, E POR QUE ────────────────────────────
//  O relogio da BRZ Api bate no `UWorld::Tick` — uma vez por quadro, na thread do
//  jogo. Um `DelayExecute` daqui roda LA', e nao numa thread propria: chamar
//  funcao da Unreal de fora da game thread trava o processo, e essa foi a
//  primeira suspeita (errada) quando o servidor comecou a cair em 04/09.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_TIMER_H
#define BRZ_SDK_TIMER_H

#include <functional>
#include <string>
#include <vector>

#include "Brz/Base.h"

namespace API {

class BRZ_API Timer
{
public:
    static Timer& Get();

    //  Roda `fn` depois de `segundos`. O id serve para cancelar; sem id, o
    //  agendamento nao pode ser desfeito — e um plugin descarregado deixaria a
    //  chamada apontando para codigo que ja' saiu da memoria.
    void DelayExecute(const std::function<void()>& fn, float segundos,
                      const std::string& id = std::string());
    bool CancelDelay(const std::string& id);
};

}  // namespace API

#endif  // BRZ_SDK_TIMER_H
