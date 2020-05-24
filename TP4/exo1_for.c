//continue.c

#include <stdio.h>
int main()
{
  char rep='t';
  int i=0;
  for(i=0;i<2;i++) {
    printf("0: quitter\nautre: continuer\n");
    scanf("%c%*c", &rep);
    if (rep=='0') i=2;
    else i=0;
  }
  return 0;
}
