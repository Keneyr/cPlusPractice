#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5);
	//data()����ָ���һ��Ԫ�ص�ָ��--���ص�һ��Ԫ�صĵ�ַ
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