#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

int a;

a = atof (argv [1]);

printf("cos(a) * cos(a) + sin(a) * sin(a) =\n");
printf("%f * %f + %f * %f = %f\n", cos(a), cos(a), sin(a), sin(a), cos(a) * cos(a) + sin(a) * sin(a)); 
}

