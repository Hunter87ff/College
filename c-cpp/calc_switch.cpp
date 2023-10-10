//wap  to find the addition, multiplication, division of two numbers according to user's choice usig switch case!

#include <stdio.h>
int main(){
	int n1, n2;
	char c;
	printf("Choose your operation :-\na : Addition\nm : Multiplication\nd : Division\n");
	scanf("%c", &c);
	switch(c){
		case 'a':
			printf("Enter Two Numbers : ");
			scanf("%d%d", &n1, &n2);
			printf("The Addition Of %d and %d is : %d", n1, n2, n1+n2);
			break;
		case 'm':
			printf("Enter Two Numbers : ");
			scanf("%d%d", &n1, &n2);
			printf("The Multiplication Of %d and %d is : %d", n1, n2, n1*n2);
			break;
		case 'd':
			printf("Enter Two Numbers : ");
			scanf("%d%d", &n1, &n2);
			printf("The Division Of %d and %d is : %d", n1, n2, n1/n2);
			break;
		default:
			printf("Please choose a valid option!!");
	}
	return 0;
}


