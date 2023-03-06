#pragma once


class CoreTest
{
public:
	CoreTest();
	~CoreTest();

	CoreTest(const CoreTest& _Other) = delete;
	CoreTest(CoreTest&& _Other) noexcept = delete;
	CoreTest& operator=(const CoreTest& _Other) = delete;
	CoreTest& operator=(CoreTest&& _Other) noexcept = delete;

	static void Test()
	{
		int a = 0;
	}

protected:

private:

};