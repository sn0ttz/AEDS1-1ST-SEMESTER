#include <stdio.h>
//100KW = 1/7 SAL MIN ; 1KW = 1/700 salmin
#include <math.h>

int main(void) {
  float base, altura, perimetro, area, diagonal;
  scanf("%f", &base);
  scanf("%f", &altura);
  perimetro = 2*(base+altura);
  area = (base* altura);
  diagonal = pow(base,2) + pow(altura,2);
  diagonal = sqrt(diagonal);
  printf("\nPerímetro: %.2f", perimetro);
  printf("\nÁrea: %.2f", area);
  printf("\nDiagonal: %.2f", diagonal);
  
  return 0;
}