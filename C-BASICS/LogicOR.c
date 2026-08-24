#include <stdio.h>
int main()
{
    int a = 1;
    int b = 6;
    char v = 'A';
    char i = 'B';
    char j = 'R';
    printf("%c", v);
    printf("\t%c", i);
    printf("\t%c", j);
    printf("\n0\t0");
    printf("\t%d", a > 6 || b > 7);
    printf("\n1\t0");
    printf("\t%d", a < 3 || b > 3);
    printf("\n0\t1");
    printf("\t%d", a > 4 || b > 3);
    printf("\n1\t1");
    printf("\t%d", a < 4 || b > 7);
    return 0;
}