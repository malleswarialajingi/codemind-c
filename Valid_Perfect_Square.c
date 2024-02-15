#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int a;
        scanf("%d",&a);
        int s = 0;
        while(s*s < a){
            s++;
        }
        if ( s*s == a){
            printf("True
");
        }
        else {
            printf("False
");
        }
    }
}