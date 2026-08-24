#include <stdio.h>
int main()
{
    int a, b;
    printf("enter value of a:");
    scanf("%d", &a);

    printf("enter value of b:");
    scanf("%d", &b);

    int c = b & a; /*use logic of AND*/
    printf(" the result of bitwise operand AND is = %d", c);
    return 0;
}
