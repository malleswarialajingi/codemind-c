#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int cnt = 0;
    for ( int i = 1; i < n; i++){
        if((arr[i-1]%2 == 0 && arr[i+1]%2 != 0) || (arr[i-1]%2 != 0 && arr[i+1]%2 == 0)){
            cnt++;
        }
    }
    printf("%d",cnt-1);
}