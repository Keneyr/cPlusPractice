//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//    void CountTotal();
//    void GetName(char name[]);
//    int GetAmount();
//    void GetPrice();
//    void GetTotal();
//private:
//    char Name[24]; //24 bytes
//    int Amount; //4 bytes
//    float Price; //4 bytes
//    float Total; //4 bytes
//};
//
//int Student::GetAmount()
//{
//    this = NULL; //错误，C++不允许更改this指针的指向
//    return Amount;
//}
//
////相当于void GetAmount(Student * const this)
//int Student::GetAmount()
//{
//    //相当于return this->return;
//    return Amount;
//}
//
//int main()
//{
//    Student stu;
//    cout << "对象stu占的字节数: " << sizeof(stu) << endl;
//    system("pause");
//    return 0;
//}