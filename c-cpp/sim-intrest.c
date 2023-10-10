//Write a program to convert celsius to fahrenheit
//formula: f = (c*9/5) + 32

#include <stdio.h>
int main(){
    int c;
    printf("Enter Celsius. :");
    scanf("%d", &c);
    float si = (c*9.00/5.00) + 32;
    printf("%f", si);
    return 0; 
}

