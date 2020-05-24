#include <stdio.h>
int main()
{
  
int sale,sucre,chaud,cher;

printf("sale ? (1/0)");
scanf("%d", &sale);
printf("sucre ? (1/0)");
scanf("%d", &sucre);
printf("chaud ? (1/0)");
scanf("%d", &chaud);
printf("cher ? (1/0)");
scanf("%d", &cher);

if (sucre) {
  if ((!sale)&&(!chaud)&&(!cher)) {
    printf("\n:-D\n");
  }
  else if ((sale) && (!chaud)) {
    printf("\n:-(\n");
  }
  else {
   printf("\n:-|\n");
  }
 }
 else if (!sucre) {
   if ((sale)&&(chaud)) {
     printf("\n:-)\n");
   }
   else if ((!sale)&&(!chaud)) {
     printf("\n:-/\n");
   }
   else {
     printf("\n:-|\n");
   }
 }
return 0;
}
