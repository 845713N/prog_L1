#include <stdio.h>
int main()
{
  int j=0,m=0,a=0;
  printf("Veuillez entrer une date de la forme JJ MM AAAA. \n");
  printf("Jour = ");
  scanf("%d", &j);  
  if ((j>0)&&(j<32)) {
    printf("Mois = ");
    scanf("%d", &m);
    if ((m>0)&&(m<13)) {      
      printf("Annee = ");
      scanf("%d", &a);
    }
    else {
      printf("Le mois %d n'existe pas. \n", m);
      return -1;
    }
  }
    else {
      printf("Le jour %d n'existe pas. \n", j);
      return -1;
    }
  printf("La date tapée est J=%d M=%d A=%d.\n", j,m,a);
  printf("\n\n\tDate : ");
  switch (m) {
  case 4: case 6: case 9: case 11:
    if (j==31) {
      printf("INCORRECTE. (j=31 impossible pour le mois %d)\n\n", m);
      return -1;
    }
    break;
  case 2:
    if (j>29) {
      printf("INCORRECTE. (j=%d impossible pour le mois 2)\n\n", j);
      return -1;
    }
    else if ((j==29) && ((a%4) || (a%100==0))) {
      printf("INCORRECTE. (j=29 impossible pour le mois 2 dans une annee non bissextile)\n\n");
      return -1;
    }
    break;
  }
  printf("CORRECTE.\n\n");

  //Partie pour afficher le jour d'après

  int j2=j+1,m2=m,a2=a;

  if((j2<1) || (j2>31)) {
    j2=01;
    m2+=1;
    if((m2<1) || (m2>12)){
      m2=01;
      a2+=1;
    }
  }
  switch (m2) {
  case 4: case 6: case 9: case 11:
    if (j2==31) {
      j2=01;
      m2+=1;
    }
    break;
  case 2:
    if(j>29) {
      j2=01;
      m2+=1;
    }
    else if ((j==29) && ((a%4) || (a%100==0))) {
      j2=01;
      m2+=1;
    }
    break;
  }

  printf("\n\nLe jour d'apres est : J=%d, M=%d, A=%d\n", j2,m2,a2);  
  return 0;
}
