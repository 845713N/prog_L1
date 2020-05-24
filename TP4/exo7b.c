//secretinverse.c
#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int hyp=-2,min=-1,max;
  char rep,rejouer;

  do {
  		hyp=-2;min=-1;
   	 	printf("Nombre maximal que je dois deviner ? ");
   	 	scanf("%d%*c", &max);
    	// max+=1;
    	printf("Pensez a un nombre entre 0 et %d. Je vais tenter de le deviner.\n", max/*-1*/);
    	scanf("%*c");
    	printf("Si mon hypothèse est \ttrop grande: tapez -\n");
    	printf("\t\t\ttrop petite: tapez +\n");
    	printf("\t\t\tla bonne: tapez =\n");
    	scanf("%*c");
    	srand(max);
    	do {
    		  while (((hyp<=min)||(hyp>=max))&&!((max==min+2)&&(min==max-2))) { 
    	  		hyp=rand() % max+1; 
    	  		}
      		if ((max==min+2)&&(min==max-2)) {
      			hyp=min+1;
				printf("Je crois que j'ai trouvé... C'est %d !", hyp);
				rep='=';
      		}
      		if (rep!='=') {
      		printf("\nrep = %c\n", rep);
			printf("min = %d, max = %d", min,max);
			printf("\n%d ? (+ = -) ", hyp);
			scanf("%c%*c", &rep);
    		}
      		switch (rep) {
      		case '+': min=hyp;
      		if (min==max-1) {
      			hyp=max;
      			printf("Je crois que j'ai trouvé... C'est %d !", hyp);
      			rep='=';
      		}
			break;
      		case '-': max=hyp;
			break;
			  }
    	} while (rep!='=');
    printf("\n\t*******************************************");
    printf("\n\t*                                         *");
    printf("\n\t*                                         *");
    if (hyp>9) printf("\n\t* YES, J'AI GAGNE, TON CHIFFRE ETAIT %d ! *", hyp);
    else if (hyp<10) printf("\n\t* YES, J'AI GAGNE, TON CHIFFRE ETAIT %d !  *", hyp);
    printf("\n\t*                                         *");
    printf("\n\t*                                         *");
    printf("\n\t*******************************************\n");
    do {
      rep=' ';
      printf("Rejouer ? (o/n) ");
      scanf("%c%*c", &rejouer);
    } while ((rejouer!='o')&&(rejouer!='n'));
  } while (rejouer=='o');
    printf("\n\tAu revoir !\n\n");
    return 0;
}
