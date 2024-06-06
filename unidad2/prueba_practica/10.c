#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

char *numero(int b) {

int r = rand() % 37;
printf("numero rand --> %d\n", r);
printf("numero eleg --> %d\n", b);

return b == r ?"true":"false";
}

int main(int argc, char *argv[])  {

 srand(time(NULL));

int b = atoi(argv[1]);

 printf("%s\n", numero(b));
 return 0;
}

