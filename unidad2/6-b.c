#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_triangle (int a, int b, int c) {

  return a + b > c && 
         a + c > b &&
         b + c > a;
}
int main(int argc, char *argv[])
{
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);
  int c = atoi (argv[3]);

printf("%s\n", is_triangle (a,b,c)?"si":"no");

return 0;
}
