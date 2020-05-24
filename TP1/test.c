#include <stdio.h>
int main() {
float x = 3.5;
int y = 2;
float z = x/y;
printf("%2.2f / %d = %2.2f\n", x, y, z);
printf("%2.4f / %d = %2.4f\n", x, y, z);
printf("%10.2f / %d = %10.2f\n", x, y, z);
printf("%10.4f / %d = %10.4f\n", x, y, z);
 printf("%1.2f / %d = %1.4f\n", x, y, z);
return (0);
}
