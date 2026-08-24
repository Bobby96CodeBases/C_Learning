// #include<stdio.h>
// void swap(int arr[l],int arr[r]){
//     int temp =arr[l];
//     arr[l]=arr[r];
//     arr[r]=temp;
// }
// void fun(int l,int r,int arr[]){
//     if(l>=r){
//         return;
//     }
//     swap(arr[l],arr[r]);
//     fun(l+1,r-1,arr);
// }
// int main(){
// int arr[] = {2, 3, 4, 5, 6, 7};
// int n = sizeof(arr) / sizeof(arr[0]);
// fun(0, n - 1, arr);
// for(int i = 0; i < n; i++){
//     printf("%d ", arr[i]); 
// }
// printf("\n");
// return 0;
// }
// #include<stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b; 
//     *b = temp;
// }
// void fun(int l, int r, int arr[]){
//     if(l >= r){
//         return;
//     }
//     swap(&arr[l], &arr[r]);
//     fun(l + 1, r - 1, arr);
// }
// int main(){
//     int arr[] = {2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     fun(0, n - 1, arr);
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]); 
//     }
//     printf("\n");
//     return 0;
// 
// #include<stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b; 
//     *b = temp;
// }
// void fun(int i,int n,int arr[]){
// if(i>=n/2){
// return ;
// }
// swap(&arr[i],&arr[n-i-1]);
// fun(i+1,n,arr);
// }
// int main(){
// int arr[]= {2,3,4,5,6,7};
// int n= sizeof(arr)/sizeof(arr[0]);
// fun(0,n,arr);
// for(int i=0;i<n;i++){
//     printf("%d",arr[i]);
// }
// }
// #include<stdio.h>
// int fibo(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     int sum=fibo(n-1)+fibo(n-2);
//     return sum;
// }
// int main(){
// int result =fibo(4);
// printf("%d",result);
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int m;
    printf("Enter number of queries: ");
    scanf("%d",&m);
    printf("Enter your queries: ");
    int queries[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &queries[i]);
    }
    printf("\nFrequencies:\n");
    for (int i = 0; i < m; i++) {
        int num = queries[i];
        printf("Count of %d = %d\n", num, hash[num]);
    }
}