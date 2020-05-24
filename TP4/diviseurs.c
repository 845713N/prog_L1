#include <stdio.h>
int main() {
  int n,i;
  printf("Entier ? ");
  scanf("%d", &n);
  printf("Les diviseurs de %d sont :\n", n);
  for(i=1;i<n;i++) {
    if(n%i==0) printf("\t%d\n", i);
  }
  return 0;
}
