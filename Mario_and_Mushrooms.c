#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 2; i <= n; i= i+3){
        if (n == i){
        printf("SMALL");
        }
    }
    for(int j = 1; j <= n; j= j+3){
        if (n == j){
        printf("HUGE");
        }
    }
    if (n%3 == 0){
        printf("NORMAL");
    }
}