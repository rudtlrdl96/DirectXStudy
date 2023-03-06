#pragma once


class Int2
{
public:
	Int2();
	~Int2();

	Int2(const Int2& _Other) = delete;
	Int2(Int2&& _Other) noexcept = delete;
	Int2& operator=(const Int2& _Other) = delete;
	Int2& operator=(Int2&& _Other) noexcept = delete;

protected:

private:

};