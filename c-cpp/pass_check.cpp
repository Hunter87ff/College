//write a program to enter a number then test 



#include <stdio.h>
#include <string.h>

int main(){
	char pass[100], psw[]="hunter87";
	printf("enter pass : ");
	scanf("%s", &pass);
	if (strcmp(pass, psw) == 0){
		printf("Wellcome hunter");
	}else{
		printf("Invalid pass");
	}
	return 0;
}

