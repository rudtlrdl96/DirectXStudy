#pragma once


class Int3 final
{
public:
	static const Int3 Zero;
	static const Int3 Left;
	static const Int3 Right;
	static const Int3 Up;
	static const Int3 Down;
	static const Int3 Forward;
	static const Int3 Back;

	int X = 0;
	int Y = 0;
	int Z = 0;

public:
	Int3();
	Int3(int _X);
	Int3(int _X, int _Y);
	Int3(int _X, int _Y, int _Z);
	~Int3();

	Int3& operator=(const Int3& _Other)
	{
		if (*this == _Other)
		{
			return *this;
		}

		this->X = _Other.X;
		this->Y = _Other.Y;
		this->Z = _Other.Z;

		return *this;
	}

	Int3 operator+(const Int3& _Other) const
	{
		Int3 Clone = Int3(*this);

		Clone.X += _Other.X;
		Clone.Y += _Other.Y;
		Clone.Z += _Other.Z;

		return Clone;
	}

	Int3& operator+=(const Int3& _Other)
	{
		this->X += _Other.X;
		this->Y += _Other.Y;
		this->Z += _Other.Z;

		return *this;
	}

	Int3 operator-(const Int3& _Other) const
	{
		Int3 Clone = Int3(*this);

		Clone.X -= _Other.X;
		Clone.Y -= _Other.Y;
		Clone.Z -= _Other.Z;

		return Clone;
	}

	Int3& operator-=(const Int3& _Other)
	{
		this->X -= _Other.X;
		this->Y -= _Other.Y;
		this->Z -= _Other.Z;

		return *this;
	}

	bool operator==(const Int3& _Other)
	{
		return (
			this->X == _Other.X &&
			this->Y == _Other.Y &&
			this->Z == _Other.Z
			);
	}

	bool operator!=(const Int3& _Other)
	{
		return (
			this->X != _Other.X ||
			this->Y != _Other.Y ||
			this->Z != _Other.Z);
	}
private:

};