#pragma once

namespace wk
{
	namespace mem
	{
		enum FK_API eType
		{

		};
		
		enum FK_API M2MemoryProtection
		{
			DefaultHeap = 2
		};

		struct FK_API cAllocHeader
		{
			
		};

		class FK_API cAllocIterator
		{
			virtual void conditionalDestructor();
			virtual void function1() = 0;
			virtual void function2() = 0;
		};

		class FK_API cAllocForwardIterator : cAllocIterator
		{
			void conditionalDestructor();
			void function1();
			void function2();
		};

		class FK_API cAllocReverseIterator : cAllocIterator
		{
			void conditionalDestructor();
			void function1();
			void function2();
		};

		class FK_API cHeapCommon
		{
		private:
			eType heapType;
		public:
			cHeapCommon(eType inputHeapType);

			eType getHeapType() const;
			cHeapCommon& operator=(cHeapCommon&& otherHeap);
			cHeapCommon& operator=(cHeapCommon const& otherHeap);
		};

		class FK_API cHeap : cHeapCommon
		{
			virtual void conditionalDestructor();

		public:
			cHeap();
			cHeap(cHeap const& otherHeap);

			virtual ~cHeap();

			virtual void* alloc(unsigned __int64 param_1, unsigned int param_2);
			virtual void clear();
			void* create(unsigned int param_1, cHeap* param_2, cHeap* param_3);
			void createHeap(unsigned __int64 param_1, cHeap* param_2, M2MemoryProtection param_3);
			virtual void destroy();
			virtual void free(void* param_1);
			static void freeFromHeap(void* param_1);
			void* getHeapAddr() const;
			static cHeap* getHeapPtr(void* param_1);
			bool isValid() const;
			cHeap& operator=(cHeap const& otherHeap);
			void* realloc(void* param_1, unsigned __int64 param_2, unsigned int param_3);
			bool registerClearCallback(void* param_1, void (__cdecl*)(void* param_2));

		protected:
			void addAllocChainFree(cAllocHeader* param_1);
			cAllocHeader* alloc_(cAllocHeader* param_1,unsigned __int64 param_2, unsigned int param_3);
			void callClearCallback();
			bool containsAllocChainFree(cAllocHeader* param_1);
			virtual void free_(void* param_1);
			virtual void postCreate();
			void removeAllocChainFree(cAllocHeader* param_1);

		private:
			void init();
		};

		class FK_API cHeapExpandable : cHeap
		{
			virtual void conditionalDestructor();
		public:
			cHeapExpandable(unsigned int size);
			cHeapExpandable(cHeapExpandable const& otherHeap);

			virtual ~cHeapExpandable();

			virtual void* alloc(unsigned __int64 param_1, unsigned int param_2);
			virtual void clear();
			virtual void destroy();
		};

		class FK_API cHeapExtended : cHeap
		{
			virtual void conditionalDestructor();
		public:
			cHeapExtended(unsigned int size);
			cHeapExtended(cHeapExtended const& otherHeap);

			virtual ~cHeapExtended();

			virtual void* alloc(unsigned __int64 param_1, unsigned int param_2);
			virtual void clear();
			virtual void free(void* param_1);

		protected:
			virtual void postCreate();
			cAllocHeader* reverse_alloc_(cAllocHeader* param_1, unsigned __int64 param_2, unsigned int param_3);
		};

		class FK_API cSystemHeap : cHeap
		{
			virtual void conditionalDestructor();
		};

		class FK_API cDefiniteHeap : cHeapCommon
		{
			virtual void conditionalDestructor();
		public:
			void* alloc();
			cDefiniteHeap();
			cDefiniteHeap(cDefiniteHeap const& otherHeap);

			virtual ~cDefiniteHeap();

			void clear();
			void create(void* param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4);
			void destroy();
			void free(void* param_1);
			void* getHeapAddr();
			static unsigned int getNeedSize(unsigned int param_1, unsigned int param_2,unsigned int param_3);
			void* getNextUsedWork(void* param_1);
			cDefiniteHeap& operator=(cDefiniteHeap const& otherHeap);
		};

		FK_API void* _MemoryAlloc(unsigned __int64 param_1, unsigned param_2, cHeap& param_3);
		FK_API void* _MemoryCalloc(unsigned __int64 param_1, unsigned param_2, cHeap& param_3);
		FK_API void _MemoryFree(void* param_1);
		FK_API void _MemoryFreeHeap(void* param_1, cHeap& param_2);
		FK_API void* _MemoryRealloc(void* param_1, unsigned int param_2, unsigned int param_3, cHeap& param_4);

		FK_API extern cHeap* MemDefaultHeapPtr;
		FK_API extern cSystemHeap SystemHeap;

		FK_API void hxMemSystemClear();
		FK_API void hxMemSystemInitialize(unsigned __int64 param_1);
		FK_API void hxMemSystemRelease();
		FK_API void MemClearHeap(cHeap& param_1);
		FK_API void MemSetDefaultHeap(cHeap& defaultHeap);
	}
}