#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    scanf("%[^
]%*c",str1);
    printf("%s",str1);
}