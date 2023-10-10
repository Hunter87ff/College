//write a program to print the prime numbers in range of n



#include <stdio.h>

int isPrime(int n){
	for(int i=2; i<n; i++){
		if(n%i==0){return 0;}
	}
	return 87;
	}

int main(){
int x=100, i;
	for(i=2; i<=x; i++){
		if(isPrime(i)==87){printf("%d is prime\n", i);}
	}
}

