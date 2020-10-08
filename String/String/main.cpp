#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	//string a;
	//cin >> a; //hello world
	//cout << a << endl;
	//cin遇到空格结束


	const int ArSize = 5;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize); //read through new line

	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	//geline遇到enter换行符结束，并将换行符变成\0空字符



	//const int ArSize = 5;
	//char name[ArSize];
	//char dessert[ArSize];
	//cout << "Enter your name:\n";
	//cin.get(name, ArSize).get(); //read through new line

	//cout << "Enter your favorite dessert:\n";
	//cin.get(dessert, ArSize).get();
	////cin.get();
	//cout << "I have some delicious " << dessert;
	//cout << " for you, " << name << ".\n";

	/*string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;*/


	/*cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";*/

	//char ch;
	//int count = 0;
	//cout << "Enter character ; enter # to-quit:\n";
	////cin >> ch;
	//cin.get(ch);
	//while (ch != '#')
	//{
	//	cout << ch;
	//	count++;
	//	//cin >> ch;
	//	cin.get(ch);
	//}
	//cout << endl << count << " characters read\n";

	/*char str[] = "world";
	cout << sizeof(str) << endl;
	cout << strlen(str) << endl;

	string ss = "world";
	cout << sizeof(ss) << endl;
	cout << ss.length() << endl;*/


	system("pause");
	return 0;
}