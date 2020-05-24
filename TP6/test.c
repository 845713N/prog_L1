#include <stdio.h>
int factorielle (int n) {
  if (n==0) return 1;
  return n*factorielle(n-1);
}
int main()
{
  int x;
  printf("x ?");
  scanf("%d", &x);
  printf("factorielle de %d = %d\n", x,factorielle(x));
  return 0;
}
