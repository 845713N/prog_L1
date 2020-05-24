#include <stdio.h>

int main()
{
  int a, b;
  printf("a ? ");
  scanf("%d", &a);
  printf("b ? ");
  scanf("%d", &b);
  int s=a+b,d=a-b,p=a*b,q=7/3;
  printf("somme = %d, difference = %d, produit = %d, quotient = %d\n", s,d,p,q);
  return 0;
}
