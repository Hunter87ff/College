//wap to sort an array from smaller number to grater number
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void main() {
    int arr[] = {5, 2, 8, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {printf("%d ", arr[i]);}
}
