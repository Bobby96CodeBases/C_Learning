#include<stdio.h>
#define MAX 20
#define INF 9999
void printPath(int pred[],int source,int j) {
    if (source == j)
        return;

    printPath(pred,source, pred[j]);
    printf(" -> %d", j);
}
int main(){
    int n,a[MAX][MAX],visited[MAX]={0},dist[MAX],pred[MAX];
    int i,j,u=0,source,count,min;
    printf("Enter no of Vertices:");
    scanf("%d",&n);
    printf("Enter Adjacency matrix (0 if no edge): \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Source Vertex:\n");
    scanf("%d",&source);
    for(i=0;i<n;i++){
        dist[i] = a[source][i];
        if(dist[i] == 0 && i != source){
            dist[i] = INF;
        }
        pred[i] = source;
    }
    dist[source]=0;
    visited[source]=1;
    for(count=1;count<n;count++){
        min=INF;
        for(i=0;i<n;i++){
            if(!visited[i] && dist[i]<min){
                min=dist[i];
                u=i;
            }
        }
        visited[u]=1;
        for(i=0;i<n;i++){
            if(!visited[i] && a[u][i]!=0&& dist[u]!=INF && dist[u]+a[u][i]<dist[i]){
                dist[i]=dist[u]+ a[u][i];
                pred[i]=u;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i!=source){
            if(dist[i]==INF)
                printf("\nNo path from %d to %d\n",source,i);
            else{
                printf("\nDistance from %d to %d = %d\n",source,i,dist[i]);
                printf("Path: %d", source);
                printPath(pred,source,i);
            }
        }
    }
    return 0;

}