#pragma once

#include "wk.h"

class cParts
{
public:
	virtual ~cParts();

	char field_1[8];

	wk::math::cMatrix originMatrix;
	wk::math::cMatrix coordinateMatrix;

	wk::math::cVec field_2;

	wk::math::cVec* originPointer = &originMatrix.d;
	wk::math::cVec* coordinatePointer = &coordinateMatrix.d;

	wk::math::cVec rotation;
	wk::math::cVec field_3;
	wk::math::cVec field_4;

	char field_5[8];
	cParts* field_6;

	char field_7[8]; // SubMesh count?
	cParts* field_8;

	wk::math::cVec field_9;
	wk::math::cVec field_10;
};