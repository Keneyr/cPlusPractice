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
	//抛出了一个类型为 const char* 的异常，因此，当捕获该异常时，我们必须在 catch 块中使用 const char*
	//指向常量的指针
	catch(const char* msg){
		cerr << msg << endl;
	}

	system("pause");
	return 0;
}