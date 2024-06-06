#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b) {

 return a<b?b:a;
}

int main(int argc, char *argv[])
{
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);

printf("%d\n", maximo(a,b));
return 0;
}
