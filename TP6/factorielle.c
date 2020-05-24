#include <stdio.h>

int factorielle (int n) {
  if (n<13) {
    if (n==0) return 1;
    return n*factorielle(n-1);
  }
  else {
    printf("Nombre trop grand pour que le C soit précis.\n");
    return 0;
  }
}

int main()
{
  int x,i;
  printf("x ?");
  scanf("%d", &x);
  if (!factorielle(x)) return 0;
  printf("factorielle de %d = ",x);
  for(i=x;i>1;i--) {
    printf("%d*",i);
  }
  printf("1 = %d\n", factorielle(x));
  return 0;
}
