#include "Int3.h"

const Int3 Int3::Zero	 = { 0, 0, 0 };
const Int3 Int3::Left	 = { -1, 0, 0 };
const Int3 Int3::Right	 = { 1, 0, 0 };
const Int3 Int3::Up		 = { 0, 1, 0 };
const Int3 Int3::Down	 = { 0, -1, 0 };
const Int3 Int3::Forward = { 0, 0, 1 };
const Int3 Int3::Back	 = { 0, 0, -1 };

Int3::Int3()
{
}

Int3::Int3(int _X) :
	X(_X)
{
}

Int3::Int3(int _X, int _Y) :
	X(_X),
	Y(_Y)
{
}

Int3::Int3(int _X, int _Y, int _Z) :
	X(_X),
	Y(_Y),
	Z(_Z)
{
}

Int3::~Int3()
{
}
