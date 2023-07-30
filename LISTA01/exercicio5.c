#include <stdio.h>
#include <math.h>


int main(void) {
  float preco,precopromo, promo80,norma50,dif;
  scanf("%f", &preco);
  
  precopromo = preco - (preco*0.25);
  printf("Valor promocional: %.2f\n", precopromo);

  promo80 = 64*precopromo;
  printf("Promocional com 80%% ocupado:  %.2f\n", promo80);

  norma50 = preco*40;
  printf("Normal com 50%% ocupado: %.2f\n", norma50);

  dif = promo80 - norma50;
  printf("Diferença dos valores: %.2f", dif);

  return 0;
}