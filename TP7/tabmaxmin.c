#include <stdio.h>
#define TAILLE 5

int main() {
  int tab[TAILLE];
  int x,i,max,min;
  for (i=0;i<=TAILLE;i++) {
    printf("x%d ? ", i);
    scanf("%d", &x);
    tab[i] = x;
  }
  max,min=tab[0];
  for (i=0;i<=TAILLE;i++) {
    if (tab[i]>max) max=tab[i];
    if (tab[i]<min) min=tab[i];
  }
  printf("Tableau : \n");
  for(i=0;i<=TAILLE;i++) {
    printf("%d\n", tab[i]);
      }
  printf("Max = %d, Min = %d\n", max,min);
  return 0;
}
