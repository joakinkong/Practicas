#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  
int a = atoi (argv[1]);

printf("cos(a)**2 + sen(a)**2 = %f\n", cos(a)*cos(a) + sin(a)*sin(a));

return 0;
}
