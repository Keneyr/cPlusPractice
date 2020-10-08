//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *p = (int*)(&a + 1);
//	printf("%d\n", *p);
//	printf("%d\n", *(p - 1)); //这咋分析？看不懂
//	
//
//
//	int narray[8];
//	std::cout << sizeof(narray) << " " << sizeof(narray[0]) << std::endl;
//
//
//	//指针和别名
//	int m = 100;
//	int *d = &m;
//	int *&n = d;
//	*n = 99;
//	std::cout << m << std::endl;
//	std::cout << *d << std::endl;
//
//
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps;
//	cout << animal << " and ";
//	cout << bird << "\n";
//	cout << "Enter a kind of animal: ";
//	cin >> animal;
//	ps = animal;
//	cout << "Before using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	ps = new char[strlen(animal) + 1];
//	cout << animal << " length is : " << strlen(animal) << endl;
//	strcpy(ps, animal);
//	cout << "After using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	cout << ps << " length is : " << strlen(ps) << endl;
//	delete [] ps;
//
//
//
//
//	system("pause");
//}