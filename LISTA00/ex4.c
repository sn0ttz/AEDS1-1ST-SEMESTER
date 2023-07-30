#include <stdio.h>
#include <math.h>

int main(void) {
  float raio, perimetro, area;
  scanf("%f", &raio);
  perimetro = 2*M_PI*raio;
  area = M_PI * (pow(raio,2)); 
  printf("\nPerímetro: %.2f", perimetro);
  printf("\nÁrea: %.2f", area);

  
  return 0;
}