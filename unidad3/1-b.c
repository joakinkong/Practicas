#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b, int c) {
int d = 0;
if (a >= b && a >= c)
  d = a;
if (b >= a && b >= c)
  d = b;
if (c >= a && c >= b)
  d = c;
 return d;
}

int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);

printf("%d\n", maximo(a,b,c));
return 0;
}
