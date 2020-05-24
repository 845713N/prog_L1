#include <stdio.h>
int main() {
  int pos=0, neg=0, nb;
  char fin;
  printf("Suite ? ");
  do {
    scanf("%d%c", &nb, &fin);
    if (nb<0) neg++;
    else if (nb>=0) pos++;
  } while (fin!='\n');
  printf("Positifs : %d\nNégatifs : %d\n", pos, neg);
  return 0;
}
