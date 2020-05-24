#include <stdio.h>
#define TAILLE 10

int main() {
  int tab [TAILLE];
  int tmp,i,j;
  for (i=0;i<TAILLE;i++) {
    printf("tab[%d] ? ", i);
    scanf("%d", &tab[i]);
  }
  printf("\n");
  
  //tri decroissant :

  for(i=0;i<TAILLE;i++) {
    for(j=0;j<TAILLE;j++) {
      if (tab[j+1]>tab[j]) {
	tmp=tab[j+1];
	tab[j+1]=tab[j];
	tab[j]=tmp;
      }
    }
  }

  //Affichage :
  
  printf("Tableau dans l'ordre decroissant : \n");
  for(i=0;i<TAILLE;i++) {
    printf("tab[%d] = %d\n",i,tab[i]);
  }
  return 0;
}
