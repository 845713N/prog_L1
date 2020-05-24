//etudiants.c

#include <stdio.h>

int main()
{
  int nbi,nbp;
  float pourcent;
  printf("Nombre d'etudiants inscrits ? ");
  scanf("%d", &nbi);
  printf("Nombre d'etudiants inscrits = %d \n", nbi);
  printf("Nombre d'etudiants presents ? ");
  scanf("%d", &nbp);
  printf("Nombre d'etudiants presents = %d \n", nbp);
  pourcent=((float)nbp/(float)nbi)*100;
  printf("Pourcentage de présence = %.1f \n", pourcent);
  return 0;
}
