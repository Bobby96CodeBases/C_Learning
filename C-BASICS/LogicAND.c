#include <stdio.h>
int main()
{
    int a = 20;
    int b = 30;
    char v = 'A';
    char i = 'B';
    char j = 'R';
    printf("%c", v);
    printf("\t%c", i);
    printf("\t%c", j);
    printf("\n0\t0");
    printf("\t%d", a < 10 && b < 10);
    printf("\n1\t0");
    printf("\t%d", a < 21 && b < 10);
    printf("\n0\t1");
    printf("\t%d", a < 10 && b > 10);
    printf("\n1\t1");
    printf("\t%d", a > 10 && b > 10);
    return 0;
}