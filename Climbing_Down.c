#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    if((a == b) && (x == y)){
        printf("Both");
    }
    else if((a*y) > (b*x)){
        printf("Jesse");
    }
    else {
        printf("Walter");
    }
}