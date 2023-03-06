#include <Windows.h>

#include <EngineBase/BaseTest.h>
#include <EnginePlatform/PlatformTest.h>
#include <EngineCore/CoreTest.h>
#include <GameContent/ContentTest.h>

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	BaseTest::Test();
	PlatformTest::Test();
	CoreTest::Test();
	ContentTest::Test();

	return 1;
}