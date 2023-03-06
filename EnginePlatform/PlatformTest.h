#pragma once


class PlatformTest
{
public:
	PlatformTest();
	~PlatformTest();

	PlatformTest(const PlatformTest& _Other) = delete;
	PlatformTest(PlatformTest&& _Other) noexcept = delete;
	PlatformTest& operator=(const PlatformTest& _Other) = delete;
	PlatformTest& operator=(PlatformTest&& _Other) noexcept = delete;
	
	static void Test()
	{
		int a = 0;
	}
protected:

private:

};