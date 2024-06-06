tinclude <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  {
int kms = atoi(argv[1]);
double total = 1000.00;

if (kms <= 6)
  total += kms*700;

if (kms > 6 && kms <= 12) {
  total += 4200;
  total += (kms - 6)*500;
}

if (kms > 12) {
  total += 7200;
  total += (kms - 12)*250;
}


  printf("viajaste %dkms y me debes $%.2f\n", kms, total);
  return 0;
}
