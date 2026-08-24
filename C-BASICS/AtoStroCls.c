#include <stdio.h>
int main()
{
    int a = 10; /*auto int a=10*/ /*the scope is within the function*/ /*lifetime until function is executed*/
    printf("%d", a);
    return 0;
}