#pragma once

#include "wk.h"

namespace hx 
{
	class b32
	{

	};

	class Core
	{

	};

	class File
	{

	};

	class FileBMP
	{

	};

	class FileDDS
	{

	};


	//class GXPacket
	//{
	//public:
	//	static int const cMiniRenderWidth;
	//	static int const cMiniRenderHeight;
	//private:
	//	static unsigned int const wk::OSThreadCloseManager::kRESERVER_THREAD_MAX;
	//public:
	//};

	// GXPacket* GetGlobalGxPacket();

	char* GetPathFileRoot();


	template <typename T>
	class KernelSingletonObject
	{
		virtual void UnknownFunc();
		static T* getSingletonInstance();
	};

	template <typename T>
	class SingletonObject
	{
		virtual void UnknownFunc();
		static T* getSingletonInstance();
	};

	namespace endian
	{

	}

	namespace math
	{

	}

	namespace render
	{

	}

	namespace storage
	{

	}

	namespace sync
	{

	}
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