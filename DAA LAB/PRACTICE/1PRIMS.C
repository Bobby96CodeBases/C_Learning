#include<stdio.h>
#define INF 9999
int main(){
    int n,cost[20][20],visited[20]={0};
    int i,j,min,edges=0,a=0,b=0,total=0;
    printf("Enter no of vertices:");
    scanf("%d",&n);
    printf("Enter the cost matrix(0 if no edge):\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0){
                cost[i][j]=INF;
            }
        }
    }
    visited[0]=1;
    printf("Edges of MST:\n");
    while(edges<n-1){
        min=INF;
        for(i=0;i<n;i++){
            if(visited[i]){
                for(j=0;j<n;j++){
                    if(!visited[j]&&cost[i][j]<min){
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        visited[b]=1;
        total+=min;
        printf("%d-%d:%d\n",a,b,min);
        edges++;
    }
    printf("Minimum cost = %d\n",total);
    return 0;
}