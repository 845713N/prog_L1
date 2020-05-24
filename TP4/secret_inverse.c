//secretinverse.c
#include <stdio.h>
#include <stdlib.h>
#define TEXTE 35
#define ESPACES 4

int longueur (int nombre)
{
  int i;
  for(i=0;nombre>0;i++) nombre/=10;
  return i;
}

void afficherFin (int nombre)
{
  int i,j;
  int lgr=(TEXTE+ESPACES+longueur(nombre))+2;
  printf("\n\t");
  for(i=0;i<lgr;i++) printf("*");
  for(j=0;j<2;j++)
    {
      printf("\n\t*");
      for(i=0;i<lgr-2;i++) printf(" ");
      printf("*");
    }
  printf("\n\t* YES, J'AI GAGNE, TON CHIFFRE ETAIT %d ! *", nombre);
  for(j=0;j<2;j++)
    {
      printf("\n\t*");
      for(i=0;i<lgr-2;i++) printf(" ");
      printf("*");
    }
  printf("\n\t");
  for(i=0;i<lgr;i++) printf("*");
  printf("\n");
}


int main()
{
  char rejouer='o';
  do
    {
      int min=0, max=0,hyp=0,combien=0;
      char rep; 
      printf("Intervalle sur lequel je dois chercher votre nombre (min max)\n\t>");
      scanf("%d%*c%d%*c", &min, &max);
      printf("Pensez a un nombre entre %d et %d. Je vais tenter de le deviner.\n", min, max);
      scanf("%*c");
      printf("Si mon hypothèse est \ttrop grande: tapez -\n");
      printf("\t\t\ttrop petite: tapez +\n");
      printf("\t\t\tla bonne: tapez =\n");
      scanf("%*c");
      hyp=min+((max-min)/2);
      do
	{
	  if ((hyp!=min)||(hyp!=max))
	    {
	      printf("%d ?", hyp);
	      scanf("%c%*c", &rep);
	      combien++;
	      switch (rep)
		{
		case '+': min=hyp+1; hyp=min+((max-min)/2);
		  break;
		case '-': max=hyp-1; hyp=min+((max-min)/2);
		  break;
		}
	    }
	  else
	    {
	      printf("Je crois que j'ai trouvé ton chiffre... C'est %d !\n", hyp);
	      rep='=';
	    }
	} while (rep!='=');
      afficherFin(hyp);
      printf("il m'a fallu %d hypotheses pour trouver.\n", combien);
      do
	{
	  printf("\tRejouer (o/n) ? ");
	  scanf("%c%*c", &rejouer);
	} while ((rejouer!='o')&&(rejouer!='n')); 
    } while (rejouer!='n');
 
}
