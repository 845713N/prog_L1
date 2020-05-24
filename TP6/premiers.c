#include <stdio.h>
#define MAX 100

int premier (int n) {
  int i=1,x=1;
  //printf("\nDans fct premier. n=%d, i=%d, x=%d\n", n,i,x);
  for (i=1;((i<=n)&&(x!=0));i++) {
    //printf("Debut for\n");
    //printf("reste %d par %d =%d\n",n,i,n%i);
    if ((n%i==0) && (i!=1 && i!=n)) return 0;
    //printf("x=%d\n", x);
  }
  //printf("Fin du for : x=%d\n", x);
  return 1;
}

int main() {
  int n;
  printf("Nombres premiers inferieurs a %d :\n\n", MAX);
  for (n=2;n<MAX;n++) {
    //printf("premier(%d) = %d\n", n,premier(n));
     if (premier(n)) printf("%d", n);
     if (premier(n+1)) printf(", ");
  }
  printf("\n");
  return 0;
}
