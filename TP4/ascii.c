#include <stdio.h>
int main() {
  int i,j;
  for(i=0;i<256;i++) {
    for(j=0;j<32;j++) {
      printf("%c ", i);
      i++;
    }
    i--;
    printf("\n");
  }
  return 0;
}
