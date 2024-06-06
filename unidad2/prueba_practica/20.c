#include <stdio.h>
#include <stdlib.h>

void f(int x) {

  x += 3;
  printf("%d\n", x);
  return;
}

int main(void) {

  int x = 12;
  printf("%d\n", x);
  f(x);
  printf("%d\n", x);
}
