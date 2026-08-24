#include <stdio.h>
int Square(int n)
{
    n = n * n;
    printf("Modified only in function (n):%d\n", n);
}
int Square1(int *n)
{
    *n = (*n) * (*n);
    printf("Modified only in function (n):%d\n", *n);
}
int main()
{
    int n;
    printf("Enter number to be squared:\n");
    scanf("%d", &n);
    printf("Before passing:%d\n", n);
    Square(n);
    printf("passing by value:%d\n", n); // does not change because we just pass only copy

    Square1(&n);// passing address
    printf("passing by refernce:%d\n", n); // change
}