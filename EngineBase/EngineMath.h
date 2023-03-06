#pragma once
#include "Int2.h"
#include "Int3.h"
#include "Float4.h"

class EngineMath
{
public:
	static const double PIE;
	static const double PIE2;
	static const float PIEF;
	static const float PIE2F;

private:
	EngineMath();
	~EngineMath();

	EngineMath(const EngineMath& _Other) = delete;
	EngineMath(EngineMath&& _Other) noexcept = delete;
	EngineMath& operator=(const EngineMath& _Other) = delete;
	EngineMath& operator=(EngineMath&& _Other) noexcept = delete;
};