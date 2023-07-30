#include <stdio.h>
#include <math.h>


int main(void) {
  float a,b, res;
  scanf("%f", &a);
  scanf("%f", &b);

  //ISOLANDO O PRIMEIRO TERMO
  b = b * (-1);

  //DESCOBRINDO A RAIZ
  res = b/a;

  printf("%.2f", res);
  

  return 0;
}