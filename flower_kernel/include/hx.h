#pragma once

#include "core.h"

namespace hx 
{
	class FK_API b32
	{

	};

	class FK_API Core
	{

	};

	class FK_API File
	{

	};

	class FK_API FileBMP
	{

	};

	class FK_API FileDDS
	{

	};


	class FK_API GXPacket
	{
	public:
		static int const cMiniRenderWidth;
		static int const cMiniRenderHeight;
	private:
		//static unsigned int const wk::OSThreadCloseManager::kRESERVER_THREAD_MAX;
	public:
	};

	FK_API GXPacket* GetGlobalGxPacket();

	FK_API char* GetPathFileRoot();


	template <typename T>
	class FK_API KernelSingletonObject
	{
		virtual void UnknownFunc();
		static T* getSingletonInstance();
	};

	template <typename T>
	class FK_API SingletonObject
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