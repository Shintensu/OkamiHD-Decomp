#pragma once

#include <cstdint>

#include "../cParts.h"

class MAIN_API cModel : public cParts
{
public:
	virtual ~cModel();

	wk::math::cMatrix matrixArray[48];
	wk::math::cVec field_11;
	wk::math::cVec field_12;

	char field_13[8];

	uintptr_t * renderBufferPointer;

	char field_15[2];
	char field_16[4];
	char field_17[4];
	char field_18[4];
	char field_19[2];

	uintptr_t * meshDataPointer;
	uintptr_t * textureDataPointer;

	char field_20[2];
	char field_21[2];
	char field_22;
	char field_23;
	char field_24[2];
	char field_25[4];
	char field_26[4];

	char field_27;
	char field_28[2];
	char field_29;

	char field_30[4];
	char field_31[4];
	char field_32[4];

	wk::mem::cHeap* heapPointer;

	char field_33[4];
	char field_34[8];
	char field_35[4];

	uintptr_t* field_36[7];
	uintptr_t* pl00Pointer;
	uintptr_t* field_37[5];
};