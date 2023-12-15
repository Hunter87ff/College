//16. Write a program in C to find the reverse of an array

#include<stdio.h>

int main(){
	//            0 1 2 3 4
	int arr[5] = {2,3,6,7,8};
	int arr2[5], j=0;

	for(int i=4; i>=0; i--){
		arr2[j] = arr[i];
		printf("%d", arr[j]);
		j++;
	}
	printf("\n");
	for(int i=0; i<5; i++){
		printf("%d", arr2[i]);
	}
}
/*
2, 3, 4, 6, 7, 8
8, 7, 6, 4, 3, 2
*/



/*Method 2
#include<stdio.h>
int main(){
  int arr[5] = {3, 4, 6, 7, 8}, arr2[5], x=0;
  for(int i=4; i>=0; i--){
    arr2[x] = arr[i];
    x++;
  }
  printf("Reversed array values : ");
  for(int i=0; i<=4; i++){
    printf("%d", arr2[i]);
  }
}
*/
