## Assignment 5
### Question 1:
```c
#include <stdio.h>
int f(int n, int s){
    if (n==1) return s;
    s+=1;
    if (n%2!=0) return f(3*n+1, s);
    else return f(n/2, s);
}
int main(){
    int n;
    scanf("%d", &n);
    int x = f(n, 0);
    printf("%d", x);
    return 0;
}
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
