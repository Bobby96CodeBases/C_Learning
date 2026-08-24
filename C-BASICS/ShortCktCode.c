#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    printf("%d", a < 5 && b++); /*while AND operand used in this expression,
        if the first value is equal to 0,
        then rest of expression is ignored,
        this is called short circuit code */
    printf("%d", b);
    return 0;
}