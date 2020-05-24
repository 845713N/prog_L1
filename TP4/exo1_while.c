//Continue.c

#include <stdio.h>
int main() {
	char rep='t';
	while(rep!='0') {
		printf ("0: quitter\nautre: continuer\n");
		scanf("%c%*c", &rep);
		}
	return 0;
}
