//secret.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int t,nb,rep;
  char rejouer;
  do {
    printf("\nNombre max ? ");
    scanf("%d%*c", &t);
    srand(time(NULL));
    nb=rand() % t;
    do {
      printf("Devinez le nombre entre 0 et %d : ", t);
      scanf("%d%*c", &rep);
      if (rep>nb) printf("Trop grand. Reessayez\n");
      else if (rep<nb) printf("Trop petit. Reessayez\n");
    } while (rep!=nb);
    printf("\n\t**************************");
    printf("\n\t*                        *");
    printf("\n\t*                        *");
    printf("\n\t*BRAVO, VOUS AVEZ GAGNE !*");
    printf("\n\t*                        *");
    printf("\n\t*                        *");
    printf("\n\t**************************\n");
    do {
      printf("\n\n\nRejouer (o/n) ? ");
      scanf("%c%*c", &rejouer);
       } while ((rejouer!='o')&&(rejouer!='n'));
  } while (rejouer=='o');
  printf("\n\tAu revoir !\n\n");
  return 0;
}
