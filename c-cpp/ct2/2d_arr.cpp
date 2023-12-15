//5. How to create 2-dimentional array in C

#include <stdio.h>

int main(){
//               ---0---   ---1---  ---2---
int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//                0 1 2    0 1 2    0 1 2

for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		printf("%d ", arr[i][j]);
	}printf("\n");}
}

/*
1 2 3
4 5 6
7 8 9
*/
