#include<stdio.h>

int main(){
    int arr[100],x, top=0, i, size;
    char red[]="\e[1;31m", white[]="\e[0;37m", lime[]="\e[1;92m", cyan[] = "\e[1;36m";  //these are some colors j4f
    printf("%sEnter Size :%s ", cyan, white);
    scanf("%d", &size); 
    while(2>1){
    printf("1 for PUSH: \n2 for POP: \n3 for EXIT:\nEnter Your Choice : ");
    scanf("%d", &x);
    if(x==1){ //if the choice is 1 which means user choosed push operation
        if(top>=size){printf("%sStack overflow%s\n", red, white);} //if top is greater or equal to the size
        else{
            printf("Enter Element to PUSH : ");
            scanf("%d", &arr[top]);
            top++;} //increasing top because of new element 
    }
    else if(x==2){ //if the choice is 2 which means user choosed pop operation
        if(top<=0){printf("%sStack Underflow%s\n", red, white); } //if top is less or equal to 0
        else{top--;} //decreasing top besause we can't remove element just hiding //if you've less marks. dont show the result hehe
    }

    else{ //just terminate the loop
        printf("%sProcess Killed Successfully\n", lime);
        break;}
      
    printf("%sNow Stack : %s", cyan, white);
    for(i=0; i<=top-1; i++){printf("%d", arr[i]);} //just to show the current stack items
    printf("\n");
    }
}
