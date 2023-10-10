
//wap  to enter employes name and his/her basic salary and calculate gross salary. print the name of the employe and his/her net salary
//after it's deduction based on the rules
//gross salary < 2,50,000 = NIL
//2,50,000 < gross salary < 5,00,000 -> 10%
//5,00,000 < gross salary < 9,00,000 -> 15%
//gross salary > 9,00,000 -> 25%
//da = 70% of basic, hra = 20%, ta=10%, pf=10%, ma=1000(fixed)
//gross salary = basic + da + hra + ta + pf + medical 

#include <stdio.h>

int main(){
	int basic, net, gross, da, hra, ta, pf;
	char name[]="hunter87";
	printf("Enter your Basic Salary : ");
	scanf("%d", &basic);
	da= basic*0.70;
	hra = basic*0.20;
	ta= basic*0.10;
	pf = basic*0.10;
	gross = (basic + da + hra + ta + pf + 1000) * 12; //gross gross
	if(gross < 250000){net = gross;}
	else if(gross > 250000 & gross <500000){net = gross - (gross*0.10);}
	else if(gross > 500000 & gross <900000){net = gross - (gross*0.15);}
	else if(gross > 900000){net = gross - (gross*0.25);}
	printf("Hello %s\nYour Net gross is : %d", name, net);
	return 0;
}


