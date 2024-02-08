#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt = 0;
    for( int i = 1; i <= n; i++){
        for( int j = 1; j <= n; j++){
            if((i+j)%2 != 0){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}