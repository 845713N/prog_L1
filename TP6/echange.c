#include <stdio.h>

/*
PAR VALEUR :
int echange(int x, int y) {
  int z=x;
  x=y;
  y=z;
  return x;
}

int main() {
  int x,y;
  printf("x ? "); scanf("%d", &x);
  printf("y ? "); scanf("%d", &y);
  printf("Avant echange : x=%d, y=%d\n", x,y);
  printf("Après echange : x=%d, y=%d\n", echange(x,y),echange(y,x));
  return 0;
}
*/

//PAR ADRESSE: (bcp + simple et logique)
void echange(int * x, int * y) {
  int z=*x;
  *x=*y;
  *y=z;
}

int main() {
  int x,y;
  printf("x ? "); scanf("%d", &x);
  printf("y ? "); scanf("%d", &y);
  printf("Avant echange : x=%d, y=%d\n", x,y);
  echange(&x,&y);
  printf("Après echange : x=%d, y=%d\n", x,y);
  return 0;
}
