#include <stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    printf("before swap: a=%d, b =%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swap : a = %d, b= %d\n", a, b);
    return 0;
}