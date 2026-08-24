#include <stdio.h>
int main()
{

    int x; // 1 is for even numbers
           // 0 is for odd numbers
    printf("enter value of the number:");
    scanf("%d", &x);

    printf("%d", x % 2 == 0);
    return 0;
}