//unites
#include <stdio.h>
#define MAX 20

int dizaine (int n, int * tmp) {
  //retourne le chiffre des dizaines
  int i;
  for(i=0;n>=10;i++) {
    n-=10;
  }
  *tmp=n;
  return i;
}

int unite (int n) {
  //retourne le chiffre des unités
  int i;
  for(i=0;n>0;i++) {
    n--;
  }
  return i;
}

int main() {
  int nb=0,d=0,u=0,temp=0;
  printf("dizaines et unites des nombres de 0 a %d :\n", MAX);
  for (nb=0;nb<=MAX;nb++) {
    printf("%d = ",nb);
    temp=nb;
    d=dizaine(nb,&temp);
    printf("%d + ",d*10);
    u=unite(temp);
    printf("%d.", u);
    printf("\t(d = %d, u = %d)\n", d, u);
  }
  return 0;
}
