#include<stdio.h>
int main()
{
    
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