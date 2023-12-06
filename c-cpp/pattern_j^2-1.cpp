
/*
0
0 3
0 3 8
0 3 8 15
0 3 8 15 24
*/
#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++){ //row
	    for(int j=1; j<=i; j++){
	        printf("%d ",j*j-1);
	    }
	    printf("\n");
    }
    return 0;
}

