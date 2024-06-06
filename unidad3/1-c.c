#include <stdio.h>
#include <stdlib.h>

char *posnegcero (int a) {

if (a > 0)
  return "positivo";

if (a < 0) 
  return "negativo";

if (a == 0)
  return "cero";
}

int main(int argc, char *argv[])
{
int a = atoi(argv[1]);

printf("%s\n", posnegcero(a));
return 0;
}
