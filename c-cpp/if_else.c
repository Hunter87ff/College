//write a program to enter a number then test and print it is a positive number or negative number
#include <stdio.h>
 int main(){int a;printf("Enter a number : ");int x = scanf("%d", &a);if(x!=1){printf("Enter a valid integer"); return 0;}if(a<0){printf("Negative Number");}if(a>0){printf("Positive Number");}return 0;}
 
