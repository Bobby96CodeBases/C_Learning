#include<stdio.h>
int n,i,j;
float w[20],p[20],ratio[20],cap,temp;
float x[20]={0},profit=0;
int main(){
    printf("Enter no of items\n");
    scanf("%d",&n);
    printf("Enter weight and profit of each item\n ");
    for(i=0;i<n;i++){
        scanf("%f %f",&w[i],&p[i]);
        ratio[i]=p[i]/w[i];
    }
    printf("Enter capacity:\n");
    scanf("%f",&cap);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                temp=ratio[i]; ratio[i]=ratio[j]; ratio[j]=temp;
                temp=w[i];w[i]=w[j];w[j]=temp;
                temp=p[i];p[i]=p[j];p[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(w[i]<=cap){
            x[i]=1;
            cap-=w[i];
            profit+=p[i];
        }
        else{
            x[i]=cap/w[i];
            profit+=x[i]*p[i];
            break;
        }
    }
    printf("Result vector:\n");
    for(i=0;i<n;i++){
        printf("%2f ",x[i]);
    }
    printf("\nMax profit: %2f\n",profit);
    return 0;
}