//unites
#include <stdio.h>
#define MAX 20

int dizaine (int n, int * tmp, int * precis) {
  int i;
  for(i=0;n>=10;i++) {
    n-=10;
  }
  *tmp=n;
  *precis=n*10;
  return i;
}

int unite (int n) {
  int i;
  for(i=0;n>0;i++) {
    n--;
  }
  return i;
}

int main() {
  int nb=0,d=0,u=0,temp=0,precis=0;
  printf("dizaines et unites des nombres de 0 a %d :\n", MAX);
  for (nb=0;nb<=MAX;nb++) {
    temp=nb;
    d=dizaine(nb,&temp,&precis);
    u=unite(temp);
    printf("%d = dizaines = %d, unites = %d.\n", nb,d,u);
  }
  return 0;
}
