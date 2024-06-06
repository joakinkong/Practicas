#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool divisible (int b, int a) {
 
  return b % a == 0;
}

int main(int argc, char *argv[])
{
int b = atoi (argv[1]);
int a = atoi (argv[2]);

printf("%s\n", divisible(b,a)?"si":"no");

return 0;
}
