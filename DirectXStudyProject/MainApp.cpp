#include <Windows.h>
#include <EngineBase/Float4.h>

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	Float4 Test = {3.0f, 5.0f, 1.0f};

	float f1 = Test.Length();

	Float4 Clone = Test.NormalizeClone();

	Test.Normalize();

	float f2 = Test.Length();

	Float4 v1 = { 1.0f, 2.0f, 3.0f };
	Float4 v2 = { 1.0f, 2.0f, 3.0f };

	Float4 v3 = v1 + v2;
	Float4 v4 = v1 - v2;
	Float4 v5 = v1 * 3.0f;

	return 1;
}