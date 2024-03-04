# Assignment 6
### Question 1:
```cpp
#include <stdio.h>

int max(int a, int b){
    if(a>b)return a;
    return b;}

int min(int a, int b){
    if(a<b)return a;
    return b;}

int main() {
    int A[100][100]; //{{1,2,3,4},{4,5,6,7}, {7,8,9,1}, {1,2,3,4}};
    int B[100][100];
    int n=4,l=1,sum;
    scanf("%d",&n);
    scanf("%d",&l);
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n;j++){scanf("%d",&A[i][j]);}
    }
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n;j++){
            int ih,il,jh,jl;
            sum =0;
            il=max(i-l,0);
            ih=min(i+l,n-1);
            jl=max(j-l,0);
            jh=min(j+l,n-1);
            for(int k = il; k<=ih;k++){
                for(int m = jl; m<=jh;m++){
                    sum+=A[k][m];
                }
            }
            B[i][j] = sum;
        }
    }
    
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n;j++){printf("%d ",B[i][j]); }
        printf("\n");
    }
    return 0;
}
```
### Question 2:
```cpp
int main(){
    int arr[100][100], t=0;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);}}
    for(int i=0; i<n; i++){
        for(int j=0; j<n; ++j){
          	if (i==0 && j==0){continue;}
            if(arr[i][j] == 1 && i==t){printf("R");}
            if(arr[i][j] == 1 && i>t){t+=1;printf("D");}
        }
    }
    return 0;
}
```
