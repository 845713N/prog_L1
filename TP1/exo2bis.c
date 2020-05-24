#include <stdio.h>

int main()
{
  char x1, x2;
  printf("caractere 1 ? ");
  scanf("%c%*c", &x1);
  printf("caractere 1 = %c (code ascii=%d) \n", x1,x1);
  printf("caractere 2 ? ");
  scanf("%c%*c", &x2);
  printf("caractere 2 = %c (code ascii=%d) \n", x2,x2);
  return 0;
}
  
