#include <stdio.h>
int main()
{
    int a;

    printf("enter value of a:");
    scanf("%d", &a);

    /*if statement gets prints only when given relational condition is true*/
    /*else statement gets prints only when given relational condition is false*/
    if (a <= 30)
    {
        printf("FAIL");
    }
    else if (a > 30 && a <= 100)
    {
        printf("PASS");
    }
    if (a > 100)
    {
        printf("ERROR");
    }
    return 0;
}