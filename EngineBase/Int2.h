#pragma once


class Int2 final
{
public:
	static const Int2 Zero;
	static const Int2 Left;
	static const Int2 Right;
	static const Int2 Up;
	static const Int2 Down;

	int X = 0;
	int Y = 0;
public:
	Int2();
	Int2(int _X);
	Int2(int _X, int _Y);
	~Int2();

	Int2& operator=(const Int2& _Other)
	{
		if (*this == _Other)
		{
			return *this;
		}

		this->X = _Other.X;
		this->Y = _Other.Y;

		return *this;
	}

	Int2 operator+(const Int2& _Other) const
	{
		Int2 Clone = Int2(*this);

		Clone.X += _Other.X;
		Clone.Y += _Other.Y;

		return Clone;
	}

	Int2& operator+=(const Int2& _Other)
	{
		this->X += _Other.X;
		this->Y += _Other.Y;

		return *this;
	}

	Int2 operator-(const Int2& _Other) const
	{
		Int2 Clone = Int2(*this);

		Clone.X -= _Other.X;
		Clone.Y -= _Other.Y;

		return Clone;
	}

	Int2& operator-=(const Int2& _Other)
	{
		this->X -= _Other.X;
		this->Y -= _Other.Y;

		return *this;
	}

	bool operator==(const Int2& _Other)
	{
		return (
			this->X == _Other.X &&
			this->Y == _Other.Y);
	}

	bool operator!=(const Int2& _Other)
	{
		return (
			this->X != _Other.X ||
			this->Y != _Other.Y);
	}
private:

};