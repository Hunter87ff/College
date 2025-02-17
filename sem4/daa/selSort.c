// selection sort
#include <stdio.h>

int min(int arr[], int l, int h){
    if(l == h) return l;
    int m = min(arr, l + 1, h);
    return (arr[l] < arr[m]) ? l : m;
}

int *selSort(int arr[], int n){
    int i, m, temp;
    for(i = 0; i < n; i++){
        m = min(arr, i, n - 1);
        temp = arr[i];
        arr[i] = arr[m];
        arr[m] = temp;
    }
    return arr;
}

int main(){
    int n=5, i, arr[]={3,5,7,1,2};
    int *sorted = selSort(arr, n);
    for(i = 0; i < n; i++){
        printf("%d ", sorted[i]);
    }
}