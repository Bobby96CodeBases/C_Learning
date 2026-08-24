#include<stdio.h>
int max(int a ,int b){
    return a>b?a:b;
}
int main(){
    int n,w[20],p[20],dp[50][50],cap;
    int i,j;
    printf("Enter no of items\n");
    scanf("%d",&n);
    printf("Enter weight and profit of each item\n");
    for(i=1;i<=n;i++){
        scanf("%d %d",&w[i],&p[i]);
    }
    printf("Enter capacity:\n");
    scanf("%d",&cap);

    for(i=0;i<=n;i++){
        for(j=0;j<=cap;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(w[i]<=j){
                dp[i][j]=max(p[i]+dp[i-1][j-w[i]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    printf("Max profit %d\n",dp[n][cap]);
    return 0;
}