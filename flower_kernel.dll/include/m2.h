#pragma once

namespace m2
{
	namespace DirectXTK
	{

	}

	void GetDiskFreeSpaceKB();
	void GetLocalUserDataRootDirectory();
	void GetSaveDataRootDirectory();
	void GetSteamSyncObjectAddress();

	namespace input
	{
		class AgentInputDevice
		{

		};
		class ControllerManager
		{

		};

		template <typename T>
		class ControlMgrAllocator
		{

		};
		class CursorData
		{

		};
		class DIJoypadDevice
		{

		};
		class DIKeyboardDevice
		{

		};
		class DIMouseDevice
		{

		};
		class DirectMouseDevice
		{

		};
		class InputDevice
		{

		};
		class InputDeviceInfo
		{

		};
		class KeyBinding
		{

		};
		class SteamInputDevice
		{

		};
		class XInputDevice
		{

		};
	}

	void IsPs2DispMode();

	namespace json
	{
		class JsonReader
		{

		};
	}

	template<typename T>
	class LargeBitElement
	{

	};

	template<typename T>
	class LargeBitValue
	{

	};

	void M2Context_();
	void M2Render_();
	void OutputBMP();

	namespace render
	{
		class Buffer
		{

		};
		class CommandList
		{

		};
		class ComputeShader
		{

		};
		class Context
		{

		};
		class Device
		{

		};
		class FixedResolution
		{

		};
		class GeometryShader
		{

		};
		void GetHwnd();
		class InputLayout
		{

		};
		class IResource
		{

		};
		class PixelShader
		{

		};
		class Query
		{

		};
		class RenderBase
		{

		};
		class Sampler
		{

		};
		class Scaler
		{

		};
		void SetHwnd();
		class SwapChain
		{

		};
		class Texture
		{

		};
		class Texture2D
		{

		};
		class VertexShader
		{

		};
	}

	void ResizeWindow();
	void SaveTextureToBMP();
	void ScreenCapture();
	void SetPs2DispMode();

	namespace sync
	{
		class BasicLockObject
		{

		};
		class EventLockObject
		{

		};
		class LockScope
		{

		};
		class SpinLockObject
		{

		};
		class SyncObject
		{

		};
	}

	namespace system
	{
		class ConfigManager
		{

		};
		class Render
		{

		};
	}

	void wcharToChar();
}



