#pragma once

#include "Derive.h"
#include <iostream>

class DerivePlus :public Derive
{
public:

	DerivePlus() { std::cout << "onstructor of class DerivePlus!" << std::endl; };
	~DerivePlus() { std::cout << "destructor of class DerivePlus!" << std::endl; };

	virtual void vfunc2() { std::cout << "DerivePlus::vfunc2" << std::endl; };
	void func2() { std::cout << "DerivePlus::func2" << std::endl; };

private:
	int m_data1 = 11, m_data4 = 44;
};