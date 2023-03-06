#pragma once


class Int3
{
public:
	Int3();
	~Int3();

	Int3(const Int3& _Other) = delete;
	Int3(Int3&& _Other) noexcept = delete;
	Int3& operator=(const Int3& _Other) = delete;
	Int3& operator=(Int3&& _Other) noexcept = delete;

protected:

private:

};