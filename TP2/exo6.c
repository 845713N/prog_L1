#include <stdio.h>
int main()
{
  int a,b;
  printf("a ? ");
  scanf("%d", &a);
  printf("b ? ");
  scanf("%d", &b);
  printf("avant echange: a = %d, b = %d\n", a,b);
  a+=b;
  b=a-b;
  a-=b;
  printf("apres echange: a = %d, b = %d\n", a,b);
  return 0;
}
