#include <stdio.h>
//123

int main(void) {
  int num,mun,c, d, u;
  //printf("Digite um número de 3 dígitos: ");
  scanf ("%d", &num);
  u = num%10;
  d = num%100;
  d = d/10;
  c = num/10;
  c = c/10;
  //printf("%d\n", u);
  //printf("%d\n", d);
  //printf("%d", c);
  u = u*100;
  d = d*10;
  mun = u + d + c;
  printf("%d", mun);
  return 0;
}