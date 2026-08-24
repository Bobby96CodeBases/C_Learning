#include <stdio.h>
int main()
{
    int a = 10;
    int b = a >> 2; /*the formula of right shift is a/2^k*/
    printf("the value of b after right operand is %d\n", b);
    return 0;
}