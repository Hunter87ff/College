#include <stdio.h>
void add(int *num);

int main(){
    int x=20;
    printf("before %d\n", x);
    add(&x);
    printf("after %d", x);
    return 0;
}
void add(int *num){
    (*num)++;
}
