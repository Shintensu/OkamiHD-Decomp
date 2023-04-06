#pragma once

namespace wk
{
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

		extern cHeap* MemDefaultHeapPtr;
		extern cSystemHeap* SystemHeap;

		void hxMemSystemClear();
		void hxMemSystemInitialize();
		void hxMemSystemRelease();
		void MemClearHeap();
		void MemSetDefaultHeap(cHeap* defaultHeap);
	}
}