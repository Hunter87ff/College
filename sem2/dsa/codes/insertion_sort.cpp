#include <stdio.h>

int main(){
    int size, i, j, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size; i++){
        printf("Enter value : ");
        scanf("%d", &arr[i]);
    }
    for(i=1; i<size; i++){
        j= i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
}