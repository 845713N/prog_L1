//résout une équation de degré 1.
#include <stdio.h>
int main()
{
  int a,b,x;
  printf("ax + b = 0\n");
  printf("a = ");
  scanf("%d", &a);
  if (a!=0) {
    printf("b = ");
    scanf("%d", &b);
    x=(-b/a);
    printf("%dx + %d = 0\n", a,b);
    printf("x = %d\n", x);
  }
  else printf("a est nul, opération impossible.\n");
  return 0;
}
