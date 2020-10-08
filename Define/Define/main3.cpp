#include<iostream>
using namespace std;

//int main()
//{
//
//	unsigned char tmp = 150;
//	cout << tmp << endl;
//	//int summ = 0;
//	for (int i = 0; i < 2 * tmp; i++)
//	{
//		//summ++;
//	}
//
//	cout << 2 * tmp << endl;
//	//cout << summ << endl;
//	system("pause");
//	return 0;
//}

//class Test
//{
//public:
//	Test() {}
//	~Test() {
//		throw 24;
//	}
//};
//int main()
//{
//	try {
//		Test n;
//		throw 8;
//	}
//	catch (int n)
//	{
//		std::cout << n;
//	}
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	char p1[] = "abcde";
//	cout << sizeof(p1) << endl;
//	cout << strlen(p1) << endl;
//
//	const char* p2 = "abcdc";
//	cout << sizeof(p2) << endl;
//	cout << strlen(p2) << endl;
//
//	const char* p3 = p2 + 3;
//	cout << sizeof(p3) << endl;
//
//	int size1 = (int*)p3 - (int*)p2;
//	cout << size1 << endl;
//
//#pragma pack(push,8)
//	struct Test
//	{
//		char i[11];
//
//	};
//	struct Test1
//	{
//		short s1;
//		Test i1;
//	};
//#pragma pack(pop)
//	int size2 = sizeof(Test1);
//	cout << size2 << endl;
//
//	system("pause");
//	return 0;
//}

//#include <vector>
//class TestA
//{
//public:
//	TestA(int a1, int b1)
//	{
//		a = a1;
//		b = b1;
//	}
//public:
//	int a;
//	int b;
//};
//
//int main(int argc, char*argv[])
//{
//	std::vector<TestA> Context;
//	TestA a1(1, 2);
//	Context.push_back(a1);
//	
//	TestA& p = Context[0];
//	for (int i = 0; i < 100; ++i)
//	{
//		Context.push_back(p);
//	}
//	std::cout << Context.size() << std::endl;
//	std::cout << Context[0].a << std::endl;
//
//	system("pause");
//	return 0;
//}

//template<int N>
//class Calc
//{
//public:
//	enum { result = 2 * Calc<N - 1>::result; };
//};
//
//template<>
//class Calc<0>
//{
//public:
//};
////Calc<5>::result = 96