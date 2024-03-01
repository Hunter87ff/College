#include <stdio.h>
#include <math.h>
int main()
{
    int n, power, x;
    printf("Enter the number : ");
    scanf("%d", &n);
    x = log2(n);
    power = pow(2, x);
    if(n==power){printf("2 with the power of %d is equal to %d", x, n);}
    else{printf("%d is not equal to any power of 2", n);}
    return 0;
}
