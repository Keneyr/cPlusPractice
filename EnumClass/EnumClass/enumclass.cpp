#include <iostream>

using namespace std;


enum class Color { black, white, red };

auto white = false; //ok����Ϊ�����white��Color::white����һ����������

int main()
{

	Color c = Color::white;
	//if (c < 12) {} //����

	//����ָ��ת������--��ö�����ͱ��double
	if (static_cast<double>(c) < 12) {}

	system("pause");
	return 0;
}