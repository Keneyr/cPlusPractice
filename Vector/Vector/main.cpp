#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5);
	//data()返回指向第一个元素的指针--返回第一个元素的地址
	int *p = v.data();
	*p = 10;
	p++;
	*p = 20;
	p[2] = 100;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "capacity: " << v.capacity() << endl;

	system("pause");
	return 0;
}