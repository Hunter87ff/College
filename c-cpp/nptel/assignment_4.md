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
