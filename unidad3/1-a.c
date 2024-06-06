#include <stdio.h>
#include <stdlib.h>

int valor_abs(int a) {
 
int b = 0;
if (a > 0)
 b = a;

else 
 b = a*(-1);

return b;
}



int main(int argc, char *argv[])
{
  int a = atoi(argv[1]);

printf("%d\n", valor_abs(a));
return 0;
}

