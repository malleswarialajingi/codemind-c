#include<stdio.h>
void pair(int arr[] , int n){
    for(int i = 0; i < n/2; i++){
        printf("%d %d ",arr[i],arr[n-i-1]);
    }
    if(n%2 != 0){
        printf("%d 0",arr[n/2]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    pair(arr,n);
}
    