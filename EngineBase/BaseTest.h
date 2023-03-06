#pragma once


class BaseTest
{
public:
	BaseTest();
	~BaseTest();

	BaseTest(const BaseTest& _Other) = delete;
	BaseTest(BaseTest&& _Other) noexcept = delete;
	BaseTest& operator=(const BaseTest& _Other) = delete;
	BaseTest& operator=(BaseTest&& _Other) noexcept = delete;

	static void Test()
	{
		int a = 0;
	}

protected:

private:

};