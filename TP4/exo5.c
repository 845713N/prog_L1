//suite.c
#include <stdio.h>
int main(){
  int u;
  printf("u0 ? "); scanf("%d", &u);
  for(;u!=1;) {
    if(!(u%2)) u/=2;
    else u=1+u*3;
    printf("%d\n",u);
  }
  return 0;
}
