#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero() {

int num = rand() % 8 + 1;
num = num<=5 ? num : 6 ;

return num;
}

int main(int argc, char *argv[])  {

 srand(time(NULL));

 printf("%d\n", numero());
 return 0;
}

