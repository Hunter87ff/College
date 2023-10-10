/*wap for a school, where the basic salary & experience allawance of a teacher is considered as per the qualification. accroding to the table 

category          qualification     experience      basic    		total basic
1                 primary           500             18500     		basic + exp
2                 TGT               700             25000     		basic + exp
3                 PGT               900             35000     		basic + exp
Input category and display gross, net salary following da=40% of basic , hra=20%of basic, cta = 10% of basic, pf=8.33% of baisic
gross = (basic + da + hra + cta)*12
net = basic - basic-pf
*/

#include <stdio.h>
int main(){
	int ctg, basic, da, hra, cta;
	float pf, gross, net;
	printf("Enter the category : ");
	scanf("%d", &ctg);
	if(ctg==1){
		basic = 18500; da=basic*0.4; hra=basic*0.2, cta=basic*0.1, pf=basic*0.0833;
		gross = (basic + da + hra + cta)*12+500;
		net = gross - pf;
	}
	else if(ctg==2){
		basic = 25000; da=basic*0.4; hra=basic*0.2, cta=basic*0.1, pf=basic*0.0833;
		gross = (basic + da + hra + cta)*12+700;
		net = gross - pf;
	}
	else if(ctg==3){
		basic = 35000; da=basic*0.4; hra=basic*0.2, cta=basic*0.1, pf=basic*0.0833;
		gross = (basic + da + hra + cta)*12+900;
		net = gross - pf;
	}
	else{
		printf("Invalid Category!!");
	}
	printf("Your gross salary : %f\nYour net salary : %f", gross, net);
	return 87;
}
