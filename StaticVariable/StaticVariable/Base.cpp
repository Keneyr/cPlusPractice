#include "Base.h"
#include <iostream>

int globalv = 10;
static bool s_globalv = true;


int Base::a = 2;

void Base::Func2()
{
	std::cout << Base::a << std::endl;
	//Func1(); ��̬�������ܵ��÷Ǿ�̬���������ܷ��ʷǾ�̬����

	std::cout << globalv << std::endl;
	std::cout << s_globalv << std::endl;
}

void Base::Func1()
{
	std::cout << globalv << std::endl;
	std::cout << s_globalv << std::endl;
}