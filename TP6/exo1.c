#include <stdio.h>
#include <math.h>
int carre (int n) {
  if (sqrt(n)==(int)sqrt(n)) return 1;
  else return 0;
  /*  if (n==5) return 1;
      else return 0;*/
  
}
int main() {
  int x;
  printf("n ? ");
  scanf("%d", &x);
  printf("%d ", x);
  if (carre(x)) printf("carre.\n");
  else printf("pas carre.\n");
  return 0;
}
