#include <stdio.h>
int main()
{
    int a = 'z';
    int b = 'y';
    printf("\n%c", a);
    printf("\t%d", a);
    printf("\n%c", b);
    printf("\t%d", b);
    printf("\n%d", a + b /*%d is the sum of the numbers a and b*/);
    int c = 0, d = 9;
    printf("\n%d", c);
    printf("\t%d", d);
    printf("\n%d", c + d /*%d is the sum of the two numbers c and d*/);
    return 0;
}