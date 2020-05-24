#include <stdio.h>
int main()
{
  int n,i,ligne;
  printf("Taille ? ");
  scanf("%d", &n);
  if(n>0) {
    for(i=0;i<n;i++) printf(" ");
    printf("*\n");
  }
  for (ligne=1; ligne<n; ligne++) {
    for (i=0; i<n-ligne; i++) printf(" ");
    printf("*");
    for (i=0; i<2*ligne-1; i++) printf(" ");
    printf("*\n");
 }
 for (ligne=n-2; ligne>0; ligne--) {
    for (i=0; i<n-ligne; i++) printf(" ");
    printf("*");
    for (i=0; i<2*ligne-1; i++) printf(" ");
    printf("*\n");
  }
  if (n>1) {
    for (i=0; i<n; i++) printf(" ");
    printf("*\n");
  }
  return 0;
}
