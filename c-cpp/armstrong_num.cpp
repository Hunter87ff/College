//wap to enter a number and print it is bahubali or not
#include <stdio.h>

int pow(int v, int l){
	int pwr=1;
	for(int i=1; i<=l; i++){
    pwr *= v;
  }
	return pwr;
}

int main(){
	int x, s=0;
	while(s>=0){	
		printf("Enter a number : ");
		scanf("%d", &x);
		int c = x, n=x, l=0;
		while(n>0){
      l++; 
      n /=10;
    }
		for(int i=1; i<=l; i++){
			int mod = x%10; 
      power = pow(mod, l);
			s += power; x/=10;}
		if(c==s){
      printf("%d Armstrong\n", c);
    }
		else{
      printf("%d Not Armstrong\n", c);
    }
    s = 0;
	}
	return 87;
}
