#include <stdio.h>
int main()
{ /*'a' is signed value */
    int a;
    printf("enter value of a:");
    scanf("%d", &a);

    printf("%d", ~a);
    return 0;
}