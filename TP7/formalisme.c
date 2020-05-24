#include <stdio.h>
#define NVAL 5

int main() {
  int i, min, max,*p;
  int t[NVAL];
  for (p=t,i=0;p<t+NVAL;p++,i++) {
    printf("t[%d] ? ", i);
    scanf("%d", p);
  }
  max = min = *t;
  for (p=t+1; p<t+NVAL;p++) {
    max = (*p>max) ? *p : max;
    min = (*p<min) ? *p : min;
  }
  printf("max = %d, min = %d.\n", max, min);
  return 0;
}
