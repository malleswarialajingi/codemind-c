#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]%*c",str);
    int len = strlen(str);
    int cnt = 0;
    for(int i = 0; i < len ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            cnt++;
        }
    }
    if(str[0] >= 'a' && str[0] <= 'z'){
        printf("%d",cnt+1);
    }
    else {
    printf("%d",cnt);
    }
}