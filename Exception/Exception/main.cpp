#include <iostream>

using namespace std;

double division(int a, int b)
{
	if (b == 0)
	{
		throw"Division by zero condition!";
	}
	return (a / b);
}

int main()
{

	int x = 50;
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
		cout << z << endl;
	}
	//�׳���һ������Ϊ const char* ���쳣����ˣ���������쳣ʱ�����Ǳ����� catch ����ʹ�� const char*
	//ָ������ָ��
	catch(const char* msg){
		cerr << msg << endl;
	}

	system("pause");
	return 0;
}