#include <stdio.h>

int bSearch(int arr[], int l, int h, int target) {
    if (l > h) {return -1;}
    int m = l + (h - l) / 2;
    if (arr[m] == target){return m;}
    return arr[m] > target? bSearch(arr, l, m - 1, target):bSearch(arr, m + 1, h, target);
}
 
int main() {
    int n=5, arr[]={1,2,3,4,7,9}, t;
    printf("enter the target : ");
    scanf("%d", &t);
    int result = bSearch(arr, 0, n - 1, t);
    if(result!=-1)printf("Element found at index %d\n", result);
    else printf("Element not found\n");
    return 0;
}
