#include<stdio.h>
int BS(int arr[],int size,int key){
        int low=0,high=size-1;
        while(low<=high){
        int mid = (low+high)/2;
            if(arr[mid]==key)return mid;
            else if(arr[mid]<key){
                low=mid+1;
            }
            else{high=mid-1;}
        }
        return -1;
}
int main(){
int arr[]={1,2,3,4,5};
int size= sizeof(arr)/sizeof(arr[0]);
int key=5;
    int r = BS(arr, size, key);

    if (r != -1)
        printf("Key found at index %d", r);
    else
        printf("Key not found");

    return 0;
}