#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(int a, int b) {

return rand() % ((b+1)-a) + a;

}

int main(int argc, char *argv[])  {

 srand(time(NULL));

int a = atoi(argv[1]);
int b = atoi(argv[2]);

 printf("%d\n", numero(a,b));
 return 0;
}

