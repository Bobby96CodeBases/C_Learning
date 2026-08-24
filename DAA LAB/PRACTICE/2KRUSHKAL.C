#include<stdio.h>
int parent[20];
int find(int i){
    if(parent[i]!=i){
        parent[i]=i;
    }
    return i;
}
void unionSet(int i,int j){
    int a=find(i);
    int b=find(j);
    parent[a]=b;
}
int main(){
    int n,e,u[50],v[50],w[50];
    int i,j,edges=0,total=0,temp;
    int a,b;
    printf("Enter no of vertices:");
    scanf("%d",&n);
    printf("Enter no of edges:\n");
    scanf("%d",&e);
    printf("Enter edges as source destination weigth \n");
    for(i=0;i<e;i++){
    scanf("%d %d %d",&u[i],&v[i],&w[i]);
    }
    for(i=0;i<n;i++){
        parent[i]=i;
    }
    for(i=0;i<e-1;i++){
        for(j=i+1;j<e;j++){
            if(w[i]>w[j]){
                temp=u[i];u[i]=u[j];u[j]=temp;
                temp=v[i];v[i]=v[j];v[j]=temp;
                temp=w[i];w[i]=w[j];w[j]=temp;
            }
        }
    }
    printf("Edges in MST:\n");
    for(i=0;i<e&&edges<n-1;i++){
        a=find(u[i]);
        b=find(v[i]);
        if(a!=b){
            printf("%d-%d:%d\n",u[i],v[i],w[i]);
            total+=w[i];
            edges++;
            unionSet(a,b);
        }
    }
    printf("Minimum Cost = %d\n",total);
    return 0;
}