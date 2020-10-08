#pragma once

#include "Base.h"

class Derive
{
public:
	Derive(int y):base(3)
	{
		j = y;
		fuck = y;
	}
private:
	Base base; //如果有其他类对象，必须在构造函数的初始化列表初始化，
				//因为编译器在创建Derive对象的时候，会调用Base的构造
	int j;
public:
	int fuck;
	int GetJ() { return j; }

};