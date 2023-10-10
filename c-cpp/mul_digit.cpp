#include <stdio.h>
int main() {
    int n, s=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n>0){
        s *= n%10;
        n /= 10;
    }

//	for(n; n>0; n/=10){
//		s *= n%10;
//	}
    printf("Multiplication : %d", s);
}
