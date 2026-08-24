#include <stdio.h>
int main()
{
    int a = 2;
    switch (a - 1) /*this switch will test for equality aginst below cases*/
    {
    case 1:
        printf("%d", 7); /*if case no satisfied then it will print value 7 or not it moves next case*/
        /*side of the case only constant should be printed and flot vales are not conisered  and no two cases be same constants*/
        break; /*if you will apply break then next will also get true and printed*/
    case 2:
        printf("%d", 8);
        break;
    default:
        printf("NONE"); /*if none of the cases satisfy then defualt it will print the following*/
    }
}