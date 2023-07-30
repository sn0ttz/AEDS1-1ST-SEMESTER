#include <stdio.h>
#include <math.h>


int main(void) {
  float a, b, temp;
  scanf("%f", &a);
  scanf("%f", &b);
  temp = b;
  b = a;
  a = temp;
  printf("%f\n", a);
  printf("%f", b);
}