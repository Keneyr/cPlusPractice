//这个有疑问-没搞懂最后一个输出的时候为啥那么多ffff
#include <iostream>
#include <stdio.h>
using namespace std;

static uint32_t m = 0x87654321;
char *p = (char*)&m;

void test(void)
{
    cout << sizeof(char) << endl;
    cout << sizeof(uint32_t) << endl;

    printf("p:0x%p:%x\n", p, *p);
    printf("p+1:0x%p:%x\n", p + 1, *(p + 1));
    printf("p+2:0x%p:%x\n", p + 2, *(p + 2));
    printf("p+3:0x%p:%x\n", p + 3, *(p + 3));

    cout << &p << endl;
    cout << &p + 3 << endl;
    int a = int(*(&p + 3));
    printf("%d\n", &a);
}

int main()
{
    test();

    system("pause");
    return 0;
}