//write a c program to enter 20 elements of float data type and perform a bubble sort.

#include <stdio.h>

int main(){
    int i, j,n=4;
    int arr[20], temp;
    for(i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j+1]<arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
}
// 9 7 6 3 1
// 7 9 6 3 1
// 7 6 9 3 1
// 7 6 3 9 1
// 7 6 3 1 9
