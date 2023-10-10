//wap to teake input number of a student, and print the grade according to
// > 90%=A+, >80%&<90%=A, >70%&<80%=B+, >60%&<70%=B, >50%&<60%=C+, >40%&<50%=C, <40%=Not Grade

#include <stdio.h>
int main(){
	int a, b,c;
	float prc, total, gained  ;
	char grade[];
	printf("Enter your marks in 3 Subject : ");
	scanf("%d%d%d", &a, &b, &c);
	total = 100*3; gained=a+b+c;
	prc = (gained/total)*100;
	//printf("%f %f  %f\n", prc, total, gained);
	if(prc>=90){printf("Your Grade Is : A+");}
	else if(prc>80 & prc<90){printf("Your Grade Is : A");}
	else if(prc>70 & prc<80){printf("Your Grade Is : B+");}
	else if(prc>60 & prc<70){printf("Your Grade Is : B");}
	else if(prc>50 & prc<60){printf("Your Grade Is : C+");}
	else if(prc>40 & prc<50){printf("Your Grade Is : C");}
	else if(prc<40){grade='N';}
	
	return 0;
}


