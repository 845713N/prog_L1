#include <stdio.h>
#define TAILLE 5

int main() {
  int i,j;
  char rep='o';
  float m,tot=0;
  float tab[TAILLE];
  for(i=0;(i<TAILLE)&&(rep=='o');i++) {
    printf("\nTempérature ? ");
    scanf("%f", &tab[i]);
    printf("\nContinuer (o/n) ? ");
    scanf("%*c%c", &rep);
  }
  printf("\nTempératures : \n");
  for(j=0;j<i;j++) {
    printf("Temp N°%d : %.2f\n", j,tab[j]);
    tot+=tab[j];
  }
  printf("Moyenne : ");
  m=tot/i;
  printf("%.2f\n", m);
  return 0;
}
