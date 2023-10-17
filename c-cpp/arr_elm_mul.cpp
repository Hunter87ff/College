//wap to store 5 element inside an array and print the multiplication of each element of the array
#include <stdio.h>

int main(){
	int s=1, arr[5]={2,3,4,8,7};
	for(int i=0; i<=4; i++){
		s*= arr[i];
	}
	printf("Multiplication : %d", s);
	return 87;
}
