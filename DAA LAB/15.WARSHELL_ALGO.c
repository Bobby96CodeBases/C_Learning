#include<stdio.h>
#define MAX 20
#define INF 9999
int n,a[MAX][MAX],i,j,k;
int main(){
    printf("Enter no of vertices\n");
    scanf("%d",&n);
    printf("Enter Adjancey Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
            }
        }
    }
    printf("Transistive Closure:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}