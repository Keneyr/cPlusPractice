#include "Base.h"
#include "Derive.h"
#include "DerivePlus.h"

#include <iostream>


//struct A {
//	void foo{ printf("foo"); }
//	virtual void bar() { printf("bar"); }
//	A() { bar(); }
//};
//struct B : A {
//	void foo() { printf("b_foo"); }
//	void bar() { printf("b_bar"); }
//};

int main()
{

	/*A *p = new B;
	p->foo();
	p->bar();*/

	//Derive derive;
	//Base *base = &derive;
	Base *base = new Derive;

	base->vfunc1();
	base->func1();
	//derive.func1();
	base->Dosomething();
	//std::cout << base->m_data1 << " " << base->m_data2 << std::endl; //无法访问private成员
	delete base; //这里只析构base，不析构derive，所以报错





	DerivePlus derivePlus;
	Base *b = &derivePlus;

	b->vfunc2();
	b->func2();
	derivePlus.func2();

	delete b;

	/*Derive *d = new Derive;
	d->vfunc1();
	d->func1();
	d->vfunc2();
	delete d;*/

	system("pause");
	return 0;
}