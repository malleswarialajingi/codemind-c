#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b,r;
    scanf("%d%d",&a,&b);
    for(int i = a; i <= b; i++){
        int num = i;
        bool self_dividing = true;
        while(num>0){
            r = num%10;
        if( r == 0 || i%r != 0){
            self_dividing = false;
            break;
        }
            num = num/10;
        }
        if(self_dividing){
        printf("%d ",i);
      }
   }
      return 0;  
}