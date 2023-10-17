//wap to store 5 element inside an array and print the addition of each element of the array
#include <stdio.h>

int main(){
	int s=0, arr[5]={2,3,4,8,7};
	for(int i=0; i<=4; i++){
		s+= arr[i];
	}
	printf("Addition : %d", s);
	return 87;
}


