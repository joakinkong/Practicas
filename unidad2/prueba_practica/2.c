#include <stdio.h>
#include <stdlib.h>

void saludar (char  *nombre1, char *nombre2, char *nombre3) {

 printf("Hola, %s, %s y %s\n", nombre1, nombre2, nombre3);

}

int main(int argc, char *argv[])  {

char *a = argv[1];
char *b = argv[2];
char *c = argv[3];

  saludar(a,b,c);
  return 0;
}
