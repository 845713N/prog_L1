#include <stdio.h>
int main() {
  float somme, somme2, taux;
  int i;
  printf("Somme ? ");
  scanf("%f", &somme);
  printf("Taux ? ");
  scanf("%f", &taux);
  somme2=somme;
  for(i=0;somme2<somme*2;i++) {
    somme2+=(somme*taux);
  }
  printf("Pour %.2f€ places a %.2f pourcents, la somme doublera au bout de %d annees\n", somme,taux,i);
  return 0;
}
