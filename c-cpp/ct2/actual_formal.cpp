//3. Write a user define function to return the summation of 1 to n.

#include <stdio.h>


int summation(int n){ //formal parameter
	n= n+1;
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum = sum+i;
	}
	return sum;
}


int main()
{
	int val = 5;
	int addition = summation(val); //actual parameter
	printf("%d\n", addition);
	return 87;
}

/*Actual param       

1. actual params. are used to call a function
2. changing it's value will affect formal param.



Formal parameter

1. Formal params. accept the actual param as an input
2. if it's not a pointer then any changes won't affect the actual param
*/
