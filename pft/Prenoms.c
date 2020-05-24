/*


			        _________________________
			       /ZZZZZZZZZZZZZZZZZZZZZZZZ/
			      /ZZZZZZZZZZZZZZZZZZZZZZZZ/|
			     /ZZZZZZZZZZZZZZZZZZZZZZZZ/||
			    /ZZZZZZZZZZZZZZZZZZZZZZZZ/ ||
			   /ZZZZZZZZZZZZZZZZZZZZZZZZ/  ||
			   ||  ||                 ||   ||
			   ||  ||                 ||   ||
			   ||  ||_________________||___||
			   ||  /		  ||    /
			   || /   CODE BY B45713N ||   /
			   ||/____________________||__/
			  2222222222222222222222222222
			 2222222222222222222222222222
			2222222222222222222222222222
			


*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXCLASSE 50
#define MAXPRENOM 16

char classe[MAXCLASSE] [MAXPRENOM];

void init() 
{
  int i;
  for(i=0;i<MAXCLASSE;i++) classe[i][0] = '\0';
}

void afficherMenu() 
{
  printf("\t#################################");
  printf("\n\t# C : Creer un prenom\t\t#\n");
  printf("\t# D : Detruire un prenom\t#\n");
  printf("\t# A : Afficher tous les prenoms\t#\n");
  printf("\t# Q : Quitter\t\t\t#\n");
  printf("\t#################################\n");
  printf("\t> ");
}

char choixClavier() 
{
  char choix;
  scanf("%c%*c",&choix);
  return choix;
}

void prenomClavier(char * prenom) 
{
  scanf("%s", prenom);
}

int cleDisponible() 
{
  int i;
  for(i=0;i<MAXCLASSE;i++) 
  {
    if(classe[i][0]=='\0') return i;
  }
  return -1;
}

int placeDispo()
{
	int i,x=0;
	for(i=0;i<MAXCLASSE;i++)
	{
		if(classe[i][0]=='\0') x++;
	}
	if(x!=0) return x;
	else return -1;
}

int dePrenomACle (char * prenom) 
{
  int i;
  for(i=0;i<MAXCLASSE;i++) 
  {
    if(strcmp (prenom,classe[i])==0) return i;
  }
  return -1;
}

void afficherPrenoms() 
{
  int i;
  printf("\n");
  if(placeDispo()!=MAXCLASSE)
  {
  	printf("Liste des prénoms :\n\n");
  	for(i=0;i<MAXCLASSE;i++) 
  	{
    	if(classe[i][0]!='\0') printf("<%s>\n", classe[i]);
  	} 
  	printf("\n");
  }
  else printf("Aucun prénom encore enregistré.\n");
}

void creerPrenom () 
{
  int cle=cleDisponible();
  int place=placeDispo();
  printf("\n");
  if (cle!=-1) 
  {
  	if(place!=-1) printf("Nombre de prénoms disponibles : %d.\n", place);
    printf("Prenom a creer ?\n ");
    printf("\t> ");
    prenomClavier(classe[cle]);
    printf("Le prenom <%s> a bien été créé.\n", classe[cle]);
  }
  else printf("Plus de place disponible.\n");
  scanf("%*c%*c");
}

void detruirePrenom() 
{
	int cle;
	char p[1][MAXPRENOM], * prenom=p[0];
	printf("\n");
	if(placeDispo()!=MAXCLASSE)
	{
		afficherPrenoms();
		printf("Prénom à détruire ?\n");
		printf("\t> ");
		prenomClavier(&p[0][0]);
		cle=dePrenomACle(prenom);
		if (cle!=-1)
		{
			classe[cle][0]='\0';
			printf("Le prénom <%s> a bien été supprimé.\n", prenom);
		}
		else printf("Le prénom <%s> n'existe pas.\n", prenom);
	}
	else printf("Aucun préniom n'est enregistré.\n");
	scanf("%*c%*c");

}

int main() 
{
  init();
  char choix;
  do 
  {
    	printf("\n");
    	afficherMenu();
    	choix=choixClavier();
    	switch (choix) 
    	{
    	case 'c' : creerPrenom();
    	  break;
    	case 'd' : detruirePrenom();
    	  break;
    	case 'a' : afficherPrenoms();
    	  break;
    	case 'q' : printf("Au revoir !\n\n");
    	  break;
    	default : printf("erreur, %c invalide.\n", choix);
    	  break;
    	}
      
   } while (choix!='q');
  return 0;
}
