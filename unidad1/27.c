#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

int a, b;

a = atoi (argv [1]);
b = atoi (argv [2]);

int c = a*a + b*b;
double h = sqrt(c);

printf("%d*%d + %d*%d = %d\n", a, a, b, b, c);
printf("raiz de %d = %f = hipotenusa\n", c, h);
return 0;
}
