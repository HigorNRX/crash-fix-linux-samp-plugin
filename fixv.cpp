#define SAMP_SDK_IMPLEMENTATION
#define SAMP_SDK_WANT_AMX_EVENTS
#define SAMP_SDK_WANT_PROCESS_TICK

#include "sdk/samp_sdk.hpp"

using namespace Samp_SDK;

// ============================================================================
// Hook para interceptar GetConsoleVarAsString
// Retorna 0 para bloquear a execução da função nativa
// ============================================================================

cell SAMP_SDK_CDECL Hook_GetConsoleVarAsString(AMX* amx, cell* params)
{
    // Bloqueia a execução retornando 0
    Log("[SA-MP SDK Plugin] GetConsoleVarAsString foi bloqueado!");
    return 0;
}

// Registra o hook automáticamente
PLUGIN_NATIVE_HOOK_REGISTRATION(GetConsoleVarAsString)

// ============================================================================
// Funções de callback do plugin (implementadas conforme SDK espera)
// ============================================================================

bool OnLoad()
{
    Log("[SA-MP SDK Plugin] Plugin carregado com sucesso!");
    Log("[SA-MP SDK Plugin] GetConsoleVarAsString foi intercetado e bloqueado!");
    return true;
}

void OnUnload()
{
    Log("[SA-MP SDK Plugin] Plugin descarregado!");
}

unsigned int GetSupportFlags()
{
    return SUPPORTS_VERSION;
}

void OnAmxLoad(AMX* amx)
{
    // Chamado quando um script é carregado
}

void OnAmxUnload(AMX* amx)
{
    // Chamado quando um script é descarregado
}

void OnProcessTick()
{
    // Chamado a cada frame do servidor
}
