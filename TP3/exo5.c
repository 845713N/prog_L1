//ordonne3valeurs.c
#include <stdio.h>
int main()
{
  int x,grand,moyen,petit;
  
  printf("Nombre entier 1 ? ");
  scanf("%d", &grand);

  printf("Nombre entier 2 ? ");
  scanf("%d", &x);

  if (x>grand) {
    moyen=grand;
    grand=x;
  }
  else moyen=x;

  printf("Nombre entier 3 ? ");
  scanf("%d", &x);

  if (x>grand) {
    petit=moyen;
    moyen=grand;
    grand=x;
  }
  else if (x>moyen && x<grand) {
    petit=moyen;
    moyen=x;
  }
  else petit=x;

  printf("Grand = %d, Moyen = %d, Petit = %d.\n", grand, moyen, petit);
  return 0;
}
