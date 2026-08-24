#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter value of a:");
    scanf("%d", &a);

    printf("enter value of b:");
    scanf("%d", &b);

    c = a ^ b; /*use logic of AND ,OR */
    printf("%d", c);
    return 0;
}
