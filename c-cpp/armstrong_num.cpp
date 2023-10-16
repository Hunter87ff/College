//wap to enter a number and print it is armstrong number or not 
#include <stdio.h>
#include <math.h>

int main(){
	int x, s=0;
	while(3>2){
	printf("Enter a number : ");
	scanf("%d", &x);
	int c = x, n=x, l=0;
	while(n>0){l++; n = n/10;}
	for(int i=1; i<=l; i++){int mod = x%10;s+=pow(mod, l);x = x/10;}
	if(c==s){printf("%d Armstrong\n", c);}
	else{printf("%d Not Armstrong\n", c);}
	s = 0;}
	return 87;
}
