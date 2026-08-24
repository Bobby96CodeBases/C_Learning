// #include <stdio.h>
// // prototype
// void printhello();
// void printbye();

// int main()
// {
//     printhello(); // function call
//     printbye();
//     return 0;
// }

// void printhello()
// {
//     printf("hello!\n"); // function defination
// }

// void printbye()
// {
//     printf("good bye :)");
// }
#include <stdio.h>
void indian();
void french();

int main()
{
    printf("enter country first letter: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        indian();
    }
    else if (ch == 'f')
    {
        french();
    }
    return 0;
}

void indian()
{
    printf("namaste\n");
}

void french()
{
    printf("bonjour\n");
}