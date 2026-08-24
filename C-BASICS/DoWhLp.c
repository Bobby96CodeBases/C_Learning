#include <stdio.h>
int main()
{
    int m;
    printf("enter value of n: ");
    scanf("%d", &m);
    int i, j, sum = 0;
    i = m;
    do
    {
        printf("%d\n", i);
        sum += j;
        i--;
        j++;
    } while (i >= 1, j <= m);
    printf("the sum of numbers:%d", sum);
    return 0;
}