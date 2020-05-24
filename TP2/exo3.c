#include <stdio.h>
#define PRIX_KM 0.3
#define RISTOURNE 0.15

int main()
{
  float nkm, p, pr;
  printf("Nombre de kilometres ? ");
  scanf("%f", &nkm);
  p=PRIX_KM*nkm;
  pr=p-(p*RISTOURNE);
  printf("prix du billet sans ristourne = %.2f\n", p);
  printf("prix du billet avec ristourne = %.2f\n", pr);
  return 0;
}
