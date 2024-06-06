#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(int a) {

return rand() % (a + 1);

}

int main(int argc, char *argv[])  {

 srand(time(NULL));

int a = atoi(argv[1]);

 printf("%d\n", numero(a));
 return 0;
}

