#include <Brz/BrzPluginApi.h>
#include <json.hpp>
#include <cstdio>
#include <fstream>
#include <string>

namespace {
const BrzApiTabela* api = nullptr;
std::string mensagem = "Ola, comunidade BRZ!";
std::string configPath;
bool carregado = false;

bool LerConfig(std::string& erro) {
    try {
        std::ifstream f(configPath);
        if (!f) { erro = "config.json nao encontrado"; return false; }
        nlohmann::json novo; f >> novo;
        if (!novo.is_object() || !novo.contains("mensagem") ||
            !novo["mensagem"].is_string()) {
            erro = "mensagem deve ser um texto"; return false;
        }
        auto texto = novo["mensagem"].get<std::string>();
        if (texto.empty() || texto.size() > 240) {
            erro = "mensagem deve ter entre 1 e 240 bytes UTF-8"; return false;
        }
        mensagem = std::move(texto);
        return true;
    } catch (const std::exception& e) { erro = e.what(); return false; }
}
void Responder(char* resposta, int tamanho, const std::string& texto) {
    if (resposta && tamanho > 0)
        std::snprintf(resposta, static_cast<size_t>(tamanho), "%s", texto.c_str());
}
void Ola(void*, const char*, char* resposta, int tamanho) {
    Responder(resposta, tamanho, mensagem);
}
void Reload(void*, const char*, char* resposta, int tamanho) {
    std::string erro;
    const bool ok = LerConfig(erro);
    Responder(resposta, tamanho, ok ? "BrzOla: configuracao recarregada."
        : "BrzOla: configuracao anterior mantida. " + erro);
}
}
extern "C" __declspec(dllexport)
void BrzPluginCarregar(const BrzApiTabela* tabela) {
    if (carregado || !tabela || tabela->versao < BRZ_API_VERSAO ||
        tabela->tamanho < sizeof(BrzApiTabela)) return;
    if (!tabela->Log || !tabela->CaminhoConfig ||
        !tabela->AdicionarComandoRcon || !tabela->RemoverComandoRcon) return;
    api = tabela;
    const char* caminho = api->CaminhoConfig("BrzOla");
    if (!caminho) { api->Log("[BrzOla] caminho de config indisponivel"); return; }
    configPath = caminho;
    std::string erro;
    if (!LerConfig(erro)) { api->Log("[BrzOla] %s", erro.c_str()); return; }
    if (!api->AdicionarComandoRcon("BrzOla.Ola", Ola)) return;
    if (!api->AdicionarComandoRcon("BrzOla.Reload", Reload)) {
        api->RemoverComandoRcon("BrzOla.Ola"); return;
    }
    carregado = true;
    api->Log("[BrzOla] BrzOla.Ola e BrzOla.Reload registrados");
}
extern "C" __declspec(dllexport)
void BrzPluginDescarregar() {
    if (carregado && api) {
        api->RemoverComandoRcon("BrzOla.Ola");
        api->RemoverComandoRcon("BrzOla.Reload");
    }
    carregado = false; api = nullptr;
}
