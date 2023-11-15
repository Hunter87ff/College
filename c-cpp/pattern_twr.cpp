/*
wap to print this pattern 
    *
  *   *
*   *   *

*/
#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {  //for i in range n
        for (int j = 1; j <= n - i; j++) { printf(" ");} //for j in range n-1
        for (int k=1; k<=i; k++) {printf("* ");} //for k in range i
        printf("\n");
    }
    return 0;
}

//Method 2
// int main(){
// int n=5, v=n;
// for(int i=0; i<v; i++){
//     for(int i=n; i>0; i--){printf(" ");} //for i in range n--
//     for(int j=0; j<=i; j++){printf(" *");}//for j in range i++ 
//     n--;printf("\n");}}
