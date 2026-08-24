#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int n = 5;
    // int *arr;
    //*arr = (int *)malloc(n * sizeof(int));

    // malloc
    //  float n = 5;
    //  float *arr;
    // *arr = (float *)malloc(n * sizeof(float));
    // *arr[0] = 33;
    // *arr[1] = 39;
    // *arr[2] = 53.567;
    // *arr[3] = 36;
    // *arr[4] = 30;
    // *arr[5] = 31;

    // printf("%.2f\n",*arr[0]);
    // printf("%.2f\n",*arr[1]);
    // printf("%.2f\n",*arr[2]);
    // printf("%.2f\n",*arr[3]);
    // printf("%.2f\n",*arr[4]);
    // printf("%.2f\n",*arr[5]);

    // calloc
    //  int n;
    //  int *arr;
    // *arr = (int *)calloc(n, sizeof(int));
    // *arr[0] = 3;
    // *arr[1] = 4;
    //  printf("%d",*arr[3]);//-->0
    //  printf("%d",*arr[0]);//-->3

    // free
    // int n;
    // int *arr;
    // //*arr = (int *)calloc(n, sizeof(int));
    //*arr = (int *)malloc(n * sizeof(int));
    //*arr[0] = 3;
    //*arr[1] = 4;
    // printf("%d",*arr[0]);
    // free*arr);
    // printf("%d",*arr[0]);//-->doent print beacuse it is freed

    // realloc
    //*arr = (int *)realloc*arr, 10 * sizeof(int));

    // PRACTICE SET

    // 1
    // CREATE ARRAY DYNAMICALLY ALLOCATION OF CAPABALE OF STORING 6 INTEGERS
    // int n = 6;
    // int *arr;
    // arr = (int *)malloc(n * sizeof(int));

    // 2
    // USER ENTERING VALUES OF ABOVE PROBLEM
    // int n = 6;
    // int *arr;
    // arr = (int *)malloc(n * sizeof(int));
    // printf("enter th values:");
    // for (int i = 1; i <= 6; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int j = 1; j <= 6; j++)
    // {
    //     printf("%d\n", arr[j]);
    // }

    // 3
    // SOLVE PROBLEM 1 USING CALLOC
    // int n = 6;
    // int *ptr;
    // ptr = (int *)calloc(n, sizeof(int));
    // ptr[6] = 34;
    // printf("%d", ptr[6]);

    // 4
    // CREATE AN ARRAY DYNAMICALLY CAPABLE OF STORING OF 5 INTEGERS .NOE USE REALLOC SO
    // THAT IT CAN NOW STORE 10 INTEGERS
    // int n = 5;
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));
    // ptr = (int *)realloc(ptr, 10 * sizeof(int));
    // ptr[10] = 34;
    // printf("%d", ptr[10]);

    // 5
    // MULTIPLICATION TABLE OF 7 UPTO 10.USE REALLOC TO MAKE IT
    // STORE 15 NUMBERS (7X15)
    // int n = 7;
    // int m;
    // printf("enter size of table :");
    // scanf("%d", &m);
    // int *ptr;
    // ptr = (int *)malloc(m * sizeof(int));
    // for (int i = 1; i <= m; i++)
    // {
    //     printf("%dx%d=%d\n", n, i, n * i);
    // }
    // ptr = (int *)realloc(ptr, 15 * sizeof(int));

    // 6
    // SOLVE PROBLEM 4 USING CALLOC
    // int n = 5;
    // int *ptr;
    // ptr = (int *)calloc(n, sizeof(int));
    // ptr = (int *)realloc(ptr, 10 * sizeof(int));
    // ptr[10] = 34;
    // printf("%d", ptr[10]);

    return 0;
}