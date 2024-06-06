#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int minimo(int a, int b) {

return a<b ? a : b;
}

int main(int argc, char *argv[])
{

int a = atoi(argv[1]);
int b = atoi(argv[2]);

printf("%d\n", minimo(a,b));
return 0;
}
