#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int minFound = 0, maxFound = 0;
    int minValue, maxValue;
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count == arr[i]) {
            if (!minFound || arr[i] < minValue) {
                minValue = arr[i];
                minFound = 1;
            }
            if (!maxFound || arr[i] > maxValue) {
                maxValue = arr[i];
                maxFound = 1;
            }
        }
    }
    if (minFound && maxFound) {
        printf("%d ", minValue);
        printf("%d", maxValue);
       } 
    else {
        printf("-1");
       }
}