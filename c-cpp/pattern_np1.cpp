/*wap to print theis pattern
*
**
***
*/
#include <stdio.h>
int main() {
  int i, j, a,
  n = 5;
  for(i = 0; i <= n; i++) {
    a = 1;
    for(j = 1; j <= i; j++) {
      printf("*");
      a++;
    }
    printf("\n");
  }
  return 0;
}
