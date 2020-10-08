////经过试验可以发现，这里宏定义和函数的结果不一样。
////一定要牢记，对于宏定义，预编译的时候就替换了，所以就是先替换，再计算！！
//#include <iostream>
//
////#define product(x) x*x
//
//using namespace std;
//
//inline int product(int x)
//{
//	return x*x;
//}
//
//int main()
//{
//
//	int i = 3;
//	int j, k;
//	j = product(i++);
//	cout << j << endl;
//	cout << i << endl;
//	k = product(++i);
//	cout << k << endl;
//	cout << i << endl;
//
//	system("pause");
//	return 0;
//}
