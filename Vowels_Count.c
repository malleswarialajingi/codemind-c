#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]%*c",str);
    int len = strlen(str);
    int cnt = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            cnt++;
        }
    }
    printf("%d",cnt);
}