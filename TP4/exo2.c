//hellorepet.c
#include <stdio.h>
int main()
{
  int nb,i,j;
  printf("entier positif ? ");
  scanf("%d", &nb);
  for(i=0;i<nb;i++) {
    for(j=0;j<i;j++) {
      printf(" ");
    }
    printf("hello\n");
  }
  return 0;
}
