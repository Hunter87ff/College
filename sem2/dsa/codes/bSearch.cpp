#include <stdio.h>

int bSearch(int arr[], int l, int h, int target) {
    if (l <= h) {
       int m = l + (h - l) / 2;
       if (arr[m] == target){
			  return m;
		    }
      else if (arr[m] > target){
        return bSearch(arr, l, m - 1, target);
		  }
      else{
        return bSearch(arr, m + 1, h, target);
		  }
    }
    return -1; 
}
 
int main() {
    int n;
	printf("Enter the size:");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter number :");
		scanf("%d", &arr[i]);
	}
    int target;
    printf("enter the target : ");
    scanf("%d", &target);
    int result = bSearch(arr, 0, n - 1, target);
    if (result != -1){printf("Element found at index %d.\n", result);}
    else{printf("Element not found in the array.\n");}
    return 0;
}
