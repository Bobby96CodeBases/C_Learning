#include <stdio.h>
int main()
{
    int a = 6;
    int b = 2;
    int c;
    c = a * b + a / b - a % b;
    printf("%d", ++c);
    printf("\n%d", --c);
    return 0;
}