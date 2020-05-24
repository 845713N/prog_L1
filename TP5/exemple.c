#include <stdio.h>
int main() {
  
  int a=1; int b=2;
  printf("a = %d, b = %d, * p = ?, * q = ?.\n", a,b);
  int * p = &a;
  printf("a = %d, b = %d, * p = %d, * q = ?.\n", a,b,*p);
  int * q = p;
  printf("a = %d, b = %d, * p = %d, * q = %d.\n", a,b,*p,*q);
  a = 3;
  printf("a = %d, b = %d, * p = %d, * q = %d.\n", a,b,*p,*q);
  b = *q+10;
  printf("a = %d, b = %d, * p = %d, * q = %d.\n", a,b,*p,*q);
  return 0;
}
