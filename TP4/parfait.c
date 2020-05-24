#include <stdio.h>
int main() {
  int p,i,div=0,div2=0;
  printf("Nombre ? ");
  scanf("%d", &p);
  for(i=1;i<p;i++) {
    if(p%i==0) div+=i;
  }
  for(i=1;i<p;i++) {
    if(p%i==0) {
      div2+=i;
      if(div2==div) printf("%d", i);
      else printf("%d+", i);
    }
  }
  printf("=%d\n", div);
  if (div==p) printf("%d est un nombre parfait.\n", p);
  else if (div!=p) printf("%d n'est pas un nombre parfait.\n", p);
  return 0;
}
