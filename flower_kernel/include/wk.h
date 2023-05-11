#pragma once

#include "core.h"

#include <Windows.h>
#include <minwinbase.h>

#include "hx.h"

#include "wk/wkMath.h"
#include "wk/wkMem.h"

namespace wk
{
	struct FK_API OSTick
	{
		OSTick operator-(unsigned __int64 const& param_1);
		OSTick operator-(unsigned __int64& param_1);
		OSTick operator-(int const& param_1);
		OSTick operator-(unsigned int const& param_1);
		OSTick* operator=(OSTick&& param_1);
		OSTick* operator=(union _LARGE_INTEGER const& param_1);
		OSTick* operator=(OSTick const& param_1);
		OSTick* operator=(unsigned __int64 const & param_1);
	};

	struct FK_API OSThread
	{
		OSThread* operator=(OSThread const& otherThread);
		OSThread* operator=(OSThread& otherThread);
	};

	struct FK_API OSThreadLink
	{
		OSThreadLink* operator=(OSThreadLink const& param_1);
		OSThreadLink* operator=(OSThreadLink& param_1);
	};

	class FK_API OSThreadCloseManager : hx::SingletonObject<OSThreadCloseManager>
	{
		static unsigned int kRESERVER_THREAD_MAX;

		OSThreadCloseManager();
		OSThreadCloseManager(OSThreadCloseManager const& param_1);
		virtual ~OSThreadCloseManager();

		void AddCloseThread(void* param_1);
		void AllClose();
		void Move();
		OSThreadCloseManager* operator=(OSThreadCloseManager* param_1);
	};

	class FK_API cSystemEvent : hx::KernelSingletonObject<cSystemEvent>
	{
		cSystemEvent(cSystemEvent const& otherSystemEvent);
		cSystemEvent();
		~cSystemEvent();

		cSystemEvent* operator=(cSystemEvent const& otherSystemEvent);
		void remove(int param_1);
		void update();
	};
	
	FK_API OSTick OSDiffTick(OSTick param_1, OSTick param_2);
	FK_API OSTick OSFPSToTicks(int param_1);
	FK_API OSTick OSGetTick();
	FK_API unsigned __int64 OSGetTime();
	FK_API unsigned __int64 OSGetTimeRTC();
	FK_API void OSGetTimeRTCToDate(unsigned __int64 param_1, _FILETIME* param_2);
	FK_API int OSGetTimeUTCString(unsigned __int64 param_1, char* param_2, unsigned __int64 param_3);
	FK_API void OSInitTime();
	FK_API OSTick OSMicrosecondsToTicks(int param_1);
	FK_API OSTick OSMillisecondsToTicks(int param_1);
	FK_API OSTick OSSecondsToTicks(int param_1);
	FK_API void OSTermTime();
	FK_API int OSTicksToMicroseconds(OSTick param_1);
	FK_API unsigned __int64 OSTicksToMicroseconds64(OSTick param_1);
	FK_API int OSTicksToSeconds(OSTick param_1);
	FK_API void OSTime_Test();
	FK_API unsigned __int64 OSTimeToMicroseconds64(unsigned __int64 param_1);
	FK_API OSTick OSTimeToTick(unsigned __int64 param_1);
}