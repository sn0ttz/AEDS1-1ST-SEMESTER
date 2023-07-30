#include <stdio.h>

int main(void) {
  float n, num, qtdneg=0, qtdpos=0, qtdzero=0, qtdnum;
  scanf("%f", &num);
  for (int i = 0; i < num; i++)
  {
    scanf ("%f", &n);
    qtdnum++;
    if (n > 0){
      qtdpos++;
    }
    else if (n == 0){
      qtdzero++;
    }
    else{
      qtdneg++;
    }
  }
  printf("Quantidade de positivos: %.2f\n", qtdpos);
  printf("Quantidade de negativos: %.2f\n", qtdneg);
  printf("Quantidade de zeros: %.2f\n", qtdzero);
  printf("Porcentagem de valores positivos = %.2f%%\n", (qtdpos/qtdnum)*100);
  printf("Porcentagem de valores negativos = %.2f%%\n", (qtdneg/qtdnum)*100);
  printf("Porcentagem de zeros = %.2f%%\n", (qtdzero/qtdnum)*100);
}