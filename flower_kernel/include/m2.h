#pragma once

#include "core.h"

namespace m2
{
	namespace DirectXTK
	{

	}

	FK_API void GetDiskFreeSpaceKB();
	FK_API void GetLocalUserDataRootDirectory();
	FK_API void GetSaveDataRootDirectory();
	FK_API void GetSteamSyncObjectAddress();

	namespace input
	{
		class FK_API AgentInputDevice
		{

		};
		class FK_API ControllerManager
		{

		};

		template <typename T>
		class FK_API ControlMgrAllocator
		{

		};
		class FK_API CursorData
		{

		};
		class FK_API DIJoypadDevice
		{

		};
		class FK_API DIKeyboardDevice
		{

		};
		class FK_API DIMouseDevice
		{

		};
		class FK_API DirectMouseDevice
		{

		};
		class FK_API InputDevice
		{

		};
		class FK_API InputDeviceInfo
		{

		};
		class FK_API KeyBinding
		{

		};
		class FK_API SteamInputDevice
		{

		};
		class FK_API XInputDevice
		{

		};
	}

	FK_API void IsPs2DispMode();

	namespace json
	{
		class FK_API JsonReader
		{

		};
	}

	template<typename T>
	class FK_API LargeBitElement
	{

	};

	template<typename T>
	class FK_API LargeBitValue
	{

	};

	FK_API void M2Context_();
	FK_API void M2Render_();
	FK_API void OutputBMP();

	namespace render
	{
		class FK_API Buffer
		{

		};
		class FK_API CommandList
		{

		};
		class FK_API ComputeShader
		{

		};
		class FK_API Context
		{

		};
		class FK_API Device
		{

		};
		class FK_API FixedResolution
		{

		};
		class FK_API GeometryShader
		{

		};

		FK_API void GetHwnd();

		class FK_API InputLayout
		{

		};
		class FK_API IResource
		{

		};
		class FK_API PixelShader
		{

		};
		class FK_API Query
		{

		};
		class FK_API RenderBase
		{

		};
		class FK_API Sampler
		{

		};
		class FK_API Scaler
		{

		};

		FK_API void SetHwnd();

		class FK_API SwapChain
		{

		};
		class FK_API Texture
		{

		};
		class FK_API Texture2D
		{

		};
		class FK_API VertexShader
		{

		};
	}

	FK_API void ResizeWindow();
	FK_API void SaveTextureToBMP();
	FK_API void ScreenCapture();
	FK_API void SetPs2DispMode();

	namespace sync
	{
		class FK_API BasicLockObject
		{

		};
		class FK_API EventLockObject
		{

		};
		class FK_API LockScope
		{

		};
		class FK_API SpinLockObject
		{

		};
		class FK_API SyncObject
		{

		};
	}

	namespace system
	{
		class FK_API ConfigManager
		{

		};
		class FK_API Render
		{

		};
	}

	FK_API void wcharToChar();
}



