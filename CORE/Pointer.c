#include <stdio.h>
int function(int *arr, int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", (int *)arr);
    }
}
int main()
{

    // declaration of pointer
    //  int age=20;
    //  int *ptr = &age;

    // array as a pointer
    // int i;
    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int j = 0; j < 5; j++)//transversing array
    // {
    //     int *ptr = &arr[j];
    //     printf("%d\n", *ptr);
    // }

    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *arr;
    *arr = &a[9];
    function(a[9], 9);
}