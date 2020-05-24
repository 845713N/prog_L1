#include <stdio.h>
int main() {
  int table,i;
  printf("Quelle table afficher ? ");
  scanf("%d", &table);
  printf("\n\n");
  for(i=0;i<11;i++) {
    printf("\t%d x %d = \t%d\n", table,i,table*i);
  }
  return 0;
}
