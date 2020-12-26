#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
using namespace std;

unique_ptr<int> make_int(int n)
{
    return unique_ptr<int>(new int(n));
}
void show(unique_ptr<int>& pi)
{
    cout << *pi << " ";
}

int main()
{
    vector<unique_ptr<int>> vp(5);
    for (int i = 0; i < vp.size(); i++)
    {
        vp[i] = make_int((rand() % 1000));
    }
    vp.push_back(make_int(rand() % 1000));
    for_each(vp.begin(), vp.end(), show);

    system("pause");
    return 0;

}