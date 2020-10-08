#include <iostream>

using namespace std;


enum class Color { black, white, red };

auto white = false; //ok，因为这里的white和Color::white不在一个作用域内

int main()
{

	Color c = Color::white;
	//if (c < 12) {} //错误

	//智能指针转换类型--把枚举类型变成double
	if (static_cast<double>(c) < 12) {}

	system("pause");
	return 0;
}