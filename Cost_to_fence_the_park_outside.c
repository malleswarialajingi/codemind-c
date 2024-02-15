#include<stdio.h>
int main(){
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int area_inside = l*b;
    int area_outside = (b+(2*w))*(l+(2*w));
    int cost = (area_outside - area_inside)*c;
    printf("%d",cost);
}