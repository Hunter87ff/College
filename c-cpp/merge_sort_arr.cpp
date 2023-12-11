//Write a program in C to merge two arrays of the same size then short it in descending order


#include<stdio.h>
int main(){
  const int n=5, ml=n*2-1;
  int arr[n] = {4, 3, 2, 1, 0};
  int arr2[n] = {9, 8, 7, 6, 5};
  int merged[ml], x=ml, sorted[ml];
  
  for(int i=0; i<n; i++){
      merged[i] = arr[i];
      merged[x] = arr2[i];
      x--;
      }
      
  for (int i = 0; i < ml; i++) {
        for (int j = 0; j < ml; j++) {
            if (merged[j] < merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
    
  for(int i=0; i<=ml; i++){printf("%d", merged[i]);}
}
