//call by reference function
#include <stdio.h>
void add(int *num);  //declearation

int main(){
    int x=20;
    printf("before %d\n", x);
    add(&x);  //func called
    printf("after %d", x);
    return 0;
}
void add(int *num){   //func defination
    (*num)++;
}
