#include <stdio.h>
int main()
{
    int a = 5;
    int b = a << 2; /*the formula of left shift is a*2^k*/
    printf("the value b after left shift by two positions:%d\n", b);
    return 0;
}