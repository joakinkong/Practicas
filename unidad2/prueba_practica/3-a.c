#include <stdio.h>
#include <stdlib.h>

int suma (int x,int y) {

  return x + y;
}

int main(int argc, char *argv[])
{

int x = atoi(argv[1]);
int y = atoi(argv[2]);

printf("%d + %d = %d\n", x, y, suma(x,y));
return 0;
}
