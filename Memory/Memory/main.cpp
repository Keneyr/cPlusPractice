////�ڴ����
//
//#include <iostream>
//using namespace std;
//
//struct
//{
//	int x;
//	char y;
//	char d;
//}s;
//
//struct
//{
//	char y;
//	int x;
//	char d;
//}ss;
//
//struct
//{
//	char y;
//	char d;
//	int x;
//}sss;
//
//class MyClass
//{
//	char c;
//	int i;
//	short s;
//}myclass;
//
//class OtherClass
//{
//public:
//	char c;
//	alignas(8) int i;
//	short s;
//}otherclass;
//
//class alignas(int) alignas(16) MyObject
//{
//	char c;
//	int i;
//	short s;
//}myobject;
//
//class FuckClass
//{
//public:
//	int a;
//	char b;
//	double c;
//}fuckclass;
//
//class FuckVClass
//{
//public:
//	virtual void Fuck() {};
//	int a;
//	char b;
//	double c;
//
//}fuckvclass;
//
//int main()
//{
//
//	int n;
//	//cout << sizeof(n) << endl; //������x86����x64������4���ֽ�
//
//	cout << sizeof(s) << endl; //8
//
//	cout << &s.x << endl;
//	cout << &s.y << endl; //Ϊʲô�����������
//	cout << &s.d << endl;
//
//	cout << sizeof(ss) << endl; //12
//
//	cout << sizeof(sss) << endl; //8
//
//	cout << sizeof(myclass) << endl; //12
//
//	cout << sizeof(otherclass) << endl; //16
//
//	cout << sizeof(myobject) << endl; //16--��֪��������16��ʲô����Ĳ�ͬû
//
//	cout << sizeof(fuckclass) << endl; //16--Ӧ�ú�������һ����4+1+3+8
//	cout << &fuckclass.a << endl;
//	cout << &fuckclass.b << endl;
//	cout << &fuckclass.c << endl;
//
//
//	cout << sizeof(fuckvclass) << endl; //24
//	cout << sizeof(fuckvclass.c) << endl;
//
//	cout << &fuckvclass.a << endl;
//	cout << &fuckvclass.b << endl;
//	cout << &fuckvclass.c << endl; //�����ַ������ҿ���Ī�����
//
//
//
//
//	//cout << sizeof(otherclass.i) << endl; //4
//
//
//	system("pause");
//	return 0;
//}