#include <iostream>

#include "Derive.h"
#include "Other.h"

using namespace std;

class A
{
public:
	A() { cout << "A"; }
	virtual ~A() { cout << "~A"; } //析构函数加不加virtual造成的结果可是很不一样的。
};

class B : public A
{
public:
	B() { cout << "B"; }
	~B() { cout << "~B"; }
};

int main()
{
	/*Derive derive(5);
	std::cout << derive.fuck << std::endl;
	std::cout << derive.GetJ() << std::endl;

	Derive *d = new Derive(8);
	delete d;

	int m = 2;
	Other other(10, m);
	std::cout << other.Getc() << std::endl;
	std::cout << other.Getd() << std::endl;*/


	A*c = new B[2];
	delete[] c;

	system("pause");
	return 0;
}