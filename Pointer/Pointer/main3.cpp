//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//	int*p = NULL;
//
//	int a[] = { 1,2,3,4 };
//
//	p = a;
//
//	*(p++) += 100; 
//	//等价于*p + = 100,p++;即a[0]+=100,pl指向a[1]
//	//永远记得，对于后缀++，一直都是先其他运算，再自增
//
//	//printf(%d%d%d%d%d\n”, *p, a[0], a[1], a[2], a[3]);
//
//	cout << *p << " " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
//
//	system("pause");
//	return 0;
//}