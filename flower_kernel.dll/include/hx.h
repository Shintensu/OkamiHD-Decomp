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