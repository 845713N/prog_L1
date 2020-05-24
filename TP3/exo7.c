//calculatrice.c
#include <stdio.h>
int main()
{
  double a,b,r;
  char op,test;
  printf("Valeur 1 : ");
  scanf("%lf%*c", &a);
  printf("Opération : ");
  scanf("%c%*c", &op);
  printf("Valeur 2 : ");
  scanf("%lf%*c", &b);
  switch (op)
    {
    case '+': r=a+b;
      break;
    case '-': r=a-b;
      break;
    case '*': r=a*b;
      break;
    case '/': if (b==0) {
	printf("Division par 0 impossible.\n");
	r=0;
      } else r=a/b;
      break;
    default : printf("Opération non valide.\n");
      return 0;
      break;
    }
  printf("\n%.2lf %c %.2lf = %.2lf\n\n", a, op, b, r);
  return 0;
}
