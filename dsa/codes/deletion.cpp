#include<stdio.h>


int main(){
	int size, n;
	printf("Enter the size :");
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++){
		printf("Enter number : ");
		scanf("%d", &arr[i]);
	}
	printf("Enter the index to delete : ");
	scanf("%d", &n);
	for(int i=n; i<size-1; i++){
		arr[i] = arr[i+1];
	}
	for(int i=0; i<size-1; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
