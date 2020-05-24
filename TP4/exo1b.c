//continue +robuste
#include <stdio.h>
int main() {
  char a,b;
  do {
    printf("0: quitter\nautre: continuer\n");
    do scanf("%c", &a); while(a==' ');
    if (a!='\n') do scanf("%c", &b); while (b!='\n');
  } while (a!='0');
  return 0;
}
