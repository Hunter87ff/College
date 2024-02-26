## Assignment 4
### Question 1:
```c
#include<stdio.h>

int main() {
    int arr[20], n, sum = 0;
    float mean;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];}
    mean = (float)sum / n;
    sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= mean) {sum += arr[i];}
    }
    printf("%d", sum);
    return 0;
}
```
### Question 2:
```c
//2 array with integers. find the smallest element in the first array which is also available in the second array. else return -1.

#include <stdio.h>


int element(int arr1[], int arr2[], int n, int m){
    int min = 100000;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                if(arr1[i] < min){
                    min = arr1[i];
                }
            }
        }
    }
    if(min == 100000){
        return -1;
    }
    return min;
}
int main(){
    int arr1[20], arr2[20];
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }
    
    printf("%d", element(arr1, arr2, n, m));
    return 0;
}
```
