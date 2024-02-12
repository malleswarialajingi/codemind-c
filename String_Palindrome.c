#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    bool palindrome = true;
    for( int i = 0; i < len/2; i++){
        if(str[i] != str[len-i-1]){
            palindrome = false;
            break;
        }
    }
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}