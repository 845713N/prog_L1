#include <stdio.h>
#define TAXE 1.2
#define RISTOURNE 0.95
int main()
{
  int nac;
  float punitht, ptotalht, ptotalttc,pfinal;
  printf("Nombre d'articles commandes > ");
  scanf("%d", &nac);
  printf("NAC = %d\n", nac);
  printf("Prix unitaire HT > ");
  scanf("%f", &punitht);
  printf("Prix unitaire HT = %.1f\n", punitht);
  ptotalht = nac*punitht;
  ptotalttc = TAXE*ptotalht;
  printf("Prix total HT = %.2f\n", ptotalht);
  printf("Prix total TTC = %.2f\n", ptotalttc);
  if (ptotalttc>1000)
    {
      printf("Le prix total dépasse 1000.\n");
      pfinal = RISTOURNE*ptotalttc;
    }
  else
    {
      printf("Le prix total ne dépasse pas 1000.\n");
      pfinal = ptotalttc;
    }
  printf("Prix final = %.2f\n", pfinal);
  return 0;
}
