#include "framework.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReason, LPVOID lpReserved)
{
    if (ulReason == DLL_PROCESS_ATTACH)
    {
        LogA("Welcome to Luna!");
        LogA("Owned by @egator6 & @luzzreal");
        LogA("Developers: @nax1800\n");

        MH_Initialize();
        InitGObjects();

        auto& LocalPlayers = Globals::GetWorld()->OwningGameInstance->LocalPlayers;
        LocalPlayers[0]->PlayerController->SwitchLevel(L"Athena_Terrain");
        Globals::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

        Hooks::Net::Init();
        Abilities::Init();
        Hooks::PlayerController::Init();
        Hooks::GameMode::Init();
    }

    return TRUE;
}

