/*
A function is defined as f(x) where x is a real number. calculate the value of f(x) according to the value of x

f(x) = x+2/2x+1 ; -3 <= x <= -1
f(x) = 2x-1/x+1 ; x = 0
f(x) = 2x+1/2x-1 ; 1<= x <= 3
write a program to input x and display the result
*/
#include <stdio.h>
int main(){
	int x;
	printf("Enter a number : ");
	scanf("%d", &x);
	
	if((x >= -3)& (x <= -1)){
	printf("f(x) = %d", x+2/2*x+1);
	}
	
	else if(x==0){
	printf("f(x) = %d", 2*x-1/x+1);
	}
	
	else if((x >= 1) & (x <= 3)){
	printf("f(x) = %d", 2*x+1/2*x-1);
	}
	else{
		printf("Input out of Condition!!");
	}
	return 0;
}

