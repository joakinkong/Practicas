#include <stdio.h>

int main(int argc, char *argv[])  {
  
int plata = atoi (argv[1]);

printf("billetes de $1000 -> %d\n", plata/1000);
plata = plata%1000;

printf("billetes de $500 -> %d\n", plata/500);
plata = plata%500;

printf("billetes de $200 -> %d\n", plata/200);
plata = plata%200;

printf("billetes de $100 -> %d\n", plata/100);
plata = plata%100;

printf("billetes de $50 -> %d\n", plata/50);
plata = plata%50;

printf("billetes de $20 -> %d\n", plata/20);
plata = plata%20;

printf("billetes de $10 -> %d\n", plata/10);
plata = plata%10;

return 0;
}
