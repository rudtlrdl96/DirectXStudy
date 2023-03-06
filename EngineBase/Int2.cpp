#include "Int2.h"

const Int2 Int2::Zero	= { 0, 0 };
const Int2 Int2::Left	= { -1, 0 };
const Int2 Int2::Right	= { 1, 0 };
const Int2 Int2::Up		= { 0, 1 };
const Int2 Int2::Down	= { 0, -1 };

Int2::Int2()
{
}

Int2::Int2(int _X) :
	X(_X)
{
}

Int2::Int2(int _X, int _Y) :
	X(_X),
	Y(_Y)
{
}

Int2::~Int2()
{
}
