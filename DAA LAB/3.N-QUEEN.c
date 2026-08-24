#include<stdio.h>
#include<stdlib.h>
int n,x[20],count=0;
int place(int row,int col){
    int i;
    for(i=0;i<row;i++){
        if(x[i]==col||abs(x[i]-col)==abs(i-row)){
            return 0;
        }
    }
    return 1;
}
void nqueen(int row){
    int col,i;
    for(col=1;col<=n;col++){
        if(place(row,col)){
            x[row]=col;
        if(row==n){
            count++;
            printf("\nSolution %d\n",count);
            for(i=0;i<n;i++){
                printf("Queen %d -> column %d \n",i,x[i]);
            }
        }
        else{
            nqueen(row+1);
        }
      }
    }
}
int main(){
    printf("Enter no of Queen\n");
    scanf("%d",&n);
    nqueen(1);
    if(count==0){
        printf("\nNO solution");
    }
    return 0;
}