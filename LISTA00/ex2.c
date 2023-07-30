#include <stdio.h>
//100KW = 1/7 SAL MIN ; 1KW = 1/700 salmin

int main(void) {
  float salMin, precoKw, quantKw, contaKw, contaDesc;
  scanf("%f", &salMin);
  scanf("%f", &quantKw);
  precoKw = salMin/700;
  contaKw = quantKw*precoKw;
  contaDesc = contaKw - contaKw * (0.1);
  printf("Valor do Kw: %.2f", precoKw);
  printf("\nValor a Pagar: %.2f", contaKw);
  printf("\nValor com desconto: %.2f", contaDesc);
  
  return 0;
}