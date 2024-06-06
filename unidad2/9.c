#include <stdio.h>
#include <stdlib.h>

int dado () {

int a = (rand()%6)+1;
int b = (rand()%6)+1;
return a+b;
}

int main(int argc, char *argv[])
{
srand(atoi(argv[1]));

printf("%d\n", dado());
return 0;
}
