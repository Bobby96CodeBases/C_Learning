#include<stdio.h>
#define MAX 20
int n , a[MAX][MAX],visited[MAX];
int i,j,count=0;
void dfs(int v){
    visited[v]=1;
    for(i=0;i<n;i++){
        if(a[v][i]!=0&&!visited[i]){
            dfs(i);
        }
    }
}
int main(){
    printf("Enter no of vertices:\n");
    scanf("%d",&n);
    printf("Enter Adjancey matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    dfs(0);
    for(i=0;i<n;i++){
        if(visited[i]) count++;
    }
    if(count==n) printf("Graph is connected");
    else printf("Graph is not connected");
    return 0;
}