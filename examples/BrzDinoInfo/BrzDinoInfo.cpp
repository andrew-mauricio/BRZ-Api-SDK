#include <Brz/BrzPluginApi.h>
#include <Brz/Jogo/APrimalDinoCharacter.h>
#include <json.hpp>
#include <cstdio>
#include <fstream>
#include <string>

namespace {
const BrzApiTabela* api = nullptr;
bool carregado = false;
bool habilitado = true;
std::string configPath;
bool LerConfig(std::string& erro) {
    try {
        std::ifstream f(configPath);
        if (!f) { erro = "config.json nao encontrado"; return false; }
        nlohmann::json novo; f >> novo;
        if (!novo.is_object() || !novo.contains("habilitado") ||
            !novo["habilitado"].is_boolean()) {
            erro = "habilitado deve ser true ou false"; return false;
        }
        habilitado = novo["habilitado"].get<bool>(); return true;
    } catch (const std::exception& e) { erro = e.what(); return false; }
}
int DinoInfo(void* jogador, const char*) {
    if (!api || !jogador) return 0;
    if (!habilitado) {
        api->MensagemDeServidor(jogador, "BrzDinoInfo esta desabilitado."); return 1;
    }
    // Objeto obtido no proprio callback; nunca armazenado entre ticks.
    auto* dino = static_cast<APrimalDinoCharacter*>(api->DinoMontado(jogador));
    if (!dino) {
        api->MensagemDeServidor(jogador, "Monte em um dino para usar /sdkdino."); return 1;
    }
    // Leitura pelo header do jogo, resolvida pelo winmm.dll da BRZ Api.
    // O resultado depende da correspondencia entre SDK, motor e build do jogo.
    const bool filhote = dino->IsBaby();
    api->MensagemDeServidor(jogador, filhote ? "Seu dino e filhote." : "Seu dino nao e filhote.");
    return 1;
}
void Reload(void*, const char*, char* resposta, int tamanho) {
    std::string erro;
    const bool ok = LerConfig(erro);
    const std::string texto = ok ? "BrzDinoInfo: configuracao recarregada."
        : "BrzDinoInfo: configuracao anterior mantida. " + erro;
    if (resposta && tamanho > 0)
        std::snprintf(resposta, static_cast<size_t>(tamanho), "%s", texto.c_str());
}
}
extern "C" __declspec(dllexport)
void BrzPluginCarregar(const BrzApiTabela* tabela) {
    if (carregado || !tabela || tabela->versao < BRZ_API_VERSAO ||
        tabela->tamanho < sizeof(BrzApiTabela)) return;
    if (!tabela->Log || !tabela->CaminhoConfig || !tabela->DinoMontado ||
        !tabela->MensagemDeServidor || !tabela->AdicionarComandoChat ||
        !tabela->RemoverComandoChat || !tabela->AdicionarComandoRcon ||
        !tabela->RemoverComandoRcon) return;
    api = tabela;
    const char* caminho = api->CaminhoConfig("BrzDinoInfo");
    if (!caminho) return;
    configPath = caminho;
    std::string erro;
    if (!LerConfig(erro)) { api->Log("[BrzDinoInfo] %s", erro.c_str()); return; }
    if (!api->AdicionarComandoChat("/sdkdino", DinoInfo)) return;
    if (!api->AdicionarComandoRcon("BrzDinoInfo.Reload", Reload)) {
        api->RemoverComandoChat("/sdkdino"); return;
    }
    carregado = true;
    api->Log("[BrzDinoInfo] /sdkdino e BrzDinoInfo.Reload registrados");
}
extern "C" __declspec(dllexport)
void BrzPluginDescarregar() {
    if (carregado && api) {
        api->RemoverComandoChat("/sdkdino");
        api->RemoverComandoRcon("BrzDinoInfo.Reload");
    }
    carregado = false; api = nullptr;
}
