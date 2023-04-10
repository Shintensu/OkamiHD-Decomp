#pragma once

namespace wk
{
	namespace mem
	{
		enum eType
		{

		};
		
		enum M2MemoryProtection
		{
			DefaultHeap = 2
		};

		struct cAllocHeader
		{

		};

		class cAllocIterator
		{

		};

		class cAllocForwardIterator : cAllocIterator
		{

		};

		class cAllocReverseIterator : cAllocIterator
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

		public:
			cHeap();
			cHeap(cHeap const& otherHeap);

			void addAllocChainFree(cAllocHeader* param_1);
			virtual void* alloc(unsigned __int64 param_1, unsigned int param_2);
			virtual void clear();
			void* create(unsigned int param_1, cHeap* param_2, cHeap* param_3);
			void createHeap(unsigned __int64 param_1, cHeap* param_2, M2MemoryProtection param_3);
			virtual void destroy();
			virtual void free(void* param_1);
			static void freeFromHeap();
			void* getHeapAddr() const;
			static cHeap* getHeapPtr(void* param_1);
			bool isValid() const;
			cHeap& operator=(cHeap const& otherHeap);
			void* realloc(void* param_1, unsigned __int64 param_2, unsigned int param_3);
			bool registerClearCallback(void* param_1, void (__cdecl*)(void* param_2));

		protected:
			cAllocHeader* alloc_(cAllocHeader* param_1,unsigned __int64 param_2, unsigned int param_3);
			void callClearCallback();
			bool containsAllocChainFree(cAllocHeader* param_1);
			virtual void free_(void* param_1);
			virtual void postCreate();
			void removeAllocChainFree(cAllocHeader* param_1);

		private:
			void init();
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

		class cSystemHeap : cHeap
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