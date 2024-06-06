#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int n1 = 1000;
int n2 = 1001;
int n3 = 1002;
int n4 = 1003;
int n5 = 1004;

while (n5 < 2000) {
  printf("%d %d %d %d %d\n", n1, n2, n3, n4, n5);

  n1+= 5;
  n2+= 5;
  n3+= 5;
  n4+= 5;
  n5+= 5;
  }
return 0;
}
