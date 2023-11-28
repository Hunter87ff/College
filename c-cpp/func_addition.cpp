#include <stdio.h>

int add(int n, int x){
    return x+n;
}

int main(){
    int a = 5, b=7;
    int z = add(a,b);
    printf("%d", z);
}
