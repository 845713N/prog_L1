//résout une équation du second degré.
#include <stdio.h>
#include <math.h>
int main()
{
  double a,b,c,x1,x2,delta;
  printf("\tax^2 + bx + c = 0\n");
  printf("a = ");
  scanf("%lf", &a);
  if (a!=0) {
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    delta= (b*b)-4*a*c;
    if(delta>0) {
      x1=(-b + (sqrt(delta))/2.*a);
      x2=(-b - (sqrt(delta))/2.*a);
      printf("x1 = %.2lf\n", x1);
      printf("x2 = %.2lf\n", x2);
    }
    else if(delta==0) {
      x1=(-b/2*a);
      printf("x = %.2lf\n", x1);
    }
    else if(delta<0) {
      printf("Delta negatif, pas de racines réelles.\n");
    }
  }
  else printf("a est nul, calcul impossible.\n");
  return 0;
}
