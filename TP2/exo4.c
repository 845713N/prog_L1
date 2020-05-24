#include <stdio.h>
int main()
{
  float l,L,p,s;
  printf("largeur ? ");
  scanf("%f", &l);
  printf("longueur ? ");
  scanf("%f", &L);
  p=(l+L)*2;
  s=l*L;
  printf("perimetre = %.2f \n", p);
  printf("surface = %.2f \n", s);
  return 0;
}
