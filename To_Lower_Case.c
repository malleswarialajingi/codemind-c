#include<stdio.h>
void lower(char str[]){
    for(int i = 0; str[i] != NULL; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    lower(str);
    printf("%s",str);
}