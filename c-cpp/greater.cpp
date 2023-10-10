//wap to enter 3 nums and print the greater one

#include <stdio.h>
int main(){
	int a, b,c;
	printf("Enter 3 nums : ");
	scanf("%d%d%d", &a, &b, &c);
	if(a>b & a>c){
		printf("%d is greater one");
	}
		else if(b>a & b>c){
		printf("%d is greater one");
	}
		else if(c>a & c>b){
		printf("%d is greater one");
	}
	return 0;
}


