#pragma once


class ContentTest
{
public:
	ContentTest();
	~ContentTest();

	ContentTest(const ContentTest& _Other) = delete;
	ContentTest(ContentTest&& _Other) noexcept = delete;
	ContentTest& operator=(const ContentTest& _Other) = delete;
	ContentTest& operator=(ContentTest&& _Other) noexcept = delete;

	static void Test()
	{
		int a = 0;
	}

protected:

private:

};