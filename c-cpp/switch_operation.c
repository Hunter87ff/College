#include<stdio.h>
#include<conio.h>
int main ()
{
	char c;
	int n1,n2,reslt;
	printf("enter your choice : press a-for addition\n press m-for multipication\n d-for division");
	scanf("%c",&c);
	switch (c)
	{
		case 'a':
		printf("enter two number");
		scanf("%d",& n1);
		scanf("%d",& n2);
		reslt = n1+n2;
		printf("the addition is%d",reslt);
		break;
        case 'm':
		printf("enter two number");
		scanf("%d",& n1);
		scanf("%d",& n2);
		reslt = n1*n2;
		printf("the multipication is%d",reslt);
        break;
		case 'd':
		printf("enter two number");
		scanf("%d",& n1);
		scanf("%d",& n2);
		reslt = n1/n2;
		printf("the division is%d",reslt);
		break;
	    default:
		printf("you have to press only a,m or d to get a result");
		}
		getch();
		return 0;
}
