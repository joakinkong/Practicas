#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int a, b, c, d, e;

a = atoi (argv [1]);
b = atoi (argv [2]);
c = atoi (argv [3]);
d = atoi (argv [4]);
e = atoi (argv [5]);

int suma;

suma += a%2 == 0 ? 0: a;
suma += b%2 == 0 ? 0: b;
suma += c%2 == 0 ? 0: c;
suma += d%2 == 0 ? 0: d;
suma += e%2 == 0 ? 0: e;

//a%2>0?suma += a: suma = suma + 0;
//b%2>0?suma += b: suma = suma + 0;
//c%2>0?suma += c: suma = suma + 0;
//d%2>0?suma += d: suma = suma + 0;
//e%2>0?suma += e: suma = suma + 0;

printf("%d\n", suma);  

return 0;
}
