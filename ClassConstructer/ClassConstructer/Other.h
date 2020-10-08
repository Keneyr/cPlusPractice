#pragma once

class Other
{
public:
	Other(int x, int y) :c(x), d(y)
	{
		i = -1;
	}
private:
	int i;
	const int c; //必须在构造函数基/成员初始值设定项列表中初始化
	int &d; //必须在构造函数基/成员初始值设定项列表中初始化

public:
	int Getd() { return d; }
	int Getc() { return c; }
};