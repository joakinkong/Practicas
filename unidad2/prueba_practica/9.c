#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {

int a, b;
a = rand() % 6 + 1;
b = rand() % 6 + 1;

printf("%d + %d = ", a, b);
return a + b;
}

int main(int argc, char *argv[])  {

 srand(time(NULL));

 printf("%d\n", dado());
 return 0;
}

