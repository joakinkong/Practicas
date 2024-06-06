#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool igualdad(int a, int b) {

return a == b;
}

int main(int argc, char *argv[])
{

int a = atoi(argv[1]);
int b = atoi(argv[2]);

printf("%d\n", igualdad(a,b));
return 0;
}
