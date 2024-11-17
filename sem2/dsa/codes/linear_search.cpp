//write a c program to perform a linear search on an array


#include <stdio.h>

int lSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {return i;}
    }
    return -1;
}

int main(){
    int  arr[100], n, x, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");   
    scanf("%d", &x);
    int result = lSearch(arr, n, x);
    if(result == -1){
        printf("Element is not present in array");
    }
    else{
        printf("Element is present at index %d", result);
    }
    return 0;
}
