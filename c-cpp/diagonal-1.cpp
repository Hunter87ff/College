//adition of diagonal elements 1,5,9


#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
    	printf("%d\n", arr[i][i]);
        sum += arr[i][i];
    }
    printf("The sum of diagonal elements is %d", sum);
    return 0;
}
/*
1 2 3
4 5 6
7 8 9
*/
