#include<stdio.h>
int n,i,j,cap,w[20],p[20],x[20],bestx[20],best=0;
void knapsack(int i,int weight,int profit){
    if(weight<=cap && profit>best){
        best=profit;
        for(j=0;j<n;j++){
            bestx[j]=x[j];
        }
    }
    if(i==n){
        return;
    }
    if(weight+w[i]<=cap){
        x[i]=1;
        knapsack(i+1,weight+w[i],profit+p[i]);
    }
    x[i]=0;
    knapsack(i+1,weight,profit);
}
int main(){
    printf("Enter no of items:\n");
    scanf("%d",&n);
    printf("Enter weight and profit of a item \n");
    for(i=0;i<n;i++){
        scanf("%d %d",&w[i],&p[i]);
    }
    printf("enter capacity:\n");
    scanf("%d",&cap);
    knapsack(0,0,0);
    printf("Max profit%d\n",best);
    printf("selected vector\n");
    for(i=0;i<n;i++){
        printf("%2d ",bestx[i]);
    }
    return 0;
}