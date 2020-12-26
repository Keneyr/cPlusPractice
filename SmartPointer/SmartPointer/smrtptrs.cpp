//#include <iostream>
//#include <string>
//#include <memory>
//using namespace std;
//
//class Report
//{
//private:
//    string str;
//    int a;
//public:
//    Report(const string s):str(s)
//    {
//        cout << "Object created!\n";
//    }
//    ~Report()
//    {
//        cout << "Object deleted!\n";
//    }
//    void comment() const { cout << str << a << "\n"; }
//};
//
//int main()
//{
//
//    //去掉{}你会发现没有输出delete了
//    {
//        auto_ptr<Report> ps(new Report("using auto_ptr"));
//        ps->comment();
//    }
//    
//
//    {
//        shared_ptr<Report> pd(new Report("using shared_ptr"));
//        pd->comment();
//    }
//    
//
//    {
//        unique_ptr<Report> pe(new Report("using unique_ptr"));
//        pe->comment();
//    }
//    
//    system("pause");
//    return 0;
//}
