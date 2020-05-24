//notede0a20_dowhile.c
#include <stdio.h>
int main() {
  int nb=21;
  do {
    printf("Nombre entre 0 et 20 ? ");
    scanf("%d", &nb);
  }while ((nb<0)||(nb>20));
  printf("Bravo !\n");  
  return 0;
}
