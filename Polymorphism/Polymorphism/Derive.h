#pragma once

#include "Base.h"
#include <iostream>

class Derive : public Base
{
public:

	Derive() { std::cout << "onstructor of class Derive!" << std::endl; };
	~Derive() { std::cout << "destructor of class Derive!" << std::endl; };

	virtual void vfunc1() { std::cout << "Derive::vfunc1" << std::endl; };
	void func1() { std::cout << "Derive::func1" << std::endl; };
	void Dosomething() { std::cout << "Derive::Dosomething" << std::endl; };


private:
	int m_data3 = 3;
};