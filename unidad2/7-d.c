#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])  {

int n = atoi (argv[1]);
 
srand(n);

int r = rand ();

printf("%d\n",r%n);

return 0;
}
