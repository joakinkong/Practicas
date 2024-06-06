#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int x, y;
double d;
x = atoi (argv[1]);
y = atoi (argv[2]);

d = sqrt (x*x + y*y);

printf("La distancia entre el punto (x;y)iy el punto (0;0) es %f\n", d);

return 0;
}
