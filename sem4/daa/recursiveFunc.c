// recursive factorial
#include <stdio.h>

int fact(int n){return n==0?1:n*fact(n-1);}
int digitSum(int n){return n==0?0:n%10+digitSum(n/10);}
int dec2bin(int n){return n==0?0:n%2+10*dec2bin(n/2);}

int main(){
    int n, choise;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("1. Digit Sum\n2. Decimal to Binary\n3. Factorial\nEnter your choise : ");
    scanf("%d", &choise);
    switch (choise){
        case 1:
            printf("Sum of digits of %d is %d\n", n, digitSum(n));
            break;
        case 2:
            printf("Binary of %d is %d\n", n, dec2bin(n));
            break;
        case 3:
            printf("Factorial of %d is %d\n", n, fact(n));
            break;
        
        default:
            printf("Invalid Choise\n");
            break;
    }
}