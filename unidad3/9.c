#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])  {

int a = atoi(argv[1]);
int f0 = 0;
int f1 = 1;
int f = 0;
int contador = 2;

printf("0, 1");

while (contador < a) {
  f = f0 + f1;
  f0 = f1;
  f1 = f;

  contador++;
printf(", %d", f); 
}

printf("\n");
return 0;
}
