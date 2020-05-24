//continue.c

#include <stdio.h>
int main() {
	char rep='t';
	do {
		printf("0: quitter\nautre: continuer\n");
		scanf("%c%*c", &rep);
	} while (rep!='0');
	return 0;
}
