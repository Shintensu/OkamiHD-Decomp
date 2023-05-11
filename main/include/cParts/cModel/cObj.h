#pragma once

#include "../cModel.h"

class MAIN_API cObj : public cModel
{
public:
	virtual ~cObj();

	wk::math::cVec field_38;
	wk::math::cVec field_39;
};