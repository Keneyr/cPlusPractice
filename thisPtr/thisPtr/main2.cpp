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
//    this = NULL; //����C++���������thisָ���ָ��
//    return Amount;
//}
//
////�൱��void GetAmount(Student * const this)
//int Student::GetAmount()
//{
//    //�൱��return this->return;
//    return Amount;
//}
//
//int main()
//{
//    Student stu;
//    cout << "����stuռ���ֽ���: " << sizeof(stu) << endl;
//    system("pause");
//    return 0;
//}