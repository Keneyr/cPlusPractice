//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//struct Review 
//{
//	string title;
//	int rating;
//};
//
////����Ĳ�����ʾ�������ã�
////�����ܹ�ʹ�������������ݹ����ı�������������ֵ�Ŀ���
////ʵ�ڲ��������뾭���swap()ʵ��
//bool FillReview(Review & rr);
//void ShowReview(const Review & rr);
//
//int main()
//{
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//	{
//		books.push_back(temp);
//	}
//	int num = books.size();
//
//	if (num > 0)
//	{
//		cout << "Thank you. You entered the following:\n" << "Rating\tBook\n";
//		for (int i = 0; i < num; i++)
//			ShowReview(books[i]);
//		cout << "Reprising:\n" << "Rating\tBook\n";
//		
//		vector<Review>::iterator pr;
//		for (pr = books.begin(); pr != books.end(); pr++)
//		{
//			ShowReview(*pr);
//		}
//		
//		vector<Review> oldlist(books); //copy constructor used
//		if (num > 3)
//		{
//			//remove 2 items
//			books.erase(books.begin() + 1, books.begin() + 3);
//			cout << "After erase:\n";
//
//			for (pr = oldlist.begin(); pr != oldlist.end(); pr++)
//			{
//				ShowReview(*pr);
//			}
//			//insert 1 item
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
//			cout << "After insertion:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//			{
//				ShowReview(*pr);
//			}
//		}
//
//		books.swap(oldlist);
//		cout << "Swapping oldlist with books:\n";
//		for (pr = books.begin(); pr != books.end(); pr++)
//		{
//			ShowReview(*pr);
//		}
//
//	}
//	else
//	{
//		cout << "Nothing entered,nothing gained.\n";
//	}
//	system("pause");
//	return 0;
//}
//
//bool FillReview(Review & rr)
//{
//	cout << "Enter book title (quit to quit): ";
//	getline(cin, rr.title); //Ϊʲô���ﲻ��  ->  ? ��Ӧ����ָ��ĸ�ʽ��-- ���ˣ�Ӧ����.
//	if (rr.title == "quit")
//	{
//		return false;
//	}
//	cout << "Enter book rating: ";
//	cin >> rr.rating;
//	if (!cin)
//		return false;
//
//	//get rid of rest of input line
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//	return true;
//}
//void ShowReview(const Review & rr)
//{
//	cout << rr.rating << "\t" << rr.title << endl;
//}