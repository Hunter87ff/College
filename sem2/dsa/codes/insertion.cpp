#include<stdio.h>

int main(){
	int arr[100], size, n;
	printf("Enter the size :");
	scanf("%d", &size);
	for(int i=0; i<size; i++){
		printf("Enter number : ");
		scanf("%d", &arr[i]);
	}
	printf("Enter the index : ");
	scanf("%d", &n);
	for(int i=size-1; i>=n; i--){
		arr[i+1] = arr[i];
	}
	printf("Enter the value : ");
	scanf("%d",&arr[n]);
	
	for(int i=0; i<=size; i++){
		printf
		("%d", arr[i]);
	}
}
