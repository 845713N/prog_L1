#include <stdio.h>
#define MAX 10000


int parfait (int n) {
  int i, div=0;
  for(i=1;i<n;i++) {
    if(n%i==0) div+=i;
  }
  if (div==n) return 1;
  else return 0;
}


int main() {
  int i;
  printf("Tous les nombres parfaits inférieurs à %d :\n\n", MAX);
  for(i=1;i<MAX;i++) {
    if (parfait(i)) printf("%d\n", i);
  }
  return 0;
}
