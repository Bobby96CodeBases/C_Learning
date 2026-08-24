#include<stdio.h>
#define MAX 50
#define INF 9999
int main(){
    int n,dp[MAX][MAX],i,j,k;
    printf("Enter no of vertices:\n");
    scanf("%d",&n);
    printf("Enter cost Matrix(9999 for no edge):\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&dp[i][j]);
        }
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(dp[i][k]+dp[k][j]<dp[i][j]){
                    dp[i][j]=dp[i][k]+dp[k][j];
                }
            }
        }
    }
    printf("Shortest Path Matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d ",dp[i][j]);
        }
        printf("\n");
    }
    return 0;
}