//adition of diagonal elements 3,5,7

#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0, r=0;
    for (int i = 2; i >= 0; i--) {
    	printf("%d\n", arr[r][i]);
        sum += arr[r][i]; r++;
    }
    printf("The sum of diagonal elements is %d", sum);
    return 0;
}

/*
1 2 3
4 5 6
7 8 9
*/
