#include<stdio.h>
#define MAX 20
#define INF 9999
int main(){
    int n, a[MAX][MAX],visited[MAX]={0};
    int i,j,edges=0,min,u=0,v=0,cost=0;
    printf("Enter no of Vertices:");
    scanf("%d",&n);
    printf("Enter Adjacency matrix (0 if no edge): \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    visited[0]=1;
    printf("Edges in MST:\n");
    while(edges<n-1){
        min=INF;
        for(i=0;i<n;i++){
            if(visited[i]){
                for(j=0;j<n;j++){
                    if(!visited[j] && a[i][j] != 0 && a[i][j] < min){
                        min=a[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
    visited[v]=1;
    printf("%d->%d=%d\n",u,v,min);
    cost+=min;
    edges++;
    }
    printf("MInimum Cost =%d\n",cost);
    return 0;
}