#include <iostream>
using namespace std;


struct A
{
	bool b;
	int arr[2];
	int i;
	int j;
};
int main()
{
	A a;
	a.b = false;
	a.arr[0] = 1;
	a.arr[1] = 2;
	a.i = 20;
	a.j = 30;

	*(a.arr + 1) = 40; //arr[1] = 40

	A*p = 0; //��ָ��

	unsigned int q = (unsigned int)(&p->i); //i���α����ĵ�ַ��ǿ��ת��Ϊunsigned int
	
	cout << q << endl;


	(*(int*)((char*)&a + q)) = -50; //0(false) + q(��ʱ���ǵ�ַ),Ȼ��ǿ��ת��Ϊint*ָ�룬Ȼ��õ��õ�ַ�ϴ�ŵı�����
									//Ӧ���ǰ�i�����-50

	cout << a.i << endl;

	//�����µĴ𰸣�
	//����1���ṹ��ָ�룬�ṹ��ָ��ķ��ʷ�ʽΪ��p->i��
	//����2��->���ȼ�����&, �ʶ�������ȡ����ĳ�Ա��Ե�ַ
	//����3�������ֽ�4���룬bool b������3�����ֽڣ�����i�ĵ�ַ����12.��q = 12
	//����4��(char*)&a + q �Ȱ�a�ĵ�ַת����ָ��char�ͣ���1��Byte��ָ�룬Ȼ��ָ�������ƶ�q��Byte��
	//�������ó��Ľ����a.i��ֵΪ - 50��

	system("pause");
	return 0;
}