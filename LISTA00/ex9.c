#include <stdio.h>
#include <math.h>


int main(void) {
  float num, den, decimal;
  scanf("%f", &num);
  scanf("%f", &den);
  decimal = num / den;
  printf ("%f", decimal);
}