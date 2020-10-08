//#define Mul(x,y) ++x*++y
//
//#define Mul2(x,y) x++*y++
//
//
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	/*int tmp = Mul(a + b, b + c);
//	cout << tmp << endl;*/
//
//	//++a+b*++b+c
//	//宏是不会凭白无辜加括号的，宏就是字符串替换
//
//	//++优先级大于*，所以先算++a,++b,然后a=2,b=3
//	//a+b*b+c=2+3*3+3=14
//
//	int tmp2 = Mul2(a + b, b + c);
//	cout << tmp2 << endl; //14
//
//	//a+b++*b+c++
//	//a+3*b+4
//	//1+3*2+4
//	//11  错了
//
//	//1+2*2+3
//	//8
//	cout << a << " " << b << " " << c << endl;
//	//a=1,b=3,c=4
//
//	//这个前缀后缀的区分实验依然告诉了我们，对于++i，先自增，然后进行其他运算；
//	//对于i++，先进行其他运算再自增。
//	system("pause");
//	//return 0;
//	//printf(“%d”, Mul(a + b, b + c));
//}