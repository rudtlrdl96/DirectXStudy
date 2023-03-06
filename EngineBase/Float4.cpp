#include "Float4.h"

const Float4 Float4::Zero    = { 0.0f, 0.0f, 0.0f, 1.0f };
const Float4 Float4::Left    = { -1.0f, 0.0f, 0.0f, 1.0f };
const Float4 Float4::Right   = { 1.0f, 0.0f, 0.0f, 1.0f };
const Float4 Float4::Up      = { 0.0f, 1.0f, 0.0f, 1.0f };
const Float4 Float4::Down    = { 0.0f, -1.0f, 0.0f, 1.0f };
const Float4 Float4::Forward = { 0.0f, 0.0f, 1.0f, 1.0f };
const Float4 Float4::Back    = { 0.0f, 0.0f, -1.0f, 1.0f };

Float4::Float4()
{
}

Float4::Float4(float _X, float _Y) :
	X(_X),
	Y(_Y)
{
}

Float4::Float4(float _X, float _Y, float _Z) :
	X(_X),
	Y(_Y),
	Z(_Z)
{
}

Float4::Float4(float _X, float _Y, float _Z, float _W) :
	X(_X),
	Y(_Y),
	Z(_Z),
	W(_W)
{
}

Float4::Float4(const Float4& _Other) :
	X(_Other.X),
	Y(_Other.Y),
	Z(_Other.Z),
	W(_Other.W)
{
}

Float4::~Float4()
{
}