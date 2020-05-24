#include <stdio.h>
int main() {
  int nb,somme=0;
  char fin;
  printf("nombres ? ");
  do {
    scanf("%d%c", &nb, &fin);
    somme+=nb;
  } while (fin!='\n');
  printf("Somme : %d\n", somme);
  return 0;
}
