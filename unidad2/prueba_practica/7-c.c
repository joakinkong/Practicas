#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero() {

return rand()%11;

}

int main(int argc, char *argv[])
{
 srand(time(NULL));

 printf("%d\n", numero());
 return 0;
}

