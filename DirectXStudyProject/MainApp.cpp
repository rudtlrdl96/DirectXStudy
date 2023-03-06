#include <Windows.h>
#include <EngineBase/Float4.h>
#include <EngineBase/Int2.h>
#include <EngineBase/Int3.h>

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	{
		Float4 Test = { 3.0f, 5.0f, 1.0f };

		float f1 = Test.Length();

		Float4 Clone = Test.NormalizeClone();

		Test.Normalize();

		float f2 = Test.Length();

		Float4 v1 = { 1.0f, 2.0f, 3.0f };
		Float4 v2 = { 1.0f, 2.0f, 3.0f };

		Float4 v3 = v1 + v2;
		Float4 v4 = v1 - v2;
		Float4 v5 = v1 * 3.0f;
	}

	{
		Int2 Test = { 3, 5};

		Int2 v1 = { 1, 2};
		Int2 v2 = { 1, 2};

		Int2 v3 = v1 + v2;
		Int2 v4 = v1 - v2;

		int a = 2;
	}

	{
		Int3 Test = { 3, 5, 2 };

		Int3 v1 = { 1, 2, 4 };
		Int3 v2 = { 1, 2, 2};

		Int3 v3 = v1 + v2;
		Int3 v4 = v1 - v2;

		int a = 2;
	}


	return 1;
}