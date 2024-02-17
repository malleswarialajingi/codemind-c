#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        char str[100];
        scanf("%s",str);
        int len = strlen(str);
        int cnt = 0;
        for(int j = 0; j < len ; j++){
            if(str[j] >= '1' && str[j] <= '9'){
                cnt++;
            }
        }
        if(cnt >= 1){
            printf("Yes
");
        }
        else {
            printf("No
");
        }
    }
}