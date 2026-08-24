#include<stdio.h>
#define MAX 20
int n,a[MAX][MAX],visited[MAX]={0},q[MAX];
int i,j,start,f=0,r=-1,v;
int main(){

   printf("Enter no of vertices:\n");
   scanf("%d",&n);
   printf("Enter Adjancey Matrix\n");
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
   }
   printf("Enter starting vertex:\n");
   scanf("%d",&start);

   visited[start]=1;
   q[++r]=start;
   while(f<=r){
    v=q[f++];
    for(i=0;i<n;i++){
        if(a[v][i]==1&&!visited[i]){
            visited[i]=1;
            q[++r]=1;
        }
    }
   }
   printf("Reachable Nodes:\n");
   for(i=0;i<n;i++){
    if(visited[i]){
        printf("%d",i);
    }
   }
   return 0;

}