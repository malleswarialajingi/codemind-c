#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]%*c",str);
    int len = strlen(str);
    int sum = 0;
    for(int i = 0; i < len ; i++){
        if(str[i] >= '1' && str[i] <= '9'){
            sum = sum + ( str[i] - '0');
        }
    }
    printf("%d",sum);
}