// linear search
#include <stdio.h>

int lSearch(int arr[], int n, int target){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==target)return i;
    }
    return -1;
}

int main(){
    int n=5, arr[]={7,43,8,1,6}, t;
    printf("enter the target : ");
    scanf("%d", &t);
    int result = lSearch(arr, n, t);
    if(result!=-1)printf("Element found at index %d\n", result);
    else printf("Element not found\n");
}