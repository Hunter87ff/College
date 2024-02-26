## Assignment 5
### Question 1:
```c
//Comming Soon
```





### Question 2:
```c
#include <stdio.h>

int blocksum(int *m, int n)
{
    if (n==2) return m[0] - m[1];
    while (n>2)
    {
        int nn = n/2;
        int ar[nn], br[nn];
        for (int i=0; i<nn; i++){
            ar[i] = m[i];
            br[i] = m[i+nn];
        }
        return blocksum(ar, nn) - blocksum(br, nn);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){scanf("%d", &arr[i]);}
    printf("%d", blocksum(arr, n));
    return 0;
}
```
