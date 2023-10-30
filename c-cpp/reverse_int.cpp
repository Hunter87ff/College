
//wap to print the reversed value of a number
#include <stdio.h>
int main() {
    int x = 12, r = 0;
    while (x > 0) {
        int d = x % 10;    
        r = r * 10 + d; 
        x /= 10;
    }
    printf("reversed value of x: %d\n", r);
    return 0;
}
