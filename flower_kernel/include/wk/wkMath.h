#pragma once

namespace wk
{
	namespace math
	{
		class FK_API cVec;
		class FK_API cMatrix;

		struct FK_API sVec
		{
			float x, y, z, w;
		};

		class FK_API cVec
		{
		public:
			static sVec identity;
			sVec vector;
		public:
			static void Add(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static void AddXYZ(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static void Substract(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static void SubstractXYZ(cVec& param_1, cVec const& param_2, cVec const& param_3);

			static void Multiply(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static void MultiplyXYZ(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static void Divide(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static void DivideXYZ(cVec& param_1, cVec const& param_2, cVec const& param_3);

			static void Cross(cVec& param_1, cVec const& param_2, cVec const& param_3);
			static cVec crossProduct(cVec const& param_1, cVec const& param_2);
			static float Dot(cVec const& param_1, cVec const& param_2);
			static float dotProduct(cVec const& param_1, cVec const& param_2);
			static float DotSame(cVec const& param_1);

			static void FtoI(cVec& param_1, cVec const& param_2);
			static void ItoF(cVec& param_1, cVec const& param_2);

			static sVec const* GetIdentity();
			static void Identity(cVec& param_1);

			static float GetDistance(cVec const& param_1, cVec const& param_2);
			static float GetDistanceXZ(cVec const& param_1, cVec const& param_2);
			static float GetLength(cVec const& param_1);
			static float GetLengthXZ(cVec const& param_1);
			static float GetSquareDistance(cVec const& param_1, cVec const& param_2);
			static float GetSquareDistanceXZ(cVec const& param_1, cVec const& param_2);
			static float GetSquareLength(cVec const& param_1);
			static float GetSquareLengthXZ(cVec const& param_1);

			static void Normalize(cVec& param_1, cVec const& param_2);
			static void Normalize4(cVec& param_1, cVec const& param_2);

			static void Scale(cVec& param_1, cVec const& param_2, float param_3);
			static void ScaleXYZ(cVec& param_1, cVec const& param_2, float param_3);

			static void SetLength(cVec& param_1, cVec const& param_2, float param_3);


			float magnitude() const;
			cVec normalize() const;

			void setXY(float param_1, float param_2);
			void setXYZ(float param_1, float param_2, float param_3);
			void setXYZW(float param_1, float param_2, float param_3, float param_4);

			float sqaureMag() const;

			cVec subXZ(cVec const& param_1);

			cVec(cVec const& param_1);
			cVec(float const* param_1);
			cVec(float param_1, float param_2, float param_3, float param_4);
			cVec();
			cVec(union __m128 const& param_1);
			cVec(sVec const& param_1);

			cVec operator+(cVec const& param_1) const;
			cVec operator-(cVec const& param_1) const;
			cVec operator*(cMatrix const& param_1) const;
			cVec operator*(float param_1) const;
			cVec operator/(float param_1) const;

			cVec& operator*=(float param_1);
			cVec& operator*=(cVec const& param_1);
			cVec& operator*=(cMatrix const& param_1);
			cVec& operator+=(float param_1);
			cVec& operator+=(cVec const& param_1);
			cVec& operator-=(cVec const& param_1);
			cVec& operator-=(float param_1);
			cVec& operator/=(float param_1);

			cVec& operator=(cVec const& param_1);
			cVec& operator=(sVec const& param_1);

			bool operator!=(cVec const& param_1) const;
			bool operator==(cVec const& param_1) const;

			operator float(); ///???
		};

		class FK_API cMatrix
		{
		public:
			cVec a;
			cVec b;
			cVec c;
			cVec d;

			static void Apply(cVec& param_1, cMatrix const& param_2, cVec const& param_3);
			static void ApplyArray(cVec* param_1, cMatrix const& param_2, cVec const* param_3, unsigned int param_4);

			static void Apply3(cVec& param_1, cMatrix const& param_2, cVec const& param_3);
			static void Apply3Array(cVec* param_1, cMatrix const& param_2, cVec const* param_3, unsigned int param_4);

			static void ApplyRot(cVec& param_1, cMatrix const& param_2, cVec const& param_3);
			static void ApplyRotArray(cVec* param_1, cMatrix const& param_2, cVec const* param_3, unsigned int param_4);

			static void Copy(cMatrix& param_1, cMatrix const& param_2);
			static void Identity(cMatrix& param_1);

			static void Inverse(cMatrix& param_1, cMatrix const& param_2);
			static void InverseFast(cMatrix& param_1, cMatrix const& param_2);

			static void LookAt(cMatrix& param_1, cVec const& param_2, cVec const& param_3, cVec const& param_4);

			static void MakeRotateX(cMatrix& param_1, float param_2);
			static void MakeRotateY(cMatrix& param_1, float param_2);
			static void MakeRotateZ(cMatrix& param_1, float param_2);
			static void MakeScaling(cMatrix& param_1, cVec const& param_2);
			static void MakeTrans(cMatrix& param_1, cVec const& param_2);

			static void Multiply(cMatrix& param_1, cMatrix const& param_2, cMatrix const& param_3);

			static void Projection(cMatrix& param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10);

			static void RotateX(cMatrix& param_1, cMatrix const& param_2, float param_3);
			static void RotateY(cMatrix& param_1, cMatrix const& param_2, float param_3);
			static void RotateZ(cMatrix& param_1, cMatrix const& param_2, float param_3);
			static void RotateYr(cMatrix& param_1, cMatrix const& param_2, float param_3);
			static void RotateXr(cMatrix& param_1, cMatrix const& param_2, float param_3);
			static void RotateZr(cMatrix& param_1, cMatrix const& param_2, float param_3);
			static void RotateXYZ(cMatrix& param_1, cMatrix const& param_2, cVec const& param_3);

			static void SetTrans(cMatrix& param_1, cVec const& param_2);
			static void Transpose(cMatrix& param_1, cMatrix const& param_2);

			cMatrix& operator=(cMatrix const& param_1);
			cMatrix& operator=(cMatrix&& param_1);
		};
	}
}