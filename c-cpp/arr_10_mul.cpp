//write a program to store 10 element inside an array and print the multiplication 

#include <stdio.h>
int main(){
    int x=1, arr[10]={6, 87, 1, 5, 6, 1, 2, 4, 9, 0};
    for(int i=0; i<=9; i++){
    	x *= arr[i];
    }
    printf("Multiplication of 10 element : %d", x);
    return 87;
}
