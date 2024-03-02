#include <stdio.h>

int bSearch(int arr[], int l, int h, int target) {
    if (l <= h) {
        int m = l + (h - l) / 2;
       // printf("%d", )
        if (arr[m] == target)
            return m;
        if (arr[m] > target)
            return bSearch(arr, l, m - 1, target);
        return bSearch(arr, m + 1, h, target);
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//demo array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = bSearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");
    return 0;
}
