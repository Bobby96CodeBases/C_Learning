#include <stdio.h>
int main()
{
  int a = 7;
  int b;
  b = ++a; /*pre increment*/
  b = a--; /*post decrement*/
  b = a++; /*post increment*/
  b = --a; /*pre decrement*/
  printf("%d", b);
  return 0;
}