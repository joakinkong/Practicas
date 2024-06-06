#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool interseccion(int a, int b, int c, int d) {

return a == c;
}

int main(int argc, char *argv[])
{
int a = atoi (argv[1]);
int b = atoi (argv[2]);
int c = atoi (argv[3]);
int d = atoi (argv[4]);

printf("%s\n", interseccion(a,b,c,d)?"no hay interseccion":"si hay interseccion");
return 0;
}
