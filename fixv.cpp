/*___________________________________________________
|$$$$$$\   $$$$$$\  $$\       $$$$$$\       __///__ |\    
|$$  __$$\ $$  __$$\ $$ |     $$  __$$\     / 0_0 \ | \                                                                                         
|$$/   \__|$$ /  $$ |$$ |     $$ /  $$ |    \  V  / |  |   
|$$|  --. _.uS$$$$Sp, $ |     $$ |  $$ | ((_/     \ |  |              
|$$| ´_,d´   ?$$$$$$Si. |     $$ |  $$ |  \ <     V)|  |
|\$  d$$°"?$$$7°°4$$$SIi $$$$\ $$$$$$ /    \______/ |  |
 \_  `$L\ ,$$`    $$?SII: ____|\______/_______|_|___|  |
,.d$/  ?$$s$$k_  j$´iISSI `-:                 " "    \ |
?$$$$L/´?$$SS$$$$?:iISSIi ^  ._                       \|   
 `4$$$k,/´ `?$$7:iIISSI:    ^       Contatos:
  `?$$k_d? '$iiLLSI?;:'   ^  ^ :.      Discord: galodebota
__//\\//\///\\//////\\/\________ .. _  github: https://github.com/Higornrx 
                                 \_  ':           _... 
Autor Original: HigorNrx - Galo   \  :.       .::´
by Galo HigorNRX 16/02/2026       / ; `;\    :::: 
                                  \  ;  \    ::::`-:._ 
                                   `-:._`-:._ :::`-:._-
                                       --___-_--_-\_-´  */



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
    Log("[VenixHostingFix] GetConsoleVarAsString foi bloqueado!");
    return 0;
}

// Registra o hook automáticamente
PLUGIN_NATIVE_HOOK_REGISTRATION(GetConsoleVarAsString)

// ============================================================================
// Hook para interceptar GetConsoleVarAsInt
// Retorna 0 para bloquear a execução da função nativa
// ============================================================================

cell SAMP_SDK_CDECL Hook_GetConsoleVarAsInt(AMX* amx, cell* params)
{
    // Bloqueia a execução retornando 0
    Log("[VenixHostingFix] GetConsoleVarAsInt foi bloqueado!");
    return 0;
}

// Registra o hook automáticamente
PLUGIN_NATIVE_HOOK_REGISTRATION(GetConsoleVarAsInt)

// ============================================================================
// Hook para interceptar GetConsoleVarAsBool
// Retorna 0 para bloquear a execução da função nativa
// ============================================================================

cell SAMP_SDK_CDECL Hook_GetConsoleVarAsBool(AMX* amx, cell* params)
{
    // Bloqueia a execução retornando 0
    Log("[VenixHostingFix] GetConsoleVarAsBool foi bloqueado!");
    return 0;
}

// Registra o hook automáticamente
PLUGIN_NATIVE_HOOK_REGISTRATION(GetConsoleVarAsBool)

// ============================================================================
// Hook para interceptar GetConsoleVarAsFloat
// Retorna 0 para bloquear a execução da função nativa
// ============================================================================

cell SAMP_SDK_CDECL Hook_GetConsoleVarAsFloat(AMX* amx, cell* params)
{
    // Bloqueia a execução retornando 0
    Log("[VenixHostingFix] GetConsoleVarAsFloat foi bloqueado!");
    return 0;
}

// Registra o hook automáticamente
PLUGIN_NATIVE_HOOK_REGISTRATION(GetConsoleVarAsFloat)

// ============================================================================
// Funções de callback do plugin (implementadas conforme SDK espera)
// ============================================================================


bool OnLoad()
{
    Log("[VenixHostingFix] Plugin carregado com sucesso!");
    Log("[VenixHostingFix] GetConsoleVarAsString foi intercetado e bloqueado!");
    Log("[VenixHostingFix] GetConsoleVarAsInt foi intercetado e bloqueado!");
    Log("[VenixHostingFix] GetConsoleVarAsBool foi intercetado e bloqueado!");
    Log("[VenixHostingFix] GetConsoleVarAsFloat foi intercetado e bloqueado!");
    return true;
}

void OnUnload()
{
    Log("[VenixHostingFix] Plugin descarregado!");
}

unsigned int GetSupportFlags()
{
    return SUPPORTS_VERSION;
}

void OnAmxLoad(AMX* amx)
{
    
}

void OnAmxUnload(AMX* amx)
{
    
}

void OnProcessTick()
{
    
}
