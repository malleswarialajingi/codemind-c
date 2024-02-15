#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i = a; i < b; i++){
        int n = i;
        int temp = n;
        int rev = 0;
        while(n>0){
            int r = n%10;
            rev = (rev*10) + r;
            n = n/10;
        }
        if(temp == rev){
            printf("%d ",temp);
        }
    }
}