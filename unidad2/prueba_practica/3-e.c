#include <stdio.h>
#include <stdlib.h>

int cuenta (int x, int y, int z) {

  return 2*x + 3*y + 4*z;
}

int main(int argc, char *argv[])
{

int x = atoi(argv[1]);
int y = atoi(argv[2]);
int z = atoi(argv[3]);

printf("2 * %d + 3 * %d + 4 * %d = %d\n", x, y, z, cuenta(x,y,z));
return 0;
}
