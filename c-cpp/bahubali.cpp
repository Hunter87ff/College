//wap to enter a number and print it is bahubali or not
#include <stdio.h>


int main(){
	int n=153, s=0, c=n, d;
	
	while(n>0){
		d = n%10;
		s = s + d*d*d;
		n /= 10;
	}
	//printf("%d", c);
	if(s==c){
		printf("Bahubali");
	}else{
		printf("No Bahubali");
	}
}
