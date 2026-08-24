// CH-9 STRUCTURES

#include <stdio.h>
#include <string.h>

// 4
//  typedef struct employee
//  {
//      int code;
//      float salary;
//      char name[10];
//  } emp;

// 1,2
// struct vector
// {
//     int i;
//     int j;
// };

// struct vector sumVector(struct vector v1, struct vector v2)
// {
//     struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
//     return v3;
// };

// 6
//  struct complexNum
//  {
//      int a;
//      int b;
//  };
//  void disComNum(complexNum cn)
//  {
//      printf("The value of complex number is %d+i%d\n", cn.a, cn.b);
//  };

// 7
//  typedef struct studentInfo
//  {
//      int rollNum;
//      char name[10];
//      int class;
//      char address[20];
//      char section[1];
//  } StdInfo;

// 8
//  struct Bankac{
//      int accNo;
//      char name[10];
//      char ifsc[12];
//      float amount;
//  };

// 9
// typedef struct Date
// {
//     int day;
//     int month;
//     int year;
// } Dt;
// int compare(struct Date d1, struct Date d2)
// {
//     if ((d1.year == d2.year) && (d1.month == d2.month) && (d1.day == d2.day))
//     {
//         return 0;
//     }
//     if (d1.year > d2.year)
//     {
//         return 1;
//     }
//     else if (d1.year < d2.year)
//     {
//         return -1;
//     }
//     else if (d1.month > d2.month)
//     {
//         return 1;
//     }
//     else if (d1.month < d2.month)
//     {
//         return -1;
//     }
//     else if (d1.day > d2.day)
//     {
//         return 1;
//     }
//     else if (d1.day < d2.day)
//     {
//         return -1;
//     }
// }

int main()
{
    // struct employee e1, e2, e3;
    // printf("enter value of code:");
    // scanf("%d", &e1.code);

    // printf("enter value of name:");
    // scanf("%s", &e1.name);

    // printf("enter value of salary:");
    // scanf("%f", &e1.salary);
    // printf("%d %s %f\n", e1.code, e1.name, e1.salary);

    // printf("\nenter value of code:");
    // scanf("%d", &e2.code);

    // printf("enter value of name:");
    // scanf("%s", &e2.name);

    // printf("enter value of salary:");
    // scanf("%f", &e2.salary);
    // printf("%d %s %f\n", e2.code, e2.name, e2.salary);

    // STRUCTURE ARRAY

    // struct employee facebook[100];
    // facebook[0].code = 100;
    // facebook[1].code = 77;
    // struct employee harry = {99, 4000000, "vijay"};
    // printf("%d %s %f\n", harry.code, harry.name, harry.salary);

    // STRUCTURE POINTER

    // struct employee e1;
    // e1.code = 567;
    // struct employee *ptr;
    // ptr = &e1;
    // // printf("%d", (*ptr).code);
    // printf("%d", ptr->code);

    // typedef

    // typedef int vijay;
    // vijay a = 44;
    // printf("%d", a);

    // emp e1;
    // emp *ptr1 = &e1;
    // e1.code = 42;
    // strcpy(e1.name, "vijay");
    // e1.salary = 4567;
    // printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);

    // PRACTICE SET

    // 1
    // CREATE A TWO DIMENSIONAL VECTOR USING STRUCTURE IN C
    // struct vector name = {1, 2};
    // printf("The value of Vector is %di+%dj", name.i, name.j);

    // 2
    // WRITE A FUNCTION "SUM OF TWO VECTOR" WHICH RETURNS THE SUM OF
    // THE TWO VECTORS PASSED TO IT THE VECTORS MUST BE TWO DIMENSIONAL .
    // struct vector v1 = {3, 1};
    // struct vector v2 = {4, 4};
    // struct vector v3 = sumVector(v1, v2);
    // printf("The Value Of Vector is %di+%dj", v3.i, v3.j);

    // 3
    // twenty integers are to be stored in memory .
    // what will you prefer array or structure
    // array

    // 4
    // use arrow operator
    // emp e1;
    // emp *ptr1 = &e1;
    // e1.code = 41;
    // strcpy(e1.name, "vijay");
    // e1.salary = 34678;
    // printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);

    // 5
    // structure represnting complex number
    // struct complexNum cn;
    // printf("\nEnter the complex number values a,b: ");
    // scanf("%d %d", &cn.a, &cn.b);
    // printf("\nThe value of complex number is %d+i%d", cn.a, cn.b);

    // 6
    // create an array of 5 complex num created in problem 5 and display
    // them with help of a display function the values must be taken as
    // an input from user
    // struct complexNum cn;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nEnter the complex number values a,b: ");
    //     scanf("%d %d", &cn.a, &cn.b);
    //     disComNum(cn);
    // }

    // 7
    // write a problem 5's structure using "typedef" keyword
    // StdInfo s1;
    // strcpy(s1.name, "vijay");
    // s1.rollNum = 41;
    // s1.class = 14;
    // strcpy(s1.address, "tps colony");
    // strcpy(s1.section, "A");
    // printf(" %s %d %d %s %s", s1.name, s1.rollNum, s1.class, s1.address, s1.section);

    // 8
    // create a structure represnting a bank account of a custmer wt fields did you use and why?
    // up

    // 9
    // write a structure capable of storing data.write a function to compare those dates .
    // Dt d1 = {12, 4, 2026};
    // Dt d2 = {12, 4, 2026};
    // // d1.day = 21;
    // // d1.month = 2;
    // // d1.year = 2025;
    // // printf("%d/%d/%d", d1.day, d1.month, d1.year);
    // //
    // printf("%d", compare(d1, d2));

    return 0;
}