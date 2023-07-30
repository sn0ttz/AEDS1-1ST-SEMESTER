#include <stdio.h>
#include <math.h>

float calchipot(float a, float b){
  float hipo;
  hipo = pow(a,2) + pow(b, 2);
  hipo = sqrt(hipo);
  return hipo;
}

int main(void) {
  float catA, catB, hipotenusa;
  scanf("%f", &catA);
  scanf("%f", &catB);
  hipotenusa = calchipot(catA, catB);
  printf("%.2f", hipotenusa);
  return 0;
}