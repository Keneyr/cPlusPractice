#include "Base.h"
#include <iostream>
#include <stdio.h>

const int arraySize = 2; //编译时就会把此变量替换掉，如果是普通的变量，只能运行时才会替换



int main()
{
	
	Base::Func2();

	Base b;
	b.Func1();

	Base::a = 3;
	std::cout << Base::a << std::endl;


	/*Base *base = new Base;*/

	int a[arraySize] = {1,1};
	for (int i = 0; i < arraySize; i++)
		std::cout << a[i] << " ";
	
	std::cout << std::endl;

	char ch;
	std::cout << "Enter a character: " << std::endl;
	std::cin >> ch;
	std::cout << "Thank you for the " << ch << " character." << std::endl;
	


	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(double) << std::endl;





	system("pause");
	//std::cin.get();
	return 0;
}