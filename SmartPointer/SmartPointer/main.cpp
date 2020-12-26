//#include <iostream>
//
//template<typename T>
//class Auto_ptr1
//{
//public:
//	Auto_ptr1(T* ptr = nullptr) :m_ptr{ ptr } {}
//
//	virtual ~Auto_ptr1()
//	{
//		delete m_ptr;
//	}
//
//    //²Ù×÷·ûÖØÔØ
//	T& operator*() { return *m_ptr; }
//	T* operator->() { return m_ptr; }
//
//private:
//	T* m_ptr;
//};
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}