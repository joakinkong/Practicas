#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])  
{
int dia, mes;

dia = atoi (argv[1]);
mes = atoi (argv[2]);

bool f = false;

f = (mes == 4 || mes == 5);
f = f || (dia >= 20 && mes == 3);
f = f || (dia <= 20 && mes == 6);

printf("%s\n", f ? "si":"no");

return 0;
}
