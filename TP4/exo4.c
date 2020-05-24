//multiple3.c
#include <stdio.h>
int main() {
  int max,min,mul,i;
  printf("Max ? ");
  scanf("%d", &max);
  printf("Min ? ");
  scanf("%d", &min);
  printf("Multiples de 3 compris entre %d et %d :\n", min,max);
  for(i=min;i<=max;i++) {
    if((!(i%3))&&(i!=0)) printf("%d\n", i);
  }
  return 0;
}
