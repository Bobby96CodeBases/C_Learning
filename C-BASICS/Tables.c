#include <stdio.h>
int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        j = n * i;
        printf("%d\n", j);
    }
    return 0;
}