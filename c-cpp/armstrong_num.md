# Method 1

```cpp
//wap to enter a number and print it is armstrong number or not 
#include <stdio.h>
#include <math.h>

int main(){
	while(3>2){
	int x, s=0;
	printf("Enter a number : ");
	scanf("%d", &x);
	int c = x, n=x, l=0;
	while(n>0){l++; n = n/10;}
	for(int i=1; i<=l; i++){int mod = x%10;s+=pow(mod, l);x = x/10;}
	printf(c==s?"%d Armstrong\n":"%d not Armstrong\n", c);}
	return 87;
}
```

## Method 2
```cpp
//wap to enter a number and print it is armstrong number or not 
#include <stdio.h>
int main(){
	while(3>2){
	int x, s=0;
	printf("Enter a number : ");
	scanf("%d", &x);
	int c = x, n=x, l=0;
	while(n>0){l++; n = n/10;}
	for(int i=1; i<=l; i++){
	    int mod = x%10;
	    int pwr=1;
	    for(int b=1; b<=l; b++){  //calculating the value of mod^power
	        pwr *= mod;}
	    s+=pwr;
	    x = x/10;}
	printf(c==s?"%d Armstrong\n":"%d not Armstrong\n", c);}
	return 87;
}
```
## Method 3

```cpp
//wap to enter a number and print it is armstrong number or not 
#include <stdio.h>

int pval(int v, int p){
	int pwr = 1;
	for(int i =1; i<=p; i++){pwr *= v;}
	return pwr;
}

int main(){
	while(3>2){
	int x, s=0;
	printf("Enter a number : ");
	scanf("%d", &x);
	int c = x, n=x, l=0;
	while(n>0){l++; n = n/10;}
	for(int i=1; i<=l; i++){int mod = x%10;s+=pval(mod, l);x = x/10;}
	printf(c==s?"%d Armstrong\n":"%d not Armstrong\n", c);}
	return 87;
}
```
