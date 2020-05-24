#include <stdio.h>
int main()
{
  int a=20,b;
  b=a++;
  printf("b=%d, a=%d\n", b,a);
  a=20;
  b=++a;
  printf("b=%d, a=%d\n", b,a);
  return 0;
}
