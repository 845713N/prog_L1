//notede0a20_while.c
#include <stdio.h>
int main() {
  int nb=21;
  while((nb<0)||(nb>20)) {
    printf("Nombre entre 0 et 20 ? ");
    scanf("%d", &nb);
    if ((nb>=0)&&(nb<=20)) printf("Bravo !\n");
  }
  return 0;
}
