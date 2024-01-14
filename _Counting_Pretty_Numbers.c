#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for( int i = 1; i <= t; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int cnt = 0;
        for( int j = a; j <= b; j++){
            if(((j%10) == 2) || ((j%10) == 3) || ((j%10) == 9)){
                cnt++;
            }
        }
        printf("%d
",cnt);
    }
}