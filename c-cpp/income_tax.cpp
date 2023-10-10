/*wap in c to enter anual salary and display the income tax following the given table



Salary                    									Tax
> 250000                 				 					0
salary > 250,001 & salary <500,000                          10% of salary
salary > 500,001 & salary <15,00,000                        5000 + 10% of salary
salary > 1500001 & salary < 3000000                         10000 + 20% of salary
salary > 3000001 & salary < 5000000                         20000 + 20% of salary
salary > 5000000                                            30000 + 20% of salary

*/
#include <stdio.h>
int main(){
	int salary, tax;
	printf("Enter your anual salary : ");
	scanf("%d", &salary);
	if(salary<=250000){tax = 0;}
	else if(salary>=250001&salary<=500000){tax = salary*0.1;}
	else if(salary>=500001&salary<=1500000){tax = salary*0.1 + 5000;}
	else if(salary>=150001&salary<=3000000){tax = salary*0.2 + 10000;}
	else if(salary>=3000001&salary<=5000000){tax = salary*0.2 + 20000;}
	else{tax = salary*0.2 + 30000;}
	printf("Your income tax is : %d", tax);
	return 87;
}
