#include <stdio.h>
#include <stdlib.h>

double promedio(double a,double b) {

return (a+b)/2;
}

int main(int argc, char *argv[])
{

int a = atoi (argv[1]);
int b = atoi (argv[2]);

printf("%.2f\n", promedio(a,b));
return 0;
}
