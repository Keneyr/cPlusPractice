#include <iostream>
using namespace std;

struct Node
{
    double item;
    Node *p_next;
};

class iterator
{
    Node *pt;
public:
    iterator():pt(0){}
    iterator(Node *pn):pt(pn){}

    double operator*() { return pt->item; }
    //Ç°×º
    iterator& operator++()
    {
        pt = pt->p_next;
        return *this;
    }
    //ºó×º
    iterator operator++(int)
    {
        iterator tmp = *this;
        pt = pt->p_next;
        return tmp;
    }
    bool operator!=(Node *ite)
    {
        if (this->pt == ite)
            return false;
        return true;
    }
    iterator find_all(iterator head,const double & val)
    {
        iterator start;
        for(start = head;start!=0;++start)
        {
            if (*start == val)
                return start;
        }
        return 0;
    }
};

int main()
{


    system("pause");
    return 0;
}