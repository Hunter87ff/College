//wap to enter 4 nums and print the greater number

#include <stdio.h>
int main(){
	int a, b,c, d;
	printf("Enter 4 nums : ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a>b & a>c & a>d){
		printf("%d is greater number", a);
	}
		else if(b>a & b>c & b>d){
		printf("%d is greater number", b);
	}
		else if(c>a & c>b & c>d){
		printf("%d is greater number", c);
	}
		else if(d>a & d>b & d>c){
		printf("%d is greater number", d);
	}
	return 0;
}
