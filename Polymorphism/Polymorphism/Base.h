#pragma once
//https://blog.csdn.net/lihao21/article/details/50688337
#include <iostream>

class Base
{
public:
	Base() { std::cout << "onstructor of class Base!" << std::endl; vfunc1(); };
	virtual ~Base() { std::cout << "destructor of class Base!" << std::endl; };

	virtual void vfunc1() { std::cout << "Base::vfunc1" << std::endl; };
	virtual void vfunc2() { std::cout << "Base::vfunc2" << std::endl; };

	virtual void Dosomething() { std::cout << "Base::Dosomething" << std::endl; };

	void func1() { std::cout << "Base::func1" << std::endl; };
	void func2() { std::cout << "Base::func2" << std::endl; };


private:
	int m_data1 = 1 , m_data2 = 2;
};