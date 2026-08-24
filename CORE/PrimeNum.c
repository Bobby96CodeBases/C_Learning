#include <stdio.h>
#include <math.h>
int PrimeNum(int n)
{
    if (n <= 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else{
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n = 0;
    printf("Enter The Number: ");
    scanf("%d", &n);
    int x = PrimeNum(n);
    if (x == 0){
        printf("NOT PRIME");
    }
    else{
        printf("PRIME");
    }
}
