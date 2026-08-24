#include <stdio.h>
#include <string.h>
int main()
{
    // write and read
    //  FILE *ptr;
    //  ptr = fopen("hello.txt", "r");
    //  if (ptr == NULL)
    //  {
    //      printf("the file does not exist! Sorry");
    //  }
    //  else
    //  {
    //      int num;
    //      fscanf(ptr, "%d", &num);
    //      printf("The value of num is %d\n", num);

    //     fscanf(ptr, "%d", &num);
    //     printf("The value of num is %d\n", num);

    //     fclose(ptr);
    // }

    // apppend
    // FILE *fptr;
    // fptr = fopen("hello1.txt", "a");
    // int num = 4567;
    // fprintf(fptr, "%d", num);
    // fclose(fptr);

    // fgetc and fputc
    // FILE *ptr;
    // ptr = fopen("hello2.txt", "a");
    // // char c = fgetc(ptr);
    // // printf("%c", c);
    // fputc('c', ptr);

    // end of file :EOF
    // char ch;
    // FILE *ptr;
    // ptr = fopen("hello.txt", "r");
    // while (1)
    // {
    //     ch = fgetc(ptr);
    //     printf("%c", ch);
    //     if (ch == EOF)
    //     {
    //         break;
    //     }
    // }

    // PRACTICE SET
    // 1
    // WRITE A PROGRAM TO READ THREE INTEGERS FROM A FILE
    // FILE *ptr;
    // ptr = fopen("problem1.txt", "r");
    // int n1, n2, n3;
    // fscanf(ptr, "%d %d %d \n", &n1, &n2, &n3);
    // printf("The value are %d %d %d \n", n1, n2, n3);
    // fclose(ptr);

    // 2
    // wite a multiplication table in a file
    // FILE *ptr;
    // int n = 0;
    // printf("Enter the table number:\n");
    // scanf("%d", &n);
    // ptr = fopen("table.txt", "w");
    // for (int i = 1; i <= 10; i++)
    // {
    //     fprintf(ptr, "%d", n * (i));
    //     fprintf(ptr, "%c", '\n');
    // }

    // 3
    // WRITE A PROGRAM TO READ TEXT FILE CHARACTER BY CHARATCER
    // AND WRITE ITS CONTEXT TWICE IN SEPERATE FILE
    // char ch;
    // FILE *ptr;
    // FILE *ptr1;
    // ptr = fopen("hello.txt", "r");
    // ptr1 = fopen("hello1.txt", "a");
    // while (1)
    // {
    //     ch = fgetc(ptr);
    //     if (ch == EOF)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         fprintf(ptr1, "%c", ch);
    //         fprintf(ptr1, "%c", ch);
    //         printf("%c", ch);
    //     }
    // }

    // 4
    // TAKE NAME AND SALARY OF TWO EMPLOYEE AS INPUT FROM USER AND WRITE THEM TO A TEXT FILE IN THE FOLLOWING FORMAT:
    // FILE *ptr;
    // ptr = fopen("hello4.txt", "w");
    // char name1[34], name2[34];
    // int salary1, salary2;
    // printf("Enter employee name:\n");
    // scanf("%s", &name1);
    // printf("Enter employee salary:\n");
    // scanf("%d", &salary1);
    // printf("Enter employee name:\n");
    // scanf("%s", &name2);
    // printf("Enter employee salary:\n");
    // scanf("%d", &salary2);

    // fprintf(ptr, "%s\t", name1);
    // fprintf(ptr, "%d", salary1);
    // fprintf(ptr, "%c\n", '\n');
    // fprintf(ptr, "%s\t", name2);
    // fprintf(ptr, "%d", salary2);
    // fprintf(ptr, "%c\n", '\n');

    // 5
    // WRITE A PROGRAM TO MODIFY A FILE CONTANING AN INTEGER TO DOUBLE ITS VALUE
    FILE *ptr;
    int num;
    ptr = fopen("integr.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("integr.txt", "w");
    int dnum = 2 * num;
    fprintf(ptr, "%d", dnum);
    fclose(ptr);

    return 0;
}