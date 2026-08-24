#include <stdio.h>
int main()
{
    int i;
    for (size_t i = 1; i < 100; i++) /*exp 1 first one to execute,
    exp 2 is condition checking  every time condition is true then block will be executed,
    after execution of the block exp 3 is executed*/
    {
        printf("HOPE\n");
    }
}