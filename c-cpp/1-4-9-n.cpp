//wap to print following series 1,4,9,....n
/*
start from 1 + nearest odd num then change the value 
*/

#include <stdio.h>

int main(){
	int v=1, x=20, sum=0;
	for(int i=2; i<=x; i++){
		if(i%2 != 0){sum += v, printf("%d ", v);v+=i;
		if(v>x){printf("\nSum : %d", sum); return 0;}
		}
	}
	
}

