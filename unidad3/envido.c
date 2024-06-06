#include <stdio.h>
#include <stdlib.h>


int valor(int v) {
  return v > 7 ? 0 : v;
}

int mayor_valor(int v1, int v2) {
  return v1 > v2 ? v1 : v2;
}

int envido (char p1, int v1, char p2, int v2, char p3, int v3)  {
  
int v_final1 = 0;
int v_final2 = 0;
int v_final3 = 0;
int v_envido = 0;

if (p1 == p2) 
  v_final1 = valor(v1) + valor(v2) + 20;

if (p1 == p3) 
  v_final2 = valor(v1) + valor(v3) + 20;

if (p2 == p3) 
  v_final3 = valor(v2) + valor(v3) + 20;

v_envido = mayor_valor(v_final1, v_final2) > v_final3 ? mayor_valor(v_final1, v_final2) : v_final3;


if (p1 != p2 && p1 != p3 && p2 != p3) 
  v_envido = mayor_valor(valor(v1), valor(v2)) > valor(v3) ? mayor_valor(valor(v1), valor(v2)) : valor(v3); 

return v_envido;
}
  
int main(int argc, char *argv[])
{

char p1 = argv[1][0];
int v1 = atoi(argv[2]);
char p2 = argv[3][0];
int v2 = atoi(argv[4]);
char p3 = argv[5][0];
int v3 = atoi(argv[6]);

printf("Tenes %d de envido\n", envido(p1, v1, p2, v2, p3, v3));
return 0;
}
