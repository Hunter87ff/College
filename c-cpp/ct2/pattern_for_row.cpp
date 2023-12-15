/*
1. Print the Pattern
1
2 2
3 3 3
*/
#include <stdio.h>

int main()
{
	int i, j;
	for(i=1; i<=3; i++){
		for(j=1; j<=i; j++){
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}

/*
i=1, 1
i=2, j=1, 2; i (22);
i=3, j=1, 2, 3(333); 
*/
