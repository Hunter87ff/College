/*wap to print theis pattern
*
**
***
****
*****
*/
#include <stdio.h>
int main() {
  int i, j, a,
  n = 5;
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= i; j++) {printf("*");}
    printf("\n");
  }
  return 0;
}
