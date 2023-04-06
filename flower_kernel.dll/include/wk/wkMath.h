#pragma once

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

			cVec();
			cVec();
			cVec();
			cVec();
			cVec();

			void Add();
			void AddXYZ();
			void Cross();
			void crossProduct();
			void Divide();
			void DivideXYZ();
			void Dot();
			void dotProduct();
			void DotSame();
			void Ftol();
			void GetDistance();
			void GetDistanceXZ();
			void GetIdentity();
			void GetLength();
			void GetLengthXZ();
			void GetSquareDistance();
			void GetSquareDistanceXZ();
			void GetSquareLength();
			void GetSquareLengthXZ();
			void Identity();
			void ItoF();
			void magnitude();
			void Multiply();
			void MultiplyXYZ();
			void normalize();
			void Normalize();
			void Normalize4();
			void Normalize4();
			void operator!=();
			void operator*();
			void operator*();
			void operator*=();
			void operator*=();
			void operator*=();
			void operator+();
			void operator+=();
			void operator+=();
			void operator-();
			void operator-=();
			void operator-=();
			void operator/();
			void operator/=();
			void operator=();
			void operator=();
			void operator==();
			void operator_float_(&__ptr64)[4]();
			void Scale();
			void ScaleXYZ();
			void SetLength();
			void setXY();
			void setXYZ();
			void setXYZW();
			void sqaureMag();
			void Substract();
			void SubstractXYZ();
			void subXZ();

		};

		static struct sVec
		{
			float x, y, z, w;

			sVec(float inputX, float inputY, float inputZ, float inputW)
				: x(inputX), y(inputY), z(inputZ), w(inputW)
			{

			}
		};

		class cMatrix
		{
		public:
			cVec a;
			cVec b;
			cVec c;
			cVec d;

			void Apply();
			void Apply3();
			void Apply3Array();
			void ApplyArray();
			void ApplyRot();
			void ApplyRotArray();
			void Copy();
			void Identity();
			void Inverse();
			void InverseFast();
			void LookAt();
			void MakeRotateX();
			void MakeRotateY();
			void MakeRotateZ();
			void MakeScaling();
			void MakeTrans();
			void Multiply();
			void operator=();
			void operator=();
			void Projection();
			void RotateX();
			void RotateXr();
			void RotateXYZ();
			void RotateY();
			void RotateYr();
			void RotateZ();
			void RotateZr();
			void SetTrans();
			void Transpose();
		};


	}
}