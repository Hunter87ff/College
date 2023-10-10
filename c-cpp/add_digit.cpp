//enter a number and print the addition of each digit of the number
#include <stdio.h>
int main() {
    int n = 123, s=0;
    while(n>0){
        s += n%10;
        n /= 10;
    }
    printf("%d", s);
}
