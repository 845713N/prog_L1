//alea.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int a,x,g,i,max;
  int somme=0;
  float moyenne=0;
  do {
    printf("Cb de nombres afficher ? ");
    scanf("%d", &x);
  } while (x<=0);
  printf("Max ? ");
  scanf("%d", &max);
  printf("graine ? ");
  scanf("%d", &g);
  srand(g);
  for(i=0;i<x;i++) {
    int a=rand() % (max+1);
    printf("%d\n", a);
    somme+=a;
  }
  moyenne=(float)somme/x;
  printf("\n");
  printf("Moyenne = %.2f\n", moyenne);
  return 0;
}
