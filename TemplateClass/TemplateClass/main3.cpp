//用来测试模板放在头文件还是cpp文件
#include <iostream>
#include "add.h"

using namespace std;

int main()
{

	int i = add(1, 1);
	cout << i << endl;

	system("pause");
	return 0;
}