//wap to test and print the entered number is divisible by 
// 5 & 8 or
// only 5 or 
//only 8 or
//not divisable

#include <stdio.h>
int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);
	if(a%5==0 & a%8==0){printf("Divisable by 5 and 8");}
	else if(a%5==0 & a%8 != 0){printf("Divisable by 5 but not 8");}
	else if(a%5!=0 & a%8 == 0){printf("Divisable by 8 but not 5");}
	else{printf("not divisable");}
	return 0;
}

