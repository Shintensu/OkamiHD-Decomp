#pragma once

#include "cParts/cModel/cModel.h"

class cObj : public cModel
{
public:
	virtual ~cObj();

	wk::math::cVec field_38;
	wk::math::cVec field_39;
};