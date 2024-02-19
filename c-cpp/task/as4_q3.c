#include <stdio.h>
#include <string.h>


int check(char arr[], char arr2[], int n){
    for(int i=0; i<n; i++){if (strchr(arr2, arr[i]) == NULL || strchr(arr, arr2[i]) == NULL){return 0;}}
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    char arr[n], arr2[n];
    for(int i=0; i<n; i++){scanf(" %c", &arr[i]);}
    for(int i=0; i<n; i++){scanf(" %c", &arr2[i]);}
    printf("%d", check(arr, arr2, n));
    return 0;
}
