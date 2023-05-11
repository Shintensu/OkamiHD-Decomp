#include "windows.h"
#include "hx.h"
#include "m2.h"
#include "wk.h"


HINSTANCE g_DllHandle;

wk::mem::cHeap defaultHeap;

BOOL __cdecl DllMain(HINSTANCE hinstDLL, DWORD fdwReason)
{
    if (fdwReason == DLL_PROCESS_DETACH)
    {
        ControllerManagerDestructor();
    }
    else if (fdwReason == DLL_PROCESS_ATTACH)
    {
        g_DllHandle = hinstDLL;
        ControllerManagerContructor(1, ".");
        return 1;
    }
    return 1;
}

void thunk_FUN_180044f80()
{
//    undefined4 uVar1;
//    int iVar2;
//    longlong lVar3;
//    char* _Str1;
//    int iVar4;
//    char** ppcVar5;
//    undefined auStack_78[32];
//    char* local_58;
//    undefined4 local_50[2];
//    char* local_48;
//    undefined4 local_40;
//    char* local_38;
//    undefined4 local_30;
//    char* local_28;
//    undefined4 local_20;
//    ulonglong local_18;
//
//    local_18 = DAT_18011e820 ^ (ulonglong)auStack_78;
//    _DAT_180126c98 = 0;
//    iVar4 = 0;
//    _DAT_180126ca0 = 0;
//    local_58 = "japanese";
//    local_50[0] = 0;
//    local_48 = "english";
//    local_40 = 1;
//    local_38 = "french";
//    local_30 = 2;
//    local_28 = "german";
//    local_20 = 4;
//    lVar3 = SteamInternal_ContextInit(&PTR_LAB_18011b000);
//    _Str1 = (char*)(**(code**)(**(longlong**)(lVar3 + 0x30) + 0x20))();
//    lVar3 = 0;
//    ppcVar5 = &local_58;
//    do {
//        iVar2 = _stricmp(_Str1, *ppcVar5);
//        if (iVar2 == 0) {
//            uVar1 = local_50[(longlong)iVar4 * 4];
//            goto LAB_18004505b;
//        }
//        iVar4 = iVar4 + 1;
//        lVar3 = lVar3 + 1;
//        ppcVar5 = ppcVar5 + 2;
//    } while (lVar3 < 4);
//    uVar1 = 1;
//LAB_18004505b:
//    _DAT_180126ca0 = CONCAT44(1, uVar1);
//    __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
//    return;
}

void OSInitialize()
{
    wk::OSInitTime();
    thunk_FUN_180044f80();
    hx::KernelSingletonObject<wk::cSystemEvent>::getSingletonInstance();
    return;
}

void ControllerManagerContructor(long long param_1, const char* param_2)
{
    m2::system::ConfigManager* configManagerSingleton;
    m2::input::ControllerManager* controllerManagerSingleton;

    defaultHeap.createHeap(0x4000000, nullptr, wk::mem::DefaultHeap);
    wk::mem::MemDefaultHeapPtr = &defaultHeap;
    if ((param_1 != 0) && (param_2 != 0x0)) 
    {
        hx::File::setPathRoot(param_2);
    }
    OSInitialize();
    configManagerSingleton = hx::KernelSingletonObject<m2::system::ConfigManager>::getSingletonInstance();
    m2::system::ConfigManager::Initialize(configManagerSingleton);
    controllerManagerSingleton = hx::KernelSingletonObject<m2::input::ControllerManager>::getSingletonInstance();
    m2::input::ControllerManager::Initialize(controllerManagerSingleton);
    return;
}

void OSFinalize()
{
    wk::OSTermTime();
}

void ControllerManagerDestructor()
{
    m2::input::ControllerManager* this;

    this = hx::KernelSingletonObject<m2::input::ControllerManager>::getSingletonInstance();
    m2::input::ControllerManager::Finalize(this);
    OSFinalize();
    wk::mem::cHeap::destroy(&DefaultHeap);
    return;
}


void _Init_thread_header(int* param_1);

void LAB_180001997(void)

{
	__instance = hx::KernelSingletonObject<class_wk::cSystemEvent>::vftable;
	return;
}

wk::cSystemEvent* __cdecl hx::KernelSingletonObject<wk::cSystemEvent>::getSingletonInstance(void)
{
	/* 0x2207 1043 ?getSingletonInstance@?$KernelSingletonObject@VcSystemEvent@wk@@@hx@@SAPEAVcS ystemEvent@wk@@XZ */

	if (*(int*)(*(longlong*)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +	0x104) < public static wk::cSystemEvent* cdecl_hx::KernelSingletonObject<wk::cSystemEvent>::getSingletonInstance(void)::2::thread_safe_static_guard{0})
	{
		_Init_thread_header(&public static wk::cSystemEvent* hx::KernelSingletonObject<wk::cSystemEvent>::getSingletonInstance(void)::2::thread_safe_static_guard{0});
		if (public static wk::cSystemEvent* hx::KernelSingletonObject<wk::cSystemEvent>::getSingletonInstance(void)::2::thread_safe_static_guard{0} == -1) 
		{
			_DAT_180126c50 = 0;
			__instance = wk::cSystemEvent::vftable;
			atexit(&LAB_180001997);
			_Init_thread_footer(&`public:_static_class_wk::cSystemEvent* ___ptr64___cdecl_hx::KernelSinglet onObject<class_wk::cSystemEvent>::getSingletonInstance(void)::2::thread_safe_static_guard{0});
		}
	}
	return &public static wk::cSystemEvent* cdecl_hx::KernelSingletonObject<class_wk::cSystemEvent>::getSingletonInstance(void)::2::_instance;
}