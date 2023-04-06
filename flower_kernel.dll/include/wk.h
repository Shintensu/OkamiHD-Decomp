#pragma once

#include <minwinbase.h>

#include "hx.h"

#include "wk/wkMath.h"
#include "wk/wkMem.h"

namespace wk
{
	struct OSTick
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

	struct OSThread
	{
		OSThread* operator=(OSThread const& otherThread);
		OSThread* operator=(OSThread& otherThread);
	};

	struct OSThreadLink
	{
		OSThreadLink* operator=(OSThreadLink const& param_1);
		OSThreadLink* operator=(OSThreadLink& param_1);
	};

	class OSThreadCloseManager : hx::SingletonObject<OSThreadCloseManager>
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

	class cSystemEvent : hx::KernelSingletonObject<cSystemEvent>
	{
		cSystemEvent(cSystemEvent const& otherSystemEvent);
		cSystemEvent();
		~cSystemEvent();

		cSystemEvent* operator=(cSystemEvent const& otherSystemEvent);
		void remove(int param_1);
		void update();
	};
	
	OSTick OSDiffTick(OSTick param_1, OSTick param_2);
	OSTick OSFPSToTicks(int param_1);
	OSTick OSGetTick();
	unsigned __int64 OSGetTime();
	unsigned __int64 OSGetTimeRTC();
	void OSGetTimeRTCToDate(unsigned __int64 param_1, _FILETIME* param_2);
	int OSGetTimeUTCString(unsigned __int64 param_1, char* param_2, unsigned __int64 param_3);
	void OSInitTime();
	OSTick OSMicrosecondsToTicks(int param_1);
	OSTick OSMillisecondsToTicks(int param_1);
	OSTick OSSecondsToTicks(int param_1);
	void OSTermTime();
	int OSTicksToMicroseconds(OSTick param_1);
	unsigned __int64 OSTicksToMicroseconds64(OSTick param_1);
	int OSTicksToSeconds(OSTick param_1);
	void OSTime_Test();
	unsigned __int64 OSTimeToMicroseconds64(unsigned __int64 param_1);
	OSTick OSTimeToTick(unsigned __int64 param_1);
}