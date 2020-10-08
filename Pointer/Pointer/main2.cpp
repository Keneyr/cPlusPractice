#include <iostream>
using namespace std;


struct A
{
	bool b;
	int arr[2];
	int i;
	int j;
};
int main()
{
	A a;
	a.b = false;
	a.arr[0] = 1;
	a.arr[1] = 2;
	a.i = 20;
	a.j = 30;

	*(a.arr + 1) = 40; //arr[1] = 40

	A*p = 0; //空指针

	unsigned int q = (unsigned int)(&p->i); //i整形变量的地址，强制转换为unsigned int
	
	cout << q << endl;


	(*(int*)((char*)&a + q)) = -50; //0(false) + q(这时候还是地址),然后强制转换为int*指针，然后得到该地址上存放的变量，
									//应该是把i变成了-50

	cout << a.i << endl;

	//该题下的答案：
	//考点1：结构体指针，结构体指针的访问方式为（p->i）
	//考点2：->优先级大于&, 故而这里是取对象的成员相对地址
	//考点3：考虑字节4对齐，bool b后面有3个空字节，所以i的地址就是12.即q = 12
	//考点4：(char*)&a + q 先把a的地址转换成指向char型（即1个Byte）指针，然后指针往后移动q个Byte。
	//所以最后得出的结果是a.i的值为 - 50。

	system("pause");
	return 0;
}