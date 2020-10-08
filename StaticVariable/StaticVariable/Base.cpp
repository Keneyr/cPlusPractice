#include "Base.h"
#include <iostream>

int globalv = 10;
static bool s_globalv = true;


int Base::a = 2;

void Base::Func2()
{
	std::cout << Base::a << std::endl;
	//Func1(); 静态函数不能调用非静态函数，不能访问非静态变量

	std::cout << globalv << std::endl;
	std::cout << s_globalv << std::endl;
}

void Base::Func1()
{
	std::cout << globalv << std::endl;
	std::cout << s_globalv << std::endl;
}