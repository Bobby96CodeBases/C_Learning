#include <stdio.h>
int main()
{
    // PATTERNS

    // 1Q
    //     * * * *
    //     * * * *
    //     * * * *
    //     * * * *

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf(" \n");
    // }

    // 2Q
    //     *
    //     * *
    //     * * *
    //     * * * *
    //     * * * * *

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf(" \n");
    // }

    // 3Q
    //   1
    //   1 2
    //   1 2 3
    //   1 2 3 4
    //   1 2 3 4 5

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf(" \n");
    // }

    // 4Q
    //   1
    //   2 2
    //   3 3 3
    //   4 4 4 4
    //   5 5 5 5 5

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf(" \n");
    // }

    // 5Q
    //   * * * * *
    //   * * * *
    //   * * *
    //   * *
    //   *

    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 6Q
    //     1 2 3 4 5
    //     1 2 3 4
    //     1 2 3
    //     1 2
    //     1

    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    // 7Q
    //              *
    //             * *
    //            * * *
    //           * * * *

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int k = 0; k <= n - i - 1; k++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 8Q
    //     * * * *
    //      * * *
    //       * *
    //        *

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // for (int i = n; i >=0; i--)
    // {
    //     for (int j = 0; j <=n - i-1; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 9Q
    //       *
    //      * *
    //     * * *
    //      * *
    //       *

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int k = 0; k <= n - i - 1; k++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for (int i = n; i >= 0; i--)
    // {
    //     for (int j = 0; j <= n - i - 1; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 10Q
    //     *
    //     * *
    //     * * *
    //     * * * *
    //     * * * * *
    //     * * * *
    //     * * *
    //     * *
    //     *

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for (int j = n - 1; j >= 0; j--)
    // {
    //     for (int k = 0; k < j; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 11Q
    //    1
    //    0 1
    //    1 0 1
    //    0 1 0 1

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     int s;
    //     if (i % 2 == 0)
    //     {
    //         s = 1;
    //     }
    //     else
    //     {
    //         s = 0;
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", s);
    //         s = 1 - s;
    //     }
    //     printf("\n");
    // }


    // 12Q
    //  1         1
    //  1 2     2 1
    //  1 2 3 3 2 1

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     int s = 2 * (n - i);
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     for (int k = 0; k < s; k++)
    //     {
    //         printf("  ");
    //     }
    //     for (int l = i; l >= 1; l--)
    //     {
    //         printf("%d ", l);
    //     }
    //     printf("\n");
    //     s = s - 2;
    // }

    // 13Q
    //  1
    //  2  3
    //  4  5  6
    //  7  8  9  10
    //  11 12 13 14 15

    // int n;
    // printf("Enter the size n: \n");
    // scanf("%d", &n);
    // int count = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", count);
    //         count++;
    //     }
    //     printf("\n");
    // }

    // 14Q
    //  A
    //  A B
    //  A B C
    //  A B C D

    // int n;
    // printf("ENTER THE NUMBER:\n");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ", ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }

    // 15Q
    //  A B C D
    //  A B C
    //  A B
    //  A

    // int n;
    // printf("ENTER THE NUMBER TIMES :\n");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = n; j > i; j--)
    //     {
    //         printf("%c ", ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }

    // 16Q
    //  A
    //  B B
    //  C C C
    //  D D D D

    // int n;
    // printf("ENTER THE NUMBER TIMES:\n");
    // scanf("%d", &n);
    // char ch = '@';
    // for (int i; i < n; i++)
    // {
    //     ch++;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ", ch);
    //     }
    //     printf("\n");
    // }

    // 17Q
    //         A
    //       A B A
    //     A B C B A
    //   B A C D C A B

//     int n;
//     printf("ENTER THE NUMBER TIMES:\n");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < i; k++)
//         {
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }