#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int a, b, c;

a = atoi (argv[1]);

printf("%s\n", a%4 == 0 && a%100 > 0 || a%400 == 0 ?"Es bisiesto":"No es bisiesto");

return 0;
}
