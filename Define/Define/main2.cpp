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
//	//���ǲ���ƾ���޹������ŵģ�������ַ����滻
//
//	//++���ȼ�����*����������++a,++b,Ȼ��a=2,b=3
//	//a+b*b+c=2+3*3+3=14
//
//	int tmp2 = Mul2(a + b, b + c);
//	cout << tmp2 << endl; //14
//
//	//a+b++*b+c++
//	//a+3*b+4
//	//1+3*2+4
//	//11  ����
//
//	//1+2*2+3
//	//8
//	cout << a << " " << b << " " << c << endl;
//	//a=1,b=3,c=4
//
//	//���ǰ׺��׺������ʵ����Ȼ���������ǣ�����++i����������Ȼ������������㣻
//	//����i++���Ƚ�������������������
//	system("pause");
//	//return 0;
//	//printf(��%d��, Mul(a + b, b + c));
//}