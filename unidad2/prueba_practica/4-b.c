#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int absoluto(int a) {

return a  >=  0 ? a : a * -1;
}

int main(int argc, char *argv[])
{

int a = atoi(argv[1]);

printf("%d\n", absoluto(a));
return 0;
}
