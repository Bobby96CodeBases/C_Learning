#include <stdio.h>
int main()
{
    int a, b; /*use logic of OR*/

    printf("enter value of a:");
    scanf("%d", &a);

    printf("enter value of b:");
    scanf("%d", &b);

    int result = a | b;
    printf("the result of a|b=%d", a, b);
    return 0;
}