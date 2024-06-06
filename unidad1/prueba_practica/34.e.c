#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  
double t = atof (argv[1]);

printf("sen(2t) + sen(3t) = %f\n", sin(2*t) + sin(3*t));

return 0;
}
