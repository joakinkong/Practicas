#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  
double x, y, z;

x = atof (argv [1]); 
y = atof (argv [2]); 
z = atof (argv [3]); 


printf("%s\n", x<y && y<z||x>y && y>z?"verdadero":"falso");

return 0;
}
