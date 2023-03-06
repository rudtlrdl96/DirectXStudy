#pragma once
#include <math.h>
#include <cmath>

class Float4
{
public:
	static const Float4 Zero;
	static const Float4 Left;
	static const Float4 Right;
	static const Float4 Up;
	static const Float4 Down;
	static const Float4 Forward;
	static const Float4 Back;

	float X = 0.0f;
	float Y = 0.0f;
	float Z = 0.0f;
	float W = 1.0f;
public:
	Float4();
	Float4(float _X, float _Y);
	Float4(float _X, float _Y, float _Z);
	Float4(float _X, float _Y, float _Z, float _W);
	Float4(const Float4& _Other);
	~Float4();

	Float4& operator=(const Float4& _Other)
	{
		if (*this == _Other)
		{
			return *this;
		}

		this->X = _Other.X;
		this->Y = _Other.Y;
		this->Z = _Other.Z;
		this->W = _Other.W;

		return *this;
	}

	Float4 operator+(const Float4& _Other) const
	{
		Float4 Clone = Float4(*this);

		Clone.X += _Other.X;
		Clone.Y += _Other.Y;
		Clone.Z += _Other.Z;

		return Clone;
	}

	Float4& operator+=(const Float4& _Other)
	{
		this->X += _Other.X;
		this->Y += _Other.Y;
		this->Z += _Other.Z;

		return *this;
	}

	Float4 operator-(const Float4& _Other) const
	{
		Float4 Clone = Float4(*this);

		Clone.X -= _Other.X;
		Clone.Y -= _Other.Y;
		Clone.Z -= _Other.Z;

		return Clone;
	}

	Float4& operator-=(const Float4& _Other)
	{
		this->X -= _Other.X;
		this->Y -= _Other.Y;
		this->Z -= _Other.Z;

		return *this;
	}

	Float4 operator*(float _Scalar) const
	{
		Float4 Clone = Float4(*this);

		Clone.X *= _Scalar;
		Clone.Y *= _Scalar;
		Clone.Z *= _Scalar;

		return Clone;
	}

	Float4& operator*=(float _Scalar)
	{
		this->X *= _Scalar;
		this->Y *= _Scalar;
		this->Z *= _Scalar;

		return *this;
	}

	bool operator==(const Float4& _Other)
	{
		return (
			this->X == _Other.X &&
			this->Y == _Other.Y &&
			this->Z == _Other.Z && 
			this->W == _Other.W);
	}

	bool operator!=(const Float4& _Other)
	{
		return (
			this->X != _Other.X ||
			this->Y != _Other.Y ||
			this->Z != _Other.Z ||
			this->W != _Other.W);
	}

	float Length() const
	{
		return sqrtf((X * X) + (Y * Y) + (Z * Z));
	}

	void Normalize()
	{
		float VectorLength = this->Length();

		X /= VectorLength;
		Y /= VectorLength;
		Z /= VectorLength;
	}

	Float4 NormalizeClone() const
	{
		Float4 Clone = Float4(*this);
		Clone.Normalize();
		return Clone;
	}

private:

};