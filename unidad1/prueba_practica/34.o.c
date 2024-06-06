#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  
int h = atoi (argv [1]);
float s = atof (argv [2]);

float st = h*s;

printf(" %d -> horas trabajadas\n $%.2f -> salario por hora\n $%.2f -> salario total\n", h, s, st);

return 0;
}
