#include "windows.h"

BOOL dllmain_raw(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);

BOOL dllmain_crt_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);

BOOL initHeaps(HINSTANCE hinstDLL, DWORD fdwReason);

BOOL DAT_1801273e4;

BOOL __cdecl DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)

{
    BOOL attachSuccess;

    if ((fdwReason == 0) && (DAT_1801273e4 < 1)) {
        attachSuccess = 0;
    }
    else if ((1 < fdwReason - 1) ||
        ((attachSuccess = dllmain_raw(hinstDLL, fdwReason, lpvReserved), attachSuccess != 0 &&
            (attachSuccess = dllmain_crt_dispatch(hinstDLL, fdwReason, lpvReserved), attachSuccess != 0
                )))) {
        attachSuccess = initHeaps(hinstDLL, fdwReason);
        if ((fdwReason == 1) && (attachSuccess == 0)) {
            initHeaps(hinstDLL, 0);
            dllmain_crt_dispatch(hinstDLL, 0, lpvReserved);
            dllmain_raw(hinstDLL, 0, lpvReserved);
        }
        if (((fdwReason == 0) || (fdwReason == 3)) &&
            (attachSuccess = dllmain_crt_dispatch(hinstDLL, fdwReason, lpvReserved), attachSuccess != 0)) {
            attachSuccess = dllmain_raw(hinstDLL, fdwReason, lpvReserved);
        }
    }
    return attachSuccess;
}

BOOL dllmain_raw(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    return true;
}

BOOL dllmain_crt_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    // Dummy
    return true;
}

BOOL initHeaps(HINSTANCE hinstDLL, DWORD fdwReason)
{
    return true;
}