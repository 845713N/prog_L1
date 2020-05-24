#include <stdio.h>
#define PI 3.14159
int main()
{
  float r,a,v;
  printf("rayon ? ");
  scanf("%f", &r);
  a=PI*r*r;
  v=a*4/3*r;
  printf("aire du cercle = %.2f\n", a);
  printf("volume de la sphère = %.2f\n", v);
  return 0;
}
