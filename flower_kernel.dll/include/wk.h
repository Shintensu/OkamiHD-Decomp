#pragma once

#include "hx.h"

namespace wk
{
	namespace math
	{
		static struct sVec
		{
			float x, y, z, w;

			sVec(float inputX, float inputY, float inputZ, float inputW)
				: x(inputX), y(inputY), z(inputZ), w(inputW)
			{

			}
		};

		class cVec
		{
		public:
			sVec identity;

			cVec(float inputX, float inputY, float inputZ, float inputW)
				: identity(inputX, inputY, inputZ, inputW)
			{

			}

			//cVec();
			//cVec();
			//cVec();
			//cVec();
			//cVec();

			//void Add();
			//void AddXYZ();
			//void Cross();
			//void crossProduct();
			//void Divide();
			//void DivideXYZ();
			//void Dot();
			//void dotProduct();
			//void DotSame();
			//void Ftol();
			//void GetDistance();
			//void GetDistanceXZ();
			//void GetIdentity();
			//void GetLength();
			//void GetLengthXZ();
			//void GetSquareDistance();
			//void GetSquareDistanceXZ();
			//void GetSquareLength();
			//void GetSquareLengthXZ();
			//void Identity();
			//void ItoF();
			//void magnitude();
			//void Multiply();
			//void MultiplyXYZ();
			//void normalize();
			//void Normalize();
			//void Normalize4();
			//void Normalize4();
			//void operator!=();
			//void operator*();
			//void operator*();
			//void operator*=();
			//void operator*=();
			//void operator*=();
			//void operator+();
			//void operator+=();
			//void operator+=();
			//void operator-();
			//void operator-=();
			//void operator-=();
			//void operator/();
			//void operator/=();
			//void operator=();
			//void operator=();
			//void operator==();
			//void operator_float_(&__ptr64)[4]();
			//void Scale();
			//void ScaleXYZ();
			//void SetLength();
			//void setXY();
			//void setXYZ();
			//void setXYZW();
			//void sqaureMag();
			//void Substract();
			//void SubstractXYZ();
			//void subXZ();

		};

		class cMatrix
		{
		public:
			cVec a;
			cVec b;
			cVec c;
			cVec d;

			//void Apply();
			//void Apply3();
			//void Apply3Array();
			//void ApplyArray();
			//void ApplyRot();
			//void ApplyRotArray();
			//void Copy();
			//void Identity()
			//void Inverse();
			//void InverseFast();
			//void LookAt();
			//void MakeRotateX();
			//void MakeRotateY();
			//void MakeRotateZ();
			//void MakeScaling();
			//void MakeTrans();
			//void Multiply();
			//void operator=();
			//void operator=();
			//void Projection();
			//void RotateX();
			//void RotateXr();
			//void RotateXYZ();
			//void RotateY();
			//void RotateYr();
			//void RotateZ();
			//void RotateZr();
			//void SetTrans();
			//void Transpose();
		};


	}

	namespace mem
	{
		class cAllocIterator
		{

		};

		class cAllocForwardIterator : cAllocIterator
		{

		};

		class cAllocReverseIterator : cAllocIterator
		{

		};

		enum eType
		{

		};

		class cHeapCommon
		{
			eType heapType;

			cHeapCommon(eType inputHeapType);

			eType getHeapType();
			cHeapCommon* operator=(cHeapCommon* otherHeap);
			cHeapCommon* operator=(const cHeapCommon* otherHeap);
		};

		class cHeap : cHeapCommon
		{
			virtual void conditionalDestructor();
			virtual void clear();
			virtual void destroy();
			virtual void alloc();
			virtual void free();
			virtual void postCreate();
			virtual void free_();

			void addAllocChainFree();
			void alloc();
			void alloc_();
			void callClearCallback();
			cHeap();
			cHeap(cHeap* otherHeap);
			void clear();
			void containsAllocChainFree();
			void create();
			void createHeap();
			void destroy();
			void free();
			void free_();
			void freeFromHeap();
			void getHeapAddr();
			void getHeapPtr();
			void init();
			void isValid();
			void operator=(cHeap* otherHeap);
			void postCreate();
			void realloc();
			void registerClearCallback();
			void removeAllocChainFree();
		};

		class cHeapExpandable : cHeap
		{
			virtual void conditionalDestructor();
			virtual void clear();
			virtual void destroy();
			virtual void alloc();
			virtual void free();
			virtual void postCreate();
			virtual void free_();

			void alloc();
			cHeapExpandable(unsigned int size);
			cHeapExpandable(cHeapExpandable* otherHeap);
			void clear();
			void destroy();

		};

		class cHeapExtended : cHeap
		{
			virtual void conditionalDestructor();
			virtual void clear();
			virtual void destroy();
			virtual void alloc();
			virtual void free();
			virtual void postCreate();
			virtual void free_();

			void alloc();
			cHeapExtended(unsigned int size);
			cHeapExtended(cHeapExtended* otherHeap);
			void clear();
			void free();
			void postCreate();
			void reverse_alloc_();
		};

		class cSystemHeap : cHeapCommon
		{
			virtual void conditionalDestructor();
			virtual void clear();
			virtual void destroy();
			virtual void alloc();
			virtual void free();
			virtual void postCreate();
			virtual void free_();
		};

		class cDefiniteHeap : cHeapCommon
		{
			virtual void conditionalDestructor();

			void alloc();
			cDefiniteHeap(unsigned int size);
			cDefiniteHeap(cDefiniteHeap* otherHeap);
			void clear();
			void create();
			void destroy();
			void free();
			void getHeapAddr();
			void getNeedSize();
			void getNextUsedWork();
			void operator=(cDefiniteHeap* otherHeap);
		};
		
		void _MemoryAlloc();
		void _MemoryCalloc();
		void _MemoryFree();
		void _MemoryFreeHeap();
		void _MemoryRealloc();

		cHeap* MemDefaultHeapPtr;
		cSystemHeap* SystemHeap;

		void hxMemSystemClear();
		void hxMemSystemInitialize();
		void hxMemSystemRelease();
		void MemClearHeap();
		void MemSetDefaultHeap(cHeap* defaultHeap);
	}

	class cSystemEvent : hx::KernelSingletonObject<cSystemEvent>
	{

	};

	class OSThread
	{

	};

	class OSThreadCloseManager : hx::SingletonObject<OSThreadCloseManager>
	{
		static unsigned int kRESERVER_THREAD_MAX;
	};

	class ThreadLink
	{

	};

	class OSTick
	{

	};

	void OSDiffTick();
	void OSFPSToTicks();
	void OSGetTick();
	void OSGetTime();
	void OSGetTimeRTC();
	void OSGetTimeRTCToDate();
	void OSGetTimeUTCString();
	void OSInitTime();
	void OSMicrosecondsToTicks();
	void OSMillisecondsToTicks();
	void OSSecondsToTicks();
	void OSTermTime();
	void OSTicksToMicroseconds();
	void OSTicksToMicroseconds64();
	void OSTicksToSeconds();
	void OSTime_Test();
	void OSTimeToMicroseconds64();
	void OSTimeToTick();
}