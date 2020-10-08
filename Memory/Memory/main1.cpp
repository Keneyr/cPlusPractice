#include <stdio.h>
#include <iostream>

using namespace std;


#pragma pack(2)
struct A
{
	int a;
	char b;
	short c;
};
#pragma pack()

#pragma pack(4)
struct B
{
	char b;
	int a;
	short c;
};
#pragma pack()

int main()
{
	//printf(¡°sizeof(A) = %d, sizeof(B) = %d\n¡±, sizeof(A), sizeof(B));
	cout << sizeof(A) << " " << sizeof(B) << endl; //8 12

	system("pause");
	return 0;
}
