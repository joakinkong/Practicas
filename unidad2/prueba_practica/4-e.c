#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double promedio(double a, double b) {

return (a + b)/2;
}

int main(int argc, char *argv[])
{

double a = atof(argv[1]);
double b = atof(argv[2]);

printf("%.2f\n", promedio(a,b));
return 0;
}
