//#include <iostream>
//using namespace std;
//const int SIZE = 10;
//
//class safearay
//{
//private:
//	int arr[SIZE];
//public:
//	safearay()
//	{
//		register int i;
//		for (i = 0; i < SIZE; i++)
//		{
//			arr[i] = i;
//		}
//	}
//	int& operator[](int i)
//	{
//		//���������&��û���&��ɶ�����������ԣ����ǿ������е�
//		if (i > SIZE)
//		{
//			cout << "�����������ֵ" << endl;
//			// ���ص�һ��Ԫ��
//			return arr[0];
//		}
//		return arr[i];
//	}
//};
//int main()
//{
//	safearay A;
//
//	cout << "A[2] ��ֵΪ : " << A[2] << endl;
//	cout << "A[5] ��ֵΪ : " << A[5] << endl;
//	cout << "A[12] ��ֵΪ : " << A[12] << endl;
//
//	int tmp = A[2];
//	tmp *= 2;
//	cout << tmp << endl;
//	cout << A[2] << endl;
//
//	system("pause");
//	return 0;
//}