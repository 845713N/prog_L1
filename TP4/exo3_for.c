//notede0a20_for.c
#include <stdio.h>
int main() {
  int nb=21;
  for(;(nb<0)||(nb>20);) {
    printf("Nombre entre 0 et 20 ? ");
    scanf("%d", &nb);
  }
  printf("Bravo !\n");  
  return 0;
}
