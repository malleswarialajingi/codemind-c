#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]%*c",str);
    int len = strlen(str);
    char max = str[0];
    for(int i = 0; i < len ; i++){
        if(str[i] > max){
            max = str[i];
        }
    }
    printf("%c",max);
}