#include<stdio.h>
int n,i,j,cap,temp,w[20],p[20],best=0;
float r1,r2;
float bound(int i,int weight,int profit){
    float b=profit;
    int totalw=weight;
    while(i<n && totalw+w[i]<=cap){
        totalw+=w[i];
        b+=p[i];
        i++;
    }
    if(i<n){
        b+=(float)(cap-totalw)*p[i]/w[i];
    }
    return b;
}
void knapsack(int i,int weight,int profit){
    if(weight<=cap && profit>best){
        best=profit;
    }
    if(i==n){
        return;
    }
    if(bound(i,weight,profit) <= best){
        return;
    }
    if(weight+w[i]<=cap){
        knapsack(i+1,weight+w[i],profit+p[i]);
    }
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

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            r1=(float)p[i]/w[i];
            r2=(float)p[j]/w[j];
            if(r1<r2){
                temp=p[i];p[i]=p[j];p[j]=temp;
                temp=w[i];w[i]=w[j];w[j]=temp;
            }
        }
    }
    knapsack(0,0,0);
    printf("Max profit%d\n",best);
    return 0;
}