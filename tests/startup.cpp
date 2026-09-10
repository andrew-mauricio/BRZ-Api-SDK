#include <windows.h>
#include <Brz/BrzPluginApi.h>
#include <map>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdarg>
#include <stdexcept>
static std::map<std::string,BrzFnComandoRcon> commands;
static std::string config;
static void Log(const char*,...) {}
static const char* Caminho(const char*) { return config.c_str(); }
static int Add(const char* n,BrzFnComandoRcon fn) { return commands.emplace(n,fn).second ? 1 : 0; }
static int Remove(const char* n) { return int(commands.erase(n)); }
static void check(bool v,const char* m) { if(!v) throw std::runtime_error(m); }
static std::string run(const char* n) { char b[1024]{};commands.at(n)(nullptr,n,b,sizeof(b));return b; }
static void write(const char* s) { std::ofstream f(config); f<<s; check(bool(f),"escrita config"); }
int main(int argc,char** argv) {
    try {
        check(argc==3,"uso: startup.exe BrzOla.dll pasta-temporaria");
        config=std::string(argv[2])+"\\config.json";
        CreateDirectoryA(argv[2],nullptr);
        HMODULE m=LoadLibraryA(argv[1]);check(m!=nullptr,"DLL nao carregou");
        using Load=void(*)(const BrzApiTabela*);using Unload=void(*)();
        auto load=reinterpret_cast<Load>(GetProcAddress(m,"BrzPluginCarregar"));
        auto unload=reinterpret_cast<Unload>(GetProcAddress(m,"BrzPluginDescarregar"));
        check(load&&unload,"exports ausentes");
        BrzApiTabela t{};t.tamanho=sizeof(t);t.versao=BRZ_API_VERSAO;
        t.Log=Log;t.CaminhoConfig=Caminho;t.AdicionarComandoRcon=Add;t.RemoverComandoRcon=Remove;
        write("{}");load(&t);check(commands.empty(),"config invalido registrou comandos");
        write("{\"mensagem\":\"primeira\"}");load(&t);check(commands.size()==2,"registro incompleto");
        check(run("BrzOla.Ola")=="primeira","mensagem inicial incorreta");
        write("{\"mensagem\":\"segunda\"}");
        check(run("BrzOla.Reload").find("recarregada")!=std::string::npos,"reload valido falhou");
        check(run("BrzOla.Ola")=="segunda","reload nao aplicou");
        write("{invalido");
        check(run("BrzOla.Reload").find("mantida")!=std::string::npos,"reload invalido nao avisou");
        check(run("BrzOla.Ola")=="segunda","reload invalido perdeu config anterior");
        unload();check(commands.empty(),"comandos pendurados");unload();
        FreeLibrary(m);DeleteFileA(config.c_str());
        std::puts("PASSOU: carga, config invalida, resposta, reload, preservacao e remocao de comandos.");
        return 0;
    } catch(const std::exception& e) { std::fprintf(stderr,"FALHOU: %s\n",e.what());return 1; }
}
