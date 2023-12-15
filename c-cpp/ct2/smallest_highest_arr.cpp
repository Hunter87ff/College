//Develop a program in C to find the largest and smallest elements in an array

#include <stdio.h>
int main(){
    int largest=0, smallest=0, arr[6]={3,5,6,1,4,8};
    for(int i=0; i<=5; i++){
        if(arr[i]>largest){
        	largest=arr[i];
		}
	}
	int teml = largest;
	for(int i=0; i<=5; i++){
		if(arr[i]<teml){
			teml=arr[i];
			smallest = teml;
		}
	}
    printf("Largest : %d\n", largest);
    printf("Smallest : %d\n", smallest);
    return 87;
}
