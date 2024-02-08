#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a = 0, b = 1, c ;
    int cnt = 0;
    while(a <= n){
        if( a == n){
            cnt++;
        }
        c = a+b;
        a = b;
        b = c;
    }
    if(cnt == 1){
        printf("True");
    }
    else {
    printf("False");
    }
}