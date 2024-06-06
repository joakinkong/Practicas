#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])  {
  
srand(atoi(argv[1]));

int r = rand ();

printf("%d\n",r%11);

return 0;
}
