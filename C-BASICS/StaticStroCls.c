#include <stdio.h>
int b; /*it is global varaiable */                                                        /*until program runs it works */
/*static varaiable automatically initialised to 0 snd it stores the value for segement */ /*it preserves the old value*/
int main()
{
    static int a = 10; /*until program runs lifetime*/ /*within the function scope*/
    /*it is called local varaiable and initilases once ,retain it value */
    a++;
    b++;
    a += 10;
    b += 10;
    printf("%d", a);
    printf("\n%d", b);
    return 0;
}