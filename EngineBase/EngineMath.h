#pragma once
#include "Int2.h"
#include "Float4.h"

class EngineMath
{
public:
	EngineMath();
	~EngineMath();

	EngineMath(const EngineMath& _Other) = delete;
	EngineMath(EngineMath&& _Other) noexcept = delete;
	EngineMath& operator=(const EngineMath& _Other) = delete;
	EngineMath& operator=(EngineMath&& _Other) noexcept = delete;

protected:

private:

};