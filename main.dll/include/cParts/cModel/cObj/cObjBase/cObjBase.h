#pragma once

#include "cParts/cModel/cObj/cObj.h"

class cObjBase : public cObj
{
public:
	virtual ~cObjBase();

	char field_40[4];
	unsigned int movementStage;
	char field_41[4];
	short timer;
	short field_42;
	char field_43[4];
	unsigned int field_44;
	wk::math::cVec field_45;
	char field_4a[8];
	uintptr_t * field_46;
	char field_47[4];
	unsigned int objectID;
	char field_48[4];
	unsigned int field_49;
	char field_50[8];
	uintptr_t* datFilePointer;
	unsigned int field_51;
	char field_52[4];
	char field_53[8];
	char field_54[8];

	wk::math::cVec field_55;
	wk::math::cVec field_56;
	wk::math::cVec field_57;
	wk::math::cVec field_58;
	wk::math::cVec field_59;
	wk::math::cVec field_60;
	wk::math::cVec field_61;
	wk::math::cVec field_62;
	wk::math::cVec field_63;

	char field_64[8];
	uintptr_t* mtb3CamPointer;
	char field_65[8];
	wk::math::cVec field_66;
	uintptr_t* bonePointer;

	char field_67[8];
	char field_68[8];
	char field_69[8];
	char field_70[8];

	wk::math::cVec field_71;
	char field_72[8];
	uintptr_t* anotherHeapPointer;
	wk::math::cMatrix field_73;
	wk::math::cVec field_74;
	char field_75[8];
	float field_76;
	char field_77[4];
	char field_78[8];
	char field_79[8];
	char field_80[4];
	unsigned int field_81;
	unsigned int field_82;
	char field_83[4];
	unsigned int field_84;
	float field_85;
	char field_86[8];
	wk::math::cVec field_87;
	char field_88[8];
	char field_89[8];
	wk::math::cVec field_90;
	char field_91[8];
	char field_92[8];
};