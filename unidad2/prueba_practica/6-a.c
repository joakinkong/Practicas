#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool divisor(int a, int b) {

return a & b == 0;

}

int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);

printf("%s\n", divisor(a,b) ?"es divisor":"no es divisor");
}
