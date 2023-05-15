#include <Windows.h>
#include "../PvZLib/pvz.hpp"
#include <thread>

// Zombie *this, int32 damage, int32 damage_flags
void ZombieTakeDamage(pvz::Event* evt) {
    auto zombie = (pvz::Zombie*)evt->mParams[0];
    zombie->mHelmHealth = 0;
    zombie->mShieldHealth = 0;
    zombie->mBodyHealth = 0;
}

int WINAPI mainThread(HMODULE hMod) {
    auto eatZombie = pvz::Event();
    eatZombie.InjectEventHandler(pvz::EventType::kZombie_TakeDamage, ZombieTakeDamage, nullptr);
    while (!GetAsyncKeyState(VK_END)) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    MessageBox(0, L"DLL Unloaded", L"PvZLib", MB_OK);
    //TODO: EJECT event
    FreeLibraryAndExitThread(hMod, 0);
    return 0;
}

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpvReserved)  // reserved
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)mainThread, hinstDLL, 0, 0);
        break;

    case DLL_THREAD_ATTACH:
        break;

    case DLL_THREAD_DETACH:
        break;

    case DLL_PROCESS_DETACH:

        if (lpvReserved != nullptr)
        {
            break; // do not do cleanup if process termination scenario
        }

        break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}