#include <stdio.h>
#include <stdlib.h>

double division (double x, double y) {

  return x / y;
}

int main(int argc, char *argv[])
{

double x = atof(argv[1]);
double y = atof(argv[2]);

printf("%.f / %.f = %.2f\n", x, y, division(x,y));
return 0;
}
