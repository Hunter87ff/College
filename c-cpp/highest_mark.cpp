//write aprogram to enter 6 subject marks of a student and print his/her highest marks 

#include <stdio.h>
int main(){
    int x=0, marks[6];
    for(int i=0; i<=5; i++){
        printf("Enter  subject marks : ");
        scanf("%d", &marks[i]);
        if(marks[i]>x){
        	x=marks[i];
		}
    }
    printf("Highest Mark: %d", x);
    return 87;
}
