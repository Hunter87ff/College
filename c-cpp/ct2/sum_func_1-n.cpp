//2. Write a user define function to return the summation of 1 to n.

#include <stdio.h>


int summation(int n){
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum = sum+i;
	}
	return sum;
}


int main()
{
	int addition = summation(5);
	printf("%d\n", addition);
	return 87;
}
