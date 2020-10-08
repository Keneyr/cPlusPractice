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
//		//这里有这个&和没这个&有啥区别？我试了试，都是可以运行的
//		if (i > SIZE)
//		{
//			cout << "索引超过最大值" << endl;
//			// 返回第一个元素
//			return arr[0];
//		}
//		return arr[i];
//	}
//};
//int main()
//{
//	safearay A;
//
//	cout << "A[2] 的值为 : " << A[2] << endl;
//	cout << "A[5] 的值为 : " << A[5] << endl;
//	cout << "A[12] 的值为 : " << A[12] << endl;
//
//	int tmp = A[2];
//	tmp *= 2;
//	cout << tmp << endl;
//	cout << A[2] << endl;
//
//	system("pause");
//	return 0;
//}